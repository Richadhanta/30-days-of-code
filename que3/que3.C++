#include<iostream>
using namespace std;
void division(int a,int b)
{ if(b==0)
  throw("Division by zero");
  else
  { float res= (float)a/b;
    cout<<"Result:"<<res;
  }
}
int main()
{ int n1,n2;
  cin>>n1>>n2;
  try{ division(n1,n2);
  }
  catch(char *msg)
  { cout<<"\n"<<msg;
  }
  cout<<"Exit main()";
  return 0;
}
