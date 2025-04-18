# 🐙 ELDRITCH RUNES - Python edition

import time

# Eldritch runes
eldritch_runes = ["yogth", "lachn", "ghat"]
blade_of_yog_sothoth = "lachnghatyogth"

print("You sought knowledge, but found only madness. You sought power, and found the power of the chaotic gods...")
print("Grotesque, scaly forms, with vigorous tentacles, full of eyes and mouths, grope you hungrily in the nightmare dimensions, savoring your agony as they flood your mind with profane wisdom...")
print("To rid yourself of the curse, you must recite the word of power: **The Blade of Yog-Sothoth**.")
print("It is formed by three sacred Eldritch Runes inscribed on page 369 of the Necronomicon. When combined in the correct order to form a single word, these alien syllables can sever the curse that has slowly consumed your sanity for months.")
print(f"The eldritch runes of Yog-Sothoth: {eldritch_runes}\n")

time.sleep(2)

def recite_spell(word):
    print("\n🔮 You begin to chant the word of power...")
    time.sleep(1.5)
    
    try:
        if word != blade_of_yog_sothoth:
            raise ValueError("The spell failed! The entities stir... They are FURIOUS.")
    except ValueError as error:
        print(f"❌ {error}")
    else:
        print("✅ Reality trembles... The Blade cuts the veil of madness!")
        print("The entities scream and are banished beyond the thresholds of time.")
    finally:
        print("Beware of what dwells in the dark.\n")

# Loop until the player inputs the right combination
while True:
    attempt = input("Enter the correct rune combination: ").strip().lower()
    recite_spell(attempt)
    
    if attempt == blade_of_yog_sothoth:
        break

print("A suffocating silence fills the dimensions, the veil between dream and reality thickens as you open your eyes to see the padded walls, your arms restrained in a straightjacket.")
