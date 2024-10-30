<h2>Problem:</h2>
<p>Define a Student structure with members name, rollno, marks. Make sure the member name should be allocated dynamic memory. Create an instance of Student structure and take user input to show values of all member variables.</p>

<h3>Solution Approach:</h3>
<ul>
    <li>Defined a structure named as 'Student' with type definition 'Student' with member variables name, rollno, marks, where name is defined as a pointer to allocate memory dynamically afterwards.</li>
    <li>Inside the main function defined an instance of Student structure with reference name 'student' and then stored the address of this instance within another pointer variable named 'stud_ptr'.</li>
    <li>Then asked the user to enter the number of characters present in student's name, so that we can allocate memory accordingly.</li>
    <li>Just after, used getchar() to avoid newline character in the input buffer.Dynamically allocated memory for student's name using malloc.</li>
    <li>Then started taking inputs for all the member variables of student. Used fgets() for string input which takes arguments as variable, string_length, input_type and scanf() for other inputs.</li>
    <li>Now, printed all the details of student instance.</li>
    <li>Lastly, freed the memory allocated for student name using malloc to make sure that the code shouldn't be prone to memory leakage.</li>
    <li>Important thing to note is that, when we use pointer for a structure instance and try to access the member variables using that pointer, we need to use '->' operator instead of '.' operator.</li>
</ul>
