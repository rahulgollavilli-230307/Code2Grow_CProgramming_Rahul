G.Rahul
AP25110090193  
#include <stdio.h>
#define max_products 20
#define rack_size 3
int productID[max_products];
int quantity[max_products];
int price[max_products];
int num_products = 0;
int rack[rack_size][rack_size];
void addproduct();
int findproduct(int id);
void searchproduct();
void updatequantity();
void rackreport();
void stockvaluereport();
void displayproducts();
int main()
{
    int choice;
    for(int i = 0; i < rack_size; i++)
        for(int j = 0; j < rack_size; j++)
            rack[i][j] = 0;
    while(1) 
{
        printf("Warehouse management system:
");
        printf("1. add product:
");
        printf("2. search product:
");
        printf("3. update product quantity:
");
        printf("4. generate rack report:
");
        printf("5. calculate stock values:
");
        printf("6. display all products:
");
        printf("7. exit:
");
        printf("enter choice:");
        scanf("%d", &choice);
        switch(choice) {
            case 1: addproduct(); break;
            case 2: searchproduct(); break;
            case 3: updatequantity(); break;
            case 4: rackreport(); break;
            case 5: stockvaluereport(); break;
            case 6: displayproducts(); break;
            case 7: return 0;
            default: printf("invalid choice!
"); break;
        }
    }
}

void addproduct() {
    if(num_products >= max_products) {
        printf("product list is full:
");
        return;
    }
    int id, qty, prc;
    printf("enter product id:");
    scanf("%d", &id);
    if(findproduct(id) != -1) {
        printf("duplicate id. not allowed:
");
        return;
    }
    printf("enter quantity:");
    scanf("%d", &qty);
    if(qty <= 0) {
        printf("quantity must be positive:
");
        return;
    }
    printf("enter price:");
    scanf("%d", &prc);
    if(prc <= 0) {
        printf("price must be positive:
");
        return;
    }
    productID[num_products] = id;
    quantity[num_products] = qty;
    price[num_products] = prc;
    num_products++;
    printf("product added successfully:
");
}

int findproduct(int id) {
    for(int i = 0; i < num_products; i++)
        if(productID[i] == id)
            return i;
    return -1;
}

void searchproduct() {
    int id;
    printf("enter product id to search:");
    scanf("%d", &id);
    int idx = findproduct(id);
    if(idx == -1)
        printf("not found:
");
    else
        printf("found!
 ID is %d, quantity is %d, price is %d:
", productID[idx], quantity[idx], price[idx]);
}

void updatequantity() {
    int id, change, idx;
    printf("enter product id to update:");
    scanf("%d", &id);
    idx = findproduct(id);
    if(idx == -1) {
        printf("product not found!
");
        return;
    }
    printf("enter positive value to increase and negative value to decrease:
");
    scanf("%d", &change);
    if(quantity[idx] + change < 0) {
        printf("new quantity would be negative! operation cancelled!
");
        return;
    }
    quantity[idx] += change;
    printf("quantity updated! current quantity is %d
", quantity[idx]);
}

void rackreport() {
    printf("enter current distribution in 3*3 rack matrix:
");
    int maxstock, minstock, maxrow = 0, maxcol = 0, minrow = 0, mincol = 0, totalstock = 0;
    for(int i = 0; i < rack_size; i++) {
        for(int j = 0; j < rack_size; j++) {
            printf("rack[%d][%d]:", i, j);
            scanf("%d", &rack[i][j]);
        }
    }
    maxstock = minstock = rack[0][0];
    for(int i = 0; i < rack_size; i++) {
        for(int j = 0; j < rack_size; j++) {
            if(rack[i][j] > maxstock) {
                maxstock = rack[i][j];
                maxrow = i;
                maxcol = j;
            }
            if(rack[i][j] < minstock) {
                minstock = rack[i][j];
                minrow = i;
                mincol = j;
            }
            totalstock += rack[i][j];
        }
    }
    printf("max stock is %d at (%d,%d)
", maxstock, maxrow, maxcol);
    printf("min stock is %d at (%d,%d)
", minstock, minrow, mincol);
    printf("total items in rack is %d
", totalstock);
}

void stockvaluereport() {
    if(num_products == 0) {
        printf("products unavailable!
");
        return;
    }
    int maxvalue = quantity[0] * price[0];
    int minvalue = quantity[0] * price[0];
    int totalvalue = 0, maxindex = 0, minindex = 0;
    for(int i = 0; i < num_products; i++) {
        int stockvalue = quantity[i] * price[i];
        printf("product id is %d, stock value is %d
", productID[i], stockvalue);
        totalvalue += stockvalue;
        if(stockvalue > maxvalue) {
            maxvalue = stockvalue;
            maxindex = i;
        }
        if(stockvalue < minvalue) {
            minvalue = stockvalue;
            minindex = i;
        }
    }
    printf("highest stock value product id is %d(value is %d)
", productID[maxindex], maxvalue);
    printf("lowest stock value product id is %d(value is %d)
", productID[minindex], minvalue);
    printf("total warehouse value is %d
", totalvalue);
}

void displayproducts() {
    if(num_products == 0) {
        printf("products unavailable!
");
        return;
    }
    printf("ID\tQuantity\tPrice\tStockValue
");
    for(int i = 0; i < num_products; i++) {
        printf("%d\t%d\t\t%d\t%d
", productID[i], quantity[i], price[i], quantity[i]*price[i]);
    }
}
