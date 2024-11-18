#include "carre.h"
#include <gtest/gtest.h>

// Test du constructeur par défaut
TEST(CarreTest, DefaultConstructor) {
    carre c;
    EXPECT_EQ(c.getCote(), 0);
    EXPECT_EQ(c.getPerimetre(), 0);
    EXPECT_EQ(c.getAire(), 0);
}

// Test du constructeur avec paramètre
TEST(CarreTest, ParameterizedConstructor) {
    carre c(5);
    EXPECT_EQ(c.getCote(), 5);
    EXPECT_EQ(c.getPerimetre(), 20); // 4 * côté
    EXPECT_EQ(c.getAire(), 25);     // côté * côté
}

// Test de la méthode getCote
TEST(CarreTest, GetCote) {
    carre c(7);
    EXPECT_EQ(c.getCote(), 7);
}

// Test de la méthode getPerimetre
TEST(CarreTest, GetPerimetre) {
    carre c(4);
    EXPECT_EQ(c.getPerimetre(), 16); // 4 * côté
}

// Test de la méthode getAire
TEST(CarreTest, GetAire) {
    carre c(6);
    EXPECT_EQ(c.getAire(), 36); // côté * côté
}

// Test de la méthode afficheInfo
TEST(CarreTest, AfficheInfo) {
    carre c(3);
    std::string expected_info = "l'objet est un cube : Cote = 3, Perimetre = 12, Aire = 9";
    EXPECT_EQ(c.afficheInfo(), expected_info);
}
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
