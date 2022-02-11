#include <iostream>
using namespace std;

void QuickSort(int array[], int Lower_Index, int Higher_Index)

{
    if (Lower_Index > Higher_Index)
    {
        return;
    }

    int Center_Index = (Lower_Index + Higher_Index) / 2;
    int Center_Element = array[Center_Index];

    int i = Lower_Index;
    int j = Higher_Index;
    while (i <= j)
    {
        while (array[i] < Center_Element)
        {
            i++;
        }
        while (array[j] > Center_Element)
        {
            j--;
        }

        if (i <= j)
        {
            swap(array[i], array[j]);
            i++;
            j--;
        }
    }

    if (Lower_Index < j)
    {
        QuickSort(array, Lower_Index, j);
    }
    if (Higher_Index > i)
    {
        QuickSort(array, i, Higher_Index);
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

    QuickSort(ListOfNumber, 0, n);

    cout << "Sorted Array by Quick Sort Algorithm: [ ";
    for (int i = 0; i < n; i++)
    {
        cout << ListOfNumber[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}
