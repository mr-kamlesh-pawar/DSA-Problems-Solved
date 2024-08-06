#include <bits/stdc++.h>
using namespace std;
//------------------------------------------------------------------
//------------------------------------------------------------------
void selection(int arr[], int n)
{
    int min;
    for (int i = 0; i <= n - 2; i++)
    {
        min = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
//------------------------------------------------------------------
//------------------------------------------------------------------
void bubleSort(int arr[], int n)
{

    for (int i = n; i > 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//------------------------------------------------------------------
//------------------------------------------------------------------
void insertionSort(int arr[], int n)
{
    int j;
    for (int i = 0; i < n; i++)
    {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {

            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
}

int main()
{
    int arr[] = {6, 4, 3, 5, 2, 1};
    int n = 6;
    selection(arr, n);
    // bubleSort(arr, n);
    // insertionSort(arr, n);
    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}