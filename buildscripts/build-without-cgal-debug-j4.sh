#!/bin/sh

# This file is free software; the Free Software Foundation    
# gives unlimited permission to copy, distribute and modify it.

cd `dirname $0`/..
export CFLAGS=
export CXXFLAGS=
DUNEMAKEFLAGS=-j4
export DUNEMAKEFLAGS
make realclean
./configure --without-devil --without-cgal --with-debug && make

