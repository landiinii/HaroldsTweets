#include "MapClass.h"

using namespace std;

MapClass::MapClass(){};

MapClass::~MapClass(){};

string MapClass::removePunct(string text){
    for (int i = 0, l = text.size(); i < l; i++) 
    { 
        if (ispunct(text[i])) 
        { 
            text.erase(i--, 1); 
            l = text.size(); 
        } 
    } 
    return text;
}

void MapClass::produceTxt(vector<string> &things, string text){
    text = text + ".txt";
    ifstream input(text.c_str());
    if (input.is_open()){
        while(!input.eof()){
            string word;
            getline(input, word, ' ');
            word = removePunct(word);
            things.push_back(word);
        }
    }
    else {
        cout << "File does not exist!" << endl << "Please enter the right name ofr the File: ";
        cin >> text;
    }
}

