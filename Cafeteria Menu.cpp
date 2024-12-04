#include<iostream>
using namespace std;
main(){       
      
 int choice;
 int totalbill;
  
 do{
 	cout<<"Cafeteria menu:";
    cout<<"1.Tea-$2\n";
    cout<<"2.Coffee-$3\n";
    cout<<"3.Sandwich-$5\n";
    cout<<"4.Burger-$7\n";
    cout<<"5.Exit\n";
    cout<<"Enter the sr.no. of your choice:\n";
    cin>>choice;
     switch(choice){
	 
      case 1:
      	totalbill+=2;
      	break;
      case 2:
      	totalbill+=3;
      	break;
      case 3:
      	totalbill+=5;
      	break;
      case 4:
      	totalbill+=7;
      	break;
      case 5:
      	cout<<"Exiting...\n";
      	break;
      default:
      	cout<<"Invalid choice. Try agian."<<endl;
      }
   }while(choice!=5);
        cout<<"Total Bill:"<<totalbill<<endl;
   
   
   return 0;
}

