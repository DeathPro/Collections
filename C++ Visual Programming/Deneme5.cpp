#include "Deneme5.h"

using namespace System;
using namespace System::Windows::Forms::Design;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CGörselProgramlama::Deneme5 form;

	Application::Run(%form);
}

