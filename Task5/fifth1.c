// #include <stdio.h>
// void main() {
//     int m, n; /* given numbers */
//     printf("Enter-two integer numbers: ");
//     scanf ("%d %d", &m, &n);
//     while (n > 0) {
//         int r = m % n;
//         m = n;
//         n = r;
//     }
//     printf ("GCD = %d \n",m);
// }

#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    return 0;
}