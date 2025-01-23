#include <stdio.h>

#include <assert.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#include <time.h>

#include <unistd.h>

void branches();
void totalDistributionPerWeek();
void totalDistributionPerBranch();
void totalDistributionSelectionPerBranch();
void totalDistributionSpecialDay();
void totalDistributionPerMonth();
void totalDistributionPerMonth_Day();
void totalProfitPerMonth();
void displayMenu();

struct Days {
  int quantity_Monday;
  int quantity_Tuesday;
  int quantity_Wednesday;
  int quantity_Thursday;
  int quantity_Friday;
  int quantity_Saturday;
  int quantity_Sunday;

};

struct NewSpapers {
  struct Days d;

   float price;
}
n, * toPontiki, * thePressProject, * rizospastis, * documento, * kontra, * taxidromos;

struct Magazines {
  struct Days d;
  float price;
}
m, * kosmosLarisa, * the_Best, * eletheyros_Tipos, * real, * dikaiologitika;

struct AETOS {
  struct NewSpapers s;
  struct NewSpapers * arrayNewspapers[6];
  struct Days arrayDaysNewspapers[7];
  //float profit;
  struct Magazines m;
  struct Magazines * arrayMagazines[5];
  struct Days arrayDaysMagazines[7];

}* aetos_Branches;

int value, numberDay, numberMonth, numberMonthDay, numberDayMonth,monthProfit;

int main() {

  branches();
  //displayMenu();

   //totalDistributionPerWeek();
   //totalDistributionPerBranch();
   // totalDistributionSelectionPerBranch();
     //totalDistributionSpecialDay();
     //totalDistributionPerMonth();
     //  totalDistributionPerMonth_Day();
       totalProfitPerMonth(); 
   
    
    
   

  return 0;
}

void branches() {

  int numberOfBranches = 5;

  toPontiki = (struct NewSpapers * ) malloc(sizeof(struct NewSpapers));
  thePressProject = (struct NewSpapers * ) malloc(sizeof(struct NewSpapers));
  rizospastis = (struct NewSpapers * ) malloc(sizeof(struct NewSpapers));
  documento = (struct NewSpapers * ) malloc(sizeof(struct NewSpapers));
  kontra = (struct NewSpapers * ) malloc(sizeof(struct NewSpapers));
  taxidromos = (struct NewSpapers * ) malloc(sizeof(struct NewSpapers));

  kosmosLarisa = (struct Magazines * ) malloc(sizeof(struct Magazines));
  the_Best = (struct Magazines * ) malloc(sizeof(struct Magazines));
  eletheyros_Tipos = (struct Magazines * ) malloc(sizeof(struct Magazines));
  real = (struct Magazines * ) malloc(sizeof(struct Magazines));
  dikaiologitika = (struct Magazines * ) malloc(sizeof(struct Magazines));

   toPontiki->price = 1.5;
   thePressProject->price = 1.5;
   rizospastis->price = 1.5;
   documento->price =1.5;
   kontra->price = 1.5;
   taxidromos->price = 1.5;
   
   kosmosLarisa->price = 2.99;
   the_Best->price = 2.99;
   eletheyros_Tipos->price = 2.99;
   real->price = 2.99;
   dikaiologitika->price = 2.99;
   
  struct NewSpapers * arrayNewspapers[6] = {
    toPontiki,
    thePressProject,
    rizospastis,
    documento,
    kontra,
    taxidromos
  };
  struct Magazines * arrayMagazines[5] = {
    kosmosLarisa,
    the_Best,
    eletheyros_Tipos,
    real,
    dikaiologitika
  };

  aetos_Branches = (struct AETOS * ) malloc(sizeof(struct AETOS) * numberOfBranches);
  
  n.d.quantity_Monday = 54000;
  n.d.quantity_Tuesday = 108000;
  n.d.quantity_Wednesday = 54000;
  n.d.quantity_Thursday = 54000;
  n.d.quantity_Friday = 108000;
  n.d.quantity_Saturday = 216000;
  n.d.quantity_Sunday = 432000;

  m.d.quantity_Monday = 25000;
  m.d.quantity_Tuesday = 50000;
  m.d.quantity_Wednesday = 50000;
  m.d.quantity_Thursday = 5000;
  m.d.quantity_Friday = 5000;
  m.d.quantity_Saturday = 50000;
  m.d.quantity_Sunday = 500000;
  

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 7; j++) {

      (aetos_Branches + i) -> arrayDaysNewspapers[j].quantity_Monday = n.d.quantity_Monday / 5;
      (aetos_Branches + i) -> arrayDaysNewspapers[j].quantity_Tuesday = n.d.quantity_Tuesday / 5;
      (aetos_Branches + i) -> arrayDaysNewspapers[j].quantity_Wednesday = n.d.quantity_Wednesday / 5;
      (aetos_Branches + i) -> arrayDaysNewspapers[j].quantity_Thursday = n.d.quantity_Thursday / 5;
      (aetos_Branches + i) -> arrayDaysNewspapers[j].quantity_Friday = n.d.quantity_Friday / 5;
      (aetos_Branches + i) -> arrayDaysNewspapers[j].quantity_Saturday = n.d.quantity_Saturday / 5;
      (aetos_Branches + i) -> arrayDaysNewspapers[j].quantity_Sunday = n.d.quantity_Sunday / 5;

      (aetos_Branches + i) -> arrayDaysMagazines[j].quantity_Monday = m.d.quantity_Monday / 5;
      (aetos_Branches + i) -> arrayDaysMagazines[j].quantity_Tuesday = m.d.quantity_Tuesday / 5;
      (aetos_Branches + i) -> arrayDaysMagazines[j].quantity_Wednesday = m.d.quantity_Wednesday / 5;
      (aetos_Branches + i) -> arrayDaysMagazines[j].quantity_Thursday = m.d.quantity_Thursday / 5;
      (aetos_Branches + i) -> arrayDaysMagazines[j].quantity_Friday = m.d.quantity_Friday / 5;
      (aetos_Branches + i) -> arrayDaysMagazines[j].quantity_Saturday = m.d.quantity_Saturday / 5;
      (aetos_Branches + i) -> arrayDaysMagazines[j].quantity_Sunday = m.d.quantity_Sunday / 5;

    }

  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 6; j++) {

      (aetos_Branches + i) -> arrayNewspapers[j] = arrayNewspapers[j];
      (aetos_Branches + i) -> arrayNewspapers[j] -> d.quantity_Monday = (aetos_Branches + i) -> arrayDaysNewspapers[0].quantity_Monday / 6;
      (aetos_Branches + i) -> arrayNewspapers[j] -> d.quantity_Tuesday = (aetos_Branches + i) -> arrayDaysNewspapers[1].quantity_Tuesday / 6;
      (aetos_Branches + i) -> arrayNewspapers[j] -> d.quantity_Wednesday = (aetos_Branches + i) -> arrayDaysNewspapers[2].quantity_Wednesday / 6;
      (aetos_Branches + i) -> arrayNewspapers[j] -> d.quantity_Thursday = (aetos_Branches + i) -> arrayDaysNewspapers[3].quantity_Thursday / 6;
      (aetos_Branches + i) -> arrayNewspapers[j] -> d.quantity_Friday = (aetos_Branches + i) -> arrayDaysNewspapers[4].quantity_Friday / 6;
      (aetos_Branches + i) -> arrayNewspapers[j] -> d.quantity_Saturday = (aetos_Branches + i) -> arrayDaysNewspapers[5].quantity_Saturday / 6;
      (aetos_Branches + i) -> arrayNewspapers[j] -> d.quantity_Sunday = (aetos_Branches + i) -> arrayDaysNewspapers[6].quantity_Sunday / 6;
      //	printf("%d",(aetos_Branches +i)->arrayNewspapers[j]->d.quantity_Monday)	;			

    }

  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {

      (aetos_Branches + i) -> arrayMagazines[j] = arrayMagazines[j];
      (aetos_Branches + i) -> arrayMagazines[j] -> d.quantity_Monday = (aetos_Branches + i) -> arrayDaysMagazines[0].quantity_Monday / 5;
      (aetos_Branches + i) -> arrayMagazines[j] -> d.quantity_Tuesday = (aetos_Branches + i) -> arrayDaysMagazines[1].quantity_Tuesday / 5;
      (aetos_Branches + i) -> arrayMagazines[j] -> d.quantity_Wednesday = (aetos_Branches + i) -> arrayDaysMagazines[2].quantity_Wednesday / 5;
      (aetos_Branches + i) -> arrayMagazines[j] -> d.quantity_Thursday = (aetos_Branches + i) -> arrayDaysMagazines[3].quantity_Thursday / 5;
      (aetos_Branches + i) -> arrayMagazines[j] -> d.quantity_Friday = (aetos_Branches + i) -> arrayDaysMagazines[4].quantity_Friday / 5;
      (aetos_Branches + i) -> arrayMagazines[j] -> d.quantity_Saturday = (aetos_Branches + i) -> arrayDaysMagazines[5].quantity_Saturday / 5;
      (aetos_Branches + i) -> arrayMagazines[j] -> d.quantity_Sunday = (aetos_Branches + i) -> arrayDaysMagazines[6].quantity_Sunday / 5;
      			

    }
    

  }
}

