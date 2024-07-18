#include <iostream>
#include <string>

using namespace std;

int main()
{
  int age;
  double bankBalance;
  string crbStatus;
  int customerDuration;

  //Capture Customer Details
  cout <<"Enter age: ";
  cin >> age;

  cout <<"Enter bank balance: ";
  cin >> bankBalance;

  cout <<"Enter CRB status(good/bad): ";
  cin >> crbStatus;

  cout <<"Enter duration as customer in months: ";
  cin >> customerDuration;

  //Check loan qualification conditions
  if (age > 22 && bankBalance > 50000  && crbStatus == "good" && customerDuration > 6)
  {
    cout <<"Customer is qualified for the loan." << endl;
  }
  else {
    cout <<"Customer is not qualified for the loan." << endl;
  }

return 0;


}