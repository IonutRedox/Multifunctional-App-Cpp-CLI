#pragma once
#include "MyLottery.h"
#include "QuizForm.h"
#include "MyCalc.h"

namespace Scientific_Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuForm
	/// </summary>
	public ref class MenuForm : public System::Windows::Forms::Form
	{
	public:
		MenuForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnOpenCalc;


	private: System::Windows::Forms::Button^  btnOpenQuiz;
	private: System::Windows::Forms::Button^  btnExitMenu;



	private: System::Windows::Forms::Button^  btnOpenLoto;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnOpenCalc = (gcnew System::Windows::Forms::Button());
			this->btnOpenQuiz = (gcnew System::Windows::Forms::Button());
			this->btnExitMenu = (gcnew System::Windows::Forms::Button());
			this->btnOpenLoto = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnOpenCalc
			// 
			this->btnOpenCalc->BackColor = System::Drawing::Color::Gray;
			this->btnOpenCalc->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnOpenCalc->FlatAppearance->BorderSize = 0;
			this->btnOpenCalc->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::WindowFrame;
			this->btnOpenCalc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOpenCalc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOpenCalc->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnOpenCalc->Location = System::Drawing::Point(0, 54);
			this->btnOpenCalc->Name = L"btnOpenCalc";
			this->btnOpenCalc->Size = System::Drawing::Size(718, 73);
			this->btnOpenCalc->TabIndex = 0;
			this->btnOpenCalc->Text = L"Scientific calculator";
			this->btnOpenCalc->UseVisualStyleBackColor = false;
			this->btnOpenCalc->Click += gcnew System::EventHandler(this, &MenuForm::btnOpenCalc_Click);
			// 
			// btnOpenQuiz
			// 
			this->btnOpenQuiz->BackColor = System::Drawing::Color::Gray;
			this->btnOpenQuiz->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnOpenQuiz->FlatAppearance->BorderSize = 0;
			this->btnOpenQuiz->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::WindowFrame;
			this->btnOpenQuiz->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOpenQuiz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOpenQuiz->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnOpenQuiz->Location = System::Drawing::Point(0, 127);
			this->btnOpenQuiz->Name = L"btnOpenQuiz";
			this->btnOpenQuiz->Size = System::Drawing::Size(718, 73);
			this->btnOpenQuiz->TabIndex = 3;
			this->btnOpenQuiz->Text = L"Test your general knowledge with this quiz.";
			this->btnOpenQuiz->UseVisualStyleBackColor = false;
			this->btnOpenQuiz->Click += gcnew System::EventHandler(this, &MenuForm::btnOpenQuiz_Click);
			// 
			// btnExitMenu
			// 
			this->btnExitMenu->BackColor = System::Drawing::Color::Gray;
			this->btnExitMenu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExitMenu->FlatAppearance->BorderSize = 0;
			this->btnExitMenu->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::WindowFrame;
			this->btnExitMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExitMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExitMenu->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnExitMenu->Location = System::Drawing::Point(0, 272);
			this->btnExitMenu->Name = L"btnExitMenu";
			this->btnExitMenu->Size = System::Drawing::Size(718, 73);
			this->btnExitMenu->TabIndex = 5;
			this->btnExitMenu->Text = L"Exit";
			this->btnExitMenu->UseVisualStyleBackColor = false;
			this->btnExitMenu->Click += gcnew System::EventHandler(this, &MenuForm::btnExitMenu_Click);
			// 
			// btnOpenLoto
			// 
			this->btnOpenLoto->BackColor = System::Drawing::Color::Gray;
			this->btnOpenLoto->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnOpenLoto->FlatAppearance->BorderSize = 0;
			this->btnOpenLoto->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::WindowFrame;
			this->btnOpenLoto->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOpenLoto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOpenLoto->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnOpenLoto->Location = System::Drawing::Point(0, 200);
			this->btnOpenLoto->Name = L"btnOpenLoto";
			this->btnOpenLoto->Size = System::Drawing::Size(718, 73);
			this->btnOpenLoto->TabIndex = 6;
			this->btnOpenLoto->Text = L"Do you feel lucky\?";
			this->btnOpenLoto->UseVisualStyleBackColor = false;
			this->btnOpenLoto->Click += gcnew System::EventHandler(this, &MenuForm::btnOpenLoto_Click);
			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(717, 402);
			this->Controls->Add(this->btnOpenLoto);
			this->Controls->Add(this->btnExitMenu);
			this->Controls->Add(this->btnOpenQuiz);
			this->Controls->Add(this->btnOpenCalc);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MenuForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MenuForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void btnOpenCalc_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->Hide();
		MyForm^ CalcApp1 = gcnew MyForm(this);
		CalcApp1->Show();
	}
private: System::Void btnOpenQuiz_Click(System::Object^  sender, System::EventArgs^  ){
		this->Hide();
		MyForm1^ App2 = gcnew MyForm1(this);
		App2->Show();
	}
private: System::Void btnExitMenu_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->Close();
}
private: System::Void btnOpenLoto_Click(System::Object^  sender, System::EventArgs^  e)
{
	this->Hide();
	MyForm2^ App3 = gcnew MyForm2(this);
	App3->Show();
}
};
}
