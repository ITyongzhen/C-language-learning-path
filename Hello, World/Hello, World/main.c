//
//  main.c
//  Hello, World
//
//  Created by yongzhen on 2018/8/6.
//  Copyright © 2018年 yongzhen. All rights reserved.
//

#include <stdio.h>
double getAverage(int arr[], int size);
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    printf("可执行程序 %s, 参数个数 %d, 运行输出 %s\n",argv[0],argc,argv[1]);
    printf("int 存储大小 %lu \n",sizeof(int));
    
    int arr[5] = {2,43,5,6,23};
    double avg;
    avg = getAverage(arr, 5);
    printf("平均数为 %lf \n",avg);
    return 0;
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
