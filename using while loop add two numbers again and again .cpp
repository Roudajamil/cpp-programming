#include<iostream>
using namespace std;
int main()
{
	int valueOne;
	int valueTwo;
	{
	  int i=1;
	  while(i==1)
	  {
	   cout<<"Please Enter value number one";
	   cin>>valueOne;
	   cout<<"Please Enter value number two";
	   cin>>valueTwo;
	   cout<<"The Result is"<<valueOne+valueTwo<<endl;
	   cout<<"Press 1 to continue\n any other key to stop:";
	   cin>>i;
	
	   cout<<"\n Thank you for using the program"<<endl;
      }
    }
}
