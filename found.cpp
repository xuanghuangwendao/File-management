#include "header.h"




int found(string path, string key) {

	ifstream in(path.data());

	string s;
	int len = 0;
	while (getline(in, s)) {
		len++;
		string::size_type idx = s.find(key);
		if (idx != string::npos) {
			return len;
		}

	}

	return 0;


}