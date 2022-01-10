/*This program converts binary to decimal.
This program convers decimal to binary. */

#include <iostream>
#include <cmath>
using namespace std;

int dectobin(int n){
    int i,num=0,t=0,A[100];
    while(n!=0){
        i=n%2;
        n=n/2;
        
        A[t]=i;
        t++;
    }
    for(i=t;i>=0;i--){
        num = num*10 + A[i];
    }
    return num;
}

int bintodec(int n){
    int i,j=0,num=0;
    
    while(n!=0){
        i=n%10;
        n=n/10;
        
        num = num+i*pow(2,j);
        j++;
    }
    return num;
}

int main ()
{
    int a;
    cin>>a;
    a=dectobin(a);
    //a=bintodec(a);
    cout<<a<<endl;
    
    return 0;
}
