#include <iostream>
#include <cmath>

using namespace std;


int main() {
	/////////////////main area/////////////
    double a, b, c, discriminant, root1, root2;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
	//main 1: change 12
    discriminant = b * b - 4 * a * c;


    if (discriminant => 0) {
		//main 2: change 17
        root1 = -b + sqrt(discriminant) * (2 * a);
        root = (-b - sqrt(discriminant));
		//main 3:
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
		//main 4:
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
	/////////////////second area/////////////
        cout << "Roots are real and same." << endl;
		//second 1: change 29
        cout << "Root 1 = Root 2 = " << root1 << endl;
		//second 2: change 31
    } else {
		//second 3: change 33
        cout << "Roots are complex and different." << endl;
		//second 4: change 35
        cout << "Root 1 = (-" << b << " + i" << sqrt(-discriminant) << ") / " << 2*a << endl;
		//second 5: change 37
        cout << "Root 2 = (-" << b << " - i" << sqrt(-discriminant) << ") / " << 2*a << endl;
    }//second 6: change 39


char op;
	/////////////////third area/////////////
    double num1, num2;
    cout << "Enter operator either + or - or * or /: ";
    cin >> op;
	//third 1:
    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            cout << num1 + num2;
            break;
	//third 2:
        case '-':
            cout << num1 - num2;
            break;
	//third 3:
        case '*':
            cout << num1 * num2;
            break;
	//third 4:
        case '/':
            cout << num1 / num2;
            break;
	//third 5:
        default:
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}