#include<iostream>
using namespace std;
int main()
{
    int burgerPrice = 350;
    int drinkPrice = 120;
    int friesPrice = 150;

    // Quantities
    int burgers = 2;
    int drinks = 1;
    int fries = 1;

    // Calculations
    int total = (burgers * burgerPrice) + (drinks * drinkPrice) + (fries * friesPrice);
    float tax = total * 0.07;
    float finalAmount = total + tax;
    float average = (float)total / (burgers + drinks + fries);
    // Output
    cout << "Total Bill: " << total << endl;
    cout << "7% Sales Tax: " << tax << endl;
    cout << "Final Amount: " << finalAmount << endl;
    cout << "Average Cost Per Item: " << average << endl;

    return 0;
}
