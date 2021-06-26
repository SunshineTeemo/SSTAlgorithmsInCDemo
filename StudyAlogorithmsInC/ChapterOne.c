//
//  ChapterOne.c
//  StudyAlogorithmsInC
//
//  Created by 梅琰培 on 2021/6/26.
//  Copyright © 2021 SunshineTeemo. All rights reserved.
//

#include "ChapterOne.h"
#define N 10000
//第一章：引言
//练习
//1.1 0-2, 1-4,2-5,3-6,0-4,6-0

//程序
//1.1
//连通问题的快速查找算法
void quickFindAlgorithm(void)
{
    int i,p,q,t, id[N];



    for (int i = 0; i < N; i++) {
        id[i] = i;
    }

    //这里书中是scanf("%d %d\n",&p,&q),但是在xcode环境中输入有问题，最开始输3个数字才会判断成立，猜测可能是环境不同导致的差异，去掉回车就可以了
    while (scanf("%d %d",&p,&q) == 2) {

        if (id[p] == id[q] ) {
            printf("已连通\n");
            continue;
        }
        for (t = id[p], i = 0; i < N; i++) {

            if (id[i] == t) {
                id[i] = id[q];
            }
        }
        printf(" %d %d\n", p , q);

    }
}

