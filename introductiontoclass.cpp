#include<iostream>
using namespace std;

class Person {
private:
    string s=" .I am a good boy!";

    void cc()
    {
        if(name=="Shubha") s+=" How are you?";
    }

	public:

		string name;
		void introduce();
};

void Person :: introduce() {
    int t;
	cout << "Hello ! I am " << Person :: name << s;
}

int main() {
	Person *one= new Person();
	one->name="Shubha";
	one->introduce();
	return 0;
}
