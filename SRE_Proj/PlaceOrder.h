
#include<vector>
#include <fstream>
#include<string>
#include<msclr/marshal_cppstd.h>
#pragma once

namespace SREProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PlaceOrder
	/// </summary>
	public ref class PlaceOrder : public System::Windows::Forms::Form
	{
	public:
		PlaceOrder(void)
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
		~PlaceOrder()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::Button^ button1;



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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(186, 29);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(362, 67);
			this->label1->TabIndex = 3;
			this->label1->Text = L"ADD ITEMS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 17.75F));
			this->label2->Location = System::Drawing::Point(18, 138);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 43);
			this->label2->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox1->Location = System::Drawing::Point(50, 245);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(706, 49);
			this->textBox1->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox2->Location = System::Drawing::Point(51, 342);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(706, 49);
			this->textBox2->TabIndex = 12;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &PlaceOrder::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(45, 211);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 30);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Item Code ::";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(45, 308);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 30);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Quantity";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(618, 411);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 53);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Add To Cart";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PlaceOrder::button1_Click);
			// 
			// PlaceOrder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::NavajoWhite;
			this->ClientSize = System::Drawing::Size(802, 711);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximumSize = System::Drawing::Size(838, 802);
			this->MinimumSize = System::Drawing::Size(824, 767);
			this->Name = L"PlaceOrder";
			this->Text = L"PlaceOrder";
			this->Load += gcnew System::EventHandler(this, &PlaceOrder::PlaceOrder_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	bool CheckIf(std::string search, std::vector<std::string> List) {
		for (int i = 0; i < List.size(); i++) {
			if (List[i].find(search) < List[i].size()) {
				std::ofstream idr;
				idr.open("LoggedIn.txt");
				idr << i;
				idr.close();
				return true;
			}
		}
		return false;
	}
	private: System::Void PlaceOrder_Load(System::Object^ sender, System::EventArgs^ e) {

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
		//int rrr = stoi(r1);
		//rrr++;
		//String^ Got_UN = "";
		//label2->Text = Got_UN;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ code_cart = textBox1->Text;
		String^ Quantity = textBox2->Text;
		if (textBox1->Text == "" || textBox2->Text == "")
		{
			MessageBox::Show("Fill in the Credentials Completely.");
			return;
		}
		std::fstream obj;
		obj.open("Stock.txt", std::ios::in);
		std::string number;
		obj >> number;
		if (number == "")
		{
			MessageBox::Show("Stock is not Available.\nSorry for the inconvenience.");
			return;
		}
		int num = 0;
		std::fstream cart;
		cart.open("Users_Cart.txt", std::ios::app);
		std::fstream stock;
		stock.open("Stock.txt", std::ios::in); 
			std::string code;
			std::string quan;
			std::string name;
			std::string price;
		while (!stock.eof())
		{
			stock >> code >> quan >> price;
			getline(stock, name);
			bool flag = std::stoi(code) == std::stoi(msclr::interop::marshal_as<std::string>(code_cart));
			if (flag == true)
			{
				num = 1;
				if (std::stoi(quan) < stoi(msclr::interop::marshal_as<std::string>((Quantity))))
				{
					MessageBox::Show("Quantity is more than Stock.");
					return;
				}
				std::vector<std::string> code;
				std::vector<std::string> price;
				std::vector<std::string> quantity;
				std::vector<std::string> name;
				std::fstream stock2;
				std::string r;
				stock2.open("Stock.txt");
				int num1 = 0;
				while(!stock2.eof())
				{
					stock2>> r;
					stock2 >> r;
					stock2 >> r;
					getline(stock2, r);
					num1++;
				}
				stock2.close();
				stock2.open("Stock.txt");
				for (int i = 0; i < num1 - 1; i++)
				{
					stock2 >> r;
					code.push_back(r);
					stock2 >> r;
					quantity.push_back(r);
					stock2 >> r;
					price.push_back(r);
					getline(stock2, r);
					name.push_back(r);
				}
				for (int i = 0; i < name.size(); i++)
				{
					if (stoi(code[i]) == std::stoi(msclr::interop::marshal_as<std::string>(code_cart)))
					{
						int quantity1 = std::stoi(quan);
						int quantity2 = std::stoi(msclr::interop::marshal_as<std::string>((Quantity)));
						int quantity3 = quantity1 - quantity2;
						quantity[i] = std::to_string(quantity3);
						cart << code[i] << " ";
						cart << msclr::interop::marshal_as<std::string>((Quantity)) << " ";
						cart << price[i] << " ";
						cart << name[i] << " ";
						cart << std::endl;
						std::fstream stock3;
						stock3.open("Stock.txt", std::ios::out);
						for (int j = 0; j < name.size(); j++)
						{
							stock3 << code[j] << " " << quantity[j] << " " << price[j] << " " << name[j] << " ";
							if (j < name.size() - 1)
							{
								stock3<<std::endl;
							}
						}
						MessageBox::Show("Done.");
						return;
					}
				}
				
			}
		}
		if (num == 0)
		{
			MessageBox::Show("Product with this Code doesn't Exist.");
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//std::string Got_UN;

		//std::vector<std::string> Restaurant_Name;
		//std::vector<std::string> Restaurant_PhoneNumber;
		//std::vector<std::string> Restaurant_Due;
		//std::vector<std::string> Restaurant_Address;
		//std::vector<std::string> Restaurant_Menu;
		//std::ifstream io2;
		//io2.open("Restaurant.txt");
		//std::string r;
		//while (!io2.eof()) {
		//	io2 >> r;
		//	Restaurant_Name.push_back(r);
		//	io2 >> r;
		//	Restaurant_PhoneNumber.push_back(r);
		//	io2 >> r;
		//	Restaurant_Due.push_back(r);
		//	io2 >> r;
		//	Restaurant_Address.push_back(r);
		//	io2 >> r;
		//	Restaurant_Menu.push_back(r);
		//}
		//msclr::interop::marshal_context context;
		//if (CheckIf(context.marshal_as<std::string>(Got_Item), Restaurant_Menu)) {
		//	std::vector<std::string> Order_Index;
		//	std::vector<std::string> Order_Name;
		//	std::vector<std::string> Order_Money;
		//	std::vector<std::string> Order_Discount;
		//	std::vector<std::string> Order_AddOn;
		//	std::vector<std::string> Order_CustomName;
		//	std::ifstream io;
		//	io.open("Orders.txt");
		//	std::string r;
		//	std::string r1;
		//	while (!io.eof()) {
		//		io >> r1;
		//		Order_Index.push_back(r1);
		//		io >> r;
		//		Order_Name.push_back(r);
		//		io >> r;
		//		Order_Money.push_back(r);
		//		io >> r;
		//		Order_Discount.push_back(r);
		//		io >> r;
		//		Order_AddOn.push_back(r);
		//		io >> r;
		//		Order_CustomName.push_back(r);
		//	}
		//	std::ofstream oi;
		//	oi.open("Orders.txt");
		//	std::string r2;
		//	for (int i = 0; i < Order_Name.size() - 1; i++) {
		//		oi << Order_Index[i];
		//		oi << " ";
		//		oi << Order_Name[i];
		//		oi << " ";
		//		oi << Order_Money[i];
		//		oi << " ";
		//		oi << Order_Discount[i];
		//		oi << " ";
		//		oi << Order_AddOn[i];
		//		oi << " ";
		//		oi << Order_CustomName[i];
		//		oi << "\n";
		//	}
		//	int rrr = stoi(r1);
		//	rrr++;
		//	Got_UN = std::to_string(rrr);



		//	oi << Got_UN;
		//	oi << " ";
		//	oi << context.marshal_as<std::string>(Got_Item);
		//	oi << " ";
		//	oi << context.marshal_as<std::string>(Got_Payable);
		//	oi << " ";
		//	///////////////////////////////////////////////////////
		//	std::ifstream idr; int mny = 0;
		//	idr.open("LoggedIn.txt");
		//	idr >> mny;
		//	idr.close();
		//	int tobeadded = std::stoi(context.marshal_as<std::string>(Got_Payable));
		//	int total = std::stoi(Restaurant_Due[mny]) + tobeadded;
		//	Restaurant_Due[mny] = std::to_string(total);
		//	std::ofstream oioi;
		//	oioi.open("Restaurant.txt");
		//	for (int i = 0; i < Restaurant_Name.size(); i++) {
		//		oioi << Restaurant_Name[i];
		//		oioi << " ";
		//		oioi << Restaurant_PhoneNumber[i];
		//		oioi << " ";
		//		oioi << Restaurant_Due[i];
		//		oioi << " ";
		//		oioi << Restaurant_Address[i];
		//		oioi << " ";
		//		oioi << Restaurant_Menu[i];
		//		if(i!= Restaurant_Name.size()-1)
		//		oioi << "\n";
		//	}
		//	MessageBox::Show("Done!");
		//}
		//else {
		//	MessageBox::Show("Not in Restaurant Menus");
		//}
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{

}
};
}
