/*
FileName: Chapter3Exercise6-IngredientAdjuster.cpp
Programmer: Morgan Thorne
Date: February 2025
Requirements:
Write a program that asks the user how many cookies they want to make,
then display the number of cups pf each ingredient needed for the specified number of cookies
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Original recipe for the cookies
    double cookies = 48,
        cupsofSugar = 1.5,
        cupsofButter = 1,
        cupsofFlour = 2.75;

    //Variable for the needed amounts of ingredients
    double neededCookies,
        neededSugar,
        neededButter,
        neededFlour;

    cout << "How many cookies do you want to bake? ";
    cin >> neededCookies;

    //Equation for figuring out the ratios of needed ingredients
    neededSugar = (neededCookies * cupsofSugar)/cookies;
    neededButter = (neededCookies * cupsofButter)/cookies;
    neededFlour = (neededCookies * cupsofFlour)/cookies;

    cout << "For the sugar you will need " <<fixed<< setprecision(1) << neededSugar << " cups!" << endl;
    cout << "For the butter you will need " << fixed << setprecision(1) << neededButter << " cups!" << endl;
    cout << "For the flour you will need " << fixed << setprecision(1) << neededFlour << " cups!" << endl;


}

