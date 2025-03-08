#include <stdio.h>

int main() {
    int n, k, j, m, p;
    
    // Take inputs for number of monkeys, bananas per monkey, peanuts per monkey,
    // total bananas, and total peanuts.
    if (scanf("%d %d %d %d %d", &n, &k, &j, &m, &p) != 5 || n <= 0 || k <= 0 || j <= 0 || m < 0 || p < 0) {
        printf("INVALID INPUT\n");
        return 0;
    }

    // Calculate the number of monkeys that can eat bananas
    int monkeys_bananas = m / k;
    if (monkeys_bananas > n) {
        monkeys_bananas = n;
    }
    m -= monkeys_bananas * k;  // Subtract the bananas eaten

    // Calculate the number of monkeys that can eat peanuts
    int monkeys_peanuts = p / j;
    if (monkeys_peanuts > n - monkeys_bananas) {
        monkeys_peanuts = n - monkeys_bananas;
    }
    p -= monkeys_peanuts * j;  // Subtract the peanuts eaten

    // If there are remaining bananas or peanuts, one more monkey can eat them
    int monkeys_remaining = n - (monkeys_bananas + monkeys_peanuts);
    if (monkeys_remaining > 0 && (m > 0 || p > 0)) {
        monkeys_remaining -= 1;  // One more monkey can eat any leftover food
    }

    // Output the result
    printf("Number of Monkeys left on the Tree:%d\n", monkeys_remaining);

    return 0;
}
