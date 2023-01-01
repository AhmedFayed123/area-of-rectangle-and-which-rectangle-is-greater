#include<iostream>
using namespace std;
int main() {
	float x1, x2, y1, y2, area1, area2;
	cout << "enter length of first rectangle" << endl;
	cin >> x1;
	cout << "enter width of first rectangle" << endl;
	cin >> y1;
	cout << "enter length of second rectangle" << endl;
	cin >> x2;
	cout << "enter width of second rectangle" << endl;
	cin >> y2;
	area1 = x1 * y1;
	area2 = x2 * y2;
	cout << "area of first rectangle is:" << area1 << endl;
	cout << "area of second rectangle is:" << area2 << endl;
	if (area1 == area2)
		cout << "the areas are the same" << endl;
	else if (area1 > area2)
		cout << "area of first rectangle is greater" << endl;
	else
		cout << "area of second rectangle is greater" << endl;
	return 0;
}