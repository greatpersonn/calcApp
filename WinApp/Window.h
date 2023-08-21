#pragma once

#include <windows.h>

namespace WinApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Window
	/// </summary>
	public ref class Window : public System::Windows::Forms::Form
	{
	public:
		Window(void)
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
		~Window()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^ button_close;
	private: System::Windows::Forms::Label^ result_label;
	private: System::Windows::Forms::Button^ button_clear;
	private: System::Windows::Forms::Button^ button_minus_plus;



	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button_divide;
	private: System::Windows::Forms::Button^ button_multyply;


	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button_minus;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button_plus;

	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button_result;



	private: System::Windows::Forms::Button^ button20;

	private: String^ firstNum;
	private: char userAction;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->result_label = (gcnew System::Windows::Forms::Label());
			this->button_clear = (gcnew System::Windows::Forms::Button());
			this->button_minus_plus = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button_divide = (gcnew System::Windows::Forms::Button());
			this->button_multyply = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button_result = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_close
			// 
			this->button_close->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->button_close->FlatAppearance->BorderSize = 0;
			this->button_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_close->ForeColor = System::Drawing::SystemColors::Window;
			this->button_close->Location = System::Drawing::Point(274, 12);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(36, 28);
			this->button_close->TabIndex = 2;
			this->button_close->Text = L"X";
			this->button_close->UseVisualStyleBackColor = false;
			this->button_close->Click += gcnew System::EventHandler(this, &Window::button_close_Click);
			// 
			// result_label
			// 
			this->result_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_label->ForeColor = System::Drawing::SystemColors::Window;
			this->result_label->Location = System::Drawing::Point(13, 12);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(255, 83);
			this->result_label->TabIndex = 3;
			this->result_label->Text = L"0";
			this->result_label->Click += gcnew System::EventHandler(this, &Window::label1_Click_1);
			// 
			// button_clear
			// 
			this->button_clear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->button_clear->FlatAppearance->BorderSize = 0;
			this->button_clear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_clear->ForeColor = System::Drawing::SystemColors::Window;
			this->button_clear->Location = System::Drawing::Point(20, 109);
			this->button_clear->Name = L"button_clear";
			this->button_clear->Size = System::Drawing::Size(68, 52);
			this->button_clear->TabIndex = 4;
			this->button_clear->Text = L"AC";
			this->button_clear->UseVisualStyleBackColor = false;
			this->button_clear->Click += gcnew System::EventHandler(this, &Window::button_clear_Click);
			// 
			// button_minus_plus
			// 
			this->button_minus_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->button_minus_plus->FlatAppearance->BorderSize = 0;
			this->button_minus_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_minus_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_minus_plus->ForeColor = System::Drawing::SystemColors::Window;
			this->button_minus_plus->Location = System::Drawing::Point(94, 109);
			this->button_minus_plus->Name = L"button_minus_plus";
			this->button_minus_plus->Size = System::Drawing::Size(68, 52);
			this->button_minus_plus->TabIndex = 5;
			this->button_minus_plus->Text = L"+/-";
			this->button_minus_plus->UseVisualStyleBackColor = false;
			this->button_minus_plus->Click += gcnew System::EventHandler(this, &Window::button_minus_plus_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::Window;
			this->button3->Location = System::Drawing::Point(168, 109);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(68, 52);
			this->button3->TabIndex = 6;
			this->button3->Text = L"%";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Window::button_percent);
			// 
			// button_divide
			// 
			this->button_divide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->button_divide->FlatAppearance->BorderSize = 0;
			this->button_divide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_divide->ForeColor = System::Drawing::SystemColors::Window;
			this->button_divide->Location = System::Drawing::Point(242, 109);
			this->button_divide->Name = L"button_divide";
			this->button_divide->Size = System::Drawing::Size(68, 52);
			this->button_divide->TabIndex = 7;
			this->button_divide->Text = L"÷";
			this->button_divide->UseVisualStyleBackColor = false;
			this->button_divide->Click += gcnew System::EventHandler(this, &Window::button_divide_Click);
			// 
			// button_multyply
			// 
			this->button_multyply->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->button_multyply->FlatAppearance->BorderSize = 0;
			this->button_multyply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_multyply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_multyply->ForeColor = System::Drawing::SystemColors::Window;
			this->button_multyply->Location = System::Drawing::Point(242, 167);
			this->button_multyply->Name = L"button_multyply";
			this->button_multyply->Size = System::Drawing::Size(68, 52);
			this->button_multyply->TabIndex = 11;
			this->button_multyply->Text = L"∙";
			this->button_multyply->UseVisualStyleBackColor = false;
			this->button_multyply->Click += gcnew System::EventHandler(this, &Window::button_multyply_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::Window;
			this->button6->Location = System::Drawing::Point(168, 167);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(68, 52);
			this->button6->TabIndex = 10;
			this->button6->Text = L"9";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Window::ButtonNumber_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::Window;
			this->button7->Location = System::Drawing::Point(94, 167);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(68, 52);
			this->button7->TabIndex = 9;
			this->button7->Text = L"8";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Window::ButtonNumber_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::Window;
			this->button8->Location = System::Drawing::Point(20, 167);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(68, 52);
			this->button8->TabIndex = 8;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Window::ButtonNumber_Click);
			// 
			// button_minus
			// 
			this->button_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->button_minus->FlatAppearance->BorderSize = 0;
			this->button_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_minus->ForeColor = System::Drawing::SystemColors::Window;
			this->button_minus->Location = System::Drawing::Point(242, 225);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(68, 52);
			this->button_minus->TabIndex = 15;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = false;
			this->button_minus->Click += gcnew System::EventHandler(this, &Window::button_minus_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::Window;
			this->button10->Location = System::Drawing::Point(168, 225);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(68, 52);
			this->button10->TabIndex = 14;
			this->button10->Text = L"4";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Window::ButtonNumber_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::SystemColors::Window;
			this->button11->Location = System::Drawing::Point(94, 225);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(68, 52);
			this->button11->TabIndex = 13;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Window::ButtonNumber_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::SystemColors::Window;
			this->button12->Location = System::Drawing::Point(20, 225);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(68, 52);
			this->button12->TabIndex = 12;
			this->button12->Text = L"6";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Window::ButtonNumber_Click);
			// 
			// button_plus
			// 
			this->button_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->button_plus->FlatAppearance->BorderSize = 0;
			this->button_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_plus->ForeColor = System::Drawing::SystemColors::Window;
			this->button_plus->Location = System::Drawing::Point(242, 283);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(68, 52);
			this->button_plus->TabIndex = 19;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = false;
			this->button_plus->Click += gcnew System::EventHandler(this, &Window::button_plus_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::SystemColors::Window;
			this->button14->Location = System::Drawing::Point(168, 283);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(68, 52);
			this->button14->TabIndex = 18;
			this->button14->Text = L"1";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Window::ButtonNumber_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::SystemColors::Window;
			this->button15->Location = System::Drawing::Point(94, 283);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(68, 52);
			this->button15->TabIndex = 17;
			this->button15->Text = L"2";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Window::ButtonNumber_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::SystemColors::Window;
			this->button16->Location = System::Drawing::Point(20, 283);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(68, 52);
			this->button16->TabIndex = 16;
			this->button16->Text = L"3";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Window::ButtonNumber_Click);
			// 
			// button_result
			// 
			this->button_result->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->button_result->FlatAppearance->BorderSize = 0;
			this->button_result->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_result->ForeColor = System::Drawing::SystemColors::Window;
			this->button_result->Location = System::Drawing::Point(242, 341);
			this->button_result->Name = L"button_result";
			this->button_result->Size = System::Drawing::Size(68, 52);
			this->button_result->TabIndex = 23;
			this->button_result->Text = L"=";
			this->button_result->UseVisualStyleBackColor = false;
			this->button_result->Click += gcnew System::EventHandler(this, &Window::button_result_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->ForeColor = System::Drawing::SystemColors::Window;
			this->button20->Location = System::Drawing::Point(20, 341);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(216, 52);
			this->button20->TabIndex = 20;
			this->button20->Text = L"0";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &Window::ButtonNumber_Click);
			// 
			// Window
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->ClientSize = System::Drawing::Size(331, 414);
			this->Controls->Add(this->button_result);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button_multyply);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button_divide);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button_minus_plus);
			this->Controls->Add(this->button_clear);
			this->Controls->Add(this->button_close);
			this->Controls->Add(this->result_label);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Window";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Window";
			this->Load += gcnew System::EventHandler(this, &Window::Window_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Window_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_close_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void ButtonNumber_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);

		if (this->result_label->Text == "0") {
			this->result_label->Text = button->Text;
		}
		else {
			this->result_label->Text = this->result_label->Text + button->Text;
		}

	}

	private: System::Void button_divide_Click(System::Object^ sender, System::EventArgs^ e) {
		mathAction('/');
	}
	private: System::Void button_multyply_Click(System::Object^ sender, System::EventArgs^ e) {
		mathAction('*');
	}
	private: System::Void button_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->result_label->Text == "0") {
			this->result_label->Text = "-";
		}
		else {
			mathAction('-');
		}
		
	}
	private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		mathAction('+');
	}

	private: System::Void button_percent(System::Object^ sender, System::EventArgs^ e) {
		mathAction('%');
	}

	private: System::Void mathAction(char action) {
		this->firstNum = this->result_label->Text;
		this->userAction = action;
		this->result_label->Text = "0";
	}
	
	private: System::Void button_result_Click(System::Object^ sender, System::EventArgs^ e) {
		double result = 0;

		if (userAction == ' ') {
			return;
		}

		switch (userAction)
		{
		case '+':
			result = System::Convert::ToDouble(firstNum) + System::Convert::ToDouble(this->result_label->Text);
			break;

		case '-':
			result = System::Convert::ToInt32(firstNum) - System::Convert::ToInt32(this->result_label->Text);
			break;

		case '/':

			if (System::Convert::ToInt32(this->result_label->Text) == 0) {
				result = 0;
				MessageBox::Show(this, "Dividing by zero is forbidden!", "Calculus error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				result = System::Convert::ToInt32(firstNum) / System::Convert::ToInt32(this->result_label->Text);
			}

			break;

		case '*':
			result = System::Convert::ToInt32(firstNum) * System::Convert::ToInt32(this->result_label->Text);
			break;

		case '%':
			if (System::Convert::ToInt32(firstNum) > 0) {
				result = (System::Convert::ToInt32(firstNum) * System::Convert::ToInt32(this->result_label->Text)) / 100;
			}
			else {
				result = 0;
				MessageBox::Show(this, "It is impossible to get a result from a negative number!", "Calculus error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			break;
		default:
			// TODO: Work with ERROR!
			break;
		}

		this->result_label->Text = System::Convert::ToString(result);
	}


	private: System::Void button_clear_Click(System::Object^ sender, System::EventArgs^ e) {
		this->firstNum = "";
		this->userAction = ' ';
		this->result_label->Text = "0";
	}

	private: System::Void button_minus_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		int result = System::Convert::ToInt32(this->result_label->Text);
		result *= -1;
		this->result_label->Text = System::Convert::ToString(result);
	}
};
}
