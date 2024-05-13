#include<iostream>
using namespace std;
class calculator
{
	int op;
	float n,m;
	public:
		void get()
		{
			cout<<"ENTER THE FIRST NUMBER : ";
			cin>>n;
			cout<<"ENTER THE SECOND NUMBER: ";
			cin>>m;
			
		}
		void dis()
		{
		    cout<<"____________________________"<<endl;
			cout<<"THE FISRT NUMBER IS : "<<n<<endl;
			cout<<"THE SECOND NUMBER IS: "<<m<<endl;
			cout<<"____________________________"<<endl;
			cout<<"***CALCULATOR***"<<endl;
			
		}
		void fun()
		{
			
			do{
			
			cout<<"____________________________"<<endl;
			cout<<"|1. | ADDITION       |"<<endl;
			cout<<"|2. | SUBTRACTION    |"<<endl;
			cout<<"|3. | MULTIPLICATION |"<<endl;
			cout<<"|4. | DIVITION       |"<<endl;
			cout<<"----------------------------"<<endl;
		
			cout<<"\nENTER THE OPERATION : \n";
			cin>>op;
			switch(op)
			{
				case 1:
				     cout<<"   *****ADDITION*****\n"<<endl;
				     
					 cout<<"\t"<<n<<"+"<<m<<"="<<n+m<<endl;
					 break;
				case 2:
				     cout<<"   *****SUBTRACTION*****"<<endl;
					 cout<<"\t"<<n<<"-"<<m<<"="<<n-m<<endl;
					 break;
				case 3:
				     cout<<"   *****MULTIPLICATION*****"<<endl;
					 cout<<"\t"<<n<<"*"<<m<<"="<<n*m<<endl;
					 break;
				case 4:
				     cout<<"   *****DIVISION*****"<<endl;
					 cout<<"\t"<<n<<"/"<<m<<"="<<n/m<<endl;
					 break;
			}
		}while(op!=0);
	}
	
};
int main()
{
calculator c;
c.get();
c.dis();
c.fun();
return 0;
			
}








