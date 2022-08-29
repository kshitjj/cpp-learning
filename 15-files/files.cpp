#include <iostream>
#include <fstream>
using namespace std;

int main(){
	// creating a file called filename.txt
	ofstream myFile("filename.txt");
	
	// writting stuff in the file.
	myFile << "Files can be tricky, but it's fun enough!";
	
	// closing the myFile ofstream
	myFile.close();

	// creating a ifStream which reads and is a source of information
	ifstream myReadFile("filename.txt");

	// declaring a string to take the ifstream info and throw it in the terminal
	string myText;
	while (getline(myReadFile, myText)){
		cout << myText << endl;
	}

	// stopping the ifstream
	myReadFile.close();
}
