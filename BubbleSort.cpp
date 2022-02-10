#include <iostream>
using namespace std;
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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ListOfNumber[j] > ListOfNumber[j + 1])
            {
                swap(ListOfNumber[j], ListOfNumber[j + 1]);
            }
            else
            {
                continue;
            }
        }
    }

    cout << "Sorted Array: [ ";
    for (int i = 0; i < n; i++)
    {
        cout << ListOfNumber[i] << " ";
    }
    cout << "]";

    return 0;
}
