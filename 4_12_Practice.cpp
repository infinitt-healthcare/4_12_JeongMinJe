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
		cout << "0으로 나눌 수 없다" << endl;
		return -1;
	}

	return (double)a / (double)b;        // 나눗셈은 결과가 정수가 아닐 수 있으므로 형변환
}

int main() {
	int x, y;
	DivCal Go;

	cout << "두 정수를 입력하세요" << endl;

	cin >> x >> y;

	cout << "나눗셈의 결과는 : " << Go.run(x, y) << "입니다." << endl;

	return 0;
}