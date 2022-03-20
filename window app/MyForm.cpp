#include "MyForm.h"
#include "Funcs.h"

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	BlackJack::MyForm form;
	Application::Run(% form);
}

bool CARDS_IN_DECK[52];
int HOUSE_CARD_COUNT = 0;
int HOUSE_HAND[12];
int PLAYER_CARD_COUNT = 0;
int PLAYER_HAND[12];
int PLAYER_SCORE = 0;
int HOUSE_SCORE = 0;

System::Void BlackJack::MyForm::buttonHit_Click(System::Object^ sender, System::EventArgs^ e)
{
	PLAYER_HAND[PLAYER_CARD_COUNT] = GetNextCard(CARDS_IN_DECK);
	++PLAYER_CARD_COUNT;
	
	std::string cards;
	cards = PrintHand(PLAYER_HAND, PLAYER_CARD_COUNT);
	textBoxPlayerHand->Text = msclr::interop::marshal_as<String^>(cards);
	PLAYER_SCORE = ScoreHand(PLAYER_HAND, PLAYER_CARD_COUNT);
	textBox2->Text = msclr::interop::marshal_as<String^>(std::to_string(PLAYER_SCORE));
	if (PLAYER_SCORE > 21) {
		cards = PrintHand(HOUSE_HAND, HOUSE_CARD_COUNT);
		textBoxHouseHand->Text = msclr::interop::marshal_as<String^>(cards);
		HOUSE_SCORE = ScoreHand(HOUSE_HAND, HOUSE_CARD_COUNT);
		textBoxHouseRes->Text = msclr::interop::marshal_as<String^>(std::to_string(HOUSE_SCORE));
		MessageBox::Show("You Lose! You can see results of the game in appropriate fields.", "BUST!");
		buttonHit->Hide();
		buttonEnd->Hide();
		buttonStop->Hide();
		buttonStart->Show();
	}
	return System::Void();
}

System::Void BlackJack::MyForm::buttonStop_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string cards;
	HOUSE_SCORE = ScoreHand(HOUSE_HAND, HOUSE_CARD_COUNT);
	while (HOUSE_SCORE < 17) {
		HOUSE_HAND[HOUSE_CARD_COUNT] = GetNextCard(CARDS_IN_DECK);
		++HOUSE_CARD_COUNT;
		HOUSE_SCORE = ScoreHand(HOUSE_HAND, HOUSE_CARD_COUNT);
	}
	cards = PrintHand(HOUSE_HAND, HOUSE_CARD_COUNT);
	textBoxHouseHand->Text = msclr::interop::marshal_as<String^>(cards);
	HOUSE_SCORE = ScoreHand(HOUSE_HAND, HOUSE_CARD_COUNT);
	textBoxHouseRes->Text = msclr::interop::marshal_as<String^>(std::to_string(HOUSE_SCORE));
	if (HOUSE_SCORE > 21) {
		MessageBox::Show("You Win! You can see results of the game in appropriate fields.", "WIN!");
	}
	else if (HOUSE_SCORE > PLAYER_SCORE) {
		MessageBox::Show("You Lose! You can see results of the game in appropriate fields.", "LOSE!");
	}
	else if (HOUSE_SCORE == PLAYER_SCORE) {
		MessageBox::Show("Tie! You can see results of the game in appropriate fields.", "TIE!");
	}
	else if (HOUSE_SCORE < PLAYER_SCORE) {
		MessageBox::Show("You Win! You can see results of the game in appropriate fields.", "WIN!");
	}
	buttonHit->Hide();
	buttonEnd->Hide();
	buttonStop->Hide();
	buttonStart->Show();
	return System::Void();
}

