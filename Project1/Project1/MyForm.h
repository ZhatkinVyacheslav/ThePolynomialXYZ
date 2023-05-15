#pragma once
#include "D:\prog\ThePolynomialXYZ\CmakePolinom\lib_LinTabMass/lib_LinTabMass.h"
#include "D:\prog\ThePolynomialXYZ\CmakePolinom\lib_polinom/lib_polinom.h"
//#include "D:\prog\ThePolynomialXYZ\CmakePolinom\lib_HashOpenShuffle/lib_HashOpenShuffle.h"
#include "D:\prog\ThePolynomialXYZ\CmakePolinom\lib_TabSearchTree/lib_TabSearchTree.h"
//#include "D:\prog\ThePolynomialXYZ\CmakePolinom\lib_LinTabList//lib_LinTabList.h"
#include "D:\prog\ThePolynomialXYZ\CmakePolinom\lib_HashOpenShuffle/lib_HashOpenShuffle.h"


namespace Project1 {

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
	private: System::Windows::Forms::TextBox^ textBox7;
	public:
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
		   int size = 0;
		  /* LinTabMass lnt;*/
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

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ выборТаблицыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ линейнаяТаблицаНаМассивеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ линейнаяТаблицаНаЛистеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ хештаблицаСОткрытмПеремешиваниемToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ хештаблицаСоСпискамиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ аВЛДеревоToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ упорядоченнаяТаблицаToolStripMenuItem;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;


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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->выборТаблицыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->линейнаяТаблицаНаМассивеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->линейнаяТаблицаНаЛистеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->хештаблицаСОткрытмПеремешиваниемToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->хештаблицаСоСпискамиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->аВЛДеревоToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->упорядоченнаяТаблицаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(236, 56);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(388, 347);
			this->dataGridView1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(232, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Алгебра полиномов";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->выборТаблицыToolStripMenuItem,
					this->toolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(624, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// выборТаблицыToolStripMenuItem
			// 
			this->выборТаблицыToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->линейнаяТаблицаНаМассивеToolStripMenuItem,
					this->линейнаяТаблицаНаЛистеToolStripMenuItem, this->хештаблицаСОткрытмПеремешиваниемToolStripMenuItem, this->хештаблицаСоСпискамиToolStripMenuItem,
					this->аВЛДеревоToolStripMenuItem, this->упорядоченнаяТаблицаToolStripMenuItem
			});
			this->выборТаблицыToolStripMenuItem->Name = L"выборТаблицыToolStripMenuItem";
			this->выборТаблицыToolStripMenuItem->Size = System::Drawing::Size(107, 20);
			this->выборТаблицыToolStripMenuItem->Text = L"Выбор таблицы";
			// 
			// линейнаяТаблицаНаМассивеToolStripMenuItem
			// 
			this->линейнаяТаблицаНаМассивеToolStripMenuItem->Name = L"линейнаяТаблицаНаМассивеToolStripMenuItem";
			this->линейнаяТаблицаНаМассивеToolStripMenuItem->Size = System::Drawing::Size(311, 22);
			this->линейнаяТаблицаНаМассивеToolStripMenuItem->Text = L"Линейная таблица на массиве ";
			// 
			// линейнаяТаблицаНаЛистеToolStripMenuItem
			// 
			this->линейнаяТаблицаНаЛистеToolStripMenuItem->Name = L"линейнаяТаблицаНаЛистеToolStripMenuItem";
			this->линейнаяТаблицаНаЛистеToolStripMenuItem->Size = System::Drawing::Size(311, 22);
			this->линейнаяТаблицаНаЛистеToolStripMenuItem->Text = L"Линейная таблица на листе";
			// 
			// хештаблицаСОткрытмПеремешиваниемToolStripMenuItem
			// 
			this->хештаблицаСОткрытмПеремешиваниемToolStripMenuItem->Name = L"хештаблицаСОткрытмПеремешиваниемToolStripMenuItem";
			this->хештаблицаСОткрытмПеремешиваниемToolStripMenuItem->Size = System::Drawing::Size(311, 22);
			this->хештаблицаСОткрытмПеремешиваниемToolStripMenuItem->Text = L"Хеш-таблица с открытм перемешиванием";
			// 
			// хештаблицаСоСпискамиToolStripMenuItem
			// 
			this->хештаблицаСоСпискамиToolStripMenuItem->Name = L"хештаблицаСоСпискамиToolStripMenuItem";
			this->хештаблицаСоСпискамиToolStripMenuItem->Size = System::Drawing::Size(311, 22);
			this->хештаблицаСоСпискамиToolStripMenuItem->Text = L"Хеш-таблица со списками";
			// 
			// аВЛДеревоToolStripMenuItem
			// 
			this->аВЛДеревоToolStripMenuItem->Name = L"аВЛДеревоToolStripMenuItem";
			this->аВЛДеревоToolStripMenuItem->Size = System::Drawing::Size(311, 22);
			this->аВЛДеревоToolStripMenuItem->Text = L"АВЛ дерево";
			// 
			// упорядоченнаяТаблицаToolStripMenuItem
			// 
			this->упорядоченнаяТаблицаToolStripMenuItem->Name = L"упорядоченнаяТаблицаToolStripMenuItem";
			this->упорядоченнаяТаблицаToolStripMenuItem->Size = System::Drawing::Size(311, 22);
			this->упорядоченнаяТаблицаToolStripMenuItem->Text = L"Упорядоченная таблица";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(25, 20);
			this->toolStripMenuItem1->Text = L"  ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(0, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Название:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(82, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Полином:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(3, 73);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(76, 20);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(85, 72);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(145, 20);
			this->textBox2->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Info;
			this->button1->Location = System::Drawing::Point(97, 96);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 43);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Добавить полином";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Info;
			this->button2->Location = System::Drawing::Point(97, 137);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 42);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Изменить полином";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(0, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 83);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Для изменения полинома, нужно вписать название уже существующего полинома";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(0, 252);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Название1:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(121, 252);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Название2:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(3, 268);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 12;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(124, 268);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(106, 20);
			this->textBox4->TabIndex = 13;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Info;
			this->button3->Location = System::Drawing::Point(3, 294);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 23);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Сумма";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Info;
			this->button4->Location = System::Drawing::Point(59, 294);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(71, 23);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Разность";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Info;
			this->button5->Location = System::Drawing::Point(136, 294);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(94, 23);
			this->button5->TabIndex = 16;
			this->button5->Text = L"Произведение";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(3, 365);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(47, 20);
			this->textBox5->TabIndex = 17;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Info;
			this->button6->Location = System::Drawing::Point(136, 364);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(94, 21);
			this->button6->TabIndex = 18;
			this->button6->Text = L"Произведение на число ";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(0, 333);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 29);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Множитель число:";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(3, 434);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(47, 20);
			this->textBox6->TabIndex = 20;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Info;
			this->button7->Location = System::Drawing::Point(164, 417);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 37);
			this->button7->TabIndex = 21;
			this->button7->Text = L"Производная ";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(0, 388);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(111, 43);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Введите по какой переменной искать производную:";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::Info;
			this->button8->Location = System::Drawing::Point(456, 417);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(115, 37);
			this->button8->TabIndex = 23;
			this->button8->Text = L"Закрыть ";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::Info;
			this->button9->Location = System::Drawing::Point(336, 417);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(125, 37);
			this->button9->TabIndex = 24;
			this->button9->Text = L"Очистить";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(56, 365);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(74, 20);
			this->textBox7->TabIndex = 25;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(59, 433);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(99, 20);
			this->textBox8->TabIndex = 26;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(98, 417);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(60, 13);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Название:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(70, 349);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(60, 13);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Название:";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(3, 214);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(79, 20);
			this->textBox9->TabIndex = 29;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(0, 198);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(60, 13);
			this->label11->TabIndex = 30;
			this->label11->Text = L"Название:";
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::Info;
			this->button10->Location = System::Drawing::Point(83, 214);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 31;
			this->button10->Text = L"Удалить";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::Info;
			this->button11->Location = System::Drawing::Point(155, 214);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 32;
			this->button11->Text = L"Найти";
			this->button11->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(624, 456);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Columns->Add("Name", "Name");
		dataGridView1->Columns->Add("Polinom", "Polinom");
		for (int i = 0; i < 15; i++) {
			dataGridView1->Rows->Add();
		}

		dataGridView1->Rows[0]->Cells[0]->Value = "name1";
		dataGridView1->Rows[1]->Cells[0]->Value = "name2";
		dataGridView1->Rows[0]->Cells[1]->Value = "2 x^2 y^2 z^2 + 3x^4";
		dataGridView1->Rows[1]->Cells[1]->Value = "x y^2 + 2 x^2 y^2 z^2";
		size = 2;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Rows[size]->Cells[0]->Value = textBox1->Text;
		dataGridView1->Rows[size]->Cells[1]->Value = textBox2->Text;
		size++;
	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

		  
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { 
		for (int i = 0; i < size; i++)
		{
			if (dataGridView1->Rows[i]->Cells[0]->Value == textBox1->Text) dataGridView1->Rows[i]->Cells[1]->Value = textBox2->Text;
		}

	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ result = "4 x^2 y^2 z^2 + 3 x^4 + x y^2";
		MessageBox::Show(result, "MessageBox Test",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ result = "3x^4 - x y ^ 2";
		MessageBox::Show(result, "MessageBox Test",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ result = "2 x^3 y^4 z^2 + 4x^4 y^4 z^4 + 2 x^5 y^2 + 3 x^6 y^2 z^2";
		MessageBox::Show(result, "MessageBox Test",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ result = "";
			if (textBox6->Text == "x") result = "4 x y^2 z^2 + 12x^3";
			else if (textBox6->Text == "y") result = "4 x^2 y z^2 + 3x^3";
			else if (textBox6->Text == "z")  result = "4 x^2 y^2 z + 3x^3";
			else  result = "Такой переменной нет";
			
			MessageBox::Show(result, "MessageBox Test",
				MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ result = "";
		if (textBox5->Text == "2") result = "4 x^2 y^2 z^2 + 3x^4";
		else if (textBox5->Text == "3") result = "6 x^2 y^2 z^2 + 3x^4";
		else if (textBox5->Text == "4")  result = "8 x^2 y^2 z^2 + 3x^4";
		else  result = "Извините, я это не продумал";

		MessageBox::Show(result, "MessageBox Test",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}

	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";
		textBox7->Text = "";
		textBox8->Text = "";
		textBox9->Text = "";
	}

	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ DeleteName = textBox9->Text;
		for (int i = 0; i < 15; i++) {
			if (dataGridView1->Rows[i]->Cells[0]->Value == DeleteName) {
				dataGridView1->Rows[i]->Cells[0]->Value = "";
				dataGridView1->Rows[i]->Cells[1]->Value = "";
			}
		}
	}
};
}
