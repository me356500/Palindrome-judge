# NCTU 上機考
  A palindrome is a string that reads the same from the left as it does from the right.<br>
For example,<b>"I"</b>,<b>"GAG"</b>and<b>"CCCC"</b> are palindromes ,but <b>"ADAM"</b> is not.<br>
  From any non-palindromic string, you sometimes might find a continuous palindromic string in it.<br>
For example, given the string <b>"ADAM"</b>, you can get a palindrome <b>"ADA"</b> in it.<br>
  Write a program to determine the longest continuous palindrome you can get from a string,<br>
and we consider lowercase alphabets and uppercase alphabets as the same one.<br>
# Input 
  The first line of input contains an integer T(<=100).Each of the next line is a string,<br>
whose length is always less than 20, and you can assume the string will only have alphabets.<br>
# Output
  For each input string,your program should using uppercase alphabets to print the longest palindrome<br>
you can get from it, the palindrome's length might be 1, and if there is multiple longest palindrome in string,<br>
please print the first one in dictionary order.<br>
# Sample_Input_1:
5<br>
pullup<br>
amda<br>
abbaccc<br>
oaoa<br>
ccccaba
# Sample_Output_1:
PULLUP<br>
A<br>
ABBA<br>
AOA<br>
CCCC
# Sample_Input_2:
3<br>
GAG<br>
MADAM<br>
ADAM
# Sample_Output_2:
GAG<br>
MADAM<br>
ADA
