#include <stdio.h>

char *ft_strstr(char* str, char* to_find)
{
    const char* p1;
    const char* p2;
    char* r = NULL;

    while (*str != '\0')
    {
        p1 = str;
        p2 = to_find;

        while (*p1 == *p2 && *p1 != '\0' && *p2 != '\0')
        {
            ++p1;
            ++p2;
        }
        if (*p2 == '\0')
        {
            r = str;
            break;
        }
        ++str;
    }
    
    if (*to_find == '\0')
    {
        r = str;
    }

    return (char*) r;
}

int main()
{
    char *p_src_str = "adcdefg";
    char *p_find_str = "cd";
    char* p_pos = ft_strstr(p_src_str, p_find_str);

    printf("%p\n", p_pos);
    printf("%p\n", &p_src_str[2]);

    if (p_pos != NULL)
    {
        printf("기준 문자열 : %s\n", p_src_str);
        printf("찾을 문자열 : %s\n", p_find_str);
        printf("찾은 위치 : %s\n", p_pos);
    }
    else
        printf("%s 문자열을 찾을 수 없습니다!\n", p_find_str);
    return 0;
}


//void ft_print_comb2()
//{
//    char c1[2] = { '0','0' };
//    char c2[2] = { '0','0' };
//
//    for (c1[0] = '0'; c1[0] <= '9'; c1[0]++)
//    {
//        for (c1[1] = '0'; c1[1] <= '9'; c1[1]++)
//        {
//            for (c2[0] = '0'; c2[0] <= '9'; c2[0]++)
//            {
//                for (c2[1] = '0'; c2[1] <= '9'; c2[1]++)
//                {
//                    write(1, c1, 1);
//                    write(1, " ", 1);
//                    write(1, c2, 1);
//                    write(1, ", ", 2);
//                }
//            }
//        }
//    }
//}