#include <iostream>
#include <cmath>
using namespace std;
void makePythMenu(){
    int n;
    double x, y;
    cout << "1) Calculate a leg\n2) Calculate the hypotenuse\n";
    cin >> n;
    if (n == 1){
        cout << "Please enter the length of the hypotenuse:\n";
        cin >> x;
        cout << "Please enter the length of the leg:\n";
        cin >> y;
        cout << "The length of the second leg is " << sqrt(pow(x, 2) - pow(y, 2)) << "\n";
    } else if (n == 2){
        cout << "Please enter the length of the first leg:\n";
        cin >> x;
        cout << "Please enter the length of the second leg:\n";
        cin >> y;
        cout << "The length of the hypotenuse is " << sqrt(pow(x, 2) + pow(y, 2)) << "\n";
    } else makePythMenu();
    return;
}
void makeQuadMenu(){
    double a, b, c;
    cout << "Please enter a, b, and c separated by spaces:\n";
    cin >> a >> b >> c;
    if (a == 0 || 4*a*c > pow(b, 2)){
        cout << "Your input will produce an imaginary answer, please provide new numbers.";
        makeQuadMenu();
    } else {
        cout << "The results are " << ((-1 * b) + sqrt(pow(b, 2)-(4*a*c))/(2*a)) << " and " << ((-1 * b) - sqrt(pow(b, 2)-(4*a*c))/(2*a)) << "\n";
    }
}
void makeMainMenu(){
    int n, xi, yi;
    double x, y;
    cout << "1) Add\n2) Subtract\n3) Multiply\n4) Divide\n5) Modulus\n6) Pythagorean Theorem\n7) Quadratic Formula\n8) Exponent\n9) Root\n";
    cin >> n;
    switch(n){
        case 1:
            cout << "Please enter two numbers to add separated by a space:\n";
            cin >> x >> y;
            cout << "The result of " << x << " + " << y << " is " << x+y << "\n";
            break;
        case 2:
            cout << "Please enter two numbers to subtract separated by a space:\n";
            cin >> x >> y;
            cout << "The result of " << x << " - " << y << " is " << x-y << "\n";
            break;
        case 3:
            cout << "Please enter two numbers to multiply separated by a space:\n";
            cin >> x >> y;
            cout << "The result of " << x << " * " << y << " is " << x*y << "\n";
            break;
        case 4:
            cout << "Please enter two numbers to divide separated by a space:\n";
            cin >> x >> y;
            cout << "The result of " << x << " / " << y << " is " << x/y << "\n";
            break;
        case 5:
            cout << "Please enter the larger integer:\n";
            cin >> xi;
            cout << "Please enter the smaller integer:\n";
            cin >> yi;
            cout << "The result of " << xi << " mod " << yi << " is " << xi%yi << "\n";
            break;
        case 6:
            makePythMenu();
            break;
        case 7:
            makeQuadMenu();
            break;
        case 8:
            cout << "Please enter the base:\n";
            cin >> x;
            cout << "Please enter the exponent:\n";
            cin >> y;
            cout << "The result of " << x << " ^ " << y << " is " << pow(x, y) << "\n";
            break;
        case 9:
            cout << "Please enter the radicand:\n";
            cin >> x;
            cout << "Please enter the power of the radical:\n";
            cin >> y;
            cout << "The result of " << x << " ^ " << y << " is " << pow(x, (1/y)) << "\n";
            break;
        default:
            cout << "The input you provided is invalid. Try again.\n";
            makeMainMenu();
            break;
    }
    makeMainMenu();
}

int main() {
    cout << "Please select a function:" << endl;
    makeMainMenu();
    return 0;
}