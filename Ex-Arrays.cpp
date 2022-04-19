#include <iostream>
using namespace std;

int largestValueInArray(int ar[5])
{
    int highest = ar[0];

    for (int i = 1; i < 5; i++)
    {
        if (ar[i] > highest)
        {
            highest = ar[i];
        }
    }
    return highest;
}

int main()
{
    int arr[5] = {3, 6, 12, 9, 3};
    int arr1[5] = {144, 256, 409, 23, 1080};
    
    cout << largestValueInArray(arr)<<endl;
    cout << largestValueInArray(arr1)<<endl;

    return 0;
}
