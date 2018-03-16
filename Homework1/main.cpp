//1_1

//#include<iostream>
//
//int f(int x, int y);
//
//
//int main() {
//	std::cout << "10(x+6)-(7-8y)=699の解は" << std::endl;
//	std::cout << "(x,y)=" << std::endl;
//
//	for (int x = 1; x <= 100; x++) {
//		for (int y = 1; y <= 100; y++) {
//			if (f(x, y) == 699) {
//				std::cout << "(" << x << "," << y << ")" << std::endl;
//			}
//		}
//	}
//	return 0;
//}
//
//int f(int x, int y) {
//	int LHS = 10 * (x + 6) - (7 - (8 * y));
//	return LHS;
//}

	



//1_2

//#include<iostream>
//
//int main() {
//	int a = 0, b = 0, year = 0;
//	double r = 0;
//
//  std::cout<<"元本が2倍以上になるのは何年後か求めてあげましょう。"<<std::endl;

//	std::cout << "元本を入力してください。" << std::endl;
//	std::cin >> a;
//	b = a;
//	std::cout << "金利(年率)を入力してください。" << std::endl;
//	std::cin >> r;
//
//	do{
//		a = a * (1 + 0.01*r);
//		year++;
//	} while (a < 2 * b);
//
//	std::cout << "元本が2倍以上になるのは," << year << "年後です。" << std::endl;
//	return 0;
//}

//1_3

//#include<iostream>
//
//double v(double m, double F, double t);
//
//int main() {
//	double m = 0, F = 0, t = 0;
//	std::cout << "t秒後の速度求めたる！" << std::endl;
//
//	std::cout << "質量を入力してください。(kg)" << std::endl;
//	std::cin >> m;
//	std::cout << "一定の推進力を入力してください。(N)" << std::endl;
//	std::cin >> F;
//	std::cout << "何秒後ですか。(s)" << std::endl;
//	std::cin >> t;
//
//	std::cout << t << "秒後の速度は" << v(m,F,t) << "[m/s]です。" << std::endl;
//
//	return 0;
//
//}
//
//double v(double m, double F, double t) {
//	double v = (F / m)*t;
//	return v;
//}

#include<iostream>

int main() {

	std::cout << "Hello,World." << std::flush;
	std::cout << "Hello,World." << std::flush;
	std::cout << "Hello,World." << std::endl;
	std::cout << "Hello,World." << std::flush;



	return 0;
}