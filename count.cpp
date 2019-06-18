#include "header.h"
#define _CRT_SECURE_NO_WARNINGS  

pair<int,int> countLen(string path) {

	ifstream in(path.data());
	int len = 0;
	int words;
	string s;
	while (getline(in, s)) {
		len++;
		words += (s.size());
	}

	return make_pair(len, words);



}