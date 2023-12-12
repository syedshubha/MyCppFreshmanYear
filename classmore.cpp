#include<iostream>
using namespace std;

class Man{
	private:
		string GF, Hobby;
		void crush()
		{
			cout<< "\nThe name of my crush is "<<GF;
		}
	public:
	  string name;
	  int age;
	  void introduce();
	  void old()
	  {
	  	cout<<"\nMy age is "<<age;
	  }
};

void Man :: introduce()
{
	cout<< "\Hey! I am "<< Man :: name; 
}

int main()
{
	Man Shubha;
	cin >> Shubha.name >> Shubha.age ;
	Shubha.introduce();
	Shubha.old();
	
	return 0;
}
