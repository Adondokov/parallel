#include <iostream>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>

int main(int argc, char *argv[]) {

    const int N = 10000000;
    
  if(argc < 2){std::cerr << "use [./s -double] or [./s -float]" << std::endl;}
  else if(argc == 2) { 
        if (std::strcmp(argv[1], "-double") == 0)
        {
            double sumd = 0.0;
            std::vector<double> sin_d(N);
            for(int i = 0; i < N ; i++)
            {
                sin_d[i] = sin(2 * M_PI * i / N);
                sumd = sumd + sin_d[i];
            }
            std::cout <<sumd<<'\n';
        } 
        else if(std::strcmp(argv[1], "-float") == 0)
        {
            float sumf = 0.0;
            std::vector<float> sin_f(N);
            for(int i = 0; i < N; i++)
            {
                sin_f[i] = sin(2 * M_PI * i / N);
                sumf = sumf + sin_f[i];
            }
            std::cout <<sumf<<'\n';
        }
        else {std::cerr << "use [./s -double] or [./s -float]" << std::endl;}
    }
    else if(argc > 2) {std::cerr << "use [./s -double] or [./s -float]" << std::endl;}

  return 0;
}