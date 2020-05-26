### Learn by Exemple

#  Exemple 1: Get Your Compile Working!

    --> Setting up the Compile C++ on Linux

    --> To establish that your Linux/Unix system has the correct C++ compiler installed, at the Terminal type this: 
        --     g++ -v
    
    --> if ithe setup it's correctly a msg it will show up in your terminal :
        --     gcc version 9.3.0 (Ubuntu 9.3.0-10ubuntu2)
    
    --> Now Create a file for compile your first cpp programm: in your terminal type:
        --     touch temp.cpp
   
    --> Now let's compile type: 
        --     g++ temp.cpp    // in this moment will show up a file named a.out let's run
        --     ./a.out
    
    --> in this moment will show the content of your programm like this:
        --     Hello World!

    --> Simple hum!

    --> It's likely that you worked through the details of this program in the tutorial, so we will not 
        provide a line-by-line description here. There are a few things to notice, however, regarding readability. This refers to comments and formatting that help make programs easy to read, understand and maintain.

        (*)Every program we write begins with a header comment, providing the name of the author, their contact information, a short description, and usage (if relevant). Every function begins with a comment on operation and usage.
    
        (*)We add explanatory comments using full sentences, whenever the code does not document itself, for example, if the processing is tricky, non-obvious, interesting, or important.

        (*)Always use descriptive names: variables are lower-case words separated by _, as in my_variable. Function names use upper-case letters to mark words, as in MyExcitingFunction(). Constants start with a "k" and use upper-case letters to mark words, as in kDaysInWeek.

        (*)Indentation is in multiples of two. The first level is two spaces; if further indentation is needed, we use four spaces, six spaces, etc.


        (code)  ex:1
            // hello.cpp: Maggie Johnson
            // Description: a program that prints the immortal saying "hello world"

            #include <iostream>
            using namespace std;

            int main() {
            cout << "Hello World!" << endl;
            return 0;
            }

        (code)
# Example 2: Get some input

    --> It's easy to get input from the keyboard in 
        C++ using cin. Here is an example:

    <code>
        // get_input.cpp: Maggie Johnson
        // Description: Illustrate the use of cin to get input.

        #include <iostream>
        using namespace std;

        int main() {
        int input_var = 0;
        // Enter the do while loop and stay there until either
        // a non-numeric is entered, or -1 is entered. Note that
        // cin will accept any integer, 4, 40, 400, etc.
        do {
            cout << "Enter a number (-1 = quit): ";
            // The following line accepts input from the keyboard into
            // variable input_var.
            // cin returns false if an input operation fails, that is, if
            // something other than an int (the type of input_var) is entered.
            if (!(cin >> input_var)) {
            cout << "You entered a non-numeric. Exiting..." << endl;
            break;
            // exit the do while loop
            }
            if (input_var != -1) {
            cout << "You entered " << input_var << endl;
            }
        } while (input_var != -1);
        cout << "All done." << endl;
        return 0;
        }
    <code>

#  Example 3: What does this program output?

    <code>
        #include <iostream>
        using namespace std;

        int main() {
        cout << " 1\t2\t3\t4\t5\t6\t7\t8\t9" << endl << "" << endl;
        for (int c = 1; c < 10; c++) {
            cout << c << "| ";
            for (int i = 1; i < 10; i++) {
            cout << i * c << '\t';
            }
            cout << endl;
        }
        return 0;
        } 
    <code>

# Example 4: Decomposing makes everything easier...

    --> Time for us to start writing computer games! This first one will be a bit simple, but it's a start. Our task is to write a program that implements a guessing game. Our program generates a random number between 0 and 100. The player must guess the secret number. The program provides hints like "that's too high" or "that's too low" until the player finally guesses the secret number. 

    --> We will work on this game in three steps. 

    (*) Figure out how to generate a random number within a given range of values.
    (*) Create a main function that processes one guess from the player, and provides hints.
    (*) Add what we need to allow for multiple guesses until the player guesses the number.

    This process of development is called decomposition, which means breaking a task into sub-tasks, each of which is easy to do.

    Starting with step 1, do a Google search to see how to generate a random number using C++. Try searching on "rand C++". Here is our solution. 

    For step 2, we need to receive an integer input from the player (with appropriate error-checking on cin), and check it against the secret number. Try and write this part of the game yourself before checking our solution. 

    <code>
        
