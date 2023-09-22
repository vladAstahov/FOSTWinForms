#include "MyForm.h"

using namespace lab1FOST;

int main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    lab1FOST::MyForm form;
    Application::Run(% form);
}