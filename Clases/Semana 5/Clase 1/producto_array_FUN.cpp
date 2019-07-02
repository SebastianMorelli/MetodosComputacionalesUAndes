//Este código halla el producto elemento a elemento y el producto punto de dos arrays

#include <iostream>
using namespace std;

//Declaración Variables 

int array1[5] = {1,2,3,4,5};
int array2[5] = {10,20,30,40,50};

//Declaración funciones

int * producto(int arra[], int arrb[]);
int punto (int arra[], int arrb[]);

int main()
{
    cout<<"El producto elemento a elemento de los Arrays es "<<producto(array1,array2)<<endl;
    for(int i = 0, i<5; i++){
        cout<<p[i];
    }
    //cout<<"El producto punto de los Arrays es"<<punto(array1,array2)<<endl;
    return 0;
}

int * producto (int Val1[], int Val2[])
{
    int *p;
    int prod[5];
    p = prod;
    for( int i = 0; i<5; i++){
        prod[i] = Val1[i]*Val2[i];
    }
    return p;
}

//int punto (int Val1[], int Val2[])
//{
    
//}