#include<iostream>
using namespace std;
class A{
      private:
              string name;
              int id;
              float exp;
      public:
          A(){
          cout<<"i am constructor of class A "<<endl;
          }
         ~A(){ }
         void getData(){
              cout<<"Enter the Name : ";fflush(stdin);
              getline(cin,name);
              cout<<"Enter the Id : ";fflush(stdin);
              cin>>id;
              cout<<"Enter monthly Exp : "; fflush(stdin);
              cin>>exp;
       }
  };
      class Human: public A{
              private:
              string job, address,email;
              int age,salery;
              public:
              void getHumanData(){
                     getData();
                     cout<<"Enter The Address:";fflush(stdin);
                     getline(cin,address);
                     cout<<"Enter the Email : "; fflush(stdin);
                     cin>>email;
                     cout<<"Enter the job: "; fflush(stdin);
                     getline(cin,job);
        }
  };
   int main()
{
string pasword,t_pasword;
cout<<"enter your pasword"<<endl;
cin>>pasword;
t_pasword=pasword;
if(t_pasword=="Rouda")
{
    int choice;
    cout<<"Which Data do you want to Access \n\t1. name \n\t2. id"<<endl;
    cin>>choice;
    if(choice == 1) 
	{
    Human h1;
    h1.getHumanData();
    }
    else if(choice == 2) {
    Human a2;
    
    a2.getHumanData();
    }
    else
        cout<<"Kindly Choose the Correct option and try Again";}
        else
        {
		cout<<"wrong pasword"<<endl;
		}
    return 0;
}
