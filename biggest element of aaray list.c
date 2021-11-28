#include<stdio.h>
#include<conio.h>
int main(){

int array[]={23,45,56,23,56,23,5667,78,678};
int i;
int max=0;

 for(i=0;i<10;i++)

   {     
 if(array[i]>max)
  
   {    
 max = array[i];
 	
   }

   }
  printf("largest number is %d",max);
   }