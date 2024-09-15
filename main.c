#include <stdio.h>
#include <malloc.h>

struct my_struct
{
    long long int a;
    float b;
    int c;
};

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








    // char            a = 'A';
    // int             b = 1024;
    // float           c = 1.0;
    // long long int   d = 12345;

    // char            *pa = &a;
    // int             *pb = &b;
    // float           *pc = &c;
    // long long int   *pd = &d;

    // printf(" sizeof(*pa): %lu\n sizeof(*pb): %lu\n sizeof(*pc): %lu\n sizeof(*pd): %lu \n\n",
    //         sizeof(*pa), sizeof(*pb), sizeof(*pc), sizeof(*pd));

    // *pa = 'B';
    // *pb = *pb + 1;
    // *pc = *pc + 1;
    // *pd = *pd + 1;

    // printf(" a: %c\n b: %d\n c: %f\n d: %lld\n\n", *pa, *pb, *pc, *pd);









    // struct my_struct var = {
    //     .a = 1024,
    //     .b = 2.5,
    //     .c = -1
    // };

    // struct my_struct *ptr = &var;

    // (*ptr).a = (*ptr).a + 1;
    // (*ptr).b = (*ptr).b + 1;
    // (*ptr).c = (*ptr).c + 2;

    // printf("var.a: %lld, var.b: %f, var.c: %d\n", var.a, var.b, var.c);
    // printf("(*ptr).a: %lld, (*ptr).b: %f, (*ptr).c: %d\n\n", (*ptr).a, (*ptr).b, (*ptr).c);

    // ptr->a = ptr->a + 1;
    // ptr->b = ptr->b + 1;
    // ptr->c = ptr->c + 2;

    // printf("var.a: %lld, var.b: %f, var.c: %d\n", var.a, var.b, var.c);
    // printf("ptr->a: %lld, ptr->b: %f, ptr->c: %d\n", ptr->a, ptr->b, ptr->c);
    // printf("(*ptr).a: %lld, (*ptr).b: %f, (*ptr).c: %d\n", (*ptr).a, (*ptr).b, (*ptr).c);









    char a[3] = {'A', 'B', 'C'};
    int b[3] = {10, 11, 12};
    short int c[3] = {20, 21, 22};

    char *pa = a;
    int *pb = b;
    short int *pc = &c[1];

    printf("\nMath on char pointer!\n");
    printf("pa   = %p\n", pa);
    printf("pa+0 = %p : *(pa+0) = %c, pa[0] = %c\n", pa+0, *(pa+0), pa[0]);
    printf("pa+1 = %p : *(pa+1) = %c, pa[1] = %c\n", pa+1, *(pa+1), pa[1]);
    printf("pa+2 = %p : *(pa+2) = %c, pa[2] = %c\n", pa+2, *(pa+2), pa[2]);

    printf("\nMath on int pointer!\n");
    printf("pb   = %p\n", pb);
    printf("pb+0 = %p : *(pb+0) = %d, pb[0] = %d\n", pb+0, *(pb+0), pb[0]);
    printf("pb+1 = %p : *(pb+1) = %d, pb[1] = %d\n", pb+1, *(pb+1), pb[1]);
    printf("pb+2 = %p : *(pb+2) = %d, pb[2] = %d\n", pb+2, *(pb+2), pb[2]);

    printf("\nMath on short int pointer!\n");
    printf("pc   = %p\n", pc);
    printf("pc+0 = %p : *(pc+0) = %d, pc[0] = %d\n", pc+0, *(pc+0), pc[0]);
    printf("pc-1 = %p : *(pc-1) = %d, pc[-1] = %d\n", pc-1, *(pc-1), pc[-1]);
    printf("pc+1 = %p : *(pc+1) = %d, pc[1] = %d\n", pc+1, *(pc+1), pc[1]);
}