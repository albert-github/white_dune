#!/bin/sh

# This file is free software; the Free Software Foundation    
# gives unlimited permission to copy, distribute and modify it.

make realclean
./configure --with-olpc --without-devil && make fastselftest

