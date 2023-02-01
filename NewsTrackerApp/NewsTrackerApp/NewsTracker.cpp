#include "NewsTracker.h"

using namespace NewsTrackerApp;
using namespace System;
using namespace System::Windows::Forms;

//array<String^>^ args

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew NewsTrackerApp::NewsTracker);
}