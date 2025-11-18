
📦 Warehouse Management System (C Program)

📘 Overview

This project is a simple Warehouse Management System written in the C programming language.
It allows you to manage product information, update stock, analyze warehouse rack data, and generate useful reports.

The program uses arrays to store product details, provides a menu-driven interface, and includes essential warehouse operations such as searching products, updating quantities, checking stock values, and more.
---

🚀 Features

✅ 1. Add Product

Add new products with ID, quantity, and price

Automatically prevents duplicates

Ensures quantity and price are positive


🔍 2. Search Product

Search by product ID

Displays matching product details (ID, quantity, price)


🔄 3. Update Product Quantity

Increase or decrease product quantity

Prevents negative stock


🗃️ 4. Rack Report (3x3 Rack Matrix)

Enter stock distribution into a rack matrix

Finds:

Maximum stock location

Minimum stock location

Total stock in rack



💰 5. Stock Value Report

Calculates total stock value for every product

Identifies:

Highest valued product

Lowest valued product

Total warehouse value



📋 6. Display All Products

Tabular display of:


ID | Quantity | Price | Stock Value

❌ 7. Exit Program


---

📦 File Information

warehouse_system.c

Contains the complete implementation of:

Product management

Rack analysis

Reports and display functions

Menu-driven interface



---

🛠️ How to Compile & Run

Using GCC

gcc warehouse_system.c -o warehouse
./warehouse

Using Windows (MinGW)

gcc warehouse_system.c -o warehouse.exe
warehouse.exe

📞 Author

Name: G. Rahul
Roll No: AP25110090193
