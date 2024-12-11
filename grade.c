#include<stdio.h>

 int main(){
    int a;
    printf("Enter Your Marks ");
    scanf("%d", &a);
    if (a>90)
    {
      printf("A grade");
    }
    else if (a>75)
    {
      printf("B grade");
    }
    else if (a>60)
    {
      printf("C grade");
    }
    else if (a>33)
    {
      printf("D grade");
    }
    else{
      printf("E grade");
    }
   }