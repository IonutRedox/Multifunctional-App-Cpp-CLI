#include "MenuForm.h"
#include "MyCalc.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Scientific_Calculator::MenuForm Menu;
	Application::Run(%Menu);
}
