#include <wiringPi.h>
int main (void)
{
	wiringPiSetup ();
	pinMode (1,OUTPUT);
	 for(;;)
 	  {
 	    digitalWrite (1,HIGH); delay (90000);
	    digitalWrite (1,LOW); delay (90000);
       	  }
return 0;
}