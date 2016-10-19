#pragma once

namespace CGörselProgramlama {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Deneme4
	/// </summary>
	public ref class Deneme4 : public System::Windows::Forms::Form
	{
	public:
		Deneme4(void)
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
		~Deneme4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	protected:
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  lblTarih;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox1;

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
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->lblTarih = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(6, 140);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 0;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Deneme4::numericUpDown1_ValueChanged);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(6, 26);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 108);
			this->listBox1->TabIndex = 1;
			// 
			// lblTarih
			// 
			this->lblTarih->AutoSize = true;
			this->lblTarih->Location = System::Drawing::Point(29, 172);
			this->lblTarih->Name = L"lblTarih";
			this->lblTarih->Size = System::Drawing::Size(31, 13);
			this->lblTarih->TabIndex = 2;
			this->lblTarih->Text = L"Tarih";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(32, 197);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(32, 229);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 4;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &Deneme4::monthCalendar1_DateChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Numeric UpDown";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->listBox1);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Location = System::Drawing::Point(32, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(443, 166);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			// 
			// Deneme4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(487, 409);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lblTarih);
			this->Name = L"Deneme4";
			this->Text = L"Deneme4";
			this->Load += gcnew System::EventHandler(this, &Deneme4::Deneme4_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		listBox1->Width = System::Convert::ToInt32(numericUpDown1->Value);
	}
private: System::Void Deneme4_Load(System::Object^  sender, System::EventArgs^  e) {
	numericUpDown1->Maximum = System::Convert::ToDecimal(groupBox1->Width-10);
	System::DateTime tarih = System::DateTime::Now;
	textBox1->Text = Tarih_Bul(tarih);
}
		 private: System::String^ Tarih_Bul(System::DateTime tarih) {
			 System::String^ gun = System::Convert::ToString(tarih.Day);
			 System::String^ ay = System::Convert::ToString(tarih.Month);
			 System::String^ yil = System::Convert::ToString(tarih.Year);
			 return gun + "." + ay + "." + yil;
		 }
private: System::Void monthCalendar1_DateChanged(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {
	System::DateTime tarih = monthCalendar1->SelectionStart;
	textBox1->Text = Tarih_Bul(tarih);
}
};
}
