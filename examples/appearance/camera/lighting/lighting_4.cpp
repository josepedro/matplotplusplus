#include <matplot/matplot.h>

int main() {
    using namespace matplot;

    auto [x, y, z] = peaks();
    surf(x, y, z)->lighting(true).specular(0.2);

    wait();
    return 0;
}