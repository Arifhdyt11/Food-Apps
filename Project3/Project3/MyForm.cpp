#include "MyForm.h"

using namespace System;

[STAThreadAttribute]

int main()
{
	Windows::Forms::Application::Run(gcnew Project3::MyForm());
	return 0;

}
