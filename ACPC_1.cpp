#include<iostream>
#include<cmath>
using namespace std;

double dstn(int a, int b, int c, int d) {
	
	return sqrt((a-b)*(a-b)+ (c-d)*(c-d));
}

int main() {
	int n, x[201],y[201],i,j;
	
	double dis,maxd;
	
	cin>>n;
	
	for(j=0; j<n; j++) cin >> x[j] >> y[j] ;
	
	maxd=dstn(x[0],x[n-1],y[0],y[n-1]);
	
	for(; i<n-1; i++)
		for(j=n-1; j>i; j--) {
			dis=dstn(x[i],x[j],y[i],y[j]);
			if(dis>maxd) maxd=dis;
		}
		
	cout  << maxd;
	return 0;
}