void totalProfitPerMonth(){
   char userAnswerOne[5];
   char userAnswerTwo[5];
  char userAnswerBoth[5];
  char userInput[5];
  int monthProfitFirst;
   char branch ='A';
     printf("Do you want total profit per branch AETOS  or  for all company AETOS in x months? (Enter B for branch\nor C for all company AETOS): ");
  scanf("\n%s", userAnswerOne);

  if (strcmp(userAnswerOne, "B") != 0 && strcmp(userAnswerOne, "C") != 0 ) {
    while (strcmp(userAnswerOne, "B") != 0 && strcmp(userAnswerOne, "C") != 0) {

      printf("Invalid Input. Enter B per branch AETOS or C for all company AETOS: \n");
      scanf("\n%s", userAnswerOne);

    }

  }
   printf("Enter a number for the month:");
  scanf("\n%s", userInput);

  while (atoi(userInput) < 1 ) {

        printf("Invalid input. Enter a number for a month:");
        scanf("\n%s", userInput);
      
     

  }
  
  
    monthProfit = atoi(userInput);
   monthProfitFirst = monthProfit;
   monthProfit = monthProfit * 4;
  
  
  
  if(strcmp(userAnswerOne, "B") == 0){
  	 printf("Do you want total profit for NewsPapers  or Magazines in month = %d  or Both? (Enter N for Newspapers\nor M for Magazines or for both B): ",monthProfitFirst);
  scanf("\n%s", userAnswerTwo);

  if (strcmp(userAnswerTwo, "N") != 0 && strcmp(userAnswerTwo, "M") != 0 && strcmp(userAnswerTwo, "B") != 0) {
    while (strcmp(userAnswerTwo, "N") != 0 && strcmp(userAnswerTwo, "M") != 0 && strcmp(userAnswerTwo, "B") != 0) {

      printf("Invalid Input. Enter N for Newspapers or M for Magazines or B for both: \n");
      scanf("\n%s", userAnswerOne);

    }

  }
   if(strcmp(userAnswerTwo,"N")==0){
   	float profitMonday,profitTuesday,profitWednesday,profitThursday,profitFriday,profitSaturday,profitSunday;
   	 for(int i=0; i<5; i++){
   	 	for(int j=0; j<6; j++){
   	 		profitMonday = ((aetos_Branches + i)->arrayNewspapers[j]->price * (aetos_Branches + i)->arrayDaysNewspapers[0].quantity_Monday)*monthProfit;
   	 		profitTuesday =  ((aetos_Branches + i)->arrayNewspapers[j]->price * (aetos_Branches + i)->arrayDaysNewspapers[1].quantity_Tuesday) *monthProfit;
   	 		profitWednesday= ((aetos_Branches + i)->arrayNewspapers[j]->price * (aetos_Branches + i)->arrayDaysNewspapers[2].quantity_Wednesday)*monthProfit;
			profitThursday= ((aetos_Branches + i)->arrayNewspapers[j]->price * (aetos_Branches + i)->arrayDaysNewspapers[3].quantity_Thursday)*monthProfit;
			profitFriday =  ((aetos_Branches + i)->arrayNewspapers[j]->price * (aetos_Branches + i)->arrayDaysNewspapers[4].quantity_Friday)*monthProfit;
			profitSaturday = ((aetos_Branches + i)->arrayNewspapers[j]->price * (aetos_Branches + i)->arrayDaysNewspapers[5].quantity_Saturday)*monthProfit;
			profitSunday = ((aetos_Branches + i)->arrayNewspapers[j]->price * (aetos_Branches + i)->arrayDaysNewspapers[6].quantity_Sunday)*monthProfit;
			}
			
	  printf("------------Branch AETOS %c-----------\n", branch);
      printf("AETOS %c  Month = %d Total profit for Monday Newspapers = %1.f\n", branch,monthProfitFirst,profitMonday);
      printf("AETOS %c  Month = %d Total profit for Tuesday Newspapers = %1.f\n", branch,monthProfitFirst,profitTuesday);
      printf("AETOS %c  Month = %d Total profit for Wednesday Newspapers = %1.f\n", branch,monthProfitFirst,profitWednesday);
      printf("AETOS %c  Month = %d Total profit for Thursday Newspapers = %1.f\n", branch,monthProfitFirst,profitThursday);
      printf("AETOS %c  Month = %d Total profit for Friday Newspapers = %1.f\n", branch,monthProfitFirst,profitFriday);
      printf("AETOS %c  Month = %d Total profit for Saturday Newspapers = %1.f\n", branch,monthProfitFirst,profitSaturday);
      printf("AETOS %c  Month = %d Total profit for Sunday Newspapers = %1.f\n", branch,monthProfitFirst,profitSunday);
      printf("AETOS %c  Month = %d Total profit Newspapers = %1.f\n",branch,monthProfitFirst,(profitMonday+profitTuesday+profitWednesday+profitThursday+profitFriday+profitSaturday+profitSunday));
      printf("----------------------------------------\n");
      printf("\n");
      branch++;
		}
   	
   	
   	
   }else if(strcmp(userAnswerTwo,"M")==0){	
  	 
  	  float profitMonday,profitTuesday,profitWednesday,profitThursday,profitFriday,profitSaturday,profitSunday;
   	 for(int i=0; i<5; i++){
   	 	for(int j=0; j<5; j++){
   	 		profitMonday = ((aetos_Branches + i)->arrayMagazines[j]->price * (aetos_Branches + i)->arrayDaysMagazines[0].quantity_Monday)*monthProfit;
   	 		profitTuesday =  ((aetos_Branches + i)->arrayMagazines[j]->price * (aetos_Branches + i)->arrayDaysMagazines[1].quantity_Tuesday) *monthProfit;
   	 		profitWednesday= ((aetos_Branches + i)->arrayMagazines[j]->price * (aetos_Branches + i)->arrayDaysMagazines[2].quantity_Wednesday)*monthProfit;
			profitThursday= ((aetos_Branches + i)->arrayMagazines[j]->price * (aetos_Branches + i)->arrayDaysMagazines[3].quantity_Thursday)*monthProfit;
			profitFriday =  ((aetos_Branches + i)->arrayMagazines[j]->price * (aetos_Branches + i)->arrayDaysMagazines[4].quantity_Friday)*monthProfit;
			profitSaturday = ((aetos_Branches + i)->arrayMagazines[j]->price * (aetos_Branches + i)->arrayDaysMagazines[5].quantity_Saturday)*monthProfit;
			profitSunday = ((aetos_Branches + i)->arrayMagazines[j]->price * (aetos_Branches + i)->arrayDaysMagazines[6].quantity_Sunday)*monthProfit;
			}
			
	  printf("------------Branch AETOS %c-----------\n", branch);
      printf("AETOS %c  Month = %d Total profit for Monday Magazines = %1.f\n", branch,monthProfitFirst,profitMonday);
      printf("AETOS %c  Month = %d Total profit for Tuesday Magazines = %1.f\n", branch,monthProfitFirst,profitTuesday);
      printf("AETOS %c  Month = %d Total profit for Wednesday Magazines = %1.f\n", branch,monthProfitFirst,profitWednesday);
      printf("AETOS %c  Month = %d Total profit for Thursday Magazines = %1.f\n", branch,monthProfitFirst,profitThursday);
      printf("AETOS %c  Month = %d Total profit for Friday   Magazines = %1.f\n", branch,monthProfitFirst,profitFriday);
      printf("AETOS %c  Month = %d Total profit for Saturday Magazines = %1.f\n", branch,monthProfitFirst,profitSaturday);
      printf("AETOS %c  Month = %d Total profit for Sunday Magazines = %1.f\n", branch,monthProfitFirst,profitSunday);
      printf("AETOS %c  Month = %d Total profit Magazines = %1.f\n",branch,monthProfitFirst,(profitMonday+profitTuesday+profitWednesday+profitThursday+profitFriday+profitSaturday+profitSunday));
      printf("----------------------------------------\n");
      printf("\n");
      branch++;
		}}
		else if(strcmp(userAnswerTwo,"B")==0){
  	    float profitMondayNewspapers,profitTuesdayNewspapers,profitWednesdayNewspapers,profitThursdayNewspapers,profitFridayNewspapers,profitSaturdayNewspapers,profitSundayNewspapers;
   	      float profitMondayMagazines,profitTuesdayMagazines,profitWednesdayMagazines,profitThursdayMagazines,profitFridayMagazines,profitSaturdayMagazines,profitSundayMagazines;
		 float totalProfit ;
		
		for(int i=0; i<5; i++){
   	 	for(int j=0; j<6; j++){
   	 		profitMondayNewspapers = ((aetos_Branches + i)->arrayNewspapers[j]->price * (aetos_Branches + i)->arrayDaysNewspapers[0].quantity_Monday)*monthProfit;
   	 		profitMondayMagazines =  ((aetos_Branches + i)->arrayMagazines[0]->price * (aetos_Branches + i)->arrayDaysMagazines[0].quantity_Monday)*monthProfit;
   	 		profitTuesdayMagazines =   ((aetos_Branches + i)->arrayMagazines[0]->price * (aetos_Branches + i)->arrayDaysMagazines[1].quantity_Tuesday) *monthProfit;
   	 		profitTuesdayNewspapers =  ((aetos_Branches + i)->arrayNewspapers[j]->price * (aetos_Branches + i)->arrayDaysNewspapers[1].quantity_Tuesday) *monthProfit;
   	 		profitWednesdayMagazines = ((aetos_Branches + i)->arrayMagazines[0]->price * (aetos_Branches + i)->arrayDaysMagazines[2].quantity_Wednesday)*monthProfit;
			profitWednesdayNewspapers= ((aetos_Branches + i)->arrayNewspapers[j]->price * (aetos_Branches + i)->arrayDaysNewspapers[2].quantity_Wednesday)*monthProfit;
			profitThursdayMagazines = ((aetos_Branches + i)->arrayMagazines[0]->price * (aetos_Branches + i)->arrayDaysMagazines[3].quantity_Thursday)*monthProfit;
			profitThursdayNewspapers= ((aetos_Branches + i)->arrayNewspapers[j]->price * (aetos_Branches + i)->arrayDaysNewspapers[3].quantity_Thursday)*monthProfit;
			profitFridayMagazines   =  ((aetos_Branches + i)->arrayMagazines[0]->price * (aetos_Branches + i)->arrayDaysMagazines[4].quantity_Friday)*monthProfit; 
			profitFridayNewspapers =  ((aetos_Branches + i)->arrayNewspapers[j]->price * (aetos_Branches + i)->arrayDaysNewspapers[4].quantity_Friday)*monthProfit;
			profitSaturdayMagazines  =  ((aetos_Branches + i)->arrayMagazines[0]->price * (aetos_Branches + i)->arrayDaysMagazines[5].quantity_Saturday)*monthProfit;
			
			profitSaturdayNewspapers = ((aetos_Branches + i)->arrayNewspapers[j]->price * (aetos_Branches + i)->arrayDaysNewspapers[5].quantity_Saturday)*monthProfit;
			profitSundayMagazines =   ((aetos_Branches + i)->arrayMagazines[0]->price * (aetos_Branches + i)->arrayDaysMagazines[6].quantity_Sunday)*monthProfit;
			profitSundayNewspapers = ((aetos_Branches + i)->arrayNewspapers[j]->price * (aetos_Branches + i)->arrayDaysNewspapers[6].quantity_Sunday)*monthProfit;
			}
			totalProfit = profitMondayNewspapers+profitTuesdayNewspapers+profitWednesdayNewspapers+profitThursdayNewspapers+profitFridayNewspapers+profitSaturdayNewspapers+profitSundayNewspapers+
   	       profitMondayMagazines+profitTuesdayMagazines+profitWednesdayMagazines+profitThursdayMagazines+profitFridayMagazines+profitSaturdayMagazines+profitSundayMagazines;
   	       
	  printf("------------Branch AETOS %c-----------\n", branch);
      printf("AETOS %c  Month = %d Total profit for Monday Magazines and Newspapers = %1.f\n", branch,monthProfitFirst,(profitMondayNewspapers+profitMondayMagazines));
      printf("AETOS %c  Month = %d Total profit for Tuesday Magazines and Newspapers= %1.f\n", branch,monthProfitFirst,(profitTuesdayNewspapers + profitTuesdayMagazines));
      printf("AETOS %c  Month = %d Total profit for Wednesday Magazines and Newspapers = %1.f\n", branch,monthProfitFirst,(profitWednesdayNewspapers+ profitWednesdayMagazines ));
      printf("AETOS %c  Month = %d Total profit for Thursday Magazines and Newspapers = %1.f\n", branch,monthProfitFirst,(profitThursdayNewspapers + profitThursdayMagazines ));
      printf("AETOS %c  Month = %d Total profit for Friday   Magazines and Newspapers = %1.f\n", branch,monthProfitFirst,(profitFridayNewspapers + profitFridayMagazines));
      printf("AETOS %c  Month = %d Total profit for Saturday Magazines and Newspapers = %1.f\n", branch,monthProfitFirst,(profitSaturdayNewspapers + profitSaturdayMagazines));
      printf("AETOS %c  Month = %d Total profit for Sunday Magazines and Newspapers = %1.f\n", branch,monthProfitFirst,(profitSundayNewspapers + profitSundayMagazines ));
      printf("AETOS %c  Month = %d Total profit Magazines and Newspapers = %1.f\n",branch,monthProfitFirst,totalProfit);
      printf("----------------------------------------\n");
      printf("\n");
      branch++;
  	
  	
  	
  	
  	
  }
  
  
	
}

} else if(strcmp(userAnswerOne, "C") == 0){
		 printf("Do you want total profit for NewsPapers  or Magazines in month = %d  or Both? (Enter N for Newspapers\nor M for Magazines or for both B): ",monthProfitFirst);
  scanf("\n%s", userAnswerTwo);

  if (strcmp(userAnswerTwo, "N") != 0 && strcmp(userAnswerTwo, "M") != 0 && strcmp(userAnswerTwo, "B") != 0) {
    while (strcmp(userAnswerTwo, "N") != 0 && strcmp(userAnswerTwo, "M") != 0 && strcmp(userAnswerTwo, "B") != 0) {

      printf("Invalid Input. Enter N for Newspapers or M for Magazines or B for both: \n");
      scanf("\n%s", userAnswerOne);

    }	
	
}
     if(strcmp(userAnswerTwo,"N")==0){
     		float profitMonday=0,profitTuesday=0,profitWednesday=0,profitThursday=0,profitFriday=0,profitSaturday=0,profitSunday=0;
   	 for(int i=0; i<5; i++){
   	
   	 		profitMonday +=  (aetos_Branches + i)->arrayNewspapers[0]->price *(aetos_Branches + i)->arrayDaysNewspapers[0].quantity_Monday;
   	 		profitTuesday +=  (aetos_Branches + i)->arrayNewspapers[0]->price * (aetos_Branches + i)->arrayDaysNewspapers[1].quantity_Tuesday  ;
   	 		profitWednesday+= (aetos_Branches + i)->arrayNewspapers[0]->price * (aetos_Branches + i)->arrayDaysNewspapers[2].quantity_Wednesday;
			profitThursday+= (aetos_Branches + i)->arrayNewspapers[0]->price * (aetos_Branches + i)->arrayDaysNewspapers[3].quantity_Thursday;
			profitFriday +=  (aetos_Branches + i)->arrayNewspapers[0]->price * (aetos_Branches + i)->arrayDaysNewspapers[4].quantity_Friday;
			profitSaturday += (aetos_Branches + i)->arrayNewspapers[0]->price * (aetos_Branches + i)->arrayDaysNewspapers[5].quantity_Saturday;
	    	profitSunday += (aetos_Branches + i)->arrayNewspapers[0]->price * (aetos_Branches + i)->arrayDaysNewspapers[6].quantity_Sunday;
			
			
			
	  
		}
     printf("------------Company AETOS-----------\n", branch);
      printf("Company AETOS  Month = %d Total profit for Monday Newspapers = %1.f\n",monthProfitFirst,(profitMonday*monthProfit));
      printf("Company AETOS  Month = %d Total profit for Tuesday Newspapers = %1.f\n",monthProfitFirst,(profitTuesday*monthProfit));
      printf("Company AETOS  Month = %d Total profit for Wednesday Newspapers = %1.f\n",monthProfitFirst,(profitWednesday*monthProfit));
      printf("Company AETOS  Month = %d Total profit for Thursday Newspapers = %1.f\n", monthProfitFirst,(profitThursday*monthProfit));
      printf("Company AETOS  Month = %d Total profit for Friday Newspapers = %1.f\n", monthProfitFirst,(profitFriday*monthProfit));
      printf("Company AETOS  Month = %d Total profit for Saturday Newspapers = %1.f\n", monthProfitFirst,(profitSaturday*monthProfit));
      printf("Company AETOS  Month = %d Total profit for Sunday Newspapers = %1.f\n", monthProfitFirst,(profitSunday*monthProfit));
      printf("Company AETOS  Month = %d Total profit Newspapers = %1.f\n",monthProfitFirst,((profitMonday+profitTuesday+profitWednesday+profitThursday+profitFriday+profitSaturday+profitSunday)*monthProfit));
      printf("----------------------------------------\n");
      printf("\n");
    	
     }else if(strcmp(userAnswerTwo,"M")==0){
     	  		float profitMonday=0,profitTuesday=0,profitWednesday=0,profitThursday=0,profitFriday=0,profitSaturday=0,profitSunday=0;
   	 for(int i=0; i<5; i++){
   	
   	 		profitMonday +=  (aetos_Branches + i)->arrayMagazines[0]->price *(aetos_Branches + i)->arrayDaysMagazines[0].quantity_Monday;
   	 		profitTuesday +=  (aetos_Branches + i)->arrayMagazines[0]->price * (aetos_Branches + i)->arrayDaysMagazines[1].quantity_Tuesday  ;
   	 		profitWednesday+= (aetos_Branches + i)->arrayMagazines[0]->price * (aetos_Branches + i)->arrayDaysMagazines[2].quantity_Wednesday;
			profitThursday+= (aetos_Branches + i)->arrayMagazines[0]->price * (aetos_Branches + i)->arrayDaysMagazines[3].quantity_Thursday;
			profitFriday +=  (aetos_Branches + i)->arrayMagazines[0]->price * (aetos_Branches + i)->arrayDaysMagazines[4].quantity_Friday;
			profitSaturday += (aetos_Branches + i)->arrayMagazines[0]->price * (aetos_Branches + i)->arrayDaysMagazines[5].quantity_Saturday;
	    	profitSunday += (aetos_Branches + i)->arrayMagazines[0]->price * (aetos_Branches + i)->arrayDaysMagazines[6].quantity_Sunday;
			
			
			
	  
		}
     printf("------------Company AETOS-----------\n", branch);
      printf("Company AETOS  Month = %d Total profit for Monday Magazines = %1.f\n",monthProfitFirst,(profitMonday*monthProfit));
      printf("Company AETOS  Month = %d Total profit for Tuesday Magazines = %1.f\n",monthProfitFirst,(profitTuesday*monthProfit));
      printf("Company AETOS  Month = %d Total profit for Wednesday Magazines = %1.f\n",monthProfitFirst,(profitWednesday*monthProfit));
      printf("Company AETOS  Month = %d Total profit for Thursday Magazines = %1.f\n", monthProfitFirst,(profitThursday*monthProfit));
      printf("Company AETOS  Month = %d Total profit for Friday Magazines = %1.f\n", monthProfitFirst,(profitFriday*monthProfit));
      printf("Company AETOS  Month = %d Total profit for Saturday Magazines = %1.f\n", monthProfitFirst,(profitSaturday*monthProfit));
      printf("Company AETOS  Month = %d Total profit for Sunday Magazines = %1.f\n", monthProfitFirst,(profitSunday*monthProfit));
      printf("Company AETOS  Month = %d Total profit Magazines = %1.f\n",monthProfitFirst,((profitMonday+profitTuesday+profitWednesday+profitThursday+profitFriday+profitSaturday+profitSunday)*monthProfit));
      printf("----------------------------------------\n");
      printf("\n");
     	
     	
     	
	 }else if(strcmp(userAnswerTwo,"B")==0){
	 float profitMondayNewspapers=0,profitTuesdayNewspapers=0,profitWednesdayNewspapers=0,profitThursdayNewspapers=0,profitFridayNewspapers=0,profitSaturdayNewspapers=0,profitSundayNewspapers=0;
	 float profitMondayMagazines=0,profitTuesdayMagazines=0,profitWednesdayMagazines=0,profitThursdayMagazines=0,profitFridayMagazines=0,profitSaturdayMagazines=0,profitSundayMagazines=0;
   	 float profitTotalWeek;
		for(int i=0; i<5; i++){
   	
   	 		profitMondayMagazines +=  (aetos_Branches + i)->arrayMagazines[0]->price *(aetos_Branches + i)->arrayDaysMagazines[0].quantity_Monday;
   	 		profitMondayNewspapers += (aetos_Branches + i)->arrayNewspapers[0]->price *(aetos_Branches + i)->arrayDaysNewspapers[0].quantity_Monday;
   	 		profitTuesdayNewspapers+= (aetos_Branches + i)->arrayNewspapers[0]->price *(aetos_Branches + i)->arrayDaysNewspapers[1].quantity_Tuesday;
   	 		profitTuesdayMagazines +=  (aetos_Branches + i)->arrayMagazines[0]->price * (aetos_Branches + i)->arrayDaysMagazines[1].quantity_Tuesday  ;
   	 		profitWednesdayMagazines+= (aetos_Branches + i)->arrayMagazines[0]->price * (aetos_Branches + i)->arrayDaysMagazines[2].quantity_Wednesday;
   	 		profitWednesdayNewspapers+= (aetos_Branches + i)->arrayNewspapers[0]->price * (aetos_Branches + i)->arrayDaysNewspapers[2].quantity_Wednesday;
			profitThursdayMagazines+= (aetos_Branches + i)->arrayMagazines[0]->price * (aetos_Branches + i)->arrayDaysMagazines[3].quantity_Thursday;
			profitThursdayNewspapers+= (aetos_Branches + i)->arrayNewspapers[0]->price * (aetos_Branches + i)->arrayDaysNewspapers[3].quantity_Thursday;
			profitFridayMagazines +=  (aetos_Branches + i)->arrayMagazines[0]->price * (aetos_Branches + i)->arrayDaysMagazines[4].quantity_Friday;
			profitFridayNewspapers += (aetos_Branches + i)->arrayNewspapers[0]->price * (aetos_Branches + i)->arrayDaysNewspapers[4].quantity_Friday;
			
			profitSaturdayMagazines += (aetos_Branches + i)->arrayMagazines[0]->price * (aetos_Branches + i)->arrayDaysMagazines[5].quantity_Saturday;
			profitSaturdayNewspapers+= (aetos_Branches + i)->arrayNewspapers[0]->price * (aetos_Branches + i)->arrayDaysNewspapers[5].quantity_Saturday;
	    	profitSundayMagazines += (aetos_Branches + i)->arrayMagazines[0]->price * (aetos_Branches + i)->arrayDaysMagazines[6].quantity_Sunday;
			profitSundayNewspapers+=  (aetos_Branches + i)->arrayNewspapers[0]->price * (aetos_Branches + i)->arrayDaysNewspapers[6].quantity_Sunday;
			
			
	  
		}
	
	  profitTotalWeek=  profitMondayNewspapers + profitTuesdayNewspapers + profitWednesdayNewspapers +profitThursdayNewspapers +profitFridayNewspapers + profitSaturdayNewspapers + profitSundayNewspapers+
	 profitMondayMagazines + profitTuesdayMagazines + profitWednesdayMagazines + profitThursdayMagazines + profitFridayMagazines + profitSaturdayMagazines + profitSundayMagazines;
   	 
		
		
     printf("------------Company AETOS-----------\n", branch);
      printf("Company AETOS  Month = %d Total profit for Monday Magazines and Newspapers = %1.f\n",monthProfitFirst,(profitMondayNewspapers + profitMondayMagazines)*monthProfit);
      printf("Company AETOS  Month = %d Total profit for Tuesday Magazines and Newspapers = %1.f\n",monthProfitFirst,(profitTuesdayNewspapers + profitTuesdayMagazines)*monthProfit);
      printf("Company AETOS  Month = %d Total profit for Wednesday Magazines and Newspapers = %1.f\n",monthProfitFirst,(profitWednesdayNewspapers+ profitWednesdayMagazines )*monthProfit);
      printf("Company AETOS  Month = %d Total profit for Thursday Magazines and Newspapers = %1.f\n", monthProfitFirst,(profitThursdayNewspapers + profitThursdayMagazines)*monthProfit);
      printf("Company AETOS  Month = %d Total profit for Friday Magazines and Newspapers = %1.f\n", monthProfitFirst,(profitFridayNewspapers + profitFridayMagazines)*monthProfit);
      printf("Company AETOS  Month = %d Total profit for Saturday Magazines and Newspapers = %1.f\n", monthProfitFirst,(profitSaturdayNewspapers +profitSaturdayMagazines)*monthProfit);
      printf("Company AETOS  Month = %d Total profit for Sunday Magazines and Newspapers = %1.f\n", monthProfitFirst,(profitSundayNewspapers+ profitSundayMagazines   )*monthProfit);
      printf("Company AETOS  Month = %d Total profit Magazines and Newspapers = %1.f\n",monthProfitFirst,(profitTotalWeek*monthProfit));
      printf("----------------------------------------\n");
      printf("\n");
	 	
	 	
	 }
}
}  



