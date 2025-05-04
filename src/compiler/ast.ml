type expressions = 
    | Int of int
    | Var of string
    | Add of expressions * expressions
    | Sub of expressions * expressions
    | Mul of expressions * expressions
    | Div of expressions * expressions
