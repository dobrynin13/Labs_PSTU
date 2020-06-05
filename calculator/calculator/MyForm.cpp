#include "MyForm.h"
#include<cmath>
using namespace calculator;
using namespace calculator::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    calculator::MyForm form; //WinFormsTest - имя вашего проекта
    Application::Run(% form);
}
