/* 
 * A small program for quickly calculating notes from guitar tabs 
 * into a human readable format given a base note and a number 
 * of semitones.
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>

int main(int argc, char** argv) {
	std::string input = "";
	std::string resultingNote = "";
	int note = 0;
	int semitones = 0;
	bool correctInput = true;
	bool isInteger = true;
	std::cout << "Example note inputs: \"A\", \"Gb\", \"C#\". Type 'quit' to exit." << std::endl;
    while(true) {
        std::cout << "Base note: ";
        std::cin >> input;	
		
		if (input == "quit") {
			exit(0);
		} else if (input == "Ab" || input == "G#") {
			note = 0;
		} else if (input == "A") {
			note = 1;
		} else if (input == "A#" || input == "Bb") {
			note = 2;
		} else if (input == "B" || input == "Cb") {
			note = 3;
		} else if (input == "B#" || input == "C") {
			note = 4;
		} else if (input == "C#" || input == "Db") {
			note = 5;
		} else if (input == "D") {
			note = 6;
		} else if (input == "D#" || input == "Eb") {
			note = 7;
		} else if (input == "E" || input == "Fb") {
			note = 8;
		} else if (input == "E#" || input == "F") {
			note = 9;
		} else if (input == "F#" || input == "Gb") {
			note = 10;
		} else if (input == "G") {
			note = 11;
		} else {
			std::cout << "Error: Incorrect input." << std::endl;
			correctInput = false;
		}
		
		input.clear();		
		std::cin.ignore();
        std::cin.clear();
		
		if (correctInput) {
			std::cout << "Number of semitones: ";
			std::cin >> input;
			
			if (input == "quit") {
				exit(0);
			} 
			
			char *testInput;
			semitones = strtol(input.c_str(), &testInput, 10);
			if (testInput == input.c_str()) {
				std::cout << "Error: An integer is required." << std::endl;
				isInteger = false;
			}
			if (isInteger) {
				if ((note + semitones) % 12 == 0) {
					resultingNote = "G#";
				} else if ((note + semitones) % 12 == 1) {
					resultingNote = "A";
				} else if ((note + semitones) % 12 == 2) {
					resultingNote = "A#";
				} else if ((note + semitones) % 12 == 3) {
					resultingNote = "B";
				} else if ((note + semitones) % 12 == 4) {
					resultingNote = "C";
				} else if ((note + semitones) % 12 == 5) {
					resultingNote = "C#";
				} else if ((note + semitones) % 12 == 6) {
					resultingNote = "D";
				} else if ((note + semitones) % 12 == 7) {
					resultingNote = "D#";
				} else if ((note + semitones) % 12 == 8) {
					resultingNote = "E";
				} else if ((note + semitones) % 12 == 9) {
					resultingNote = "F";
				} else if ((note + semitones) % 12 == 10) {
					resultingNote = "F#";
				} else if ((note + semitones) % 12 == 11) {
					resultingNote = "G";
				}
				std::cout << "The note is: " << resultingNote << std::endl;
			}
			input.clear();			
			std::cin.ignore();
			std::cin.clear();
			correctInput = true;
		}
	}
	return 0;
}	