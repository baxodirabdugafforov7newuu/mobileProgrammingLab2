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
//
// FUNCTIONS / METHODS
//
// 1. Answered.
// 2. C++ supports pass-by-value, pass-by-pointer, and pass-by-reference allowing direct or indirect modification of arguments, 
//    whiel Java only uses pass-by-value, where object references are passed by value, allowing modification of object contents
//    but not the reference itself.
// 3. Function/method overloading allows multiple functions with the same name but different parameter lists, and in both C++ and Java,
//    the functions must differ in number, type, or order of parametres - not just return type.
// 4. Recursion is a technique where a function calls itself, and a base case is required stopping condition to avoid infinite calls
//    and ensure correct results.
//
// COMMENTS
//
// 1. Answered
// 2. Comments are important for code maintainability because they help explain the code's purpose and logic, making it easier 
//    for team member's and future members to understand, modify and debugg the code efficiently.
// 3. Documentation comment systems like Javadoc for Java and Doxygen for C++ are used to generate structure, readable documentation
//    from special comments in the code, helping developers understand, use, and maintain the codebase more easily.
// 4. The philosophy "Good code is self-documenting" means code should be written clearly, using meaningful names and structure so that its purpose
//    is easy to understand without needing comments. However, comments are still necessary when explaining complex logic and algorithms, 
//    describing why something is done, documenting assumptions, limitations and side effects, clarifying tricky parts or non-obvious decisions.
//
// CLASSES
//
// 1. Answered.
// 2. A class is a blueprint or template that defines the structure and behaviour(data and methods), while and object(or instance) is a concrete
//    implementation of that class created in memory.
// 3. public, private and protected control access to class members, with public allowing full access, private restricting it to the class, and 
//    protected allowing access to subclasses and related classes.
// 4. A constructor is a special method used to initialize objects when a class is instantiated. A default constructor is a 
//    constructor with no parametres. It is automatically provided by the compiler only if no other constructors are defined in the class.
//
// ENUMS
//
// 1. Answered
// 2. Enums provide type safety, improve code readibility, prevent invalid values, and allow easy grouping of related constants compared to 
//    using strings or integers.
// 3. Enums improve type safety by restricting variables to predefined constant values, preventing invalid assignments, and enhance self-documentation
//    by giving meaningful names to those values, making the code clearer and easier to understand. 
// 4. Java enums are powerful classes with fields and methods providing strong type safety while c++ enums improve type safety over C-style enums but
//    dont support methods or fields natively.
//
// INHERITANCE
//
// 1. Answered
// 2. "is-a" (inheritance) models a subtype relationship where on class extends another, while "has-a" (composition) models ownership where one class
//    contains instances of another. 
// 3. Method overriding lets subclasses redefine superclass methods, with virtual/override in C++ and @Override in Java used to enable
//    and verify correct overriding.
// 4. The Diamond Problem arises from ambigious multiple inheritance; C++ solves it with virtual inheritance to share on ebase class instance, 
//    while Java avoids it by allowing multiple interface inheritance without state. 
//
// MIXINS AND INTERFACES
//
// 1. Answered.
// 2. Mixins and interfaces with default methods enable flexible code reuse by sharing behaviour accross classes without requiring them to 
//    be part of the same inheritance chain.
// 3. Java's default methods in interfaces let you provide method implementations inside interfaces allowing classes to inherit ocmmon behaviour 
//    without needing to extend a class - achieving mixin-like code reuse while keeping flexible inheritance. 
// 4. Inheritance offers easy reuse but is rigit and tightly coupled, composition is flexible and promotes loose coupling but may need more
//    boilerplate, while mixin-like patterns combine behaviours flexibly without strict hierarchies but can introduce method conflicts.
//
