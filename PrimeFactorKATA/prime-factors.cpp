#include <vector>

using std::vector;

class PrimeFactors {
public:
	vector<int> of(int number) {
		vector<int> result = {};

		if (number == 2) {
			result.push_back(2);
		}


		return result;

		//if (number < 2) {
		//	return 0; // No prime factors for numbers less than 2
		//}
		//int factor = 2;
		//while (number > 1) {
		//	if (number % factor == 0) {
		//		number /= factor;
		//	} else {
		//		factor++;
		//	}
		//}
		//return factor; // Return the last found prime factor
	}
private:

};