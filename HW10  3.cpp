#include<iostream>
#include<string.h>
using namespace std;

// A program to write multiple lines in a text file.

int main()
{
	FILE *fptr;
	char text[100], s[100];
	int c, lines;
	
	//get user input for number of lines
	cout << "Input the number of lines to be written: ";
	cin >> lines; 
	
	//opens a file to write
	fptr = fopen("test2.txt","w");
	
	//copying the string testline to text
	strcpy(text,"testline");
	
	//writing lines in the file
	for(int i=0; i<lines; i++)
	{
		fprintf(fptr,"%s %d \n", text, i+1);
	}
	//closes file
	fclose(fptr);

	//open the file to read 
	fptr = fopen("test2.txt","r");
	
	//read the file
	fscanf(fptr,"%s %d", s, &c);
	
	//display
	cout<<"\n***The content of the file test2.txt is: ***\n";
	
	//print the lines until pointer reaches end of file
	while(!feof(fptr))
	{
		cout << s << " " << c << endl;	//print line by line
		fscanf(fptr,"%s%d", s, &c);		//reading next line
	}
	
	fclose(fptr);
	
}
