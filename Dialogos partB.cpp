#include <stdio.h>
#include <stdlib.h>

int main(void) {

 int number_a,number_b,number_c;
 float result;
 printf("Welcome user\n");
 printf("Give the first number:\n");
 printf("\n");
 scanf(" %d",&number_a);
 printf("I read the first number %d\n",number_a);
 printf("\n");
 printf("\n");
 printf("Give the second number:\n");
 printf("\n");
 scanf("%d",&number_b);
 printf("I read the second number %d\n",number_b);
 printf("\n");
 printf("\n");
 printf("Give the third number:\n");
 printf("\n");
 scanf("%d",&number_c);
 printf("I read the third number %d\n",number_c);
 printf("\n");
 printf("\n");

result =(float) (number_a*number_b)/number_c;
printf("The product of fisrt number: %d, and second number: %d, is %d\n",number_a,number_b,number_a * number_b);

printf("\n");


printf("The product of first number: %d, and second number: %d is %d, and divided by third number: %d, is %.2f\n",
number_a,number_b,number_a*number_b,number_c,result);

printf("\n");


printf("The remainder of first number:%d, and the second number:%d is %d\nThe remaider  %d divided by the third number:%d is %.2f",number_a,number_b,number_a % number_b,number_a % number_b,number_c,(float)(number_a % number_b)/number_c);


 system("pause");
  return 0;
}
