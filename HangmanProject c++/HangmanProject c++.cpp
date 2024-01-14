// HangmanProject c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <Windows.h>
using namespace std;

int main()
{

	int anArray[10];

	int* pLocation6 = &anArray[6];
	int* pLocation0 = &anArray[0];

	cout << "pLocation6 = " << (int)pLocation6 << endl;
	cout << "pLocation0 = " << (int)pLocation0 << endl;
	cout << "Difference = " << pLocation6 - pLocation0 << endl;


	int x; // deklarerer en variabel af typen int
	std::cin >> x; // modtager et tal fra standard input og gemmer det i x
	std::cout << "x = " << x << std::endl; // sender x til standard output

 

	//// set the console to utf-8
	//SetConsoleOutputCP(65001);

	//// START SCREEN
	//char start{};

	//std::cout << "   Hangman   " << std::endl;
	//std::cout << "af Lionleaf Producions" << std::endl;
	//std::cout << "                    " << std::endl;
	//std::cout << "_____________  " << std::endl;
	//std::cout << "|      |       " << std::endl;
	//std::cout << "|      O       " << std::endl;
	//std::cout << "|      |       " << std::endl;
	//std::cout << "|    / | \\    " << std::endl;
	//std::cout << "|   /  |  \\   " << std::endl;
	//std::cout << "|     / \\     " << std::endl;
	//std::cout << "|    /   \\    " << std::endl;
	//std::cout << "|              " << std::endl;
	//std::cout << "|              " << std::endl;
	//std::cout << "~~~~~~~~~~~~~~~" << std::endl;
	//std::cout << "\nVælg et bogstav og tryk enter." << std::endl;
	//std::cin >> start;


	//// THE MAIN GAME
	//// Variables

	//int Tries{ 6 }; // Number of tries the player has

	//char Guess; // The player guess // implementeret først senere
	//bool CorrectGuess = false;
	//char PreviousGuesses[7]; // An array of guess, needs to be 1 index longer than the user can guess
	//PreviousGuesses[0] = '\0';
	//for (int i = 1; i < 6; i++)
	//{
	//	PreviousGuesses[i] = '_';
	//}
	//PreviousGuesses[6] = '\0';


	//std::string Word; // The word the player is trying to guess
	//std::string WordList[99]; // The list of words the game can choose from
	//srand(time(NULL)); // Random seed (create a randomSeed to get the randomd word from the wordlist)

	////Get Random Word
	//std::ifstream RandomWord; // Open the wordlist file forklar hvad Ifstream gør
	//RandomWord.open("NavneordList.txt"); // Open the wordlist file

	//for (int i = 0; i < 99; i++) // For loop to get all the words from the wordlist
	//{
	//	RandomWord >> WordList[i]; // Get the word from the wordlist
	//}


	//int randomNum = rand() % 99; // Get a random number between 0 and 99
	//Word = WordList[randomNum]; // Set the word to the random word from the wordlist
	//RandomWord.close(); // Close the wordlist file
	//std::cout << Word << std::endl; // Print the word to the console (for testing)


	//std::string secrectWord(Word.length(), '*'); // Set the secrect word to the random word from the wordlist
	//std::cout << secrectWord << std::endl; // Print the secrect word to the console (for testing)


	//// ================== GAME LOOP ==================

	//while (Tries >= 0) {

	//	//Reset the Game
	//	CorrectGuess = false;
	//	// Get the player guess
	//	std::cout << "ordet du skal gætte er: \n\n" << std::endl;
	//	std::cout << secrectWord << std::endl;
	//	std::cout << "\nDer er " << secrectWord.length() << " Bogstaver i ordet\n\n" << std::endl;
	//	std::cout << "Du har " << Tries << " Forsøg tilbage\n" << std::endl;
	//	if (PreviousGuesses[0] = '\0') {
	//		std::cout << std::endl;
	//	}
	//	else {
	//		std::cout << "Du har gættet på: " << PreviousGuesses << std::endl;
	//	};


	//	std::cout << "\nGæt et bogstav: " << std::endl;
	//	std::cin >> Guess;

	//	// Check if the player guess is in the word
	//	
	//	for (int i = 0; i < secrectWord.length(); i++) //for the length of the word, 
	//	{
	//		if (Word[i] == Guess) {
	//			secrectWord[i] = Guess;
	//			CorrectGuess = true;
	//		}
	//	}
	//	if (Word == secrectWord)
	//	{
	//		std::cout << "\n ============ Du er for awesome du fandt ordet! ==================\n" << secrectWord << std::endl;
	//		break;
	//	}
	//	if (CorrectGuess == false)
	//	{
	//		Tries--;
	//		std::cout << "desværre, " << Guess << " er ikke en del af ordet" << std::endl;
	//	}
	//	else {
	//		std::cout << "Tillykke! \"" << Guess << "\"  Er et af bogstaverne! " << std::endl;
	//	}

	//	

	//	switch (Tries)
	//	{
	//	case 6:
	//	{
	//		std::cout << "_____________  " << std::endl;
	//		std::cout << "|      |       " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "~~~~~~~~~~~~~~~" << std::endl;
	//		std::cout << "\n\n\n\n\n\n\n\n" << std::endl;
	//		if (CorrectGuess == false) {
	//			PreviousGuesses[0] = Guess;
	//		}
	//		break;
	//	}
	//	case 5:
	//	{
	//		std::cout << "_____________  " << std::endl;
	//		std::cout << "|      |       " << std::endl;
	//		std::cout << "|      O       " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "~~~~~~~~~~~~~~~" << std::endl;
	//		std::cout << "\n\n\n\n\n\n\n\n" << std::endl;

	//		if (CorrectGuess == false) {
	//			PreviousGuesses[1] = Guess;
	//		}

	//		break;
	//	}
	//	case 4:
	//	{
	//		std::cout << "_____________  " << std::endl;
	//		std::cout << "|      |       " << std::endl;
	//		std::cout << "|      O       " << std::endl;
	//		std::cout << "|      |       " << std::endl;
	//		std::cout << "|      |       " << std::endl;
	//		std::cout << "|      |       " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "~~~~~~~~~~~~~~~" << std::endl;
	//		std::cout << "\n\n\n\n\n\n\n\n" << std::endl;

	//		if (CorrectGuess == false) {
	//			PreviousGuesses[2] = Guess;
	//		}
	//		break;
	//	}
	//	case 3:
	//	{
	//		std::cout << "_____________  " << std::endl;
	//		std::cout << "|      |       " << std::endl;
	//		std::cout << "|      O       " << std::endl;
	//		std::cout << "|      |       " << std::endl;
	//		std::cout << "|      | \\    " << std::endl;
	//		std::cout << "|      |  \\   " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "~~~~~~~~~~~~~~~" << std::endl;
	//		std::cout << "\n\n\n\n\n\n\n\n" << std::endl;

	//		if (CorrectGuess == false) {
	//			PreviousGuesses[3] = Guess;
	//		}

	//		break;
	//	}
	//	case 2:
	//	{

	//		std::cout << "_____________  " << std::endl;
	//		std::cout << "|      |       " << std::endl;
	//		std::cout << "|      O       " << std::endl;
	//		std::cout << "|      |       " << std::endl;
	//		std::cout << "|    / | \\    " << std::endl;
	//		std::cout << "|   /  |  \\   " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "~~~~~~~~~~~~~~~" << std::endl;
	//		std::cout << "\n\n\n\n\n\n\n\n" << std::endl;

	//		if (CorrectGuess == false) {
	//			PreviousGuesses[4] = Guess;
	//		}

	//		break;
	//	}
	//	case 1:
	//	{
	//		std::cout << "_____________  " << std::endl;
	//		std::cout << "|      |       " << std::endl;
	//		std::cout << "|      O       " << std::endl;
	//		std::cout << "|      |       " << std::endl;
	//		std::cout << "|    / | \\    " << std::endl;
	//		std::cout << "|   /  |  \\   " << std::endl;
	//		std::cout << "|     /        " << std::endl;
	//		std::cout << "|    /         " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "~~~~~~~~~~~~~~~" << std::endl;
	//		std::cout << "\n\n\n\n\n\n\n\n" << std::endl;

	//		if (CorrectGuess == false) {
	//			PreviousGuesses[5] = Guess;
	//		}

	//		break;
	//	}
	//	case 0:
	//	{
	//		std::cout << "_____________  " << std::endl;
	//		std::cout << "|      |       " << std::endl;
	//		std::cout << "|      O       " << std::endl;
	//		std::cout << "|      |       " << std::endl;
	//		std::cout << "|    / | \\    " << std::endl;
	//		std::cout << "|   /  |  \\   " << std::endl;
	//		std::cout << "|     / \\     " << std::endl;
	//		std::cout << "|    /   \\    " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "|              " << std::endl;
	//		std::cout << "~~~~~~~~~~~~~~~" << std::endl;
	//		std::cout << "\n GAME OVER MAN !!!" << std::endl;
	//		std::cout << "\n Ordet var: ";

	//		std::cout << Word << std::endl; // Print the word to the console (for testing)

	//		break;
	//	}
	//	default:
	//		std::cout << "If you see this line you, You are a place you should not be." << std::endl;
	//		break;
	//	}
	//}
	//return 0;
}



