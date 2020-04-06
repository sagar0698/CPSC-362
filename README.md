# CPSC-362 Assingment 3

Problem Domain:
This app allows customers to order food and have the option to have it delivered to their location, or they can pick up the order. This application allows the user to either stay put in that exact spot and won’t require them to go to the restaurant to pick up their food or head to the restaurant and pick up their order when completed.
Architectural Pattern:
Blockchain (IBM) - Storing user information that can’t be altered. For example, history orders can’t be changed since the order has already happened and completed. This would be an efficient way to store transactions and make less things complicated.
Design Characteristics:
Interface Design Principle (Chapter 11) - assist those who need specific clients. For example:
-	Customers would have the normal application that is designed to meet with their necessities: find restaurants, order food, and choose between pick-up or delivery. They are also able to view how long the order will take, receive notifications when their order is ready, and have real-time tracking services so they see the delivery driver bring their food.
-	Businesses would have the same application but with a few modifications that would accommodate with: receiving orders, able to contact with customers, provide transition stages to show the customer how long it will take, and notifying customers when the food is ready to be picked up or delivered. Businesses can also contact customers in case there i
This provides an easier, simplified process to have different interfaces of the same application in order to accommodate with the customer and the restaurant.

Primitiveness (Chapter 9) - Each class would focus on providing one service, getting customers their food and providing customer service. 
- The customer interface is focused primarily on providing restaurants near the user's location and aim to deliver the best customer service. 
- The business interface is focused to deliver the customers’ needs and keep in contact with them as they are preparing their food.

Usage Scenarios (Chapter 13) - Real World breakdown of the application
User:
- user would login into the application
- add payment information
- select either carry-out or delivery
- search for restaurants 
- select food from their menu
- order and pay 

Business:
- obtain user's order
- make their food
- notify the user throughout the process
- notify user that food is ready to be either picked up or deliver
