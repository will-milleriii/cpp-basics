#include <iostream> // preprocessor directive followed by a header file

void PrintIntroduction(int Difficulty)
{
    // print to terminal

    std::cout << "You are a Detective trying to solve a Level " <<Difficulty; //std = namespace , :: = scope operator, cout (definied in std namespace)
    //std::cout << std::endl;
    std::cout << " mystery. The thief leaves increasingly difficult combinations of numbers\n";
    
}

bool PlayGame(int Difficulty){

     PrintIntroduction(Difficulty);

    //declare variables

    int FirstCode = rand() % Difficulty + 1;
    int SecondCode = rand() % Difficulty + 1;
    int ThirdCode = rand() % Difficulty + 1;

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
        std::cout << "\nYou solved the puzzle! You move to the next level\n";
        return true;
    } else {
        std::cout << "\nSorry that is the wrong answer. Try again before the thief gets away!";
        return false;
    }


}




int main()
{

    srand(time(NULL));

    int LevelDifficulty = 1;

    int const maxLevelDifficulty= 5;

    while (LevelDifficulty <= maxLevelDifficulty) //loop until all levels are completed
    {
        bool LevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (LevelComplete)
        {
            //need to increase difficulty of puzzle
            ++LevelDifficulty;

        }
        
    }
   std::cout << "Congratulations! You solved all the clues and captured the thief!"; 
    return 0;
}