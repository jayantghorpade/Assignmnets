#include <iostream>
using namespace std;
template <class T>
T Max(T *Arr, int size)
{
    T Max = Arr[0];
    for (int i = 1; i < size; i++)
    {
        if (Arr[i] > Max)
        {
            Max = Arr[i];
        }
    }
    return Max;
}

int main()
{
    int Arr[] = {1, 3, 4};
    int iret = Max(Arr, 3);
    cout << "MAX ELEMENT OF  INT ARRAY IS " << iret << "\n";
    // printf("%d",iret);

    float Brr[] = {1.2f, 3.1f, 4.4f};
    float fret = Max(Brr, 3);
    cout << "MAX ELEMENT OF  FLOAT ARRAY IS " << fret << "\n";
    // printf("%f",fret);

    double drr[] = {1.23, 3.13, 4.44};
    double dret = Max(drr, 3);
    cout << "MAX ELEMENT OF  Double ARRAY IS " << dret;
    //    printf("%lf",fret);

    return 0;
}