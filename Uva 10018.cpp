#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long int n;
        scanf("%lld", &n);
        long long int ad = 0;
        long long int rev = 0;
        long long int tmp = n;

        while (tmp > 0) {
            rev = rev * 10 + tmp % 10;
            tmp /= 10;
        }

        while (n != rev) {
            n += rev;
            ad++;
            long long int tmp=n;
            rev=0;

            while (tmp > 0) {
            rev = rev * 10 + tmp % 10;
            tmp /= 10;
        }



        }

        printf("%lld %lld\n", ad, n);
    }

    return 0;
}

