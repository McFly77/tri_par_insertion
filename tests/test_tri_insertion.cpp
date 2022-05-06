//
// Created by etudiant on 22-05-06.
//
# include "gtest/gtest.h"
#include "tri_insertion.h"

TEST(tri_insertion, liste_vide_exception) {
    std::vector<int>v;
    EXPECT_THROW(tri_insertion(v), std::runtime_error);
}

TEST (tri_insertion, liste_un_element_inchange) {
    std::vector<int> v{1};
    std::vector<int> v_attendu{1};
    tri_insertion(v);
    EXPECT_EQ(v_attendu, v);
}

TEST (tri_insertion, liste_deux_element_inchange) {
    std::vector<int> v{1,1};
    std::vector<int> v_attendu{1,1};
    tri_insertion(v);
    EXPECT_EQ(v_attendu, v);
}

TEST (tri_insertion, liste_cinq_elements_tri) {
    std::vector<int> v{5,4,3,2,1};
    std::vector<int> v_attendu{1,2,3,4,5};
    tri_insertion(v);
    EXPECT_EQ(v_attendu, v);
}

TEST (tri_insertion, liste_cinq_element_repete_tri) {
    std::vector<int> v{5,1,5,2,1};
    std::vector<int> v_attendu{1,1,2,5,5};
    tri_insertion(v);
    EXPECT_EQ(v_attendu, v);
}