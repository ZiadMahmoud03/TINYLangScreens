#pragma once
#include <iostream>
#include <fstream>
#include "TextForm.h"


namespace TINYLangScreens {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for CreateForm
	/// </summary>
	public ref class CreateForm : public System::Windows::Forms::Form
	{
	public:
		Form^ Obj;
		CreateForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		CreateForm(Form ^Obj1)
		{
			Obj = Obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CreateForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;



	private: System::Windows::Forms::Button^ CreateBtn;


	private: System::Windows::Forms::Button^ BackBtn;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->CreateBtn = (gcnew System::Windows::Forms::Button());
			this->BackBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Javanese Text", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FloralWhite;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(567, 66);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Create New File";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Javanese Text", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FloralWhite;
			this->label2->Location = System::Drawing::Point(18, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 34);
			this->label2->TabIndex = 1;
			this->label2->Text = L"File Name";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(26, 179);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(182, 20);
			this->textBox1->TabIndex = 2;
			// 
			// CreateBtn
			// 
			this->CreateBtn->BackColor = System::Drawing::Color::Transparent;
			this->CreateBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->CreateBtn->Font = (gcnew System::Drawing::Font(L"Javanese Text", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CreateBtn->ForeColor = System::Drawing::Color::FloralWhite;
			this->CreateBtn->Location = System::Drawing::Point(436, 343);
			this->CreateBtn->Name = L"CreateBtn";
			this->CreateBtn->Size = System::Drawing::Size(122, 30);
			this->CreateBtn->TabIndex = 5;
			this->CreateBtn->Text = L"Create";
			this->CreateBtn->UseVisualStyleBackColor = false;
			this->CreateBtn->Click += gcnew System::EventHandler(this, &CreateForm::CreateBtn_Click);
			// 
			// BackBtn
			// 
			this->BackBtn->BackColor = System::Drawing::Color::Transparent;
			this->BackBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BackBtn->Font = (gcnew System::Drawing::Font(L"Javanese Text", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BackBtn->ForeColor = System::Drawing::Color::FloralWhite;
			this->BackBtn->Location = System::Drawing::Point(12, 343);
			this->BackBtn->Name = L"BackBtn";
			this->BackBtn->Size = System::Drawing::Size(122, 30);
			this->BackBtn->TabIndex = 7;
			this->BackBtn->Text = L"Go Back";
			this->BackBtn->UseVisualStyleBackColor = false;
			this->BackBtn->Click += gcnew System::EventHandler(this, &CreateForm::BackBtn_Click);
			// 
			// CreateForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(577, 385);
			this->Controls->Add(this->BackBtn);
			this->Controls->Add(this->CreateBtn);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"CreateForm";
			this->Text = L"Create File";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CreateBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		TextForm^ Obj = gcnew TextForm(this);
		Obj->ShowDialog();
		
	}
private: System::Void BackBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Obj->Show();
}
private: System::Void SearchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	

	Stream^ myStream;
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();

	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		if ( (myStream == openFileDialog->OpenFile()) != NULL) {
			String^ strFileName = openFileDialog->InitialDirectory + openFileDialog->FileName;
			MessageBox::Show(strFileName);
			myStream->Close();
		}
	}

}
};
}
