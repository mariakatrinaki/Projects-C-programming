#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include  <ctype.h>
#include  <math.h>

#define PI 3.14159

 double calculateVolumeOfSphere(int r);
 double calculateAreaOfSphere(int r);

int main(){
	
	int r ;
	
		printf("Enter the radius of the sphere:\n");
	   scanf("%d",&r);
		if(r==NULL|| r ==0|| r<0){
		while(r==NULL ||r ==0|| r<0){
		
		printf("\nInvalid Input.Please enter a valid  radius for the sphere:\n");
		scanf("%d",&r);
	}
	}
	
	
	 printf("The volume of the sphere is : %lf m^3\n",calculateVolumeOfSphere(r));
	 printf("The area of the sphere is : %lf  m^2\n",calculateAreaOfSphere(r));
	
	
	
	
	
	system("pause");
	return 0;
}


double calculateVolumeOfSphere(int r){
	
	 double volume;
	 double p = 3.14159;
	
	
	volume = (((double)4/(double)3) *PI) *(pow(r,3));
	
	return volume;
	
}


double calculateAreaOfSphere(int r){
	double area;
	
	area = (4 * 3.14159 )* pow(r,2);
	
	return area;
	
	
}



