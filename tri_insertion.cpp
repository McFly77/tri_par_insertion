//
// Created by etudiant on 22-05-06.
//

#include "tri_insertion.h"
/*
 * \ fn tri_insertion
 * \ brief Fonction qui fait le tri lors de l'insertion de nouveaux
 *         elements en ordre croissant.
 * \ param [in] reference sur un vecteur v contenant des int
 * \ return Une liste trier
 * */
void tri_insertion(std::vector<int>& v) {
    if (v.empty()) throw std::runtime_error("Liste vide");
    if (v.size() == 1) return;
    for (int i = 1; i < v.size(); ++i) {
        int j = i;
        while ((j > 0) && (v.at(j) < v.at(j-1))){
            std::swap(v.at(j), v.at(j-1));
            j--;
        }
    }
    return;
}
