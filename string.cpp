#include<iostream>
#include<cstring>
using namespace std;

int fact(int x=0)
{
    return x? x*fact(x-1):1;
}

int main()
{
    const float x=5.786;
    cin >>x;
    cout<< x;

    return 0;
}
