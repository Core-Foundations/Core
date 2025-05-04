%{open Ast}%
%token <int> Int
%token PLUS MINUS TIMES DIVIDE
%token EOF
%start <Ast.expression> main

main:
    | expression EOF {$1}

expression:
    | term {$1}
    | expr PLUS term { Add ($1, $3) }
    | expr MINUS term { Sub ($1, $3) }

term:
  | factor { $1 }
  | term TIMES factor { Mul ($1, $3) }
  | term DIVIDE factor { Div ($1, $3) }

factor:
  | INT { Int $1 }
  (* Extend here for variables, parenthesized expressions, etc. *)
