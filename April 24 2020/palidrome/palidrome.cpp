#include<iostream>
#include<string>
#include<string.h>

using namespace std;

bool isPalidrome(char*);
void printPrep(char*);

const int MAX_SIZE = 50;

int main(){
    char* temp = new char[50];
    temp[0] = 'J';
    temp[1] = 'a';
    temp[2] = 'k';
    temp[3] = 'e';
    printPrep(temp);
    temp[0] = 'r';
    temp[1] = 'a';
    temp[2] = 'c';
    temp[3] = 'e';
    temp[4] = 'c';
    temp[5] = 'a';
    temp[6] = 'r';
    printPrep(temp);
    return 0;
}

void printPrep(char* word){
    cout << "WORD: " << word << "\tSTATUS: " << isPalidrome(word) << endl;  
}

bool isPalidrome(char* word){
    int charcount = 0;
    char* trim = new char[50];
    char* reverse = new char[50];
    
    for(int i = 0; i < 50; i++){
        if(word[i] == '\0'){
            break;
        }
        else{
            charcount = i;
        }
    }

    for(int i = 0; i <= charcount; i++){
        reverse[i] = tolower(word[charcount - i]);
        trim[i] = tolower(word[i]);
    }

    return strcmp(reverse, trim) == 0;
}