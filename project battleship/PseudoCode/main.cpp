/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on April 16, 2017, 
 * Purpose:  Simulate a battleship game.
 */

//System Libraries
//Input - Output Library
//to randomize ship locations
//Library for using string
//Format library

//Name-space under which system libraries exist

//User Libraries

//Constants
  
    //Constant for column


//Function Prototypes
    //User-made function to clear the 2-D array
    //User-made function to show the board
    //User-made function to guess location of ships
    //Function for intro
    //Function for instructin
    //Function for Search
    //Functino for sort
    //Function for Output file


//Execution begins here
int main(int argc, char** argv) {
    //Coding starts here!
    //Declare variables   
    //Declare and initiate Max ship/Ship counter
    //Declare and initiate ships on the board
    //Declare num1, num2 as coordinates to locate ship's locations
    //Declare/Initiate guess, misses, hits to be used as stats at the end of
    //Program
    //Declare the game board 2D array
    //Declare the result array
    
    //seed randomizer to Randomize location of ships
    
    //Declare variables for user input

    
    //Iomanip for set decimal precision
    
    //Enter name for the program to recognize
    //do-while loop to the end for user to play again.

        //call function "myBoard" to show 2D array
        //Set shpCtr and ShpDwn = 0 to reset the game
        //Use a while loop to establish the ship onto the board
            //If the ships currently on the board is less than maxships,
            //randomly picks a number for x(row) and y(column) and set that
            //location from 0 to a 1, which indicates that there's a ship there.   
        
        //while loop to the end. If ans =  'Y' or 'y', 
        //game is played until otherwise.  
        
            /*Program asks for user to input two number. First number is row,
             * second number is column. Those numbers then, are used to find
             * out if there's a ship at that location. */
                    //User input validation
    
             /*Using the boolean user-created function, if the two numbers 
              * are "true" (means there is a ship), the program then 
              * outputs "hit", decrease the ship-counter, increment hits,
              * increment guesses and outputs n ships left. once the ship
              * counter == 0, user wins and game ends.
              */

            /* but if user chooses two numbers that do not have a ship on it,
             * program then will output "miss", increment misses, increment 
             * guesses, outputs number of ships left, and asks user to input 
             * if they would like to quit. 
             */

         //If statement. if 'y', game ends. if 'n', game continues.
         //if statement. if shpCnt == 0, game ends, user win.   
    
        //Game end. call user-made function "myBoard" to show location of ships
        //Call perfmnce function to cout some statistic
    
        //Ask user if They like the game
                //If they like, ask to play the game again.
        //Call output file function to output the stats to a file
        //Output the n of ships sunk to another file
    
        //Connect to an input file
                    //If inputfile.fail cout file failed to open
    
        //Ask user if they'd like to search for a score
        //Input score user'd like to check
            //Call search function
       //Call sorting function to bubble sort the scores.
        //Output the sorted scores.
        //Close the files
    
        //End of main function.
//Sort function
        //Declare static local varibles
        //Do while loop
        //if array[i] > array[i+1], swap
    
//Search Function (Linear)
        //Declare local static variables
        //set index = 0, position = -1, bool found = false
        //if array[index] == value being searched, return position
        //Other wise, index++
    
// Perfmce   function 
        //output number of guesses
        //output number of hits
        //output # of misses
        //output % of hits
            //use static_cast since variables are ints and need to be decimal
        //output % of misses
            //use static_cast since variables are ints and need to be decimal
        //Use a switch statement to cout statements based on number of
        //ships sunk.
// Restart
    //For loop for columns
        //Nested for loop for rows
        //set array = 0

// Myboard
    //Function to display board. 
    //for loop for row
        //nested for loop for column
            //output array called "board"
    //endl for the rows.

//Bool guess   
    //Function for guessing ships
    //int x and int y uses num1/num2 inputs
    /*If @ [x][y] is a 1 (there's a ship)
     * at that particular [x][y], 1 = 2 (ship is sunk)
     * return true.
     * if return false, goes to else statement in the main loop.
     */
