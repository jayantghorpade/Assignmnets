#include <iostream>
using namespace std;
template <class T>
class ArrayX
{
public:
    int size;
    T *Arr;
    ArrayX(int size);
    void Accept();
    void Display();
    T SearchLastOcc();
    T EvenCount();
    T OddCount();
    T sumAll();
};
template <class T>
ArrayX<T>::ArrayX(int size)
{
    this->size = size;
    Arr = new T[size];
}
template <class T>
void ArrayX<T>::Accept()
{
    cout << "enter array elements " << size << "\n";
    for (int i = 0; i < size; i++)
    {
        cin >> Arr[i];
    }
}
template <class T>
void ArrayX<T>::Display()
{
    cout << "array elements  are " << size << "\n";
    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << "\t";
    }
}
template <class T>
T ArrayX<T>::SearchLastOcc()
{
    T ino1, flag;
    cout << "enter what you want to search in array :"
         << "\n";
    cin >> ino1;
    for (int i = size - 1; i >= 0; i--)
    {
        if (Arr[i] == ino1)
        {
            flag = i;
            break;
        }
    }
    return flag;
}
template <class T>
T ArrayX<T>::EvenCount()
{
    int icnt = 0;
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] % 2 == 0)
        {
            icnt++;
        }
    }
    return icnt;
}
template <class T>
T ArrayX<T>::OddCount()
{
    int iCnt = 0;
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] % 2 != 0)
        {
            iCnt++;
        }
    }
    return iCnt++;
}
template <class T>
T ArrayX<T>::sumAll()
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
    ArrayX<int> obj(5);
    obj.Accept();
    obj.Display();
    int iret = obj.SearchLastOcc();
    cout << "last occurence is -:" << iret << "\n";
    int ieven = obj.EvenCount();
    cout << "even count is :" << ieven << "\n";
    int iOdd = obj.OddCount();
    cout << "odd count is :" << iOdd << "\n";
    int isum = obj.sumAll();
    cout << "sum All is :" << isum << "\n";

    cout << "<-----ALL ABOUT FLOTING POINT------------>"
         << "\n";
    ArrayX<float> obj1(5);
    obj1.Accept();
    obj1.Display();
    float fret = obj1.SearchLastOcc();
    cout << "last occurence is -:" << fret << "\n";
    float fsum = obj1.sumAll();
    cout << "sum All is :" << fsum << "\n";

    return 0;
}
