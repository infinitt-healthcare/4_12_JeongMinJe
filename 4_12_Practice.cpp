#include <iostream>
using namespace std;

class DivCal {
private:
	int a, b;

public:
	double run(int a, int b);
};

double DivCal::run(int a, int b) {

	if (b == 0) {
		cout << "0���� ���� �� ����" << endl;
		return -1;
	}

	return (double)a / (double)b;        // �������� ����� ������ �ƴ� �� �����Ƿ� ����ȯ
}

int main() {
	int x, y;
	DivCal Go;

	cout << "�� ������ �Է��ϼ���" << endl;

	cin >> x >> y;

	cout << "�������� ����� : " << Go.run(x, y) << "�Դϴ�." << endl;

	return 0;
}