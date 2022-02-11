#include <iostream>
using namespace std;


void SelectionSort(int array[],int size)
{
    
int index_of_minimum = 0;
    for (int i = 0; i < size; i++)
    {
        index_of_minimum = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[index_of_minimum])
            {
                index_of_minimum = j;
            }
            swap(array[index_of_minimum], array[i]);
        }
    }
}

int main()
{
    int n;
    
    cout << "Enter the amount of numbers you want to sort: ";
    cin >> n;

    int ListOfNumber[n];
    cout << "List the numbers: ";

    for (int i = 0; i < n; i++)
    {
        cin >> ListOfNumber[i];
    }

    cout << "Inserted Array: [ ";

    for (int i = 0; i < n; i++)
    {
        cout << ListOfNumber[i] << " ";
    }
    cout << "]" << endl;


    ///
    SelectionSort(ListOfNumber,n);
    ///


    cout << "Sorted Array By Selection Sort Algorithm: [ ";
    for (int i = 0; i < n; i++)
    {
        cout << ListOfNumber[i] << " ";
    }
    cout << "]"<<endl;

    return 0;
}
