# Rendu Projet LibFT

## Introduction Du Projet : 

### Presentation du Projet  : 

Le projet LibFT est un projet de l'ecole 42 qui consiste a recoder un certain nombre de fonctions de la librairie standard du C, ainsi que d'autres fonctions utiles pour le developpement de projets futurs. Le but de ce projet est de nous faire comprendre comment fonctionnent ces fonctions, et de nous apprendre a les coder nous-memes.

### Cahier des Charges : 

Fonctions de la libft : 

- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint
- ft_strlen
- ft_memset
- ft_bzero
- ft_memcpy
- ft_memmove
- ft_strlcpy
- ft_strlcat
- ft_toupper
- ft_tolower
- ft_strchr
- ft_strrchr
- ft_strncmp
- ft_memchr
- ft_memcmp
- ft_strnstr
- ft_atoi
- ft_calloc
- ft_strdup
- ft_substr
- ft_strjoin
- ft_strtrim
- ft_itoa
- ft_strmapi
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd
- ft_striteri
- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap


## Environnement de Developpement :

### Environnement Global :

lib : Tout les fichiers sources de la libft 
test : Tout les fichiers sources de test
makefile : Fichier de compilation de la libft

### Makefile :

- 'make' : Compile la libft
- 'make clean' : Supprime les fichiers objets
- 'make fclean' : Supprime les fichiers objets et la libft
- 'make re' : Supprime les fichiers objets et recompile la libft
- 'make dev' : Compile la libft, les fichiers de test et la norminette

## Documentation :

### Partie 1 :

- ft_isalpha :

	- prototype : `int	ft_isalpha(int c)`
	- description : Check si un caractere est une lettre (majuscule ou minuscule) dans la table ascii, Si le caractere `c` est une lettre la fonction renvoies `1024`, sinon elle renvoie `0`.

- ft_islower :
	- prototype : `int	ft_islower(int c)`
	- description : Check si un caractere est une lettre minuscule dans la table ascii, si le caractere `c` est une lettre minuscule la fonction renvoies `512`, sinon elle renvoie `0`.

- ft_isupper :
    - prototype : `int	ft_isupper(int c)`
	- description : Check si un caractere est une lettre minuscule dans la table ascii, si le caractere `c` est une lettre majuscule la fonction renvoies `256`, sinon elle renvoie `0`.

- ft_isdigit :
	- prototype : `int	ft_isdigit(int c)`
	- description : Check si un caractere est un chiffre dans la table ascii, si le caractere `c` est un chiffre la fonction renvoies `2048`, sinon elle renvoie `0`.

- ft_alnum :
    - prototype : `int	ft_isalnum(int c)`
	- description : Check si un caractere est un chiffre ou une lettre dans la table ascii, si le caractere `c` est un chiffre ou une lettre la fonction renvoies `8`, sinon elle renvoie `0`.

- ft_isascii :
    - prototype : `int	ft_isascii(int c)`
	- description : Check si un caractere est dans la table ascii, si le caractere `c` est dans la table ascii la fonction renvoies `1`, sinon elle renvoie `0`.

- ft_isprint :
    - prototype : `int	ft_isprint(int c)`
	- description : Check si un caractere est un caractere visible dans la table ascii, si le caractere `c` est un caractere visible la fonction renvoies `16384`, sinon elle renvoie `0`.

- ft_toupper :
	- prototype : `int	ft_toupper(int c)`
	- description : Renvoie le caractere envoyer en majuscule si il est une lettre minuscule, sinon il renvoie le caractere envoyer.

- ft_tolower :
  - prototype : `int	ft_tolower(int c)`
  - description : Renvoie le caractere envoyer en minuscule si il est une lettre majuscule, sinon il renvoie le caractere envoyer.

- ft_strlen :
  - prototype : `size_t	ft_strlen(const char *s)`
  - description : Renvoie la taille de la chaine de caractere `s`.
  - Notes : On boucle la chaine jusqu'a trouver le caractere de fin de chaine `\0`.

- ft_memset :
  - prototype : `void	*ft_memset(void *b, int c, size_t len)`
  - description : Remplie les `len` premiers octets de la memoire pointee par `b` avec l'octet `c`.

- ft_bzero :
  - prototype : `void	ft_bzero(void *s, size_t n)`
  - description : Met a zero les `n` premiers octets de la memoire pointee par `s`.
  - Notes : On utilise la fonction `ft_memset` pour remplir les `n` premiers octets de la memoire pointee par `s` avec l'octet `0`.

- ft_memmove :
  - prototype : `void	*ft_memmove(void *dst, const void *src, size_t len)`
  - description : Copie `len` octets de la memoire pointee par `src` dans la memoire pointee par `dst`. Les deux zones peuvent se chevaucher.
  
- ft_memcpy :
  -  prototype : `void	*ft_memcpy(void *dst, const void *src, size_t n)`
  -  description : Copie `n` octets de la memoire pointee par `src` dans la memoire pointee par `dst`. Les deux zones ne doivent pas se chevaucher.

- ft_memchr :
  - prototype : `void	*ft_memchr(const void *s, int c, size_t n)`
  - description : Cherche le caractere `c` dans les `n` premiers octets de la memoire pointee par `s`. Si le caractere `c` est trouve, la fonction renvoie un pointeur sur le caractere, sinon elle renvoie `NULL`.

- ft_memcmp :
	- prototype : `int	ft_memcmp(const void *s1, const void *s2, size_t n)`
	- description : Compare les `n` premiers octets des zones memoires `s1` et `s2`. Si les deux zones sont identiques, la fonction renvoie `0`, sinon elle renvoie la difference entre les deux premiers octets differents.

