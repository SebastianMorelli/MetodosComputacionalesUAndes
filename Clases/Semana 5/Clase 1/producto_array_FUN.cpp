//Este código halla el producto elemento a elemento y el producto punto de dos arrays

#include <iostream>
using namespace std;

//Declaración Variables 

int array1[5] = {1,2,3,4,5};
int array2[5] = {10,20,30,40,50};

//Declaración funciones

int product (int, int);
int punto  (int, int);

int main()
{
    cout<<"El producto elemento a elemento de los Arrays es" << product(array1,array2) << endl;
    //cout<<"El producto punto de los Arrays es" << punto(array1,array2) << endl;
    return 0;
}

int producto (int Val1[], int Val2[])
{
    int prod[5];
    for i ( int i = 0; i <=5; i++){
        prod[i] = Val1[i]*Val2[i];
        return prod[i];
}

//int punto (int Val1[], int Val2[])
//{
    
//}