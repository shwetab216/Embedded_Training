 How the arguments passed or pushed to other function and how it assigns the value to arguments. Explain using diagram for below example
int main()
{
  while(1)
  {
  	data_var acq(int a, int b, int c)
  }
}

void data_acq(int x, int y, int z)
{
	....	
}

Ans: 


-main() executed
method  var values Address
main()              1024

-data_acq() called
method    var values Address
data_acq  a   10     1026
          b   20     1028
          c   30     1030

-data_acq()  executed

method      var  valyes Address
data_acq()  x     10    1032
	    y     20    1034
            z     30    1036

