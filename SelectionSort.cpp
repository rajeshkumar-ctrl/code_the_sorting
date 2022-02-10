#include <iostream>
using namespace std;

int main()
{
    int n;
    int index_of_minimum = 0;
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

    for (int i = 0; i < n; i++)
    {
        index_of_minimum = i;
        for (int j = i + 1; j < n; j++)
        {
            if (ListOfNumber[j] < ListOfNumber[index_of_minimum])
            {
                index_of_minimum = j;
            }
            swap(ListOfNumber[index_of_minimum], ListOfNumber[i]);
        }
    }
    cout << "Sorted Array By Sorting Algorithm: [ ";
    for (int i = 0; i < n; i++)
    {
        cout << ListOfNumber[i] << " ";
    }
    cout << "]";

    return 0;
}
