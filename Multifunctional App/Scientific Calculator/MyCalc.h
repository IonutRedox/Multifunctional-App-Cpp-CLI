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
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Form^ Menu;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm(Form^ CalcApp1)
		{
			Menu = CalcApp1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  standardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  scientificToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  historyToolStripMenuItem1;

	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;

	private: System::Windows::Forms::TextBox^  txtDisplay;
	private: System::Windows::Forms::Button^  btnLog;
	private: System::Windows::Forms::Button^  btnBin;






























	private: System::Windows::Forms::Button^  btnCos;

	private: System::Windows::Forms::Button^  btnCosh;

	private: System::Windows::Forms::Button^  btnSqrt;
	private: System::Windows::Forms::Button^  btnDec;


	private: System::Windows::Forms::Button^  btnSin;

	private: System::Windows::Forms::Button^  btnSinh;





	private: System::Windows::Forms::Panel^  panel1;















	private: System::Windows::Forms::ToolStripMenuItem^  temperatureToolStripMenuItem;








	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Button^  btnEqual;

private: System::Windows::Forms::Button^  btnDecimal;

private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::Button^  btnPercent;

private: System::Windows::Forms::Button^  btnOct;
private: System::Windows::Forms::Button^  btnMod;


private: System::Windows::Forms::Button^  btnEXP;


private: System::Windows::Forms::Button^  btnLn;

private: System::Windows::Forms::Button^  btnHex;

private: System::Windows::Forms::Button^  btnTan;

private: System::Windows::Forms::Button^  btnTanh;
private: System::Windows::Forms::Button^  btnParanthesisClose;



private: System::Windows::Forms::Button^  btnC;
private: System::Windows::Forms::Button^  btnParanthesisOpen;



private: System::Windows::Forms::Button^  btnRemove;
private: System::Windows::Forms::Button^  btnX2;
private: System::Windows::Forms::Button^  btnX3;
private: System::Windows::Forms::Button^  btnSupra;
private: System::Windows::Forms::Button^  btnPi;






private: System::Windows::Forms::Label^  lblShowOp;

private: System::Windows::Forms::ListBox^  listBox1;







private: System::Windows::Forms::Button^  btnReset;

private: System::Windows::Forms::Button^  btnConvert;

private: System::Windows::Forms::RichTextBox^  txtConverted;

private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::TextBox^  txtToConvertCF;
private: System::Windows::Forms::Label^  lblKtoF;

private: System::Windows::Forms::Label^  lblCtoK;

private: System::Windows::Forms::Label^  lblCtoF;

private: System::Windows::Forms::TextBox^  txtToConvertKF;
private: System::Windows::Forms::TextBox^  txtToConvertCK;
private: System::Windows::Forms::Button^  Swap3;
private: System::Windows::Forms::Button^  Swap2;
private: System::Windows::Forms::Button^  Swap1;


private: System::Windows::Forms::Label^  lblFtoC;
private: System::Windows::Forms::Label^  lblKtoC;
private: System::Windows::Forms::Label^  lblFtoK;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::RadioButton^  rb3;
private: System::Windows::Forms::RadioButton^  rb2;
private: System::Windows::Forms::RadioButton^  rb1;
private: System::Windows::Forms::Panel^  UpperBar;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Button^  btnExitCalc;
private: System::Windows::Forms::ToolStripMenuItem^  clearHistoryToolStripMenuItem;












	private: System::ComponentModel::IContainer^  components;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->scientificToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historyToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->temperatureToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearHistoryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnLog = (gcnew System::Windows::Forms::Button());
			this->btnBin = (gcnew System::Windows::Forms::Button());
			this->btnCos = (gcnew System::Windows::Forms::Button());
			this->btnCosh = (gcnew System::Windows::Forms::Button());
			this->btnSqrt = (gcnew System::Windows::Forms::Button());
			this->btnDec = (gcnew System::Windows::Forms::Button());
			this->btnSin = (gcnew System::Windows::Forms::Button());
			this->btnSinh = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->rb3 = (gcnew System::Windows::Forms::RadioButton());
			this->rb2 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblFtoK = (gcnew System::Windows::Forms::Label());
			this->lblKtoC = (gcnew System::Windows::Forms::Label());
			this->lblFtoC = (gcnew System::Windows::Forms::Label());
			this->Swap3 = (gcnew System::Windows::Forms::Button());
			this->Swap2 = (gcnew System::Windows::Forms::Button());
			this->Swap1 = (gcnew System::Windows::Forms::Button());
			this->txtToConvertKF = (gcnew System::Windows::Forms::TextBox());
			this->txtToConvertCK = (gcnew System::Windows::Forms::TextBox());
			this->lblKtoF = (gcnew System::Windows::Forms::Label());
			this->lblCtoK = (gcnew System::Windows::Forms::Label());
			this->lblCtoF = (gcnew System::Windows::Forms::Label());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnConvert = (gcnew System::Windows::Forms::Button());
			this->txtConverted = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtToConvertCF = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnEqual = (gcnew System::Windows::Forms::Button());
			this->btnDecimal = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->btnPercent = (gcnew System::Windows::Forms::Button());
			this->btnOct = (gcnew System::Windows::Forms::Button());
			this->btnMod = (gcnew System::Windows::Forms::Button());
			this->btnEXP = (gcnew System::Windows::Forms::Button());
			this->btnLn = (gcnew System::Windows::Forms::Button());
			this->btnHex = (gcnew System::Windows::Forms::Button());
			this->btnTan = (gcnew System::Windows::Forms::Button());
			this->btnTanh = (gcnew System::Windows::Forms::Button());
			this->btnParanthesisClose = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnParanthesisOpen = (gcnew System::Windows::Forms::Button());
			this->btnRemove = (gcnew System::Windows::Forms::Button());
			this->btnX2 = (gcnew System::Windows::Forms::Button());
			this->btnX3 = (gcnew System::Windows::Forms::Button());
			this->btnSupra = (gcnew System::Windows::Forms::Button());
			this->btnPi = (gcnew System::Windows::Forms::Button());
			this->lblShowOp = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->UpperBar = (gcnew System::Windows::Forms::Panel());
			this->btnExitCalc = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->UpperBar->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::Control;
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(1, 33);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(267, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->standardToolStripMenuItem,
					this->scientificToolStripMenuItem, this->historyToolStripMenuItem1, this->temperatureToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(44, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// standardToolStripMenuItem
			// 
			this->standardToolStripMenuItem->Name = L"standardToolStripMenuItem";
			this->standardToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->standardToolStripMenuItem->Text = L"Standard";
			this->standardToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::standardToolStripMenuItem_Click);
			// 
			// scientificToolStripMenuItem
			// 
			this->scientificToolStripMenuItem->Name = L"scientificToolStripMenuItem";
			this->scientificToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->scientificToolStripMenuItem->Text = L"Scientific";
			this->scientificToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::scientificToolStripMenuItem_Click);
			// 
			// historyToolStripMenuItem1
			// 
			this->historyToolStripMenuItem1->Name = L"historyToolStripMenuItem1";
			this->historyToolStripMenuItem1->Size = System::Drawing::Size(181, 26);
			this->historyToolStripMenuItem1->Text = L"History";
			this->historyToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::historyToolStripMenuItem1_Click);
			// 
			// temperatureToolStripMenuItem
			// 
			this->temperatureToolStripMenuItem->Name = L"temperatureToolStripMenuItem";
			this->temperatureToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->temperatureToolStripMenuItem->Text = L"Temperature";
			this->temperatureToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::temperatureToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->clearHistoryToolStripMenuItem });
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(47, 24);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// clearHistoryToolStripMenuItem
			// 
			this->clearHistoryToolStripMenuItem->Name = L"clearHistoryToolStripMenuItem";
			this->clearHistoryToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->clearHistoryToolStripMenuItem->Text = L"Clear history";
			this->clearHistoryToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::clearHistoryToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(53, 24);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::helpToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(12, 64);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(286, 41);
			this->txtDisplay->TabIndex = 3;
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnLog
			// 
			this->btnLog->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnLog->FlatAppearance->BorderSize = 0;
			this->btnLog->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnLog->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnLog->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLog->Location = System::Drawing::Point(379, 117);
			this->btnLog->Name = L"btnLog";
			this->btnLog->Size = System::Drawing::Size(74, 63);
			this->btnLog->TabIndex = 34;
			this->btnLog->Text = L"Log";
			this->btnLog->UseVisualStyleBackColor = false;
			this->btnLog->Click += gcnew System::EventHandler(this, &MyForm::btnLog_Click);
			// 
			// btnBin
			// 
			this->btnBin->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnBin->FlatAppearance->BorderSize = 0;
			this->btnBin->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnBin->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnBin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBin->Location = System::Drawing::Point(455, 247);
			this->btnBin->Name = L"btnBin";
			this->btnBin->Size = System::Drawing::Size(74, 63);
			this->btnBin->TabIndex = 33;
			this->btnBin->Text = L"Bin";
			this->btnBin->UseVisualStyleBackColor = false;
			this->btnBin->Click += gcnew System::EventHandler(this, &MyForm::btnBin_Click);
			// 
			// btnCos
			// 
			this->btnCos->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnCos->FlatAppearance->BorderSize = 0;
			this->btnCos->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnCos->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnCos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCos->Location = System::Drawing::Point(379, 247);
			this->btnCos->Name = L"btnCos";
			this->btnCos->Size = System::Drawing::Size(74, 63);
			this->btnCos->TabIndex = 32;
			this->btnCos->Text = L"Cos";
			this->btnCos->UseVisualStyleBackColor = false;
			this->btnCos->Click += gcnew System::EventHandler(this, &MyForm::btnCos_Click);
			// 
			// btnCosh
			// 
			this->btnCosh->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnCosh->FlatAppearance->BorderSize = 0;
			this->btnCosh->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnCosh->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnCosh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCosh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCosh->Location = System::Drawing::Point(303, 247);
			this->btnCosh->Name = L"btnCosh";
			this->btnCosh->Size = System::Drawing::Size(74, 63);
			this->btnCosh->TabIndex = 31;
			this->btnCosh->Text = L"Cosh";
			this->btnCosh->UseVisualStyleBackColor = false;
			this->btnCosh->Click += gcnew System::EventHandler(this, &MyForm::btnCosh_Click);
			// 
			// btnSqrt
			// 
			this->btnSqrt->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnSqrt->FlatAppearance->BorderSize = 0;
			this->btnSqrt->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnSqrt->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnSqrt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSqrt->Location = System::Drawing::Point(455, 117);
			this->btnSqrt->Name = L"btnSqrt";
			this->btnSqrt->Size = System::Drawing::Size(74, 63);
			this->btnSqrt->TabIndex = 30;
			this->btnSqrt->Text = L"√";
			this->btnSqrt->UseVisualStyleBackColor = false;
			this->btnSqrt->Click += gcnew System::EventHandler(this, &MyForm::btnSqrt_Click);
			// 
			// btnDec
			// 
			this->btnDec->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnDec->FlatAppearance->BorderSize = 0;
			this->btnDec->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnDec->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnDec->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDec->Location = System::Drawing::Point(455, 182);
			this->btnDec->Name = L"btnDec";
			this->btnDec->Size = System::Drawing::Size(74, 63);
			this->btnDec->TabIndex = 29;
			this->btnDec->Text = L"Dec";
			this->btnDec->UseVisualStyleBackColor = false;
			this->btnDec->Click += gcnew System::EventHandler(this, &MyForm::btnDec_Click);
			// 
			// btnSin
			// 
			this->btnSin->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnSin->FlatAppearance->BorderSize = 0;
			this->btnSin->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnSin->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnSin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSin->Location = System::Drawing::Point(379, 182);
			this->btnSin->Name = L"btnSin";
			this->btnSin->Size = System::Drawing::Size(74, 63);
			this->btnSin->TabIndex = 28;
			this->btnSin->Text = L"Sin";
			this->btnSin->UseVisualStyleBackColor = false;
			this->btnSin->Click += gcnew System::EventHandler(this, &MyForm::btnSin_Click);
			// 
			// btnSinh
			// 
			this->btnSinh->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnSinh->FlatAppearance->BorderSize = 0;
			this->btnSinh->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnSinh->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnSinh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSinh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSinh->Location = System::Drawing::Point(303, 182);
			this->btnSinh->Name = L"btnSinh";
			this->btnSinh->Size = System::Drawing::Size(74, 63);
			this->btnSinh->TabIndex = 27;
			this->btnSinh->Text = L"Sinh";
			this->btnSinh->UseVisualStyleBackColor = false;
			this->btnSinh->Click += gcnew System::EventHandler(this, &MyForm::btnSinh_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->Controls->Add(this->rb3);
			this->panel1->Controls->Add(this->rb2);
			this->panel1->Controls->Add(this->rb1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->lblFtoK);
			this->panel1->Controls->Add(this->lblKtoC);
			this->panel1->Controls->Add(this->lblFtoC);
			this->panel1->Controls->Add(this->Swap3);
			this->panel1->Controls->Add(this->Swap2);
			this->panel1->Controls->Add(this->Swap1);
			this->panel1->Controls->Add(this->txtToConvertKF);
			this->panel1->Controls->Add(this->txtToConvertCK);
			this->panel1->Controls->Add(this->lblKtoF);
			this->panel1->Controls->Add(this->lblCtoK);
			this->panel1->Controls->Add(this->lblCtoF);
			this->panel1->Controls->Add(this->btnReset);
			this->panel1->Controls->Add(this->btnConvert);
			this->panel1->Controls->Add(this->txtConverted);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->txtToConvertCF);
			this->panel1->Location = System::Drawing::Point(620, 64);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(557, 376);
			this->panel1->TabIndex = 43;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// rb3
			// 
			this->rb3->AutoSize = true;
			this->rb3->Location = System::Drawing::Point(13, 177);
			this->rb3->Name = L"rb3";
			this->rb3->Size = System::Drawing::Size(17, 16);
			this->rb3->TabIndex = 23;
			this->rb3->TabStop = true;
			this->rb3->UseVisualStyleBackColor = true;
			// 
			// rb2
			// 
			this->rb2->AutoSize = true;
			this->rb2->Location = System::Drawing::Point(13, 128);
			this->rb2->Name = L"rb2";
			this->rb2->Size = System::Drawing::Size(17, 16);
			this->rb2->TabIndex = 22;
			this->rb2->TabStop = true;
			this->rb2->UseVisualStyleBackColor = true;
			// 
			// rb1
			// 
			this->rb1->AutoSize = true;
			this->rb1->Location = System::Drawing::Point(13, 83);
			this->rb1->Name = L"rb1";
			this->rb1->Size = System::Drawing::Size(17, 16);
			this->rb1->TabIndex = 21;
			this->rb1->TabStop = true;
			this->rb1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(86, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(335, 36);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Temperature converter";
			// 
			// lblFtoK
			// 
			this->lblFtoK->AutoSize = true;
			this->lblFtoK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFtoK->Location = System::Drawing::Point(120, 169);
			this->lblFtoK->Name = L"lblFtoK";
			this->lblFtoK->Size = System::Drawing::Size(246, 29);
			this->lblFtoK->TabIndex = 19;
			this->lblFtoK->Text = L"Fahrenheit to Kelvin";
			// 
			// lblKtoC
			// 
			this->lblKtoC->AutoSize = true;
			this->lblKtoC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblKtoC->Location = System::Drawing::Point(120, 122);
			this->lblKtoC->Name = L"lblKtoC";
			this->lblKtoC->Size = System::Drawing::Size(208, 29);
			this->lblKtoC->TabIndex = 18;
			this->lblKtoC->Text = L"Kelvin to Celsius";
			// 
			// lblFtoC
			// 
			this->lblFtoC->AutoSize = true;
			this->lblFtoC->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lblFtoC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFtoC->Location = System::Drawing::Point(120, 76);
			this->lblFtoC->Name = L"lblFtoC";
			this->lblFtoC->Size = System::Drawing::Size(261, 29);
			this->lblFtoC->TabIndex = 17;
			this->lblFtoC->Text = L"Fahrenheit to Celsius";
			// 
			// Swap3
			// 
			this->Swap3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Swap3->Location = System::Drawing::Point(44, 169);
			this->Swap3->Name = L"Swap3";
			this->Swap3->Size = System::Drawing::Size(61, 29);
			this->Swap3->TabIndex = 16;
			this->Swap3->Text = L"Swap";
			this->Swap3->UseVisualStyleBackColor = true;
			this->Swap3->Click += gcnew System::EventHandler(this, &MyForm::Swap3_Click);
			// 
			// Swap2
			// 
			this->Swap2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Swap2->Location = System::Drawing::Point(44, 122);
			this->Swap2->Name = L"Swap2";
			this->Swap2->Size = System::Drawing::Size(61, 29);
			this->Swap2->TabIndex = 15;
			this->Swap2->Text = L"Swap";
			this->Swap2->UseVisualStyleBackColor = true;
			this->Swap2->Click += gcnew System::EventHandler(this, &MyForm::Swap2_Click);
			// 
			// Swap1
			// 
			this->Swap1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Swap1->Location = System::Drawing::Point(44, 76);
			this->Swap1->Name = L"Swap1";
			this->Swap1->Size = System::Drawing::Size(61, 29);
			this->Swap1->TabIndex = 14;
			this->Swap1->Text = L"Swap";
			this->Swap1->UseVisualStyleBackColor = true;
			this->Swap1->Click += gcnew System::EventHandler(this, &MyForm::Swap1_Click);
			// 
			// txtToConvertKF
			// 
			this->txtToConvertKF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtToConvertKF->Location = System::Drawing::Point(405, 169);
			this->txtToConvertKF->Multiline = true;
			this->txtToConvertKF->Name = L"txtToConvertKF";
			this->txtToConvertKF->Size = System::Drawing::Size(139, 29);
			this->txtToConvertKF->TabIndex = 13;
			this->txtToConvertKF->TextChanged += gcnew System::EventHandler(this, &MyForm::enableConvert);
			// 
			// txtToConvertCK
			// 
			this->txtToConvertCK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtToConvertCK->Location = System::Drawing::Point(404, 122);
			this->txtToConvertCK->Multiline = true;
			this->txtToConvertCK->Name = L"txtToConvertCK";
			this->txtToConvertCK->Size = System::Drawing::Size(139, 29);
			this->txtToConvertCK->TabIndex = 12;
			this->txtToConvertCK->TextChanged += gcnew System::EventHandler(this, &MyForm::enableConvert);
			// 
			// lblKtoF
			// 
			this->lblKtoF->AutoSize = true;
			this->lblKtoF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblKtoF->Location = System::Drawing::Point(120, 169);
			this->lblKtoF->Name = L"lblKtoF";
			this->lblKtoF->Size = System::Drawing::Size(246, 29);
			this->lblKtoF->TabIndex = 11;
			this->lblKtoF->Text = L"Kelvin to Fahrenheit";
			// 
			// lblCtoK
			// 
			this->lblCtoK->AutoSize = true;
			this->lblCtoK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCtoK->Location = System::Drawing::Point(120, 122);
			this->lblCtoK->Name = L"lblCtoK";
			this->lblCtoK->Size = System::Drawing::Size(208, 29);
			this->lblCtoK->TabIndex = 10;
			this->lblCtoK->Text = L"Celsius to Kelvin";
			// 
			// lblCtoF
			// 
			this->lblCtoF->AutoSize = true;
			this->lblCtoF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCtoF->Location = System::Drawing::Point(120, 76);
			this->lblCtoF->Name = L"lblCtoF";
			this->lblCtoF->Size = System::Drawing::Size(261, 29);
			this->lblCtoF->TabIndex = 9;
			this->lblCtoF->Text = L"Celsius to Fahrenheit";
			// 
			// btnReset
			// 
			this->btnReset->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnReset->FlatAppearance->BorderSize = 0;
			this->btnReset->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnReset->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnReset->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->Location = System::Drawing::Point(329, 307);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(175, 72);
			this->btnReset->TabIndex = 8;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// btnConvert
			// 
			this->btnConvert->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnConvert->FlatAppearance->BorderSize = 0;
			this->btnConvert->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnConvert->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnConvert->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnConvert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConvert->Location = System::Drawing::Point(19, 304);
			this->btnConvert->Name = L"btnConvert";
			this->btnConvert->Size = System::Drawing::Size(175, 72);
			this->btnConvert->TabIndex = 7;
			this->btnConvert->Text = L"Convert";
			this->btnConvert->UseVisualStyleBackColor = false;
			this->btnConvert->Click += gcnew System::EventHandler(this, &MyForm::btnConvert_Click);
			// 
			// txtConverted
			// 
			this->txtConverted->BackColor = System::Drawing::SystemColors::Control;
			this->txtConverted->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtConverted->Location = System::Drawing::Point(364, 248);
			this->txtConverted->Name = L"txtConverted";
			this->txtConverted->Size = System::Drawing::Size(139, 29);
			this->txtConverted->TabIndex = 6;
			this->txtConverted->Text = L"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(8, 248);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(333, 29);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Result of converted number";
			// 
			// txtToConvertCF
			// 
			this->txtToConvertCF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtToConvertCF->Location = System::Drawing::Point(404, 76);
			this->txtToConvertCF->Multiline = true;
			this->txtToConvertCF->Name = L"txtToConvertCF";
			this->txtToConvertCF->Size = System::Drawing::Size(139, 29);
			this->txtToConvertCF->TabIndex = 4;
			this->txtToConvertCF->TextChanged += gcnew System::EventHandler(this, &MyForm::enableConvert);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(219, 247);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(67, 63);
			this->button9->TabIndex = 55;
			this->button9->Text = L"-";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(149, 247);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(67, 63);
			this->button10->TabIndex = 54;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(80, 247);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(67, 63);
			this->button11->TabIndex = 53;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(11, 247);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(67, 63);
			this->button12->TabIndex = 52;
			this->button12->Text = L"4";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(219, 182);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(67, 63);
			this->button13->TabIndex = 51;
			this->button13->Text = L"+";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(149, 182);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(67, 63);
			this->button14->TabIndex = 50;
			this->button14->Text = L"9";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->button15->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(80, 182);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(67, 63);
			this->button15->TabIndex = 49;
			this->button15->Text = L"8";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->button16->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(11, 182);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(67, 63);
			this->button16->TabIndex = 48;
			this->button16->Text = L"7";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(219, 377);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 63);
			this->button1->TabIndex = 71;
			this->button1->Text = L"/";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
			// 
			// btnEqual
			// 
			this->btnEqual->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnEqual->FlatAppearance->BorderSize = 0;
			this->btnEqual->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnEqual->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnEqual->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEqual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEqual->Location = System::Drawing::Point(149, 377);
			this->btnEqual->Name = L"btnEqual";
			this->btnEqual->Size = System::Drawing::Size(67, 63);
			this->btnEqual->TabIndex = 70;
			this->btnEqual->Text = L"=";
			this->btnEqual->UseVisualStyleBackColor = false;
			this->btnEqual->Click += gcnew System::EventHandler(this, &MyForm::btnEqual_Click);
			// 
			// btnDecimal
			// 
			this->btnDecimal->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnDecimal->FlatAppearance->BorderSize = 0;
			this->btnDecimal->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnDecimal->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnDecimal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDecimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDecimal->Location = System::Drawing::Point(80, 377);
			this->btnDecimal->Name = L"btnDecimal";
			this->btnDecimal->Size = System::Drawing::Size(67, 63);
			this->btnDecimal->TabIndex = 69;
			this->btnDecimal->Text = L".";
			this->btnDecimal->UseVisualStyleBackColor = false;
			this->btnDecimal->Click += gcnew System::EventHandler(this, &MyForm::btnDecimal_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(11, 377);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(67, 63);
			this->button4->TabIndex = 68;
			this->button4->Text = L"0";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(219, 312);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(67, 63);
			this->button5->TabIndex = 67;
			this->button5->Text = L"x";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(149, 312);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(67, 63);
			this->button6->TabIndex = 66;
			this->button6->Text = L"3";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(80, 312);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(67, 63);
			this->button7->TabIndex = 65;
			this->button7->Text = L"2";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(11, 312);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(67, 63);
			this->button8->TabIndex = 64;
			this->button8->Text = L"1";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// btnPercent
			// 
			this->btnPercent->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnPercent->FlatAppearance->BorderSize = 0;
			this->btnPercent->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnPercent->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnPercent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPercent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPercent->Location = System::Drawing::Point(531, 377);
			this->btnPercent->Name = L"btnPercent";
			this->btnPercent->Size = System::Drawing::Size(74, 63);
			this->btnPercent->TabIndex = 63;
			this->btnPercent->Text = L"%";
			this->btnPercent->UseVisualStyleBackColor = false;
			this->btnPercent->Click += gcnew System::EventHandler(this, &MyForm::btnPercent_Click);
			// 
			// btnOct
			// 
			this->btnOct->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnOct->FlatAppearance->BorderSize = 0;
			this->btnOct->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnOct->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnOct->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOct->Location = System::Drawing::Point(455, 377);
			this->btnOct->Name = L"btnOct";
			this->btnOct->Size = System::Drawing::Size(74, 63);
			this->btnOct->TabIndex = 62;
			this->btnOct->Text = L"Oct";
			this->btnOct->UseVisualStyleBackColor = false;
			this->btnOct->Click += gcnew System::EventHandler(this, &MyForm::btnOct_Click);
			// 
			// btnMod
			// 
			this->btnMod->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnMod->FlatAppearance->BorderSize = 0;
			this->btnMod->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnMod->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnMod->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMod->Location = System::Drawing::Point(379, 377);
			this->btnMod->Name = L"btnMod";
			this->btnMod->Size = System::Drawing::Size(74, 63);
			this->btnMod->TabIndex = 61;
			this->btnMod->Text = L"Mod";
			this->btnMod->UseVisualStyleBackColor = false;
			this->btnMod->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
			// 
			// btnEXP
			// 
			this->btnEXP->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnEXP->FlatAppearance->BorderSize = 0;
			this->btnEXP->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnEXP->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnEXP->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEXP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEXP->Location = System::Drawing::Point(303, 377);
			this->btnEXP->Name = L"btnEXP";
			this->btnEXP->Size = System::Drawing::Size(74, 63);
			this->btnEXP->TabIndex = 60;
			this->btnEXP->Text = L"EXP";
			this->btnEXP->UseVisualStyleBackColor = false;
			this->btnEXP->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
			// 
			// btnLn
			// 
			this->btnLn->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnLn->FlatAppearance->BorderSize = 0;
			this->btnLn->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnLn->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnLn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLn->Location = System::Drawing::Point(531, 312);
			this->btnLn->Name = L"btnLn";
			this->btnLn->Size = System::Drawing::Size(74, 63);
			this->btnLn->TabIndex = 59;
			this->btnLn->Text = L"ln x";
			this->btnLn->UseVisualStyleBackColor = false;
			this->btnLn->Click += gcnew System::EventHandler(this, &MyForm::btnLn_Click);
			// 
			// btnHex
			// 
			this->btnHex->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnHex->FlatAppearance->BorderSize = 0;
			this->btnHex->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnHex->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnHex->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnHex->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnHex->Location = System::Drawing::Point(455, 312);
			this->btnHex->Name = L"btnHex";
			this->btnHex->Size = System::Drawing::Size(74, 63);
			this->btnHex->TabIndex = 58;
			this->btnHex->Text = L"Hex";
			this->btnHex->UseVisualStyleBackColor = false;
			this->btnHex->Click += gcnew System::EventHandler(this, &MyForm::btnHex_Click);
			// 
			// btnTan
			// 
			this->btnTan->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnTan->FlatAppearance->BorderSize = 0;
			this->btnTan->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnTan->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnTan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTan->Location = System::Drawing::Point(379, 312);
			this->btnTan->Name = L"btnTan";
			this->btnTan->Size = System::Drawing::Size(74, 63);
			this->btnTan->TabIndex = 57;
			this->btnTan->Text = L"Tan";
			this->btnTan->UseVisualStyleBackColor = false;
			this->btnTan->Click += gcnew System::EventHandler(this, &MyForm::btnTan_Click);
			// 
			// btnTanh
			// 
			this->btnTanh->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnTanh->FlatAppearance->BorderSize = 0;
			this->btnTanh->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnTanh->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnTanh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTanh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTanh->Location = System::Drawing::Point(303, 312);
			this->btnTanh->Name = L"btnTanh";
			this->btnTanh->Size = System::Drawing::Size(74, 63);
			this->btnTanh->TabIndex = 56;
			this->btnTanh->Text = L"Tanh";
			this->btnTanh->UseVisualStyleBackColor = false;
			this->btnTanh->Click += gcnew System::EventHandler(this, &MyForm::btnTanh_Click);
			// 
			// btnParanthesisClose
			// 
			this->btnParanthesisClose->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnParanthesisClose->FlatAppearance->BorderSize = 0;
			this->btnParanthesisClose->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnParanthesisClose->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnParanthesisClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnParanthesisClose->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnParanthesisClose->Location = System::Drawing::Point(149, 117);
			this->btnParanthesisClose->Name = L"btnParanthesisClose";
			this->btnParanthesisClose->Size = System::Drawing::Size(67, 63);
			this->btnParanthesisClose->TabIndex = 79;
			this->btnParanthesisClose->Text = L")";
			this->btnParanthesisClose->UseVisualStyleBackColor = false;
			this->btnParanthesisClose->Click += gcnew System::EventHandler(this, &MyForm::btnParanthesisClose_Click);
			// 
			// btnC
			// 
			this->btnC->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnC->FlatAppearance->BorderSize = 0;
			this->btnC->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnC->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC->Location = System::Drawing::Point(219, 117);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(67, 63);
			this->btnC->TabIndex = 78;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = false;
			this->btnC->Click += gcnew System::EventHandler(this, &MyForm::btnC_Click);
			// 
			// btnParanthesisOpen
			// 
			this->btnParanthesisOpen->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnParanthesisOpen->FlatAppearance->BorderSize = 0;
			this->btnParanthesisOpen->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnParanthesisOpen->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnParanthesisOpen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnParanthesisOpen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnParanthesisOpen->Location = System::Drawing::Point(80, 117);
			this->btnParanthesisOpen->Name = L"btnParanthesisOpen";
			this->btnParanthesisOpen->Size = System::Drawing::Size(67, 63);
			this->btnParanthesisOpen->TabIndex = 77;
			this->btnParanthesisOpen->Text = L"(";
			this->btnParanthesisOpen->UseVisualStyleBackColor = false;
			this->btnParanthesisOpen->Click += gcnew System::EventHandler(this, &MyForm::btnParanthesisOpen_Click);
			// 
			// btnRemove
			// 
			this->btnRemove->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnRemove->FlatAppearance->BorderSize = 0;
			this->btnRemove->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnRemove->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnRemove->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRemove->Font = (gcnew System::Drawing::Font(L"Wingdings", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnRemove->Location = System::Drawing::Point(11, 117);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(67, 63);
			this->btnRemove->TabIndex = 76;
			this->btnRemove->Text = L"Õ";
			this->btnRemove->UseVisualStyleBackColor = false;
			this->btnRemove->Click += gcnew System::EventHandler(this, &MyForm::btnRemove_Click);
			// 
			// btnX2
			// 
			this->btnX2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnX2->FlatAppearance->BorderSize = 0;
			this->btnX2->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnX2->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnX2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnX2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnX2->Location = System::Drawing::Point(531, 117);
			this->btnX2->Name = L"btnX2";
			this->btnX2->Size = System::Drawing::Size(74, 63);
			this->btnX2->TabIndex = 75;
			this->btnX2->Text = L"x^2";
			this->btnX2->UseVisualStyleBackColor = false;
			this->btnX2->Click += gcnew System::EventHandler(this, &MyForm::btnX2_Click);
			// 
			// btnX3
			// 
			this->btnX3->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnX3->FlatAppearance->BorderSize = 0;
			this->btnX3->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnX3->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnX3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnX3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnX3->Location = System::Drawing::Point(531, 182);
			this->btnX3->Name = L"btnX3";
			this->btnX3->Size = System::Drawing::Size(74, 63);
			this->btnX3->TabIndex = 74;
			this->btnX3->Text = L"x^3";
			this->btnX3->UseVisualStyleBackColor = false;
			this->btnX3->Click += gcnew System::EventHandler(this, &MyForm::btnX3_Click);
			// 
			// btnSupra
			// 
			this->btnSupra->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnSupra->FlatAppearance->BorderSize = 0;
			this->btnSupra->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnSupra->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnSupra->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSupra->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSupra->Location = System::Drawing::Point(531, 247);
			this->btnSupra->Name = L"btnSupra";
			this->btnSupra->Size = System::Drawing::Size(74, 63);
			this->btnSupra->TabIndex = 73;
			this->btnSupra->Text = L"1/x";
			this->btnSupra->UseVisualStyleBackColor = false;
			this->btnSupra->Click += gcnew System::EventHandler(this, &MyForm::btnSupra_Click);
			// 
			// btnPi
			// 
			this->btnPi->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnPi->FlatAppearance->BorderSize = 0;
			this->btnPi->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnPi->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->btnPi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPi->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPi->Location = System::Drawing::Point(303, 117);
			this->btnPi->Name = L"btnPi";
			this->btnPi->Size = System::Drawing::Size(74, 63);
			this->btnPi->TabIndex = 72;
			this->btnPi->Text = L"π";
			this->btnPi->UseVisualStyleBackColor = false;
			this->btnPi->Click += gcnew System::EventHandler(this, &MyForm::btnPi_Click);
			// 
			// lblShowOp
			// 
			this->lblShowOp->AutoSize = true;
			this->lblShowOp->BackColor = System::Drawing::Color::White;
			this->lblShowOp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblShowOp->ForeColor = System::Drawing::Color::DarkGray;
			this->lblShowOp->Location = System::Drawing::Point(15, 67);
			this->lblShowOp->Name = L"lblShowOp";
			this->lblShowOp->Size = System::Drawing::Size(0, 17);
			this->lblShowOp->TabIndex = 80;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(12, 466);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(277, 132);
			this->listBox1->TabIndex = 81;
			// 
			// UpperBar
			// 
			this->UpperBar->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->UpperBar->Controls->Add(this->btnExitCalc);
			this->UpperBar->Controls->Add(this->label3);
			this->UpperBar->Location = System::Drawing::Point(-6, 0);
			this->UpperBar->Name = L"UpperBar";
			this->UpperBar->Size = System::Drawing::Size(1199, 34);
			this->UpperBar->TabIndex = 82;
			// 
			// btnExitCalc
			// 
			this->btnExitCalc->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->btnExitCalc->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExitCalc->FlatAppearance->BorderSize = 0;
			this->btnExitCalc->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::WindowFrame;
			this->btnExitCalc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExitCalc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExitCalc->ForeColor = System::Drawing::Color::Silver;
			this->btnExitCalc->Location = System::Drawing::Point(266, -1);
			this->btnExitCalc->Name = L"btnExitCalc";
			this->btnExitCalc->Size = System::Drawing::Size(38, 37);
			this->btnExitCalc->TabIndex = 83;
			this->btnExitCalc->Text = L"X";
			this->btnExitCalc->UseVisualStyleBackColor = false;
			this->btnExitCalc->Click += gcnew System::EventHandler(this, &MyForm::btnExitCalc_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Silver;
			this->label3->Location = System::Drawing::Point(19, 7);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 20);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Calculator";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1189, 460);
			this->Controls->Add(this->UpperBar);
			this->Controls->Add(this->btnX2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->lblShowOp);
			this->Controls->Add(this->btnParanthesisClose);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnParanthesisOpen);
			this->Controls->Add(this->btnRemove);
			this->Controls->Add(this->btnX3);
			this->Controls->Add(this->btnSupra);
			this->Controls->Add(this->btnPi);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnEqual);
			this->Controls->Add(this->btnDecimal);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->btnPercent);
			this->Controls->Add(this->btnOct);
			this->Controls->Add(this->btnMod);
			this->Controls->Add(this->btnEXP);
			this->Controls->Add(this->btnLn);
			this->Controls->Add(this->btnHex);
			this->Controls->Add(this->btnTan);
			this->Controls->Add(this->btnTanh);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btnLog);
			this->Controls->Add(this->btnBin);
			this->Controls->Add(this->btnCos);
			this->Controls->Add(this->btnCosh);
			this->Controls->Add(this->btnSqrt);
			this->Controls->Add(this->btnDec);
			this->Controls->Add(this->btnSin);
			this->Controls->Add(this->btnSinh);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->UpperBar->ResumeLayout(false);
			this->UpperBar->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool historyActive = true, paranthesisOpen = true;
		double iFirstnum, iSecondnum;
		String^ iOperator;
		char iOperation;
		int last = 0;
		Engine *Calc = new Engine();

