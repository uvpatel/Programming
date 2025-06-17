# Internal working of python

## Python's inner Working.


2) Converted into bytecode => mostly hidden in pytho

3) Python VM

- Virtual Machine

## Code execution
1) phase 1:
- compile using cpython. 
- there are lot other also (pypy,jython).
- compile to Byte Code.
- low level & platform Independent.

**note** - Byte Code Runs Faster
- .pyc -> compiled python (frozen Binaries)

## __pycache__
- Source change & Python Version.
- prog.cpython-version.pyc name could be anything.

- works only for imported files.
- not for top level files.

## Python Virtual Machine (PVM)
- Code loop to iterate byte code.
- Run time Engine.
- Also Known as Python Interpreter.


**Note** - Byte Code is Not machine code.
- python specific interpretation.
- cpython,jython,IronPython,Stackless,PyPy.
- cpython is Standard Implementation.

