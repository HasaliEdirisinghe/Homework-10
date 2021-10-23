#include<iostream>
#include<string.h>
using namespace std;

// A program to read the file and store the lines into an array and list them on the screen. 

int main()
{
	FILE *fptr;
	char s[100], filename[50];
	string arr[100];
	
	//get user input for the file to be opened
	cout << "Input the file name to be opened: ";
	cin >> filename;

	//open the file to read
	fptr = fopen(filename,"r");
	
	//reading lines in the file
	fscanf(fptr,"%s %d", s);
	
	//Store in array
	int length = sizeof(arr)/sizeof(arr[0]);
	while(!feof(fptr))
	{
		for (int i=0; i<length; i++)
		{
			arr[i] = arr[i].append(s);
			fscanf(fptr, "%s", s);	
		}
		
	}
	//print array
	cout << "Content of the file now stored in array: " << endl;
	for (int i=0; i<length; i++)
	{
		cout << arr[i] << endl;
	}

}
