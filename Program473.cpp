#include <iostream>
using namespace std;
template <class T>
T Accept(T *Arr, int size)
{
    T sum = Arr[0];
    for (int i = 1; i < size; i++)
    {
        sum = sum + Arr[i];
    }
    return sum;
}

int main()
{
    cout << "int array  add is :"
         << "\n";
    int Arr[] = {1, 3, 4};
    int iret = Accept(Arr, 3);
    cout << iret << "\n";
    // printf("%d",iret);

    cout << "float array  add is :"
         << "\n";
    float Brr[] = {1.2f, 3.1f, 4.4f};
    float fret = Accept(Brr, 3);
    cout << fret << "\n";
    // printf("%f",fret);

    cout << "double array  add is :"
         << "\n";
    double drr[] = {1.23, 3.13, 4.44};
    double dret = Accept(drr, 3);
    cout << dret;
    //    printf("%lf",fret);

    return 0;
}