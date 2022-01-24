#include <stdio.h>
#include "ft_printf.h"

int		ft_printf(const char *string, ...);

int main(void){
    
    
    int c = 0;
    
	printf("\n=== MEU CODIGO ===\n");
    // c = ft_printf("ola %%i %d %X %% %% %u %p %c %c %c %c %c %c %s\n", 3110, 4294967295, 4294967295, &c, 'a', 'd', 'j','a', 'd', 'j',"ala");
	// // c = ft_printf("ola %%i %d %X %% %% %u %p %s", 4294967295, 4294967295, 4294967295, &c,"ola\n");
    // printf("retorno: %d\n", c);
	// printf("\n=== COMPARAÇAO ===\n");
	

    // c = printf("ola %%i %d %X %% %% %u %p %c %c %c %c %c %c %s\n", 3110, 4294967295, 4294967295, &c, 'a', 'd', 'j','a', 'd', 'j',"ola");
    // printf("retorno: %d\n", c);
	
	// ===== POSSIVEIS VERIFICAÇÕES PRO PRINTF =====
    // c = ft_printf("ola %%i %d %c % çf %% %% %u %s\n", 5, 'a', 12, "ola");
	// printf("retorno: %d\n", c);

	// printf("\n=== COMPARAÇAO ===\n");
    // c = printf("ola %%i %d %c %% % çf %% %u %s %\n", 5, 'a', 12, "ola");
	// printf("retorno: %d\n", c);

	c = ft_printf(" %c %c %c ", 0, '2', '1');
	printf("retorno: %d\n", c);

	printf("\n=== COMPARAÇAO ===\n");
    c = printf(" %c %c %c ", 0, '2', '1');
	printf("retorno: %d\n", c);

    // ft_printf("oi");
	// c = ft_printf("hello:\n\nabc %p", &c);
	// printf("\nretorno: %d\n", c);
	
	// c = printf("hello:\n\nabc %p", &c);
	// printf("\nretorno: %d\n", c);
    return (0);
}