#include<iostream>
using namespace std;
int Add(int,int);
int Sub(int,int);
int Mul(int,int);
int Result(int);
int main()
{
	int valueOne;
	int valueTwo;
	
	int choice;
	cout<<"Enter your choice \npress 1 for Add\n press 2 for Sub\npress 3 for Mul"<<endl;
	cin>>choice;
   
    cout<<"Please enter value number one";
	cin>>valueOne;
	cout<<"Please enter value number two";
	cin>>valueTwo;
	
	
	switch(choice)
	{
		case 1:
			Add(valueOne,valueTwo);
			break;
		case 2:
			Sub(valueOne,valueTwo);
			break;
		case 3:
			Mul(valueOne,valueTwo);
			break;
		default:
			cout<<"Not valid input";
	} //switch close 

  
}//main close

int Add(int valueOne ,int valueTwo )
{
return valueOne+valueTwo;	
}

int Sub(int valueOne ,int valueTwo )
{
return valueOne-valueTwo;	
}

int Mul(int valueOne ,int valueTwo )
{
return valueOne*valueTwo;	
}
