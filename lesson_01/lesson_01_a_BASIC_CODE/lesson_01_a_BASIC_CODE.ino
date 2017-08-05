/**
 * Lesson 1.a: Basic code
 *
 * The goal of this lesson is to introduce the C language and the Arduino IDE (Energia).
 *
 * File > New opens a new "Sketchbook", which is where the code is written. File > Examples contains 
 * several example programs that [theroretically] will run on your board out-of-the-box.
 *
 * Tools > Serial Monitor contains the window that chows the console output of your program. At default
 * values, it should run well with a Serial command configurate for a Baud rate of 9600 (the exact
 * definition of what this all means is beyond the scope of today's tutorial).
 *
 * Use Tools > Board and Tools > Port to ensure your install of Energia properly configured to
 * program your board as it is connect to your computer's COM port (check "Device Manager" in
 * windows with your MCU connect to find which COM port is correct)
 *
 * The rest of this tutorial focuses on basic constucts of the given programming language.
 *
 */

/*
 * This #define statement is called a "preprocessor directive". Its syntax is as follows:
 *   #define <variable_name>  <variable value>
 * Everywhere the variable is written in the code, the compiler replaces that name with it value.
 * Good practice is to capitalize every letter of this macro statement (that's the name of the name of
 * the variable. The value can be any numeric type or string literal (a series of characters between
 * two quote marks) or char (a single character between two apostrophe marks)
 *
 * Preprocesr directives (or macros) such as #define, #include, #ifdef, and many others should always be
 * declared at the top of your file
 */
#define MY_DEF 5;

/*
 * This is a variable, but a special kind: it's a constant (as shown by the key word "const"). It behaves
 * similarly to the defined macro shown previously, but instead of the compiler changing values in your,
 * the MCU stores a value in memory that contains your value and it is "encapsulated" by the variable
 * name.
 *
 * To understand when to use a #define or a const variable, check Google.
 */
const int MY_VAR = 5;

/*
 * This is a struct, it is used to encapsulate several fields of data in one structure. The keyword
 * typedef allows the program to define the struct name as a local keyword, so it acts like int or
 * double.
 */
typdef struct{
 int a;
 int b;
 double c; 
} myStruct_t;

/*
 * This is the declaration of a function. In C/C++, a function must be declared before it can be defined.
 * Good practice is to put all function declarations in a header file (.h) and all function definitions
 * in a source code file (.cpp or .c). Functions will be discussed further below.
 */
int myFunction(int a);

/*
 * This is a function. It's name is setup. The () means it has no parameters, meaning the function runs
 * without external values passed to it. It's return type is void, meaning it does not return any value.
 * The lines of code between the {} is the body of the function. Calling the name and parameters in the
 * program will execute all lines of code in the body of the function.
 */
void setup()
{
  // put your setup code here, to run once:
  
}

void loop()
{
  // put your main code here, to run repeatedly:
  
}

int myFunction(int a)
{
  return a/2;  
}
