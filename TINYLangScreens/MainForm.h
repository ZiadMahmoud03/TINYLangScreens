#pragma once
#include "CreateForm.h"

namespace TINYLangScreens {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		Form^ Obj;
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MainForm(Form ^Obj1)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ NewFileBtn;
	private: System::Windows::Forms::Button^ OpenFileBtn;




	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->NewFileBtn = (gcnew System::Windows::Forms::Button());
			this->OpenFileBtn = (gcnew System::Windows::Forms::Button());
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
			this->label1->Size = System::Drawing::Size(553, 60);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tiny Language Code Editor";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Javanese Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FloralWhite;
			this->label2->Location = System::Drawing::Point(151, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(243, 36);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Select what you would like to do";
			// 
			// NewFileBtn
			// 
			this->NewFileBtn->BackColor = System::Drawing::Color::Transparent;
			this->NewFileBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->NewFileBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->NewFileBtn->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewFileBtn->ForeColor = System::Drawing::Color::FloralWhite;
			this->NewFileBtn->Location = System::Drawing::Point(184, 148);
			this->NewFileBtn->Name = L"NewFileBtn";
			this->NewFileBtn->Size = System::Drawing::Size(178, 28);
			this->NewFileBtn->TabIndex = 4;
			this->NewFileBtn->Text = L"Create New File";
			this->NewFileBtn->UseVisualStyleBackColor = false;
			this->NewFileBtn->Click += gcnew System::EventHandler(this, &MainForm::NewFileBtn_Click);
			// 
			// OpenFileBtn
			// 
			this->OpenFileBtn->BackColor = System::Drawing::Color::Transparent;
			this->OpenFileBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->OpenFileBtn->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OpenFileBtn->ForeColor = System::Drawing::Color::FloralWhite;
			this->OpenFileBtn->Location = System::Drawing::Point(184, 198);
			this->OpenFileBtn->Name = L"OpenFileBtn";
			this->OpenFileBtn->Size = System::Drawing::Size(178, 28);
			this->OpenFileBtn->TabIndex = 5;
			this->OpenFileBtn->Text = L"Open Existing File";
			this->OpenFileBtn->UseVisualStyleBackColor = false;
			this->OpenFileBtn->Click += gcnew System::EventHandler(this, &MainForm::OpenFileBtn_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(577, 385);
			this->Controls->Add(this->OpenFileBtn);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->NewFileBtn);
			this->Name = L"MainForm";
			this->Text = L"Tiny Language";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NewFileBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		CreateForm ^Obj = gcnew CreateForm(this);
		Obj->ShowDialog();
	}
	private: System::Void OpenFileBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
