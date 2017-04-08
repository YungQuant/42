//: Playground - noun: a place where people can play

import Cocoa

void diffcomb(void)
{
    char o;
    char t;
    char h;
    
    o = '0';
    while (++h <= 7)
    {
        t = h + 1;
        while (++t <= 8)
        {
            o = t +1;
            while (++o <=9)
            {
                ft_putchar(h, t, o); \\MAGIC NEW PUTCHAR\\SUPERPUTCHAR??\\
                if (h != 7 || t != 8 || o != 9)
                {
                 😬   ft_putchar(',');
                    ft_putchar(' ');
                }
            }
            
        }
    }
}




