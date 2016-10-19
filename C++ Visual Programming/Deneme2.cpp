#include "Deneme2.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CGörselProgramlama::Deneme2 form;
	Application::Run(%form);
}

