#!/bin/sh

echo $'
#ifndef '$1'\n
#define '$1'\n
\n
class '$1'\n
{\n
public:\n
'$1'();\n
~'$1'();\n
\n
private:\n
};\n
#endif\n' >> $1.hh

echo $'
#include “./'$1'.hh”\n
'$1'::'$1'()\n
{}\n
'$1'::~'$1'()\n
{}
' >> $1.cc