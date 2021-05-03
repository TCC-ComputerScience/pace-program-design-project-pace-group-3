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
void initTable( /* OUT */ char arrayCHAR[][10], /* IN */ int tableSize );

// Outputs the 2D-Array to the console
// Pre:	 arrayINT passed as read only, including tableSize
// Post: prints tableSize to the console
void printTable( /* IN */ const char arrayCHAR[][10], /* IN */ int tableSize);

// Function that controls enemy movement
// Pre:	 pass arrayINT with read/write permission and with rowGuess/colGuess with valid values
// Post: modifies the array and assigns values to rowLoc and colLoc
void opposingPlayer( /* INOUT */ char arrayCHAR[][10], /* IN */ int rowGuess, /* IN */ int colGuess, /* OUT */ int rowLoc, /* OUT */ int colLoc );

// Function that allows user to guess ship location
// Pre:  pass arrayINT with read/write permission and with rowGuess/colGuess with valid values
// Post: modifies the array and assigns values to rowLoc and colLoc
void mainPlayer( /* INOUT */ char arrayCHAR[][10], /* IN */ int rowGuess, /* IN */ int colGuess, /* OUT */ int rowLoc, /* OUT */ int colLoc );


const int TABLE_SIZE = 10;  // declare int const TABLE_SIZE, maybe 10?


int main()
{
	int tableSize;                              // declare int tableSize; local variable for tableSize, prevent from using global constant
	int shipDestroyed;                          // declare int shipDestroyed; manages total number of ship destroyed
	int userWinCounter = 0;                     // declare int userWinCounter; tracks total of rounds won
	int userLossCounter = 0;                    // declare int userLossCounter; tracks total of rounds loss
	int botWinCounter = 0;                      // declare int botWinCounter; tracks total of rounds won
	int botLossCounter = 0;                     // declare int botLossCounter; tracks total of rounds loss
	int rowGuess = 3;                           // declare int rowGuess; user's guess
	int colGuess = 3;                           // declare int colGuess; user's guess
	int colLoc = 3;                             // declare int colLoc;	actual column location
	int rowLoc = 3;                             // declare int rowLoc;	actual row location
	char arrayCHAR[TABLE_SIZE][TABLE_SIZE];     // declare int arrayINT[][]        CHANGED FROM INT ARRAY TO CHAR ARRAY
	bool roundEnd = false;                      // bool roundEnd;
	bool exit = true;                           // bool exit; used for menu? assuming that the game is wrapped in a loop
	char charExit = 'e';                        // char charExit; prompt use to leave game

	for (int i = 0; i < 10; i++) {              //THIS IS JUST FOR TEST PURPOSES
        for (int j = 0; j < 10; j++) {
            arrayCHAR[i][j] = '~';
        }
	}

	tableSize = TABLE_SIZE;     // assign TABLE_SIZE to tableSize

	do {// do-while
		initTable(arrayCHAR, tableSize);                                            // call initTable(arrayINT, tableSize)
		printTable(arrayCHAR, tableSize);                                           // call printArray(arrayINT, tableSize) DID YOU MEAN printTable?
		while (!roundEnd) {                                                         // while loop (!roundEnd)
			if (!roundEnd) {
                    mainPlayer(arrayCHAR, rowGuess, colGuess, rowLoc, colLoc);
                    opposingPlayer(arrayCHAR, rowGuess, colGuess, rowLoc, colLoc);
                    }                                                               // several if statement that calls mainPlayers() opposingPlayers() until round is finished
			printTable(arrayCHAR, tableSize);                                       // call printTable to updated table in-between mainPlayer and OpposingPlayers
			if (rowGuess == rowLoc && colGuess == colLoc)
                userWinCounter++;                                                   // an if statement that increments the user's or bot's win/loss counter
            else
                botWinCounter++;
            cout << "Set roundEnd to true or false" << endl;
            cin >> roundEnd;                                                        // FOR TESTING PURPOSES
		}                                                                           // end of while loop

		cout << "Do you want to quit this great game?";
		cin >> charExit;                                                            // ask user to stop game or keep going via console (char charExit )
		if (toupper(charExit) == 'Y') {                                             // if user says Y, set bool exit to true
            exit = true;
		}
		else if (toupper(charExit) == 'N') {                                        // if user says N, set bool exit to false
            exit = false;
		}                                                                           // end of do statement
	}
    while(!exit);                                                                   // while (!exit)


	return 0;

}

// Assigns ships to a 10x10 2D-Array
// Pre:	 arrayINT passed with read/write permission
//		 table size set beforehand
// Post: assigns values/ships to 10x10 array
void initTable( /* OUT */ char arrayCHAR[][10], /* IN */ int tableSize )
{
	cout << "calling initTable" << endl;	// stub debug
}

// Outputs the 2D-Array to the console
// Pre:	 arrayINT passed as read only, including tableSize
// Post: prints tableSize to the console
void printTable( /* IN */ const char arrayCHAR[][10], /* IN */ int tableSize)
{
	cout << "calling printTable" << endl;	        // stub debug
	for (int i = 0; i < 10; i++) {                  //for int i is 0, i is less than 10, i increments
        for (int j = 0; j < 10; j++) {              //for int j is 0, j is less than 10, j increments
            cout << setw(2) << arrayCHAR[i][j];     //output arrayCHAR[i][j]
        }
        cout << endl;                               //skip to next line
	}
}

// Function that controls enemy movement
// Pre:	 pass arrayINT with read/write permission and with rowGuess/colGuess with valid values
// Post: modifies the array and assigns values to rowLoc and colLoc
void opposingPlayer ( /* INOUT */ char arrayCHAR[][10], /* IN */ int rowGuess, /* IN */ int colGuess, /* OUT */ int rowLoc, /* OUT */ int colLoc )
{
	cout << "calling opposingPlayer" << endl;	// stub debug
}

// Function that allows user to guess ship location
// Pre:  pass arrayINT with read/write permission and with rowGuess/colGuess with valid values
// Post: modifies the array and assigns values to rowLoc and colLoc
void mainPlayer( /* INOUT */ char arrayCHAR[][10], /* IN */ int rowGuess, /* IN */ int colGuess, /* OUT */ int rowLoc, /* OUT */ int colLoc )
{
	cout << "calling mainPlayer" << endl;	// stub debug
}
