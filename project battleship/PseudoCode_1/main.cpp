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

    //Constant for rows   
    //Constant for column
    //Create matrix

//Function Prototypes
    //User-made function to clear the 2-D array
    //User-made function to show the board
    //User-made function to guess location of ships


//Execution begins here
int main(int argc, char** argv) {
    //Coding starts here!
    //Declare variables   
    //Declare and initiate Max ship/Ship counter
    //Declare and initiate ships on the board
    //Declare num1, num2 as coordinates to locate ship's locations
    //Declare/Initiate guess, misses, hits to be used as stats at the end o
    //Program
    
    //seed randomizer to Randomize location of ships
    
    //Declare variables for user input

    
    //Iomanip for set decimal precision
    
    //Enter name for the program to recognize
    //do-while loop to the end for user to play again.

        //call function "myBoard" to show 2D array
        //Use a while loop to establish the ship onto the board
            //If the ships currently on the board is less than maxships,
            //randomly picks a number for x(row) and y(column) and set that
            //location from 0 to a 1, which indicates that there's a ship there.   
        
        //while loop to the end. If ans =  'Y' or 'y', 
        //game is played until otherwise.  
        
            /*Program asks for user to input two number. First number is row,
             * second number is column. Those numbers then, are used to find
             * out if there's a ship at that location. */
    
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
    
        //output number of guesses
        //output number of hits
        //output # of misses
        //output % of hits
            //use static_cast since variables are ints and need to be decimal
        //output % of misses
            //use static_cast since variables are ints and need to be decimal

        //Use a tenary condition
            //if y, output "you are cool"
            //if n, output "you suck"
        //Input y or n to play again as a part of the do-while loop    

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
