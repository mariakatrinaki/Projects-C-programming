#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include  <ctype.h>
#include <process.h>
#include <iostream>

int checkSpecialCharacters(char words[],int num){
  int result=1;
   
 for(int i=0; i<num; i++){
   
   
   if((isalpha(words[i])) == 0){
   
    result = isalpha(words[i]);
    
   }


}
return result;
}


int main(void) {
  
 
 int  size,result,j;
 char *stringArray,temp1,temp2;
  
 
 

   do{
   
  printf("Enter size of string[6-12]:\n ");
  scanf("%d",&size);
     
   
  

   }while(size<6 || size>12);
   
      stringArray = (char *)malloc(size *sizeof(char) );
     
    do{
	
    printf("\nEnter a string up to %d characters:\n.Only alphabetic characters allow\n",size);
    
      scanf("%s",stringArray);	
	   
	  result = checkSpecialCharacters(stringArray,size);
       
    }while(strlen(stringArray)>size || strlen(stringArray)<size || result==0);
     	printf("The string reverse is: ");
     	
     	for(int i=size-1; i>=0 ; i--){
     		
     		printf("%c",stringArray[i]);
     		
		 }
     	printf("\n");
     

   	system("pause");
    return 0;
}



/*
 char *s = malloc(1);
    printf("Enter a string: \t"); // It can be of any length
    int c;
    int i = 0;
     Read characters until found an EOF or newline character. 
    while((c = getchar()) != '\n' && c != EOF)
    {
        s[i++] = c;
        s = realloc(s, i+1); // Add space for another character to be read.
    }
    s[i] = '\0';  // Null terminate the string
    printf("Entered string: \t%s\n", s);  
   free(s);
    
*/
