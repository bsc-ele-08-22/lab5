#include<iostream>
using namespace std;

int main() {
    int input;
    cout << "Enter a value between 5 and 10: ";
    cin >> input;

    while (!(input >= 5 && input <= 10)) {
        cin.clear();
        cout << " kumamva!!!!! :  ";
        cin >> input;
        cout << endl;
    }

    printf("Your input value (%d) is valid ", input);
    return 0;
}