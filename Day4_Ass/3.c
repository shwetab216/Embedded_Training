#.Why inline  function needs static storage  class?
Ans:
If we use inline function definition  in multiple file it will give error i.e duplicate function definition 
Also, External linkage problem occur.
So avoid this problem we have to use static with inline .
If we want to keep inline function  entirely private in that case we nedd to use staric with insline function 
