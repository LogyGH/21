#include "Funcs.h"

void Shuffle(bool baCardsDealt[]) {
	for (int iIndex = 0; iIndex < 52; ++iIndex) {
		baCardsDealt[iIndex] = false;
	}
}

std::string PrintCard(int iCard) {
	// Print Rank
	const int kiRank = (iCard % 13);
	std::string card = "";
	if (kiRank == 0) {
		card.append("A");
	}
	else if (kiRank < 9) {
		card.append(std::to_string(kiRank + 1));
	}
	else if (kiRank == 9) {
		card.append("K");
	}
	else if (kiRank == 10) {
		card.append("J");
	}
	else if (kiRank == 11) {
		card.append("Q");
	}
	else {
		card.append("10");
	}
	// Print Suit
	const int kiSuit = (iCard / 13);
	if (kiSuit == 0) {
		card.append("C");
	}
	else if (kiSuit == 1) {
		card.append("D");
	}
	else if (kiSuit == 2) {
		card.append("H");
	}
	else {
		card.append("S");
	}
	return card;
}

std::string PrintHand(int iaHand[], const int kiCardCount) {
	std::string cards = "";
	for (int iCardIndex = 0; iCardIndex < kiCardCount; ++iCardIndex) {
		const int kiNextCard = iaHand[iCardIndex];
		cards.append(PrintCard(kiNextCard));
		cards.append("  ");
	}
	return cards;
}

int GetNextCard(bool baCardsDealt[]) {
	bool bCardDealt = true;
	int iNewCard = -1;
	do {
		iNewCard = (rand() % 52);
		if (!baCardsDealt[iNewCard]) {
			bCardDealt = false;
		}
	} while (bCardDealt);
	return iNewCard;
}

int ScoreHand(int iaHand[], const int kiCardCount) {
	int iAceCount = 0;
	int iScore = 0;
	for (int iCardIndex = 0; iCardIndex < kiCardCount; ++iCardIndex) {
		const int kiNextCard = iaHand[iCardIndex];
		const int kiRank = (kiNextCard % 13);
		if (kiRank == 0) {
			++iAceCount;
			++iScore;
		}
		else if (kiRank < 9) {
			iScore = iScore + (kiRank + 1);
		}
		else {
			iScore = iScore + 10;
		}
	}
	while (iAceCount > 0 && iScore < 12) {
		--iAceCount;
		iScore = iScore + 10;
	}
	return iScore;
}