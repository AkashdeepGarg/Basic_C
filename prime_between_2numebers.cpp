//This code returns all the prime number between 2 user given integers.

#include <iostream>
using namespace std;
bool checkPRIME(int m){
    if(m==1){
        return false;
    }
    int i,j=0;
    for(i=1;i<=m;i++){
        
        if(m%i==0)
        {
            j++;
        }
    }
    if(j>2){
        return false;
    }
    return true;
}
int main()
{
    int a,b,i;
    cin>>a>>b;
    for(i=a;i<=b;i++){
        if(checkPRIME(i)){
            cout<<i<<" ";
        }
    }
    
    return 0;
}
