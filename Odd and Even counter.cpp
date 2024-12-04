#include <iostream>
using namespace std;
int main()
{
 int i, even=0, odd=0;
 
 while(i!=0)
 {
  cout << "Enter any positive number:" << endl; 
  cin >> i;
  if (i%2==0)
  { if(i==0)
    {
     continue;
    }
   even++;
  }
  else
  {
   odd++;
  }
  if (i==0)
  {
    break;
  }
 }
  cout << "Even:" << even << endl;
  cout << "Odd:" << odd << endl;
  
     return 0;
} 