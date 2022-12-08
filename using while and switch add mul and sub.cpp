#include<iostream>
using namespace std;
void Add();
void Subtract();
void Mul();
void SwitchWork();
int main()
{
	char ch = 'y';
	while(ch == 'y' || ch == 'Y')
	{
		system("cls"); 
		SwitchWork();
		
		cout<<"Do you want to continue\nPress y to continue n to stop";
		cin>>ch;
	}
	cout<<"\n\nThanks for using the program";
} 

void SwitchWork()
{
	int choice;
	cout<<"Please enter your choice\n1: Add\n2: Subtract\n3: Mul\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
			Add();
			break;
		case 2:
			Subtract();
			break;
		case 3:
			Mul();
			break;
		default:
			cout<<"Not valid input";
	}  
}

void Add()
{
	int valueOne;
	int valueTwo;
	cout<<"Please enter value number one";
	cin>>valueOne;
	cout<<"Please enter value number two";
	cin>>valueTwo;
	cout<<"Sum result is "<<valueOne+valueTwo<<endl;
}

void Subtract()
{
	int valueOne;
	int valueTwo;
	cout<<"Please enter value number one";
	cin>>valueOne;
	cout<<"Please enter value number two";
	cin>>valueTwo;
	cout<<"Subtract result is "<<valueOne-valueTwo<<endl;
}

void Mul()
{
	int valueOne;
	int valueTwo;
	cout<<"Please enter value number one";
	cin>>valueOne;
	cout<<"Please enter value number two";
	cin>>valueTwo;
	cout<<"Multiplication result is "<<valueOne*valueTwo<<endl;
}
