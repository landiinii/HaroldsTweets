#include "MapClass.h"

using namespace std;


int main(int argc, char *argv[]) {
    MapClass start;
    vector<string> things;
    string text = argv[1];
    int M;
    int L;
    if (text == "Jaden"){
        M = 1;
        L = 12;
    }
    else{
        M = 2;
        L = 30;
    }
    start.produceTxt(things, text);
    
    map<list<string>, vector<string> > wordmap;
    list<string> state;
    for (int i = 0; i < M; i++) {
        state.push_back("");
    }
    for (vector<string>::iterator it=things.begin(); it!=things.end(); it++) {
        wordmap[state].push_back(*it);
        state.push_back(*it);
        state.pop_front();
    }
    state.clear();
    for (int i = 0; i < M; i++) {
        state.push_back("");
    }
    for(int i = 0; i < L; i++){
        srand(time(0));
        int ind = rand() % wordmap[state].size();
        cout << wordmap[state][ind]<<" ";
        state.push_back(wordmap[state][ind]);
        state.pop_front();
    }
    cout << endl;
    
    
    /*fstream vecfile;
    text = text + "_vector.txt";
    vecfile.open(text.c_str(), ios::out | ios::trunc);
    for(int i = 0; i < things.size(); i++){
        vecfile << things[i] << endl;
    }
    vecfile.close();*/
    
    return 0;
}