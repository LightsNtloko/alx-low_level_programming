#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int magnitude, char k);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int count_words(char *str);
char *duplicate_word(char *str, int start, int end);
char **strtow(char *str);
int count_words(char *str);

#endif /* MAIN_H */
