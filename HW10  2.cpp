#include<iostream>
#include <string.h>
using namespace std;

// A program to read an existing file. 

int main()
{
	FILE *fptr;
	char text[100];
	string op;

	//open the file test.txt to read
	fptr=fopen("test.txt","r");
	
	//read the file
	fscanf(fptr,"%s", text);
	
	//read the file until the pointer reaches the end of file
	while(!feof(fptr))
	{
		op = op.append(text).append(" ");	//set the the read words in to a sentence
		fscanf(fptr,"%s",text);				//go to next word
	}
	
	//Display what was read fro the file
	cout << "The content of the file test.txt is: " << op << endl;
	
	fclose(fptr);
	
}
