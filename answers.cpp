// MAIN FUNCTION

// 1. Answered.
// 2. main function is the entry point to program's execution process. The main method in Java is declared
//    as static so that the JVM (Java Virtual Machine) can call it directly without needing to create and 
//    instance of the class.
// 3. --------------------------------------------------------------    
//    |    main     |         C++          |       Java            |
//    --------------------------------------------------------------
//    |             | return type is int.  | return type is void.  |
//    | return type | indicates program's  | System.exit() handles | 
//    |             | exit status.         | termination process.  |
//    --------------------------------------------------------------     no AI used, done by human hand!!! 
//    |             | accepts command-line |  accepts a single     |
//    | parametres  | arguments, argc is   |  parameter. String    | 
//    |             | argument count, argv |  Array of arguments.  |
//    |             | is array of pointers |  String[] args.       |
//    --------------------------------------------------------------
//    |             | main is global func. | main function         |
//    |   access    | and doesn't have     | declared with public  |
//    |  modifiers  | explicit access      | and static modifiers. | 
//    |             | modifiers.           |                       |
//    --------------------------------------------------------------
// 4. In C++ the integer return value in main function signifies exit status of the program. 0 indicates successful
//    program execution. In Java, non-zero exit status is achieved by calling System.exit() with non-zero integer argument.


// VARIABLES

// 1. Answered. 
// 2. --------------------------------------------------------------    
//    |     term    |      primitive       |      reference        |
//    --------------------------------------------------------------
//    |             | fixed part of memory | part of memory is for |
//    |    memory   | is allocated where   | reference on stack,   | 
//    |  allocation | var is declared,     | extra memory for data |
//    |             | which is stack       | is allocated on heap. |
//    --------------------------------------------------------------     no AI used, done by human hand!!! 
//    |             | the actual value is  | the stack var stores  |
//    | storage     | stored directly in   | the address of data,  | 
//    |             | memory slot.         | actual data is in     |
//    |             |                      | heap memory.          |
//    --------------------------------------------------------------
// 3. Scope is the region of a program where a declared name(variables in question's case) is valid and 
//    can be accessed or used. Local scope refers to the visibility of names(variables) within specific, limited
//    region of code, typically a function, method, or a block within a method. Class-level scope refers to visibility
//    of names(variables) declared directly within a class definition, but outside of any specific method within that class.
//    They are known as attributes or class variables.
// 4. In statically-typed languages like C++ or Java, the data type of of a variable is checked and determined at 
//    compile time, before program is executed. Once a variable is declared wiht a specific type, its type cant be 
//    changed later in the program. This allows compiler to catching potential type-related errors earlier. In contrast, 
//    in dynamically-typed languages like JS or Python, type checking occurs at runtime, during program's execution.
//    Variables are not explicitly declared with a fixed type. Instead, their type is concluded based on the value they hold.

// CONTROL FLOW

// 1. Answered.
// 2. --------------------------------------------------------------    
//    |     loop    |    condition check   |  execution guarantee  |
//    --------------------------------------------------------------
//    |             | checked before       | the loop body may not |
//    |     while   | the loop body        | execute at all if the | 
//    |             | executes             | condition is initially|
//    |             |                      | false.                | 
//    --------------------------------------------------------------     no AI used, done by human hand!!! 
//    |             | the loop body        | the loop is guaranteed|
//    |   do-while  | executes at least    | to execute at least   | 
//    |             | once, and then checks| once, even if given   |
//    |             | the condition.       | condition is false.   |
//    --------------------------------------------------------------
// 3. A switch statement is a controf flow statement that executes different blocks of code on the value of an
//    experession, providing a cleaner and more readible alternative to multiple if-else statements. Case labels
//    used to define specific matching values, the break statement to exit the switch block after a match, and an
//    option default label to handle cases where no case value matches the expression.
// 4. Short-circuit evaluation means &&, if the first condition is false, the second is not checked; in ||, if the 
//    first condition is true, the second is not checked.