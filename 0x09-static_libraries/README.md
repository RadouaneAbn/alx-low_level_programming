0x09. C - Static libraries

**Task 0**
> libmy.a:
> this a static library containing some of my previous functions.
> `0-isupper.o, 0-memset.o, 100-atoi.o, ...`

> main.h:
> this is a header file containing some of my previous functions prototypes.
```
	int _isupper(int c);
	char *_memset(char *s, char b, unsigned int n);`
	int _atoi(char *s);
```

============================================================================

**Taks 1**
> create_static_lib.sh:  
> This a script that creates a static library called liball.a from all .c files
```
	this script compile every .c file wiltout linking them
	that creates a object file .o

	and then it create the static library "liball.a"
	and finaly deletes all .o files 
```
