#include <iostream>

/*=============================================
        NAME: JIMOH FATAI OLARINDE
       COURSE: SOFTWARE ENGINEERING
  TOPIC: COMPUTATION OF FABONACCI SEQUENCE
=============================================*/



int fibonacci(int n)
{
    if((n==0)||(n==1))
    {
        return(n);
    }
    else
    {
        return(fibonacci(n-1)+fibonacci(n-2));
    }
}

int main()
{
    int n, i=0;
    std::cout<<"Enter the number of terms for Finonacci: ";
    std::cin>>n;
    std::cout<<"\nFibonacci sequence are as follows: \n";

    while(i<n)
    {
        std::cout<<" "<<fibonacci(i);
        i++;
    }

}
