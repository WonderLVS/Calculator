#include <iostream>
#include <iomanip>

using namespace std;

void arithmetics() 
{
    float num1 = 0;
    float num2 = 0;
    float result = 0;
    int choose = 0;

    cout  << "Please, enter the first number" << endl;
    cin >> num1;

    cout << "Your first number is: " << num1 << "\nPlease, enter the second number" << endl;
    cin >> num2;

    cout << "Your first number is: " << num1 << "\nYour second number is: " << num2 << "\nPlease, choose the action you`re going to perform: \n 1. a + b \n 2. a - b \n 3. a * b \n 4. a / b " << endl;
    cin >> choose;

    if (choose == 1) 
    {
        result = num1 + num2;
        cout << "Very well, number " << num1 << " plus number " << num2 << " equals " << result << endl;
    }
    else if (choose == 2)
    {
        result = num1 - num2;
        cout << "Very well, number " << num1 << " minus number " << num2 << " equals " << result << endl;
    }
    else if (choose == 3)
    {
        result = num1 * num2;
        cout << "Very well, number " << num1 << " times number " << num2 << " equals " << result << endl;
    }
    else if (choose == 4) 
    {
        result = num1 / num2;
        cout << "Very well, number " << num1 << " divided by number " << num2 << " equals " << std::fixed << std::setprecision(2) << result << endl;
    }
    else 
    {
        cout << "Input Error,  please, use the numbers provided to choose " << endl;
    }
}

int main() 
{
    while(true) 
    {
        int choose;
        cout << "Please, select the type of operation you want to use: \n1. Basic Arithmetic" << endl;
        cin >> choose;

        if (choose == 1) 
        {
            arithmetics();
        }
        else 
        {
            cout << "Input Error,  please, use the numbers provided to choose " << endl;
        }
    }
}