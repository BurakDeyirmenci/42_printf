# ft_printf Projesi
Bu proje, `printf()` fonksiyonunu yeniden yazmanızı sağlar. Genel olarak, değişen sayıda argümanların nasıl kullanılacağını öğreneceksiniz. Proje, C dilindeki değişken argümanlı fonksiyonları keşfetmenize olanak tanır. Başarılı bir `ft_printf()` fonksiyonunun sırrı iyi yapılandırılmış ve genişletilebilir kodlardır.

## Genel Talimatlar

- Projeleriniz C programlama dilinde yazılmalıdır.
- Projeleriniz Norm’a uygun olmalıdır.
- Fonksiyonlarınız beklenmedik bir şekilde sonlanmamalıdır.
- Heap'te ayrılan hafıza adresleri serbest bırakılmalıdır.
- Makefile dosyası sağlanıyorsa, kaynak dosyalarınızı uygun şekilde derlemelisiniz.
- Bonus kuralı, projenin ana kısmında kullanılması yasak olan bazı unsurları içerebilir.
- Test programları yazmanızı öneririz, ancak teslim edilmeyecek ve puanlanmayacaktır.

## Zorunlu Kısım

- Program adı: `libftprintf.a`
- Teslim edilecek dosyalar: Makefile, *.h, _/_.h, *.c, _/_.c
- Makefile: `NAME`, `all`, `clean`, `fclean`, `re` kurallarını içermelidir.
- Harici fonksiyonlar: malloc, free, write, va_start, va_arg, va_copy, va_end
- Libft kullanımı: Evet
- Açıklama: Gerçek `printf` fonksiyonunu taklit eden `ft_printf` fonksiyonunu içeren bir kütüphane yazmalısınız.