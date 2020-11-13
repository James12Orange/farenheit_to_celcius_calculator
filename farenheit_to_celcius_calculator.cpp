#include <iostream>

using namespace std;

void F_to_C(double farenheit);

int main() {
    double fa;
    char again;

    again = 'y';
    while (again == 'y' || again == 'Y'){

        cout << "Please enter a temperature in Farenheit: " << endl;
        cin >> fa;
        F_to_C(fa);
        cout << "Do you want to play again? (Y/n)" << endl;
        cin >> again;
    }
    return 0;
}

void F_to_C(double farenheit)
{
    double Celsius;
    Celsius = 5. / 9. * (farenheit - 32.);
    cout << farenheit << " degrees Farenheit is " << Celsius << " degrees Celsius" << endl;
}
