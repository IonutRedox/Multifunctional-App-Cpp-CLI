#pragma once
#include "Engine.h"

namespace Scientific_Calculator {
	using namespace System::IO;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		Form^ Menu;
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm1(Form^ App2)
		{
			Menu = App2;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnD;
	private: System::Windows::Forms::Button^  btnC;
	private: System::Windows::Forms::Button^  btnB;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  btnExitIQ;
	private: System::Windows::Forms::Panel^  UpperBar;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  btnA;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lblCorrect;
	private: System::Windows::Forms::Label^  lblincorrect;

	private: System::Windows::Forms::Timer^  timerTest;
	private: System::Windows::Forms::Label^  lblTestTimeLeft;
	private: System::Windows::Forms::Label^  lblQuestion;
	private: System::Windows::Forms::Label^  lblFinal;
	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnD = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnB = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnExitIQ = (gcnew System::Windows::Forms::Button());
			this->UpperBar = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnA = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblCorrect = (gcnew System::Windows::Forms::Label());
			this->lblincorrect = (gcnew System::Windows::Forms::Label());
			this->timerTest = (gcnew System::Windows::Forms::Timer(this->components));
			this->lblTestTimeLeft = (gcnew System::Windows::Forms::Label());
			this->lblQuestion = (gcnew System::Windows::Forms::Label());
			this->lblFinal = (gcnew System::Windows::Forms::Label());
			this->UpperBar->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(195, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(389, 38);
			this->label1->TabIndex = 1;
			this->label1->Text = L"General knowledge quiz";
			// 
			// btnD
			// 
			this->btnD->BackColor = System::Drawing::SystemColors::Control;
			this->btnD->FlatAppearance->BorderSize = 0;
			this->btnD->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnD->Location = System::Drawing::Point(0, 407);
			this->btnD->Name = L"btnD";
			this->btnD->Size = System::Drawing::Size(789, 38);
			this->btnD->TabIndex = 6;
			this->btnD->Text = L"D";
			this->btnD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnD->UseVisualStyleBackColor = false;
			this->btnD->Click += gcnew System::EventHandler(this, &MyForm1::btnABCD);
			// 
			// btnC
			// 
			this->btnC->BackColor = System::Drawing::SystemColors::Control;
			this->btnC->FlatAppearance->BorderSize = 0;
			this->btnC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC->Location = System::Drawing::Point(0, 363);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(789, 38);
			this->btnC->TabIndex = 5;
			this->btnC->Text = L"C";
			this->btnC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnC->UseVisualStyleBackColor = false;
			this->btnC->Click += gcnew System::EventHandler(this, &MyForm1::btnABCD);
			// 
			// btnB
			// 
			this->btnB->BackColor = System::Drawing::SystemColors::Control;
			this->btnB->FlatAppearance->BorderSize = 0;
			this->btnB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnB->Location = System::Drawing::Point(0, 319);
			this->btnB->Name = L"btnB";
			this->btnB->Size = System::Drawing::Size(789, 38);
			this->btnB->TabIndex = 4;
			this->btnB->Text = L"B";
			this->btnB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnB->UseVisualStyleBackColor = false;
			this->btnB->Click += gcnew System::EventHandler(this, &MyForm1::btnABCD);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(0, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 85;
			// 
			// btnExitIQ
			// 
			this->btnExitIQ->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->btnExitIQ->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExitIQ->FlatAppearance->BorderSize = 0;
			this->btnExitIQ->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::WindowFrame;
			this->btnExitIQ->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExitIQ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExitIQ->ForeColor = System::Drawing::Color::Silver;
			this->btnExitIQ->Location = System::Drawing::Point(752, -1);
			this->btnExitIQ->Name = L"btnExitIQ";
			this->btnExitIQ->Size = System::Drawing::Size(38, 37);
			this->btnExitIQ->TabIndex = 83;
			this->btnExitIQ->Text = L"X";
			this->btnExitIQ->UseVisualStyleBackColor = false;
			this->btnExitIQ->Click += gcnew System::EventHandler(this, &MyForm1::btnExitIQ_Click);
			// 
			// UpperBar
			// 
			this->UpperBar->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->UpperBar->Controls->Add(this->btnExitIQ);
			this->UpperBar->Controls->Add(this->label3);
			this->UpperBar->Location = System::Drawing::Point(-1, -1);
			this->UpperBar->Name = L"UpperBar";
			this->UpperBar->Size = System::Drawing::Size(790, 34);
			this->UpperBar->TabIndex = 83;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Silver;
			this->label3->Location = System::Drawing::Point(9, 8);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 20);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Quiz";
			// 
			// btnA
			// 
			this->btnA->BackColor = System::Drawing::SystemColors::Control;
			this->btnA->FlatAppearance->BorderSize = 0;
			this->btnA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnA->Location = System::Drawing::Point(-1, 275);
			this->btnA->Name = L"btnA";
			this->btnA->Size = System::Drawing::Size(790, 38);
			this->btnA->TabIndex = 87;
			this->btnA->Text = L"A";
			this->btnA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnA->UseVisualStyleBackColor = false;
			this->btnA->Click += gcnew System::EventHandler(this, &MyForm1::btnABCD);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 183);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 17);
			this->label2->TabIndex = 89;
			// 
			// lblCorrect
			// 
			this->lblCorrect->AutoSize = true;
			this->lblCorrect->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCorrect->Location = System::Drawing::Point(13, 454);
			this->lblCorrect->Name = L"lblCorrect";
			this->lblCorrect->Size = System::Drawing::Size(84, 18);
			this->lblCorrect->TabIndex = 95;
			this->lblCorrect->Text = L"Correct: 0";
			// 
			// lblincorrect
			// 
			this->lblincorrect->AutoSize = true;
			this->lblincorrect->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblincorrect->Location = System::Drawing::Point(114, 454);
			this->lblincorrect->Name = L"lblincorrect";
			this->lblincorrect->Size = System::Drawing::Size(94, 18);
			this->lblincorrect->TabIndex = 96;
			this->lblincorrect->Text = L"Incorrect: 0";
			// 
			// timerTest
			// 
			this->timerTest->Interval = 1000;
			this->timerTest->Tick += gcnew System::EventHandler(this, &MyForm1::timerTest_Tick);
			// 
			// lblTestTimeLeft
			// 
			this->lblTestTimeLeft->AutoSize = true;
			this->lblTestTimeLeft->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTestTimeLeft->Location = System::Drawing::Point(631, 454);
			this->lblTestTimeLeft->Name = L"lblTestTimeLeft";
			this->lblTestTimeLeft->Size = System::Drawing::Size(0, 18);
			this->lblTestTimeLeft->Text = L"Time left:10:00";
			this->lblTestTimeLeft->TabIndex = 99;
			// 
			// lblQuestion
			// 
			this->lblQuestion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblQuestion->Location = System::Drawing::Point(25, 112);
			this->lblQuestion->Name = L"lblQuestion";
			this->lblQuestion->Size = System::Drawing::Size(734, 148);
			this->lblQuestion->TabIndex = 100;
			this->lblQuestion->Text = L"label6";
			// 
			// lblFinal
			// 
			this->lblFinal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFinal->Location = System::Drawing::Point(24, 183);
			this->lblFinal->Name = L"lblFinal";
			this->lblFinal->Size = System::Drawing::Size(735, 75);
			this->lblFinal->TabIndex = 101;
			this->lblFinal->Text = L"General knowledge quiz";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(786, 484);
			this->Controls->Add(this->lblFinal);
			this->Controls->Add(this->lblTestTimeLeft);
			this->Controls->Add(this->lblincorrect);
			this->Controls->Add(this->lblCorrect);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnA);
			this->Controls->Add(this->UpperBar);
			this->Controls->Add(this->btnD);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnB);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblQuestion);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->UpperBar->ResumeLayout(false);
			this->UpperBar->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Engine *Quiz = new Engine();
	    
