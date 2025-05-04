let () =
    let lexbuf = Lexing.from_channel stdin in
    try
        let ast = Parser.main Lexer.token lexbuf in
        Printf.printf "Parsed successfully!\n"

    with
    | Failure msg -> Printf.eprintf "Lexing/Parsing error: %s\n" msg
    | Parsing.Parse_error -> Printf.eprintf "Syntax error\n"
