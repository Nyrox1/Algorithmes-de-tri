let rec fusion l1 l2 =
  match l1, l2 with
  | [], l | l, [] -> l
  | x1 :: r1, x2 :: r2 ->
      if x1 <= x2 then 
        x1 :: fusion r1 l2
      else 
        x2 :: fusion l1 r2

          

let rec decoupe = function
  | [] -> [], []
  | [x] -> [x], []
  | x :: y :: reste ->
      let l1, l2 = decoupe reste in
      x :: l1, y :: l2
      
               

let rec tri_fusion = function
  | [] -> []
  | [x] -> [x]
  | l ->
      let l1, l2 = decoupe l in
      fusion (tri_fusion l1) (tri_fusion l2)



let liste = [42; 12; 89; 3; 71; 18; 56; 23; 9; 100; 0; -5; 34];; 
tri_fusion liste;;






