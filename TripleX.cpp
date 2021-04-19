#include <iostream> // preprocessor directive followed by a header file

void PrintIntroduction()
{
    // print to terminal

    std::cout << "You are a Detective trying to solve the mystery\n"; //std = namespace , :: = scope operator, cout (definied in std namespace)
    //std::cout << std::endl;
    std::cout << "The thief leaves increasingly difficult combinations of numbers\n";
    
}

bool PlayGame(){

     PrintIntroduction();

    //declare variables

    int FirstCode = 5;
    int SecondCode = 2;
    int ThirdCode = 4;

    int CodeSum = FirstCode + SecondCode + ThirdCode;
    int CodeProduct = FirstCode * SecondCode * ThirdCode;


    //print out declared functions

    //std::cout <<std::endl;
    std::cout << "There are 3 numbers in the code that add up to: " << CodeSum;
    std::cout << "\nThe code's product is: " << CodeProduct;

    std::cout << "\nEnter the correct code to continue to the next clue\n\n";


    // declare a variable for the plater's guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    // std::cout << "You entered: " << GuessA << GuessB <<GuessC;


    //declare variables for guess sum and product
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProd = GuessA * GuessB * GuessC;

    //conditional if player guesses correctly or incorrectly
    if (GuessSum == CodeSum && GuessProd == CodeProduct)
    {
        std::cout << "You solved the puzzle!";
        return true;
    } else {
        std::cout << "Sorry that is the wrong answer. The thief got away...";
        return false;
    }


}




int main()
{
    while (true)
    {
        bool LevelComplete = PlayGame();
        std::cin.clear();
        std::cin.ignore();
    }
    
   
    
    return 0;
}