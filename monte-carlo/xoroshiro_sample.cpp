#include <bits/stdc++.h>
#include "Xoshiro/XoshiroCpp.hpp"
using namespace std;

int main(){
    using namespace std;
    using namespace XoshiroCpp;

    const std::uint64_t seed = 12345;

    Xoshiro256PlusPlus rng(seed);

    normal_distribution<double>normal_dist(0, 1);

    for (int i = 0; i < 5; ++i)
    {
        std::cout << normal_dist(rng) << '\n';
    }

    printf("Hello World.\n");
    return 0;
}