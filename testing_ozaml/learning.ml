print_string "Hello, world\n";;

let printHello() = print_endline "git clone";;
printHello();;

(*These are called Variants, they are just like ENUMS*)
type primaryColor = RED | GREEN | BLUE
let r : primaryColor = RED

type point = float * float
(*It's not just a Cirlce -> it's Circles of other datas*)
type shape = 
     | Circle of {center : point; radius: float}
    | Rectangle of {lowerLeft : point; upperRight : point} (*Or tuple with (point * point) -> WOULD BE INSERTED OVER THE STRUCT (Record)*)

let c1 = Circle {center = (0., 0.); radius = 1.}
let r1 = Rectangle {lowerLeft = (-1., -1.); upperRight = (1., 1.)}
