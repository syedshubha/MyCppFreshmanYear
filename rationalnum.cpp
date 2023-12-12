#include<iostream>

using namespace std;


class RationalNumber
{

private:

    int num, den;

    int gcd(int x, int y)
    {
        if(y==0)
            return x;
        else
        {
            int t=y;
            y=x%t;
            x=t;
            gcd(x,y);
        }
    }


    void set()
    {
        int gc;

        gc=gcd(num,den);

        num=num/gc;
        den=den/gc;

        if(den<0)
        {
            den=-den;
            num=-num;
        }
    }


public:

    RationalNumber()
    {
    	num=0;
    	den=1;
    }

    RationalNumber(int a, int b)
    {
        num=a;
        den=b;
        set();
    }

    RationalNumber operator+(const RationalNumber& b)
    {
        int gc;
        RationalNumber box;
        box.num = (this->num)*(b.den) + (this->den)*(b.num);
        box.den = (this->den)*(b.den);

       gc=gcd(box.den,box.num);
        box.num/=gc;
        box.den/=gc;

        if(box.den<0)
        {
            box.den=-box.den;
            box.num=-box.num;
        }

        return box;
    }

    RationalNumber operator-(const RationalNumber& b)
    {
        int gc;
        RationalNumber box;
        box.num = (this->num)*(b.den) - (this->den)*(b.num);
        box.den = (this->den)*(b.den);

        gc=gcd(box.den,box.num);
        box.num/=gc;
        box.den/=gc;

        if(box.den<0)
        {
            box.den=-box.den;
            box.num= -box.num;
        }

        return box;
    }

    RationalNumber operator*(const RationalNumber& b)
    {
        int gc;
        RationalNumber box;
        box.num = (this->num)*(b.num);
        box.den = (this->den)*(b.den);

        gc=gcd(box.den,box.num);
        box.num/=gc;
        box.den/=gc;

        if(box.den<0)
        {
            box.den=-box.den;
            box.num=-box.num;
        }

        return box;
    }

    RationalNumber operator/(const RationalNumber& b)
    {
        int gc;
        RationalNumber box;
        box.num = (this->num)*(b.den);
        box.den = (this->den)*(b.num);

        gc=gcd(box.den,box.num);
        box.num/=gc;
        box.den/=gc;

        if(box.den<0)
        {
            box.den=-box.den;
            box.num=-box.num;
        }

        return box;
    }

    bool operator==(const RationalNumber& b)
    {
        if(this->num==b.num && this->den==b.den) return true;
        else return false;
    }

    void print()
    {
        cout << num << "/" << den ;
    }
};


int main()
{
    RationalNumber x,y ;
    int a, b, c, d;

    cin >> a >> b >> c >> d ;

    x=RationalNumber(a,b);
    y=RationalNumber(c,d);

    x.print();
    cout<< " + ";
    y.print();
    cout<< " = ";
    (x+y).print();
    cout<< "\n";

    x.print();
    cout<< " - ";
    y.print();
    cout<< " = ";
    (x-y).print();
    cout<< "\n";

     x.print();
    cout<< " x ";
    y.print();
    cout<< " = ";
    (x*y).print();
    cout<< "\n";

    x.print();
    cout<< " / ";
    y.print();
    cout<< " = ";
    (x/y).print();
    cout<< "\n";

    x.print();
    cout<< " and ";
    y.print();
    cout<< " are ";
    (x==y)? cout<< "identical" : cout<< "not identical";

    return 0;
}
