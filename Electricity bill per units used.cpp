// Electricity bill per units used.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {

    double units, bill;
    int Fixedcharge = 110;



    cout << "Enter the number of units you used per month" << endl;
    cin >> units;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (units <= 150) {
        bill = units * 5.50 + Fixedcharge;
        cout << " Your bill is equal to R" << bill;

    }
    else if (units > 150 && units <= 300) {
        bill = Fixedcharge + (150 * 5.50) + (units - 150) * 6;
        cout << " Your bill is equal to R" << bill;


    }
    else if (units > 300 && units <= 500) {
        bill = Fixedcharge + (150 * 5.50) + (150 * 6) + (units - 300) * 6.50;
        cout << " Your bill is equal to R" << bill;


    }
    else if (units > 500) {
        bill = Fixedcharge + (150 * 6) + (150 * 5.50) + (200 * 6.50) + (units - 500) * 7;
        cout << " Your bill is equal to R" << bill;


    }



    return 0;

}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
