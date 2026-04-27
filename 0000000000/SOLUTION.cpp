#include <cstdio>
#include <string.h>

void reverse(char* s, int n) {
    for (int i = 0; i < n / 2; ++i) {
        char tmp = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = tmp;
    }
}

int main() {
    char A[101], B[101], C[102];
    scanf("%s", A);
    scanf("%s", B);

    int lenA = (int)strlen(A);
    int lenB = (int)strlen(B);

    reverse(A, lenA);
    reverse(B, lenB);

    int n = lenA > lenB ? lenA : lenB;
    int carry = 0;
    int lenC = 0;
    for (int i = 0; i < n; ++i) {
        int da = (i < lenA) ? (A[i] - '0') : 0;
        int db = (i < lenB) ? (B[i] - '0') : 0;
        int sum = da + db + carry;
        carry = sum / 10;
        C[lenC++] = (char)('0' + sum % 10);
    }
    if (carry > 0) {
        C[lenC++] = (char)('0' + carry);
    }

    while (lenC > 1 && C[lenC - 1] == '0') {
        --lenC;
    }

    reverse(C, lenC);
    C[lenC] = '\0';
    printf("%s\n", C);
    return 0;
}
