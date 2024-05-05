#include <stdio.h>
#include <unistd.h>
char *functr(char *arrtr[], int num)
{
    return arrtr[num];
}
char *funcmr(char *arrmr[], int num)
{
    return arrmr[num];
}
char *funcbr(char *arrbr[], int num)
{
    return arrbr[num];
}
int main()
{
    int sec, h, m, s, i = 0;
    printf("Enter time in seconds(under 86400): ");
    scanf("%d", &sec);
    char *tr[] = {" __ ", "    ", " __ ", " __ ", "    ", " __ ", " __ ", " __ ", " __ ", " __ "};
    char *mr[] = {"|  |", "   |", " __|", " __|", "|__|", "|__ ", "|__ ", "   |", "|__|", "|__|"};
    char *br[] = {"|__|", "   |", "|__ ", " __|", "   |", " __|", "|__|", "   |", "|__|", " __|"};
    while (sec != 0)
    {
        h = (sec / 3600);
        m = (sec - (3600 * h)) / 60;
        s = (sec - (3600 * h) - (m * 60));
        int hrc = 0;
        int h1, h2, hmain;
        hmain = h;
        while (h != 0)
        {
            h /= 10;
            ++hrc;
        }
        hmain = h;
        if (hrc == 1)
        {
            h2 = 0;
            h1 = h;
        }
        else if (hrc == 0)
        {
            h2 = 0;
            h1 = 0;
        }
        else
        {
            h1 = hmail % 10;
            hmain /= 10;
            h2 = hmain;
        }
        int minc = 0;
        int m1, m2, mmain;
        mmain = m;
        while (mmain != 0)
        {
            mmain /= 10;
            ++minc;
        }
        mmain = m;
        if (minc == 1)
        {
            m2 = 0;
            m1 = m;
        }
        else if (minc == 0)
        {
            m2 = 0;
            m1 = 0;
        }
        else
        {
            m1 = mmain % 10;
            mmain = mmain / 10;
            m2 = mmain;
        }
        m = mmain;
        int secc = 0;
        int s2, s1, smain;
        smain = s;
        while (smain != 0)
        {
            smain /= 10;
            ++secc;
        }
        smain = s;
        if (secc == 1)
        {
            s2 = 0;
            s1 = s;
        }
        else if (secc == 0)
        {
            s2 = 0;
            s1 = 0;
        }
        else
        {
            s1 = smain % 10;
            smain /= 10;
            s2 = smain;
        }
        printf("\n%s %s   %s %s   %s %s\n", functr(tr, h2), functr(tr, h1), functr(tr, m2), functr(tr, m1), functr(tr, s2), functr(tr, s1));
        printf("%s %s * %s %s * %s %s\n", funcmr(mr, h2), funcmr(mr, h1), funcmr(mr, m2), funcmr(mr, m1), funcmr(mr, s2), funcmr(mr, s1));
        printf("%s %s * %s %s * %s %s", funcbr(br, h2), funcbr(br, h1), funcbr(br, m2), funcbr(br, m1), funcbr(br, s2), funcbr(br, s1));
        sleep(1);
        sec -= 1;
        i++;
        char ch;
        if (i == 60)
        {
            printf("\nDo you want to continue (Y for yes and N for no\n");
            scanf("%c", &ch);
            if (ch == 'Y')
            {
                i = 0;
                continue;
            }
            else if (ch == 'N')
            {
                break;
            }
            else
                printf("Enter a valid character!");
        }
    }
    printf("\n Your countdown is successfully over!");
    return 0;
}
