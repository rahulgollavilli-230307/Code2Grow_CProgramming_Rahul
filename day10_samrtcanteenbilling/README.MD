# Canteen Billing System

## Author
**Name:** G. Rahul  
**ID:** AP25110090193

## Description
This is a simple C program that simulates a canteen billing system.  
It allows multiple customers to order food items from a fixed menu, calculates their total bill, applies a 10% discount for bills above ₹500, and displays a daily summary.

## Files Included
- **main.c** — The source code for the canteen billing system.
- **build/** — Folder intended for build outputs (e.g., compiled binaries).
- **README.md** — This documentation file.

## Compilation Instructions
To compile and run this program:

```bash
gcc main.c -o build/canteen_billing
./build/canteen_billing
```

## Features
- Displays a predefined menu with item codes and prices.
- Calculates total bill based on customer orders.
- Applies 10% discount for bills exceeding ₹500.
- Tracks total revenue and discounted customers for the day.

## Example
```
Enter total number of customers for the day: 2

--- Customer 1 ---
MENU CARD:
Code:Item:Name:Price
1:Sandwich:80
2:Burger:120
3:Pizza Slice:150
4:Coffee:60
5:Juice:50
```

## License
This project is for educational purposes only.
