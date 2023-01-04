#include<iostream>
#include<conio.h>
using namespace std;
void line(void);
int main(void)

{
	line();
	cout<<"Hello"<<endl;
	line();
	cout<<"We are studying function"<<endl;
	line();
	getch();
}
void line(void)
{
	for(int a=1;a<=20;a++)
	cout<<"*";
	cout<<endl;
}
