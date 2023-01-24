#include <iostream>

int main();
int stair();

double x{0.0};
int stair_result{0};

int stair()
{
  if(x < 0)
  {
    if ( (int)x - x == 0)
    {
        stair_result = (int)x;
    }
    else
    {
        stair_result = (int)x - 1;
    }
  }
  else
  {
    stair_result=(int)x;
  }

  return stair_result;
}

int main()
{
    char e{e};

    while(1)
    {
        std::cout << "For stair(x), enter the value of x: "; 
        std::cin >> x;
        std::cout << "The value of stair(x) is: " << stair() << std::endl;
        std::cout << "Press e to exit" << std::endl;
        if (x == e)
        {
            break;
        }
    }
    return 0;
}



