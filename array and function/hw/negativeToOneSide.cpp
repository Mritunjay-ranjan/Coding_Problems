/*

Enter the size of an array:
5
Enter the elements of an array:
5 -1 3 -2 -7
-1 -2 -7 5 3

*/

#include <iostream>
using namespace std;

void sort(int arr[], int n)
{
    int arr1[100];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            arr1[j] = arr[i];
            j++;
        }
    }
    j;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            arr1[j] = arr[i];
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[100];
    int n;
    cout << "Enter the size of an array:" << endl;
    cin >> n;
    cout << "Enter the elements of an array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, n);
    return 0;
}