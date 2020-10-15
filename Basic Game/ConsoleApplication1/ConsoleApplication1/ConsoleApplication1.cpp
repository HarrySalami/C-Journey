// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<cstdlib>
#include<ctime>


void PrintArray(int array[], int count)  //function to print out array of guesses 
{
    for (int i = 0; i < count; i++) 
    {
        std::cout << array[i] << "\t";
    }
    std::cout << "\n";
    std::cout << "It took you " <<count << " tries to guess the number ...WELL DONE!" << std::endl;
    std::cout << "\n";
       
}

void PlayGame()
{ 
    int guesses[251];//array to store users guesses 
    int GuessCount = 0;//array to store the count of guesses 
    int random = rand() % 251;  //Generate random number using modulus * dividing by 251 
    std::cout << random << std::endl; 
    std::cout << "Guess a number ";
    while (true)
    {
        int guess;
        std::cin >> guess;
        guesses[GuessCount] = guess;
        GuessCount++;
        //everytime the users guesses the int is stored inguess array and the guesss count is incremented by 1
        if (guess == random)
        {
            std::cout << "You win\n";
            break;
        }
        else if (guess < random)
        {
            std::cout << "Too low\n";
        }
        else if (guess > random)
        {
            std::cout << "Too high\n";
        }
    }
    PrintArray(guesses, GuessCount);
}

int main()
{
    srand(time(NULL));

    int choice;  //variable for users choice 
    

    do
    {
        std::cout << "0. Quit" << std::endl << "1.Play Game\n";   //outputs welcome text to user 
        std::cin >> choice;   //takes user input and stores in choice varible  

        switch (choice)  //start of switch statement , will perform ations based on user input 
        {
        case 0:
                std::cout << "Thanks for nothing\n";
                return 0;
                //if case of user input 0 ...
        case 1:
            PlayGame();
            break;


        }
    }

    while (choice!=0);  // will loop till user selects 
}


