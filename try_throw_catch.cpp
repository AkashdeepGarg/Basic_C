#include <bits/stdc++.h>
using namespace std;
  

int main() 
{ 
    int n,i=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        float a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        float d = (a*b/c);
        try {
            if (d > 230){
            cout << "more";
            }
            else{
                throw (d);
            }
        }
        catch (float d) {
            cout << "less";
        }
    }
    
    
    return 0; 
} 
