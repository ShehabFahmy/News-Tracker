#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <msclr/marshal_cppstd.h>
using namespace std;
bool admin;
int Lastbt;
namespace NewsTrackerApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for NewsTracker
	/// </summary>
	public ref class NewsTracker : public System::Windows::Forms::Form
	{
	public:
		NewsTracker(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NewsTracker()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ bt_login;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ pn_register;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ bt_register;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ pn_login;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ pn_login_interface;

	private: System::Windows::Forms::Label^ V1;
	private: System::Windows::Forms::Panel^ pn_home;


	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Timer^ login_timer;

	private: System::Windows::Forms::Label^ lb_categories;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ addToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ categoryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ artToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sportToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ finanaceToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ myToolStripMenuItem;

	private: System::Windows::Forms::Button^ bt_logout;
	private: System::Windows::Forms::Label^ lb_user;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ bt_politics;
	private: System::Windows::Forms::Button^ bt_business;
	private: System::Windows::Forms::Button^ bt_health;






	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;


























	private: System::Windows::Forms::Button^ bt_save;
	private: System::Windows::Forms::ToolStripMenuItem^ entertainmentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ styleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ travelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sportsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem6;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem7;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem8;
	private: System::Windows::Forms::Button^ bt_entertainment;
	private: System::Windows::Forms::Button^ bt_style;
	private: System::Windows::Forms::Button^ bt_travel;
	private: System::Windows::Forms::Button^ bt_sports;














	private: System::ComponentModel::IContainer^ components;









	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->bt_login = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pn_register = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->bt_register = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pn_login = (gcnew System::Windows::Forms::Panel());
			this->pn_login_interface = (gcnew System::Windows::Forms::Panel());
			this->V1 = (gcnew System::Windows::Forms::Label());
			this->pn_home = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->addToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->categoryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->artToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->finanaceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->entertainmentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->styleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->travelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sportsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->myToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem8 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->bt_save = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->bt_politics = (gcnew System::Windows::Forms::Button());
			this->bt_business = (gcnew System::Windows::Forms::Button());
			this->bt_health = (gcnew System::Windows::Forms::Button());
			this->bt_entertainment = (gcnew System::Windows::Forms::Button());
			this->bt_style = (gcnew System::Windows::Forms::Button());
			this->bt_travel = (gcnew System::Windows::Forms::Button());
			this->bt_sports = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->lb_user = (gcnew System::Windows::Forms::Label());
			this->bt_logout = (gcnew System::Windows::Forms::Button());
			this->lb_categories = (gcnew System::Windows::Forms::Label());
			this->login_timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->pn_register->SuspendLayout();
			this->pn_login->SuspendLayout();
			this->pn_login_interface->SuspendLayout();
			this->pn_home->SuspendLayout();
			this->panel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Teal;
			this->label1->Location = System::Drawing::Point(215, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 52);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome!";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Teal;
			this->label3->Location = System::Drawing::Point(245, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 52);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Login";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Teal;
			this->label4->Location = System::Drawing::Point(130, 190);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 29);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Password:";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Teal;
			this->label5->Location = System::Drawing::Point(130, 141);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 27);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Username:";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox1->Location = System::Drawing::Point(259, 148);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(196, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &NewsTracker::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox2->Location = System::Drawing::Point(259, 197);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(196, 20);
			this->textBox2->TabIndex = 6;
			// 
			// bt_login
			// 
			this->bt_login->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->bt_login->Location = System::Drawing::Point(319, 240);
			this->bt_login->Name = L"bt_login";
			this->bt_login->Size = System::Drawing::Size(75, 23);
			this->bt_login->TabIndex = 7;
			this->bt_login->Text = L"Sign in";
			this->bt_login->UseVisualStyleBackColor = true;
			this->bt_login->Click += gcnew System::EventHandler(this, &NewsTracker::bt_login_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(135, 275);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(154, 29);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Haven\'t registered yet\?";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NewsTracker::button1_Click);
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::LimeGreen;
			this->label6->Location = System::Drawing::Point(132, 120);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(320, 21);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Successful Login!";
			this->label6->Visible = false;
			this->label6->Click += gcnew System::EventHandler(this, &NewsTracker::label6_Click);
			// 
			// pn_register
			// 
			this->pn_register->Controls->Add(this->label11);
			this->pn_register->Controls->Add(this->label8);
			this->pn_register->Controls->Add(this->label7);
			this->pn_register->Controls->Add(this->textBox3);
			this->pn_register->Controls->Add(this->textBox4);
			this->pn_register->Controls->Add(this->textBox5);
			this->pn_register->Controls->Add(this->bt_register);
			this->pn_register->Controls->Add(this->label9);
			this->pn_register->Controls->Add(this->label10);
			this->pn_register->Dock = System::Windows::Forms::DockStyle::Top;
			this->pn_register->Location = System::Drawing::Point(0, 315);
			this->pn_register->Name = L"pn_register";
			this->pn_register->Size = System::Drawing::Size(584, 234);
			this->pn_register->TabIndex = 10;
			this->pn_register->Visible = false;
			this->pn_register->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &NewsTracker::pn_register_Paint);
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::LimeGreen;
			this->label11->Location = System::Drawing::Point(90, 38);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(320, 21);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Successful Registration!";
			this->label11->Visible = false;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Teal;
			this->label8->Location = System::Drawing::Point(88, 118);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(214, 29);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Confirm Password:";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Teal;
			this->label7->Location = System::Drawing::Point(237, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(111, 39);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Register";
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox3->Location = System::Drawing::Point(305, 62);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(196, 20);
			this->textBox3->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox4->Location = System::Drawing::Point(305, 93);
			this->textBox4->Name = L"textBox4";
			this->textBox4->PasswordChar = '*';
			this->textBox4->Size = System::Drawing::Size(196, 20);
			this->textBox4->TabIndex = 14;
			// 
			// textBox5
			// 
			this->textBox5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox5->Location = System::Drawing::Point(305, 124);
			this->textBox5->Name = L"textBox5";
			this->textBox5->PasswordChar = '*';
			this->textBox5->Size = System::Drawing::Size(196, 20);
			this->textBox5->TabIndex = 15;
			// 
			// bt_register
			// 
			this->bt_register->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->bt_register->Location = System::Drawing::Point(363, 162);
			this->bt_register->Name = L"bt_register";
			this->bt_register->Size = System::Drawing::Size(75, 23);
			this->bt_register->TabIndex = 16;
			this->bt_register->Text = L"Sign up";
			this->bt_register->UseVisualStyleBackColor = true;
			this->bt_register->Click += gcnew System::EventHandler(this, &NewsTracker::bt_register_Click);
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Teal;
			this->label9->Location = System::Drawing::Point(87, 55);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(207, 27);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Username:";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Teal;
			this->label10->Location = System::Drawing::Point(88, 86);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(200, 29);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Password:";
			// 
			// pn_login
			// 
			this->pn_login->Controls->Add(this->label1);
			this->pn_login->Controls->Add(this->label6);
			this->pn_login->Controls->Add(this->button1);
			this->pn_login->Controls->Add(this->bt_login);
			this->pn_login->Controls->Add(this->textBox2);
			this->pn_login->Controls->Add(this->textBox1);
			this->pn_login->Controls->Add(this->label5);
			this->pn_login->Controls->Add(this->label4);
			this->pn_login->Controls->Add(this->label3);
			this->pn_login->Dock = System::Windows::Forms::DockStyle::Top;
			this->pn_login->Location = System::Drawing::Point(0, 0);
			this->pn_login->Name = L"pn_login";
			this->pn_login->Size = System::Drawing::Size(584, 315);
			this->pn_login->TabIndex = 11;
			// 
			// pn_login_interface
			// 
			this->pn_login_interface->Controls->Add(this->V1);
			this->pn_login_interface->Controls->Add(this->pn_register);
			this->pn_login_interface->Controls->Add(this->pn_login);
			this->pn_login_interface->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_login_interface->Location = System::Drawing::Point(0, 0);
			this->pn_login_interface->Name = L"pn_login_interface";
			this->pn_login_interface->Size = System::Drawing::Size(584, 561);
			this->pn_login_interface->TabIndex = 12;
			// 
			// V1
			// 
			this->V1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->V1->AutoSize = true;
			this->V1->ForeColor = System::Drawing::Color::Black;
			this->V1->Location = System::Drawing::Point(555, 547);
			this->V1->Margin = System::Windows::Forms::Padding(3);
			this->V1->Name = L"V1";
			this->V1->Size = System::Drawing::Size(29, 13);
			this->V1->TabIndex = 0;
			this->V1->Text = L"V1.0";
			// 
			// pn_home
			// 
			this->pn_home->Controls->Add(this->panel1);
			this->pn_home->Controls->Add(this->menuStrip1);
			this->pn_home->Controls->Add(this->panel2);
			this->pn_home->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_home->Location = System::Drawing::Point(0, 0);
			this->pn_home->Name = L"pn_home";
			this->pn_home->Size = System::Drawing::Size(584, 561);
			this->pn_home->TabIndex = 14;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->richTextBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(400, 537);
			this->panel1->TabIndex = 1;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Enabled = false;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(400, 537);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->addToolStripMenuItem,
					this->myToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(400, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// addToolStripMenuItem
			// 
			this->addToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->categoryToolStripMenuItem });
			this->addToolStripMenuItem->ForeColor = System::Drawing::Color::Blue;
			this->addToolStripMenuItem->Name = L"addToolStripMenuItem";
			this->addToolStripMenuItem->Size = System::Drawing::Size(41, 20);
			this->addToolStripMenuItem->Text = L"Add";
			this->addToolStripMenuItem->Click += gcnew System::EventHandler(this, &NewsTracker::addToolStripMenuItem_Click);
			// 
			// categoryToolStripMenuItem
			// 
			this->categoryToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->artToolStripMenuItem,
					this->sportToolStripMenuItem, this->finanaceToolStripMenuItem, this->entertainmentToolStripMenuItem, this->styleToolStripMenuItem,
					this->travelToolStripMenuItem, this->sportsToolStripMenuItem
			});
			this->categoryToolStripMenuItem->Name = L"categoryToolStripMenuItem";
			this->categoryToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->categoryToolStripMenuItem->Text = L"Category";
			// 
			// artToolStripMenuItem
			// 
			this->artToolStripMenuItem->Name = L"artToolStripMenuItem";
			this->artToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->artToolStripMenuItem->Text = L"Politics";
			this->artToolStripMenuItem->Click += gcnew System::EventHandler(this, &NewsTracker::artToolStripMenuItem_Click);
			// 
			// sportToolStripMenuItem
			// 
			this->sportToolStripMenuItem->Name = L"sportToolStripMenuItem";
			this->sportToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->sportToolStripMenuItem->Text = L"Business";
			this->sportToolStripMenuItem->Click += gcnew System::EventHandler(this, &NewsTracker::sportToolStripMenuItem_Click);
			// 
			// finanaceToolStripMenuItem
			// 
			this->finanaceToolStripMenuItem->Name = L"finanaceToolStripMenuItem";
			this->finanaceToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->finanaceToolStripMenuItem->Text = L"Health";
			this->finanaceToolStripMenuItem->Click += gcnew System::EventHandler(this, &NewsTracker::finanaceToolStripMenuItem_Click);
			// 
			// entertainmentToolStripMenuItem
			// 
			this->entertainmentToolStripMenuItem->Name = L"entertainmentToolStripMenuItem";
			this->entertainmentToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->entertainmentToolStripMenuItem->Text = L"Entertainment";
			this->entertainmentToolStripMenuItem->Click += gcnew System::EventHandler(this, &NewsTracker::entertainmentToolStripMenuItem_Click);
			// 
			// styleToolStripMenuItem
			// 
			this->styleToolStripMenuItem->Name = L"styleToolStripMenuItem";
			this->styleToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->styleToolStripMenuItem->Text = L"Style";
			this->styleToolStripMenuItem->Click += gcnew System::EventHandler(this, &NewsTracker::styleToolStripMenuItem_Click);
			// 
			// travelToolStripMenuItem
			// 
			this->travelToolStripMenuItem->Name = L"travelToolStripMenuItem";
			this->travelToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->travelToolStripMenuItem->Text = L"Travel";
			this->travelToolStripMenuItem->Click += gcnew System::EventHandler(this, &NewsTracker::travelToolStripMenuItem_Click);
			// 
			// sportsToolStripMenuItem
			// 
			this->sportsToolStripMenuItem->Name = L"sportsToolStripMenuItem";
			this->sportsToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->sportsToolStripMenuItem->Text = L"Sports";
			this->sportsToolStripMenuItem->Click += gcnew System::EventHandler(this, &NewsTracker::sportsToolStripMenuItem_Click);
			// 
			// myToolStripMenuItem
			// 
			this->myToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripMenuItem1 });
			this->myToolStripMenuItem->ForeColor = System::Drawing::Color::Blue;
			this->myToolStripMenuItem->Name = L"myToolStripMenuItem";
			this->myToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->myToolStripMenuItem->Text = L"Remove";
			this->myToolStripMenuItem->Click += gcnew System::EventHandler(this, &NewsTracker::myToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->toolStripMenuItem2,
					this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5, this->toolStripMenuItem6, this->toolStripMenuItem7,
					this->toolStripMenuItem8
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(122, 22);
			this->toolStripMenuItem1->Text = L"Category";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(149, 22);
			this->toolStripMenuItem2->Text = L"Politics";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &NewsTracker::toolStripMenuItem2_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(149, 22);
			this->toolStripMenuItem3->Text = L"Business";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &NewsTracker::toolStripMenuItem3_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(149, 22);
			this->toolStripMenuItem4->Text = L"Health";
			this->toolStripMenuItem4->Click += gcnew System::EventHandler(this, &NewsTracker::toolStripMenuItem4_Click);
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(149, 22);
			this->toolStripMenuItem5->Text = L"Entertainment";
			this->toolStripMenuItem5->Click += gcnew System::EventHandler(this, &NewsTracker::toolStripMenuItem5_Click);
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(149, 22);
			this->toolStripMenuItem6->Text = L"Style";
			this->toolStripMenuItem6->Click += gcnew System::EventHandler(this, &NewsTracker::toolStripMenuItem6_Click);
			// 
			// toolStripMenuItem7
			// 
			this->toolStripMenuItem7->Name = L"toolStripMenuItem7";
			this->toolStripMenuItem7->Size = System::Drawing::Size(149, 22);
			this->toolStripMenuItem7->Text = L"Travel";
			this->toolStripMenuItem7->Click += gcnew System::EventHandler(this, &NewsTracker::toolStripMenuItem7_Click);
			// 
			// toolStripMenuItem8
			// 
			this->toolStripMenuItem8->Name = L"toolStripMenuItem8";
			this->toolStripMenuItem8->Size = System::Drawing::Size(149, 22);
			this->toolStripMenuItem8->Text = L"Sports";
			this->toolStripMenuItem8->Click += gcnew System::EventHandler(this, &NewsTracker::toolStripMenuItem8_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::HotTrack;
			this->panel2->Controls->Add(this->bt_save);
			this->panel2->Controls->Add(this->flowLayoutPanel1);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->lb_user);
			this->panel2->Controls->Add(this->bt_logout);
			this->panel2->Controls->Add(this->lb_categories);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(400, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(184, 561);
			this->panel2->TabIndex = 0;
			// 
			// bt_save
			// 
			this->bt_save->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->bt_save->AutoSize = true;
			this->bt_save->ForeColor = System::Drawing::Color::Blue;
			this->bt_save->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bt_save->Location = System::Drawing::Point(61, 477);
			this->bt_save->Name = L"bt_save";
			this->bt_save->Size = System::Drawing::Size(63, 23);
			this->bt_save->TabIndex = 7;
			this->bt_save->Text = L"Save";
			this->bt_save->UseVisualStyleBackColor = true;
			this->bt_save->Visible = false;
			this->bt_save->Click += gcnew System::EventHandler(this, &NewsTracker::bt_save_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->flowLayoutPanel1->Controls->Add(this->bt_politics);
			this->flowLayoutPanel1->Controls->Add(this->bt_business);
			this->flowLayoutPanel1->Controls->Add(this->bt_health);
			this->flowLayoutPanel1->Controls->Add(this->bt_entertainment);
			this->flowLayoutPanel1->Controls->Add(this->bt_style);
			this->flowLayoutPanel1->Controls->Add(this->bt_travel);
			this->flowLayoutPanel1->Controls->Add(this->bt_sports);
			this->flowLayoutPanel1->Location = System::Drawing::Point(3, 73);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(180, 386);
			this->flowLayoutPanel1->TabIndex = 6;
			// 
			// bt_politics
			// 
			this->bt_politics->Location = System::Drawing::Point(3, 3);
			this->bt_politics->Name = L"bt_politics";
			this->bt_politics->Size = System::Drawing::Size(84, 30);
			this->bt_politics->TabIndex = 5;
			this->bt_politics->Text = L"Politics";
			this->bt_politics->UseVisualStyleBackColor = true;
			this->bt_politics->Visible = false;
			this->bt_politics->Click += gcnew System::EventHandler(this, &NewsTracker::bt_politics_Click);
			// 
			// bt_business
			// 
			this->bt_business->Location = System::Drawing::Point(93, 3);
			this->bt_business->Name = L"bt_business";
			this->bt_business->Size = System::Drawing::Size(84, 30);
			this->bt_business->TabIndex = 4;
			this->bt_business->Text = L"Business";
			this->bt_business->UseVisualStyleBackColor = true;
			this->bt_business->Visible = false;
			this->bt_business->Click += gcnew System::EventHandler(this, &NewsTracker::bt_business_Click);
			// 
			// bt_health
			// 
			this->bt_health->Location = System::Drawing::Point(3, 39);
			this->bt_health->Name = L"bt_health";
			this->bt_health->Size = System::Drawing::Size(84, 30);
			this->bt_health->TabIndex = 3;
			this->bt_health->Text = L"Health";
			this->bt_health->UseVisualStyleBackColor = true;
			this->bt_health->Visible = false;
			this->bt_health->Click += gcnew System::EventHandler(this, &NewsTracker::bt_health_Click);
			// 
			// bt_entertainment
			// 
			this->bt_entertainment->Location = System::Drawing::Point(93, 39);
			this->bt_entertainment->Name = L"bt_entertainment";
			this->bt_entertainment->Size = System::Drawing::Size(84, 30);
			this->bt_entertainment->TabIndex = 6;
			this->bt_entertainment->Text = L"Entertainment";
			this->bt_entertainment->UseVisualStyleBackColor = true;
			this->bt_entertainment->Visible = false;
			this->bt_entertainment->Click += gcnew System::EventHandler(this, &NewsTracker::bt_entertainment_Click);
			// 
			// bt_style
			// 
			this->bt_style->Location = System::Drawing::Point(3, 75);
			this->bt_style->Name = L"bt_style";
			this->bt_style->Size = System::Drawing::Size(84, 30);
			this->bt_style->TabIndex = 7;
			this->bt_style->Text = L"Style";
			this->bt_style->UseVisualStyleBackColor = true;
			this->bt_style->Visible = false;
			this->bt_style->Click += gcnew System::EventHandler(this, &NewsTracker::bt_style_Click);
			// 
			// bt_travel
			// 
			this->bt_travel->Location = System::Drawing::Point(93, 75);
			this->bt_travel->Name = L"bt_travel";
			this->bt_travel->Size = System::Drawing::Size(84, 30);
			this->bt_travel->TabIndex = 8;
			this->bt_travel->Text = L"Travel";
			this->bt_travel->UseVisualStyleBackColor = true;
			this->bt_travel->Visible = false;
			this->bt_travel->Click += gcnew System::EventHandler(this, &NewsTracker::bt_travel_Click);
			// 
			// bt_sports
			// 
			this->bt_sports->Location = System::Drawing::Point(3, 111);
			this->bt_sports->Name = L"bt_sports";
			this->bt_sports->Size = System::Drawing::Size(84, 30);
			this->bt_sports->TabIndex = 9;
			this->bt_sports->Text = L"Sports";
			this->bt_sports->UseVisualStyleBackColor = true;
			this->bt_sports->Visible = false;
			this->bt_sports->Click += gcnew System::EventHandler(this, &NewsTracker::bt_sports_Click);
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(155, 545);
			this->label12->Margin = System::Windows::Forms::Padding(3);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(29, 15);
			this->label12->TabIndex = 2;
			this->label12->Text = L"V1.0";
			// 
			// lb_user
			// 
			this->lb_user->AutoSize = true;
			this->lb_user->Dock = System::Windows::Forms::DockStyle::Left;
			this->lb_user->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_user->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->lb_user->Location = System::Drawing::Point(0, 0);
			this->lb_user->Margin = System::Windows::Forms::Padding(3);
			this->lb_user->Name = L"lb_user";
			this->lb_user->Size = System::Drawing::Size(70, 25);
			this->lb_user->TabIndex = 2;
			this->lb_user->Text = L"<null>";
			// 
			// bt_logout
			// 
			this->bt_logout->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->bt_logout->AutoSize = true;
			this->bt_logout->ForeColor = System::Drawing::Color::Red;
			this->bt_logout->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bt_logout->Location = System::Drawing::Point(61, 517);
			this->bt_logout->Name = L"bt_logout";
			this->bt_logout->Size = System::Drawing::Size(63, 23);
			this->bt_logout->TabIndex = 1;
			this->bt_logout->Text = L"Logout";
			this->bt_logout->UseVisualStyleBackColor = true;
			this->bt_logout->Click += gcnew System::EventHandler(this, &NewsTracker::bt_logout_Click);
			// 
			// lb_categories
			// 
			this->lb_categories->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_categories->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->lb_categories->Location = System::Drawing::Point(23, 38);
			this->lb_categories->Name = L"lb_categories";
			this->lb_categories->Size = System::Drawing::Size(138, 34);
			this->lb_categories->TabIndex = 0;
			this->lb_categories->Text = L"Categories";
			this->lb_categories->Click += gcnew System::EventHandler(this, &NewsTracker::label2_Click);
			// 
			// login_timer
			// 
			this->login_timer->Interval = 1250;
			this->login_timer->Tick += gcnew System::EventHandler(this, &NewsTracker::timer_Tick);
			// 
			// NewsTracker
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(584, 561);
			this->Controls->Add(this->pn_login_interface);
			this->Controls->Add(this->pn_home);
			this->ForeColor = System::Drawing::Color::Blue;
			this->Name = L"NewsTracker";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"News Tracker";
			this->pn_register->ResumeLayout(false);
			this->pn_register->PerformLayout();
			this->pn_login->ResumeLayout(false);
			this->pn_login->PerformLayout();
			this->pn_login_interface->ResumeLayout(false);
			this->pn_login_interface->PerformLayout();
			this->pn_home->ResumeLayout(false);
			this->pn_home->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		void checkUser(string user, string pass, bool& Userfound, bool& Accfound, bool& admin, long long& nUsers) {
			ifstream usersN("UsersN.txt");
			usersN >> nUsers;
			usersN.close();

			ifstream Acc("Accounts.txt");
			string readuser;
			string readpass;
			for (int i = 1; i <= nUsers; i++) {
				getline(Acc, readuser);
				getline(Acc, readpass);
				if (readuser == user && readpass != pass) {
					Userfound = true;
				}
				else if (readuser == user && readpass == pass) {
					Accfound = true;
					if (user == "Admin" || user == "admin") {
						admin = true;
					}
					break;
				}
			}
			Acc.close();
		}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		pn_register->Visible = true;
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void bt_login_Click(System::Object^ sender, System::EventArgs^ e) {
		admin = false;
		Lastbt = 0;
		richTextBox1->Text = "";
		long long nUsers = 0;
		bool Accfound = false;
		bool Userfound = false;
		String^ userRAW = textBox1->Text;
		String^ passRAW = textBox2->Text;
		string user = msclr::interop::marshal_as<std::string>(userRAW);
		string pass = msclr::interop::marshal_as<std::string>(passRAW);
		checkUser(user, pass, Userfound, Accfound, admin, nUsers);
		if (Accfound) {
			label6->Text = "Successful Login!";
			label6->ForeColor = System::Drawing::Color::LimeGreen;
			label6->Visible = true;
			login_timer->Enabled = true;
			string hello = "Hello, " + user;
			String^ Hello = gcnew String(hello.c_str());
			lb_user->Text = Hello;
		}
		else {
			label6->Text = "Incorrect Username or Password";
			label6->ForeColor = System::Drawing::Color::Red;
			label6->Visible = true;
		}
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void pn_register_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void bt_register_Click(System::Object^ sender, System::EventArgs^ e) {
		long long nUsers = 0;
		bool Accfound = false;
		bool Userfound = false;
		String^ userRAW = textBox3->Text;
		String^ passRAW = textBox4->Text;
		String^ confpassRAW = textBox5->Text;
		string user = msclr::interop::marshal_as<std::string>(userRAW);
		string pass = msclr::interop::marshal_as<std::string>(passRAW);
		string confpass = msclr::interop::marshal_as<std::string>(confpassRAW);
		checkUser(user, pass, Userfound, Accfound, admin, nUsers);
		if (Userfound) {
			label11->Text = "Username Already Exists";
			label11->ForeColor = System::Drawing::Color::Red;
			label11->Visible = true;
		}
		else if (pass != confpass) {
			label11->Text = "Passwords Don't Match";
			label11->ForeColor = System::Drawing::Color::Red;
			label11->Visible = true;
		}
		else {
			ofstream Acc("Accounts.txt", ios::app);
			Acc << user << "\n" << pass << endl;
			Acc.close();
			nUsers++;
			ofstream usersN("UsersN.txt");
			usersN << nUsers;
			usersN.close();
			label11->Text = "Successful Registration!";
			label11->ForeColor = System::Drawing::Color::LimeGreen;
			label11->Visible = true;
		}
	}
		   int nTimerLoops = 0;
	private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (nTimerLoops == 0) {
			label6->Text = "Logging in..";
			nTimerLoops++;
			label11->Text = "";
		}
		else if (nTimerLoops == 1) {
			if (admin) {
				bt_save->Visible = true;
				richTextBox1->Enabled = true;
				bt_politics->Visible = true;
				bt_business->Visible = true;
				bt_health->Visible = true;
				bt_entertainment->Visible = true;
				bt_style->Visible = true;
				bt_travel->Visible = true;
				bt_sports->Visible = true;
			}
			else {
				bt_save->Visible = false;
				richTextBox1->Enabled = false;
				bt_politics->Visible = false;
				bt_business->Visible = false;
				bt_health->Visible = false;
				bt_entertainment->Visible = false;
				bt_style->Visible = false;
				bt_travel->Visible = false;
				bt_sports->Visible = false;
			}
			pn_home->BringToFront();
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			label6->Text = "";
			nTimerLoops = 0;
			//this->ClientSize = System::Drawing::Size(1366, 768);
			login_timer->Enabled = false;
		}
	}
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void finanaceToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		bt_health->Visible = true;
	}
	private: System::Void bt_logout_Click(System::Object^ sender, System::EventArgs^ e) {
		pn_login_interface->BringToFront();
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
	}
	private: System::Void bt_politics_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			richTextBox1->LoadFile("Politics.rtf", RichTextBoxStreamType::RichText);
		}
		catch (...) {
			richTextBox1->Clear();
		}
		Lastbt = 1;
	}
	private: System::Void bt_business_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			richTextBox1->LoadFile("Business.rtf", RichTextBoxStreamType::RichText);
		}
		catch (...) {
			richTextBox1->Clear();
		}
		Lastbt = 2;
	}
	private: System::Void bt_health_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			richTextBox1->LoadFile("Health.rtf", RichTextBoxStreamType::RichText);
		}
		catch (...) {
			richTextBox1->Clear();
		}
		Lastbt = 3;
	}
	private: System::Void bt_entertainment_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			richTextBox1->LoadFile("Entertainment.rtf", RichTextBoxStreamType::RichText);
		}
		catch (...) {
			richTextBox1->Clear();
		}
		Lastbt = 4;
	}
	private: System::Void bt_style_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			richTextBox1->LoadFile("Style.rtf", RichTextBoxStreamType::RichText);
		}
		catch (...) {
			richTextBox1->Clear();
		}
		Lastbt = 5;
	}
	private: System::Void bt_travel_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			richTextBox1->LoadFile("Travel.rtf", RichTextBoxStreamType::RichText);
		}
		catch (...) {
			richTextBox1->Clear();
		}
		Lastbt = 6;
	}
	private: System::Void bt_sports_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			richTextBox1->LoadFile("Sports.rtf", RichTextBoxStreamType::RichText);
		}
		catch (...) {
			richTextBox1->Clear();
		}
		Lastbt = 7;
	}
	private: System::Void bt_save_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Lastbt == 1) {
			richTextBox1->SaveFile("Politics.rtf", RichTextBoxStreamType::RichText);
		}
		else if (Lastbt == 2) {
			richTextBox1->SaveFile("Business.rtf", RichTextBoxStreamType::RichText);
		}
		else if (Lastbt == 3) {
			richTextBox1->SaveFile("Health.rtf", RichTextBoxStreamType::RichText);
		}
		else if (Lastbt == 4) {
			richTextBox1->SaveFile("Entertainment.rtf", RichTextBoxStreamType::RichText);
		}
		else if (Lastbt == 5) {
			richTextBox1->SaveFile("Style.rtf", RichTextBoxStreamType::RichText);
		}
		else if (Lastbt == 6) {
			richTextBox1->SaveFile("Travel.rtf", RichTextBoxStreamType::RichText);
		}
		else if (Lastbt == 7) {
			richTextBox1->SaveFile("Sports.rtf", RichTextBoxStreamType::RichText);
		}
		else {
			MessageBox::Show("Please choose a category first");
		}
	}
	private: System::Void addToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void myToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void artToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		bt_politics->Visible = true;
	}
	private: System::Void sportToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		bt_business->Visible = true;
	}
	private: System::Void entertainmentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		bt_entertainment->Visible = true;
	}
	private: System::Void styleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		bt_style->Visible = true;
	}
	private: System::Void travelToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		bt_travel->Visible = true;
	}
	private: System::Void sportsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		bt_sports->Visible = true;
	}
	private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		bt_politics->Visible = false;
	}
	private: System::Void toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
		bt_business->Visible = false;
	}
	private: System::Void toolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
		bt_health->Visible = false;
	}
	private: System::Void toolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e) {
		bt_entertainment->Visible = false;
	}
	private: System::Void toolStripMenuItem6_Click(System::Object^ sender, System::EventArgs^ e) {
		bt_style->Visible = false;
	}
	private: System::Void toolStripMenuItem7_Click(System::Object^ sender, System::EventArgs^ e) {
		bt_travel->Visible = false;
	}
	private: System::Void toolStripMenuItem8_Click(System::Object^ sender, System::EventArgs^ e) {
		bt_sports->Visible = false;
	}
	};
}