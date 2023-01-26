#include <iostream>
using namespace std;
template <class T>
void ArrayX(T *Arr, int size)
{
    T temp;
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        temp = Arr[start];
        Arr[start] = Arr[end];
        Arr[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << "\n";
}
int main()
{
    int Arr[] = {10, 20, 30, 40, 10, 60, 70};
    ArrayX(Arr, sizeof(Arr) / sizeof(int));

    float Frr[] = {3.4f, 5.6f, 6.6f, 3.4, 3.6, 7.9, 9.5, 4.5, 6.3, 5.4};
    ArrayX(Frr, sizeof(Frr) / sizeof(float));

    char Crr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'd'};
    ArrayX(Crr, sizeof(Crr) / sizeof(char));

    return 0;
}