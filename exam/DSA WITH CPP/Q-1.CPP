#include<iostream>
using namespace std;

main()
{
  int num;
  
  cout << endl << "enter the number value :";
  cin >> num;

  if(num >  0)
  {
    cout << endl << num << "is number Positive";
  }
  else if (num < 0)
  {
     cout << endl < num << "is number negative ";
  }
  else 
  {
     cout << endl < num << "is number zero(null) ";
  }
  
}
