#include <stdio.h>
#include <stdlib.h>

int Check_delimiter(char c, char *delim) {
    int i = 0;
    while (delim[i]) {
        if (c == delim[i]) {
            return 1;
        }
        i++;
    }
    return 0;
}

int Count_words(char *str, char *delim) {
    int count = 0;
    int in_word = 0;

    while (*str) {
        if (Check_delimiter(*str, delim)) {
            in_word = 0;
        } else if (in_word == 0) {
            count++;
            in_word = 1;
        }
        str++;
    }
    return count;
}

char *extract_word(char *str, char *charset) {
    int len_word = 0;
    while (str[len_word] && !Check_delimiter(str[len_word], charset)) {
        len_word++;
    }
    
    char *word = (char *)malloc(sizeof(char) * (len_word + 1));
    if (word == NULL) {
        return NULL;
    }
    
    int i = 0;
    while (i < len_word) {
        word[i] = str[i];
        i++;
    }
    word[len_word] = '\0';
    return word;
}

char **ft_split(char *str, char *charset) {
    int word_count = Count_words(str, charset);
    char **string = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (string == NULL) {
        return NULL;
    }
    
    int i = 0;
    while (*str) {
        if (Check_delimiter(*str, charset)) {
            str++;
        } else {
            string[i] = extract_word(str, charset);
            if (string[i] == NULL) {
                while (i >= 0) {
                    free(string[i]);
                    i--;
                }
                free(string);
                return NULL;
            }
            i++;
            while (*str && !Check_delimiter(*str, charset)) {
                str++;
            }
        }
    }
    string[i] = NULL;
    return string;
}

int main() {
    char *str = "  Hello World, what's up!!";
    char *charset = " ";
    char **result = ft_split(str, charset);

    if (result == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    int i = 0;
    while (result[i] != NULL) {
        printf("%s\n", result[i]);
        free(result[i]);
        i++;
    }

    free(result);
    return 0;
}

