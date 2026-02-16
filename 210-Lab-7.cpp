#include <iostream>
#include <string>

using namespace std;






int main() 
{
    const int ARRAY_SIZE = 5;

    string* names = new string[ARRAY_SIZE];




}

string* reverseArray(string* arr, const int size)
{
    for (int i = 0; i< size; i++)
    {
        string temp - arr[i];
        *(arr + i) = *(arr + size - i);
        *(arr + size - 1 - i) = temp;
    }

    return arr;
}