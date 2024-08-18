#include <iostream>

using namespace std;

int main() 
{
    int num1 = 0;
    int num2 = 0;
    int result = 0;
    int choose = 0;

    cout  << "Please, enter the first number" << endl;
    cin >> num1;

    cout << "Your first number is: " << num1 << "\nPlease, enter the second number" << endl;
    cin >> num2;

    cout << "Your first number is: " << num1 << "\nYour second number is: " << num2 << "\nPlease, choose the action you`re going to perform: \n 1. + \n 2. - \n 3. * \n 4. / " << endl;
    cin >> choose;

    switch (choose) 
    {
        case 1:
            result = num1 + num2;
            cout << "Very well, number " << num1 << " plus number " << num2 << " equals " << result << endl;
            break;
        case 2: 
            result = num1 - num2;
            cout << "Very well, number " << num1 << " minus number " << num2 << " equals " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "Very well, number " << num1 << " times number " << num2 << " equals " << result << endl;
            break;
        case 4:
            result = num1 / num2;
            cout << "Very well, number " << num1 << " divided by number " << num2 << " equals " << result << endl;
            break;
    }
    
}