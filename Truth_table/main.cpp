#include <iostream>

/*=============================================
        NAME: JIMOH FATAI OLARINDE
       COURSE: SOFTWARE ENGINEERING
   TOPIC: TRUTH TABLE FOR OR : AND GATE
=============================================*/


int main()
{
  bool bAnswer;
  std::cout<< "OR Table\n\n";
  std::cout<<"0 + 0 + 0 = " <<(bAnswer = 0 + 0 + 0) << std::endl;
  std::cout<<"0 + 0 + 1 = " <<(bAnswer = 0 + 0 + 1) << std::endl;
  std::cout<<"0 + 1 + 0 = " <<(bAnswer = 0 + 1 + 0) << std::endl;
  std::cout<<"0 + 1 + 1 = " <<(bAnswer = 0 + 1 + 1) << std::endl;
  std::cout<<"1 + 0 + 0 = " <<(bAnswer = 1 + 0 + 0) << std::endl;
  std::cout<<"1 + 0 + 1 = " <<(bAnswer = 1 + 0 + 1) << std::endl;
  std::cout<<"1 + 1 + 0 = " <<(bAnswer = 1 + 1 + 0) << std::endl;
  std::cout<<"1 + 1 + 1 = " <<(bAnswer = 1 + 1 + 1) << std::endl;




  std::cout<< "AND Table\n\n";
  std::cout<<"0 & 0 & 0 = " <<(bAnswer = 0 & 0 & 0) << std::endl;
  std::cout<<"0 & 0 & 1 = " <<(bAnswer = 0 & 0 & 1) << std::endl;
  std::cout<<"0 & 1 & 0 = " <<(bAnswer = 0 & 1 & 0) << std::endl;
  std::cout<<"0 & 1 & 1 = " <<(bAnswer = 0 & 1 & 1) << std::endl;
  std::cout<<"1 & 0 & 0 = " <<(bAnswer = 1 & 0 & 0) << std::endl;
  std::cout<<"1 & 0 & 1 = " <<(bAnswer = 1 & 0 & 1) << std::endl;
  std::cout<<"1 & 1 & 0 = " <<(bAnswer = 1 & 1 & 0) << std::endl;
  std::cout<<"1 & 1 & 1 = " <<(bAnswer = 1 & 1 & 1) << std::endl;


  return 0;

}

