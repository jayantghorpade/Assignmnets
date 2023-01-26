#include <iostream>
using namespace std;
template <class T>
T Min(T *Arr, int size)
{
    T Min = Arr[0];
    for (int i = 1; i < size; i++)
    {
        if (Arr[i] < Min)
        {
            Min = Arr[i];
        }
    }
    return Min;
}

int main()
{
    int Arr[] = {10,20,30,40,50,9};
    int iret = Min(Arr, 6);
    cout << "MAX ELEMENT OF  INT ARRAY IS " << iret << "\n";
    // printf("%d",iret);

    float Brr[] = {1.2f, 3.1f, 4.4f};
    float fret = Min(Brr, 3);
    cout << "MAX ELEMENT OF  FLOAT ARRAY IS " << fret << "\n";
    // printf("%f",fret);

    double drr[] = {1.23, 3.13, 4.44};
    double dret = Min(drr, 3);
    cout << "MAX ELEMENT OF  Double ARRAY IS " << dret;
    //    printf("%lf",fret);

    return 0;
}