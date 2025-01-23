#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>




int main(){
	
	  int sortingArray[4],minPos,min,max;
	  int array[4]={32,20,28,10};
	

	  for(int i=0; i<4; i++){
	  
	    min = array[i];
	    max = array[i];
	    printf("start min: %d\n",min);
	    for(int j=0; j<4; j++){
	    
	     if(max<array[j]){
	     	max = array[j]+1;
		 }
	    
		  if(min > array[j]){
		  	
		  	min= array[j]; //4
		  	minPos = j; //1
		  
		  	
		  }else if(min < array[j] && min==array[i]){
		  	minPos = i;
		
	
		  }else if(min < array[j] && min!=array[i]){
		  
		    //	minPos = j;
		  	
		 
		  
	      
			
		
		}
	   }
		
		sortingArray[i]=min;
	//	isPresent=isElementPresent(sortingArray,min,i);
		
 	    	array[minPos]= max;
	 	printf("min:%d ,minPos: %d, array[%d]\n",min,minPos,array[minPos]);
	 }
	 
	 
	 for(int i=0; i<4; i++){
	 	
	 	printf("Sorting array %d\n",sortingArray[i]);
	 	
	 }	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
