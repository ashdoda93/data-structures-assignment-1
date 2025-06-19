Built with C++

Program requires the following libraries:
#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <limits>
using namespace std;
#include "functions.h"

Getting started!
1. Run program
   Once program has started you'll be presented with following in the console.
   ![image](https://github.com/user-attachments/assets/9bc072da-8c7b-4017-b499-6493ea1eb87c)
   The top line confirms that the input file has been read successfully.
   Followed by the data read from the file.
   The console then presents menu options.

2. Type in the menu option of the users choice.
   Menu Options:
   
   Option 1: Check if an integer exists in the array.
   
      A. User types in "1".
   
      B. User is prompted to type in an integer.
   
      C. Console outputs whether the integer is in the array or not.
   
         1.) If integer is in array console will output as followed:
      ![image](https://github.com/user-attachments/assets/53688ee6-f3ec-4636-bae0-3b416695c9ad)

         2.) If integer is not in array console will output as followed:
      ![image](https://github.com/user-attachments/assets/367a2b43-f74f-4fe5-a5a6-03f7d8cd9a08)

      D. Console returns to Main Menu.

   Option 2: Update value at index.

      A. User types in "2".

      B. User is prompted to Enter the index to update.

      C. User is prompted to Enter the new vale.

      D. Console outputs:

         1.) Value (original value at index) at index (value) updated to (new value).

         2.) Followed by an output of the new array.

         3.) Return to Main Menu. 
      ![image](https://github.com/user-attachments/assets/72cf2027-4f4c-45b5-9d9d-5cb01cce2e47)

         If user attempts to update an index that does not exist in the array the following console output occurs.
      ![image](https://github.com/user-attachments/assets/31360413-f10a-45b8-b730-13535a5fe7cb)

   Option 3: Add a new integer to the array.

      A. User types in "3".

      B. User is prompted to Enter a new integer to add to the array.

      C. If array is full a new array is made that is double the size of the previous array.

      D. Console outputs:

         1.) New integer added successfully.

         2.) Array resizement if necessary.

         3.) Prints out new array.

         4.) Returns to Main Menu.
      ![image](https://github.com/user-attachments/assets/ed2e9eba-2d0e-432d-8e21-6cae957a9e73)

         If user attempts to add a non-integer the following console output occurs.
   ![image](https://github.com/user-attachments/assets/c7646c0c-d3ca-4d88-86a0-62bc9753a9c7)


   Option 4: Remove an integer from the array.

      A. User types in "4".

      B. User is prompted Enter an integer to remove from the array.

      D. If integer is in array Console outputs:

         1.) Integer (input) removed from array.

         2.) Prints out new array.

         3.) Returns to Main Menu.
   ![image](https://github.com/user-attachments/assets/1ee22475-2722-42d4-814a-f6512cf022b4)

      E. If integer is not in array console outputs:

         1.) Integer (input) not found in the array.

         2.) Prints out array.

         3.) Returns to Main Menu.
   ![image](https://github.com/user-attachments/assets/bfdaac28-f648-486e-9296-93b9da4abe1b)




         



   


