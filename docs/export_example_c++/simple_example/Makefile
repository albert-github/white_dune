# This Makefile is free software; the Free Software Foundation
# gives unlimited permission to copy, distribute and modify it.

CXX = g++

all: helloWorld

X3dSceneGraph.h: helloWorld.x3dv helloWorld2.x3dv ../../../bin/dune
	../../../bin/dune -prefix Pre_ -c++ helloWorld.x3dv > X3dSceneGraph.h
	../../../bin/dune -prefix Pre2_ -c++ helloWorld2.x3dv >> X3dSceneGraph.h
	
helloWorld: mainHelloWorld.cc X3dSceneGraph.h
	$(CXX) -g -o helloWorld mainHelloWorld.cc 

../../../bin/dune:
	(cd ../../.. && make)

clean:
	rm -f X3dSceneGraph.h helloWorld core

allNodesTest: allNodesTestX3d.x3dv ../../../bin/dune
	../../../bin/dune -c++ allNodesTestX3d.x3dv > X3dSceneGraph.h
	$(CXX) -g -o helloWorld mainHelloWorld.cc 



