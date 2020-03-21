#pragma once
#include<cmath>
namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Сводка для MyForm
	/// </summary>

	double linear(double x, double a, double b)
	{
		return a * x + b;
	}
	double squared(double x, double a, double b, double c)
	{
		return a * pow(x,2) + b * x + c;
	}
	double cubic(double x, double a, double b, double c, double d)
	{
		return a * pow(x,3) + b * pow(x,2) + c * x + d;
	}
	double sinus(double x, double a, double b)
	{
		return Math::Sin(a * x + b);
	}
	double cosinus(double x, double a, double b)
	{
		return Math::Cos(a * x + b);
	}
	long double expon(double x, double a)
	{
		return a * (Math::Exp(x));
	}

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
	private: System::Windows::Forms::Label^ label_author;
	protected:
	private: System::Windows::Forms::Button^ close_button;
	private: System::Windows::Forms::PictureBox^ picture_box;

	private: System::Windows::Forms::Button^ save_button;
	private: System::Windows::Forms::Button^ upload_button;
	private: System::Windows::Forms::Button^ generate_button;
	private: System::Windows::Forms::GroupBox^ generator_box;
	private: System::Windows::Forms::ComboBox^ number_of_dots_box;
	private: System::Windows::Forms::Label^ number_of_dots_label;
	private: System::Windows::Forms::TextBox^ x2_box;

	private: System::Windows::Forms::Label^ x2_2_label;
	private: System::Windows::Forms::Label^ x2_label;
	private: System::Windows::Forms::TextBox^ x1_box;

	private: System::Windows::Forms::Label^ x1_1_label;
	private: System::Windows::Forms::Label^ x1_label;
	private: System::Windows::Forms::Label^ reg_label;

	private: System::Windows::Forms::Label^ func_label;

	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Label^ d_label;
	private: System::Windows::Forms::Label^ c_label;
	private: System::Windows::Forms::Label^ b_label;
	private: System::Windows::Forms::Label^ a_label;
	private: System::Windows::Forms::TextBox^ d_box;
	private: System::Windows::Forms::TextBox^ c_box;
	private: System::Windows::Forms::TextBox^ b_box;
	private: System::Windows::Forms::TextBox^ a_box;
	private: System::Windows::Forms::ComboBox^ function_box;
	private: System::Drawing::Bitmap^ Img;
	private: String^ upstring;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog2;
	private: System::Windows::Forms::Button^ clear_button;

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
			this->label_author = (gcnew System::Windows::Forms::Label());
			this->close_button = (gcnew System::Windows::Forms::Button());
			this->picture_box = (gcnew System::Windows::Forms::PictureBox());
			this->save_button = (gcnew System::Windows::Forms::Button());
			this->upload_button = (gcnew System::Windows::Forms::Button());
			this->generate_button = (gcnew System::Windows::Forms::Button());
			this->generator_box = (gcnew System::Windows::Forms::GroupBox());
			this->d_label = (gcnew System::Windows::Forms::Label());
			this->c_label = (gcnew System::Windows::Forms::Label());
			this->b_label = (gcnew System::Windows::Forms::Label());
			this->a_label = (gcnew System::Windows::Forms::Label());
			this->d_box = (gcnew System::Windows::Forms::TextBox());
			this->c_box = (gcnew System::Windows::Forms::TextBox());
			this->b_box = (gcnew System::Windows::Forms::TextBox());
			this->a_box = (gcnew System::Windows::Forms::TextBox());
			this->function_box = (gcnew System::Windows::Forms::ComboBox());
			this->number_of_dots_box = (gcnew System::Windows::Forms::ComboBox());
			this->number_of_dots_label = (gcnew System::Windows::Forms::Label());
			this->x2_box = (gcnew System::Windows::Forms::TextBox());
			this->x2_2_label = (gcnew System::Windows::Forms::Label());
			this->x2_label = (gcnew System::Windows::Forms::Label());
			this->x1_box = (gcnew System::Windows::Forms::TextBox());
			this->x1_1_label = (gcnew System::Windows::Forms::Label());
			this->x1_label = (gcnew System::Windows::Forms::Label());
			this->reg_label = (gcnew System::Windows::Forms::Label());
			this->func_label = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog2 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->clear_button = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_box))->BeginInit();
			this->generator_box->SuspendLayout();
			this->SuspendLayout();
			// 
			// label_author
			// 
			this->label_author->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_author->Location = System::Drawing::Point(391, 9);
			this->label_author->Name = L"label_author";
			this->label_author->Size = System::Drawing::Size(118, 18);
			this->label_author->TabIndex = 0;
			this->label_author->Text = L"Maksim Parnyakov";
			// 
			// close_button
			// 
			this->close_button->Location = System::Drawing::Point(797, 526);
			this->close_button->Name = L"close_button";
			this->close_button->Size = System::Drawing::Size(75, 23);
			this->close_button->TabIndex = 1;
			this->close_button->Text = L"Выйти";
			this->close_button->UseVisualStyleBackColor = true;
			this->close_button->Click += gcnew System::EventHandler(this, &MyForm::Close_button_Click);
			// 
			// picture_box
			// 
			this->picture_box->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->picture_box->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->picture_box->Location = System::Drawing::Point(257, 67);
			this->picture_box->Name = L"picture_box";
			this->picture_box->Size = System::Drawing::Size(600, 400);
			this->picture_box->TabIndex = 2;
			this->picture_box->TabStop = false;
			// 
			// save_button
			// 
			this->save_button->AutoSize = true;
			this->save_button->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->save_button->Location = System::Drawing::Point(420, 503);
			this->save_button->Name = L"save_button";
			this->save_button->Size = System::Drawing::Size(126, 26);
			this->save_button->TabIndex = 3;
			this->save_button->Text = L"Сохранить график";
			this->save_button->UseVisualStyleBackColor = true;
			this->save_button->Click += gcnew System::EventHandler(this, &MyForm::Save_button_Click);
			// 
			// upload_button
			// 
			this->upload_button->AutoSize = true;
			this->upload_button->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->upload_button->Location = System::Drawing::Point(257, 503);
			this->upload_button->Name = L"upload_button";
			this->upload_button->Size = System::Drawing::Size(126, 26);
			this->upload_button->TabIndex = 4;
			this->upload_button->Text = L"Загрузить данные";
			this->upload_button->UseVisualStyleBackColor = true;
			this->upload_button->Click += gcnew System::EventHandler(this, &MyForm::upload_button_Click);
			// 
			// generate_button
			// 
			this->generate_button->AutoSize = true;
			this->generate_button->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->generate_button->Location = System::Drawing::Point(31, 258);
			this->generate_button->Name = L"generate_button";
			this->generate_button->Size = System::Drawing::Size(156, 26);
			this->generate_button->TabIndex = 5;
			this->generate_button->Text = L"Сгенерировать данные";
			this->generate_button->UseVisualStyleBackColor = true;
			this->generate_button->Click += gcnew System::EventHandler(this, &MyForm::Generate_button_Click);
			// 
			// generator_box
			// 
			this->generator_box->BackColor = System::Drawing::SystemColors::Control;
			this->generator_box->Controls->Add(this->d_label);
			this->generator_box->Controls->Add(this->c_label);
			this->generator_box->Controls->Add(this->b_label);
			this->generator_box->Controls->Add(this->a_label);
			this->generator_box->Controls->Add(this->d_box);
			this->generator_box->Controls->Add(this->c_box);
			this->generator_box->Controls->Add(this->b_box);
			this->generator_box->Controls->Add(this->a_box);
			this->generator_box->Controls->Add(this->function_box);
			this->generator_box->Controls->Add(this->number_of_dots_box);
			this->generator_box->Controls->Add(this->number_of_dots_label);
			this->generator_box->Controls->Add(this->x2_box);
			this->generator_box->Controls->Add(this->x2_2_label);
			this->generator_box->Controls->Add(this->x2_label);
			this->generator_box->Controls->Add(this->x1_box);
			this->generator_box->Controls->Add(this->x1_1_label);
			this->generator_box->Controls->Add(this->x1_label);
			this->generator_box->Controls->Add(this->reg_label);
			this->generator_box->Controls->Add(this->func_label);
			this->generator_box->Controls->Add(this->generate_button);
			this->generator_box->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->generator_box->Location = System::Drawing::Point(12, 97);
			this->generator_box->Name = L"generator_box";
			this->generator_box->Size = System::Drawing::Size(218, 298);
			this->generator_box->TabIndex = 6;
			this->generator_box->TabStop = false;
			this->generator_box->Text = L"Генератор данных";
			// 
			// d_label
			// 
			this->d_label->AutoSize = true;
			this->d_label->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->d_label->Location = System::Drawing::Point(186, 91);
			this->d_label->Name = L"d_label";
			this->d_label->Size = System::Drawing::Size(17, 19);
			this->d_label->TabIndex = 25;
			this->d_label->Text = L"d";
			// 
			// c_label
			// 
			this->c_label->AutoSize = true;
			this->c_label->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->c_label->Location = System::Drawing::Point(131, 91);
			this->c_label->Name = L"c_label";
			this->c_label->Size = System::Drawing::Size(16, 19);
			this->c_label->TabIndex = 24;
			this->c_label->Text = L"c";
			// 
			// b_label
			// 
			this->b_label->AutoSize = true;
			this->b_label->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_label->Location = System::Drawing::Point(73, 91);
			this->b_label->Name = L"b_label";
			this->b_label->Size = System::Drawing::Size(17, 19);
			this->b_label->TabIndex = 23;
			this->b_label->Text = L"b";
			// 
			// a_label
			// 
			this->a_label->AutoSize = true;
			this->a_label->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->a_label->Location = System::Drawing::Point(16, 91);
			this->a_label->Name = L"a_label";
			this->a_label->Size = System::Drawing::Size(17, 19);
			this->a_label->TabIndex = 22;
			this->a_label->Text = L"a";
			// 
			// d_box
			// 
			this->d_box->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->d_box->Location = System::Drawing::Point(176, 112);
			this->d_box->Name = L"d_box";
			this->d_box->Size = System::Drawing::Size(36, 26);
			this->d_box->TabIndex = 21;
			this->d_box->Text = L"-";
			this->d_box->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->d_box->TextChanged += gcnew System::EventHandler(this, &MyForm::D_box_TextChanged);
			// 
			// c_box
			// 
			this->c_box->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->c_box->Location = System::Drawing::Point(120, 112);
			this->c_box->Name = L"c_box";
			this->c_box->Size = System::Drawing::Size(36, 26);
			this->c_box->TabIndex = 20;
			this->c_box->Text = L"-";
			this->c_box->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->c_box->TextChanged += gcnew System::EventHandler(this, &MyForm::C_box_TextChanged);
			// 
			// b_box
			// 
			this->b_box->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_box->Location = System::Drawing::Point(63, 112);
			this->b_box->Name = L"b_box";
			this->b_box->Size = System::Drawing::Size(36, 26);
			this->b_box->TabIndex = 19;
			this->b_box->Text = L"-";
			this->b_box->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->b_box->TextChanged += gcnew System::EventHandler(this, &MyForm::B_box_TextChanged);
			// 
			// a_box
			// 
			this->a_box->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->a_box->Location = System::Drawing::Point(6, 112);
			this->a_box->Name = L"a_box";
			this->a_box->Size = System::Drawing::Size(36, 26);
			this->a_box->TabIndex = 18;
			this->a_box->Text = L"-";
			this->a_box->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->a_box->TextChanged += gcnew System::EventHandler(this, &MyForm::a_box_TextChanged);
			// 
			// function_box
			// 
			this->function_box->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->function_box->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->function_box->FormattingEnabled = true;
			this->function_box->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"ax+b", L"ax^2+bx+c", L"ax^3+bx^2+cx+d", L"sin(ax+b)",
					L"cos(ax+b)", L"a*e(x)"
			});
			this->function_box->Location = System::Drawing::Point(6, 59);
			this->function_box->Name = L"function_box";
			this->function_box->Size = System::Drawing::Size(206, 27);
			this->function_box->TabIndex = 17;
			this->function_box->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::function_box_SelectedIndexChanged);
			// 
			// number_of_dots_box
			// 
			this->number_of_dots_box->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->number_of_dots_box->FormattingEnabled = true;
			this->number_of_dots_box->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"10", L"100", L"1000" });
			this->number_of_dots_box->Location = System::Drawing::Point(129, 213);
			this->number_of_dots_box->Name = L"number_of_dots_box";
			this->number_of_dots_box->Size = System::Drawing::Size(83, 24);
			this->number_of_dots_box->TabIndex = 16;
			this->number_of_dots_box->Text = L"10";
			// 
			// number_of_dots_label
			// 
			this->number_of_dots_label->AutoSize = true;
			this->number_of_dots_label->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->number_of_dots_label->Location = System::Drawing::Point(6, 217);
			this->number_of_dots_label->Name = L"number_of_dots_label";
			this->number_of_dots_label->Size = System::Drawing::Size(117, 16);
			this->number_of_dots_label->TabIndex = 15;
			this->number_of_dots_label->Text = L"Количество точек:";
			// 
			// x2_box
			// 
			this->x2_box->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->x2_box->Location = System::Drawing::Point(165, 171);
			this->x2_box->Name = L"x2_box";
			this->x2_box->Size = System::Drawing::Size(47, 26);
			this->x2_box->TabIndex = 14;
			this->x2_box->Text = L"10";
			this->x2_box->TextChanged += gcnew System::EventHandler(this, &MyForm::x2_box_TextChanged);
			// 
			// x2_2_label
			// 
			this->x2_2_label->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->x2_2_label->Location = System::Drawing::Point(131, 185);
			this->x2_2_label->Name = L"x2_2_label";
			this->x2_2_label->Size = System::Drawing::Size(10, 21);
			this->x2_2_label->TabIndex = 13;
			this->x2_2_label->Text = L"2";
			// 
			// x2_label
			// 
			this->x2_label->AutoSize = true;
			this->x2_label->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->x2_label->Location = System::Drawing::Point(119, 173);
			this->x2_label->Name = L"x2_label";
			this->x2_label->Size = System::Drawing::Size(40, 19);
			this->x2_label->TabIndex = 12;
			this->x2_label->Text = L"x   =";
			// 
			// x1_box
			// 
			this->x1_box->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->x1_box->Location = System::Drawing::Point(51, 171);
			this->x1_box->Name = L"x1_box";
			this->x1_box->Size = System::Drawing::Size(47, 26);
			this->x1_box->TabIndex = 11;
			this->x1_box->Text = L"-10";
			this->x1_box->TextChanged += gcnew System::EventHandler(this, &MyForm::x1_box_TextChanged);
			// 
			// x1_1_label
			// 
			this->x1_1_label->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->x1_1_label->Location = System::Drawing::Point(17, 184);
			this->x1_1_label->Name = L"x1_1_label";
			this->x1_1_label->Size = System::Drawing::Size(10, 23);
			this->x1_1_label->TabIndex = 10;
			this->x1_1_label->Text = L"1";
			// 
			// x1_label
			// 
			this->x1_label->AutoSize = true;
			this->x1_label->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->x1_label->Location = System::Drawing::Point(6, 173);
			this->x1_label->Name = L"x1_label";
			this->x1_label->Size = System::Drawing::Size(40, 19);
			this->x1_label->TabIndex = 9;
			this->x1_label->Text = L"x   =";
			// 
			// reg_label
			// 
			this->reg_label->AutoSize = true;
			this->reg_label->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->reg_label->Location = System::Drawing::Point(6, 153);
			this->reg_label->Name = L"reg_label";
			this->reg_label->Size = System::Drawing::Size(133, 16);
			this->reg_label->TabIndex = 8;
			this->reg_label->Text = L"Область построения:";
			// 
			// func_label
			// 
			this->func_label->AutoSize = true;
			this->func_label->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->func_label->Location = System::Drawing::Point(6, 34);
			this->func_label->Name = L"func_label";
			this->func_label->Size = System::Drawing::Size(117, 16);
			this->func_label->TabIndex = 6;
			this->func_label->Text = L"Функция y = y (x):";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"Текстовый файл|*.txt";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// saveFileDialog2
			// 
			this->saveFileDialog2->Filter = L"Точечный рисунок |*.bmp";
			// 
			// clear_button
			// 
			this->clear_button->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clear_button->Location = System::Drawing::Point(782, 473);
			this->clear_button->Name = L"clear_button";
			this->clear_button->Size = System::Drawing::Size(75, 26);
			this->clear_button->TabIndex = 7;
			this->clear_button->Text = L"Очистить";
			this->clear_button->UseVisualStyleBackColor = true;
			this->clear_button->Click += gcnew System::EventHandler(this, &MyForm::Clear_button_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 561);
			this->Controls->Add(this->clear_button);
			this->Controls->Add(this->generator_box);
			this->Controls->Add(this->upload_button);
			this->Controls->Add(this->save_button);
			this->Controls->Add(this->picture_box);
			this->Controls->Add(this->close_button);
			this->Controls->Add(this->label_author);
			this->Name = L"MyForm";
			this->Text = L"Ex 4 : Maksim Parnyakov";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_box))->EndInit();
			this->generator_box->ResumeLayout(false);
			this->generator_box->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Close_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Application::Exit();
	}
