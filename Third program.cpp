#include<iostream>
using namespace std;
class myClass
{
public:
	int myNum;
	string myString;
};
int main()
{
	myClass myObj;
	myObj.myNum = 25;
	myObj.myString = "rouda jamil";
	cout<<myObj.myNum<<"\n\n\t";
	cout<<myObj.myString<<"\n\n\t";
	return 0;
}
