#include <iostream>
using namespace std;
int main() {
	int thang;
	cout << "Nhap so thang trong nam: "; cin >> thang;
	switch (thang) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "\n Thang co 31 ngay ", thang;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "\n Thang co 30 ngay ", thang;
		break;
	case 2:
		cout << "\n Thang 2 co 28 hoac 29 ngay ";
		break;
	default:
		cout << "\n Khong co thang do";
		break;
	}
	return 0;
}