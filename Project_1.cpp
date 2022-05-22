#include <iostream>
#include <cmath>
using namespace std;

class Simple_Calculator
{
protected:
    int a, b;

public:
    int Add(int x, int y)
    {
        a = x;
        b = y;
        cout << "\n***********ADD***********" << endl
             << endl;
        cout << "The sum of a and b is : " << a + b << endl
             << endl;
        return 0;
    }
    int Subtract(int x, int y)
    {
        a = x;
        b = y;
        cout << "\n**********Subtract***********" << endl
             << endl;
        cout << "The sum of a and b is : " << a - b << endl
             << endl;
        return 0;
    }
    int Multiply(int x, int y)
    {
        a = x;
        b = y;
        cout << "\n**********Multiply***********" << endl
             << endl;
        cout << "The sum of a and b is : " << a * b << endl
             << endl;
        return 0;
    }
    int Divide(int x, int y)
    {
        a = x;
        b = y;
        cout << "\n**********Divide***********" << endl
             << endl;
        cout << "The sum of a and b is : " << a / b << endl
             << endl;
        return 0;
    }
};
class Scientific_Calculator
{
protected:
    float A, B;

public:
    void setfunction(float x, float y)
    {
        A = x;
        B = y;
    }
    float Sine(float x)
    {
        cout << "\nEnter the value of x to be answered in sinx terms : ";
        cin >> A;
        cout << "\nThe required solution sin(" << A << ") is : " << sin(A) << endl;
        return 0;
    }
    float Cosine(float x)
    {
        cout << "\nEnter the value of x to be answered in cosx terms : ";
        cin >> A;
        cout << "\nThe required solution cos(" << A << ") is : " << sin(A) << endl;

        return 0;
    }
    float Tangent(float x)
    {
        cout << "\nEnter the value of x to be answered in tanx terms : ";
        cin >> A;
        cout << "\nThe required solution tan(" << A << ") is : " << sin(A) << endl;
        return 0;
    }
    float Cosecant(float x)
    {
        cout << "\nEnter the value of x to be answered in cosecx terms : ";
        cin >> A;
        cout << "\nThe required solution cosec(" << A << ") is : " << sin(A) << endl;

        return 0;
    }
    float Secant(float x)
    {
        cout << "\nEnter the value of x to be answered in secx terms : ";
        cin >> A;
        cout << "\nThe required solution sec(" << A << ") is : " << sin(A) << endl;
        return 0;
    }
    float Cotangent(float x)
    {
        cout << "\nEnter the value of x to be answered in cotx terms : ";
        cin >> A;
        cout << "\nThe required solution cot(" << A << ") is : " << sin(A) << endl;
        return 0;
    }
    float Logarithm(float x)
    {
        cout << "\nEnter the value of x which is to be comverted into logaritm of x that is log(x)" << endl;
        cin >> A;
        cout << "\nThe required solution log(" << A << ") is : " << sin(A) << endl;
        return 0;
    }
    float Antilogarithm(float x)
    {
        cout << "\nEnter the value of x which is to be comverted into antilogaritm of x that is antilog(x)" << endl;
        cin >> A;
        cout << "\nThe required solution antilog(" << A << ") is : " << sin(A) << endl;
        return 0;
    }
    float Power(float x, float y)
    {
        cout << "\nEnter the base number : ";
        cin >> A;
        cout << "\nEnter the power to be applied to the base number : ";
        cin >> B;
        cout << "\nThe required solution of " << A << "^" << B << " is " << pow(A, B) << endl;
        return 0;
    }
    float Squareroot(float x, float y)
    {
        cout << "\nEnter the base number : ";
        cin >> A;
        cout << "\nEnter the squareroot times to be applied to the base number : ";
        cin >> B;
        cout << "\nThe required solution of " << A << "^" << B << " is " << pow(A, B) << endl;
        return 0;
    }
};

