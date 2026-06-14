let rec quicksort = function 
  | [] -> [] 
  | [x] -> [x]
  | pivot :: q -> 
      let petit, grand = List.partition (fun x -> x < pivot) q in 
      (quicksort petit) @ [pivot] @ (quicksort grand)
      
      (* Si la liste comporte des doublons, on remplace les lignes au dessus par : 
   
      let petit = List.filter (fun x -> x < pivot) l in 
      let egal = List.filter (fun x -> x = pivot) l in 
      let grand = List.filter (fun x -> x > pivot) l in 
      quicksort petit @ egal @ quicksort grand  *);;



let rec random_quicksort = function 
  | [] -> [] 
  | [x] -> [x]
  | l -> 
      let pivot = List.nth l (Random.int (List.length l)) in 
  
      let petit, grand = List.partition (fun x -> x < pivot) l in 
      (quicksort petit) @ (quicksort grand)
                                              
      (* Si la liste comporte des doublons, on remplace les lignes au dessus par : 
   
      let petit = List.filter (fun x -> x < pivot) l in 
      let egal = List.filter (fun x -> x = pivot) l in 
      let grand = List.filter (fun x -> x > pivot) l in 
      random_quicksort petit @ egal @ random_quicksort grand  *);;



let liste = [42; 12; 89; 3; 71; 18; 56; 23; 9; 100; 0; -5; 34];; 
random_quicksort liste;;






