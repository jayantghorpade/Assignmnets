#include <iostream>
using namespace std;
template <class T>
T Mult(T A, T B)
{
    T ans = A * B;
    return ans;
}
int main()
{
    int iret = Mult(10, 11);
    cout << "int multiploication is :" << iret << "\n";

    float fret = Mult(11.1, 11.9);
    cout << "float multiploication is :" << fret << "\n";

    double dret = Mult(11.123435, 11.93444);
    cout << "double multiploication is :" << dret << "\n";
    return 0;
}