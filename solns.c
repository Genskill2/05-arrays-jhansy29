/* Enter your solutions in this file */
#include <stdio.h>
#include<assert.h>
int max(int x[] , int n){
  int a,highest=0;
  for(a=0;a<n;a++){
    if(x[a] > highest )
      highest = x[a];
  }
  return highest;
}
    
int min(int x[] , int n){
  int a,lowest=0;
  for(a=0;a<n;a++){
    if(x[a] < lowest )
      lowest = x[a];
  }
  return lowest;
}
float average(int x[] ,int n){
  int a;
  float sum=0.0;
  for(a=0;a<n ;a++){
    sum+=x[a];
  }
  sum= sum/n;
  return sum;
}

int mode(int x[], int n){
  int num=0,a,b,max=0,count=0;
  for(a=0;a<n;a++){
    for(b=0;b<n;b++){
    if(x[a]==x[b]){
      num++;
    }
    if(num>=max)
    {
      count=num;
      max=x[i];
    }
  }
    return max;
  }
  
  int factors(int n, int a[]){
   int i, j=0;
  int x=n;
  for(i=2;i<=n;i++)
  {
    
    if(n%i==0)
    {
      
      a[j]=i;
      n=n/i;
      
      i=1;
      j++;
      
    } 
  }
  return j;  
}
  
    
    
    
  
  
