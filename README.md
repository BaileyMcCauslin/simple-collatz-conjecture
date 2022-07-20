<h1> Simple Collatz Conjucture Program</h1>
<h2>Collatz</h2>
<p>It's a piecewise function that takes in any whole number( n ) and does an operation based on it's parity and returns n back to the function. Allowing for an easy recursive implementation.</p>
<h1>Compile</h1>
<blockquote>gcc -Wall collatz.c -o run</blockquote>
<h2>Conjecture Loops</h2>
<p>
  Loops differ by type of whole number. If the whole number is positive then the collatz conjecture holds the
  statement that every number shall land in the 4,2, and 1 loop.
  Negative whole numbers, although not proposed in the collatz conjecture, suffer a similar fate. 
  For negative whole number, there are 3 possible loop outcomes:
  <blockquote>
  1. -1→-2→-1 <br>
  2. -5→-14→-7→-20→-10→-5 <br>
  3. -17→-50→-25→-74→-37→-110→-55→-164→-41→-122→-61→-182→-91→-272→-136→-68→-34→-17
  </blockquote>
 </p>
 
 <h2> n + 1 </h2>
 <p>Collatz conjecture proposes 3n + 1. However, just n + 1 provides the same outcome of the 4,2, and 1 loop. Just a fun fact and included in the program.</p>
 
