#include<cstring>
#include<iostream>

int main(int argc, char const *argv[]) {
    auto res = strstr(argv[1], argv[2]);
    if (res != nullptr) {
        std::cout << int(res - argv[1]) << std::endl;
    }
    return 0;
}
