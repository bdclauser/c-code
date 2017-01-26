#include <iostream>
#include <string>

using namespace std;

int main()
{
	int i = 0;

	for (i = 1; i <= 100; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			cout << "rightpoint" << endl;
		}
		if (i % 3 == 0) {
			cout << "right" << endl;
		}
		if (i % 5 == 0) {
			cout << "point" << endl;
		}
		if (i % 3 != 0 && i % 5 != 0) {
			cout << i << endl;
		}
	}

	return 0;
}