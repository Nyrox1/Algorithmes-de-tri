(* Fonction auxiliaire : insère un élément x à sa place dans une liste déjà triée *)
let rec inserer x = function
  | [] -> [x]
  | t :: q -> 
      if x < t then x :: t :: q 
      else t :: (inserer x q)

(* Fonction principale du tri par insertion *)
let rec tri_insertion = function
  | [] -> []
  | t :: q -> inserer t (tri_insertion q);;

                
let a = [42; 12; 0; 89; 3; 71; -5; 18; 56; 23; 9; 100; 34]
let resultat = tri_insertion a;;
  