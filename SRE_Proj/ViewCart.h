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
	/// Summary for View_Cart
	/// </summary>
	public ref class View_Cart : public System::Windows::Forms::Form
	{
	public:
		View_Cart(void)
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
		~View_Cart()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;

	protected:


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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 42;
			this->listBox1->Location = System::Drawing::Point(32, 134);
			this->listBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(861, 508);
			this->listBox1->Sorted = true;
			this->listBox1->TabIndex = 12;
			this->listBox1->UseWaitCursor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(269, 23);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(391, 67);
			this->label1->TabIndex = 11;
			this->label1->Text = L"CART ITEMS";
			// 
			// View_Cart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(924, 666);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Name = L"View_Cart";
			this->Text = L"View_Cart";
			this->Load += gcnew System::EventHandler(this, &View_Cart::View_Cart_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void View_Cart_Load(System::Object^ sender, System::EventArgs^ e) {
		std::vector<std::string> code;
		std::vector<std::string> price;
		std::vector<std::string> quantity;
		std::vector<std::string> name;
		std::ifstream io;
		io.open("Users_Cart.txt");
		std::string r;
		int num = 0;
		while (!io.eof()) {
			io >> r;
			io >> r;
			io >> r;
			getline(io, r);
			num++;
		}
		io.close();
		io.open("Users_Cart.txt");
		for (int i = 0; i < num - 1; i++)
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
			listBox1->Items->Add((gcnew String(code[i].c_str()) + " " + (gcnew String(name[i].c_str())) + " " + (gcnew String(quantity[i].c_str())) + " " + (gcnew String(price[i].c_str()))));
		}
	}

	
};
}
