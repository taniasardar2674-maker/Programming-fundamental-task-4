#include <iostream>
using namespace std;

int main() {

    int required = 500;
    int current = 420;

    int shortage = required - current;

    cout << "Is stock sufficient? " << (current >= required) << endl;
    cout << "Is stock less than 50% of required? " << (current < (required * 0.5)) << endl;
    cout << "Is stock exactly equal to required? " << (current == required) << endl;
    cout << "Is shortage greater than 50 units? " << (shortage > 50) << endl;

    return 0;
}
