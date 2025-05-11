Overview
This C++ program simulates a restaurant management system that handles customer orders, table management, kitchen operations, and VIP customer prioritization. The system provides a complete workflow from customer seating to order processing and billing.

Features
1. Customer Management
Handles both regular and VIP customers

Implements priority queue system (VIP customers served first)

Tracks customer names and table assignments

2. Menu System
Comprehensive food menu with 6 categories:

Starters

Indian Cuisine

Continental Dishes

Breads & Rice

Desserts

Beverages

Dynamic pricing system with over 30 menu items

3. Order Processing
Add/remove items from orders

Quantity selection for each item

Automatic bill calculation

Discounts for large orders (15% off above ₹2000)

4. Table Management
Tracks 30 tables with occupied/available status

Prevents double-booking of tables

Displays current table status

5. Kitchen Operations
Order queue management

Processes orders in sequence

Tracks table numbers with each order

6. Billing System
Detailed bill generation with:

Table number

Customer name

Date/time stamp

Itemized listing with quantities

Total amount with applicable discounts

7. Customer Feedback
Rating system (1-5 stars)

Thank you message upon departure

Technical Details
Implemented in C++ using object-oriented principles

Uses STL containers:

queue for order management

vector for order items

map for price menu and table status

Time handling with <ctime>

Formatted output with <iomanip>

How to Use
Compile the program with a C++ compiler

Run the executable

Follow the on-screen prompts to:

Enter customer details

Select menu items

Manage orders

Process payments
