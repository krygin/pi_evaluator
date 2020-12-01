#include <iostream>
#include <cmath>
#include <vector>

int main() {
    std::vector<double> accuracies = {0.01, 0.0001, 0.000001};

    std::cout.precision(12);
    std::cout << M_PI << std::endl;
    for (double e: accuracies) {
        double sum = 0;
        int i;
        for (i = 0; abs(sum - M_PI) > e; i++) {
            sum += 4 * pow(-1, i) / (2 * i + 1);
        }
        std::cout << sum << std::endl;
        std::cout << i << std::endl;
    }
    return 0;
}
