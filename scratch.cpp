#include <iostream>
#include <bitset>

typedef std::bitset<64> bits;

int main(int argc, char const *argv[]) {
    uint32_t x = 10000;
    std::cout << bits(x) << std::endl;
    std::cout << bits(300) << std::endl;
    std::cout << bits(x / 300) << std::endl;
    std::cout << x / 300 << std::endl;

    uint64_t fudge = 458129845;
    std::cout << bits(x) << std::endl;
    std::cout << bits(fudge) << std::endl;
    std::cout << bits(x * fudge) << std::endl;
    std::cout << ((uint64_t(x) * fudge) >> 37) << std::endl;
    return 0;
}