private: System::Void Generate_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
	bool correct = true;
	String^ s = "";
	if (function_box->Text == "")
	{
		MessageBox::Show("Выберите вид функции", "Функция не выбрана", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		correct = false;
	}
	else
	{	
		if (x1_box->Text != "" && x2_box->Text != "" && x1_box->Text != "-" && x2_box->Text != "-")
		{
			int number_of_dots = Convert::ToInt32(number_of_dots_box->Text);
			array<double>^ x_points = gcnew array<double>(number_of_dots);
			for (int i = 0; i < number_of_dots; i++)
			{
				x_points[i] = Convert::ToDouble(x1_box->Text) + i * ((Convert::ToDouble(x2_box->Text) - Convert::ToDouble(x1_box->Text)) / (Convert::ToDouble(number_of_dots_box->Text) - 1));
			}
			array<double> ^ y_points = gcnew array<double>(number_of_dots);
			if (function_box->Text == "ax+b")
			{
				if (a_box->Text != "" && b_box->Text != "" && a_box->Text != "-" && b_box->Text != "-")
				{
					for (int i = 0; i < number_of_dots; i++)
					{
						y_points[i] = linear(x_points[i], Convert::ToDouble(a_box->Text), Convert::ToDouble(b_box->Text));
						s = s + Convert::ToString(x_points[i]) + " " + Convert::ToString(y_points[i]) + "\n";
					}
					correct = true;
				}
				else
				{
					MessageBox::Show("Задайте коэффициенты", "Функция неопределена", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					correct = false;
				}

			}
			else if (function_box->Text == "ax^2+bx+c")
			{
				if (a_box->Text != "" && b_box->Text != "" && c_box->Text != "" && a_box->Text != "-" && b_box->Text != "-" && c_box->Text != "-")
				{
					for (int i = 0; i < number_of_dots; i++)
					{
						y_points[i] = squared(x_points[i], Convert::ToDouble(a_box->Text), Convert::ToDouble(b_box->Text), Convert::ToDouble(c_box->Text));
						s = s + Convert::ToString(x_points[i]) + " " + Convert::ToString(y_points[i]) + "\n";
					}
					correct = true;
				}
				else
				{
					MessageBox::Show("Задайте коэффициенты", "Функция неопределена", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					correct = false;
				}

			}
			else if (function_box->Text == "ax^3+bx^2+cx+d")
			{
				if (a_box->Text != "" && b_box->Text != "" && c_box->Text != "" && d_box->Text != "" && a_box->Text != "-" && b_box->Text != "-" && c_box->Text != "-" && d_box->Text != "-")
				{
					for (int i = 0; i < number_of_dots; i++)
					{
						y_points[i] = cubic(x_points[i], Convert::ToDouble(a_box->Text), Convert::ToDouble(b_box->Text), Convert::ToDouble(c_box->Text), Convert::ToDouble(d_box->Text));
						s = s + Convert::ToString(x_points[i]) + " " + Convert::ToString(y_points[i]) + "\n";
					}
					correct = true;
				}
				else
				{
					MessageBox::Show("Задайте коэффициенты", "Функция неопределена", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					correct = false;
				}
			}
			else if (function_box->Text == "sin(ax+b)")
			{
				if (a_box->Text != "" && b_box->Text != "" && a_box->Text != "-" && b_box->Text != "-")
				{
					for (int i = 0; i < number_of_dots; i++)
					{
						y_points[i] = sinus(x_points[i], Convert::ToDouble(a_box->Text), Convert::ToDouble(b_box->Text));
						s = s + Convert::ToString(x_points[i]) + " " + Convert::ToString(y_points[i]) + "\n";
					}
					correct = true;
				}
				else
				{
					MessageBox::Show("Задайте коэффициенты", "Функция неопределена", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					correct = false;
				}
			}
			else if (function_box->Text == "cos(ax+b)")
			{
				if (a_box->Text != "" && b_box->Text != "" && a_box->Text != "-" && b_box->Text != "-")
				{
					for (int i = 0; i < number_of_dots; i++)
					{
						y_points[i] = cosinus(x_points[i], Convert::ToDouble(a_box->Text), Convert::ToDouble(b_box->Text));
						s = s + Convert::ToString(x_points[i]) + " " + Convert::ToString(y_points[i]) + "\n";
					}
					correct = true;
				}
				else
				{
					MessageBox::Show("Задайте коэффициенты", "Функция неопределена", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					correct = false;
				}
			}
			else if (function_box->Text == "a*e(x)")
			{
				if (a_box->Text != "" && a_box->Text != "-")
				{
					for (int i = 0; i < number_of_dots; i++)
					{
						y_points[i] = expon(x_points[i], Convert::ToDouble(a_box->Text));
						s = s + Convert::ToString(x_points[i]) + " " + Convert::ToString(y_points[i]) + "\n";
					}
					correct = true;
				}
				else
				{
					MessageBox::Show("Задайте коэффициенты", "Функция неопределена", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					correct = false;
				}
			}
		}
		else
		{
			MessageBox::Show("Задайте границы промежутка", "Промежуток не выбран", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			correct = false;
		}
	}

	//
	//Диалог для сохранения массива точек
	//
	if (correct)
	{
		saveFileDialog1->ShowDialog();
		try
		{
			auto writer = gcnew IO::StreamWriter(saveFileDialog1->FileName, false);
			writer->Write(s);
			writer->Close();
		}
		catch (Exception ^ Ситуация)
		{
			MessageBox::Show(Ситуация->Message, "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
	//
	//
	//
	}
private: System::Void function_box_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
	if (function_box->Text == "ax+b")
		{
			a_box->Enabled = true;
			b_box->Enabled = true;
			a_box->Text = "1";
			b_box->Text = "0";
			c_box->Text = "-";
			d_box->Text = "-";
			c_box->Enabled = false;
			d_box->Enabled = false;
		}
	else if (function_box->Text == "ax^2+bx+c")
		{	
			a_box->Enabled = true;
			b_box->Enabled = true;
			c_box->Enabled = true;
			a_box->Text = "1";
			b_box->Text = "0";
			c_box->Text = "0";
			d_box->Text = "-";
			d_box->Enabled = false;
		}
	else if (function_box->Text == "ax^3+bx^2+cx+d")
		{
			a_box->Enabled = true;
			b_box->Enabled = true;
			c_box->Enabled = true;
			d_box->Enabled = true;
			a_box->Text = "1";
			b_box->Text = "0";
			c_box->Text = "0";
			d_box->Text = "0";
		}
	else if (function_box->Text == "sin(ax+b)")
		{
			a_box->Enabled = true;
			b_box->Enabled = true;
			a_box->Text = "1";
			b_box->Text = "0";
			c_box->Text = "-";
			d_box->Text = "-";
			c_box->Enabled = false;
			d_box->Enabled = false;
		}
	else if (function_box->Text == "cos(ax+b)")
		{
			a_box->Enabled = true;
			b_box->Enabled = true;
			a_box->Text = "1";
			b_box->Text = "0";
			c_box->Text = "-";
			d_box->Text = "-";
			c_box->Enabled = false;
			d_box->Enabled = false;
		}
	else if (function_box->Text == "a*e(x)")
		{
			a_box->Enabled = true;
			a_box->Text = "1";
			b_box->Text = "-";
			c_box->Text = "-";
			d_box->Text = "-";
			b_box->Enabled = false;
			c_box->Enabled = false;
			d_box->Enabled = false;
		}
	}
private: System::Void x1_box_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
	Single W;
	if (Single::TryParse(x1_box->Text,
		System::Globalization::NumberStyles::Number,
		System::Globalization::NumberFormatInfo::CurrentInfo, W) == false && x1_box->Text != "" && x1_box->Text != "-")
	{
		MessageBox::Show("Ввод данных произведен неверно!\n\nВведите число.", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
		x1_box->Text = "-10";
	}
	}
private: System::Void x2_box_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
	Single T;
	if (Single::TryParse(x2_box->Text,
		System::Globalization::NumberStyles::Number,
		System::Globalization::NumberFormatInfo::CurrentInfo, T) == false && x2_box->Text != "" && x2_box->Text != "-")
	{
		MessageBox::Show("Ввод данных произведен неверно!\n\nВведите число.", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
		x2_box->Text = "10";
	}
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
	Img = gcnew Bitmap(600, 400);
	Graphics^ fill = Graphics::FromImage(Img);
	Brush^ fill_brush = gcnew SolidBrush(Color::White);
	fill->FillRectangle(fill_brush, Rectangle(0, 0, 600, 400));
	a_box->Enabled = false;
	b_box->Enabled = false;
	c_box->Enabled = false;
	d_box->Enabled = false;
	}
private: System::Void upload_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
	openFileDialog1->ShowDialog();
	try
	{
		//
		//Считывание из файла двух массивов - x и y
		//
		String^ simple_string;
		int l = 0;
		auto counter = gcnew IO::StreamReader(openFileDialog1->FileName, false);
		while ((simple_string = counter->ReadLine()) != nullptr)
			l = l + 1;
		counter->Close();

		array<double>^ x_up = gcnew array<double>(l);
		array<double>^ y_up = gcnew array<double>(l);
		double max_y = -1e50;
		double max_x = -1e50;
		double min_y = 1e50;
		double min_x = 1e50;

		auto reader = gcnew IO::StreamReader(openFileDialog1->FileName, false);
		for (int i = 0; i < l; i++)
		{
			simple_string = reader->ReadLine();
			x_up[i] = Convert::ToDouble(simple_string->Split(' ')[0]);
			if (x_up[i] > max_x)
				max_x = x_up[i];
			if (x_up[i] < min_x)
				min_x = x_up[i];
			y_up[i] = Convert::ToDouble(simple_string->Split(' ')[1]);
			if (y_up[i] > max_y)
				max_y = y_up[i];
			if (y_up[i] < min_y)
				min_y = y_up[i];
		}
		reader->Close();
		MessageBox::Show("Успешно считаны координаты " + Convert::ToString(l) + " точек из файла",
			"Hooray!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//
		//Масштабирование графика и сдвигание на константы
		//
		double y_coef;
		if (max_y - min_y > 1e-8)
			y_coef = 400.0 / (max_y - min_y);
		else
			y_coef = 1;
		double x_coef = 600.0 / (max_x - min_x);
		for (int i = 0; i < l; i++)
		{
			y_up[i] = y_up[i] * y_coef + 400 - max_y*y_coef;
			x_up[i] = x_up[i] * x_coef;
		}
		//
		//Построение графика
		//
		for (int i = 0; i < l-1; i++)
		{
			Graphics^ line = Graphics::FromImage(Img);
			Graphics^ line_screen = this->picture_box->CreateGraphics();
			line->TranslateTransform(600.0 - x_up[l-1], 400.0);
			line->ScaleTransform(1, -1);
			line_screen->TranslateTransform(600.0 - x_up[l - 1], 400.0);
			line_screen->ScaleTransform(1, -1);
			Pen^ line_pen = gcnew Pen(Color::LightBlue, 2);
			line->DrawLine(line_pen, Convert::ToSingle(x_up[i]), Convert::ToSingle(y_up[i]), Convert::ToSingle(x_up[i+1]), Convert::ToSingle(y_up[i+1]));
			line->Save();
			line_screen->DrawLine(line_pen, Convert::ToSingle(x_up[i]), Convert::ToSingle(y_up[i]), Convert::ToSingle(x_up[i + 1]), Convert::ToSingle(y_up[i + 1]));
		}
		}
	catch (Exception ^ Ситуация)
	{
		MessageBox::Show(Ситуация->Message, "Ошибка",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	}
private: System::Void Save_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
	try
	{
		if (saveFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			Bitmap^ Bmp = gcnew Bitmap(Img);
			Bmp->Save(saveFileDialog2->FileName, System::Drawing::Imaging::ImageFormat::Bmp);
		}
	}
	catch (Exception ^ Ситуация)
	{
		MessageBox::Show(Ситуация->Message, "Ошибка",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	}
private: System::Void Clear_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
	Graphics^ fill = Graphics::FromImage(Img);
	Brush^ fill_brush = gcnew SolidBrush(Color::White);
	fill->FillRectangle(fill_brush, Rectangle(0, 0, 600, 400));
	Graphics^ trash_screen = this->picture_box->CreateGraphics();
	this->Refresh();
	delete trash_screen;
	}
private: System::Void a_box_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
	if (a_box->Enabled)
	{
		Single Q;
		if (Single::TryParse(a_box->Text,
			System::Globalization::NumberStyles::Number,
			System::Globalization::NumberFormatInfo::CurrentInfo, Q) == false && a_box->Text != "" && a_box->Text != "-")
		{
			MessageBox::Show("Ввод данных произведен неверно!\n\nВведите число.", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			a_box->Text = "1";
		}
	}
	}
private: System::Void B_box_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
	if (b_box->Enabled)
	{
		Single Q_1;
		if (Single::TryParse(b_box->Text,
			System::Globalization::NumberStyles::Number,
			System::Globalization::NumberFormatInfo::CurrentInfo, Q_1) == false && b_box->Text != "" && b_box->Text != "-")
		{
			MessageBox::Show("Ввод данных произведен неверно!\n\nВведите число.", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			b_box->Text = "0";
		}
	}
	}
private: System::Void C_box_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
	if (c_box->Enabled)
	{
		Single Q_2;
		if (Single::TryParse(c_box->Text,
			System::Globalization::NumberStyles::Number,
			System::Globalization::NumberFormatInfo::CurrentInfo, Q_2) == false && c_box->Text != "" && c_box->Text != "-")
		{
			MessageBox::Show("Ввод данных произведен неверно!\n\nВведите число.", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			c_box->Text = "0";
		}
	}
	}
private: System::Void D_box_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
	if (d_box->Enabled)
	{
		Single Q_3;
		if (Single::TryParse(d_box->Text,
			System::Globalization::NumberStyles::Number,
			System::Globalization::NumberFormatInfo::CurrentInfo, Q_3) == false && d_box->Text != "" && d_box->Text != "-")
		{
			MessageBox::Show("Ввод данных произведен неверно!\n\nВведите число.", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			d_box->Text = "0";
		}
	}
	}
};
}