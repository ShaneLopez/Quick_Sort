#include <iostream>

using namespace std;

int partition(int arr[], int lo, int hi)
{
    int pivot = arr[(lo + hi) / 2];
    int temp;
    int i = lo;
    int j = hi;

    while(i < j)
    {
        while(arr[i] < pivot && i < j)
        {
            i++;
        }
        while(arr[j] > pivot && j > i)
        {
            j--;
        }
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return i;
}

void quicksort(int arr[], int lo, int hi)
{
    int p;
    if(lo < hi)
    {
        p = partition(arr, lo, hi);
        quicksort(arr, lo, p);
        quicksort(arr, p + 1, hi);
    }
}

int main()
{
    int arr[] = {7, 1, 4, 15, 6, 5, 3};
    quicksort(arr, 0, 6);
    for(int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


