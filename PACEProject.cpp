/*Pace Project
  Purpose: To let the user play a one-player game of Battleship
  Written By: Hunter Pollock, Benjamin Johnson, and Zhengyu Jiang
  Last Modified: 4/24/21
  */

  #include <iostream>

  using namespace std;

  enum Ships{MINESWEEPER = 2, FRIGATE = 3, CRUISER = 4, BATTLESHIP = 5};

  typedef char GameBoard[10][10];

  //Initializes board with values
  //Pre: None
  //Post: board is filled with car values
  void InitBoard(GameBoard& board);

  //Places a ship into the gameBoard array in a randomized location based on ship type
  //Pre: none
  //Post: A ship is placed onto board in a randomized, valid location
  void PlaceShip(Ships shipType, GameBoard& board);

  //Lets the user play Battleship through a menu system
  //Pre: gameBoard has been declared and has values associated with each member
  //Post: The user plays Battleship until they win the game or forfeit
  void PlayGame(GameBoard& board);

  //Prints the gameBoard variable to the console
  //Pre: The board passed in is defined and has values associated with each member
  //Post: The board is printed to the console
  void PrintBoard(GameBoard board, bool printShipLocations);

  //Checks the user's guess on where the ship is, returning true if they "hit" the ship or false if they "missed"
  //Pre: board has been defined and has values associated with each member. column and row are valid indexes of board (0-9)
  //Post: The function returns a boolean signifying if the user guessed right or not
  bool CheckUserGuess(GameBoard board, int column, int row);

  int main()
  {
      //Declare GameBoard variable board
      //Call function InitBoard
      //Call function PlayGame
      return 0;
  }
