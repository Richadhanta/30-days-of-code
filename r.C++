#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  
   char ch;
   cout<<"Enter a character: ";
   cin>>ch;
   if(ch>='0' && ch<='9')
   {
      cout<<"You entered a digit.";
   }
   getch();
}
