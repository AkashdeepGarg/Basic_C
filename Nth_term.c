#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  int l=3, A[21];
  for (int i=0; i<21; i++) 
  {
  A[i]=0;
  }
  A[0]=a;
  A[1]=b;
  A[2]=c;
  while(l<n){
      A[l]=A[l-1]+A[l-2]+A[l-3];
      l++;
  }
  return A[l-1];
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
