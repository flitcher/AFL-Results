#include "include/rapidjson/document.h"     // rapidjson's DOM-style API
#include "include/rapidjson/prettywriter.h" // for stringify JSON
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace rapidjson;
using namespace std;

int main(int argc, char** argv) {
	char buf[100];
	fread(buf, sizeof(buf), 1, stdin);
	string json(buf);
	Document d;
	d.Parse(json.c_str());
	return 0;
}