void totalDistributionPerMonth_Day() {
  char userAnswerOne[5];
  char userAnswerBoth[5];
  char userInput[5];
  char days[1];
  char branch = 'A';
  int totalDayMonth;
  int firstNumberMonth;
  int totalMagazinesPerMonth ;
  int totalNewspapersPerMonth;

  printf("Do you want total quantity for NewsPapers  or Magazines in a day of Month per branch or Both? (Enter N for Newspapers\nor M for Magazines or for both B): ");
  scanf("\n%s", userAnswerOne);

  if (strcmp(userAnswerOne, "N") != 0 && strcmp(userAnswerOne, "M") != 0 && strcmp(userAnswerOne, "B") != 0) {
    while (strcmp(userAnswerOne, "N") != 0 && strcmp(userAnswerOne, "M") != 0 && strcmp(userAnswerOne, "B") != 0) {

      printf("Invalid Input. Enter N for Newspapers or M for Magazines or B for both: \n");
      scanf("\n%s", userAnswerOne);

    }

  }
  printf("Enter a number for the month:");
  scanf("\n%s", userInput);

  while (atoi(userInput) <= 0 ) {

    
      

    

        printf("Invalid input. Enter a number for the month:");
        scanf("\n%s", userInput);
      
    

  }
  
    	numberMonthDay = atoi(userInput);
	
  
  
  printf("Enter a number for the day in a week:");
  scanf("\n%s", userInput);

  while (atoi(userInput) <1  || atoi(userInput)> 7) {


      

      

        printf("Invalid input. Enter a number for the day in a week:");
        scanf("\n%s", userInput);
      
     

  }
   numberDayMonth = atoi(userInput);
  
  
  firstNumberMonth = numberMonthDay;
  numberMonthDay = numberMonthDay * 4;
  if (strcmp(userAnswerOne, "N") == 0) {
    for (int i = 0; i < 5; i++) {
      if (numberDayMonth == 1) {
        totalDayMonth = (aetos_Branches + i) -> arrayDaysNewspapers[0].quantity_Monday * numberMonthDay;
        strcpy(days, "Monday");

      } else if (numberDayMonth == 2) {
        totalDayMonth = (aetos_Branches + i) -> arrayDaysNewspapers[1].quantity_Tuesday * numberMonthDay;
        strcpy(days, "Tuesday");

      } else if (numberDayMonth == 3) {
        totalDayMonth = (aetos_Branches + i) -> arrayDaysNewspapers[2].quantity_Wednesday * numberMonthDay;
        strcpy(days, "Wednesday");

      } else if (numberDayMonth == 4) {
        totalDayMonth = (aetos_Branches + i) -> arrayDaysNewspapers[3].quantity_Thursday * numberMonthDay;
        strcpy(days, "Thursday");

      } else if (numberDayMonth == 5) {
        totalDayMonth = (aetos_Branches + i) -> arrayDaysNewspapers[4].quantity_Friday * numberMonthDay;
        strcpy(days, "Friday");

      } else if (numberDayMonth == 6) {
        totalDayMonth = (aetos_Branches + i) -> arrayDaysNewspapers[5].quantity_Saturday * numberMonthDay;
        strcpy(days, "Saturday");

      } else if (numberDayMonth == 7) {
        totalDayMonth = (aetos_Branches + i) -> arrayDaysNewspapers[6].quantity_Sunday * numberMonthDay;
        strcpy(days, "Sunday");

      }

      printf("------------Branch AETOS %c-----------\n", branch);
      printf("AETOS %c Day = %s Month = %d Newspapers = %d\n", branch, days, firstNumberMonth, totalDayMonth);

      printf("----------------------------------------\n");
      printf("\n");
      branch++;
    }

  } else if (strcmp(userAnswerOne, "M") == 0) {
    for (int i = 0; i < 5; i++) {
      if (numberDayMonth == 1) {
        totalDayMonth = (aetos_Branches + i) -> arrayDaysMagazines[0].quantity_Monday * numberMonthDay;
        strcpy(days, "Monday");

      } else if (numberDayMonth == 2) {
        totalDayMonth = (aetos_Branches + i) -> arrayDaysMagazines[1].quantity_Tuesday * numberMonthDay;
        strcpy(days, "Tuesday");

      } else if (numberDayMonth == 3) {
        totalDayMonth = (aetos_Branches + i) -> arrayDaysMagazines[2].quantity_Wednesday * numberMonthDay;
        strcpy(days, "Wednesday");

      } else if (numberDayMonth == 4) {
        totalDayMonth = (aetos_Branches + i) -> arrayDaysMagazines[3].quantity_Thursday * numberMonthDay;
        strcpy(days, "Thursday");

      } else if (numberDayMonth == 5) {
        totalDayMonth = (aetos_Branches + i) -> arrayDaysMagazines[4].quantity_Friday * numberMonthDay;
        strcpy(days, "Friday");

      } else if (numberDayMonth == 6) {
        totalDayMonth = (aetos_Branches + i) -> arrayDaysMagazines[5].quantity_Saturday * numberMonthDay;
        strcpy(days, "Saturday");

      } else if (numberDayMonth == 7) {
        totalDayMonth = (aetos_Branches + i) -> arrayDaysMagazines[6].quantity_Sunday * numberMonthDay;
        strcpy(days, "Sunday");

      }

      printf("------------Branch AETOS %c-----------\n", branch);
      printf("AETOS %c Day = %s Month = %d Magazines = %d\n", branch, days, firstNumberMonth, totalDayMonth);

      printf("----------------------------------------\n");
      printf("\n");
      branch++;
    }

   
  } else if (strcmp(userAnswerOne, "B") == 0) {
    for (int i = 0; i < 5; i++) {
      if (numberDayMonth == 1) {
        totalMagazinesPerMonth = (aetos_Branches + i) -> arrayDaysMagazines[0].quantity_Monday * numberMonthDay;
         totalNewspapersPerMonth = (aetos_Branches + i) -> arrayDaysNewspapers[0].quantity_Monday * numberMonthDay;
        strcpy(days, "Monday");

      } else if (numberDayMonth == 2) {
        totalMagazinesPerMonth = (aetos_Branches + i) -> arrayDaysMagazines[1].quantity_Tuesday * numberMonthDay;
		totalNewspapersPerMonth = (aetos_Branches + i) -> arrayDaysNewspapers[0].quantity_Tuesday * numberMonthDay;
        strcpy(days, "Tuesday");

      } else if (numberDayMonth == 3) {
        totalMagazinesPerMonth = (aetos_Branches + i) -> arrayDaysMagazines[2].quantity_Wednesday * numberMonthDay;
        totalNewspapersPerMonth =  (aetos_Branches + i) -> arrayDaysNewspapers[2].quantity_Wednesday  * numberMonthDay;
        strcpy(days, "Wednesday");

      } else if (numberDayMonth == 4) {
        totalMagazinesPerMonth = (aetos_Branches + i) -> arrayDaysMagazines[3].quantity_Thursday * numberMonthDay;
         totalNewspapersPerMonth = (aetos_Branches + i) -> arrayDaysNewspapers[3].quantity_Thursday * numberMonthDay;
        strcpy(days, "Thursday");

      } else if (numberDayMonth == 5) {
        totalMagazinesPerMonth = (aetos_Branches + i) -> arrayDaysMagazines[4].quantity_Friday * numberMonthDay;
         totalNewspapersPerMonth= (aetos_Branches + i) -> arrayDaysNewspapers[4].quantity_Friday * numberMonthDay;
        strcpy(days, "Friday");

      } else if (numberDayMonth == 6) {
       totalMagazinesPerMonth  = (aetos_Branches + i) -> arrayDaysMagazines[5].quantity_Saturday * numberMonthDay;
        totalNewspapersPerMonth =  (aetos_Branches + i) -> arrayDaysNewspapers[5].quantity_Saturday * numberMonthDay;
        strcpy(days, "Saturday");

      } else if (numberDayMonth == 7) {
        totalMagazinesPerMonth = (aetos_Branches + i) -> arrayDaysMagazines[6].quantity_Sunday * numberMonthDay;
        totalNewspapersPerMonth=  (aetos_Branches + i) -> arrayDaysNewspapers[6].quantity_Sunday * numberMonthDay;
        strcpy(days, "Sunday");

      }

      printf("------------Branch AETOS %c-----------\n", branch);
      printf("AETOS %c Day = %s Month = %d Magazines and Newspapers = %d\n", branch, days, firstNumberMonth,(totalMagazinesPerMonth +totalNewspapersPerMonth));

      printf("----------------------------------------\n");
      printf("\n");
      branch++;
    }

  }

}

