## B1 - Unix & C Lab Seminar

## B-CPE-101

# Bistro-matic

## Kind of Basic Calculator

```
binary name : calc
language : C
compilation : via Makefile, including re, clean and fclean rules
```
- The totality of your source files, except all useless files (binary, temp files, obj
    files,...), must be included in your delivery.
- All the bonus files (including a potential specific Makefile) should be in a directory
    named _bonus_.
- Error messages have to be written on the error output, and the program should
    then exit with the 84 error code (0 if there is no error).

```
Only the project submitted by your project leader will be checked-out.
```
The goal of this project is to write a program that will display the result of an evaluated mathematical ex-
pression. The expression will be composed of infinite integers that can be expressed in any base.
The program must handle the following operators:+-*/%, parentheses, operation priorities and syntax errors,
but not float numbers.

```
man bc
```
### ∇ Terminal - + x

```
∼/B-CPE-101> ./calc -h
USAGE
./calc base operators size_read
```
#### DESCRIPTION

- base: all the symbols of the base
- operators: the symbols for the parentheses and the 5 operators
- size_read: number of characters to be read

```
If a syntax error occurs, the program must display the string defined by the
SYNTAX_ERROR_MSG macro.
For any other error, the program must display the string defined by the ERROR_MSG macro.
```


```
The libC is forbidden, except the following functions:read, write, malloc, free, exit.
```
### ∇ Terminal - + x

```
∼/B-CPE-101> echo ‘3+6’ | ./calc 0123456789 ‘()+-*/%’ 3 ; echo
9
∼/B-CPE-101> echo ‘3v6’ | ./calc 0123456789 ‘{}vwxyz’ 3 ; echo
9
∼/B-CPE-101> echo ‘----++-6(12)’ | ./calc 0123456789 ‘()+-*/%’ 10 ; echo
syntax error
∼/B-CPE-101> echo ‘----++-6*12’ | ./calc 0123456789 ‘()+-*/%’ 11 | cat -e ; echo
-72
∼/B-CPE-101> echo ‘-(12-(4*32))’ | ./calc 0123456789 ‘()+-*/%’ 12 | cat -e ; echo
116
∼/B-CPE-101> echo ‘-(e@-(;*!@))’ | ./calc ‘0A@!;ie& ]’ ‘()+-*/%’ 12 | cat -e ; echo
ee
∼/B-CPE-101> echo ‘-(12*(13+15/5*(6/(12+14%(30%5+(10*25)-46)+16)-20)/43)*20)
*(-(12-98*42)*(16+63-50/3))’ | ./calc 0123456789 ‘()+-*/%’ 84 | cat -e ; echo
-744629760
```
```
The given main.c and bistromatic.h files are given as-is , feel free to use them (or not).
They are not guaranteed to be fully compliant with the coding style.
```


