(* Fonction auxiliaire : extrait le minimum d'une liste et renvoie (le minimum, la liste sans le minimum) *)
let rec extraire_min = function
  | [] -> failwith "Liste vide"
  | [x] -> (x, [])
  | t :: q ->
      let min_reste, liste_reste = extraire_min q in
      if t < min_reste then (t, q)
      else (min_reste, t :: liste_reste);;

           

let rec tri_selection = function
  | [] -> []
  | l ->
      let min, reste = extraire_min l in
      min :: tri_selection reste;;
        

        
let a = [42; 0; 89; 12; 3; 71; -5; 18; 56; 23; 9; 100; 34]
let resultat = tri_selection a;;