void totalDistributionPerMonth() {
  char userAnswerOne[5];
  char userAnswerBoth[5];
  char userInput[5];
  char branch = 'A';
  int totalWeek;
  int firstNumberMonth;

  printf("Do you want total quantity for NewsPapers  or Magazines in X months or Both? (Enter N for Newspapers or M for Magazines\nor for both B): ");
  scanf("\n%s", userAnswerOne);

  if (strcmp(userAnswerOne, "N") != 0 && strcmp(userAnswerOne, "M") != 0 && strcmp(userAnswerOne, "B") != 0) {
    while (strcmp(userAnswerOne, "N") != 0 && strcmp(userAnswerOne, "M") != 0 && strcmp(userAnswerOne, "B") != 0) {

      printf("Invalid Input. Enter N for Newspapers or M for Magazines or B for both: \n");
      scanf("\n%s", userAnswerOne);

    }

  }
  printf("Enter a number for the month:");
  scanf("\n%s", userInput);

  while ( atoi(userInput) <= 0) {

        printf("Invalid input. Enter a number for a month:");
        scanf("\n%s", userInput);
      
    

  }
   
   	numberMonth = atoi(userInput);
   	
   
  firstNumberMonth = numberMonth;
  numberMonth = numberMonth * 4;

  if (strcmp(userAnswerOne, "N") == 0) {
    for (int i = 0; i < 5; i++) {
      totalWeek = (aetos_Branches + i) -> arrayDaysNewspapers[0].quantity_Monday +
        (aetos_Branches + i) -> arrayDaysNewspapers[1].quantity_Tuesday +
        (aetos_Branches + i) -> arrayDaysNewspapers[2].quantity_Wednesday +
        (aetos_Branches + i) -> arrayDaysNewspapers[3].quantity_Thursday +
        (aetos_Branches + i) -> arrayDaysNewspapers[4].quantity_Friday +
        (aetos_Branches + i) -> arrayDaysNewspapers[5].quantity_Saturday +
        (aetos_Branches + i) -> arrayDaysNewspapers[6].quantity_Sunday;

      printf("------------Branch AETOS %c-----------\n", branch);
      printf("AETOS %c Month= %d Newspapers = %d\n", branch, firstNumberMonth, (totalWeek * numberMonth));

      printf("----------------------------------------\n");
      printf("\n");
      branch++;

    }
  } else if (strcmp(userAnswerOne, "M") == 0) {
    for (int i = 0; i < 5; i++) {
      totalWeek = (aetos_Branches + i) -> arrayDaysMagazines[0].quantity_Monday +
        (aetos_Branches + i) -> arrayDaysMagazines[1].quantity_Tuesday +
        (aetos_Branches + i) -> arrayDaysMagazines[2].quantity_Wednesday +
        (aetos_Branches + i) -> arrayDaysMagazines[3].quantity_Thursday +
        (aetos_Branches + i) -> arrayDaysMagazines[4].quantity_Friday +
        (aetos_Branches + i) -> arrayDaysMagazines[5].quantity_Saturday +
        (aetos_Branches + i) -> arrayDaysMagazines[6].quantity_Sunday;

      printf("------------Branch AETOS %c-----------\n", branch);
      printf("AETOS %c Month= %d Magazines = %d\n", branch, firstNumberMonth, (totalWeek * numberMonth));

      printf("----------------------------------------\n");
      printf("\n");
      branch++;

    }
  } else if (strcmp(userAnswerOne, "B") == 0) {
    for (int i = 0; i < 5; i++) {
      totalWeek = ((aetos_Branches + i) -> arrayDaysMagazines[0].quantity_Monday +
        (aetos_Branches + i) -> arrayDaysNewspapers[0].quantity_Monday +
        (aetos_Branches + i) -> arrayDaysMagazines[1].quantity_Tuesday +
        (aetos_Branches + i) -> arrayDaysNewspapers[1].quantity_Tuesday +
        (aetos_Branches + i) -> arrayDaysMagazines[2].quantity_Wednesday +
        (aetos_Branches + i) -> arrayDaysNewspapers[2].quantity_Wednesday +
        (aetos_Branches + i) -> arrayDaysMagazines[3].quantity_Thursday +
        (aetos_Branches + i) -> arrayDaysNewspapers[3].quantity_Thursday +
        (aetos_Branches + i) -> arrayDaysMagazines[4].quantity_Friday +
        (aetos_Branches + i) -> arrayDaysNewspapers[4].quantity_Friday +
        (aetos_Branches + i) -> arrayDaysMagazines[5].quantity_Saturday +
        (aetos_Branches + i) -> arrayDaysNewspapers[5].quantity_Saturday +
        (aetos_Branches + i) -> arrayDaysMagazines[6].quantity_Sunday +
        (aetos_Branches + i) -> arrayDaysNewspapers[6].quantity_Sunday)*numberMonth;

      printf("------------Branch AETOS %c-----------\n", branch);
      printf("AETOS %c Month= %d Magazines and Newspapers = %d\n", branch, firstNumberMonth, totalWeek );

      printf("----------------------------------------\n");
      printf("\n");
      branch++;

    }

  }

}
void totalDistributionSpecialDay() {
  char userAnswerOne[5];
  char userAnswerBoth[5];
  char userInput[5];
  int totalDay = 0;
  char days[1], branch = 'A';

  printf("Do you want total quantity for NewsPapers  or Magazines for a special day in  a week per branch? (Enter N for Newspapers or M for Magazines): ");
  scanf("\n%s", userAnswerOne);

  if (strcmp(userAnswerOne, "N") != 0 && strcmp(userAnswerOne, "M") != 0) {
    while (strcmp(userAnswerOne, "N") != 0 && strcmp(userAnswerOne, "M") != 0) {

      printf("Invalid Input. Enter N for Newspapers or M for Magazines: \n");
      scanf("\n%s", userAnswerOne);

    }

  }

  printf("Enter a number for the day in a week:");
  scanf("\n%s", userInput);

  while (atoi(userInput)  < 1 || atoi(userInput) > 7 ) {

        printf("Invalid input. Enter a number:");
        scanf("\n%s", userInput);
    
    

  }
     
     	numberDay = atoi(userInput);
	   

  if (strcmp(userAnswerOne, "N") == 0) {

    for (int i = 0; i < 5; i++) {
      if (numberDay == 1) {
        totalDay = (aetos_Branches + i) -> arrayDaysNewspapers[0].quantity_Monday;
        strcpy(days, "Monday");

      } else if (numberDay == 2) {
        totalDay = (aetos_Branches + i) -> arrayDaysNewspapers[1].quantity_Tuesday;
        strcpy(days, "Tuesday");

      } else if (numberDay == 3) {
        totalDay = (aetos_Branches + i) -> arrayDaysNewspapers[2].quantity_Wednesday;
        strcpy(days, "Wednesday");

      } else if (numberDay == 4) {
        totalDay = (aetos_Branches + i) -> arrayDaysNewspapers[3].quantity_Thursday;
        strcpy(days, "Thursday");

      } else if (numberDay == 5) {
        totalDay = (aetos_Branches + i) -> arrayDaysNewspapers[4].quantity_Friday;
        strcpy(days, "Friday");

      } else if (numberDay == 6) {
        totalDay = (aetos_Branches + i) -> arrayDaysNewspapers[5].quantity_Saturday;
        strcpy(days, "Saturday");

      } else if (numberDay == 7) {
        totalDay = (aetos_Branches + i) -> arrayDaysNewspapers[6].quantity_Sunday;
        strcpy(days, "Sunday");

      }

      printf("------------Branch AETOS %c-----------\n", branch);
      printf("AETOS %c %s Newspapers = %d\n", branch, days, totalDay);

      printf("----------------------------------------\n");
      printf("\n");
      branch++;
    }

  } else if (strcmp(userAnswerOne, "M") == 0) {
    for (int i = 0; i < 5; i++) {
      if (numberDay == 1) {
        totalDay = (aetos_Branches + i) -> arrayDaysMagazines[0].quantity_Monday;
        strcpy(days, "Monday");

      } else if (numberDay == 2) {
        totalDay = (aetos_Branches + i) -> arrayDaysMagazines[1].quantity_Tuesday;
        strcpy(days, "Tuesday");

      } else if (numberDay == 3) {
        totalDay = (aetos_Branches + i) -> arrayDaysMagazines[2].quantity_Wednesday;
        strcpy(days, "Wednesday");

      } else if (numberDay == 4) {
        totalDay = (aetos_Branches + i) -> arrayDaysMagazines[3].quantity_Thursday;
        strcpy(days, "Thursday");

      } else if (numberDay == 5) {
        totalDay = (aetos_Branches + i) -> arrayDaysMagazines[4].quantity_Friday;
        strcpy(days, "Friday");

      } else if (numberDay == 6) {
        totalDay = (aetos_Branches + i) -> arrayDaysMagazines[5].quantity_Saturday;
        strcpy(days, "Saturday");

      } else if (numberDay == 7) {
        totalDay = (aetos_Branches + i) -> arrayDaysMagazines[6].quantity_Sunday;
        strcpy(days, "Sunday");

      }

      printf("------------Branch AETOS %c-----------\n", branch);
      printf("AETOS %c %s Magazines = %d\n", branch, days, totalDay);

      printf("----------------------------------------\n");
      printf("\n");
      branch++;
    }

  }

}

