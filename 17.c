#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

int main()
{
    int queue[MAX], head, n, i, j, seek_time = 0, direction;
    printf("Enter the size of queue: ");
    scanf("%d", &n);
    printf("Enter the queue elements: ");
    for (i = 1; i <= n; i++)
        scanf("%d", &queue[i]);
    printf("Enter the initial head position: ");
    scanf("%d", &head);
    printf("Enter the direction to move (0 for left, 1 for right): ");
    scanf("%d", &direction);
    queue[0] = head;
    if (direction == 1) // moving right
    {
        for (i = 0; i <= n; i++)
        {
            for (j = i + 1; j <= n; j++)
            {
                if (queue[i] > queue[j])
                {
                    int temp = queue[i];
                    queue[i] = queue[j];
                    queue[j] = temp;
                }
            }
        }
        for (i = 0; i <= n; i++)
        {
            if (queue[i] == head)
                break;
        }
        printf("%d -> ", head);
        for (j = i + 1; j <= n; j++)
        {
            printf("%d -> ", queue[j]);
            seek_time += abs(queue[j] - queue[j - 1]);
        }
        printf("%d -> ", queue[n]);
        seek_time += abs(queue[n] - queue[i - 1]);
        for (j = i - 1; j >= 1; j--)
        {
            printf("%d -> ", queue[j]);
            seek_time += abs(queue[j] - queue[j - 1]);
        }
    }
    else // moving left
    {
        for (i = 0; i <= n; i++)
        {
            for (j = i + 1; j <= n; j++)
            {
                if (queue[i] < queue[j])
                {
                    int temp = queue[i];
                    queue[i] = queue[j];
                    queue[j] = temp;
                }
            }
        }
        for (i = 0; i <= n; i++)
        {
            if (queue[i] == head)
                break;
        }
        printf("%d -> ", head);
        for (j = i + 1; j <= n; j++)
        {
            printf("%d -> ", queue[j]);
            seek_time += abs(queue[j] - queue[j - 1]);
        }
        printf("%d -> ", queue[n]);
        seek_time += abs(queue[n] - queue[i - 1]);
        for (j = i - 1; j >= 1; j--)
        {
            printf("%d -> ", queue[j]);
            seek_time += abs(queue[j] - queue[j - 1]);
        }
    }
    printf("\nTotal seek time = %d\n", seek_time);
    return 0;
}
