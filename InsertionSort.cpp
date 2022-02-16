#include <iostream>
using namespace std;
void InsertionSort(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j = i - 1;
        int temp = array[i];
        for (; j >= 0; j--)
        {
            if (temp < array[j])
            {
                array[j + 1] = array[j];
            }
            else
            {
                break;
            }
        }
        array[j + 1] = temp;
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
    InsertionSort(ListOfNumber, n);
    ///
    cout << "Sorted Array By Insertion Sort Algorithm: [ ";
    for (int i = 0; i < n; i++)
    {
        cout << ListOfNumber[i] << " ";
    }
    cout << "]" << endl;
    return 0;
}
