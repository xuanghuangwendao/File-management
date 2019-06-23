#include "header.h"

std::wstring s2ws(const std::string& s)
{
	int len;
	int slength = (int)s.length() + 1;
	len = MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, 0, 0);
	wchar_t* buf = new wchar_t[len];
	MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, buf, len);
	std::wstring r(buf);
	delete[] buf;
	return r;
}

void CreateDir(const char *dir)
{
	int m = 0, n;
	string str1, str2;
	str1 = dir;
	str2 = str1.substr(0, 2);
	str1 = str1.substr(3, str1.size());
	while (m >= 0)
	{
		m = str1.find('\\');

		str2 += '\\' + str1.substr(0, m);
		//判断该目录是否存在
		n = _access(str2.c_str(), 0);
		if (n == -1)
		{
			//创建目录文件
			_mkdir(str2.c_str());
		}

		str1 = str1.substr(m + 1, str1.size());
	}
}

int file_copy(string path_old, string path_new) {

	WCHAR buf1[256], buf2[256];
	wstring wbuf1 = s2ws(path_old);
	wstring wbuf2 = s2ws(path_new);

	CopyFile(wbuf1.c_str() , wbuf2.c_str(), false);

	return 1;
}

int file_management(File file) {

	struct tm *local_time = NULL;
	local_time = localtime(&file.time_write);

	int year = local_time->tm_year + 1900;
	int month = local_time->tm_mon + 1;
	int day = local_time->tm_mday;

	string path_old = file.name_path;
	string path_new = root_path + "\\" + to_string(year) + "\\" + to_string(month) + "\\" + to_string(day);

	CreateDir(path_new.c_str());
	path_new += ("\\" + file.name);
	file_copy(path_old, path_new);

	return 1;

}
