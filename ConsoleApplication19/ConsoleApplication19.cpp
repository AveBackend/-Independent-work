#include "pch.h"
#include "Form1.h"
using namespace System;

int main(array<System::String ^> ^args)
{
    array<String^>^ f = { "�����1", "�����2" };
    ConsoleApplication19::Application::Run(
        gcnew ConsoleApplication19::Form1(f)
    );
}
