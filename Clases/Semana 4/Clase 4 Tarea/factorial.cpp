//Este código halla el factorial de un número 

#include <iostream>
using namespace std;

//Declaración Variables 

int n1 = 7;
int n2 = 77;

//Declaración funciones

double fact(int);

int main()
{
  cout<<fact(n1)<<endl;
  cout<<fact(n2)<<endl;
  
  return 0;
}

double fact (int Val)
{
  int cont = 1;
  for(int i = 1; i <= Val; i ++)
  {
    cont = cont*i;
  }
  return cont;
}
