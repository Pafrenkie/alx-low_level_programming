#include <stdlib.h>
#include <string.h>

int is_whitespace(char c) {
    return (c == ' ' || c == '\t' || c == '\n' || c == '\r');
}

int count_words(char *str) {
    int count = 0;
    int in_word = 0;

    while (*str) {
        if (!is_whitespace(*str)) {
            if (!in_word) {
                count++;
                in_word = 1;
            }
        } else {
            in_word = 0;
        }
        str++;
    }

    return count;
}

char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    int num_words = count_words(str);
    char **words = (char **)malloc((num_words + 1) * sizeof(char *));
    
    if (words == NULL) {
        return NULL;
    }

    int word_length = 0;
int in_word = 0;
int word_index = 0;

while (*str) {
if (!is_whitespace(*str)) {
if (!in_word) {
in_word = 1;
word_length = 1;
} else {
word_length++;
}
} else if (in_word) {
words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
if (words[word_index] == NULL) {

for (int i = 0; i < word_index; i++) {
free(words[i]);
}
free(words);
return NULL;
}

strncpy(words[word_index], str - word_length, word_length);
words[word_index][word_length] = '\0';
word_index++;
in_word = 0;
}
str++;
}


if (in_word) {
words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
if (words[word_index] == NULL) {

for (int i = 0; i < word_index; i++) {
free(words[i]);
}
free(words);
return NULL;
}
strncpy(words[word_index], str - word_length, word_length);
words[word_index][word_length] = '\0';
}


words[num_words] = NULL;

return words;
}
