#include <stdio.h>
#include <limits.h>

int main(void) {
  int temperature[3],i=0,number;
   
  printf("\t\t\t\t***Welcome user****\n");
  printf("\n");
  do{
  
  printf("Give 4 numbers at range[-10 untill 50]:\n");
  
  scanf("%d",&number);

   if(number>=-10 && number<=50){
    temperature[i]=number;
    i++;
   }else{
     printf("bye");
     while(number<-10 || number>50){
     printf("The number %d is Invalid.Please enter again a number:\n",number);
      scanf("%d",&number);
     }

     temperature[i]=number;
      i++;

   }

  

  }while(i<=3);

  int max_A= temperature[0];
  int k=0,maxPos;
  int swap,count=0;
  int arraySorting[3];

  int size = sizeof(temperature)/sizeof(temperature[0]);

  while(k<= size){ 
    
  for(int i=0; i<= size; i++){
    swap = temperature[i];

    for(int k=i; k<=3 ;k++){
      if(swap>= temperature[k] && swap>=max_A){
       max_A = swap;
       maxPos = i;
       
      }else if(swap<=temperature[k] &&temperature[k]>=max_A){
        max_A = temperature[k];
        maxPos =i;
      }
    
    }
   
    
   

  }
  // printf("The max %d %d\n",max_A,maxPos);
   
   arraySorting[k] = max_A;
   temperature[maxPos] = INT_MIN;
   max_A=temperature[0];
   
    k++;
  }
  
 printf("\n");
 char Weather [6][50] ={"Temp<0->Freezing weather",
                        "Temp>=0 && <10-> Very Cold Weather",
                         "Temp>10 && <20-> Cold Weather",
                         "Temp>=20 &&<30-> Normal in Temp",
                         "Temp>=30 &&<40->Its Hot",
                         "Temp>40 ->Its Very Hot"};
  for(int  i=0; i<4; i++){
   if(arraySorting[i]<0 ){
    
    
   printf("For the temperature %d the weather is:  %s\n",arraySorting[i],Weather[0]);
  
   }
   if(arraySorting[i]>=0 && arraySorting[i]<10){
      printf("For the temperature: %d the weather is: %s\n",arraySorting[i],Weather[1]);
   } 
   if(arraySorting[i]>=10 && arraySorting[i]<20){
     printf("For the temperature: %d the weather is: %s\n",arraySorting[i],Weather[2]);
   }
   if(arraySorting[i]>=20 && arraySorting[i]<30){
      printf("For the temperature: %d the weather is: %s\n",arraySorting[i],Weather[3]);
   }
     if(arraySorting[i]>=30 && arraySorting[i]<40){
       printf("For the temperature: %d the weather is: %s\n",arraySorting[i],Weather[4]);
     }

    if(arraySorting[i]>40){
     printf("For the temperature: %d the weather is: %s",arraySorting[i],Weather[5]);
     }
 
  
  }
 


  return 0;
}
