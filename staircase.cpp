//Stair Case Project

//Include library <iostream>
#include <iostream>

//funtion declaration
int main();

//function defination
int main() {

  //Local variable initialized
  double x{0.0};

  //Output and user input
  std::cout << "Enter value of x: ";
  std::cin >> x;

  //This local variable should hold the result of stair( x )
  int stair_result{0};

  //If statement for x < 0
  if(x < 0)

  //If statement for inputed integer x - x =0; ==Initialize Test on result.
  { if( ( (int) x) - x == 0 )

    //Folowing stair result ensures integer will remain same for the output
    {
     stair_result=( (int) x/1 );
    }

    //Else statement for floting-number output to discard any remainder occured during the calculation
    else
    {
     stair_result=( (int) x/1 ) - 1;
    }
  }

  //Else statement for x < 0, to discard any remainder occured during the calculation
  else
  {
    stair_result=(int)x/1;
  }

  //Print ""The value of stair(x) is: stair_result" in the console
  std::cout << "The value of stair(x) is: " << stair_result << std::endl;

  //Pause the window of executable
  system("pause");

  //Returned the difined function to 0
  return 0;
}

