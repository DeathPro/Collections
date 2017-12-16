#include <stdio.h>
int main()
{
    struct Sample {
        int i;
        long l;
        double d;
    };
    struct bos{

    };
    struct intt{
        int a;
    };
    struct doublee{
        double b;
    };
    struct longg{
        long c;
    };
    struct intlong{
        int  a;
        long c;
    };
    struct doublelong{
        double  a;
        long c;
    };
    struct intdouble{
        int  a;
        double c;
    };


    printf("int \t\t-> %ld\n",sizeof(int));
    printf("long \t\t-> %ld\n",sizeof(long));
    printf("double \t\t-> %ld\n",sizeof(double));					puts("");

    printf("struct bos \t-> %ld\n",sizeof(struct bos));					puts("");

    printf("struct intt \t-> %ld\n",sizeof(struct intt));
    printf("struct longg \t-> %ld\n",sizeof(struct longg));
    printf("struct doublee \t-> %ld\n",sizeof(struct doublee));					puts("");

    printf("struct intlong \t\t-> %ld\n",sizeof(struct intlong));
    printf("struct doublelong \t-> %ld\n",sizeof(struct doublelong));
    printf("struct intdouble \t-> %ld\n",sizeof(struct intdouble));					puts("");

    printf("struct Sample \t-> %ld\n",sizeof(struct Sample));

    return 0;
}