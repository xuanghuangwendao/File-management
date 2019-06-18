#include "header.h"


void  getAllFiles(string path, string key, vector<File>& files, int operation) {
    //文件句柄
    long long hFile = 0;
	if (path[0] == 'f'&&path[1] == 'i') {
		path = path.substr(8, path.size() - 8);
		string temp = path;
		path = "";
		for (int i = 0; i < temp.size(); i++) {
			if (temp[i] == '/') {
				path+="\\";

			}
			else {
				path += temp[i];
			}
		}
	}
		cout << path << endl;
    //文件信息
    struct _finddata_t fileinfo;  //很少用的文件信息读取结构
    string p;  //string类很有意思的一个赋值函数:assign()，有很多重载版本
    if ((hFile = _findfirst(p.assign(path).append("\\*").c_str(), &fileinfo)) != -1) {

        do {
            if ((fileinfo.attrib & _A_SUBDIR)) {  //比较文件类型是否是文件夹
                if (strcmp(fileinfo.name, ".") != 0 && strcmp(fileinfo.name, "..") != 0) {
                    //files.push_back(p.assign(path).append("\\").append(fileinfo.name));

                    getAllFiles(p.assign(path).append("\\").append(fileinfo.name), key, files, operation);

                }

            }
            else {
				if (operation == 1 || operation == 2) {
					string name = fileinfo.name;
					string::size_type idx = name.find(key);
					if (idx != string::npos) {
						File file;
						file.name = fileinfo.name;
						file.path = p;
						file.name_path = p.assign(path).append("\\").append(fileinfo.name);
						file.size = fileinfo.size;
						if (operation == 2) {
							pair<int,int> pii = countLen(file.name_path);
							file.len = pii.first;
							file.word = pii.second;
						}
					
						files.push_back(file);
					}



				}
				else if (operation == 3) {
					File file;
					file.name = fileinfo.name;
					file.path = p;
					file.name_path = p.assign(path).append("\\").append(fileinfo.name);
					file.size = fileinfo.size;
					int len = found(file.name_path, key);
					if (len!=0) {
						files.push_back(file);	
					}

				}
            }
        } while (_findnext(hFile, &fileinfo) == 0);  //寻找下一个，成功返回0，否则-1
        _findclose(hFile);
    }

}


