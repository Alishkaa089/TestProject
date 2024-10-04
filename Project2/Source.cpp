#include <iostream>
using namespace std;
#pragma region MyRegion

//const int boardSize = 3;
//char board[boardSize][boardSize];
//
//void printBoard() {
//	cout << endl;
//	for (size_t i = 0; i < boardSize; i++) {
//		for (size_t k = 0; k < boardSize; k++) {
//			cout << board[i][k];
//			if (k < boardSize - 1) cout << " | ";
//		}
//		cout << endl;
//		if (i < boardSize - 1) cout << "--|---|--" << endl;
//	}
//	cout << endl;
//}
//
//bool checkWin(char player) {
//	for (size_t i = 0; i < boardSize; i++) {
//		if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
//			return true;
//		if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
//			return true;
//	}
//	return false;
//}
//
//bool checkDraw() {
//	for (size_t i = 0; i < boardSize; i++) {
//		for (size_t k = 0; k < boardSize; k++) {
//			if (board[i][k] == ' ')
//				return false;
//		}
//	}
//	return true;
//}
//
//void computerMove() {
//	int row, column;
//	row = rand() % boardSize;
//	column = rand() % boardSize;
//
//	while (board[row][column] != ' ') {
//		row = rand() % boardSize;
//		column = rand() % boardSize;
//	}
//
//	board[row][column] = 'O';
//}
//
//void playGame() {
//	int row, col;
//	char currentPlayer = 'X';
//	bool gameWon = false;
//
//	while (!gameWon && !checkDraw()) {
//		printBoard();
//
//		if (currentPlayer == 'X') {
//			cout << "Gamer " << currentPlayer << ", Enter checkwork: ";
//			cin >> row >> col;
//
//			if (row < 0 || row >= boardSize || col < 0 || col >= boardSize || board[row][col] != ' ') {
//				cout << "Wrong!" << endl;
//				continue;
//			}
//
//			board[row][col] = currentPlayer;
//		}
//		else {
//			computerMove();
//		}
//
//		if (checkWin(currentPlayer)) {
//			printBoard();
//			cout << "Gamer " << currentPlayer << " is Won!" << endl;
//			gameWon = true;
//		}
//		else if (checkDraw()) {
//			printBoard();
//			cout << "Draw!" << endl;
//		}
//
//		if (currentPlayer == 'X') {
//			currentPlayer = 'O';
//		}
//		else {
//			currentPlayer = 'X';
//		}
//	}
//}
//
//void main() {
//	srand(time(0));
//
//	for (size_t i = 0; i < boardSize; i++) {
//		for (size_t k = 0; k < boardSize; k++) {
//			board[i][k] = ' ';
//		}
//	}
//
//	playGame();
//}

#pragma endregion

//struct Car_s
//{
//	string model;
//};
//
//class Car_c {
//	string model;
//};

class Car {
public: 
	string model;
	string color;

	Car(string _model, string _color) {
		model = _model;
		model = _color;

	}


};


void main() {
	Car car1();
}

 