void totalDistributionSelectionPerBranch() {

  char userAnswerOne[5];
  char userAnswerBoth[5];
  printf("Do you want total quantity for NewsPapers  or Magazines in a week per branch? (Enter N for Newspapers or\nM for Magazines): ");
  scanf("\n%s", userAnswerOne);

  if (strcmp(userAnswerOne, "N") != 0 && strcmp(userAnswerOne, "M") != 0) {
    while (strcmp(userAnswerOne, "N") != 0 && strcmp(userAnswerOne, "M") != 0) {

      printf("Invalid Input. Enter N for Newspapers or M for Magazines: \n");
      scanf("\n%s", userAnswerOne);

    }

  }
  if (strcmp(userAnswerOne, "N") == 0) {

    int totalNewsPapersMonday = 0, totalNewsPapersTuesday = 0, totalNewsPapersWednesday = 0;
    int totalNewsPapersThursday = 0, totalNewsPapersFriday = 0;
    int totalNewsPapersSaturday = 0, totalNewsPapersSunday = 0;
    int totalNewsPapers = 0;

    char branch = 'A';

    for (int i = 0; i < 5; i++) {

      totalNewsPapersMonday = (aetos_Branches + i) -> arrayDaysNewspapers[0].quantity_Monday;
      totalNewsPapersTuesday = (aetos_Branches + i) -> arrayDaysNewspapers[1].quantity_Tuesday;
      totalNewsPapersWednesday = (aetos_Branches + i) -> arrayDaysNewspapers[2].quantity_Wednesday;
      totalNewsPapersThursday = (aetos_Branches + i) -> arrayDaysNewspapers[3].quantity_Thursday;
      totalNewsPapersFriday = (aetos_Branches + i) -> arrayDaysNewspapers[4].quantity_Friday;
      totalNewsPapersSaturday = (aetos_Branches + i) -> arrayDaysNewspapers[5].quantity_Saturday;
      totalNewsPapersSunday = (aetos_Branches + i) -> arrayDaysNewspapers[6].quantity_Sunday;

      printf("------------Branch AETOS %c-----------\n", branch);
      printf("AETOS %c Monday_Newspapers = %d\n", branch, totalNewsPapersMonday);
      printf("AETOS %c Tuesday_Newspapers = %d\n", branch, totalNewsPapersTuesday);
      printf("AETOS %c Wednesday_Newspapers = %d\n", branch, totalNewsPapersWednesday);
      printf("AETOS %c Thursday_Newspapers = %d\n", branch, totalNewsPapersThursday);
      printf("AETOS %c Friday_Newspapers = %d\n", branch, totalNewsPapersFriday);
      printf("AETOS %c Saturday_Newspapers = %d\n", branch, totalNewsPapersSaturday);
      printf("AETOS %c Sunday_Newspapers = %d\n", branch, totalNewsPapersSunday);
      printf("Total Newspapers = %d in a Week\n", (totalNewsPapersMonday + totalNewsPapersTuesday + totalNewsPapersWednesday + totalNewsPapersThursday + totalNewsPapersFriday + totalNewsPapersSaturday + totalNewsPapersSunday));
      printf("----------------------------------------\n");
      printf("\n");
      branch++;
    }
  } else if (strcmp(userAnswerOne, "M") == 0) {

    int totalMagazinesMonday = 0, totalMagazinesTuesday = 0, totalMagazinesWednesday = 0;
    int totalMagazinesThursday = 0, totalMagazinesFriday = 0;
    int totalMagazinesSaturday = 0, totalMagazinesSunday = 0;
    int totalMagazines = 0;

    char branch = 'A';

    for (int i = 0; i < 5; i++) {

      totalMagazinesMonday = (aetos_Branches + i) -> arrayDaysMagazines[0].quantity_Monday;
      totalMagazinesTuesday = (aetos_Branches + i) -> arrayDaysMagazines[1].quantity_Tuesday;
      totalMagazinesWednesday = (aetos_Branches + i) -> arrayDaysMagazines[2].quantity_Wednesday;
      totalMagazinesThursday = (aetos_Branches + i) -> arrayDaysMagazines[3].quantity_Thursday;
      totalMagazinesFriday = (aetos_Branches + i) -> arrayDaysMagazines[4].quantity_Friday;
      totalMagazinesSaturday = (aetos_Branches + i) -> arrayDaysMagazines[5].quantity_Saturday;
      totalMagazinesSunday = (aetos_Branches + i) -> arrayDaysMagazines[6].quantity_Sunday;

      printf("------------Branch AETOS %c-----------\n", branch);
      printf("AETOS %c Monday_Magazines = %d\n", branch, totalMagazinesMonday);
      printf("AETOS %c Tuesday_Magazines = %d\n", branch, totalMagazinesTuesday);
      printf("AETOS %c Wednesday_Magazines = %d\n", branch, totalMagazinesWednesday);
      printf("AETOS %c Thursday_Magazines = %d\n", branch, totalMagazinesThursday);
      printf("AETOS %c Friday_Magazines = %d\n", branch, totalMagazinesFriday);
      printf("AETOS %c Saturday_Magazines = %d\n", branch, totalMagazinesSaturday);
      printf("AETOS %c Sunday_Magazines = %d\n", branch, totalMagazinesSunday);
      printf("Total Magazines = %d in a Week\n", (totalMagazinesMonday + totalMagazinesTuesday + totalMagazinesWednesday + totalMagazinesThursday + totalMagazinesFriday + totalMagazinesSaturday + totalMagazinesSunday));
      printf("----------------------------------------\n");
      printf("\n");
      branch++;

    }

  }

}

