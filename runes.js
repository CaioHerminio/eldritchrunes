// 🐙 ELDRITCH RUNES - JavaScript edition

// Eldritch runes
const eldritchRunes = ["yogth", "lachn", "ghat"];
const bladeOfYogSothoth = "lachnghatyogth";

console.log("You sought knowledge, but found only madness. You sought power, and found the power of the chaotic gods...");
console.log("Grotesque, scaly forms, with vigorous tentacles, full of eyes and mouths, grope you hungrily in the nightmare dimensions, savoring your agony as they flood your mind with profane wisdom...");
console.log("To rid yourself of the curse, you must recite the word of power: **The Blade of Yog-Sothoth**.");
console.log("It is formed by three sacred Eldritch Runes inscribed on page 369 of the Necronomicon. When combined in the correct order to form a single word, these alien syllables can sever the curse that has slowly consumed your sanity for months.");
console.log(`The eldritch runes of Yog-Sothoth: ${eldritchRunes.join(", ")}\n`);

// Simulate delay
function delay(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
}

async function reciteSpell(word) {
    console.log("\n🔮 You begin to chant the word of power...");
    await delay(1500);
    
    if (word !== bladeOfYogSothoth) {
        console.log("❌ The spell failed! The entities stir... They are FURIOUS.");
    } else {
        console.log("✅ Reality trembles... The Blade cuts the veil of madness!");
        console.log("The entities scream and are banished beyond the thresholds of time.");
    }

    console.log("Beware of what dwells in the dark.\n");
}

// Loop until the player inputs the right combination
(async function() {
    let attempt = "";
    while (attempt !== bladeOfYogSothoth) {
        attempt = prompt("Enter the correct rune combination: ").toLowerCase().trim();
        await reciteSpell(attempt);
    }

    console.log("A suffocating silence fills the dimensions, the veil between dream and reality thickens as you open your eyes to see the padded walls, your arms restrained in a straightjacket.");
})();
