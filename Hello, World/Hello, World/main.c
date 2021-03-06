//
//  main.c
//  Hello, World
//
//  Created by yongzhen on 2018/8/6.
//  Copyright © 2018年 yongzhen. All rights reserved.
//

#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errnok ;
double getAverage(int arr[], int size);
void getcharAndPutchar(void);
void writeOrOpenFile(void);
int main(int argc, const char * argv[]) {
    
    FILE * pf;
    int errnum;
    pf = fopen ("unexist.txt", "rb");
    if (pf == NULL)
    {
        errnum = errno;
        fprintf(stderr, "错误号: %d\n", errno);
        perror("通过 perror 输出错误");
        fprintf(stderr, "打开文件错误: %s\n", strerror( errnum ));
    }
    else
    {
        fclose (pf);
    }
    
    
    
    
    // insert code here...
//    printf("Hello, World!\n");
//    printf("可执行程序 %s, 参数个数 %d, 运行输出 %s\n",argv[0],argc,argv[1]);
//    printf("int 存储大小 %lu \n",sizeof(int));
//
//    int arr[5] = {2,43,5,6,23};
//    double avg;
//    avg = getAverage(arr, 5);
//    printf("平均数为 %lf \n",avg);
    
//    int c;
//
//    printf( "Enter a value :");
//    c = getchar( );
//
//    printf( "\nYou entered: ");
//    putchar( c );
//    printf( "\n");
//    getcharAndPutchar;
//    writeOrOpenFile();
    return 0;
}
// nouse
void writeOrOpenFile(){
    FILE *p = NULL;
    p = fopen("/Users/yinyongzhen/Documents/yyz/C语言学", "w+");
    fprintf(p, "hello ...hello");
    fputs("fput..", p);
    fclose(p);
    
    
    
    
}

void charArr(){
#pragma mark - 指向数组的指针
    {
        /* 带有 5 个元素的整型数组 */
        double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
        double *p;
        int i;
        
        p = balance;
        
        /* 输出数组中每个元素的值 */
        printf( "使用指针的数组值\n");
        for ( i = 0; i < 5; i++ )
        {
            printf("*(p + %d) : %f\n",  i, *(p + i) );
        }
        
        printf( "使用 balance 作为地址的数组值\n");
        for ( i = 0; i < 5; i++ )
        {
            printf("*(balance + %d) : %f\n",  i, *(balance + i) );
        }
        
        //p 是一个指向 double 型的指针，这意味着它可以存储一个 double 类型的变量。一旦我们有了 p 中的地址，*p 将给出存储在 p 中相应地址的值，正如上面实例中所演示的。
    }
}
void getcharAndPutchar(){
    int c;
    
    printf( "Enter a value :");
    c = getchar( );
    
    printf( "\nYou entered: ");
    putchar( c );
    printf( "\n");
//    return 0;
}
double getAverage(int arr[], int size){
    
    int i;
    double avg;
    double sum = 0;
    for (i = 0; i<size ; i++) {
        sum += arr[i];
    }
    return sum/size;
}
