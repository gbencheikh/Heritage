#include "rectangle.h"
#include <gtest/gtest.h>

// Test du constructeur par défaut
TEST(RectangleTest, DefaultConstructor) {
    rectangle r;
    EXPECT_EQ(r.getLongueur(), 0);
    EXPECT_EQ(r.getLargeur(), 0);
    EXPECT_EQ(r.getPerimetre(), 0);
    EXPECT_EQ(r.getAire(), 0);
}

// Test du constructeur avec paramètres
TEST(RectangleTest, ParameterizedConstructor) {
    rectangle r(5, 3);
    EXPECT_EQ(r.getLongueur(), 5);
    EXPECT_EQ(r.getLargeur(), 3);
    EXPECT_EQ(r.getPerimetre(), 16); // 2 * (longueur + largeur)
    EXPECT_EQ(r.getAire(), 15);     // longueur * largeur
}

// Test de la méthode getLongueur
TEST(RectangleTest, GetLongueur) {
    rectangle r(7, 4);
    EXPECT_EQ(r.getLongueur(), 7);
}

// Test de la méthode getLargeur
TEST(RectangleTest, GetLargeur) {
    rectangle r(6, 2);
    EXPECT_EQ(r.getLargeur(), 2);
}

// Test de la méthode getPerimetre
TEST(RectangleTest, GetPerimetre) {
    rectangle r(8, 3);
    EXPECT_EQ(r.getPerimetre(), 22); // 2 * (longueur + largeur)
}

// Test de la méthode getAire
TEST(RectangleTest, GetAire) {
    rectangle r(9, 5);
    EXPECT_EQ(r.getAire(), 45); // longueur * largeur
}

// Test de la méthode to_string
TEST(RectangleTest, ToString) {
    rectangle r(4, 2);
    std::string expected_info = "l'objet est un rectangle : longueur = 4, largeur = 2, Perimetre = 12, Aire = 8";
    EXPECT_EQ(r.to_string(), expected_info);
}
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}