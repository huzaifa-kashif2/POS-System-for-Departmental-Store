#pragma once
#include<vector>
#include<fstream>
#include<msclr/marshal_cppstd.h>
namespace SREProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ViewUsers
	/// </summary>
	public ref class ViewUsers : public System::Windows::Forms::Form
	{
	public:
		ViewUsers(void)
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
		~ViewUsers()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;

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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 42;
			this->listBox1->Location = System::Drawing::Point(40, 118);
			this->listBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(1221, 508);
			this->listBox1->TabIndex = 10;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ViewUsers::listBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(285, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(424, 67);
			this->label1->TabIndex = 9;
			this->label1->Text = L"STOCK ITEMS";
			// 
			// ViewUsers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1354, 666);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"ViewUsers";
			this->Text = L"ViewUsers";
			this->Load += gcnew System::EventHandler(this, &ViewUsers::ViewUsers_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ViewUsers_Load(System::Object^ sender, System::EventArgs^ e) {
		std::vector<std::string> code;
		std::vector<std::string> price;
		std::vector<std::string> quantity;
		std::vector<std::string> name;
		std::ifstream io;
		io.open("Stock.txt");
		int num = 0;
		std::string r;
		while (!io.eof()) {
			io >> r;
			io >> r;
			io >> r;
			getline(io, r);
			num++;
		}
		io.close();
		io.open("Stock.txt");
		for (int i = 0; i < num-1; i++)
		{
			io >> r;
			code.push_back(r);
			io >> r;
			quantity.push_back(r);
			io >> r;
			price.push_back(r);
			getline(io, r);
			name.push_back(r);
		}
		msclr::interop::marshal_context context;
		for (int i = 0; i < name.size(); i++) {
			listBox1->Items->Add((gcnew String(code[i].c_str()) + " " + (gcnew String(quantity[i].c_str())) + " Items Rs. " + (gcnew String(price[i].c_str())) + " \t" + (gcnew String(name[i].c_str()))));
		}
	}
	};
}
