#include<stdio.h> 
#include<math.h> 
#include<conio.h>
#include<stdlib.h> 
 
/*Function to know the nature of roots and calculate the roots of given quadratic equation*/
void RootsofQuadratic(int a, int b, int c) 
{ 
     
    if (a == 0)  /*Checking for value of a*/
    { 
        printf("The value of a cannot be 0"); 
        return; 
    } 
   
    int d = b*b - 4*a*c; 
    double SquarerootDescriminant = sqrt(abs(d)); 
   
    if (d > 0) 
    { 
        printf("The Roots are Real in Nature "); 
        printf("%f%f",(double)(-b + SquarerootDescriminant)/(2*a) 
            , (double)(-b - SquarerootDescriminant)/(2*a)); 
    } 
    else if (d == 0) 
    { 
        printf("The roots are equal and Real in Nature "); 
        printf("%f",-(double)b / (2*a)); 
    } 
    else // d < 0 
    { 
        printf("The Roots are Complex in Nature "); 
        printf("%f + i%f%f - i%f", -(double)b / (2*a),SquarerootDescriminant 
            ,-(double)b / (2*a), SquarerootDescriminant); 
    } 
}  
int main() 
{ 
    int a;
    int b;
    int c;
   printf("For a quadratic equation of form ax2 + bx + c = 0 enter values of a, b, c");
   scanf("%d%d%d", &a, &b, &c);  /*Asking for input*/
    RootsofQuadratic(a, b, c); 
    return 0; 
}
