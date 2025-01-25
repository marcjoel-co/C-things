#include <cstdio>

int step_function(int x) {
    int result = 0;
    if (x < 0) {
        return -1;
    } else if (x > 0) {
        return 1;
    }

    return result;
}

int main() {
int x = step_function(-3);
printf("x is %d\n", x);

}