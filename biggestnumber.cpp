//Author: David Ramirez
#include<iostream>


using std::cin;
using std::cout;
using std::endl;

int main()
{
  int first = 0;
  int second = 0;

  std::cout<<"Please enter a whole number: ";
  cin>>first;

  std::cout<<"Please enter another whole number: ";
  cin>>second;

  //get second input using std::cin>> again with a second variable

  if (first > second)  {
          std::cout<< "Of those two numbers biggest number is  " << first << endl;
  }
  else if (second > first) {
          std::cout<< "Of those two numbers, biggest number is  " << second << endl;
  }
  //determine if first or second is bigger and store that in a third variable


  //print out the variable representing the biggest number

  std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}
