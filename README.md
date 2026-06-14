# Algorithmes de tri

Implémentation d'algorithmes de tri.

---

## 📝 Tris implémentés

1. 📊 Tri par Sélection (C et OCaml)
2. 📊 Tri par Insertion (C et OCaml)
3. 📊 Tri Fusion (C et OCaml)
4. 📊 Tri par Tas (C)
5. 📊 Tri Rapide (C et OCaml)

---

# 📉 Complexités des algorithmes

---

## 1. Tri par Sélection

Le tri par sélection repose sur la recherche du minimum pour le placer à la fin de la zone triée.

* **Complexité :** $\mathcal{O}(n^2)$

---

## 2. Tri par Insertion

Le tri par insertion construit le tableau trié élément par élément en insérant chaque nouvelle clé à sa juste place parmi les éléments déjà triés.

* **Meilleur cas :** $\mathcal{O}(n)$ (Tableau déjà trié)
* **Complexité en moyenne :** $\mathcal{O}(n^2)$
* **Pire cas :** $\mathcal{O}(n^2)$ (Tableau trié à l'envers)

---

## 3. Tri Fusion

Le tri fusion applique la stratégie "Diviser pour régner" en découpant le problème en sous-problèmes indépendants, puis en fusionnant les résultats triés.

* **Complexité :** $\mathcal{O}(n \log n)$

---

## 4. Tri par Tas

Le tri par tas utilise une structure de tas binaire avec la propriété de **tas max** (chaque parent est supérieur à ses enfants) pour extraire à chaque fois le plus grand élément.

* **Complexité :** $\mathcal{O}(n \log n)$

---

## 5. Tri Rapide

Le tri rapide choisit un élément "pivot", place les éléments plus petits à gauche, les plus grands à droite, puis recommence récursivement sur les deux côtés.

* **Meilleur cas :** $\mathcal{O}(n \log n)$ (Le pivot coupe le tableau en deux parts égales)
* **Complexité moyenne :** $\mathcal{O}(n \log n)$ (que l'on peut obtenir en prenant le pivot de manière aléatoire)
* **Pire cas :** $\mathcal{O}(n^2)$ (Le pivot isole à chaque fois un seul élément)


---

