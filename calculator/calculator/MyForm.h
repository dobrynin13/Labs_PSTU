#pragma once
#include "MyForm.h"
#include<cmath>
#include<iostream>
namespace calculator {

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

	protected:

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;



	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;



	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;



	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TextBox^ textBox5;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(155, 35);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(155, 72);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(302, 71);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Обнулить число";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(302, 29);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(134, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Обнулить число";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(49, 159);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 22);
			this->textBox10->TabIndex = 11;
			this->textBox10->Text = L"0";
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(179, 159);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 22);
			this->textBox11->TabIndex = 12;
			this->textBox11->Text = L"0";
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox11_TextChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(302, 155);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(134, 23);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Обнулить число";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(37, 384);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 50);
			this->button4->TabIndex = 14;
			this->button4->Text = L"-";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(205, 384);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 50);
			this->button5->TabIndex = 15;
			this->button5->Text = L"X1^n";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(37, 299);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 50);
			this->button6->TabIndex = 16;
			this->button6->Text = L"+";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(123, 299);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 50);
			this->button7->TabIndex = 17;
			this->button7->Text = L"/";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(205, 299);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 50);
			this->button8->TabIndex = 18;
			this->button8->Text = L"√";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button10
			// 
			this->button10->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button10->Location = System::Drawing::Point(403, 269);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(205, 111);
			this->button10->TabIndex = 22;
			this->button10->Text = L"Показательное - Алгебраическое ";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(639, 422);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(205, 111);
			this->button11->TabIndex = 23;
			this->button11->Text = L"Тригонометрическое - Алгебраическое\r\n";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(403, 422);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(205, 111);
			this->button12->TabIndex = 24;
			this->button12->Text = L"Алгебраическое - Тригонометрическое";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(638, 269);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(205, 111);
			this->button13->TabIndex = 25;
			this->button13->Text = L"Алгебраическое - \r\nПоказательное";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(993, 77);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 22);
			this->textBox17->TabIndex = 29;
			this->textBox17->Text = L"0";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(850, 77);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(100, 22);
			this->textBox18->TabIndex = 30;
			this->textBox18->Text = L"0";
			this->textBox18->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox18_TextChanged);
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(702, 120);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(100, 22);
			this->textBox19->TabIndex = 31;
			this->textBox19->Text = L"0";
			this->textBox19->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox19_TextChanged);
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(838, 120);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(100, 22);
			this->textBox20->TabIndex = 32;
			this->textBox20->Text = L"0";
			this->textBox20->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox20_TextChanged);
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(750, 77);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(52, 22);
			this->textBox21->TabIndex = 33;
			this->textBox21->Text = L"0";
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(869, 30);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(100, 22);
			this->textBox22->TabIndex = 34;
			this->textBox22->Text = L"0";
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(702, 32);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(100, 22);
			this->textBox23->TabIndex = 35;
			this->textBox23->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(808, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 17);
			this->label1->TabIndex = 37;
			this->label1->Text = L"*e";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(835, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 17);
			this->label2->TabIndex = 37;
			this->label2->Text = L"^(i*";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(975, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 17);
			this->label3->TabIndex = 38;
			this->label3->Text = L")";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(2, 34);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 17);
			this->label4->TabIndex = 39;
			this->label4->Text = L"X1 = ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(2, 77);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 17);
			this->label5->TabIndex = 40;
			this->label5->Text = L"X2 = ";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(10, 162);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 17);
			this->label6->TabIndex = 41;
			this->label6->Text = L"X = ";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(120, 120);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 17);
			this->label7->TabIndex = 42;
			this->label7->Text = L"Результат";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(561, 35);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 17);
			this->label8->TabIndex = 43;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(512, 30);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(158, 17);
			this->label9->TabIndex = 44;
			this->label9->Text = L"Показательная форма\r\n";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(512, 74);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(196, 17);
			this->label10->TabIndex = 45;
			this->label10->Text = L"Тригонометрическая форма";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(512, 120);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(164, 17);
			this->label11->TabIndex = 46;
			this->label11->Text = L"Алгебраическая форма\r\n";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(561, 217);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(163, 17);
			this->label12->TabIndex = 47;
			this->label12->Text = L"Преобразование чисел";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(65, 237);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(163, 17);
			this->label14->TabIndex = 49;
			this->label14->Text = L"Операции над числами";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(725, 77);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(19, 17);
			this->label13->TabIndex = 50;
			this->label13->Text = L"+i";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(809, 80);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(35, 17);
			this->label15->TabIndex = 51;
			this->label15->Text = L"(cos";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(956, 80);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(40, 17);
			this->label16->TabIndex = 52;
			this->label16->Text = L") (sin";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(1099, 82);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(13, 17);
			this->label17->TabIndex = 53;
			this->label17->Text = L")";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(810, 125);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(19, 17);
			this->label18->TabIndex = 54;
			this->label18->Text = L"+i";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(563, 159);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(133, 34);
			this->label19->TabIndex = 55;
			this->label19->Text = L"Вычисление корня\r\n\r\n";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(702, 162);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(42, 22);
			this->textBox1->TabIndex = 56;
			this->textBox1->Text = L"0";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(750, 167);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(75, 17);
			this->label20->TabIndex = 57;
			this->label20->Text = L"*(1/4)*cos(\r\n";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(838, 164);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 58;
			this->textBox2->Text = L"0";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(956, 167);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(28, 17);
			this->label21->TabIndex = 59;
			this->label21->Text = L") +i";
			this->label21->Click += gcnew System::EventHandler(this, &MyForm::label21_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(993, 164);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(32, 22);
			this->textBox7->TabIndex = 60;
			this->textBox7->Text = L"0";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(1039, 167);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(71, 17);
			this->label22->TabIndex = 61;
			this->label22->Text = L"*(1/4)*sin(";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(1116, 164);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 62;
			this->textBox8->Text = L"0";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(1222, 167);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(13, 17);
			this->label23->TabIndex = 63;
			this->label23->Text = L")";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(155, 162);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(19, 17);
			this->label24->TabIndex = 64;
			this->label24->Text = L"+i";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(49, 35);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(68, 22);
			this->textBox9->TabIndex = 65;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(49, 72);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(68, 22);
			this->textBox12->TabIndex = 66;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(123, 35);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(19, 17);
			this->label25->TabIndex = 67;
			this->label25->Text = L"+i";
			this->label25->Click += gcnew System::EventHandler(this, &MyForm::label25_Click);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(123, 75);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(19, 17);
			this->label26->TabIndex = 68;
			this->label26->Text = L"+i";
			this->label26->Click += gcnew System::EventHandler(this, &MyForm::label26_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(123, 384);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 50);
			this->button9->TabIndex = 69;
			this->button9->Text = L"X";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(1022, 29);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(134, 23);
			this->button14->TabIndex = 70;
			this->button14->Text = L"Обнулить число";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(1136, 77);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(134, 23);
			this->button15->TabIndex = 71;
			this->button15->Text = L"Обнулить число";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(959, 117);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(134, 23);
			this->button16->TabIndex = 72;
			this->button16->Text = L"Обнулить число";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(261, 384);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(32, 17);
			this->label27->TabIndex = 73;
			this->label27->Text = L"n = ";
			this->label27->Click += gcnew System::EventHandler(this, &MyForm::label27_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(287, 384);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(22, 22);
			this->textBox5->TabIndex = 74;
			this->textBox5->Text = L"0";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1390, 622);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
		double x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0, N = 0, x4, y4;
		double firstnumber, secondnumber, firstnumber1, secondnumber2, pank, R;
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox18_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label26_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	x1 = Convert::ToDouble(textBox9->Text);//сложение 
	y1 = Convert::ToDouble(textBox3->Text);
	x2 = Convert::ToDouble(textBox12->Text);
	y2 = Convert::ToDouble(textBox4->Text);
	x3 = x1 + x2;
	y3 = y1 + y2;
	textBox10->Text = Convert::ToString(x3);
	textBox11->Text = Convert::ToString(y3);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	x1 = Convert::ToDouble(textBox9->Text);
	y1 = Convert::ToDouble(textBox3->Text);
	pank = x1 * x1 + y1 * y1;
	R = (atan(y1 / x1)) / 2;
	textBox2->Text = Convert::ToString(R);
	textBox8->Text = Convert::ToString(R);
	textBox1->Text = Convert::ToString(pank);
	textBox7->Text = Convert::ToString(pank);
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	x1 = Convert::ToDouble(textBox23->Text);
	y1 = Convert::ToDouble(textBox22->Text);
	x2 = x1 * cos(y1);
	y2 = x1 * sin(y1);
	textBox19->Text = Convert::ToString(x2);
	textBox20->Text = Convert::ToString(y2);
	
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	x1 = Convert::ToDouble(textBox9->Text);// деление
	y1 = Convert::ToDouble(textBox3->Text);
	x2 = Convert::ToDouble(textBox12->Text);
	y2 = Convert::ToDouble(textBox4->Text);
	x3 = (x1 * x2 + y1 * y2) / (x2 * x2 + y2 * y2);
	y3 = (y1 * x2 - x1 * y2) / (x2 * x2 + y2 * y2);
	textBox10->Text = Convert::ToString(x3);
	textBox11->Text = Convert::ToString(y3);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	x1 = Convert::ToDouble(textBox9->Text);//вычитание 
	y1 = Convert::ToDouble(textBox3->Text);
	x2 = Convert::ToDouble(textBox12->Text);
	y2 = Convert::ToDouble(textBox4->Text);
	x3 = x1 - x2;
	y3 = y1 - y2;
	textBox10->Text = Convert::ToString(x3);
	textBox11->Text = Convert::ToString(y3);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	
	x1 = Convert::ToDouble(textBox9->Text);
	y1 = Convert::ToDouble(textBox3->Text);
	N = Convert::ToDouble(textBox5->Text);
	secondnumber = atan2(y1, x1);
	firstnumber = sqrt(x1 * x1 + y1 * y1);
	firstnumber1 = pow(firstnumber, N);
	secondnumber2 = N * secondnumber;
	x2 = R * cos(secondnumber2);
	y2 = R * sin(secondnumber2);
	textBox10->Text = Convert::ToString(x2);
	textBox11->Text = Convert::ToString(y2);

	
	
	
	
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	x1 = Convert::ToDouble(textBox9->Text);//умножение 
	y1 = Convert::ToDouble(textBox3->Text);
	x2 = Convert::ToDouble(textBox12->Text);
	y2 = Convert::ToDouble(textBox4->Text);
	x3 = x1 * x2 - y1 * y2;
	y3 = x1 * y2 + y1 * x2;
	textBox10->Text = Convert::ToString(x3);
	textBox11->Text = Convert::ToString(y3);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	x2 = 0; y2 = 0;//2-ое число обнуление
	textBox12->Text = Convert::ToString("0");
	textBox4->Text = Convert::ToString("0");
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	x1 = 0; y1 = 0;//1-ое число обнуление
	textBox9->Text = Convert::ToString("0");
	textBox3->Text = Convert::ToString("0");
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	x3 = 0; y3 = 0;
	textBox10->Text = Convert::ToString("0");
	textBox11->Text = Convert::ToString("0");
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	x1 = Convert::ToDouble(textBox19->Text);
	y1 = Convert::ToDouble(textBox20->Text);
	pank = sqrt(x1 * x1 + y1 * y1);
	R = atan(y1 / x1);
	textBox23->Text = Convert::ToString(pank);
	textBox22->Text = Convert::ToString(R);
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	x1 = Convert::ToDouble(textBox19->Text);
	y1 = Convert::ToDouble(textBox20->Text);
	pank = sqrt(x1 * x1 + y1 * y1);
	R = atan(y1 / x1);
	x3 = pank * (cos(R)) + sin(R);
	textBox21->Text = Convert::ToString(pank);
	textBox18->Text = Convert::ToString(R);
	textBox17->Text = Convert::ToString(R);
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	x1 = Convert::ToDouble(textBox21->Text);
	x3 = Convert::ToDouble(textBox18->Text);
	x3 = Convert::ToDouble(textBox17->Text);
	x2 = x1 * cos(x3);
	y2 = x1 * sin(x3);
	textBox19->Text = Convert::ToString(x2);
	textBox20->Text = Convert::ToString(y2);
}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	x2 = 0; y2 = 0;
	textBox12->Text = Convert::ToString("0");
	textBox4->Text = Convert::ToString("0");
}
private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	

}
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	x1 = 0; x2 = 0;
	textBox19->Text = Convert::ToString("0");
	textBox20->Text = Convert::ToString("0");
}
private: System::Void textBox19_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void textBox20_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	x2 = 0; y2 = 0;
	pank = 0; R = 0;
	textBox21->Text = Convert::ToString("0");
	textBox18->Text = Convert::ToString("0");
	textBox17->Text = Convert::ToString("0");
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	x2 = 0; y2 = 0;
	pank = 0; R = 0;
	textBox23->Text = Convert::ToString("0");
	textBox22->Text = Convert::ToString("0");
}
private: System::Void label27_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};

}
