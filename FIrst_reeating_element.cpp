//This finds the first repeating element in the array of integers i.e. an element that occurs more than once and whose index of first occurane is smallest.
// test case: 1 5 3 4 3 5 6   output is 2.  As 5 and 3 are both repeating twice but index of 5 is smaller than 4 and in 2(Starting Index of array is assumed to be 1 not 0.)


#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    const int N = 1e6+2;
    int B[N],minindx=999999;
    for(int i=0;i<N;i++){
        B[i]=-1;
    }
    for(int i=0;i<n;i++){
        if(B[A[i]]!= -1){
            minindx = min(minindx,B[A[i]]);
        }
        else{
            B[A[i]]=i;
        }
    }
    if(minindx==999999){
        std::cout << "-1" << std::endl;
    }
    else{
        std::cout << minindx + 1 << std::endl;
    }
    

    return 0;
}
