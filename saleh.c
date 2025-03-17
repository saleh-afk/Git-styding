#include <stdio.h>
#include <cs50.h>


float mohammed(float saleh);
int main(void){
    float saleh = get_float("regular price: ");
    float salem = mohammed(saleh);
    printf("the price after discount is: %.2f",salem);
}

float mohammed(float saleh){
   return saleh * 85;
}
