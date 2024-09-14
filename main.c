#include <stdio.h>
#include <malloc.h>

void main() {
    // char c = 'A';
    // char *c_ptr = &c;

    // printf("c=%c, &c=%p\n", c, &c);
    // printf("c_ptr=%p\n", c_ptr);
    // printf("c_ptr=%p\n", &c_ptr);
    // printf("*c_ptr=%c\n", *c_ptr);





    // int i = 0xAA;
    // char c = 3;

    // int x;
    // char *cptr;

    // printf("\n");
    // printf("&c = %p \n", &c);
    // printf("(garbage) x = %d \n", x);
    // printf("(garbage) cptr = %p \n", cptr);
    // printf("(garbage) cptr = 0x%llx \n\n", (long long unsigned int)cptr);

    /* 1. Use of & before the variable in non-pointer assignment*/
    // x = i &c;
    // printf("x = i &c; -> %d \n\n", x);

    /* 2. Use of & before the variable in pointer assignment*/
    // cptr = &c;
    // x = i & cptr;
    // printf("x = i & &c; -> %d \n\n", x);
    // x = i & &c;
    // printf("x = i & &c; -> %d \n\n", x);

    // i = 0xff;
    // x = i & (int)&c;
    // printf("x = i & (int)&c; -> %x \n\n", x);

    /* 3. Assign pointer a valid address*/
    // cptr = &c;
    // printf("cptr = %p, &c = %p \n\n", cptr, &c);

    /* 4. The Use of * with a pointer variable*/
    // i = 2;
    // x = i * cptr;
    // printf("x = i * cptr; -> %d \n\n", x);

    /* 5. The Use of * with a pointer variable */
    // cptr = &c;
    // printf("cptr = %p, &c = %p \n\n", cptr, &c);
    // i = 2;
    // x = i ** cptr;
    // printf("x = i ** cptr; -> %d \n\n", x);

    // /* 6. The use of * with a pointer variable*/
    // x = i * (*cptr);
    // printf("x = i * (*cptr) -> %d \n\n", x);








    // char *name_ptr = "PIYUSH";
    // char name_array[] = "piyush";

    /* 1. similarity between array and pointers */
    // printf("name_ptr: %s, name_ptr: %p, *name_ptr: %c\n", name_ptr, name_ptr, *name_ptr);
    // printf("name_array: %s, name_array: %p, *name_array: %c\n", name_array, name_array, *name_array);

    /* 2. Difference between array amd pointers #1 */
    // printf("sizeof(name_ptr): %lu, sizeof(name_array): %lu\n", sizeof(name_ptr), sizeof(name_array));

    // int x[] = {10, 11, 12};
    // int *xptr = x;

    // printf("sizeof(xptr): %lu, sizeof(x): %lu\n", sizeof(xptr), sizeof(x));

    /* 3. Array cannot be reassigned but pointer can be! */
    // int x[] = {10, 11, 12};
    // int a[] = {110, 111, 112};
    // int i = 1024;

    // a = x;
    // a = &i;

    // int *xptr = a;
    // int *iptr = &i;








    // int i = 10;
    // printf("i: %d, &i: %p, *&i: %d, *&*&i: %d, *&*&*&i: %d\n", i, &i, *&i, *&*&i, *&*&*&i);

    // *&*&*&i = 20;
    // printf("i: %d, &i: %p, *&i: %d, *&*&i: %d, *&*&*&i: %d\n", i, &i, *&i, *&*&i, *&*&*&i);

    // &&&i = 30;
    // printf("i: %d, &i: %p, *&i: %d, *&*&i: %d, *&*&*&i: %d\n", i, &i, *&i, *&*&i, *&*&*&i);









    // int i = 10;
    // int *pi = &i;
    // int **ppi = &pi;
    // int ***pppi = &ppi;

    // printf("%p, %p, %p, %p\n", &i, pi, ppi, pppi);
    // printf("%p, %p, %p\n", &i, &pi, &ppi);
    // printf("%d\n", ***pppi);






//    char *p[10];

//    printf("p: %p, &p[0]: %p\n", p, &p[0]);
//    for(int i=0; i<10;i++)
//    {
//     p[i] = (char *)malloc(1);
//     *p[i] = 10 - i;
//     printf("p[%d]: %p, *p[%d]: %d\n", i, p[i], i, *p[i]);
//    }

//    printf("sizeof(p): %lu\n", sizeof(p));

//    for(int i=0; i<10; i++)
//    {
//     free(p[i]);
//    }








    
}