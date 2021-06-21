// @file conversions.cpp
// @author Cameron Shore
// @date 15-Jun-2020
// This file holds declarations and definitions for conversion program.
//
// This program is a CLI based reprensentation of a conversion calculator being
// able to convert between hex, dec, and binary numbers.
// This also serves as a model for GUI based calculator.

#include <iostream>
#include <string>

using namespace std;
int main() {
   // Since this program is trivial forward declaration is fine
   // forward declaration of converstion methods:
   void hexToDec();
   void binToDec();
   void decToHex();
   void decToBin();

   // variable declarations:
   // 
   // number of options can update if options added
   const char MAX_NUM_CHOICES = '5';

   // lower number of the choices can update if changes are made
   const char MIN_NUM_CHOICES = '1';

   // number of arguments needed for method to work properly
   const char MIN_NUM_ARGS = '1';

   string input = ""; // holds input from user
   bool mainExit = false; // flag for ending the program

   do {
      // Display options
      cout << "1. Hexadecimal to Decimal Conversion" << endl;
      cout << "2. Binary to Decimal Conversion" << endl;
      cout << "3. Decimal to Hexadecimal Conversion" << endl;
      cout << "4. Decimal to Binary Conversion" << endl;
      cout << "5. Quit" << endl;
      cout << "Input number of option you wish to use : ";
      getline(cin, input);

      // input checking
      if (input[1] != '\0') { // ensure double digit isn't input or additional chars
         cerr << "Too many arguments in input. Input size: " 
               << MIN_NUM_ARGS << "\n"  << endl;
         cin.clear();
      }
      else if (isdigit(input[0]) == false) { // make sure input is actually a digit
         cerr << "Input is not a digit \n" << endl;
         cin.clear();
      }
      else if (input[0] < MIN_NUM_CHOICES || input[0] > MAX_NUM_CHOICES) { //Bounds check
         cerr << "Input is out of bounds for the list \n" << endl;
         cin.clear();
      }
      else {
         switch (input[0]) {
         case '1': // Hexadecimal to Decimal
            hexToDec();
            break;
         case '2': // Binary to Decimal
            binToDec();
            break;
         case '3': // Decimal to Hexadecimal
            decToHex();
            break;
         case '4': // Decimal to Binary
            decToBin();
            break;
         case '5': // exit case
            mainExit = true;
            break;
         default: // added security
            cerr << "Method Selection error has occured" << endl;
            return -1;
         }
      }
   } while (mainExit != true);
   return 0;
}

void hexToDec() {
   //variable declarations
   bool hexToDecExit = false; // exit flag
   string exitString = "EXIT";
   string inputCheck = "";

   do {
      cout << "\n" << "input Hexadecimal number or \"EXIT\" to return to main menu: ";
      getline(cin, inputCheck);

      // force uppercase for easier string parsing
      for (int i = 0; i < inputCheck.length(); i++) { // probably a more effiecient 
         inputCheck[i] = toupper(inputCheck[i]);      // way to do this but it works
      }

      if (inputCheck.compare(exitString) == 0) { // check exit case
         return;
      }

      // validate input string
      for (string::reverse_iterator rit = inputCheck.rbegin(); rit != inputCheck.rend(); rit++) { // iterator practice
         if ((*rit >= '0' && *rit <= '9') || (*rit >= 'A' && *rit <= 'F')) {
            cout << "good" << endl;
         }
         else if (*rit == 'X') { // cases where 0x was added front of hexdecimal number, just parses it off
            cout << "X found" << endl;
            break;
         }
         else {
            cerr << "Invalid input: hexdecimal is 0-9 and A-F" << endl;
            cin.clear();
            break;
         }
      }
      cout << inputCheck << endl;
   } while (hexToDecExit != true);
}

void binToDec() {
   bool binToDecExit = false; // exit flag
   string exitString = "EXIT";
   string inputCheck = "";

   do {
      cout << "\n" << "input Binary number or \"EXIT\" to return to main menu: ";
      getline(cin, inputCheck);

      // force uppercase for easier string parsing
      for (int i = 0; i < inputCheck.length(); i++) { // probably a more effiecient 
         inputCheck[i] = toupper(inputCheck[i]);      // way to do this but it works
      }

      if (inputCheck.compare(exitString) == 0) { // check exit case
         return;
      }

      // validate input string
      for (string::reverse_iterator rit = inputCheck.rbegin(); rit != inputCheck.rend(); rit++) { // iterator practice
         if (*rit == '1' || *rit == '0') {
            cout << "good" << endl;
         }
         else {
            cerr << "Invalid input: binary is 0 or 1 only" << endl;
            cin.clear();

         }
      }

   } while (binToDecExit != true);
}

void decToHex() {
   // variable declarations
   bool decToHexExit = false; // exit flag
   string exitString = "EXIT";
   string inputCheck = "";

   do {
      cout << "\n" << "input Decimal number or \"EXIT\" to return to main menu: ";
      getline(cin, inputCheck);

      // force uppercase for easier string parsing
      for (int i = 0; i < inputCheck.length(); i++) { // probably a more effiecient 
         inputCheck[i] = toupper(inputCheck[i]);      // way to do this but it works
      }

      if (inputCheck.compare(exitString) == 0) { // check exit case
         return;
      }
      cout << inputCheck << endl;
   } while (decToHexExit != true);
}

void decToBin() {
   //variable declarations
   bool decToBinExit = false; // exit flag
   string exitString = "EXIT";
   string inputCheck = "";

   do {
      cout << "\n" << "input Decimal number or \"EXIT\" to return to main menu: ";
      getline(cin, inputCheck);

      // force uppercase for easier string parsing
      for (int i = 0; i < inputCheck.length(); i++) { // probably a more effiecient 
         inputCheck[i] = toupper(inputCheck[i]);      // way to do this but it works
      }

      if (inputCheck.compare(exitString) == 0) { // check exit case
         return;
      }
      cout << inputCheck << endl;
   } while (decToBinExit != true);
}