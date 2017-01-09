#include <unistd.h>
#include <wchar.h>

void ft_put2wchar(wchar_t a)
{
  unsigned char c;

  c = 0xF0 | (a >> 18);
  write (1, &c, 1);
  c = 0x80 | ((a >> 12) & 0x3F);
  write (1, &c, 1);
  c = 0x80 | ((a >> 6) & 0x3F);
  write (1, &c, 1);
  c = 0x80 | (a & 0x3F);
  write (1, &c, 1);
}

void  ft_putwchar(wchar_t a)
{
  unsigned char c;

  if (a <= 0x7F)
      write (1, &a, 1);

  else if (a <= 0x7FF)
  {
    c = 0xC0 | (a >> 6);
    write (1, &c, 1);
    c = 0x80 | (a & 0x3F);
    write (1, &c, 1);
  }

  else if (a <= 0xFFFF)
  {
    c = 0xE0 | (a >> 12);
    write (1, &c, 1);
    c = 0x80 | ((a >> 6) & 0x3F);
    write (1, &c, 1);
    c = 0x80 | (a & 0x3F);
    write (1, &c, 1);
  }

  else if (a <= 0x10FFFF)
    ft_put2wchar(a);
 }
//
// int main(void)
// {
//   ft_putwchar(78);
//   write (1, "\n", 1);
//   ft_putwchar(0x5D8);
//   write (1, "\n", 1);
//   ft_putwchar(0xFFE0);
//   write (1, "\n", 1);
//   ft_putwchar(0x1000F);
//   return 1;
// }
