#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main() { //removed array<String^>^ args
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Windowsform07062021::MyForm form;
	Application::Run(% form);
}

