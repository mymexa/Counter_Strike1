Building:
1. Clone repo.
2. Cd Build dir
3. Type "cmake .." to build objects
4. Type "make" to build executable.

Running tests:
1. Copy the counter_strike executable to dir Tests/real
2. Run the Testscript.sh by typing "bash Testscript.sh"

The script will loop counter_strike through all 10 inputs and compare program output to the provided 10 output.txt.
You should get:

Files test.001.out.txt and - are identical
Files test.002.out.txt and - are identical
Files test.003.out.txt and - are identical
Files test.004.out.txt and - are identical
Files test.005.out.txt and - are identical
Files test.006.out.txt and - are identical
Files test.007.out.txt and - are identical
Files test.008.out.txt and - are identical
Files test.009.out.txt and - are identical
Files test.010.out.txt and - are identical

This means that the program is running as intended.
