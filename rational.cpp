#include<iostream>
using namespace std;

class RationalNumber
{
private:
    int num, den;
    
    int gcd(int x, int y)    {
        return y? gcd(y,x%y):x; }
        
    void value(int* a, int *b) {
        int gc= gcd(*a, *b);

        (*a)/=gc;
        (*b)/=gc;

        if((*b)<0) {
            *a= - (*a);
            *b= - (*b); } }

public:
		RationalNumber()	{
		num=0;
		den=1;	}

    RationalNumber(int x, int y)  {
        num=x;
        den=y;
        value(&num,&den);  }

    RationalNumber operator+(RationalNumber cse)  {
         return RationalNumber (num*cse.den + (den)*(cse.num), (den)*(cse.den));  }

    RationalNumber operator-(RationalNumber cse)   {
        return RationalNumber (num*cse.den - den*cse.num, den*cse.den);  }

    RationalNumber operator*(RationalNumber cse)  {
        return RationalNumber (num* cse.num, den*cse.den);  }

    RationalNumber operator/(RationalNumber cse)   {
        return RationalNumber (num*cse.den, den*cse.num);  }

    bool operator==(RationalNumber cse)  {
        return ((num ==cse.num) && (den ==cse.den)) ? true: false; }

    void print();
};

void RationalNumber :: print() {
    cout<< RationalNumber :: num << "/" << den; }

RationalNumber x,y ;

void operation (RationalNumber z, string s) {
    x.print();
    cout<< s;
    y.print();
    cout<< " = ";
    z.print();
    cout<< "\n"; }

int main() {
    int a, b, c, d;
    cin>> a >> b >> c>> d;
    x=RationalNumber(a,b);
    y=RationalNumber(c,d);

    operation(x+y," + ");
    operation(x-y," - ");
    operation(x*y," x ");
    operation(x/y," / ");

    x.print();
    cout<< " and ";
    y.print();
    (x==y) ? cout<<" are identical": cout<< " are not identical";

    return 0; }
