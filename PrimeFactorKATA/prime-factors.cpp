#include <vector>

using std::vector;

class PrimeFactors {
public:
	vector<int> of(int number) {
		vector<int> result = {};

		if (number > 1) {
			int divisor = 2;
			if (number == 4) {
				while( number % divisor == 0) {
					result.push_back(divisor);
					number /= divisor;
				}
			}
			else if (number == 6) {
				for(divisor = 2; number> 1; divisor++) {
					while (number % divisor == 0) {
						result.push_back(divisor);
						number /= divisor;
					}
				}
			}
			else {
				result.push_back(number);
			}
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