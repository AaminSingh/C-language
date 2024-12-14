#include<stdio.h>
#include<math.h>
//function prototype 
/*void printhelloSimmi();

 int main(){
    printhelloSimmi();   // function call
    return 0;
 }


//function definition
  void printHello(){
    printf("hellosimmi!");
    printf("hello aamin this side");
  }*/
  //-------------------------------------*****---------------------------



  //Q. Write a functon to pritn one hello and second one goodbye.


 /* void printhello();
  void printgoodbye();

  int main(){
    printhello();
    printgoodbye();
    return 0;
  }
   void printhello(){
        printf("hellosumi");
   }
 void printgoodbye(){
        printf("byesummi");
   }*/

  //Q. Write a function that prints Namaste if user is indian & bonjour is the use is french.
   
/* void namaste();
void bonjour();


int main(){
    printf("enetr f dor french & i for indian ");
    char ch ;
    scanf("%c",&ch);

    if(ch == 'i'){
 namaste();
    }
    else{
        bonjour();
    }
    return 0;
    }

    void namaste(){
        printf (" namaste");

    }
     void bonjour(){
        printf("bonjour");
     }*/


    //Q.The following example for area of triangle  

   /* float traingle(float width,float height){
        float area ;  //{AREA TRIANGLE}
        area = width*height/2.0;
        return(area);
    }*/  
      
      //Q. the area of three triangles 

      /*float triangle(float width, float height)

      {
        float area;
        area = width*height /2.0;
        return(area);
      }
      int main(){

        printf("Triangle #1 %f\n",triangle (1.3,8.3));
        printf("Triangle #2 %f\n",triangle(2.8,7.6));       
         printf("Triangle #3 %f\n",triangle(8.7,7.4));


        return (0);
      }*/

         //Q. To add numbers using functuon 

         /*int n1, n2,sum;

         int main(){
          printf("enter the two  numbers: ");
          scanf("%d %d" ,&n1,&n2);

          int sum = addNumbers(n1,n2);
          printf("sum = %d ", &sum);
          return 0;
         }

          int addNumbers(int n1, int n2){
            int result;
            result = n1+n2;
            return(result);
          }*/



         //------------------------or---------------------------------


         /*int sum(int a, int b);

         int main(){
           int a ,b;
           printf("enter 1st number:");
           scanf("%d",&a);
           printf("enter 2nd numbeer:");
           scanf("%d",&b);

           int s = sum(a,b);
           printf("sum is %d");
          
          return 0;
         }
         int sum(int x,int y){
          return x+y;
         }*/



      //Q print the table of a number with the help of function 

       /*void printTable(int n);


        int main(){
          int n;
           printf("enter number :");   //argument/ actual parameter 
           scanf("%d",&n);

           printTable(n);

          return 0;
        } 


         void printTable(int n ){    / parameter/formal parameter
          for(int i=1;i<=10;i++){
            printf("%d\n",i*n);
          }
         }*/
//Q, Calculate GST price


 /*void calculatePrice(float value); 
 int main (){
  float value =  100.0;
  calculatePrice(value);
  printf("value is :%f",value);
  return 0;
 } 


 void calculatePrice(float value){
  value = value + (0.18 * value);
  printf("final price is: %f", value);
 } */

  //Q. To calculate the square of a number using library function
    
     int calculatevalue(int a);

     /*int main(){
      int a;
      printf("enter the number:");
      scanf("%d",&a);

      int calculate = calculatevalue(a);
      printf("The value is %d", calculate);
      return 0;
     } 

     int calculatevalue(int a){
      return a*a;
     }*/
 //----------------------------OR---------------------------------------
    /*void calculatePrize(float value);

    int main(){

      int n = 4;
      printf("%f",pow(n,2));

      return 0;
    } */

   //Q. Write a function to calculate the area of a square, rectangle and a circle
      float squareArea(float side);
      float circleArea(float rad);
      float rectangleArea(float  a, float b );
   
        int main(){
          float a= 5.0;
          float b = 10.0;

           printf("area is :%f",rectangleArea(a,b)  );
          return 0;
             
        }
           float squareArea(float side){
            return side*side;
           }
           float circleArea(float rad){
            return 3.14 * rad*rad;
           }

           float rectangleArea(float a,float b){
            return a*b;
           }
    