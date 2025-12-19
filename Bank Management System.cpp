#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Bank
{
	private:
		int balance;
		string accno;
		public:
			Bank(int balance,string accno)
			{
				this->balance=balance;
				this->accno=accno;
			}
			//deposit
			void deposit(int amount)
			{
				if(amount>0)
				{
					balance+=amount;
				}
				else
				{
					cout<<"Amount Must Be Positive"<<endl;
				}
			}
			//withdraw
			void withdraw(int amount)
			{
				if(amount<=balance)
				{
					balance-=amount;
				}
				else if(amount<=0)
				{
					cout<<"AMount must be Positive"<<endl;
				}
				else
				{
					cout<<"Amount must less then balacne"<<endl;
				}
			}
			//display
			void display()
			{
				cout<<"Your current Balnace is "<<balance<<endl;
				cout<<"Your Accout number is "<<accno<<endl;
				
			}
			~Bank()
			{
				cout<<"\t\t\t\t\tTHANK YOU FOR USING BANK"<<endl;
			}
};
int main()
{
 cout<<" \t\t\t\t\t WELLCOME TO YOUR ACCOUNT"<<endl;
   int balance;
   int amount;
   cout<<"Enter your inital balance Rs:";
   cin>>balance;
   cout<<"Enter your account number: ";
   string accno;
   cin.ignore();
   getline(cin,accno);
   cout<<endl<<endl;
   int choice;
  
  Bank b(balance,accno);
  
   
   do
   {
   	cout<<"Enter 1 for Deposit"<<endl;
   	cout<<"Enter 2 for Withdraw"<<endl;
   	cout<<"Enter 3 for display"<<endl;
   	cout<<"Enter 4 for exit"<<endl;
   	cout<<endl;
   	cout<<"\t\t ENTER YOUR CHOICE  ";
   cin>>choice;
   switch(choice)
   {
   	case 1: cout<<"Enter Amount for deposit "<<endl;
    cin>>amount;
    b.deposit(amount);
   break;
   case 2: cout<<"Enter Amount for Withdraw "<<endl;
   cin>>amount;
   b.withdraw(amount);
   break; 
   case 3: b.display();
   	break;
   	
   	case 4: return 0;
   }
   
}
while(choice!=4);
return 0;

}
