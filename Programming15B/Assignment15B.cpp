/*
Min Wang
Cis 1202 101
3 Nov 2020
*/

#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
T half(T num)
{
    T result = num / 2;
    return result;
}

int half(int num)
{
    double n = static_cast<double>(num);
    int result = round(n / 2);
    return result;
}

int main()
{
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;
}