private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
{
		MyForm::Width = 223;
		MyForm::Height = 368;
		lblFtoC->Visible = false;
		lblFtoK->Visible = false;
		lblKtoC->Visible = false;
		txtDisplay->Width = 206;
		txtDisplay->Text = "0";
		btnExitCalc->Location = System::Drawing::Point(198, -1);
}
private: System::Void scientificToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm::Width = 465;
	txtDisplay->Width = 445;
	btnExitCalc->Location = System::Drawing::Point(441, -1);
}
private: System::Void temperatureToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	MyForm::Width = 885;
	txtDisplay->Width = 445;
	btnExitCalc->Location = System::Drawing::Point(860, -1);
}
private: System::Void standardToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	MyForm::Width = 223;
	txtDisplay->Width = 207;
	btnExitCalc->Location = System::Drawing::Point(198, -1);
	
}
private: System::Void button_Click(System::Object^  sender, System::EventArgs^  e)
{
	//Button numbers
	Button^ Numbers = safe_cast<Button^>(sender);
	if ( txtDisplay->Text=="0" || last==1 )
	{
		txtDisplay->Text = Numbers->Text;
		last = 0;
	}
	else
	{
		txtDisplay->Text += Numbers->Text;
	}

}
private: System::Void btnParanthesisOpen_Click(System::Object^ sender, System::EventArgs^ e)
{
	txtDisplay->Text += "(";
}
private: System::Void btnC_Click(System::Object^  sender, System::EventArgs^  e)
{
	txtDisplay->Text = "0";
	lblShowOp->Text = "";
}
private: System::Void btnDecimal_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (!txtDisplay->Text->Contains("."))
	{
		txtDisplay->Text += ".";
	}
}
private: System::Void Arithmetic_Op(System::Object^  sender, System::EventArgs^  e) 
{
	Button^ op = safe_cast<Button^>(sender);
	iFirstnum = Double::Parse(txtDisplay->Text);
	iOperator = op->Text;
	lblShowOp->Text = System::Convert::ToString(iFirstnum) +" "+iOperator;
	last = 1;
}
private: System::Void btnParanthesisClose_Click(System::Object^  sender, System::EventArgs^  e)
{
	txtDisplay->Text += ")";
}
private: System::Void btnEqual_Click(System::Object^  sender, System::EventArgs^  e)
	{
		iSecondnum = System::Convert::ToDouble(txtDisplay->Text);
		if (iOperator == "+")
		{
			txtDisplay->Text = Calc->add(iFirstnum, iSecondnum);
		}
		else if (iOperator == "-")
		{
			txtDisplay->Text = Calc->subtract(iFirstnum, iSecondnum);
		}
		else if (iOperator == "x")
		{
			txtDisplay->Text = Calc->multiply(iFirstnum, iSecondnum);
		}
		else if (iOperator == "/")
		{
			txtDisplay->Text = Calc->divide(iFirstnum, iSecondnum);
		}
		else if (iOperator == "Mod")
		{
			int iFirst, iSecond;
			iFirst = System::Convert::ToInt32(iFirstnum);
			iSecond = System::Convert::ToInt32(iSecondnum);
			txtDisplay->Text = Calc->modulo(iFirst, iSecond);
		}
		else if (iOperator == "EXP")
		{
			txtDisplay->Text = Calc->EXP(iFirstnum, iSecondnum);
		}
		listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text + " " + iSecondnum + " = " + txtDisplay->Text));
		lblShowOp->Text = "";
	}
