// Pseudocode Draft
// PACE Group 2

#include <iostream>		// cout and cin
#include <cstdlib>		// assuming srand and rand will be used
#include <ctime>		// use time function
#include <iomanip>		// array table spacing (setw)

using namespace std;

// Assigns ships to a 10x10 2D-Array
// Pre:	 arrayINT passed with read/write permission
//		 table size set beforehand
// Post: assigns values/ships to 10x10 array
void initTable( /* OUT */ int arrayINT[][10], /* IN */ int tableSize );

// Outputs the 2D-Array to the console
// Pre:	 arrayINT passed as read only, including tableSize
// Post: prints tableSize to the console
void printTable( /* IN */ const int arrayINT[][10], /* IN */ int tableSize);

// Function that controls enemy movement
// Pre:	 pass arrayINT with read/write permission and with rowGuess/colGuess with valid values
// Post: modifies the array and assigns values to rowLoc and colLoc
void opposingPlayer( /* INOUT */ int arrayINT[][10], /* IN */ int rowGuess, /* IN */ int colGuess, /* OUT */ int rowLoc, /* OUT */ int colLoc );

// Function that allows user to guess ship location
// Pre:  pass arrayINT with read/write permission and with rowGuess/colGuess with valid values
// Post: modifies the array and assigns values to rowLoc and colLoc
void mainPlayer( /* INOUT */ int arrayINT[][10], /* IN */ int rowGuess, /* IN */ int colGuess, /* OUT */ int rowLoc, /* OUT */ int colLoc );


const int TABLE_SIZE = 10;  // declare int const TABLE_SIZE, maybe 10?


int main()
{
	int tableSize;      // declare int tableSize; local variable for tableSize, prevent from using global constant
	int shipDestroyed;  // declare int shipDestroyed; manages total number of ship destroyed
	int userWinCounter; // declare int userWinCounter; tracks total of rounds won
	int userLossCounter;// declare int userLossCounter; tracks total of rounds loss
	int botWinCounter;  // declare int botWinCounter; tracks total of rounds won
	int botLossCounter; // declare int botLossCounter; tracks total of rounds loss
	int rowGuess;       // declare int rowGuess; user's guess
	int colGuess;       // declare int colGuess; user's guess
	int colLoc;         // declare int colLoc;	actual column location
	int rowLoc;         // declare int rowLoc;	actual row location
	int arrayINT[TABLE_SIZE][TABLE_SIZE];    // declare int arrayINT[][]
	bool roundEnd = false;      // bool roundEnd;
	bool exit;          // bool exit; used for menu? assuming that the game is wrapped in a loop
	char charExit;      // char charExit; prompt use to leave game

	tableSize = TABLE_SIZE; // assign TABLE_SIZE to tableSize


    initTable(arrayINT, tableSize);         // call initTable(arrayINT, tableSize) CHANGE: Moved initTable call outside loop since it only needs to be initialized once
	do {                                    // do-while

		printTable(arrayINT, tableSize);    // call printArray(arrayINT, tableSize) CHANGE: Did you mean call printTable function?
		while (!roundEnd) {                  // while loop (!roundEnd)
			mainPlayer(arrayINT, rowGuess, colGuess, rowLoc, colLoc);
			opposingPlayer(arrayINT, rowGuess, colGuess, rowLoc, colLoc);// several if statement that calls mainPlayers() opposingPlayers() until round is finished
			// call printTable to updated table in-between mainPlayer and OpposingPlayers
			// an if statement that increments the user's or bot's win/loss counter
		}// end of while loop

		// ask user to stop game or keep going via console (char charExit )
		// if user says Y, set bool exit to true
		// if user says N, set bool exit to false
		}// end of do statement
		while (!exit);// while (!exit)

	return 0;

}

// Assigns ships to a 10x10 2D-Array
// Pre:	 arrayINT passed with read/write permission
//		 table size set beforehand
// Post: assigns values/ships to 10x10 array
void initTable( /* OUT */ int arrayINT[][10], /* IN */ int tableSize )
{
	cout << "calling initTable" << endl;	// stub debug
}

// Outputs the 2D-Array to the console
// Pre:	 arrayINT passed as read only, including tableSize
// Post: prints tableSize to the console
void printTable( /* IN */ const int arrayINT[][10], /* IN */ int tableSize)
{
	cout << "calling printTable" << endl;	// stub debug
}

// Function that controls enemy movement
// Pre:	 pass arrayINT with read/write permission and with rowGuess/colGuess with valid values
// Post: modifies the array and assigns values to rowLoc and colLoc
void opposingPlayer ( /* INOUT */ int arrayINT[][10], /* IN */ int rowGuess, /* IN */ int colGuess, /* OUT */ int rowLoc, /* OUT */ int colLoc )
{
	cout << "calling opposingPlayer" << endl;	// stub debug
}

// Function that allows user to guess ship location
// Pre:  pass arrayINT with read/write permission and with rowGuess/colGuess with valid values
// Post: modifies the array and assigns values to rowLoc and colLoc
void mainPlayer( /* INOUT */ int arrayINT[][10], /* IN */ int rowGuess, /* IN */ int colGuess, /* OUT */ int rowLoc, /* OUT */ int colLoc )
{
	cout << "calling mainPlayer" << endl;	// stub debug
}
