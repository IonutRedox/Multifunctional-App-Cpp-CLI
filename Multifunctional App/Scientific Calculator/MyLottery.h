#pragma once
#include "Engine.h"
namespace Scientific_Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		Form^ Menu;
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm2(Form^ App3)
		{
			Menu = App3;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  UpperBar;
	private: System::Windows::Forms::Button^  btnExitLoto;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  btnResetLoto;
	private: System::Windows::Forms::Button^  btnGenerate;
	private: System::Windows::Forms::Button^  btnPauseLoto;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::Timer^  timer4;
	private: System::Windows::Forms::Timer^  timer5;
	private: System::Windows::Forms::Timer^  timer6;
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
			this->UpperBar = (gcnew System::Windows::Forms::Panel());
			this->btnExitLoto = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->btnResetLoto = (gcnew System::Windows::Forms::Button());
			this->btnGenerate = (gcnew System::Windows::Forms::Button());
			this->btnPauseLoto = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer5 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer6 = (gcnew System::Windows::Forms::Timer(this->components));
			this->UpperBar->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(285, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(204, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Test your luck";
			// 
			// UpperBar
			// 
			this->UpperBar->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->UpperBar->Controls->Add(this->btnExitLoto);
			this->UpperBar->Controls->Add(this->label3);
			this->UpperBar->Location = System::Drawing::Point(0, 0);
			this->UpperBar->Name = L"UpperBar";
			this->UpperBar->Size = System::Drawing::Size(801, 34);
			this->UpperBar->TabIndex = 83;
			// 
			// btnExitLoto
			// 
			this->btnExitLoto->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->btnExitLoto->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExitLoto->FlatAppearance->BorderSize = 0;
			this->btnExitLoto->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::WindowFrame;
			this->btnExitLoto->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExitLoto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExitLoto->ForeColor = System::Drawing::Color::Silver;
			this->btnExitLoto->Location = System::Drawing::Point(763, -1);
			this->btnExitLoto->Name = L"btnExitLoto";
			this->btnExitLoto->Size = System::Drawing::Size(38, 37);
			this->btnExitLoto->TabIndex = 83;
			this->btnExitLoto->Text = L"X";
			this->btnExitLoto->UseVisualStyleBackColor = false;
			this->btnExitLoto->Click += gcnew System::EventHandler(this, &MyForm2::btnExitLoto_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Silver;
			this->label3->Location = System::Drawing::Point(10, 6);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(207, 20);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Lottery numbers generator";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(169, 92);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(57, 54);
			this->textBox1->TabIndex = 84;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(247, 92);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(57, 54);
			this->textBox2->TabIndex = 85;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(325, 92);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(57, 54);
			this->textBox3->TabIndex = 86;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(403, 92);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(57, 54);
			this->textBox4->TabIndex = 87;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(481, 92);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(57, 54);
			this->textBox5->TabIndex = 88;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(559, 92);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(57, 54);
			this->textBox6->TabIndex = 89;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnResetLoto
			// 
			this->btnResetLoto->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnResetLoto->FlatAppearance->BorderSize = 0;
			this->btnResetLoto->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnResetLoto->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnResetLoto->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnResetLoto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnResetLoto->Location = System::Drawing::Point(476, 176);
			this->btnResetLoto->Name = L"btnResetLoto";
			this->btnResetLoto->Size = System::Drawing::Size(155, 40);
			this->btnResetLoto->TabIndex = 90;
			this->btnResetLoto->Text = L"Reset";
			this->btnResetLoto->UseVisualStyleBackColor = false;
			this->btnResetLoto->Click += gcnew System::EventHandler(this, &MyForm2::btnResetLoto_Click);
			// 
			// btnGenerate
			// 
			this->btnGenerate->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnGenerate->FlatAppearance->BorderSize = 0;
			this->btnGenerate->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnGenerate->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnGenerate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGenerate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGenerate->Location = System::Drawing::Point(154, 176);
			this->btnGenerate->Name = L"btnGenerate";
			this->btnGenerate->Size = System::Drawing::Size(155, 40);
			this->btnGenerate->TabIndex = 91;
			this->btnGenerate->Text = L"Generate";
			this->btnGenerate->UseVisualStyleBackColor = false;
			this->btnGenerate->Click += gcnew System::EventHandler(this, &MyForm2::btnGenerate_Click);
			// 
			// btnPauseLoto
			// 
			this->btnPauseLoto->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnPauseLoto->FlatAppearance->BorderSize = 0;
			this->btnPauseLoto->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnPauseLoto->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnPauseLoto->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPauseLoto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPauseLoto->Location = System::Drawing::Point(315, 176);
			this->btnPauseLoto->Name = L"btnPauseLoto";
			this->btnPauseLoto->Size = System::Drawing::Size(155, 40);
			this->btnPauseLoto->TabIndex = 92;
			this->btnPauseLoto->Text = L"Pause";
			this->btnPauseLoto->UseVisualStyleBackColor = false;
			this->btnPauseLoto->Click += gcnew System::EventHandler(this, &MyForm2::btnPauseLoto_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 200;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm2::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 260;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm2::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 320;
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm2::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Interval = 420;
			this->timer4->Tick += gcnew System::EventHandler(this, &MyForm2::timer4_Tick);
			// 
			// timer5
			// 
			this->timer5->Interval = 480;
			this->timer5->Tick += gcnew System::EventHandler(this, &MyForm2::timer5_Tick);
			// 
			// timer6
			// 
			this->timer6->Interval = 540;
			this->timer6->Tick += gcnew System::EventHandler(this, &MyForm2::timer6_Tick);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 264);
			this->Controls->Add(this->btnPauseLoto);
			this->Controls->Add(this->btnGenerate);
			this->Controls->Add(this->btnResetLoto);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->UpperBar);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->UpperBar->ResumeLayout(false);
			this->UpperBar->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Engine *Lottery = new Engine();
		
private: System::Void btnExitLoto_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->Hide();
	Menu->Show();
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	textBox1->Text = Lottery->getRandomNumber();
}
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	textBox2->Text = Lottery->getRandomNumber();
}
private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	textBox3->Text = Lottery->getRandomNumber();
}
private: System::Void timer4_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	textBox4->Text = Lottery->getRandomNumber();
}
private: System::Void timer5_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	textBox5->Text = Lottery->getRandomNumber();
}
private: System::Void timer6_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	textBox6->Text = Lottery->getRandomNumber();
	Lottery->clearFrequency();
}
private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) 
{
	Lottery->clearFrequency();
	btnPauseLoto->Enabled = false;
	btnResetLoto->Enabled = false;
	timer1->Enabled = false;
	timer2->Enabled = false;
	timer3->Enabled = false;
	timer4->Enabled = false;
	timer5->Enabled = false;
	timer6->Enabled = false;
}
private: System::Void btnGenerate_Click(System::Object^  sender, System::EventArgs^  e) 
{
	btnPauseLoto->Enabled = true;
	btnResetLoto->Enabled = false;
	timer1->Enabled = true;
	timer2->Enabled = true;
	timer3->Enabled = true;
	timer4->Enabled = true;
	timer5->Enabled = true;
	timer6->Enabled = true;
}
private: System::Void btnPauseLoto_Click(System::Object^  sender, System::EventArgs^  e) 
{
		btnResetLoto->Enabled = true;
		timer1->Enabled = false;
		timer2->Enabled = false;
		timer3->Enabled = false;
		timer4->Enabled = false;
		timer5->Enabled = false;
		timer6->Enabled = false;
	
}
private: System::Void btnResetLoto_Click(System::Object^  sender, System::EventArgs^  e) 
{
	Lottery->clearFrequency();
	btnPauseLoto->Enabled = false;
	btnResetLoto->Enabled = false;
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
}
};
}
