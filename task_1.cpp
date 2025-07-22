#include <iostream>
#include <cstdlib>
#include <ctime>

/* Task: Create a number guessing game.
   The program generates a random number between 1 and 100.
   The user guesses until they get the right number.
   After each guess, the program gives feedback: too high, too low, or correct. */

using namespace std;

int main() 
{
    // Seed the random number generator using the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomnumber = rand() % 100 + 1;

    int userguess;      // Stores the user's guess
    int attempts = 0;   // Counts number of guesses made by user

    // Display the game header
    cout << "-------------------------------\n";
    cout << "Number Guessing Game\n";
    cout << "-------------------------------\n";
    cout << "Can you guess a number between 1 and 100?\n";

    // Infinite loop until user guesses the correct number
    while(true)
    {
        cout << "Enter Your Guess: ";
        cin >> userguess;
        attempts++;  // Increment the attempt counter

        // Check if guess is higher than the random number
        if (userguess > randomnumber) 
        {
            cout << "Too High! Try Once More.\n";
        }
        // Check if guess is lower than the random number
        else if (userguess < randomnumber)
        {
            cout << "Too Low! Try Once More.\n";
        }
        // If guess is correct, display success message and break the loop
        else 
        {
            cout << "Nice! You Guessed it in Finally " << attempts << " Tries.\n";
            break;
        }
    }

    return 0; // Exit the program
}
