# StringUtils
A simple C++ string utility class.

This class contains utility methods to work with strings in C++. At present,  
there's only one method which has been implemented and this is the split method.  

This method accepts a string, delimiter, and vector<string> (reference) as  
paramenters and will store all the fields found in the string parameter into the  
vector<string>.  
  
Build Instructions:  
  
*NOTE -- All build instructions assume that you're in the root directory of this  
project.  
  
<pre>
$ mkdir lib  
$ g++ -Wall -fPIC -O2 -shared src/StringUtils.cpp -o lib/libstringutils.so  
</pre>
  
Build Instructions for Test Program:  
  
<pre>
$ mkdir bin  
$ g++ examples/Test.cpp -o bin/Test -Llib -lstringutils  
</pre>
  
Running the Test program:  
<pre>
$ export LD_LIBRARY_PATH=lib/  
$ bin/Test ",This,is,a,,test,"  
</pre>
  
Expected output:  
  
<pre>  
$ bin/Test ",This,is,a,,test,"  
record[0] = ''  
record[1] = 'This'  
record[2] = 'is'  
record[3] = 'a'  
record[4] = ''  
record[5] = 'test'  
record[6] = ''  
$ </pre>
  
