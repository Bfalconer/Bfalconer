#include <iostream>
#include <cmath>
using namespace std;


int main() {

    double a = 0;
    double b = 0;
    double c = 0;
    double radical = 0;
    char userChoice = 'n';
    double root = 0;
    double answer = 0;
    double x = 0;
    double y = 0;

    cout << "+--------------------------------------+" << endl;
    cout << "|         Quadratic Calculator         |" << endl;
    cout << "|           (ax^2 + bx + c)            |" << endl;
    cout << "+--------------------------------------+" << endl;
    cout << "       Perform a quadratic? (y/n): ";

    cin >> userChoice;
        
        while (userChoice != 'y' && userChoice != 'Y' && userChoice != 'n' && userChoice != 'N') {
            cout << "You seem to be having issues, let's try again." << endl;
            cout << "       Perform a Quadratic? (y/n): ";
            cin >> userChoice;
        }

        if (userChoice == 'n' || userChoice == 'N') {
            cout << "Then why are you here? ";
        }
    

        while (userChoice == 'Y' || userChoice == 'y') {

            cout << "Enter a: ";
            cin >> a;
            cout << "Enter b: ";
            cin >> b;
            cout << "Enter c: ";
            cin >> c;

            radical = pow(b, 2) - (4 * a * c);
            root = sqrt(radical);

            if (a == 0) {
                answer = -c / b;
                cout << "Not quadratic, but the answer is: " << answer << endl;
            }

            if (a != 0 && b == 0 && c < 0) {
                answer = sqrt(-c / a);
                cout << "Not quadratic, but the answer is: " << answer << ", -" << answer << endl;
            }

            if (a != 0 && b == 0 && c >= 0) {
                answer = sqrt(c / a);
                cout << "Not Quadratic, but the answer is: " << answer << " i, " << "-" << answer << " i." << endl;
            }

            if (radical < 0 && a != 0 && b != 0) {
                root = sqrt(-radical);
                x = (-b + root) / (2 * a);
                y = (-b - root) / (2 * a);
                cout << "The answers are: " << x << " i, " << y << " i." << endl;
            }

            if (a != 0 && b != 0 && radical >= 0) {
                x = (-b + root) / (2 * a);
                y = (-b - root) / (2 * a);

                cout << "The answers are: " << x << ", " << y << "." << endl;
            }


            cout << "Would you like to do another? (y/n): ";
            cin >> userChoice;

            while (userChoice != 'y' && userChoice != 'Y' && userChoice != 'n' && userChoice != 'N') {
                cout << "You seem to be having issues, let's try again." << endl;
                cout << "Would you like to do another? (y/n): ";
                cin >> userChoice;
            }
        }
        if (userChoice == 'n' || userChoice == 'N') {
            cout << "Goodbye!";
        }
    system("pause > 0");
    return 0;
}