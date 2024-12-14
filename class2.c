#include<stdio.h>

//int main(){
    //for loop
 /*  for(int i=1;i<=100;i++){
        printf("&d\n",i);

    }*/


   //while loop

   /*int i=1;
   while(i<=100){
    printf("%d\n",i);
    i++;

   }

   //do while loop
   i = 1
   do{
    printf("%d\n",i); 
    i++;
   }
   while (i<=100);
   return 0 ;
}*/


/*int num;
printf("Enter a number :");
scanf("%d",&num);
if (num<0)
printf("number entered is negative \n");
printf("Value of num is :%d\n",num);
}*/


   /*int num;
    printf("Enter a number :");
    scanf("%d", &num);
    if(num%2 ==0){
    printf("number is even\n");
    }
    else 
    printf("number is odd  \n");

}*/
    

// int main(){
//     for(float i=1.0; i<=5.0;i++){
//         printf("%f\n",i);
//     }
//     return 0 ;
// }
   

   //Q. Write a program to find if a character entered by user is Upper case or not.


   /*int main(){
    char ch;
    printf("enter character:");
    scanf ("%c", &ch);

    if(ch >= 'A'&& ch <= 'Z' ){
        printf("upper case");
    }
    else if (ch>= 'a' && ch<= 'z' ){
        printf("lower case ");
    }
    return 0 ;
   }*/


//Q. Print sum of first natural numbers

  /*int main(){
    int n;
    printf("enter number :");
    scanf("%d",&n);


    int sum = 0;
    for (int i = 1 ; i<=n;i++){
        sum = sum + i;
    }
  printf("sum is %d \n" , sum);
  for (int i=n; i>=1; i--){
    printf("%d\n",i);
  }
  return 0;
  }*/

//Q. write down a table of any number 
 /*int main(){

    int n;
    printf("enter a number");
    scanf("%d",&n);

    for(int i = 1;i<=10;i++){
        printf("%d \n" , n*i);
    }
    return 0 ;
 }*/
  

//Q. question based on goto function (here this function gives the advantage of skipping some values)
  /*main(){
  int n; 
  printf("Enter the number :");
  scanf("%d",&n);
  if(n%2==0)
    goto even;
  else 
    goto odd;
    even:
    printf("Number is even ");
    goto end;
    odd:
    printf("Number is odd");
    goto end;
    end:
    printf("\n");
  }*/
  
  



 //Program to understand the use of break 

 /*int main(){
  int n;
  for(n=1;n<=5;n++){
    if(n==3){
      printf("here the break comes\n");
      break;
    }
      }printf("Number = %d\n",n);

  } printf("Out of Loop \n");
 }*/



//Q. PROGRAM TO UNDERSTAND THE SWITCH CNTROL STATEMENT


/*int main(){
  int choice;
  printf("Enter your choice:");
  scanf("%d",&choice);
  switch (choice)
  {
  case 1: printf("First \n");
  case 2: printf("second\n");
  case 3:printf("Third\n");
  default: printf("Wrong choice \n");  
  }
return 0 ;
}*/
  


  //Q.program to find the sum and average of 10 positive intergers
  /*main(){
    int i =1;sum = 0;
    float avg;
    printf("Enter 10 positive numbers : \n");
    
    while(i<=10){
      printf("enter number %d:",i);
      scanf("%d",&n);
      if(n<0){}
    }
  }*/



  //Q. TO FIND THE FACTORIAL OF A GIVEN NUMBER 
   /* int main(){
      int n;
      printf("enter the  number :");
      int fact = 1;
      for(int i = 1;i<=n;i++ ){
        fact= fact *i ;
      } 
      printf("final factorial is %d,fact ");
      return 0;
    }*/


   // To pint the table in reverses order 
   /* int main(){
      int n;
      printf("enter the number :");
      scanf("%d",&n);

      for (int i = 10; i>=1;i--){
        printf("%d \n", n*i);
      }
      return 0;
 }*/


///Q claculte the sum of all the number between 5 and 50
/*int main(){
  int sum = 0;
  for(int i=5;i<=50;i++){
    sum +=i;

  }

printf("sum is %d",sum);
return 0 ;
}*/



      