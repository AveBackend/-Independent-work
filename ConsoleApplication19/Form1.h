#pragma once

#define ValidatorAssert(ACTION) if (!(ACTION)) return false;
#define ValidatorAssertTrigger(ACTION) if (ACTION) return false;

namespace ConsoleApplication19 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	array<String^>^ items_;
	public:
		Form1(array<String^>^ items)
		{
			this->items_ = items;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Сумма";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(147, 6);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1215752191, 23, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1001, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Способ оплаты";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"наличные", L"карта", L"перевод" });
			this->comboBox1->SelectedIndex = 1;
			this->comboBox1->Location = System::Drawing::Point(147, 47);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(119, 21);
			this->comboBox1->TabIndex = 3;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"сбер", L"тинькофф" });
			this->comboBox2->Location = System::Drawing::Point(147, 81);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(119, 21);
			this->comboBox2->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Банк";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 120);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Телефон";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(147, 117);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(117, 20);
			this->textBox1->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 147);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Список товаров";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(13, 164);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(249, 133);
			this->richTextBox1->TabIndex = 9;
			this->richTextBox1->Text = String::Join("\n", this->items_);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 317);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(246, 33);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Готово";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(278, 358);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool ValidateForm()
		{
			// Сумма больше 1000
			ValidatorAssert(numericUpDown1->Value > 1000);
			// Список товаров содержит минимум 1 товар
			ValidatorAssert(richTextBox1->Text->Split('\n')->Length > 0);
			// Если выбраны наличные
			if (comboBox1->SelectedItem == "наличные")
			{
				// Не указан номер
				ValidatorAssert(textBox1->Text == "");
				// Не указан банк
				ValidatorAssert(comboBox2->SelectedItem == nullptr || comboBox2->SelectedItem == "");
			} else if (comboBox1->SelectedItem == "карта")
			{
				// Не указан номер
				ValidatorAssert(textBox1->Text == "");
				// Указан банк
				ValidatorAssertTrigger(comboBox2->SelectedItem == nullptr || comboBox2->SelectedItem == "");
			} else if (comboBox1->SelectedItem == "перевод")
			{
				// Не указан банк
				ValidatorAssert(comboBox2->SelectedItem == nullptr || comboBox2->SelectedItem == "");
				// Указан номер
				ValidatorAssertTrigger(textBox1->Text == "");
			}
			return true;

		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!ValidateForm())
		{
			MessageBox::Show("Ошибка валидации", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		} else
		{
			MessageBox::Show("Валидация пройдена", "Успешно", MessageBoxButtons::OK);
		}
	}
};
}
