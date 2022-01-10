//This tells wether given set forms a pythagorean triplet or not.

#include <iostream>
#include <cmath>
using namespace std;

bool checkPythagoreanTriplet(int x, int y, int z){
    int a = max(x,max(y,z));
    int b,c;
    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    if( pow(a,2) == (pow(b,2)+pow(c,2))){
        return true;
    }
    return false;
}

int main ()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(checkPythagoreanTriplet(a,b,c)){
        std::cout << "It forms a Pythagorian Triplet" << std::endl;
    }
    else
    std::cout << "It does not forms a Pythagorian Triplet" << std::endl;
  
  return 0;
}
