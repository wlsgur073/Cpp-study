#include <stdio.h>
#include <ctype.h>

// 단어 앞에 대문자로 변경, 문자열에 대문자가 있을시에는 소문자로 변경

//char is_alpha(char c)
//{
//    c = ((c >= 'A' && c <= 'Z') && (c >= 'a' && c <= 'z')) ? 1 : 0;
//}
//
//char is_num(char c)
//{
//    c = (c >= 48 && c <= 57) ? 1 : 0;
//}
//
//char is_upper(char c)
//{
//    c = (c >= 'A' && c <= 'Z') ? 1 : 0;
//}
//
//char is_lower(char c)
//{
//    c = (c >= 'a' && c <= 'z') ? 1 : 0;
//}

unsigned int    ft_strlcat(char* dest, char* src, unsigned int size)
{
    unsigned int k;
    unsigned int i;
    unsigned int j;
    i = 0;
    k = 0;
    j = 0;
    while (dest[i])
        i++;
    while (src[k])
        k++;
    if (size <= i)
        k += size;
    else
        k += i;
    while (src[j] && i + 1 < size)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (k);
}

int main()
{
    char a[] = "ABCDE";
    char b[] = "HELL";
    printf("%u\n", ft_strlcat(a, b, 0));
    return 0;
}

//void ft_rev(int* tab, int size)
//{
//    int n;
//    int temp;
//
//    n = 0;
//    while (n <= size / 2)
//    {
//        temp = tab[n];
//        tab[n] = tab[size - 1 - n];
//        tab[size - 1 - n] = temp;
//        n++;
//    }
//}