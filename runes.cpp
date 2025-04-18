// 🐙 THE BLADE OF YOG-SOTHOTH - C++ Edition

#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <chrono>
#include <stdexcept>
#include <algorithm>

// Pause utility
void sleep(int milliseconds) {
    std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}

// Spell recitation logic with exception handling
void reciteSpell(const std::string& word, const std::string& correctSpell) {
    std::cout << "\n🔮 You begin to chant the word of power...\n";
    sleep(1500);

    try {
        if (word != correctSpell) {
            throw std::runtime_error("The spell failed! The entities stir... They are FURIOUS.");
        }

        std::cout << "✅ Reality trembles... The Blade cuts the veil of madness!\n";
        std::cout << "The entities scream and are banished beyond the thresholds of time.\n";
    }
    catch (const std::runtime_error& e) {
        std::cout << "❌ " << e.what() << "\n";
    }

    std::cout << "Beware of what dwells in the dark.\n\n";
}

// Main game loop
int main() {
    std::vector<std::string> eldritchRunes = {"yogth", "lachn", "ghat"};
    std::string bladeOfYogSothoth = "lachnghatyogth";

    std::cout << "You sought knowledge, but found only madness. You sought power, and found the power of the chaotic gods...\n";
    std::cout << "Grotesque, scaly forms, with vigorous tentacles, full of eyes and mouths, grope you hungrily in the nightmare dimensions,\n";
    std::cout << "savoring your agony as they flood your mind with profane wisdom...\n";
    std::cout << "To rid yourself of the curse, you must recite the word of power: **The Blade of Yog-Sothoth**.\n";
    std::cout << "It is formed by three sacred Eldritch Runes inscribed on page 369 of the Necronomicon.\n";
    std::cout << "When combined in the correct order to form a single word, these alien syllables can sever the curse\n";
    std::cout << "that has slowly consumed your sanity for months.\n";
    std::cout << "The eldritch runes of Yog-Sothoth: ";

    for (const auto& rune : eldritchRunes) {
        std::cout << rune << " ";
    }

    std::cout << "\n\n";
    sleep(2000);

    std::string attempt;

    while (true) {
        std::cout << "Enter the correct rune combination: ";
        std::getline(std::cin, attempt);

        // Lowercase input
        std::transform(attempt.begin(), attempt.end(), attempt.begin(), ::tolower);

        reciteSpell(attempt, bladeOfYogSothoth);

        if (attempt == bladeOfYogSothoth) {
            break;
        }
    }

    std::cout << "A suffocating silence fills the dimensions, the veil between dream and reality thickens\n";
    std::cout << "as you open your eyes to see the padded walls, your arms restrained in a straightjacket.\n";

    return 0;
}
