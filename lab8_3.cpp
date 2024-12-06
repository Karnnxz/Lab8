#include <iostream>
using namespace std;

int main() {

    int Age, Height, Bounty;

    cout << "Enter your age: ";
    cin >> Age;

    if (Age <=25) {

        cout << "Enter your height: ";
        cin >> Height;

        if (Height < 100) {

            cout << "Your character = Chopper";

        } else if (Height < 180) {

            cout << "Your character = Usopp";

        } else {

            cout << "Enter your bounty: ";
            cin >> Bounty;

            if (Bounty > 1100000000) {

            cout << "Your character = Zoro";
            
            } else {

            cout << "Your character = Sanji";

            }

        }

    } else if (Age <= 60) {

        cout << "Enter your bounty: ";
        cin >> Bounty;

        if (Bounty > 500000000) {
            cout << "Your character = Jinbe";
        } else {
            cout << "Your character = Franky";
        }
        
    } else {

        cout << "Your character = Brook";

    }

}