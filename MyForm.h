#pragma once

#include <cmath>

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ number1;
	private: System::Windows::Forms::Button^ number2;
	private: System::Windows::Forms::Button^ number3;
	protected:

	protected:


	private: System::Windows::Forms::Button^ number4;
	private: System::Windows::Forms::Button^ number5;
	private: System::Windows::Forms::Button^ number6;
	private: System::Windows::Forms::Button^ number7;
	private: System::Windows::Forms::Button^ number8;
	private: System::Windows::Forms::Button^ number9;
	private: System::Windows::Forms::Button^ number0;
	private: System::Windows::Forms::Button^ numberEqual;







	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ buttonClear;
	private: System::Windows::Forms::TextBox^ textBox1;



	protected:











	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->number1 = (gcnew System::Windows::Forms::Button());
			this->number2 = (gcnew System::Windows::Forms::Button());
			this->number3 = (gcnew System::Windows::Forms::Button());
			this->number4 = (gcnew System::Windows::Forms::Button());
			this->number5 = (gcnew System::Windows::Forms::Button());
			this->number6 = (gcnew System::Windows::Forms::Button());
			this->number7 = (gcnew System::Windows::Forms::Button());
			this->number8 = (gcnew System::Windows::Forms::Button());
			this->number9 = (gcnew System::Windows::Forms::Button());
			this->number0 = (gcnew System::Windows::Forms::Button());
			this->numberEqual = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// number1
			// 
			this->number1->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Bold));
			this->number1->Location = System::Drawing::Point(48, 194);
			this->number1->Name = L"number1";
			this->number1->Size = System::Drawing::Size(63, 58);
			this->number1->TabIndex = 0;
			this->number1->Text = L"1";
			this->number1->UseVisualStyleBackColor = true;
			// 
			// number2
			// 
			this->number2->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Bold));
			this->number2->Location = System::Drawing::Point(138, 194);
			this->number2->Name = L"number2";
			this->number2->Size = System::Drawing::Size(64, 58);
			this->number2->TabIndex = 1;
			this->number2->Text = L"2";
			this->number2->UseVisualStyleBackColor = true;
			// 
			// number3
			// 
			this->number3->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Bold));
			this->number3->Location = System::Drawing::Point(225, 194);
			this->number3->Name = L"number3";
			this->number3->Size = System::Drawing::Size(64, 58);
			this->number3->TabIndex = 2;
			this->number3->Text = L"3";
			this->number3->UseVisualStyleBackColor = true;
			// 
			// number4
			// 
			this->number4->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->number4->Location = System::Drawing::Point(48, 272);
			this->number4->Name = L"number4";
			this->number4->Size = System::Drawing::Size(63, 58);
			this->number4->TabIndex = 3;
			this->number4->Text = L"4";
			this->number4->UseVisualStyleBackColor = true;
			this->number4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// number5
			// 
			this->number5->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Bold));
			this->number5->Location = System::Drawing::Point(138, 272);
			this->number5->Name = L"number5";
			this->number5->Size = System::Drawing::Size(64, 58);
			this->number5->TabIndex = 4;
			this->number5->Text = L"5";
			this->number5->UseVisualStyleBackColor = true;
			// 
			// number6
			// 
			this->number6->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Bold));
			this->number6->Location = System::Drawing::Point(225, 272);
			this->number6->Name = L"number6";
			this->number6->Size = System::Drawing::Size(64, 58);
			this->number6->TabIndex = 5;
			this->number6->Text = L"6";
			this->number6->UseVisualStyleBackColor = true;
			this->number6->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// number7
			// 
			this->number7->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Bold));
			this->number7->Location = System::Drawing::Point(48, 354);
			this->number7->Name = L"number7";
			this->number7->Size = System::Drawing::Size(63, 58);
			this->number7->TabIndex = 6;
			this->number7->Text = L"7";
			this->number7->UseVisualStyleBackColor = true;
			// 
			// number8
			// 
			this->number8->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Bold));
			this->number8->Location = System::Drawing::Point(138, 354);
			this->number8->Name = L"number8";
			this->number8->Size = System::Drawing::Size(64, 58);
			this->number8->TabIndex = 7;
			this->number8->Text = L"8";
			this->number8->UseVisualStyleBackColor = true;
			// 
			// number9
			// 
			this->number9->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Bold));
			this->number9->Location = System::Drawing::Point(225, 354);
			this->number9->Name = L"number9";
			this->number9->Size = System::Drawing::Size(64, 58);
			this->number9->TabIndex = 8;
			this->number9->Text = L"9";
			this->number9->UseVisualStyleBackColor = true;
			// 
			// number0
			// 
			this->number0->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Bold));
			this->number0->Location = System::Drawing::Point(48, 437);
			this->number0->Name = L"number0";
			this->number0->Size = System::Drawing::Size(63, 58);
			this->number0->TabIndex = 9;
			this->number0->Text = L"0";
			this->number0->UseVisualStyleBackColor = true;
			// 
			// numberEqual
			// 
			this->numberEqual->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numberEqual->Location = System::Drawing::Point(353, 354);
			this->numberEqual->Name = L"numberEqual";
			this->numberEqual->Size = System::Drawing::Size(83, 141);
			this->numberEqual->TabIndex = 10;
			this->numberEqual->Text = L"=";
			this->numberEqual->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Bold));
			this->button11->Location = System::Drawing::Point(353, 194);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(83, 58);
			this->button11->TabIndex = 11;
			this->button11->Text = L"ln";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Bold));
			this->button12->Location = System::Drawing::Point(353, 272);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(83, 58);
			this->button12->TabIndex = 12;
			this->button12->Text = L"log";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonClear->Location = System::Drawing::Point(138, 437);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(155, 58);
			this->buttonClear->TabIndex = 13;
			this->buttonClear->Text = L"CE";
			this->buttonClear->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(0, 41);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(476, 87);
			this->textBox1->TabIndex = 14;
			this->textBox1->Text->
			// 
			// MyForm
			// 
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(475, 504);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->numberEqual);
			this->Controls->Add(this->number0);
			this->Controls->Add(this->number9);
			this->Controls->Add(this->number8);
			this->Controls->Add(this->number7);
			this->Controls->Add(this->number6);
			this->Controls->Add(this->number5);
			this->Controls->Add(this->number4);
			this->Controls->Add(this->number3);
			this->Controls->Add(this->number2);
			this->Controls->Add(this->number1);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор логарифмов";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	