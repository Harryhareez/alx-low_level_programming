#include &lt;stdio.h&gt;

#include &lt;stdlib.h&gt;

#include &lt;time.h&gt;

/**

* main - Entry point

*

* Return: Always 0 (Success)

*/

int main(void)

{

int n;

srand(time(0));

n = rand() - RAND_MAX / 2;

/* your code goes there */

if (n &gt; 0)

{

printf(&quot;%d is positive\n&quot;, n);

}

if (n &lt; 0)

{

printf(&quot;%d is negative\n&quot;, n);

}

if (n == 0)

{

printf(&quot;%d is zero\n&quot;, n);

}

return (0);

}
