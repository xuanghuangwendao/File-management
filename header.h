#ifndef HEADER_H
#define HEADER_H

#include <io.h>
#include <direct.h>
#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <fstream>
#include <Windows.h>
#include <time.h>
using namespace std;

struct File {
    string name;
    string path;
    string name_path;

    int len=0;
	int word = 0;
    int size=0;

    time_t time_create;
    time_t time_access;
    time_t time_write;


};

void getAllFiles(string path, string key, vector<File>& files, int operation);

pair<int,int> countLen(string path);


int found(string path, string key);

#endif // HEADER_H
