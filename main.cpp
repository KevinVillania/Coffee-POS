#include <iostream>
#include "coffee.h"
#include <string>
using namespace std;

//Add calorie computer
int main(){

    coffee customer1;

    customer1.SetCoffee("Arabica","Medium","Hot");
    customer1.SetSugarLevel(50);

    customer1.PrintCoffeeDetails();

    coffee customer2;

    customer2.SetCoffee("Barako","Small","Cold");
    customer2.SetSugarLevel(100);

    customer2.PrintCoffeeDetails();

    string coffeeType = customer1.GetCoffeeType();

    cout << "Customer A coffee type: " << coffeeType;
}