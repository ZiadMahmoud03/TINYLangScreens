#pragma once

namespace TINYLangScreens {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ ErrorLabel;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ ErrorBox;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->ErrorLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ErrorBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// ErrorLabel
			// 
			this->ErrorLabel->BackColor = System::Drawing::Color::Transparent;
			this->ErrorLabel->Font = (gcnew System::Drawing::Font(L"Javanese Text", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ErrorLabel->ForeColor = System::Drawing::Color::FloralWhite;
			this->ErrorLabel->Location = System::Drawing::Point(12, 18);
			this->ErrorLabel->Name = L"ErrorLabel";
			this->ErrorLabel->Size = System::Drawing::Size(171, 36);
			this->ErrorLabel->TabIndex = 0;
			this->ErrorLabel->Text = L"Errors Detected:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Javanese Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FloralWhite;
			this->label1->Location = System::Drawing::Point(176, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 36);
			this->label1->TabIndex = 1;
			this->label1->Text = L"X";
			// 
			// ErrorBox
			// 
			this->ErrorBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ErrorBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ErrorBox->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ErrorBox->Location = System::Drawing::Point(12, 58);
			this->ErrorBox->Multiline = true;
			this->ErrorBox->Name = L"ErrorBox";
			this->ErrorBox->Size = System::Drawing::Size(430, 256);
			this->ErrorBox->TabIndex = 2;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(454, 326);
			this->Controls->Add(this->ErrorBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ErrorLabel);
			this->Name = L"MyForm";
			this->Text = L"Errors";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