private: System::Void historyToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (historyActive == true )
	{
		historyToolStripMenuItem1->Checked = true;
		listBox1->Visible = true;
		MyForm::Height = 500;
		historyActive = false;
	}
	else
	{
		historyToolStripMenuItem1->Checked = false;
		listBox1->Visible = false;
		MyForm::Height = 368;
		historyActive = true;
	}
	 
	
}
private: System::Void btnRemove_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (txtDisplay->Text->Length > 0)
	{
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	}
	if (txtDisplay->Text->Length == 0)
	{
		txtDisplay->Text = "0";
	}
}
private: System::Void btnPi_Click(System::Object^  sender, System::EventArgs^  e) 
{
	txtDisplay->Text = "3.14159265359";
}
private: System::Void btnLog_Click(System::Object^  sender, System::EventArgs^  e) 
{
	lblShowOp->Text = System::Convert::ToString("log " + "(" + txtDisplay->Text + ")");
	listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
	txtDisplay->Text = Calc->Log(txtDisplay->Text);
}
private: System::Void btnSqrt_Click(System::Object^  sender, System::EventArgs^  e) 
{
	lblShowOp->Text = "Sqrt(" + txtDisplay->Text + ")";
	txtDisplay->Text = Calc->Sqrt(txtDisplay->Text);
	listBox1->Items->Add(lblShowOp->Text + " = " + txtDisplay->Text);
}
private: System::Void btnSinh_Click(System::Object^  sender, System::EventArgs^  e)
{
	lblShowOp->Text = System::Convert::ToString("sinh " + "(" + txtDisplay->Text + ")");
	txtDisplay->Text = Calc->Sinh(txtDisplay->Text);
	listBox1->Items->Add(lblShowOp->Text);
}
private: System::Void btnSin_Click(System::Object^  sender, System::EventArgs^  e) 
{
	lblShowOp->Text = System::Convert::ToString("sin " + "(" + txtDisplay->Text + ")");
	txtDisplay->Text = Calc->Sin(txtDisplay->Text);
	listBox1->Items->Add(lblShowOp->Text);
}
private: System::Void btnCosh_Click(System::Object^  sender, System::EventArgs^  e) 
{
	lblShowOp->Text = System::Convert::ToString("cosh " + "(" + txtDisplay->Text + ")");
	txtDisplay->Text = Calc->Cosh(txtDisplay->Text);
	listBox1->Items->Add(lblShowOp->Text);
	lblShowOp->Text = "";
}
private: System::Void btnCos_Click(System::Object^  sender, System::EventArgs^  e) 
{
	lblShowOp->Text = System::Convert::ToString("cos " + "(" + txtDisplay->Text + ")");
	txtDisplay->Text = Calc->Cos(txtDisplay->Text);
	listBox1->Items->Add(lblShowOp->Text);
}
private: System::Void btnTanh_Click(System::Object^  sender, System::EventArgs^  e) 
{
	lblShowOp->Text = System::Convert::ToString("tanh " + "(" + txtDisplay->Text + ")");
	txtDisplay->Text = Calc->Tanh(txtDisplay->Text);
	listBox1->Items->Add(lblShowOp->Text);
}
private: System::Void btnTan_Click(System::Object^  sender, System::EventArgs^  e)
{
	lblShowOp->Text = System::Convert::ToString("tan " + "(" + txtDisplay->Text + ")");
	txtDisplay->Text = Calc->Tan(txtDisplay->Text);
	listBox1->Items->Add(lblShowOp->Text);
}
private: System::Void btnDec_Click(System::Object^  sender, System::EventArgs^  e) 
{
	txtDisplay->Text = Calc->Dec(txtDisplay->Text);
	listBox1->Items->Add(System::Convert::ToString(txtDisplay->Text));
}
private: System::Void btnBin_Click(System::Object^  sender, System::EventArgs^  e) 
{
	txtDisplay->Text = Calc->Bin(txtDisplay->Text);
	lblShowOp->Text = "";
}
private: System::Void btnHex_Click(System::Object^  sender, System::EventArgs^  e) 
{
	txtDisplay->Text = Calc->Hex(txtDisplay->Text);
	lblShowOp->Text = "";
}
private: System::Void btnOct_Click(System::Object^  sender, System::EventArgs^  e) 
{
	txtDisplay->Text = Calc->Oct(txtDisplay->Text);
	lblShowOp->Text = "";
}
private: System::Void btnX2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	txtDisplay->Text = Calc->x2(txtDisplay->Text);
}
private: System::Void btnX3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	txtDisplay->Text = Calc->x3(txtDisplay->Text);
}
private: System::Void btnSupra_Click(System::Object^  sender, System::EventArgs^  e) 
{
	txtDisplay->Text = Calc->Supra(txtDisplay->Text);
}
private: System::Void btnLn_Click(System::Object^  sender, System::EventArgs^  e) 
{
	txtDisplay->Text = Calc->Ln(txtDisplay->Text);
}
private: System::Void btnPercent_Click(System::Object^  sender, System::EventArgs^  e) 
{
	txtDisplay->Text = Calc->Percent(txtDisplay->Text);
}
private: System::Void btnConvert_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (rb1->Checked == true)
	{
		if (lblCtoF->Visible == true)
			txtConverted->Text = Calc->CelsiusToFahrenheit(txtToConvertCF->Text);
		else
			txtConverted->Text = Calc->FahrenheitToCelsius(txtToConvertCF->Text);
	}
	else if (rb2->Checked == true)
	{
		if (lblCtoK->Visible == true)
			txtConverted->Text = Calc->CelsiusToKelvin(txtToConvertCK->Text);
		else
			txtConverted->Text = Calc->KelvinToCelsius(txtToConvertCK->Text);
	}
	else if (rb3->Checked == true)
		if (lblFtoK->Visible == true)
			txtConverted->Text = Calc->FahrenheitToKelvin(txtToConvertKF->Text);
		else
			txtConverted->Text = Calc->KelvinToFahrenheit(txtToConvertKF->Text);
}
private: System::Void btnReset_Click(System::Object^  sender, System::EventArgs^  e) 
{
	txtToConvertCK->Text = "";
	txtToConvertCF->Text = "";
	txtToConvertKF->Text = "";
	txtConverted->Text = "";
	rb1->Checked = false;
	rb2->Checked = false;
	rb3->Checked = false;
	btnConvert->Enabled = false;
}
private: System::Void Swap1_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (lblFtoC->Visible == true)
	{
		lblFtoC->Visible = false;
		lblCtoF->Visible = true;
	}
	else
	{
		lblFtoC->Visible = true;
		lblCtoF->Visible = false;
	}
}
private: System::Void Swap2_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (lblKtoC->Visible == true)
	{
		lblKtoC->Visible = false;
		lblCtoK->Visible = true;
	}
	else
	{
		lblKtoC->Visible = true;
		lblCtoK->Visible = false;
	}
}
private: System::Void Swap3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (lblFtoK->Visible == true)
	{
		lblFtoK->Visible = false;
		lblKtoF->Visible = true;
	}
	else
	{
		lblFtoK->Visible = true;
		lblKtoF->Visible = false;
	}
}
private: System::Void btnExitCalc_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->Hide();
	Menu->Show();
	
}
private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	MessageBox::Show("This is a useful calculator for windows.", "Calculator", MessageBoxButtons::OK, MessageBoxIcon::Information);
	
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) 
{
	if(txtToConvertCF->Text=="" && txtToConvertCK->Text=="" && txtToConvertKF->Text=="")
	btnConvert->Enabled = false;
}
private: System::Void enableConvert(System::Object^  sender, System::EventArgs^  e) 
{
	if ((rb1->Checked == true && txtToConvertCF->Text != "") || (rb2->Checked == true && txtToConvertCK->Text != "") || (rb3->Checked == true && txtToConvertKF->Text != ""))
	{
		btnConvert->Enabled = true;
	}
}
private: System::Void clearHistoryToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	listBox1->Items->Clear();
}
};
}
