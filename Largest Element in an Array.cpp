#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 7, 2, 9, 4};
    int n = 5;

    int maxElement = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }

    cout << "Largest element is: " << maxElement;

    return 0;
}