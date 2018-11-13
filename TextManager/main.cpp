#include <C:\Users\Mati\source\repos\TextManager\TextManager\textoperations.h>

using namespace std;

int main() {
	string name, ArOfSt[10][10];
	getline(cin, name);
	FindSp(name, &ArOfSt[10][10]);

		/*char a=name[2];
		int b = a;
		int y =0;
		for (int x = 0; x < name.length(); x++) {
			if (name[x] == ' ') {
				y = x;
				break;
			}
		}
		cout << name.length();
		string komenda = "abcd";
		int test = 0;
		for (int x = 0; x < y+1; x++) {
			if (komenda[x] == name[x]) {
				test++;
				cout << test;
			}
		}
		if (test == y) {
			name = "funkcja";
		}
		cout << "Char: " << b << "\nString: " << name << "Lokalizacja spacji: " << y << "Test" << test << endl;*/
		cout << "Pierwsza to: " << ArOfSt[0] << " Druga to: " << ArOfSt[0] << endl;
	cin >> name;
	return 0;
}