private: System::Void btnExitIQ_Click(System::Object^  sender, System::EventArgs^  e)
{
	this->Hide();
	Menu->Show();
}

private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e)
{
	Quiz->readFile();
	Quiz->getAnswers();
	timerTest->Enabled = true;
	lblTestTimeLeft->Text = "Time left:" + System::Convert::ToString(Quiz->min) +":0"+ System::Convert::ToString(Quiz->sec);
	lblTestTimeLeft->Visible = true;
	lblFinal->Visible = false;
	lblQuestion->Text = gcnew String((Quiz->getContent()).c_str());
	btnA->Text = gcnew String((Quiz->getContent()).c_str());
	btnB->Text = gcnew String((Quiz->getContent()).c_str());
	btnC->Text = gcnew String((Quiz->getContent()).c_str());
	btnD->Text = gcnew String((Quiz->getContent()).c_str());
}

private: System::Void btnABCD(System::Object^  sender, System::EventArgs^  e) 
{
	//Detect button pressed
	Button^ choice = safe_cast<Button^>(sender);
	char reply = choice->Text[0]; // store your choice as a char
	Quiz->checkAnswer(reply); 

	//Display the score
	lblCorrect->Text = "Correct: " + System::Convert::ToString(Quiz->correct);
	lblincorrect->Text = "Incorrect: " + System::Convert::ToString(Quiz->incorrect);

	if (Quiz->endQuiz()) // Check for end
	{
		timerTest->Enabled = false;
		lblFinal->Text = System::Convert::ToString("You got " +Quiz->correct +"/"+Quiz->NrQuestions+" points,thanks for attention.");
		lblCorrect->Visible = false;
		lblincorrect->Visible = false;
		lblTestTimeLeft->Visible = false;
		lblFinal->Visible = true;
		lblQuestion->Visible = false;
		btnA->Visible = false;
		btnB->Visible = false;
		btnC->Visible = false;
		btnD->Visible = false;
	}
	else // get next question
	{
		lblQuestion->Text = gcnew String((Quiz->getContent()).c_str());
		btnA->Text = gcnew String((Quiz->getContent()).c_str());
		btnB->Text = gcnew String((Quiz->getContent()).c_str());
		btnC->Text = gcnew String((Quiz->getContent()).c_str());
		btnD->Text = gcnew String((Quiz->getContent()).c_str());
	}
}
		
private: System::Void timerTest_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	    
		if (Quiz->timeOver()) // Check for end
		{
			timerTest->Enabled = false;
			lblFinal->Text = System::Convert::ToString("You got " + Quiz->correct + "/10 points,thanks for attention.");
			lblCorrect->Visible = false;
			lblincorrect->Visible = false;
			lblTestTimeLeft->Visible = false;
			lblFinal->Visible = true;
			lblQuestion->Visible = false;
			btnA->Visible = false;
			btnB->Visible = false;
			btnC->Visible = false;
			btnD->Visible = false;
		}
		Quiz->decreaseTime();
		lblTestTimeLeft->Text ="Time left:"+ gcnew String((Quiz->getTimeLeft()).c_str()); // Convert from std::string to System String^
}

};

}
