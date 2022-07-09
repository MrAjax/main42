#include <stdio.h>
#include <unistd.h>

int main ()
{

/* ft_ft
int b;
b = 0;
int *pointeur;
pointeur = &b;
printf("la valeur de b est %d\n", b); 
printf("je recupere la valeur de b grace au pointeur %d\n", *pointeur);
ft_ft(pointeur);
printf("la valeur de b est %d\n", b); 
printf("la valeur du pointeur est %d\n", pointeur);
*/

/* ft_ultimate_ft
	int nbr;
	int	*p;
	int **p2;
	int ***p3;
	int ****p4;
	int *****p5;
	int ******p6;
	int *******p7;
	int ********p8;
	int *********p9;

	p = &nbr;
	p2 = &p;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	p9 = &p8;
	
	ft_ultimate_ft (p9);
	printf("je recupere la valeur de b grace au pointeur p9 %d\n", nbr);
*/

/*ft_swap

 int   	d;
 int 	e;
 int	*a;
 int	*b;

 d = 1337;
 e = 42;

 a = &d;
 b = &e;
printf("avant swap d = %d\n", *a);
printf("avant swap e = %d\n", *b);
ft_swap(a, b);
printf("apres swap d = %d\n", *a);
printf("apres swap e = %d\n", *b);
*/

/*ft_div_mod
	int a;
	int b;
	int	*div;
	int	*mod;
		
	a = 10;
	b = 0;
	div = &a;
	mod = &b;


	ft_div_mod(a, b, div, mod);


	printf("le produit de la division est %d\n", *div);
	printf("la retenue de la division est %d\n", *mod);
*/

/*ft_utlimate_div_mod

    int c;
	int d;
	int *a;
	int *b;

	
	c = 14;
	d = 0;
	a = &c;
	b = &d;

printf("Valeur de a avant fonction = %d\n", *a);
printf("Valeur de b avant fonction = %d\n", *b);
	
	ft_ultimate_div_mod(a, b);

printf("Valeur de a apres fonction = %d\n", *a);
printf("Valeur de b apres fonction = %d\n", *b);
*/

/*ft_putstr

    char str[] = "coucou";
    ft_putstr(str);

*/

/* ft_strlen

    char str[] = "coucou";
	printf("%d\n", ft_strlen(str));
*/

/*ft_rev_int_tab

	int tab[5] = {1, 5, 2, 8, 9};
	ft_rev_int_tab(tab, 5);
	printf("%d%d%d%d%d\n", tab[0], tab[1], tab[2], tab[3], tab [4]);

*/

/*ft_sort_int_tab

	int tab[5] = {4, 9, 2, 6, 0};
	ft_sort_int_tab(tab, 5);
	printf("%d%d%d%d%d\n", tab[0], tab[1], tab[2], tab[3], tab [4]);
    
*/

}
