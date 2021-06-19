/* Enter your solutions in this file */
#include <stdio.h>
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
    if(x[a] < highest )
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
  int num=0,a,b,max=0;
  for(a=0;a<n;a++){
    for(b=0;b<n;b++){
    if(int[a]==int[b])
      num++;
    }
    if(num>=max)
    {
      max=num;
    }
    return x[a];
  }
  
    
    
    
  
  
