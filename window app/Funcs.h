#pragma once
#include <iostream>
#include <ctime>
#include <string>
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::Windows::Forms;

void Shuffle(bool baCardsDealt[]);
std::string PrintCard(int iCard);
std::string PrintHand(int iaHand[], const int kiCardCount);
int GetNextCard(bool baCardsDealt[]);
int ScoreHand(int iaHand[], const int kiCardCount);