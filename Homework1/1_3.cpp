//#include<iostream>
//
//double v(double m, double F, double t);
//
//int main() {
//	double m = 0, F = 0, t = 0;
//	std::cout << "t秒後の速度求めたる！" << std::endl;
//
//	std::cout << "質量を入力してください。(kg)" <<std::endl;
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