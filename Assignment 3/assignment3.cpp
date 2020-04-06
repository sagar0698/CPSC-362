#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string name;
    int option, restuarant;
    char answer, choice;
    double a = 5.99, b = 4.99, c = 4.99, d = 5.99, e = 9.99;
    double f = 1.99, g = 2.99, h = 3.99, i = 4.99, j = 5.99;
    double totalprice;
    const double tax = 0.13;
    
    ofstream customerOrder;
    customerOrder.open("food.txt");     //This stores the users information for the restaurant

    /*-------------Beginning of application-----------------------------------------*/
    if (customerOrder.is_open())
    {
        cout << "Welcome to the ordering application" << endl;
        cout << "Enter your name: ";
        cin >> name;
        customerOrder << name << endl;  //The information will be delivered to the restaurant
        
        cout << "\nWelcome " << name << endl;
        cout << "Thank you for choosing us! Please select the numeric option below" << endl;
        cout << "1. Carry Out" << endl;
        cout << "2. Delivery" << endl;
        cout << "3. Quit" << endl;
        cin >> option;
        customerOrder << "Selected: " << option << endl;    //The information will be delivered to the restaurant
        
        switch(option)
        {
            /*-------------Carry Out-----------------------------------------*/
            case 1:
            cout << "\nYou have selected Carry Out" << endl;
            cout << "Select the numeric option of restuarants near your location: "<< endl;
            cout << "1. Taco Bell" << endl;
            cout << "2. McDonalds" << endl;
            cin >> restuarant;
            
            customerOrder << "Selected: " << restuarant << endl;    //The information will be delivered to the restaurant
            
            /*-------------Taco Bell-----------------------------------------*/
            if (restuarant == 1)
            {
                do 
                {
                    cout << name << "! You hace chosen Taco Bell. Here is the menu" << endl;
                    cout << "-------Menu----------------" << endl;
                    cout << "A: Chalupa - $" << a << endl;
                    cout << "B: Beefy Fritos Burrito - $" << b << endl;
                    cout << "C: Spicy Potato Soft Taco - $" << c << endl;
                    cout << "D: Crunchwrap - $" << d << endl;
                    cout << "E: Spicy Chicken Quesadilla - $" << e << endl;
                    
                    cout << "\nWould you like to order something? 'Y'or 'N'\n" << endl;
                    cin >> answer;
                    
                    while (answer == 'y' || answer == 'Y')
                    {
                        cout << "Your choice?" << endl;
                        cin >> choice;

                        if (choice == 'A' || choice == 'a')
                        {
                            cout << "\nA: Chalupa" << a << endl;
                            totalprice = totalprice + a;
                        }
                        else if (choice == 'B' || choice == 'b') {
                            cout << "B: Beefy Fritos Burrito" << b << endl;
                            totalprice = totalprice + b;
                        }
                        else if (choice == 'C' || choice == 'c') {
                            cout << "C: Spicy Potato Soft Taco" << c << endl;
                            totalprice = totalprice + c;
                        }
                        else if (choice == 'D' || choice == 'd') {
                            cout << "D: Crunchwrap " << d << endl;
                            totalprice = totalprice + d;
                        }
                        else if (choice == 'E' || choice == 'e') {
                            cout << "E: Spicy Chicken Quesadilla " << e << endl;
                            totalprice = totalprice + e;
                        }
                        cout << "\nAre there any additional orders? Y or N\n" << endl;
                        cin >> answer;
                        if (answer == 'N' || answer == 'n')
                        {
                            totalprice == (totalprice * tax);
                            cout << "Your total is " << totalprice << ". Thank you for choosing Taco Bell." << endl;
                            cout << "Your order will be ready in 10 minutes" << endl;
                            customerOrder << choice;    //The information will be delivered to the restaurant
                            customerOrder << totalprice;    //The information will be delivered to the restaurant
                        }
                    } // ends while loop
                }  // ends do loop
                while (answer=='y' || answer=='Y');

                /*-------------End of Application-----------------------------------------*/
                cout << "Thank you for choosing our ordering application" << endl;
                cout << "See you next time" << endl;
                return 0;
            }
            
            /*-------------McDonalds-----------------------------------------*/
            else if (restuarant == 2)
            {
                do 
                {
                    cout << name << "! You hace chosen McDonalds. Here is the menu" << endl;
                    cout << "-------Menu----------------" << endl;
                    cout << "F: McChicken - $" << f << endl;
                    cout << "G: McRib - $" << g << endl;
                    cout << "H: McDouble - $" << h << endl;
                    cout << "I: McFlurry - $" << i << endl;
                    cout << "J: Big Mac - $" << j << endl;
                    
                    cout << "\nWould you like to order something? 'Y'or 'N'\n" << endl;
                    cin >> answer;
                    
                    while (answer == 'y' || answer == 'Y')
                    {
                        cout << "Your choice?" << endl;
                        cin >> choice;

                        if (choice == 'F' || choice == 'f')
                        {
                            cout << "\nF: McChicken\n" << f << endl;
                            totalprice = totalprice + f;
                        }
                        else if (choice == 'G' || choice == 'g') {
                            cout << "B: McRib" << g << endl;
                            totalprice = totalprice + g;
                        }
                        else if (choice == 'H' || choice == 'h') {
                            cout << "H: McDouble" << h << endl;
                            totalprice = totalprice + h;
                        }
                        else if (choice == 'I' || choice == 'i') {
                            cout << "I: McFlurry " << i << endl;
                            totalprice = totalprice + i;
                        }
                        else if (choice == 'J' || choice == 'j') {
                            cout << "J: Big Mac " << j << endl;
                            totalprice = totalprice + j;
                        }
                        cout << "\nAre there any additional orders? Y or N\n" << endl;
                        cin >> answer;
                        if (answer == 'N' || answer == 'n')
                        {
                            totalprice == (totalprice * tax);
                            cout << "Your total is " << totalprice << ". Thank you for choosing McDonalds." << endl;
                            cout << "Your order will be ready in 10 minutes" << endl;
                            customerOrder << choice;    //The information will be delivered to the restaurant
                            customerOrder << totalprice;    //The information will be delivered to the restaurant
                        }
                    } // ends while loop
                }  // ends do loop
                while (answer=='y' || answer=='Y');

                /*-------------End of Application-----------------------------------------*/
                cout << "Thank you for choosing our ordering application" << endl;
                cout << "See you next time" << endl;
                return 0;
            }
            
            
            return 0;
            
            /*-------------Delivery-----------------------------------------*/
            case 2:
            cout << "You have selected Delivery" << endl;
            cout << "Select the numeric option of restuarants near your location: "<< endl;
            cout << "1. Taco Bell" << endl;
            cout << "2. McDonalds" << endl;
            cin >> restuarant;
            
            customerOrder << "Selected: " << restuarant << endl;    //The information will be delivered to the restaurant
            
            /*-------------Taco Bell-----------------------------------------*/
            if (restuarant == 1)
            {
                do 
                {
                    cout << name << "! You hace chosen Taco Bell. Here is the menu" << endl;
                    cout << "-------Menu----------------" << endl;
                    cout << "A: Chalupa - $" << a << endl;
                    cout << "B: Beefy Fritos Burrito - $" << b << endl;
                    cout << "C: Spicy Potato Soft Taco - $" << c << endl;
                    cout << "D: Crunchwrap - $" << d << endl;
                    cout << "E: Spicy Chicken Quesadilla - $" << e << endl;
                    
                    cout << "\nWould you like to order something? 'Y'or 'N'\n" << endl;
                    cin >> answer;
                    
                    while (answer == 'y' || answer == 'Y')
                    {
                        cout << "Your choice?" << endl;
                        cin >> choice;

                        if (choice == 'A' || choice == 'a')
                        {
                            cout << "\nA: Chalupa\n" << a << endl;
                            totalprice = totalprice + a;
                        }
                        else if (choice == 'B' || choice == 'b') {
                            cout << "B: Beefy Fritos Burrito" << b << endl;
                            totalprice = totalprice + b;
                        }
                        else if (choice == 'C' || choice == 'c') {
                            cout << "C: Spicy Potato Soft Taco" << c << endl;
                            totalprice = totalprice + c;
                        }
                        else if (choice == 'D' || choice == 'd') {
                            cout << "D: Crunchwrap " << d << endl;
                            totalprice = totalprice + d;
                        }
                        else if (choice == 'E' || choice == 'e') {
                            cout << "E: Spicy Chicken Quesadilla " << e << endl;
                            totalprice = totalprice + e;
                        }
                        cout << "\nAre there any additional orders? Y or N\n" << endl;
                        cin >> answer;
                        if (answer == 'N' || answer == 'n')
                        {
                            totalprice == (totalprice * tax);
                            cout << "Your total is " << totalprice << ". Thank you for choosing Taco Bell." << endl;
                            cout << "Your order will be delivered to you in 45 minutes" << endl;
                            customerOrder << choice;    //The information will be delivered to the restaurant
                            customerOrder << totalprice;    //The information will be delivered to the restaurant
                        }
                    } // ends while loop
                }  // ends do loop
                while (answer=='y' || answer=='Y');

                /*-------------End of Application-----------------------------------------*/
                cout << "Thank you for choosing our ordering application" << endl;
                cout << "See you next time" << endl;
                return 0;
            }
            
            /*-------------McDonalds-----------------------------------------*/
            else if (restuarant == 2)
            {
                do 
                {
                    cout << name << "! You hace chosen McDonalds. Here is the menu" << endl;
                    cout << "-------Menu----------------" << endl;
                    cout << "F: McChicken - $" << f << endl;
                    cout << "G: McRib - $" << g << endl;
                    cout << "H: McDouble - $" << h << endl;
                    cout << "I: McFlurry - $" << i << endl;
                    cout << "J: Big Mac - $" << j << endl;
                    
                    cout << "\nWould you like to order something? 'Y'or 'N'\n" << endl;
                    cin >> answer;
                    
                    while (answer == 'y' || answer == 'Y')
                    {
                        cout << "Your choice?" << endl;
                        cin >> choice;

                        if (choice == 'F' || choice == 'f')
                        {
                            cout << "\nF: McChicken\n" << f << endl;
                            totalprice = totalprice + f;
                        }
                        else if (choice == 'G' || choice == 'g') {
                            cout << "B: McRib" << g << endl;
                            totalprice = totalprice + g;
                        }
                        else if (choice == 'H' || choice == 'h') {
                            cout << "H: McDouble" << h << endl;
                            totalprice = totalprice + h;
                        }
                        else if (choice == 'I' || choice == 'i') {
                            cout << "I: McFlurry " << i << endl;
                            totalprice = totalprice + i;
                        }
                        else if (choice == 'J' || choice == 'j') {
                            cout << "J: Big Mac " << j << endl;
                            totalprice = totalprice + j;
                        }
                        cout << "\nAre there any additional orders? Y or N\n" << endl;
                        cin >> answer;
                        if (answer == 'N' || answer == 'n')
                        {
                            totalprice == (totalprice * tax);
                            cout << "Your total is " << totalprice << ". Thank you for choosing McDonalds." << endl;
                            cout << "Your order will be delivered to you in 45 minutes" << endl;
                            customerOrder << choice;    //The information will be delivered to the restaurant
                            customerOrder << totalprice;    //The information will be delivered to the restaurant
                        }
                    } // ends while loop
                }  // ends do loop
                while (answer=='y' || answer=='Y');

                /*-------------End of Application-----------------------------------------*/
                cout << "Thank you for choosing our ordering application" << endl;
                cout << "See you next time" << endl;
                return 0;
            }
            
            
            //case 3 - Quit
            case 3:
            cout << "Exiting application, thank you and have a nice day" << endl;
            exit(1);
        }
        customerOrder.close();
     
    }
    else cout << "Unable to open file" << endl;
    
    return 0;
}
