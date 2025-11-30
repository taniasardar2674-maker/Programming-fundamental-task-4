#include <iostream>
using namespace std;

int main() {

    float ticket = 1200;
    
    float discount = ticket * 0.25;   // 25% discount
    float priceAfterDiscount = ticket - discount;

    float serviceCharges = priceAfterDiscount * 0.08; // 8% charges
    float afterService = priceAfterDiscount + serviceCharges;

    float finalPrice = afterService + 50; // booking fee

    cout << "Final Ticket Price: " << finalPrice << endl;

    return 0;
}
