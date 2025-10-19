#include<stdio.h>
#include<math.h>
#include<string.h>
/*void swap(int a,int b){           //defining function
    int temp;
    temp =a;
    a=b;
    b=temp;
    }
*/  
// wrong as it is call by value not call by referrance 
//you must use pointers to modify the original value 
void swap(double *a,double*b){           //defining function
    double temp;
    temp =*a;
    *a=*b;
    *b=temp;
    }

double screen(double b, double a,double c){    //defining function

    double avgnum;
    avgnum=(a+c+b)/3.0;

return avgnum;
}

int main(){
 //wrong   char* str[100] = "my name is sundram yadav";
 char arr[100]="my name is sundram yadav";
/*char* str[100];               trying to take string input from user 
scanf("%s",&str);     wrong because of the following  
*/

/* 
wrong way
 char str[100];   // array of chars — a single string

    printf("Enter your name: ");
    scanf("%s", str);   // no & needed!

    printf("You entered: %s\n", str);                 //  this stops reading after space
*/

/*
one way
char str[100];
scanf("%[^\n]", str);
//risky it can cause buffer overflow if the user types  more than 99 character 
*/
 char str[100];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    printf("You entered: %s\n", str);
    printf("You entered: %s\n", str); 
    
 //wrong       printf ("%d \n",strlen(str));
   printf ("length of string : %zu]\n",strlen(str)); 

     double x,y,d ; 
     printf("enter your marks of maths x: \n"); //lf is format specifier of double 
     scanf("%lf",&x);
     printf("enter your marks of science y: \n");
     scanf("%lf",&y);
     printf("enter your marks of social studies d: \n");
     scanf("%lf",&d);
// wrong way of calling function   swap(x,d);      
swap(&x,&d);     
printf ("now marks of maths =%lf \t marks of social studies =%f \n",x,d);
screen(x,y,d);                                  // printing the output
printf ("your average number = %lf  \n",screen(x,y,d));   // directly printing function
printf ("%s\n",arr);                             //printing the output

return 0;

}
