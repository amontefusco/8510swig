
#
# build the python module
#
swig -python 8510.i
gcc -fpic -c -I/usr/include/python2.7  8510_wrap.c 8510.c
gcc -shared  8510_wrap.o 8510.o -o _py8510.so

# test

python
Python 2.7.6 (default, Nov 23 2017, 15:49:48)
[GCC 4.8.4] on linux2
Type "help", "copyright", "credits" or "license" for more information.
>>> import py8510
>>> py8510.send_frame(4,"abcd")
4
