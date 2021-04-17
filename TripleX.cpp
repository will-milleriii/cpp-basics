#include <iostream> // preprocessor directive followed by a header file

int main()
{

    // print to terminal

    std::cout << "You are a Detective trying to solve the mystery"; //std = namespace , :: = scope operator, cout (definied in std namespace)
    std::cout << std::endl;
    std::cout << "The killer leaves increasingly difficult combinations of numbers";
    

    //declare variables

    int FirstCode = 5;
    int SecondCode = 2;
    int ThirdCode = 4;

    int CodeSum = FirstCode + SecondCode + ThirdCode;
    int CodeProduct = FirstCode * SecondCode * ThirdCode;


    //print out declared functions

    std::cout <<std::endl;
    std::cout << "There are 3 numbers in the code that add up to: " << CodeSum << std::endl;
    std::cout << "The code's product is: " << CodeProduct << std::endl;

    std::cout << "Enter the correct code to continue to the next clue" <<std::endl;

    return 0;
}