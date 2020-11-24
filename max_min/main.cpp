#include <iostream>

/*=============================================
        NAME: JIMOH FATAI OLARINDE
       COURSE: SOFTWARE ENGINEERING
   TOPIC: MAXIMUM AND MINIMUM OF A TABLE
=============================================*/

int main()
{
   //Minimum
    int B[] = {49,42,35,28,21,14,7,1,7,14,21,28,35,42,49,};
     int Min = B[0];
     for(int i=1;i<15;i++)
     if(B[i]<Min)
       Min = B[i];
    std::cout<< "The Minimum value of the table is: " << Min<< std::endl;

    //Maximum
    int A[] = {49,42,35,28,21,14,7,1,7,14,21,28,35,42,49,};
         int Max = A[0];
         for(int i=1;i<15;i++)
         if(A[i]>Max)
           Max = A[i];
        std::cout<< "The maximum value of the table is: " << Max<< std::endl;



}
