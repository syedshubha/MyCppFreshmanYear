#include<iostream>
#include<cstring>
using namespace std;

inline int fact(int x=0) {
	return x? x*fact(x-1):1;
}

int main() {
	cout<< fact(12);

	return 0;
}

