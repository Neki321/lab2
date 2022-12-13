#include <iostream>
#include <cmath>
using namespace std;
void main()
{
    double a, b, c;
    char n;
    cout << "Enter math action " << endl;
    cin >> n;
    cout << "Input a " << endl;
    cin >> a;
    cout << "Input b " << endl;
    cin >> b;
    switch (n)
    {
        case '+': 
        {
            c = a + b;
            break; 
        }
        case '-':
        {
            c = a - b;
            break; 
        }
        case '*':
        {
            c = a * b;
            break;
        }
        case '/':
        {
            c = a / b;
            break; 
        }
        case '√':
        {
            c = sqrt(b);
            break;
        }
                            
        case '^':
        {
            c = pow(a, b);
            break;
        }
        default:
        {
            cout << "Error" << endl;
        }
       }
    cout << c;
}

