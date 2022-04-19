#include <iostream>
using namespace std;

int main()
{
    // Printing star pattern
    // for (int i = 1; i < 4; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // Printing reverse stat pattern
    // for (int i = 5; i < 7 && i > 0; i--)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    //     i--;
    // }

    // Printing a pattern using 0 and 1
    // int num = 0;
    // for (int i = 7; i < 9 && i > 0; i--)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         if (num == 0)
    //         {
    //             cout << "1";
    //             num = 1;
    //         }
    //         else if (num == 1)
    //         {
    //             cout << "0";
    //             num = 0;
    //         }
    //     }
    //     cout << endl;
    //     num = 0;
    //     i--;
    // }

    // write a c++ program to find factorial of a given number

    // int inputvalue;
    // cout<<"Enter the number of which you want factorial:"<<endl;
    // cin>>inputvalue;
    // int fact = inputvalue, factorial = inputvalue;
    // for (int i = 0; i < inputvalue-1; i++)
    // {
    //     fact--;
    //     factorial = factorial*fact;
    // }
    // cout<<factorial;

    // Take integer inputs from user until he/she presses 0 ( Ask to press 0 to quit after every integer input ). Print average and product of all numbers.
    // int val, product = 1;
    // for (int i = 1; i != 0; i++)
    // {
    //     cin >> val;
    //     if (val == 0)
    //     {
    //         cout << product << endl;
    //         break;
    //     }
    //     product = product * val;
    // }

    // Reverse value of an integer
    int valueOfInteger = 123, rev = 0;
    while (valueOfInteger > 0)
    {
        rev = rev*10 + valueOfInteger%10;
        valueOfInteger = valueOfInteger/10;
    }
    cout << rev << endl;

    return 0;
}