void totalDistributionPerBranch() {
  int totalDistributionMo;
  int totalDistributionTu;
  int totalDistributionWe;
  int totalDistributionTh;
  int totalDistributionFr;
  int totalDistributionSat;
  int totalDistributionSun;

  int totalNewsPapersMonday = 0, totalNewsPapersTuesday = 0, totalNewsPapersWednesday = 0;
  int totalNewsPapersThursday = 0, totalNewsPapersFriday = 0;
  int totalNewsPapersSaturday = 0, totalNewsPapersSunday = 0;
  int totalNewsPapers = 0;

  int totalMagazinesMonday = 0, totalMagazinesTuesday = 0, totalMagazinesWednesday = 0;
  int totalMagazinesThursday = 0, totalMagazinesFriday = 0;
  int totalMagazinesSaturday = 0, totalMagazinesSunday = 0;
  int totalMagazines = 0;
  char branch = 'A';

  for (int i = 0; i < 5; i++) {

    totalNewsPapersMonday = (aetos_Branches + i) -> arrayDaysNewspapers[0].quantity_Monday;

    totalMagazinesMonday = (aetos_Branches + i) -> arrayDaysMagazines[0].quantity_Monday;

    totalNewsPapersTuesday = (aetos_Branches + i) -> arrayDaysNewspapers[1].quantity_Tuesday;
    totalMagazinesTuesday = (aetos_Branches + i) -> arrayDaysMagazines[1].quantity_Tuesday;
    totalNewsPapersWednesday = (aetos_Branches + i) -> arrayDaysNewspapers[2].quantity_Wednesday;
    totalMagazinesWednesday = (aetos_Branches + i) -> arrayDaysMagazines[2].quantity_Wednesday;
    totalNewsPapersThursday = (aetos_Branches + i) -> arrayDaysNewspapers[3].quantity_Thursday;
    totalMagazinesThursday = (aetos_Branches + i) -> arrayDaysMagazines[3].quantity_Thursday;
    totalNewsPapersFriday = (aetos_Branches + i) -> arrayDaysNewspapers[4].quantity_Friday;
    totalMagazinesFriday = (aetos_Branches + i) -> arrayDaysMagazines[4].quantity_Friday;
    totalNewsPapersSaturday = (aetos_Branches + i) -> arrayDaysNewspapers[5].quantity_Saturday;
    totalMagazinesSaturday = (aetos_Branches + i) -> arrayDaysMagazines[5].quantity_Saturday;
    totalNewsPapersSunday = (aetos_Branches + i) -> arrayDaysNewspapers[6].quantity_Sunday;
    totalMagazinesSunday = (aetos_Branches + i) -> arrayDaysMagazines[6].quantity_Sunday;

    totalDistributionMo = totalNewsPapersMonday + totalMagazinesMonday;
    totalDistributionTu = totalNewsPapersTuesday + totalMagazinesTuesday;
    totalDistributionWe = totalNewsPapersWednesday + totalMagazinesWednesday;
    totalDistributionTh = totalNewsPapersThursday + totalMagazinesThursday;
    totalDistributionFr = totalNewsPapersFriday + totalMagazinesFriday;
    totalDistributionSat = totalNewsPapersSaturday + totalMagazinesSaturday;
    totalDistributionSun = totalNewsPapersSunday + totalMagazinesSunday;

    printf("------------Branch AETOS %c-----------\n", branch);
    printf("AETOS %c Monday_Newspapers = %d, Monday_Magazines =%d , MondayTotal = %d\n", branch, totalNewsPapersMonday, totalMagazinesMonday, totalDistributionMo);
    printf("AETOS %c Tuesday_Newspapers = %d, Tuesday_Magazines =%d , TuesdayTotal = %d\n", branch, totalNewsPapersTuesday, totalMagazinesTuesday, totalDistributionTu);
    printf("AETOS %c Wednesday_Newspapers = %d, Wednesday_Magazines =%d , WednesdayTotal = %d\n", branch, totalNewsPapersWednesday, totalMagazinesWednesday, totalDistributionWe);
    printf("AETOS %c Thursday_Newspapers = %d, Thursday_Magazines =%d , ThursdayTotal = %d\n", branch, totalNewsPapersThursday, totalMagazinesThursday, totalDistributionTh);
    printf("AETOS %c Friday_Newspapers = %d, Friday_Magazines =%d , FridayTotal = %d\n", branch, totalNewsPapersFriday, totalMagazinesFriday, totalDistributionFr);
    printf("AETOS %c Saturday_Newspapers = %d, Saturday_Magazines =%d , SaturdayTotal = %d\n", branch, totalNewsPapersSaturday, totalMagazinesSaturday, totalDistributionSat);
    printf("AETOS %c Sunday_Newspapers = %d, Sunday_Magazines =%d , SundayTotal = %d\n", branch, totalNewsPapersSunday, totalMagazinesSunday, totalDistributionSun);
    printf("Total Magazines and Newspapers =%d\n", (totalDistributionMo + totalDistributionTu + totalDistributionWe + totalDistributionTh + totalDistributionFr + totalDistributionSat + totalDistributionSun));
    printf("----------------------------------------\n");
    printf("\n");
    branch++;
  }

  printf("\n");

}

