#include<iostream>
using namespace std;
int main()
{
	int i=1;
	while(i==1)
	{
	int valueOne;
	int valueTwo;
	cout<<"Please Enter value number one";
	cin>>valueOne;
	cout<<"Please Enter value number two";
	cin>>valueTwo;
	cout<<"The Result is"<<valueOne+valueTwo<<endl;
	cout<<"Press 1 to continue any other key to exit\n";
	cin>>i;
	}
}
