<h2>Problem:</h2>
<p>Write a c program to replace 0 and 1 in a number.</p>

<h3>Solution Approach:</h3>
<ul>
    <li>Defined an array of character to store a number as string and prompted the user to input a number.</li>
    <li>Then defined a for loop from 0 to length of the array and searched if any '0' or '1' is there in any index.</li>
    <li>If any '0' or '1' is present then simply swap it with the other one by using <b>ternary operator</b>.</li>
    <li>Lastly, printed the manipulated number.</li>
    <li>The reason behind doing all the functions with string is to make the code compatible for all types of numbers including negative, float and <b>specifically the number that starts with a '0' as the compiler considers it without '0' in left.</b></li>
</ul>