int main()
{
    Simple_Calculator user1;
    Scientific_Calculator user2;
    float x, y;
    int num1, num2, num3, num4, num5, num6, num7, num8;
    cout << "\nChoose the type of operation to be done : " << endl
         << "1.Simple Calculator " << endl
         << "2.Scientific Calculator " << endl
         << "Enter your choice : ";
    cin >> num1;
    switch (num1)
    {
    case 1:
        cout << "\nChoose the type of operation to be done further : " << endl
             << "1.Add " << endl
             << "2.Subtract " << endl
             << "3.Multiply " << endl
             << "4.Divide " << endl
             << "Enter your choice : ";
        cin >> num2;

        switch (num2)
        {
        case 1:
            cout << "\nEnter the value of a : ";
            cin >> x;
            cout << "\nEnter the value of b : ";
            cin >> y;
            user1.Add(x, y);
            break;

        case 2:
            cout << "\nEnter the value of a : ";
            cin >> x;
            cout << "\nEnter the value of b : ";
            cin >> y;
            user1.Subtract(x, y);
            break;

        case 3:
            cout << "\nEnter the value of a : ";
            cin >> x;
            cout << "\nEnter the value of b : ";
            cin >> y;
            user1.Multiply(x, y);
            break;

        case 4:
            cout << "\nEnter the value of a : ";
            cin >> x;
            cout << "\nEnter the value of b : ";
            cin >> y;
            user1.Divide(x, y);
            break;
            
        default:
            cout << "\nYou have not chosen any of the above options." << endl
                 << "Sorry we could not initiate your process !!!";
            break;
        }
    case 2:
        cout << "\nChoose the type of operation to be done further : " << endl
             << "1.Trigonometric Calculations " << endl
             << "2.Logarithmic Calculations " << endl
             << "3.Exponential Calculations " << endl
             << endl
             << "Enter your choice : ";
        cin >> num3;
        switch (num3)
        {
        case 1:
            cout << "\nChoose the type of operation to be done further : " << endl
                 << "1.Sine(x) " << endl
                 << "2.Cosine(x) " << endl
                 << "3.Tangent(x) " << endl
                 << "4.Cosecant(x)" << endl
                 << "5.Secant(x)" << endl
                 << "6.Cotangent(x)" << endl
                 << endl
                 << "Enter your choice : ";
            cin >> num4;
            switch (num4)
            {
            case 1:

                user2.Sine(x);
                break;

            case 2:

                user2.Cosine(x);

                break;

            case 3:

                user2.Tangent(x);
                break;

            case 4:

                user2.Secant(x);
                break;
            case 5:

                user2.Cosecant(x);
                break;
            case 6:

                user2.Cotangent(x);
                break;

            default:
                cout << "\nYou have not chosen any of the above options." << endl
                     << "Sorry we could not initiate your process !!!";
                break;
            }
            cout << "\nThanks!!";
            break;
        case 2:
            cout << "\nChoose the type of operation to be done further : " << endl
                 << "1.Logarithms " << endl
                 << "2.Antilogarithms " << endl
                 << endl
                 << "Enter your choice : ";
            cin >> num5;
            switch (num5)
            {
            case 1:

                user2.Logarithm(x);
                break;

            case 2:

                user2.Antilogarithm(x);

                break;

            default:
                cout << "\nYou have not chosen any of the above options." << endl
                     << "Sorry we could not initiate your process !!!";
                break;
            }
            cout << "\nThanks!!";
            break;
        case 3:
            cout << "\nChoose the type of operation to be done further : " << endl
                 << "1.Power " << endl
                 << "2.Squareroot " << endl
                 << endl
                 << "Enter your choice : ";
            cin >> num6;
            switch (num6)
            {
            case 1:
                user2.Power(x, y);
                break;

            case 2:

                user2.Squareroot(x, y);

                break;

            default:
                cout << "\nYou have not chosen any of the above options." << endl
                     << "Sorry we could not initiate your process !!!";
                break;
            }
            cout << "\nThanks!!";
            break;
        default:
            cout << "\nYou have not chosen any of the above options." << endl
                 << "Sorry we could not initiate your process !!!";
            cout << "\nThanks!!";
            break;
        }
    default:
        // cout << "\nYou have not chosen any of the above options." << endl
        //      << "Sorry we could not initiate your process !!!";
        // cout << "\nThanks!!";
        break;
    }

    return 0;
}