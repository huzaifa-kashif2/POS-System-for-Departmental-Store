#pragma once
#include<msclr/marshal_cppstd.h>
#include<fstream>
#include<string>
namespace SREProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ViewOrders
	/// </summary>
	public ref class ViewOrders : public System::Windows::Forms::Form
	{
	public:
		ViewOrders(void)
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
		~ViewOrders()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(296, 14);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->MaximumSize = System::Drawing::Size(442, 68);
			this->label1->MinimumSize = System::Drawing::Size(442, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(442, 68);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Transactions";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 29;
			this->listBox1->Location = System::Drawing::Point(18, 106);
			this->listBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(996, 468);
			this->listBox1->TabIndex = 6;
			// 
			// ViewOrders
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1034, 649);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MinimumSize = System::Drawing::Size(778, 679);
			this->Name = L"ViewOrders";
			this->Text = L"ViewOrders";
			this->Load += gcnew System::EventHandler(this, &ViewOrders::ViewOrders_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ViewOrders_Load(System::Object^ sender, System::EventArgs^ e) {
		std::vector<std::string> Pay;
		std::ifstream io;
		io.open("Payment.txt");
		std::string r;
		while (!io.eof()) {
			io >> r;
			Pay.push_back(r);
		}
		for (int i = 0; i < Pay.size() - 1; i++) {
			listBox1->Items->Add((gcnew String(Pay[i].c_str())));
		}
	}
	};
}
