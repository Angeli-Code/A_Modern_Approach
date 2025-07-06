# Chapter 2 Notes

This chapter introduces the general formatting and basic usage of C programs.

### Content 

- Compiling and Linking

	- **Preprocessing:** The preprocessor looks at all directives. Directives
	all start with a "#". It can modify the code as well as add other code
	to the program.

	- **Compiling:** After preprocessing, the compiler will translate the code
	into machine instructions. These files will be seen as "*.o".

	- **Linking:** Once a program is compiled, the linker will sure that the
	object code is linked to the object code needed from all the directives


- Functions

	- Similar to "procedures" and "subroutines" in lower level programming
	languages
	- Comes from mathematics but is much looser than the math implementation.
	- Simply a collection of statements that have been grouped and named.
	- Only the "main" function is necessary in a C program.
	- **A C program can be thought of being a collection of functions**

- Statements

	- A command that gets executed when a program runs
	- All statements must end with a ";" so that the compiler knows where the
	statement ends

- Comments

	- Comments look like this: 		/* This is a comment */
	- Newer comments look like this: 	// This is a new comment
	- Multiline comments look like this:	/* This is a 
						 * Multiline 
						 * comment
						 */

- Assignment

	- This occurs when a variable is given a value.
	- Example:
	```C
	int height = 8;
	``` 
	- You can print a variable like so:
	```C	
	printf("Height = %.2f ft/\n", height);
	```

- Printing Expressions

	- printf allows for the expression of any numeric expression.
	- Example:
	```C
	volume = height * len  * width;
	printf("%d\n",volume);

	/*is the same as*/

	printf("%d\n", height * length * width);
	```

- Reading Input

	- For now, use the function scanf(), the counterpart to printf()
	- The "f" in scanf() and printf() stands for "format"
	- How to read an int value
	```C	
	scanf("%d", &i);
	```
	- **NOTE**: Notice that scanf takes a variable address...
	
- Defining Names for Constants

	- Delineated by the use of #define
	- #define is a preprocessing directive (No need for a ";")
	- If #define has operators in it, then the expressions should be
	enclosed in ()
	- The preprocessor will modify the code with the macro with what
	their definitions are
	- Generic #define example:

	```C
	#define AGE 26
	printf("%d\n", AGE);

	/* becomes this after preprocessing */

	printf("%d\n", 26);
	```

	- #define with operations

	```C	
	#define ADDED_VALS (A + B)
	printf("%d\n", ADDED_VALS);

	/* becomes this after preprocessing */

	printf("%d\n", A + B);
	```

- Keywords

	auto		enum 		restrict	unsigned
	break 		extern 		return 		void
	case 		float		short 		volatile
	char 		for 		signed 		while
	const 		goto 		sizeof 		Bool
	continue 	if 		static 		_Complex
	default 	inline' 	struct 		_Imaginary
	do 		int 		switch
	double 		long 		typedef
	else 		register 	union

- Form of a C program

```C
#directives

int main()
{
	declarations
	statements
}

```

## Author

Notes Written by Angelo Laberinto
