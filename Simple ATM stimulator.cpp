#include<iostream>
using namespace std;
int main()
{
  int choice, WA, amount;
  int balance=6747;
  
  do{
  cout<<"1.Check Balance\n";
  cout<<"2.Withdraw Money\n";
  cout<<"3.Deposit Money\n";
  cout<<"4.Exit\n";
  cout<<"Enter your choice:\n";
  cin>>choice;
   
   switch(choice){
   	case 1:
   		cout<<"your current balance is:"<<balance<<endl;
   		break;
   	case 2:
   		cout<<"Enter the amount to withdraw:\n";
   		cin>>WA;
   		if(balance>=WA){
		   cout<<"Withdrawing money\n";
	    }
	    else{
	    	cout<<"Insufficient Balance\n";
		}
   		break;
   	case 3:
   		cout<<"Enter the amount you want to deposit:\n";
   		cin>>amount;
           balance+=amount;
           cout << "Balance now: "<< balance << endl;
   		break;
   	case 4:
   		cout<<"Exiting....\n";
   		break;
   	default:
   		cout<<"Invalid Option! Try Again."<<endl;
        break;
    }
   }while (choice!=4);
   
      return 0;
}


