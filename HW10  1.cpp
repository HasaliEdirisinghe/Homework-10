#include<iostream>
#include <string.h>
using namespace std;

// A program to create and store information in a text file. 

int main()
{
	FILE *fptr;
	char sentence[100];
	
	//get user input
	cout << "Input a sentence for the file : ";
	gets(sentence);
	
	//writing data in a file
	fptr = fopen("test.txt","w");	//opens the file test.txt to write
	fprintf(fptr,"%s \n",sentence);	//print the sentence in the file
	fclose(fptr);					//closes the file
	
	//Confirm storing
	cout << "Your sentence '" << sentence << "' is stored in test.txt" << endl;
}