- ft_strlcpy :
  - prototype : `size_t	ft_strlcpy(char *dst, const char *src, size_t size)`
  - description : Copie jusqu'a `size - 1` caracteres de la chaine `src` dans `dst`, `dst` est toujours terminee par un caractere de fin de chaine `\0`.

- ft_strlcat :
  - prototype : `size_t	ft_strlcat(char *dst, const char *src, size_t size)`
  - description : Concatene la chaine `src` a la fin de `dst`. La taille de `dst` est de `size` octets. La chaine `dst` et la chaine `src` sont toujours terminees par un caractere de fin de chaine `\0`.

- ft_strchr :
  - prototype : `char	*ft_strchr(const char *s, int c)`
  - description : Cherche le caractere `c` dans la chaine `s`. La fonction renvoie un pointeur sur le premier caractere `c` trouver, sinon elle renvoie `NULL`.

- ft_strrchr :
  - prototype : `char	*ft_strrchr(const char *s, int c)`
  - description : Cherche le caractere `c` dans la chaine `s`. La fonction renvoie un pointeur sur le dernier caractere `c` trouver, sinon elle renvoie `NULL`.

- ft_strncmp :
  - prototype : `int	ft_strncmp(const char *s1, const char *s2, size_t n)`
  - description : Compare les `n` premiers caracteres des chaines `s1` et `s2`. La fonction renvoie `0` si les deux chaines sont identiques, sinon elle renvoie la difference entre les deux premiers caracteres differents.

- ft_calloc :
  - prototype : `void	*ft_calloc(size_t count, size_t size)`
  - description : Alloue la memoire pour un tableau de `count` elements de taille `size` octets. La memoire allouee est initialisee a `0`.

- ft_strdup :
	- prototype : `char	*ft_strdup(const char *s1)`
	- description : Alloue de la memoire pour une copie de la chaine `s1`, puis copie `s1` dans cette nouvelle allocation.
- ft_atoi :
  - prototype : `int	ft_atoi(const char *str)`
  - description : Convertit la chaine `

### Partie 2 :

- ft_substr :
  - prototype : `char	*ft_substr(char const *s, unsigned int start, size_t len)`
  - description : Alloue et retourne une chaine de caractere qui est la copie de la sous-chaine de `s` qui commence a l'index `start` et qui a pour taille maximale `len`.

- ft_strjoin :
  - prototype : `char	*ft_strjoin(char const *s1, char const *s2)`
  - description : Alloue et retourne une nouvelle chaine de caractere, resultat de la concatenation de `s1` et `s2`.

- ft_strtrim :
  - prototype : `char	*ft_strtrim(char const *s1, char const *set)`
  - description : Alloue et retourne une copie de `s1` sans les caracteres specifies dans `set` au debut et a la fin de la chaine.

- ft_itoa :
  - prototype : `char	*ft_itoa(int n)`
  - description : Alloue et retourne une chaine de caractere representant l'entier `n`. La fonction gere les nombres negatifs.

- ft_strmapi :
  - prototype : `char *ft_strmapi(char const *s, char (*f)(unsigned int, char)); `
  - description : Applique la fonction `f` a chaque caractere de la chaine de caracteres `s` pour creer une nouvelle chaine de caracteres resultant des applications successives de `f`.


- ft_striteri :
  - prototype : `void	ft_striteri(char *s, void (*f)(unsigned int, char*));`
  - description : Applique la fonction `f` a chaque caractere de la chaine de caracteres `s` en precisant son index en premier argument. Chaque caractere est passe par adresse a la fonction `f` afin de pouvoir etre modifie si necessaire.

- ft_putchar_fd : 
  - prototype : `void	ft_putchar_fd(char c, int fd);`
  - description : Ecrit le caractere `c` sur le descripteur de fichier donne.

- ft_putstr_fd :
  - prototype : `void	ft_putstr_fd(char *s, int fd);`
  - description : Ecrit la chaine de caracteres `s` sur le descripteur de fichier donne.

- ft_putendl_fd :
  - prototype : `void	ft_putendl_fd(char *s, int fd);`
  - description : Ecrit la chaine de caracteres `s` sur le descripteur de fichier donne, suivi d'un retour a la ligne.

- ft_putnbr_fd :
  - prototype : `void	ft_putnbr_fd(int n, int fd);`
  - description : Ecrit l'entier `n` sur le descripteur de fichier donne.

### Bonus :

- ft_lstnew :
  - prototype : `t_list	*ft_lstnew(void *content);`
  - description : Alloue et retourne un element de liste. L'element est initialise avec la valeur de `content`. La variable `next` est initialisee a `NULL`.

- ft_lstadd_front : 
  - prototype : `void	ft_lstadd_front(t_list **alst, t_list *new);`
  - description : Ajoute l'element `new` au debut de la liste.

- ft_lstadd_back :
  - prototype : `void	ft_lstadd_back(t_list **alst, t_list *new);`
  - description : Ajoute l'element `new` a la fin de la liste.

- ft_lstdelone :
  - prototype : `void	ft_lstdelone(t_list *lst, void (*del)(void*));`
  - description : Supprime l'element `lst` en appliquant la fonction `del` a son contenu.

- ft_lstclear :
  - prototype : `void	ft_lstclear(t_list **lst, void (*del)(void*));`
  - description : Supprime et libere la memoire de l'element `lst` et de tous les elements qui suivent, en appliquant la fonction `del` a chaque element.

- ft_lstiter :
  - prototype : `void	ft_lstiter(t_list *lst, void (*f)(void*));`
  - description : Parcourt la liste `lst` en appliquant la fonction `f` a chaque element.

- ft_lstmap
  - prototype : `t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*));`
  - description : Parcourt la liste `lst` en appliquant la fonction `f` a chaque element pour creer une nouvelle liste. Si une allocation echoue, la fonction renvoie `NULL`.