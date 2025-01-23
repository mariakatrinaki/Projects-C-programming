#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include  <ctype.h>
#include  <math.h>


static int calculateDiscriminant();
static float  squareOfDiscriminationFirstVersion(int a ,int b, int c);
static float  squareOfDiscriminationSecondVersion(int a ,int b, int c);
int main(){
	
	int a,b,c;
	int counter =0;
	float SquareOfDiscrimination_X1 ;
	float SquareOfDiscrimination_X2 ;

	
	printf("Enter first number:\n");
	scanf("%d",&a);
		if(a==NULL|| a ==0){
		while(a==NULL ||a ==0){
		
		printf("\nInvalid Input.Please enter a valid  first number\n");
		scanf("%d",&a);
	}
	}	
	
	printf("Enter second number:\n");
	scanf("%d",&b);
	
		if(b==NULL){
		while(b==NULL){
		
		printf("\nInvalid Input.Please enter a valid second number:\n");
		scanf("%d",&b);
     	}
	
    }
    
    
	printf("Enter third number:\n");
	scanf("%d",&c);
     if(c==NULL){
		while(c==NULL){
		
		printf("\nInvalid Input.Please enter a valid thirdnumber:\n");
		scanf("%d",&c);
	}
		
	}


	  SquareOfDiscrimination_X1 = squareOfDiscriminationFirstVersion(a , b, c);
	  SquareOfDiscrimination_X2 = squareOfDiscriminationSecondVersion(a , b, c);
	
	 
	 printf("");
	 printf("==============================================================\n");
	 printf("\nThe Square of Discrimination first version is: %.2f\n",SquareOfDiscrimination_X1);
	 printf("\nThe Square of Discrimination second version is: %.2f\n",SquareOfDiscrimination_X2);
	 printf("==============================================================\n");
	
	
	
	
	
	system("pause");
	return 0;
}

static int calculateDiscriminant(int a ,int b, int c){
static int D;
	D= pow(b,2)-(4*a*c);
	

	return D; 
}

static float  squareOfDiscriminationFirstVersion(int a ,int b, int c){
   static float x1;
	static int d = calculateDiscriminant(a ,b,c);

	x1= (-b + sqrt(d)) /(2*a);
	printf("\nThe Discrimination is %d\n",d);
	return x1;
	
}

static float  squareOfDiscriminationSecondVersion(int a ,int b, int c){
	float x2;
	int d= calculateDiscriminant(a,b,c);
	 
	 x2 = (-b - sqrt(d)) /(2*a);
	
	return x2;
	
}




