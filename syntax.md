```
/*
 *  ______   __   __   ______   ______    ______     ________  ______   ______      
 * /_____/\ /_/\ /_/\ /_____/\ /_____/\  /_____/\   /_______/\/_____/\ /_____/\     
 * \:::_ \ \\:\ \\ \ \\::::_\/_\:::_ \ \ \:::_ \ \  \__.::._\/\:::_ \ \\::::_\/_    
 *  \:\ \ \ \\:\ \\ \ \\:\/___/\\:(_) ) )_\:(_) ) )_   \::\ \  \:\ \ \ \\:\/___/\   
 *   \:\ \ \ \\:\_/.:\ \\::___\/_\: __ `\ \\: __ `\ \  _\::\ \__\:\ \ \ \\::___\/_  
 *    \:\_\ \ \\ ..::/ / \:\____/\\ \ `\ \ \\ \ `\ \ \/__\::\__/\\:\/.:| |\:\____/\ 
 *     \_____\/ \___/_(   \_____\/ \_\/ \_\/ \_\/ \_\/\________\/ \____/_/ \_____\/ 
 *                          From: 20241031 @00:06
 *                         ------------------------
 *
 */
```
# **Introduction**:
--------------------------
***Core***: is a Statictly-Typed interpreted Language, it is the preamble to what is to come for the future

-----------------------------

## Basic Functionality:
-------------------------------

# ***Declaring a variable***:
*Before* we talk about the different ***Data Types***, we are going to show a simple declaration:
```
//declare explicity
int value = 5;
//or
value := 5;

// Coments in Core
/* Multi-line comments
 * In Core :)
 */
```
## Different operations
```
+ //plus
- //subtract
/ //divide
* //multiply
** //power (x) -> (x * x)
+= // plus 1 (value = value + n)
-= // minus 1 (value = value - n)
:= // Assignment operator (unknown type)
```
------------------------------
# ***Conditionals***
```
if (foo < bar) {
    sum := foo + bar
} else if (bar > foo) {
    sum := bar + foo
} else {
    //blah...
} 

```
--------------------------
# ***Switch Statement***
```
switch (foo) {
    case bar < 5 -> {
        //if multiple values then you need {}
        bar += 5;
        // ANOTHER case where you do not need ;semi-colon it is (optional)
        break
    }
    case bar == 0 -> break //example of not using {} because it is not a mult-line
}
```
---------------------------
# ***

-------------------------------
# ***Functions***
```
func addFunction(int x, int y) -> int {
    //in certain cases you do not need to use (return keyword OR semi colon) and that is because we already know the return type -> **INT**
    sum := x + y;
    sum
}
```

---------------------------
# Definine a Class (yes their will be some OOP)

```
class Human {
    //contents...
}
```
## Constructors
```
class Human {
    int age;
    String name;
    _Human(int age, String name) {
        //_ underscore(Name) is private by default, if you want public you can just do Name of class Human(...){}
    }
}
```
### Initializing a Constructor 
```
class Human {
    String name;
    int age;
    _Human(String name, int age) {
        c.name = name;
        c.age = age; //c -> class reference variable the (class) age variable -> age
    }
}
```

## Methods
```
class Human {
    String name;
    int age;
    _Human(String name, int age) {
        //...
    }
    meth addVariable(int x, int y) { return x + y; }
}
Human myHuman = new Human("Andrew", 25);
                         //{[0]    [1]}
printf("My mame is {myHuman.name}") //output "5"

```

### Here is an important list of features:
------------------------------------------
_oneUnderscore  | private variable/func/method/class   |
__twoUnderScore | protected variable/func/method/class | 
-----------------------------------------------------











