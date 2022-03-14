#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <search.h>
#include <io.h>


//Constants
#define MAX_NAME 30
#define MAX_NUM 11

//Struct Definitions

typedef struct Node Node;
typedef struct Node {
	char name[30];
	char phone[11];
	Node* prev;
	Node* next;
}Node;

typedef Node* List;

//Node Functions
Node* newNode(Node** head, FILE * ftp) {


	Node* node = (Node*)malloc(sizeof(Node));

	
	return node;
}



//Helper Functions


//Read in value from stdin
void getStandardInput() {



}


/// <summary>
/// Opens or closes a file pointer to a input text file
/// Returns 1 if operation completed successfully 
/// Modes     0: Open		1: Close        
/// </summary>
/// <param name="p">File * p</param>
/// <param name="mode">Integer mode 0 or 1</param>
/// <returns>1 or 0</returns>
int initFilePointer(FILE* ptr, char * name,int mode) {

	errno_t err = -1;


	//Mode 1:  Properly closed files returns 1 else returns 0
	if (mode == 1) {
		int num = _fcloseall();
		printf("> %d closed files\n",num);

		return num;
	}
		
	
	



	//Mode 0:  Properly opened files returns 1 else resturns 0
	else if (mode == 0) 
		return (err = fopen_s(&ptr, name, "r")) == 0 ? 1 : -1;


}

//Function to search name
void searchName() {



}

//Function to search number
void searchPhone() {


}

//Add New Record to Phonebook
void addNewRecord(FILE * p) {

}


//Verify File Accessibility
void verifyFileAccess(FILE* p, char* name) {
	FILE* pp;

	//Verify if file can be found and acessible
	if (_access(name, 4) != -1) {

		printf("File name %s was found and can be accessed.\n", name);

	
		//Open file pointer and verify it opened succesfully with confirmPointerOP
		if (initFilePointer(p, name, 0)) {

			printf("File succesfully opened!\n");

			//# Begin Logic







			//Close open file pointer

			if (initFilePointer(p, name, 1))
				printf("File was succesffuly closed!\n");
			else
				printf("File did not close successfully");

		}
		//File was not opened succesfully
		else
			printf("WARNING! File did not open succesfully!\n");

	}
	//Else if file cant be found/accesible
	else
		printf("WARNING! File could not be found or accessed!\n");

	//printf("> %s\n", name);


}

int main(void) {

	//Variables
	FILE* p = NULL;
	char name[30] = {0};

	//Head of Linked List
	List head = NULL;
	List tail = NULL;

	printf("Please enter file name: ");
	scanf_s("%s", name, 30);	

	//Open the file if possible
	verifyFileAccess(p, name);
	

	return 404;
}
