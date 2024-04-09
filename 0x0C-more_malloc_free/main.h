#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void *_memset(void *k, int b, unsigned int n);
int is_digit(const char *t);
void print_error(void);
int _strlen(const char *t);
int main(int argc, char *argv[]);
int _putchar(char k);
void multiply_strings(const char *t1, const char *t2);

#endif /* MAIN_H */
