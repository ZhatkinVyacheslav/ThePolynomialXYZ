#pragma once
#include "Funks.h"


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
			this->dataGridView1->Location = System::Drawing::Point(315, 69);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(517, 427);
			this->dataGridView1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(309, 30);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
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
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(837, 24);
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
			this->линейнаяТаблицаНаМассивеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::линейнаяТаблицаНаМассивеToolStripMenuItem_Click);
			// 
			// линейнаяТаблицаНаЛистеToolStripMenuItem
			// 
			this->линейнаяТаблицаНаЛистеToolStripMenuItem->Name = L"линейнаяТаблицаНаЛистеToolStripMenuItem";
			this->линейнаяТаблицаНаЛистеToolStripMenuItem->Size = System::Drawing::Size(311, 22);
			this->линейнаяТаблицаНаЛистеToolStripMenuItem->Text = L"Линейная таблица на листе";
			this->линейнаяТаблицаНаЛистеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::линейнаяТаблицаНаЛистеToolStripMenuItem_Click);
			// 
			// хештаблицаСОткрытмПеремешиваниемToolStripMenuItem
			// 
			this->хештаблицаСОткрытмПеремешиваниемToolStripMenuItem->Name = L"хештаблицаСОткрытмПеремешиваниемToolStripMenuItem";
			this->хештаблицаСОткрытмПеремешиваниемToolStripMenuItem->Size = System::Drawing::Size(311, 22);
			this->хештаблицаСОткрытмПеремешиваниемToolStripMenuItem->Text = L"Хеш-таблица с открытм перемешиванием";
			this->хештаблицаСОткрытмПеремешиваниемToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::хештаблицаСОткрытмПеремешиваниемToolStripMenuItem_Click);
			// 
			// хештаблицаСоСпискамиToolStripMenuItem
			// 
			this->хештаблицаСоСпискамиToolStripMenuItem->Name = L"хештаблицаСоСпискамиToolStripMenuItem";
			this->хештаблицаСоСпискамиToolStripMenuItem->Size = System::Drawing::Size(311, 22);
			this->хештаблицаСоСпискамиToolStripMenuItem->Text = L"Хеш-таблица со списками";
			this->хештаблицаСоСпискамиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::хештаблицаСоСпискамиToolStripMenuItem_Click);
			// 
			// аВЛДеревоToolStripMenuItem
			// 
			this->аВЛДеревоToolStripMenuItem->Name = L"аВЛДеревоToolStripMenuItem";
			this->аВЛДеревоToolStripMenuItem->Size = System::Drawing::Size(311, 22);
			this->аВЛДеревоToolStripMenuItem->Text = L"АВЛ дерево";
			this->аВЛДеревоToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::аВЛДеревоToolStripMenuItem_Click);
			// 
			// упорядоченнаяТаблицаToolStripMenuItem
			// 
			this->упорядоченнаяТаблицаToolStripMenuItem->Name = L"упорядоченнаяТаблицаToolStripMenuItem";
			this->упорядоченнаяТаблицаToolStripMenuItem->Size = System::Drawing::Size(311, 22);
			this->упорядоченнаяТаблицаToolStripMenuItem->Text = L"Упорядоченная таблица";
			this->упорядоченнаяТаблицаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::упорядоченнаяТаблицаToolStripMenuItem_Click);
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
			this->label2->Location = System::Drawing::Point(0, 69);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Название:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(109, 69);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Полином:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(4, 90);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(113, 89);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(192, 22);
			this->textBox2->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Info;
			this->button1->Location = System::Drawing::Point(129, 118);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 53);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Добавить полином";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Info;
			this->button2->Location = System::Drawing::Point(129, 169);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(177, 52);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Изменить полином";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(0, 118);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(121, 102);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Для изменения полинома, нужно вписать название уже существующего полинома";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(0, 310);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Название1:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(161, 310);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 16);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Название2:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(4, 330);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(132, 22);
			this->textBox3->TabIndex = 12;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(165, 330);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(140, 22);
			this->textBox4->TabIndex = 13;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Info;
			this->button3->Location = System::Drawing::Point(4, 362);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(67, 28);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Сумма";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Info;
			this->button4->Location = System::Drawing::Point(79, 362);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(95, 28);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Разность";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Info;
			this->button5->Location = System::Drawing::Point(181, 362);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(125, 28);
			this->button5->TabIndex = 16;
			this->button5->Text = L"Произведение";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(4, 449);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(61, 22);
			this->textBox5->TabIndex = 17;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Info;
			this->button6->Location = System::Drawing::Point(181, 448);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(125, 26);
			this->button6->TabIndex = 18;
			this->button6->Text = L"Произведение на число ";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(0, 410);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(101, 36);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Множитель число:";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(4, 534);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(61, 22);
			this->textBox6->TabIndex = 20;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Info;
			this->button7->Location = System::Drawing::Point(219, 513);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(133, 46);
			this->button7->TabIndex = 21;
			this->button7->Text = L"Производная ";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(0, 478);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(148, 53);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Введите по какой переменной искать производную:";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::Info;
			this->button8->Location = System::Drawing::Point(608, 504);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(167, 55);
			this->button8->TabIndex = 23;
			this->button8->Text = L"Закрыть ";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::Info;
			this->button9->Location = System::Drawing::Point(435, 504);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(180, 55);
			this->button9->TabIndex = 24;
			this->button9->Text = L"Очистить";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(75, 449);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(97, 22);
			this->textBox7->TabIndex = 25;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(79, 533);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(131, 22);
			this->textBox8->TabIndex = 26;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(131, 513);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(76, 16);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Название:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(93, 430);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(76, 16);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Название:";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(4, 263);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(104, 22);
			this->textBox9->TabIndex = 29;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(0, 244);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(76, 16);
			this->label11->TabIndex = 30;
			this->label11->Text = L"Название:";
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::Info;
			this->button10->Location = System::Drawing::Point(111, 263);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(100, 28);
			this->button10->TabIndex = 31;
			this->button10->Text = L"Удалить";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::Info;
			this->button11->Location = System::Drawing::Point(207, 263);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(100, 28);
			this->button11->TabIndex = 32;
			this->button11->Text = L"Найти";
			this->button11->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(837, 567);
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
			this->Margin = System::Windows::Forms::Padding(4);
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
		dataGridView1->Columns->Add("Название", "Название");
		dataGridView1->Columns->Add("Полином", "Полином");
		for (int i = 0; i < 15; i++) {
			dataGridView1->Rows->Add();
		}
		size = 0;
	}
		   // Добавление полинома 
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Rows[size]->Cells[0]->Value = textBox1->Text;
		dataGridView1->Rows[size]->Cells[1]->Value = textBox2->Text;
		add(To_string(textBox1->Text), To_string(textBox2->Text));
		size++;
		print();
	}
		   // Закрытие программы 
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

		  // Изменение полнома по названию 
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { 
		findAndReplace(To_string(textBox1->Text), To_string(textBox2->Text));
		print();
	}
		   // Сумма полиномов 
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(To_SysString(plus(To_string(textBox3->Text), To_string(textBox4->Text))), "MessageBox Test",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
		   //Разность полиномов
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(To_SysString(minus(To_string(textBox3->Text), To_string(textBox4->Text))), "MessageBox Test",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
		   //Произведение полиномов
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		MessageBox::Show(To_SysString(multuply(To_string(textBox3->Text), To_string(textBox4->Text))), "MessageBox for multuply",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
		   //Производная полиномов 
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ result = "";
			if (textBox6->Text == "x") result = To_SysString(Derivative(To_string(textBox8->Text),1));
			else if (textBox6->Text == "y") result = To_SysString(Derivative(To_string(textBox8->Text), 2));
			else if (textBox6->Text == "z") result = To_SysString(Derivative(To_string(textBox8->Text), 3));
			else  result = "Такой переменной нет";
			
			MessageBox::Show(result, "MessageBox for derivative",
				MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
		   // Произведение полинома на число 
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		int number = std::stoi(To_string(textBox5->Text));
		MessageBox::Show(To_SysString(multuplyOnNumber(	To_string(textBox7->Text), number)), "MessageBox for multuply on number",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
		   // Кнопка очитски текст боксов
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
		   // Удаление полинома
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		remove(To_string(textBox9->Text));
		size--;
		print();
	}
		   // Вывод полиномов в форму из выбанной таблицы
	private: void print() {
		if (size == 0) {
			for (int i = 0; i < 15; i++) {
				dataGridView1->Rows[i]->Cells[0]->Value = " ";
				dataGridView1->Rows[i]->Cells[1]->Value = " ";
			}
		}
		for (int i = 0; i < size; i++) {
			dataGridView1->Rows[i]->Cells[0]->Value = To_SysString(StrPrint()[i].first);
			dataGridView1->Rows[i]->Cells[1]->Value = To_SysString(StrPrint()[i].second);
		}
	}
		   //Выбор таблиыц 
private: System::Void линейнаяТаблицаНаМассивеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	mode = 0;
	print();
}
private: System::Void линейнаяТаблицаНаЛистеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	mode = 1;
	print();
}
private: System::Void хештаблицаСОткрытмПеремешиваниемToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	mode = 3;
	print();
}
private: System::Void хештаблицаСоСпискамиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	mode = 4;
	print();
}
private: System::Void упорядоченнаяТаблицаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	mode = 2;
	print();
}
private: System::Void аВЛДеревоToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	mode = 5;
	print();
}

};
}
