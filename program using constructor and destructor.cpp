#include<iostream>
using namespace std;
class A
{
	private:
		string name;
			int id;
			float exp;
			public:
			A()
			{
				cout<<"this is a constructor of class student"<<endl;
			}
			~A(){
			}
			void getData()
			{
				getline(cin,name);
				cout<<"Enter the id:";fflush(stdin);
				cin>>id;
				cout<<"Enter monthly Exp:";fflush(stdin);
				cin>>exp;
			}

};
class Human : public A
{
	private:
		string job,address,email;
		int age,salary;
		public:
			void getHumanData()
			{
				getData();
				cout<<"Enter the address:";fflush(stdin);getline(cin,address);
				cout<<"enter the email:";fflush(stdin);cin>>email;
				cout<<"Enter the job:";fflush(stdin);getline(cin,job);
			}
			
};
int main()
{
Human h1;
h1.getHumanData();
}
