#include<iostream>
using namespace std;


int gcd(int x, int y)
{
    int t;

    if(y==0)
        return x;
    else
    {
        t=y;
        y=x%t;
        x=t;
        gcd(x,y);
    }
}


bool check(float y)
{
    int x= (int) y;
    return (x==y)? false:true;
}


int point(float x)
{
    int i=1;
    for(; check(x*i); i*=10);
    return i;
}


int main()
{
    float a;
    int x,y,gc;

    cin >> a;

    y=point(a);

    x= (int) (a*y);

    gc=gcd(x,y);
    x/=gc;
    y/=gc;

    cout<< x << "/" << y;

    return 0;
}
