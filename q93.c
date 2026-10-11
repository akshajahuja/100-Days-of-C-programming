#include <stdio.h>
#include <string.h>

/**
 * Function to check if two strings are anagrams.
 * Returns 1 if they are anagrams, 0 otherwise.
 */
int checkAnagram(const char *str1, const char *str2) {
    // If lengths are different, they cannot be anagrams
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    // Frequency array for 256 possible ASCII characters
    int count[256] = {0};

    // Count character frequencies
    for (int i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    // If all counts are 0, then strings are anagrams
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%99s", str1);

    printf("Enter the second string: ");
    scanf("%99s", str2);

    if (checkAnagram(str1, str2)) {
        printf("\"%s\" and \"%s\" are anagrams.\n", str1, str2);
    } else {
        printf("\"%s\" and \"%s\" are NOT anagrams.\n", str1, str2);
    }

    return 0;
}
