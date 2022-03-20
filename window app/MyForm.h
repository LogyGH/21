#pragma once

namespace BlackJack {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxHouseHand;
	private: System::Windows::Forms::TextBox^ textBoxPlayerHand;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ informationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rulesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::Button^ buttonHit;
	private: System::Windows::Forms::Button^ buttonStop;
	private: System::Windows::Forms::Button^ buttonEnd;
	private: System::Windows::Forms::Button^ buttonStart;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxHouseRes;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ buttonYes;
	private: System::Windows::Forms::Button^ buttonNo;



	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxHouseHand = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPlayerHand = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->informationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rulesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonHit = (gcnew System::Windows::Forms::Button());
			this->buttonStop = (gcnew System::Windows::Forms::Button());
			this->buttonEnd = (gcnew System::Windows::Forms::Button());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxHouseRes = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->buttonYes = (gcnew System::Windows::Forms::Button());
			this->buttonNo = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 30, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(246, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(230, 60);
			this->label1->TabIndex = 0;
			this->label1->Text = L"New Hand";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(55, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(206, 34);
			this->label2->TabIndex = 1;
			this->label2->Text = L"House\'s hand";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(57, 29);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(210, 34);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Player\'s hand";
			// 
			// textBoxHouseHand
			// 
			this->textBoxHouseHand->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxHouseHand->Location = System::Drawing::Point(6, 83);
			this->textBoxHouseHand->Name = L"textBoxHouseHand";
			this->textBoxHouseHand->ReadOnly = true;
			this->textBoxHouseHand->Size = System::Drawing::Size(321, 40);
			this->textBoxHouseHand->TabIndex = 3;
			// 
			// textBoxPlayerHand
			// 
			this->textBoxPlayerHand->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPlayerHand->Location = System::Drawing::Point(6, 87);
			this->textBoxPlayerHand->Name = L"textBoxPlayerHand";
			this->textBoxPlayerHand->ReadOnly = true;
			this->textBoxPlayerHand->Size = System::Drawing::Size(321, 40);
			this->textBoxPlayerHand->TabIndex = 4;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->informationToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(722, 28);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// informationToolStripMenuItem
			// 
			this->informationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->rulesToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->informationToolStripMenuItem->Name = L"informationToolStripMenuItem";
			this->informationToolStripMenuItem->Size = System::Drawing::Size(101, 24);
			this->informationToolStripMenuItem->Text = L"Information";
			// 
			// rulesToolStripMenuItem
			// 
			this->rulesToolStripMenuItem->Name = L"rulesToolStripMenuItem";
			this->rulesToolStripMenuItem->Size = System::Drawing::Size(133, 26);
			this->rulesToolStripMenuItem->Text = L"Rules";
			this->rulesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rulesToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(133, 26);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBoxHouseHand);
			this->groupBox1->Location = System::Drawing::Point(12, 114);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(333, 157);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->textBoxPlayerHand);
			this->groupBox2->Location = System::Drawing::Point(377, 114);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(333, 157);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			// 
			// buttonHit
			// 
			this->buttonHit->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonHit->Location = System::Drawing::Point(113, 462);
			this->buttonHit->Name = L"buttonHit";
			this->buttonHit->Size = System::Drawing::Size(137, 61);
			this->buttonHit->TabIndex = 9;
			this->buttonHit->Text = L"Hit";
			this->buttonHit->UseVisualStyleBackColor = true;
			this->buttonHit->Click += gcnew System::EventHandler(this, &MyForm::buttonHit_Click);
			// 
			// buttonStop
			// 
			this->buttonStop->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonStop->Location = System::Drawing::Point(482, 462);
			this->buttonStop->Name = L"buttonStop";
			this->buttonStop->Size = System::Drawing::Size(137, 61);
			this->buttonStop->TabIndex = 10;
			this->buttonStop->Text = L"Stand";
			this->buttonStop->UseVisualStyleBackColor = true;
			this->buttonStop->Click += gcnew System::EventHandler(this, &MyForm::buttonStop_Click);
			// 
			// buttonEnd
			// 
			this->buttonEnd->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonEnd->Location = System::Drawing::Point(256, 462);
			this->buttonEnd->Name = L"buttonEnd";
			this->buttonEnd->Size = System::Drawing::Size(220, 61);
			this->buttonEnd->TabIndex = 11;
			this->buttonEnd->Text = L"End Game";
			this->buttonEnd->UseVisualStyleBackColor = true;
			this->buttonEnd->Click += gcnew System::EventHandler(this, &MyForm::buttonEnd_Click);
			// 
			// buttonStart
			// 
			this->buttonStart->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonStart->Location = System::Drawing::Point(256, 462);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(220, 61);
			this->buttonStart->TabIndex = 12;
			this->buttonStart->Text = L"Start Game";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->buttonStart->Click += gcnew System::EventHandler(this, &MyForm::buttonStart_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->textBoxHouseRes);
			this->groupBox3->Location = System::Drawing::Point(48, 277);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(252, 145);
			this->groupBox3->TabIndex = 7;
			this->groupBox3->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(6, 29);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(216, 34);
			this->label4->TabIndex = 1;
			this->label4->Text = L"House\'s result";
			// 
			// textBoxHouseRes
			// 
			this->textBoxHouseRes->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxHouseRes->Location = System::Drawing::Point(99, 83);
			this->textBoxHouseRes->Name = L"textBoxHouseRes";
			this->textBoxHouseRes->ReadOnly = true;
			this->textBoxHouseRes->Size = System::Drawing::Size(52, 40);
			this->textBoxHouseRes->TabIndex = 3;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Controls->Add(this->textBox2);
			this->groupBox4->Location = System::Drawing::Point(418, 277);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(252, 157);
			this->groupBox4->TabIndex = 8;
			this->groupBox4->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(3, 29);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(220, 34);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Player\'s result";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(103, 83);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(51, 40);
			this->textBox2->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(71, 475);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(210, 34);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Are you sure\?";
			// 
			// buttonYes
			// 
			this->buttonYes->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonYes->Location = System::Drawing::Point(355, 471);
			this->buttonYes->Name = L"buttonYes";
			this->buttonYes->Size = System::Drawing::Size(73, 47);
			this->buttonYes->TabIndex = 14;
			this->buttonYes->Text = L"YES";
			this->buttonYes->UseVisualStyleBackColor = true;
			this->buttonYes->Click += gcnew System::EventHandler(this, &MyForm::buttonYes_Click);
			// 
			// buttonNo
			// 
			this->buttonNo->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNo->Location = System::Drawing::Point(467, 471);
			this->buttonNo->Name = L"buttonNo";
			this->buttonNo->Size = System::Drawing::Size(73, 47);
			this->buttonNo->TabIndex = 15;
			this->buttonNo->Text = L"NO";
			this->buttonNo->UseVisualStyleBackColor = true;
			this->buttonNo->Click += gcnew System::EventHandler(this, &MyForm::buttonNo_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(722, 547);
			this->Controls->Add(this->buttonNo);
			this->Controls->Add(this->buttonYes);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->buttonStart);
			this->Controls->Add(this->buttonEnd);
			this->Controls->Add(this->buttonStop);
			this->Controls->Add(this->buttonHit);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(740, 594);
			this->MinimumSize = System::Drawing::Size(740, 594);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Blackjack";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
			this->buttonHit->Hide();
			this->buttonEnd->Hide();
			this->buttonStop->Hide();
			this->label6->Hide();
			this->buttonYes->Hide();
			this->buttonNo->Hide();
		}
#pragma endregion
		
private: System::Void buttonHit_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonStop_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonStart_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonEnd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void rulesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonYes_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonNo_Click(System::Object^ sender, System::EventArgs^ e);
};
}
