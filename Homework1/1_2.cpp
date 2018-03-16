//#include<iostream>
//
//int main() {
//	double a = 0;
//	int b = 0, year = 0;
//	double r = 0;
//
//  std::cout<<"元本が2倍以上になるのは何年後か求めてあげましょう。"<<std::endl;
//
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