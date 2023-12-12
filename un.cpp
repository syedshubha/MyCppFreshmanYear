#include<cstdio>
using namespace std;

class A
{
private:
    int mark;
    void set(int* x)
    {
        *x=80;
    }

public:
    int roll;
    void get(int x)
    {
        roll=x;
        set(&roll);
    }

    void print()
    {
        printf("Roll %d, mark %d",roll,mark);
    }

};

int main()
{
    A b;
    b.get(23);
    b.print();
    return 0;
}
