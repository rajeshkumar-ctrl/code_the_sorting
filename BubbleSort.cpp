#include <iostream>
using namespace std;


void BubbleSort(int array[],int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
            }
            else
            {
                continue;
            }
        }
    }
}

int main()
{

    int n;
    cout << "Enter the amount of numbers you want to sort: ";
    cin >> n;

    int ListOfNumber[n];
    cout<<"List the numbers: ";
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

    BubbleSort(ListOfNumber,n);


    cout << "Sorted Array: [ ";
    for (int i = 0; i < n; i++)
    {
        cout << ListOfNumber[i] << " ";
    }
    cout << "]"<<endl;

    return 0;
}
