#include <iostream> // preprocessor directive followed by a header file

int main()
{

    // print to terminal

    std::cout << "You are a Detective trying to solve the mystery"; //std = namespace , :: = scope operator, cout (definied in std namespace)
    std::cout << std::endl;
    std::cout << "The thief leaves increasingly difficult combinations of numbers";
    

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


    // declare a variable for the plater's guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    // std::cout << "You entered: " << GuessA << GuessB <<GuessC;


    //declare variables for guess sum and product
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProd = GuessA * GuessB * GuessC;

    //if statement
    if (GuessSum == CodeSum && GuessProd == CodeProduct)
    {
        std::cout << "You solved the puzzle!";
    } else {
        std::cout << "Sorry that is the wrong answer. The thief got away..."
    }
    

    return 0;
}