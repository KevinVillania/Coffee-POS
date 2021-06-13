#include <iostream>
#include "coffee.h"
#include <string>
using namespace std;

coffee::coffee(){

    sugarLevel = 0;
}

void coffee::SetCoffee(string coffeeType, string coffeeSize, string coffeeHotCold){

    type = coffeeType;
    size = coffeeSize;
    hotOrCold = coffeeHotCold; 

}

void coffee::SetSugarLevel(int sugar){

    sugarLevel = sugar;
}

std::string coffee::GetCoffeeSize(){

    return size;
}

std::string coffee::GetCoffeeType(){

    return type;
}

std::string coffee::GetCoffeeTemp(){

    return hotOrCold;
}

void coffee::PrintCoffeeDetails(){

    std::cout << "Customer order" << std::endl;
    std::cout << "Coffee Type: " << type << std::endl;
    std::cout << "Sugar level: " << sugarLevel << std::endl;
    std::cout << "Size: " << size << std::endl;
    std::cout << "Temperature: " << hotOrCold << std::endl;
    
}