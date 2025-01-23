#include <stdio.h>

#include <stdlib.h>

#include <string.h>


struct point {
   int x; // για τον άξονα χ
   int y; // για τον άξονα y
};

struct circle {
   struct point k;// ως κέντρο κύκλου που στην ουσία είναι ένα σημείο
   float r; // ως ακτίνα κύκλου
};

struct triangleABC{
	struct point A;
	struct point B;
	struct point C; 
};

struct circle2{
	struct point H;
	struct point Z;
	struct point T;
	
};

struct poly{
	struct point L;
	struct point M;
	struct point N;
	struct point X;
	
	
};

struct lineF{
	struct point M;
	struct point I;
	
};

void updatePoints(struct point *pointerE, struct circle *pointerC ,struct triangleABC *pointerTriangle,struct circle2 *pointerC2,
struct poly *pointerPoly,struct lineF *pointerF);

int main( ) {
	
   struct point e; // Σημείο Ε
   struct circle c; // Κύκλος circle
   
   struct triangleABC *pointerTriangle;
   struct circle2 *pointerC2;
   struct poly    *pointerPoly;
   struct lineF   *pointerLine;
   struct point  *pointerE;
   struct circle *pointerC;
   pointerE = &e;
   pointerC = &c;
   pointerTriangle = (struct triangleABC*)malloc(sizeof(struct triangleABC));
   pointerC2 = (struct circle2*)malloc(sizeof(struct circle2));
   pointerPoly = (struct poly*)malloc(sizeof(struct poly));
   pointerLine = (struct lineF*)malloc(sizeof(struct lineF));
   
   
  

   e.x = 8; // τιμές του σημείου Ε
   e.y = 2;

   c.k.x = 8; // τιμές του κύκλου circle
   c.k.y = 8;
   c.r = 2.0;
   
   pointerTriangle->A.x=-6;
   pointerTriangle->A.y = 4;
   
   pointerTriangle->B.x = 2;
   pointerTriangle->B.y = 0;
   
   pointerTriangle->C.x = 4;
   pointerTriangle->C.y = 6;
   
   pointerC2->H.x = -6;
   pointerC2->H.y = -2;
   
   pointerC2->T.x = -4;
   pointerC2->T.y = -8;
   
   pointerC2->Z.x =-12;
   pointerC2->Z.y = -6;
   
   pointerPoly->L.x = 6;
   pointerPoly->L.y = -4;
   
   pointerPoly->M.x = 4;
   pointerPoly->M.y = -8;
   
   pointerPoly->N.x = 8;
   pointerPoly->N.y = -10;
   
   pointerPoly->X.x = 10;
   pointerPoly->X.y = -6;
   
   pointerLine->M.x =-6;
   pointerLine->M.y = 8;
   
   pointerLine->I.x = -12;
   pointerLine->I.y = 2;
   
   updatePoints(pointerE, pointerC ,pointerTriangle,pointerC2,pointerPoly,pointerLine);

   /* εκτύπωση των τιμών Ε και circle */
   printf("Point E is located at x = %d and y = %d \n", e.x, e.y);
   printf("Circle center is located at x = %d and y = %d with radius = %.2f \n", c.k.x, c.k.y, c.r);
   printf("--------------------------------------------------\n");
   printf("Triangle point A is located at x = %d and y = %d\n",pointerTriangle->A.x,pointerTriangle->A.y);
   printf("Triangle point B is located at x = %d and y = %d\n",pointerTriangle->B.x,pointerTriangle->B.y);
   printf("Triangle point C is located at x = %d and y = %d\n ",pointerTriangle->C.x,pointerTriangle->C.y);
   printf("--------------------------------------------------\n");
   printf("Circle2  point H is located at x = %d and y = %d\n",pointerC2->H.x,pointerC2->H.y);
   printf("Circle2  point T is located at x = %d and y = %d\n",pointerC2->T.x,pointerC2->T.y);
   printf("Circle2  point Z is located at x = %d and y = %d\n",pointerC2->Z.x,pointerC2->Z.y);
   printf("--------------------------------------------------\n");
   printf("Poly  point L is located at x = %d and y = %d\n",pointerPoly->L.x,pointerPoly->L.y);
   printf("Poly  point M is located at x = %d and y = %d\n",pointerPoly->M.x,pointerPoly->M.y);
   printf("Poly  point N is located at x = %d and y = %d\n",pointerPoly->N.x,pointerPoly->N.y);
   printf("Poly  point X is located at x = %d and y = %d\n",pointerPoly->X.x,pointerPoly->X.y);
   printf("--------------------------------------------------\n");
   printf("Line F   point M is located at x = %d and y = %d\n",pointerLine->M.x,pointerLine->M.y);
   printf("Line F   point I is located at x = %d and y = %d\n",pointerLine->I.x,pointerLine->I.y);
   
   //system("pause");
   return 0;
}


void updatePoints(struct point *pointerE, struct circle *pointerC ,struct triangleABC *pointerTriangle,struct circle2 *pointerC2,
struct poly *pointerPoly,struct lineF *pointerF){
	
	pointerE->x = pointerTriangle->A.x;
	pointerE->y = pointerTriangle->A.y;
	pointerC->k.x= pointerTriangle->C.x;
	pointerC->k.y = pointerTriangle->C.y;
	pointerF->I.x = pointerC2->Z.x;
	pointerF->I.y = pointerC2->Z.y;
	pointerF->M.x = pointerTriangle->A.x;
	pointerF->M.y = pointerTriangle->A.y;
    pointerPoly->L.x= pointerC2->H.x;
    pointerPoly->L.y = pointerC2->H.y;
    pointerPoly->N.x = pointerC2->T.x;
    pointerPoly->N.y = pointerC2->T.y;
    pointerPoly->M.x = pointerC2->T.y;
    pointerPoly->M.y = pointerC2->Z.y;
    pointerPoly->X.x = pointerC2->H.y;
    pointerPoly->X.y = pointerC2->T.x; 
	
	
	
	
}
