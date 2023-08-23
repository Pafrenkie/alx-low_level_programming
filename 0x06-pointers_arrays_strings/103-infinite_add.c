#include <stdio.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r);

int get_length(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int carry = 0;
    int idx1 = get_length(n1) - 1;
    int idx2 = get_length(n2) - 1;
    int result_idx = size_r - 2;  // Leave the last element for the null terminator

    r[size_r - 1] = '\0'; // Null-terminate the result string

    while (idx1 >= 0 || idx2 >= 0 || carry != 0) {
        int num1 = (idx1 >= 0) ? (n1[idx1] - '0') : 0;
        int num2 = (idx2 >= 0) ? (n2[idx2] - '0') : 0;
        
        int sum = num1 + num2 + carry;
        carry = sum / 10;
        int digit = sum % 10;
        
        if (result_idx < 0) {
            return 0; // Result can't be stored in r
        }

        r[result_idx] = digit + '0';
        
        idx1--;
        idx2--;
        result_idx--;
    }
    
    return &r[result_idx + 1];
}

int main() {
    char n1[] = "12345";
    char n2[] = "6789";
    int size_r = 10; // Adjust this size based on the expected maximum length of the result
    
    char result[size_r];
    char *res = infinite_add(n1, n2, result, size_r);
    
    if (res) {
        printf("Result: %s\n", res);
    } else {
        printf("Result could not be stored in the buffer.\n");
    }
    
    return (0);
}
