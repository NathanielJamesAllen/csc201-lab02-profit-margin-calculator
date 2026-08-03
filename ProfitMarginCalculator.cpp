#include <iostream>
//Profit Margin Calculator
using namespace std;


int main(){
// Declaration
float wholesale_cost, inventory_value;
float retail_value, retail_price, profit;
int quantity, unique_id;

// Input
cin >> unique_id;
cout << "Enter the unique identifier" << endl;
cout << "The unique identifier is " << unique_id << "?";
cout << endl << endl;
cin >> quantity;
cin >> wholesale_cost;
cout << "Enter the quantity and the wholesale cost" << endl;
cout << "The order was " << quantity << " items ";
cout << "at a price of $" << wholesale_cost << "?";
cout << endl << endl;

// Processing
inventory_value = quantity*wholesale_cost;
retail_price = wholesale_cost*2;
retail_value = retail_price*quantity;
profit = retail_value-inventory_value;

// Output
cout << "The value of the inventory is $" << inventory_value << endl;
cout << "The profit margin is $" << profit;

}
