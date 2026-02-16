#include <iostream>
#include <string>

using namespace std;



string* reverseArray(string* arr, const int size);
void displayArray(string* arr, const int size);


int main() 
{
    const int ARRAY_SIZE = 5;

    string* names = new string[ARRAY_SIZE];

    *(names + 0) = "Janet";
    *(names + 1) = "Jeffe";
    *(names + 2) = "Jin";
    *(names + 3) = "Joe";
    *(names + 4) = "Junio";

    cout << "Original array: ";
    displayArray(names, ARRAY_SIZE);

    reverseArray(names, ARRAY_SIZE);

    cout << "Reversed array: ";
    dispalyArray(names, ARRAY_SIZE);

    delete[] names;
    return 0;
}

string* reverseArray(string* arr, const int size)
{
    for (int i = 0; i< size; i++)
    {
        string temp = *(arr + i);
        *(arr + i) = *(arr + size - 1 - i);
        *(arr + size - 1 - i) = temp;
    }

    return arr;
}

void displayArray(string* arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}