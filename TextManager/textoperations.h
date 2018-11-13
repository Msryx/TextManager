#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

	void FindSp(string input, string date[10][10]) {
		int RepOfAr = 0, test = 0;
		for (int x = 0; x < input.length(); x++) {
			if (input[x] == ' ') {
				test = 1;
				for (int y = 0; y < x; y++) {
					date[RepOfAr][y] = input[y];
				}
				RepOfAr++;
			}
		}
		if (test != 1) {
			date[0][0] = input;
		}
	}