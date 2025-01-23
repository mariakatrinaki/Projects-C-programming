#include <stdio.h>

int main(void) {
printf("\t**********FOR**********\n");
printf("\t\t\tWelcome guest\n");
printf("\n");
char star = '*';
char hashMark ='#';
char at_sign ='@';

  int numbers [9],j,counter;


for(int i=1; i<=9; i++){

    numbers[i]=i;
    printf("\t\t\t");
   for(int j=1; j<=numbers[i]; j++){ 
    printf("%d",numbers[j]);

   }
   
  for(int k =i+1; k<=10; k++){
   if(i<=3){
    if(k==8){
      printf("%c",hashMark);
    }else{
       printf("%c",star); 
    }

   }else if(i>3 && i<=5){
     if(k==8){
      printf("%c",at_sign);
    }else{
       printf("%c",star); 
    }

   }else if(i>5 && i<=9){
     if(k==8){
    printf("%c",hashMark);
     }if(k==9){
     printf("%c",at_sign);
     }if(k==10){
      printf("%c",hashMark);
     } if(k!=8 && k!=9 && k!=10){
       printf("%c",star);
     }

    

   }
   else{
   printf("%c",star); 
   }
  

    

  }

 printf("\n");


}
printf("\n");
printf("\t\t\t*Finish of loop*\n");
printf("\n");
printf("\n");

printf("\t**********DO-WHILE**********\n");
printf("\t\t\tWelcome guest\n");
printf("\n");
 int k=1,i=k+1;
 numbers[0]=0;
  do{
  numbers[k]=k;
  printf("\t\t\t");
   for(int j=1; j<=numbers[k]; j++){ 
    printf("%d",numbers[j]);

   }
   
 k++;

   do{
   
   
   if(k<=4 ){
     if(i==8){
       printf("%c",hashMark);
     }else{
       printf("%c",star);
     }

   } else if( k<=6){
    if(i==8){
       printf("%c",at_sign);
     }else{
       printf("%c",star);
     }


   }else if(k>6 && k<=10){
     if(i==8){
    printf("%c",hashMark);
     }if(i==9){
     printf("%c",at_sign);
     }if(i==10){
      printf("%c",hashMark);
     }if(i!=8 && i!=9 && i!=10){
       printf("%c",star);
     }


   }
   else{
       printf("%c",star);
   }
    i++;
   }while(i<=10);

  i=k+1;

  printf("\n");
  }while(k<=9);
  printf("\n");
  printf("\t\t\t*Finish of loop*\n");
  printf("\n");
  printf("\n");

printf("\t**********WHILE**********\n");
printf("\t\t\tWelcome guest\n");
printf("\n");

numbers[0]=0;
int a=1,b=a+1;

while(a<=9){
   numbers[a]=a;
  printf("\t\t\t");
   for(int j=1; j<=numbers[a]; j++){ 
    printf("%d",numbers[j]);

   }
   a++;
   while(b<=10){
   if(a<=4){
     if(b==8){
       printf("%c",hashMark);
     }else{
       printf("%c",star);
     }
   }else if(a<=6){
     if(b==8){
       printf("%c",at_sign);
     }else{
       printf("%c",star);
     }

   }else if(a>6 && a<=10){
     if(b==8){
    printf("%c",hashMark);
     }if(b==9){
     printf("%c",at_sign);
     }if(b==10){
      printf("%c",hashMark);
     }if(b!=8 && b!=9 && b!=10){
       printf("%c",star);
     }


   }
   else{

   printf("%c",star);

   }
     b++;
   }

   b=a+1;

   
   printf("\n");

}





  return 0;
}
