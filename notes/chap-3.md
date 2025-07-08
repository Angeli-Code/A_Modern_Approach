# Chapter 3 Notes


### Content 

- printf conversion specs
	- d: displays integer in decimal(base 10)
	- e: displays floats in exponential format(scientific notation)
	- f: displays float in fixed decimal(NOTE: needs exponent or else
	it acts like 'e'
	- g: displays floats either as 'e' or 'f' depending on number size
		- Best used when the numbers' size can't be predicted
- printf to format numbers
	- %d: decimal form using minimal space
	- %5d: decimal form using at least 5 spaces
	- %-5d: decimal form using at least 5 spaces but left justified
	- %5.3d: decimal form using at least 5 spaces. Guaranteed 3 digits
	- %10.3f: fixed decimal form using 10 digits overall and 3 after the
	decimal
	- %10.3e: exponential form using 10 digits with 3 after the decimal
	- %-10.3e: exponential form using 10 digits with 3 after the decimal
	but left justified
- escape sequences
	- Alert(bell)		\a
	- Backspace		\b
	- Newline		\n
	- Horizontal Tab	\t
- special rules
	- Stirngs: You can't printf("\"); you must use printf("\\"); to print '\'.
- scanf function
	- You can specify the same way that printf formats output, to read input.
	- ignores whitespaces, reads until there is a non whitespace
	- putting \n at the end of scanf() can result in moving to the next line
	and reading the next string
	- fractions with scanf
		- you can use the formatting of scanf to allow the user to input
		the fraction all together!
		

## Author

Notes Written by Angelo Laberinto
