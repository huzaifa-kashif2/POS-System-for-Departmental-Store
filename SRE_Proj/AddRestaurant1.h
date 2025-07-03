#include<fstream>
#include<msclr/marshal_cppstd.h>
#include<string>
#pragma once

namespace SREProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddRestaurant
	/// </summary>
	public ref class AddRestaurant : public System::Windows::Forms::Form
	{
	public:
		AddRestaurant(void)
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
		~AddRestaurant()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
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
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(226, 30);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(490, 67);
			this->label1->TabIndex = 2;
			this->label1->Text = L"ADD TO STOCK";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::CadetBlue;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->button7->Location = System::Drawing::Point(382, 556);
			this->button7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(162, 95);
			this->button7->TabIndex = 9;
			this->button7->Text = L"ADD TO LIST";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &AddRestaurant::button7_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox1->Location = System::Drawing::Point(18, 165);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(878, 49);
			this->textBox1->TabIndex = 10;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox2->Location = System::Drawing::Point(18, 265);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(878, 49);
			this->textBox2->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox3->Location = System::Drawing::Point(18, 371);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(878, 49);
			this->textBox3->TabIndex = 12;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox4->Location = System::Drawing::Point(18, 477);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(878, 49);
			this->textBox4->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(18, 129);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 30);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Name ::";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(18, 231);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(134, 30);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Item Code ::";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(18, 332);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(117, 30);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Quantity ::";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(18, 437);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 30);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Price ::";
			// 
			// AddRestaurant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaShell;
			this->ClientSize = System::Drawing::Size(908, 691);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximumSize = System::Drawing::Size(930, 747);
			this->MinimumSize = System::Drawing::Size(930, 747);
			this->Name = L"AddRestaurant";
			this->Text = L"AddRestaurant";
			this->Load += gcnew System::EventHandler(this, &AddRestaurant::AddRestaurant_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddRestaurant_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Got_Name = textBox1->Text;
		String^ Got_Code = textBox2->Text;
		String^ Got_Quantity = textBox3->Text;
		String^ Got_Price = textBox4->Text;
		if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "")
		{
			MessageBox::Show("Fill the Credentials Properly");
			return;
		}
		std::fstream obj;
		obj.open("Stock.txt", std::ios::in);
		std::string number;
		obj >> number;
		if (number != "")
		{
			std::vector<std::string> code;
			std::vector<std::string> price;
			std::vector<std::string> quantity;
			std::vector<std::string> name;
			std::fstream stock2;
			std::string r;
			int num = 0;
			stock2.open("Users_Cart.txt", std::ios::in);
			while (!stock2.eof())
			{
				stock2 >> r;
				if (Got_Code == msclr::interop::marshal_as<String^>(r))
				{
					MessageBox::Show("Item with the same Code already exists.");
					return;
				}
				stock2 >> r;
				stock2 >> r;
				getline(stock2, r);
				num++;
			}
			stock2.close();
			stock2.open("Stock.txt", std::ios::in);
			for (int i = 0; i < num - 1; i++)
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
			int num1 = 0;
			std::fstream stock;
			stock.open("Stock.txt", std::ios::out);
			for (int i = 0; i < name.size(); i++)
			{
				if (Got_Code != msclr::interop::marshal_as<String^>(code[i]))
				{
					num = 0;
					stock << code[i] << " " << quantity[i] << " " << price[i] << " " << name[i] << " " << std::endl;
				}
				else
				{
					
				}
			}
			if (num == 0)
			{
				MessageBox::Show("No Item with this Code exists.");
			}
			else
			{
				MessageBox::Show("Done.");
			}
		}

















		std::fstream obj;
		obj.open("Stock.txt", std::ios::app);
		obj << msclr::interop::marshal_as<std::string>(Got_Code) << " ";
		obj << msclr::interop::marshal_as<std::string>(Got_Quantity) << " ";
		obj << msclr::interop::marshal_as<std::string>(Got_Price) << " ";
		obj << msclr::interop::marshal_as<std::string>(Got_Name) << " ";
		obj << std::endl;
		//std::vector<std::string> Restaurant_Name;
		//std::vector<std::string> Restaurant_PhoneNumber;
		//std::vector<std::string> Restaurant_Due;
		//std::vector<std::string> Restaurant_Address;
		//std::vector<std::string> Restaurant_Menu;
		//std::ifstream io;
		//io.open("Restaurant.txt");
		//std::string r;
		//while (!io.eof()) {
		//	io >> r;
		//	Restaurant_Name.push_back(r);
		//	io >> r;
		//	Restaurant_PhoneNumber.push_back(r);
		//	io >> r;
		//	Restaurant_Due.push_back(r);
		//	io >> r;
		//	Restaurant_Address.push_back(r);
		//	io >> r;
		//	Restaurant_Menu.push_back(r);
		//}
		//std::ofstream oi;
		//oi.open("Restaurant.txt");
		//std::string r2;
		//for (int i = 0; i < Restaurant_Name.size() - 1; i++) {
		//	oi << Restaurant_Name[i];
		//	oi << " ";
		//	oi << Restaurant_PhoneNumber[i];
		//	oi << " ";
		//	oi << Restaurant_Due[i];
		//	oi << " ";
		//	oi << Restaurant_Address[i];
		//	oi << " ";
		//	oi << Restaurant_Menu[i];
		//	oi << "\n";
		//}
		//msclr::interop::marshal_context context;
		//oi << context.marshal_as<std::string>(Got_Name);
		//oi << " ";
		//oi << context.marshal_as<std::string>(Got_PhoneNumber);
		//oi << " ";
		//oi << "0";
		//oi << " ";
		//oi << context.marshal_as<std::string>(Got_Address);
		//oi << " ";
		//oi << context.marshal_as<std::string>(Got_Menu);
		//oi << " ";

		MessageBox::Show("Done!");
		this->Hide();
	}
	};
}
