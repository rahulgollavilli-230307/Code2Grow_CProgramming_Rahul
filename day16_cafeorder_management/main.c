#include <stdio.h>
int main() 
{
    int prices[5] = {50,30, 80, 120, 60};   
    char items[5][20] = {"coffee","tea","sandwich","burger","pastry"};
    int quantity_sold[5] = {0};        
    int num_customers;
    int total_revenue = 0;
    int total_items_sold = 0;
    printf(" Cafe Order Management System:\n");
    printf("Enter total number of customers (max 10): ");
    scanf("%d", &num_customers);
    if (num_customers > 10 || num_customers <= 0) {
        printf("Invalid number of customers! Please restart the program.\n");
        return 0;
    }
    for (int c = 1; c <= num_customers; c++) 
    {
        int num_items;
        int total_bill = 0;
        printf("\n--- Customer %d ---\n", c);
        printf("Enter number of items: ");
        scanf("%d", &num_items);
        printf("Enter item number and quantity:\n");
        for (int i = 0; i < num_items; i++) 
        {
            int item_no, qty;
            scanf("%d %d", &item_no, &qty);
            if (item_no < 1 || item_no > 5)
             {
                printf("Invalid item number! Skipping...\n");
                continue;
            }
            int item_index = item_no - 1;
            int item_total = prices[item_index] * qty;
            total_bill += item_total;
            quantity_sold[item_index] += qty;
            total_items_sold += qty;
        }
        printf("Total Bill for Customer %d: ₹%d\n", c, total_bill);
        total_revenue += total_bill;
    }
    int most_ordered_index = 0, least_ordered_index = 0;
    for (int i = 1; i < 5; i++) 
    {
        if (quantity_sold[i] > quantity_sold[most_ordered_index])
            most_ordered_index = i;
        if (quantity_sold[i] < quantity_sold[least_ordered_index])
            least_ordered_index = i;
    }
    printf("Cafe Summary:\n");
    printf("Total Revenue: %d\n", total_revenue);
    printf("Total Items Sold: %d\n", total_items_sold);
    printf("Most Ordered Item: %s\n", items[most_ordered_index]);
    printf("Least Ordered Item: %s\n", items[least_ordered_index]);
    printf("================================\n");
    return 0;
}
