// For the first test case -
// If 10 people can complete the work in 15 days,
// then 15 people can complete that work in 10 days
// which is 5 days less than the previous time.
// So the answer is 5.

// m1=10 m2=5 D=15
// Suppose there are M1=10 farmers who can complete a work in D=15 days.
// Fortunately, some other farmers appeard in the village before the
// start of the work,and now there are M2=10+5 additional farmers.
// Can you determine how many fewer days it will take for them to
//  complete the task?

//  10 jon kore =15 dine
//  1 jon kore =15*10 =150 dine

//  10+5 joner lage = 150/15=10

//  new holo 10+5 jon ,

// d=15-10
// 5

#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);
        int one_people = M1 * D;
        int total_people = M1 + M2;
        int new_People_time = (one_people / total_people);
        int Time_diff = D - new_People_time;

        printf("%d\n", Time_diff);
    }

    return 0;
}