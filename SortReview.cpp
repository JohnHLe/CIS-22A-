#include <iostream>
#include <iomanip>

using namespace std;
void selectionSort (int arr[], int n);
void bubbleSort (int arr [], int n);

int main()
{
    int lol[5] = {4, 3, 5, 1, 2};
    cout << "Unsorted:" << endl;
    for (int i = 0 ; i < 5 ; i++)
    {
        cout << lol[i] << " ";
    }
    cout << "\nSorted:\n";
    bubbleSort(lol, 5);

    for (int i = 0 ; i < 5 ; i++)
    {
        cout << lol[i] << " ";
    }

    return 0;

}
void bubbleSort (int arr[], int n)
{
    bool flag = false;
    int temp;
    while (true)
    {
        for ( int i=0 ; i < n ; i++)
        {
            if ( arr[i+1] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                sortedOnce = true;
            }
        }

        if (!flag)
            break;
        sortOnce = false;
    }
}
void selectionSort (int arr[], int n)
{
    int x, j, minIndex, temp;
    for (x = 0 ; x < n ; x++)
    {
        minIndex = x;
        for (j = x + 1 ; j < n ; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        if (minIndex != x)
        {
            temp = arr[x];
            arr[x] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}