System::Void BlackJack::MyForm::buttonStart_Click(System::Object^ sender, System::EventArgs^ e)
{
	time_t qTime;
	time(&qTime);
	srand(qTime);
	buttonHit->Show();
	buttonEnd->Show();
	buttonStop->Show();
	buttonStart->Hide();
	textBoxHouseHand->Text = L"";
	textBoxHouseRes->Text = L"";
	textBoxPlayerHand->Text = L"";
	textBox2->Text = L"";
	Shuffle(CARDS_IN_DECK);
	PLAYER_HAND[0] = GetNextCard(CARDS_IN_DECK);
	HOUSE_HAND[0] = GetNextCard(CARDS_IN_DECK);
	PLAYER_HAND[1] = GetNextCard(CARDS_IN_DECK);
	HOUSE_HAND[1] = GetNextCard(CARDS_IN_DECK);
	HOUSE_CARD_COUNT = 2;
	PLAYER_CARD_COUNT = 2;
	
	std::string cards = "**  ";
	cards.append(PrintCard(HOUSE_HAND[1]));
	textBoxHouseHand->Text = msclr::interop::marshal_as<String^>(cards);
	cards = PrintHand(PLAYER_HAND, PLAYER_CARD_COUNT);
	textBoxPlayerHand->Text = msclr::interop::marshal_as<String^>(cards);
	PLAYER_SCORE = ScoreHand(PLAYER_HAND, PLAYER_CARD_COUNT);
	textBox2->Text = msclr::interop::marshal_as<String^>(std::to_string(PLAYER_SCORE));

	if (PLAYER_SCORE == 21) {
		cards = PrintHand(HOUSE_HAND, HOUSE_CARD_COUNT);
		textBoxHouseHand->Text = msclr::interop::marshal_as<String^>(cards);
		HOUSE_SCORE = ScoreHand(HOUSE_HAND, HOUSE_CARD_COUNT);
		textBoxHouseRes->Text = msclr::interop::marshal_as<String^>(std::to_string(HOUSE_SCORE));
		MessageBox::Show("You got a BLACKJACK! You can see results of the game in appropriate fields.", "BLACKJACK!");
		buttonHit->Hide();
		buttonEnd->Hide();
		buttonStop->Hide();
		buttonStart->Show();
	}
	return System::Void();
}

System::Void BlackJack::MyForm::buttonEnd_Click(System::Object^ sender, System::EventArgs^ e)
{
	buttonHit->Hide();
	buttonEnd->Hide();
	buttonStop->Hide();
	label6->Show();
	buttonYes->Show();
	buttonNo->Show();
	return System::Void();
}

System::Void BlackJack::MyForm::rulesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Rules:\n\n1. The goal of blackjack is to beat the dealer's hand without going over 21.\n2. Face cards are worth 10. Aces are worth 1 or 11, whichever makes a better hand.\n3. Each player starts with two cards, one of the dealer's cards is hidden until the end.\n4. To 'Hit' is to ask for another card.To 'Stand' is to hold your total and end your turn.\n5. If you go over 21 you bust, and the dealer wins regardless of the dealer's hand.\n6. If you are dealt 21 from the start(Ace & 10), you got a blackjack.\n7. Dealer will hit until his / her cards total 17 or higher.", "Rules");
	return System::Void();
}

System::Void BlackJack::MyForm::aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("This is the program, where you can just play or improve your skills in such game as blackjack or also known as ace.\nGood luck and have fun!", "About");
	return System::Void();
}

System::Void BlackJack::MyForm::buttonYes_Click(System::Object^ sender, System::EventArgs^ e)
{
	buttonHit->Hide();
	buttonEnd->Hide();
	buttonStop->Hide();
	label6->Hide();
	buttonYes->Hide();
	buttonNo->Hide();
	buttonStart->Show();
	textBoxHouseHand->Text = L"";
	textBoxHouseRes->Text = L"";
	textBoxPlayerHand->Text = L"";
	textBox2->Text = L"";
	return System::Void();
}

System::Void BlackJack::MyForm::buttonNo_Click(System::Object^ sender, System::EventArgs^ e)
{
	buttonHit->Show();
	buttonEnd->Show();
	buttonStop->Show();
	label6->Hide();
	buttonYes->Hide();
	buttonNo->Hide();
	return System::Void();
}