void totalDistributionPerWeek() {

  char userAnswerOne[5];
  char userAnswerBoth[5];

  int totalNewsPapersMonday = 0, totalNewsPapersTuesday = 0, totalNewsPapersWednesday = 0;
  int totalNewsPapersThursday = 0, totalNewsPapersFriday = 0;
  int totalNewsPapersSaturday = 0, totalNewsPapersSunday = 0;
  int totalNewsPapers = 0;

  int totalMagazinesMonday = 0, totalMagazinesTuesday = 0, totalMagazinesWednesday = 0;
  int totalMagazinesThursday = 0, totalMagazinesFriday = 0;
  int totalMagazinesSaturday = 0, totalMagazinesSunday = 0;
  int totalMagazines = 0;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 6; j++) {

      totalNewsPapersMonday = (aetos_Branches + i) -> arrayNewspapers[j] -> d.quantity_Monday + totalNewsPapersMonday;
      totalNewsPapersTuesday = (aetos_Branches + i) -> arrayNewspapers[j] -> d.quantity_Tuesday + totalNewsPapersTuesday;
      totalNewsPapersWednesday = (aetos_Branches + i) -> arrayNewspapers[j] -> d.quantity_Wednesday + totalNewsPapersWednesday;
      totalNewsPapersThursday = (aetos_Branches + i) -> arrayNewspapers[j] -> d.quantity_Thursday + totalNewsPapersThursday;
      totalNewsPapersFriday = (aetos_Branches + i) -> arrayNewspapers[j] -> d.quantity_Friday + totalNewsPapersFriday;
      totalNewsPapersSaturday = (aetos_Branches + i) -> arrayNewspapers[j] -> d.quantity_Saturday + totalNewsPapersSaturday;
      totalNewsPapersSunday = (aetos_Branches + i) -> arrayNewspapers[j] -> d.quantity_Sunday + totalNewsPapersSunday;

    }

  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {

      totalMagazinesMonday = (aetos_Branches + i) -> arrayMagazines[j] -> d.quantity_Monday + totalMagazinesMonday;
      totalMagazinesTuesday = (aetos_Branches + i) -> arrayMagazines[j] -> d.quantity_Tuesday + totalMagazinesTuesday;
      totalMagazinesWednesday = (aetos_Branches + i) -> arrayMagazines[j] -> d.quantity_Wednesday + totalMagazinesWednesday;
      totalMagazinesThursday = (aetos_Branches + i) -> arrayMagazines[j] -> d.quantity_Thursday + totalMagazinesThursday;
      totalMagazinesFriday = (aetos_Branches + i) -> arrayMagazines[j] -> d.quantity_Friday + totalMagazinesFriday;
      totalMagazinesSaturday = (aetos_Branches + i) -> arrayMagazines[j] -> d.quantity_Saturday + totalMagazinesSaturday;
      totalMagazinesSunday = (aetos_Branches + i) -> arrayMagazines[j] -> d.quantity_Sunday + totalMagazinesSunday;

    }

  }
  totalMagazines = totalMagazinesMonday + totalMagazinesTuesday + totalMagazinesWednesday + totalMagazinesThursday + totalMagazinesFriday + totalMagazinesSaturday + totalMagazinesSunday;

  totalNewsPapers = totalNewsPapersMonday + totalNewsPapersTuesday + totalNewsPapersWednesday + totalNewsPapersThursday + totalNewsPapersFriday + totalNewsPapersSaturday + totalNewsPapersSunday;

  printf("Do you want total quantity for NewsPapers  or Magazines in a week or Both? (Enter N for Newspapers or M for Magazines\nor for both B): ");
  scanf("\n%s", userAnswerOne);

  if (strcmp(userAnswerOne, "N") != 0 && strcmp(userAnswerOne, "M") != 0 && strcmp(userAnswerOne, "B") != 0) {
    while (strcmp(userAnswerOne, "N") != 0 && strcmp(userAnswerOne, "M") != 0 && strcmp(userAnswerOne, "B") != 0) {

      printf("Invalid Input. Enter N for Newspapers or M for Magazines or B for both: \n");
      scanf("\n%s", userAnswerOne);

    }

  }
  if (strcmp(userAnswerOne, "N") == 0) {

    printf("--------Newspapers-------\n");
    printf("Monday = %d\n", totalNewsPapersMonday);
    printf("Tuesday = %d\n", totalNewsPapersTuesday);
    printf("Wednesday =%d\n", totalNewsPapersWednesday);
    printf("Thursday = %d\n", totalNewsPapersThursday);
    printf("Friday = %d\n", totalNewsPapersFriday);
    printf("Saturday = %d\n", totalNewsPapersSaturday);
    printf("Sunday = %d\n", totalNewsPapersSunday);
    printf(" ");
    printf("Total Newspapers = %d\n", totalNewsPapers);
    printf("----------------------\n");

  } else if (strcmp(userAnswerOne, "M") == 0) {

    printf("--------Magazines-------\n");
    printf("Monday = %d\n", totalMagazinesMonday);
    printf("Tuesday = %d\n", totalMagazinesTuesday);
    printf("Wednesday =%d\n", totalMagazinesWednesday);
    printf("Thursday = %d\n", totalMagazinesThursday);
    printf("Friday = %d\n", totalMagazinesFriday);
    printf("Saturday = %d\n", totalMagazinesSaturday);
    printf("Sunday = %d\n", totalMagazinesSunday);
    printf(" ");
    printf("Total Magazines = %d\n", totalMagazines);
    printf("----------------------\n");

  } else if (strcmp(userAnswerOne, "B") == 0) {

    printf("--------Newspapers-------\n");
    printf("Monday = %d\n", totalNewsPapersMonday);
    printf("Tuesday = %d\n", totalNewsPapersTuesday);
    printf("Wednesday =%d\n", totalNewsPapersWednesday);
    printf("Thursday = %d\n", totalNewsPapersThursday);
    printf("Friday = %d\n", totalNewsPapersFriday);
    printf("Saturday = %d\n", totalNewsPapersSaturday);
    printf("Sunday = %d\n", totalNewsPapersSunday);

    printf("Total Newspapers = %d\n", totalNewsPapers);
    printf("-------------------------\n");
    printf("\n");

    printf("--------Magazines-------\n");
    printf("Monday = %d\n", totalMagazinesMonday);
    printf("Tuesday = %d\n", totalMagazinesTuesday);
    printf("Wednesday =%d\n", totalMagazinesWednesday);
    printf("Thursday = %d\n", totalMagazinesThursday);
    printf("Friday = %d\n", totalMagazinesFriday);
    printf("Saturday = %d\n", totalMagazinesSaturday);
    printf("Sunday = %d\n", totalMagazinesSunday);

    printf("Total Magazines = %d\n", totalMagazines);
    printf("-------------------------\n");
    printf("\n");

    printf("--------Newspapers And Magazines-------\n");
    printf("Total Newspapers and Magazines = %d\n", (totalMagazines + totalNewsPapers));
    printf("---------------------------------------\n");
    printf("\n");
  }

}

