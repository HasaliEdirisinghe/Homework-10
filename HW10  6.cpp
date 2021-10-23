#include<iostream>
#include<string.h>
using namespace std;

// A program to count the number of words and characters in a file. 

int main()
{
	FILE *fptr;
	char text[100], filename[100];
	int c, count=0, chars, tot=0;
	
	//get user inputs
	cout << "Input the file name to be opened: ";
	cin >> filename;

	//open file to read
	fptr=fopen(filename,"r");
	//read file
	fscanf(fptr,"%s %d", text, &c);

	//counting loop
	while(!feof(fptr))
	{
		count++;
		for( int i=0; text[i]!='\0'; i++)
	    {
	        chars++;
	    }
    	
    	while(c/10 != 0)
		{
    		tot++;
		}
		//tot++;
		fscanf(fptr, "%s %d", text, &c);
	}
	
	fclose(fptr);
	cout << "The number of words in the file is : " << count << endl;
	cout << "The number of characters in the file is : " << chars+tot <<endl;
}
