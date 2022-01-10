//This program takes input of the number of rows and then displays the Pascal's Triangle.


#include <iostream>
using namespace std;

int fact(int n){
    int prod=1;
    while(n!=0){
        prod *= n;
        n--;
    }
    return prod;
}

float ncr(int i,int j){
    float a = fact(i)/fact(j);
    a = a/fact(i-j);
    return a;
    
}

int main ()
{
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++)
        {
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
  
  return 0;
}
