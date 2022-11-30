#include<iostream>
using namespace std;
int main()
{
	int temp;
	int NumOne;
	cout<<"Please  enter a temperature" ;
	cin>>temp;
	cout<"Press 2 for cel to fah\nPress 1 for fah to cel";
	cin>>NumOne;
	switch(NumOne)
	{
		case 1:
			cout<<"the temperature is"<<(temp-32)*5/9;
			break;
		case 2:
			cout<<"the temp is "<<(temp*5/9)+32;
			break;
		default:
		    cout<<"wrong entry";		
    }
}
