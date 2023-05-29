#pragma once
#include<cmath>
namespace Quadraticequations {

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
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::CheckBox^ check1;
	private: System::Windows::Forms::CheckBox^ check2;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::CheckBox^ check3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->check1 = (gcnew System::Windows::Forms::CheckBox());
			this->check2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->check3 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(48, 73);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(180, 80);
			this->textBox3->TabIndex = 28;
			this->textBox3->Text = L"Дискриминант";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(48, 12);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 3, 4, 3);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(722, 46);
			this->textBox1->TabIndex = 29;
			this->textBox1->Text = L"Каким способом решать данное уравнение\?";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Silver;
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(663, 526);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(151, 55);
			this->button5->TabIndex = 41;
			this->button5->Text = L"Очистить";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Silver;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(23, 604);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 32);
			this->label3->TabIndex = 40;
			this->label3->Text = L"Ответ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Silver;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(336, 437);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(161, 37);
			this->label2->TabIndex = 39;
			this->label2->Text = L"Уравнение";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Silver;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(663, 604);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(151, 55);
			this->button3->TabIndex = 38;
			this->button3->Text = L"Решить";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox9
			// 
			this->textBox9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox9->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(563, 269);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(146, 61);
			this->textBox9->TabIndex = 37;
			this->textBox9->Text = L"с ";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox8->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(351, 269);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(146, 61);
			this->textBox8->TabIndex = 36;
			this->textBox8->Text = L"b";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox7->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(167, 269);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(146, 61);
			this->textBox7->TabIndex = 35;
			this->textBox7->Text = L"a , a<>0";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(351, 351);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(146, 61);
			this->textBox6->TabIndex = 34;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(563, 351);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(146, 61);
			this->textBox5->TabIndex = 33;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(167, 352);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(146, 61);
			this->textBox4->TabIndex = 32;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoEllipsis = true;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(274, 352);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 37);
			this->label1->TabIndex = 31;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox2->Location = System::Drawing::Point(202, 197);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(466, 43);
			this->textBox2->TabIndex = 30;
			this->textBox2->Text = L"Введите коэффициенты:";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// check1
			// 
			this->check1->AutoSize = true;
			this->check1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->check1->Location = System::Drawing::Point(58, 144);
			this->check1->Name = L"check1";
			this->check1->Size = System::Drawing::Size(170, 29);
			this->check1->TabIndex = 42;
			this->check1->Text = L"Подтвердить";
			this->check1->UseVisualStyleBackColor = true;
			this->check1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::check1_CheckedChanged);
			// 
			// check2
			// 
			this->check2->AutoSize = true;
			this->check2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->check2->Location = System::Drawing::Point(351, 144);
			this->check2->Name = L"check2";
			this->check2->Size = System::Drawing::Size(170, 29);
			this->check2->TabIndex = 43;
			this->check2->Text = L"Подтвердить";
			this->check2->UseVisualStyleBackColor = true;
			this->check2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::check2_CheckedChanged);
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox10->Location = System::Drawing::Point(336, 73);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(180, 80);
			this->textBox10->TabIndex = 44;
			this->textBox10->Text = L"Завершение квадрата";
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox11->Location = System::Drawing::Point(590, 73);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(180, 80);
			this->textBox11->TabIndex = 45;
			this->textBox11->Text = L"Теорема Виета";
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// check3
			// 
			this->check3->AutoSize = true;
			this->check3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->check3->Location = System::Drawing::Point(600, 144);
			this->check3->Name = L"check3";
			this->check3->Size = System::Drawing::Size(170, 29);
			this->check3->TabIndex = 46;
			this->check3->Text = L"Подтвердить";
			this->check3->UseVisualStyleBackColor = true;
			this->check3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::check3_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(848, 681);
			this->Controls->Add(this->check3);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->check2);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->check1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox3);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void check2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (check2->Checked) {
		check1->Checked = false;
		check3->Checked = false;
	}
	else {

	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check1->Checked) {

		double a = System::Convert::ToDouble(textBox4->Text);
		double b = System::Convert::ToDouble(textBox6->Text);
		double c = System::Convert::ToDouble(textBox5->Text);


		if (b > 0 && c > 0) {

			label2->Text = a + "x^2 + " + b + "x + " + c + " = 0";
		}
		else if (b < 0 && c>0) {

			label2->Text = a + "x^2 " + b + "x + " + c + " = 0";

		}

		else if (b > 0 && c < 0) {

			label2->Text = a + "x^2 + " + b + "x " + c + " = 0";
		}
		else if (b < 0 && c < 0) {

			label2->Text = a + "x^2 " + b + "x " + c + " = 0";
		}

		if (a == 0) {

			label2->Text = "Ошибка:a должно быть > 0!";


		}
		else {
			double D = b * b - 4 * a * c;
			if (D > 0) {

				double x1 = (-b + sqrt(D)) / (2 * a);
				double x2 = (-b - sqrt(D)) / (2 * a);
				label3->Text = "x1 = " + round(x1 * 10000) / 10000 + ";" + "x2 = " + round(x2 * 10000) / 10000;

			}
			else if (D == 0) {

				double x = (-b / (2 * a));

				label3->Text = "x = " + x;
			}
			else {

				label3->Text = "нет корней";

			}


		}
	}

	if (check3->Checked) {

		double a = System::Convert::ToDouble(textBox4->Text);
		double b = System::Convert::ToDouble(textBox6->Text);
		double c = System::Convert::ToDouble(textBox5->Text);
		if (b > 0 && c > 0) {

			label2->Text = a + "x^2 + " + b + "x + " + c + " = 0";
		}
		else if (b < 0 && c>0) {

			label2->Text = a + "x^2 " + b + "x + " + c + " = 0";

		}

		else if (b > 0 && c < 0) {

			label2->Text = a + "x^2 + " + b + "x " + c + " = 0";
		}
		else if (b < 0 && c < 0) {

			label2->Text = a + "x^2 " + b + "x " + c + " = 0";
		}
		if (a == 0) {

			label2->Text = "Ошибка:a должно быть > 0!";

		}
		else {
			double x1, x2, D, x;
			D = b * b - 4 * a * c;

			if (D == 0) {
				x = -b / (2 * a);

				label3->Text = "x = " + x;
			}
			else if (D > 0) {
				x1 = (-b + sqrt(D)) / (2 * a);
				x2 = (-b - sqrt(D)) / (2 * a);
				if (x1 + x2 == -b / a && x1 * x2 == c / a) {
					label3->Text = "x1 = " + round(x1 * 10000) / 10000 + ";" + "x2 = " + round(x2 * 10000) / 10000 + " " + "(Корни удовлетворяют теореме Виета)";

				}
				else {
					label3->Text = "Корни не удовлетворяют теореме Виета";
				}
			}
			else {
				label3->Text = "Нет корней";
			}
		}
	}

	if (check2->Checked) {
		double a = System::Convert::ToDouble(textBox4->Text);
		double b = System::Convert::ToDouble(textBox6->Text);
		double c = System::Convert::ToDouble(textBox5->Text);
		if (b > 0 && c > 0) {

			label2->Text = a + "x^2 + " + b + "x + " + c + " = 0";
		}
		else if (b < 0 && c>0) {

			label2->Text = a + "x^2 " + b + "x + " + c + " = 0";

		}

		else if (b > 0 && c < 0) {

			label2->Text = a + "x^2 + " + b + "x " + c + " = 0";
		}
		else if (b < 0 && c < 0) {

			label2->Text = a + "x^2 " + b + "x " + c + " = 0";
		}

		if (a == 0) {
			label2->Text = "Ошибка:a должно быть > 0!";
		}
		else {
			double x1, x2, h, k, D, x;
			D = b * b - 4 * a * c;
			h = -b / (2 * a);
			k = c - (b * b) / (4 * a);
			if (D < 0) {

				label3->Text = "Нет корней";

			}
			else if (D == 0) {

				x = -h;
				label3->Text = "x = " + x;


			}
			else {

				x1 = h + sqrt(D) / (2 * a);
				x2 = h - sqrt(D) / (2 * a);
				label3->Text = "x1 = " + round(x1 * 10000) / 10000 + ";" + "x2=" + round(x2 * 10000) / 10000;

			}
		}
	}
}

private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	   {
		   if (!(e->KeyChar == 8 || (e->KeyChar >= 48 && e->KeyChar <= 57) || e->KeyChar == 46 || e->KeyChar == 45))
		   {
			   e->Handled = true;
		   }
	   }


private: System::Void check1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (check1->Checked) {
		check3->Checked = false;
		check2->Checked = false;
	}
	else {

	}
}
private: System::Void check3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (check3->Checked) {
		check1->Checked = false;
		check2->Checked = false;
	}
	else {

	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox4->Text = "";
	textBox6->Text = "";
	textBox5->Text = "";
	label2->Text ="";
}
};

}
