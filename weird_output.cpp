#include <iostream>

int min(int x, int y) {
    if (x > y)
        return y;
    else if (x < y)
        return x;
}

int main() {
    std::cout << min(2, 2) << std::endl;

    return{ 0 };
}
