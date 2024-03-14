#include <iostream>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>

int main() {

    const int N = 10000000;
    double sumd = 0.0;

    std::vector<YOUR_TYPE> sin_d(N);
    for(int i = 0; i < N ; i++)
        {
            sin_d[i] = sin(2 * M_PI * i / N);
            sumd = sumd + sin_d[i];
        }
    std::cout <<sumd<<'\n';
  return 0;
}