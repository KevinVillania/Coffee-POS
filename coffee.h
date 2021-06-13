#ifndef COFFEE_H
#define COFFEE_H

#include <iostream>
#include <string>
using namespace std;

class coffee{

    private:

        string type;
        int sugarLevel;
        string size;
        string hotOrCold;
      
      
    public:
        coffee();
        void SetCoffee(string coffeeType, string coffeeSize, string coffeeHotCold);
        void SetSugarLevel(int sugarLevel);

        string GetCoffeeType();
        string GetCoffeeSize();
        string GetCoffeeTemp();

        void PrintCoffeeDetails();

};

#endif