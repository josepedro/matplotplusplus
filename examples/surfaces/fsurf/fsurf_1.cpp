#include <cmath>
#include <matplot/matplot.h>

int main() {
    using namespace matplot;

    fsurf([](double x, double y) { return sin(x) + cos(y); });

    wait();
    return 0;
}