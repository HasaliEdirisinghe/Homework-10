#include<iostream>
#include<string.h>
using namespace std;

// A program to find the Number of lines in a Text File. 

int main()
{
	FILE *fptr;
	char text[100], filename[100];
	int c, count=0;
	
	//get user input for the file to be opened
	cout << "Input the file name to be opened: ";
	cin >> filename;

	//open the file to read
	fptr = fopen(filename, "r");
	//read the file
	fscanf(fptr,"%s %d", text);
	
	//count the lines in the file
	while(!feof(fptr))
	{
		count++;
		fscanf(fptr,"%s%d", text);
	}
	
	fclose(fptr);
	
	//Display the count
	cout << "The lines in the file " << filename << " are: " << count << endl;
}
