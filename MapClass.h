#ifndef MAP_CLASS_H
#define MAP_CLASS_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <ctype.h>
#include <map>
#include <list>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
using namespace std;
class MapClass{
public:
    MapClass();
    ~MapClass();
    string removePunct(string text);
    //void printVector(vector<string> things, string fileName);
    void produceTxt(vector<string> &things, string text);
};
#endif