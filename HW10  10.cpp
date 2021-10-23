#include<iostream>
#include<string.h>
using namespace std;

// A program to merge two files and write it in a new file. 

int main()
{
	FILE *file1, *file2, *fnew;
	char current, fname1[20], fname2[20], fname3[30];
	
	//getting user inputs
	cout << "Input the 1st file name: ";
	cin >> fname1;
	
	cout << "Input the 2nd file name: ";
	cin >> fname2;
	
	cout << "Input the new file name where to merge the above two files: ";
	cin >> fname1;
	
	//open files to read
	file1 = fopen(fname1, "r");
	file2 = fopen(fname2, "r");
	
	//check for errors of existence
	if(file1==NULL || file2==NULL)
	{
		printf(" File does not exist or error in opening...!!\n");
		exit(EXIT_FAILURE);
	}
	
	//open a file to merge
	fnew=fopen(fname3, "w");
	//check for errors of existence
	if(fnew == NULL)
	{
		printf(" File does not exist or error in opening...!!\n");
		exit(EXIT_FAILURE);
	}
	
	//merging
	while((current=fgetc(file1)) != EOF)
	{
		fputc(current, fnew);
	}
	while((current=fgetc(file2)) != EOF)
	{
		fputc(current, fnew);
	}
	//display
	cout << "The two files merged into " << fname3 << " successfully...!!";
	
	fclose(file1);
	fclose(file2);
	fclose(fnew);
}
