#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void *_memset(void *k, int b, unsigned int n);
void print_output(char *output);
int is_digit(char k);
void print_error(void);
void multiply(char *num1, char *num2);
int main(int argc, char *argv[]);
int _putchar(char k);

#endif /* MAIN_H */
