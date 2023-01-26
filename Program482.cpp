#include <iostream>
using namespace std;
template <class T>
void ArrayX(T *Arr, int size)
{
    T val;
    int icnt = 0;
    cout << "enter the value to match"
         << "\n";
    cin >> val;
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] == val)
        {
            icnt++;
        }
    }
    cout << "match is-:" << icnt << "\n";
}
int main()
{
    int Arr[] = {10, 20, 30, 40, 10, 60, 70, 10};
    ArrayX(Arr, sizeof(Arr) / sizeof(int));

    float Frr[] = {1.1, 2.3, 3.4, 5.6, 6.6, 3.4, 3.4, 3.4};
    ArrayX(Frr, sizeof(Frr) / sizeof(float));

    char Crr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'd'};
    ArrayX(Crr, sizeof(Crr) / sizeof(char));

    return 0;
}