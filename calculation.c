#include<stdio.h>
int main(){
    double square;
    double radius;
    double rectangle_leangth;
    double rectangle_breadth;
double area_square(double a);                  //declaration of a function
double area_rectangle(double a, double b);     //declaration of a function
double area_circle(double a);                  //declaration of a function
    printf ("enter your sqaure length \n");
    scanf("%lf",&square);
     printf ("enter your rectangles length \n");
    scanf("%lf",&rectangle_leangth);
    printf ("enter your rectangles breadth\n");
    scanf("%lf",&rectangle_breadth);
    printf ("enter your  radius of circle \n");
    scanf("%lf",&radius);

    area_square(square);                                       //calling of a function
     
    area_rectangle(rectangle_leangth,rectangle_breadth);       //calling of a function
    
    area_circle(radius);                                       //calling of a function
    
return 0;
} 
double area_square(double a){                         //defining function
    double b;
 a*=a;
printf("\narea of square:%lf\n",a);
return a ;
}
double area_rectangle(double a,double b){          //defining function
  double c;
  c= a*b;

printf("\narea of rectangle:%lf\n",c);
return c ;
}
double area_circle(double a){                     //defining function
    double b;
  a*=a*(3.14);
printf("\narea of circle:%lf\n",a);
return b;
}
