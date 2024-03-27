#include<stdio.h>
int main(){
      
      int a[6]={5,20,10,8,18,50};
      for(int i=1;i<6;i++)
      {
          int key=a[i];
          int j=i-1;
          while(j>=0 && a[j]>key)
          {
              a[j+1]=a[j];
              j--;
          }
          a[j+1]=key;
              
      }      
              printf("sorted array\n");
              for(int i=0;i<6;i++)
              printf("%d ",a[i]);
           
      
}