#include <iostream>
using namespace std;
int gcd(int a,int b){
    if(a-b==0){
        return a;
    }
    else if(a>b){
        int c=a-b;
        return gcd(c,b);
    }
    else if(a<b){
        int c=b-a;
        return gcd(a,c);
    }
    return 0;
}


int main()
{
    int i,j;
    cin>>i>>j;
    cout<<gcd(i,j)<<endl;
    return 0;
}
