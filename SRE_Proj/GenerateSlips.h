#pragma once
#include<msclr/marshal_cppstd.h>
#include<string>
#include<fstream>
namespace SREProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GenerateSlips
	/// </summary>
	public ref class GenerateSlips : public System::Windows::Forms::Form
	{
	public:
		GenerateSlips(void)
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
		~GenerateSlips()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(91, 23);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(494, 67);
			this->label1->TabIndex = 4;
			this->label1->Text = L"GENERATE BILL";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(58, 243);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(173, 30);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Bill Generated ::";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(58, 334);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 30);
			this->label2->TabIndex = 17;
			this->label2->Click += gcnew System::EventHandler(this, &GenerateSlips::label2_Click);
			// 
			// GenerateSlips
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaShell;
			this->ClientSize = System::Drawing::Size(705, 614);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximumSize = System::Drawing::Size(727, 670);
			this->MinimumSize = System::Drawing::Size(727, 670);
			this->Name = L"GenerateSlips";
			this->Text = L"GenerateSlips";
			this->Load += gcnew System::EventHandler(this, &GenerateSlips::GenerateSlips_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GenerateSlips_Load(System::Object^ sender, System::EventArgs^ e) {
		//std::vector<std::string> Order_Name;
		//std::vector<std::string> Order_Money;
		//std::vector<std::string> Order_Discount;
		//std::vector<std::string> Order_AddOn;
		//std::vector<std::string> Order_CustomName;
		//std::ifstream io;
		//io.open("Orders.txt");
		//std::string r;
		//std::string r1;
		//while (!io.eof()) {
		//	io >> r1;

		//	io >> r;
		//	Order_Name.push_back(r);
		//	io >> r;
		//	Order_Money.push_back(r);
		//	io >> r;
		//	Order_Discount.push_back(r);
		//	io >> r;
		//	Order_AddOn.push_back(r);
		//	io >> r;
		//	Order_CustomName.push_back(r);
		//}
		//int tt = 0;
		//for (int i = 0; i < Order_Money.size()-1; i++) {
		//	tt += stoi(Order_Money[i]);
		//}
		//label3->Text = "Bill Generated ::    Rs." + tt.ToString();
		//////////////////////////////////////////////////////////////////////
		//std::vector<std::string> Restaurant_Name;
		//std::vector<std::string> Restaurant_PhoneNumber;
		//std::vector<std::string> Restaurant_Due;
		//std::vector<std::string> Restaurant_Address;
		//std::vector<std::string> Restaurant_Menu;
		//std::ifstream io2;
		//io2.open("Restaurant.txt");
		//std::string r2;
		//while (!io2.eof()) {
		//	io2 >> r2;
		//	Restaurant_Name.push_back(r2);
		//	io2 >> r2;
		//	Restaurant_PhoneNumber.push_back(r2);
		//	io2 >> r2;
		//	Restaurant_Due.push_back(r2);
		//	io2 >> r2;
		//	Restaurant_Address.push_back(r2);
		//	io2 >> r2;
		//	Restaurant_Menu.push_back(r2);
		//}
		//int tt2 = 0;
		//for (int i = 0; i < Restaurant_Due.size()-1; i++) {
		//	tt2 += stoi(Restaurant_Due[i]);
		//}
		//label2->Text = "To Pay to Clients ::    Rs." + tt2.ToString();
		std::fstream pay;
		pay.open("Payment.txt", std::ios::app);
		std::fstream cart;
		cart.open("Users_Cart.txt", std::ios::in);
		int cash = 0;
		int amount;
		int quantity;
		std::string amou;
		int num = 0;
		while (!cart.eof())
		{
			cart >> amount;
			cart >> quantity;
			getline(cart, amou);
			num++;
		}
		cart.close();
		cart.open("Users_Cart.txt", std::ios::in);
		for (int i = 0; i < num - 1; i++)
		{
			cart >> amount;
			cart >> amount;
			cart >> quantity;
			cash += (amount) * (quantity);
			getline(cart, amou);
		}
		cart.close();
		if (cash != 0)
		{
			pay << cash << std::endl;
		}
		std::fstream cart1;
		cart1.open("Users_Cart.txt", std::ios::out);
		label3->Text = "Bill Generated ::    Rs." + cash.ToString();
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
