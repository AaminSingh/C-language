#include<stdio.h>
#include<math.h>
//RECURSION
 //Q. Print 'helloworld' 5 times with the help of recursion

    /*void printHW(int count);

    int main(){
      printHW(10);
        return 0;
    }
      void printHW(int count){
        if(count == 0){
            return ;
        }
        printf("HelloWorld \n");
        printHW(count -1);
      }
*/


//Q.Sum of first N natural numbers

   /** int sum(int n);

    int main(){
        printf("sum is:%d",sum(6));
        return 0;
    }
  
// recursive function
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n;
    return sumN;
}*/


//Q.Factorial of n
 
 /*int fact(int n);

 int main(){
    printf("factorial is :%d",fact(6));
    return 0;
 }
  int fact(int n){
    if (n==1){
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN = factNm1*n;
  }*/


  //Q.WRITE A FUNCTION TO CONVERT CELSIUS TO FAHRENHEIT

  /*float convertTemp(float celsius);

  int main(){
     printf("far:%f",convertTemp(80));
    return 0;
  }

  float convertTemp(float celsius){
    float far = celsius *(9.0/5.0) + 32;
    return far;
  }*/


 //Q.FXN TO CALCULATE THE PERCENTAGE OF A STUDENT FROM MARKS IN SCIENCE,MATHS, SANSKRIT

/** int calcPercentage(int science, int math, int sanskrit);


 int main(){
  printf("percentage is:%d",calcPercentage(89,89  ,80));
    return 0;
 }

 int calcPercentage(int science, int math, int sanskrit){
    int marks =  (science + math + sanskrit )/3   ;
    return marks;
 }*/


//Q. WRITE A FXN TO PRINT N TERMS OF THE FIBONACCI SEQUENCE 

/*int fib(int n);


int main(){
    fib(6);
    return 0;
}


int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1; 
    }
int fibNm1 = fib(n-1);
int fibNm2 = fib(n-2);
int fibN = fibNm1 + fibNm2;
printf("fib of %d is :%d\n",n,fibN);
return fibN;

}*/


  //Q.###########WRITE A FXN TO FIND SUM OF DIGITS OF A NUMBER
  
  /*int main(){
    int n, sum = 0,r;
    printf("Enter the number:");
    scanf("%d",&n);
    while (n>0){
      r=n%10;
      sum = sum +r;
      n = n/10;
    }
    printf("Sum of Digits :%d",sum);
    return 0;
    
  }*/



 //Q.WRITE A FUNCTON TO FIND SQUARE ROOT OF A NUMBER 
 /*float squareRoot(float n);

 int main(){
  int n;
  // printf("enter the number :");
  // scanf("%d",&n);
   printf("squareroot of the number is:%f",squareRoot(9));
  return 0;
 }

 float squareRoot(float n){
  float sqrt = pow(n,1.0/2.0);
  return sqrt;
 } 

 */


  //Q write code to print the satrs in pattern 
     /*      *
           * * *
         * * * * *
       * * * * * * *
      * * * * * * * * *            */

     #include <stdio.h>

int main() {
    int rows = 5; // Number of rows

    // Loop through each row
    for (int i = 1; i <= rows; i++) {
        // Print spaces to align the stars
        for (int j = 1; j <= rows - i; j++) {
            printf("   ");
        }
        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf(" * ");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
     