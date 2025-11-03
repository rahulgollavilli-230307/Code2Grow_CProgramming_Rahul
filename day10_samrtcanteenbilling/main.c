#include <stdio.h>

int main() 
{
    int total_customers, customer_num = 1, item_count, item_code, quantity;
    int item_price, item_total;
    int customer_bill;
    int grand_total = 0, discounted_customers = 0;
    float final_bill;
    printf("Enter total number of customers for the day: ");
    scanf("%d", &total_customers);
    while (customer_num <= total_customers)
     {
        customer_bill = 0;
        printf("\n--- Customer %d ---\n", customer_num);
        printf("MENU CARD:\n");
        printf("Code:Item:Name:Price\n");
        printf("1:Sandwich:80\n");
        printf("2:Burger:120\n");
        printf("3:Pizza Slice:150\n");
        printf("4:Coffee:60\n");
        printf("5:Juice:50\n");
        printf("\nHow many items do you want to order? ");
        scanf("%d",&item_count);
        int i=1;
        while(i<=item_count)
         {
            printf("Enter Item Code and Quantity (e.g., 1 2): ");
            scanf("%d %d", &item_code, &quantity);
            switch (item_code) 
            {
                case 1: item_price = 80;  break;
                case 2: item_price = 120; break;
                case 3: item_price = 150; break;
                case 4: item_price = 60;  break;
                case 5: item_price = 50;  break;
                default:
                    printf("Invalid item code! Please try again.\n");
                    continue;
            }
            item_total = item_price * quantity;
            customer_bill += item_total;
            printf("  -> Item %d: %d x %d = %d\n", i, quantity, item_price, item_total);
            i++;
         }
        printf("\nSubtotal: %d\n", customer_bill);
        if (customer_bill > 500)
         {
            float discount = customer_bill * 0.10f;
            final_bill = customer_bill - discount;
            printf("Discount Applied (10%%%%): %.2f\n", discount);
            discounted_customers++;
        } 
        else
         {
            final_bill = customer_bill;
        }
        printf("FINAL BILL FOR CUSTOMER %d: %.2f\n", customer_num, final_bill);
        printf("----------------------------------------\n");
        grand_total += (int)final_bill;
        customer_num++;
    }
    printf("\n===== CANTEEN DAILY SUMMARY =====\n");
    printf("Total Customers Served: %d\n", total_customers);
    printf("Customers with Discount: %d\n", discounted_customers);
    printf("Total Revenue Today: %d\n", grand_total);
    printf("==================================\n");
    return 0;
}
