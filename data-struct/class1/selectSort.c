#include <stdio.h>
#include <windows.h>
#include <math.h>

// 最大索引值
#define MAX_SIZE 188
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))
void sort(int [], int);

// 选择排序
int main(int argc, char const *argv[])
{
    // printf("hello");
    // n -> 不能超过最大索引值
    int i, n, list[MAX_SIZE];
    printf("please enter the number of numbers to generate: ");
    scanf("%d", &n);

    // 判断n是否超出范围
    // 超出范围 退出
    if (n < 1 || n > MAX_SIZE)
    {
        fprintf(stderr, "Improper value of n\n");
        exit(1);
    }
    
    printf("Unsorted value:\n");
    // 生成随机value
    for (i = 0; i < n; i++)
    {
        /* rand() */
        list[i] = rand() % 10000;
        printf("%d  ", list[i]);
    }

    // 数组值 索引
    sort(list, n);

    // 排序
    printf("\nSorted array:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", list[i]);
    }

    // printf("\n");
    

    system("pause");
    return 0;
}


void sort(int list[], int n)
{
    // 冒泡比较 得出最小值保存(索引值)
    // 最后通过索引值替换位置

    int temp, min, j;

    for (int i = 0; i < n; i++)
    {
        min = i;

        /* code */
        for (j = i+1; j < n; j++)
        {
            /* 逐个比较 直到得到最小值 */
            if (list[j] < list[min])
            {
                /* 替换为min */
                min = j;
            }
            
        }
        
        // 值互换
        SWAP(list[min], list[i], temp); 
    }
    
}