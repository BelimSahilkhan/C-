#include<iostream>
using namespace std;
class my
{
	int deposit,withdraw,balance;
	public:
		void bank_bal()
		{
			cout<<"Enter The Balance=>";
			cin>>balance;
		}
		 void Deposit()
		{
			cout<<"Enter The Deposit=>";
			cin>>deposit;
			balance=balance+deposit;
			cout<<"Deposit :";
			cout<<deposit<<endl;
		}
		void Withdraw()
		{
			cout<<"How Much Cash withdraw=>";
			cin>>withdraw;
			if(balance < withdraw)
			{
				cout<<"Not Account Cash Valid.!"<<endl;
			}
			else
			{
				balance=balance-withdraw;
				cout<<"Withdraw =>"<<withdraw<< endl;
			}
			
		}
		friend void display(my obj)
		{
			cout<<"Total is=>"<<obj.balance<<endl <<endl;
			
		}
};
int main()
{
	my obj;
	
	int deposit,withdraw,credit,balance,ch;
	obj.bank_bal();
	do
	{
		cout<<"1.Deposite\n2.Withdraw\n3.Exit\n\n"<<endl;
		cout<<"Enter Your choice=>";
		cin>>ch;
		switch(ch)
		{
			case 1:
				obj.Deposit();
				display(obj);
				break;
				
			case 2:
				obj.Withdraw();
				display(obj);
				break;
				
			case 3:
			    return 0;
				break;	
				
				default:
					cout<<"Your Entered Number is invalid Plz Enter valid Number:"<<endl;
					break;
		}
	}while(ch!=3);
	return 0;
}