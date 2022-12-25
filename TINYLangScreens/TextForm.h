#pragma once
#include "NoErrorForm.h"
#include "MyForm.h"
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "Scanner.h"
#include <vector>

#include <string>

#include <msclr\marshal_cppstd.h>

namespace TINYLangScreens {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TextForm
	/// </summary>
	public ref class TextForm : public System::Windows::Forms::Form
	{
	public:
		Form^ Obj;
		TextForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		TextForm(Form^ Obj1)
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
		~TextForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ CheckErrorBtn;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ GoBackBtn;
	private: System::Windows::Forms::Button^ SaveBtn;



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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->CheckErrorBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->GoBackBtn = (gcnew System::Windows::Forms::Button());
			this->SaveBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(12, 45);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(458, 343);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &TextForm::textBox1_TextChanged);
			// 
			// CheckErrorBtn
			// 
			this->CheckErrorBtn->BackColor = System::Drawing::Color::Transparent;
			this->CheckErrorBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->CheckErrorBtn->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CheckErrorBtn->ForeColor = System::Drawing::Color::White;
			this->CheckErrorBtn->Location = System::Drawing::Point(373, 12);
			this->CheckErrorBtn->Name = L"CheckErrorBtn";
			this->CheckErrorBtn->Size = System::Drawing::Size(97, 23);
			this->CheckErrorBtn->TabIndex = 1;
			this->CheckErrorBtn->Text = L"Check Errors";
			this->CheckErrorBtn->UseVisualStyleBackColor = false;
			this->CheckErrorBtn->Click += gcnew System::EventHandler(this, &TextForm::CheckErrorBtn_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Javanese Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FloralWhite;
			this->label1->Location = System::Drawing::Point(12, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(245, 27);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Enter TINY Language code here";
			this->label1->Click += gcnew System::EventHandler(this, &TextForm::label1_Click);
			// 
			// GoBackBtn
			// 
			this->GoBackBtn->BackColor = System::Drawing::Color::Transparent;
			this->GoBackBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->GoBackBtn->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GoBackBtn->ForeColor = System::Drawing::Color::White;
			this->GoBackBtn->Location = System::Drawing::Point(12, 394);
			this->GoBackBtn->Name = L"GoBackBtn";
			this->GoBackBtn->Size = System::Drawing::Size(97, 23);
			this->GoBackBtn->TabIndex = 3;
			this->GoBackBtn->Text = L"Go Back";
			this->GoBackBtn->UseVisualStyleBackColor = false;
			this->GoBackBtn->Click += gcnew System::EventHandler(this, &TextForm::GoBackBtn_Click);
			// 
			// SaveBtn
			// 
			this->SaveBtn->BackColor = System::Drawing::Color::Transparent;
			this->SaveBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->SaveBtn->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SaveBtn->ForeColor = System::Drawing::Color::White;
			this->SaveBtn->Location = System::Drawing::Point(373, 394);
			this->SaveBtn->Name = L"SaveBtn";
			this->SaveBtn->Size = System::Drawing::Size(97, 23);
			this->SaveBtn->TabIndex = 4;
			this->SaveBtn->Text = L"Save";
			this->SaveBtn->UseVisualStyleBackColor = false;
			// 
			// TextForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(485, 426);
			this->Controls->Add(this->SaveBtn);
			this->Controls->Add(this->GoBackBtn);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->CheckErrorBtn);
			this->Controls->Add(this->textBox1);
			this->Name = L"TextForm";
			this->Text = L"\"Project Name\"";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CheckErrorBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		

		
		
		
		MyForm^ Object = gcnew MyForm();
		Object->ShowDialog();

		NoErrorForm^ Object2 = gcnew NoErrorForm();
		Object2->ShowDialog();

	}
	private: System::Void GoBackBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Obj->Show();
	}
	
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		String^ text = textBox1->Text;

		msclr::interop::marshal_context context;
		std::string standardString = context.marshal_as<std::string>(text);




		Scanner scn(standardString);
		scn.scan();

		std::ofstream myfile("example.txt");
		if (myfile.is_open())
		{
			std::vector<std::string> vec;
			vec = scn.getTokenList();
			for(std::string text: vec)
			myfile << text;

			myfile.close();
		}
		else std::cout << "Unable to open file";


	}
};
}
