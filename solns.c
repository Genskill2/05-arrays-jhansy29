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
  int num=0,a, counts[];
  for(a=0;a<int;a++){
    if(int[a]==int[0])
      num++;
    
    
  
  
