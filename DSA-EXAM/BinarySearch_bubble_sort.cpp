#include<iostream>
using namespace std;


void bubbleSort(int a[] , int size)
{
        int pass = 1;
        while (pass < size)
        {
            for (int i = 0; i < size - pass; i++)
            {
                if(a[i] > a[i+1]){
                    int swap = a[i];
                    a[i] = a[i+1];
                    a[i+1] = swap;
                }
            }
            pass++;
        }
        
    }
    
int binary_search(int a[], int n, int element)
{
            int start = 0;
            int end = n - 1;

            while (start <= end)
            {
                int mid = (start + end) / 2;
                if (element < a[mid])
                {
                    end = mid - 1;
                }
                else if (element > a[mid])
                {
                    start = mid + 1;
                }
                else
                {
                    return mid;
                }
            }

            return -1;
}

int main()
{
    int size , element;

    cout << endl<< "Enter the size : ";
    cin >> size;

    int a[size];

    
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of a[" << i << "] : ";
        cin >> a[i];
    }

    cout << endl << "original array := ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl << endl;


//  bubbleSort...... 
    bubbleSort(a, size);

    cout << "Ascending Order :- ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl << endl;
    
// BinarySerch............    
    cout << "Enter the element Number:- ";
    cin >> element;


    int result = binary_search(a, size, element);
    cout << endl;
    
    if (result == -1)
    {
        cout << "Element Number Not found...Wrong Elemwnt Number...!" << endl;
    }
    else
    {
        cout << "Element Number found at index " << result << endl;

    }

    return 0;

}