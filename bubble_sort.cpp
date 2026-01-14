#include<iostream>
using namespace std;

void bubblesort(int arr[], int n)
{
    for(int i=0; i<n; i++)
    // for round n to n-1
    {
        bool swapped = false;
        for(int j=0; j<n-i-1; j++)
        // process elements till n-i index
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        {
            // already sorted
            break;
        }
    }
}

void printList(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[5] = {26,15,31,28,29};
    bubblesort(arr,5);
    printList(arr,5);
    return 0;
}