void displayMenu() {
  char userInput[5];

  do {

    printf("\n1) Total quantity  distribution of (NewsPapers or Magazines),(NewsPapers and Magazines) in a week\n");
    printf("2) Total quantity distribution of NewsPapers and Magazines per branch in a week\n");
    printf("3) Total quantity distribution of NewsPapers or Magazines per branch in a week\n");
    printf("4) Total quantity  distribution  of NewsPapers or Magazines per branch for special day in a Week\n");
    printf("5) Total quantity  distribution of (NewsPapers or Magazines),(NewsPapers and Magazines)per branch for x months(Consider 1 month= 4 weeks)\n");
    printf("6) Total quantity  distribution of (NewsPapers or Magazines),(NewsPapers and Magazines) per branch for x months for special day of week(Consider 1 month= 4 weeks)\n");
    printf("7) Total profit per branch or for all firm AETOS for x months for (NewsPapers or Magazines),(NewsPapers and Magazines)\n");
    printf("8) Exit programm\n");

    printf("---------------------------\n");
    printf("Enter a number:");
    scanf("\n%s", userInput);

    while (atoi(userInput)<1 || atoi(userInput)>8 ) {

    

          printf("Invalid input. Enter a number:");
          scanf("\n%s", userInput);
        
      

    }
     
     	value = atoi(userInput);
	 
    switch (value) {

    case 1:

      totalDistributionPerWeek();
      break;
    case 2:
      totalDistributionPerBranch();
      break;
    case 3:
      totalDistributionSelectionPerBranch();
      break;
    case 4:
      totalDistributionSpecialDay();
      break;
    case 5:
      totalDistributionPerMonth();
      break;
    case 6:
      totalDistributionPerMonth_Day();
      break;
    case 7:
     totalProfitPerMonth();
      break;
    case 8:
      printf("hey8");
      break;

    }

  } while (value != 8);

}


















