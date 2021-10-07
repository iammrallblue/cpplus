#include <iostream>

using namespace std;

void arrayAscend(int size, int arr[])
{
    int temp, i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[i])
            {
                temp = arr[i]; //swap them
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

} // arrayAscend

int main()
{
    int Size = 5;
    int Income[] = {40000, 20000, 100000, 35000, 75000, 28000};

    arrayAscend(Size, Income);
    cout << "Ascending order: \n";
    for (int i = 0; i < Size; i++)
    {
        cout << Income[Size] << " ";
    }
    return 0;
}
