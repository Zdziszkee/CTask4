#include <stdio.h>

int nwd(int m, int n);

int main() {
    int m, n = 0;
    scanf("%d", &m);
    scanf("%d", &n);
    printf("NWD for given numbers: %d", nwd(m, n));
    return 0;
}


int nwd(int m, int n) {
    if (m == 0)
        return n;
    else if (n == 0)
        return m;
    while (m != n) {
        if (m > n)
            m = m - n;
        else
            n = n - m;
    }
    return m;
}
