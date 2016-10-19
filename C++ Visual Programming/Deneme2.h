#pragma once

namespace CGörselProgramlama {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Deneme2
	/// </summary>
	public ref class Deneme2 : public System::Windows::Forms::Form
	{
	public:
		Deneme2(void)
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
		~Deneme2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textGiris;
	protected:
	private: System::Windows::Forms::Button^  butKaydir;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textKarakterAdet;
	private: System::Windows::Forms::ListBox^  listBox1;

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
			this->textGiris = (gcnew System::Windows::Forms::TextBox());
			this->butKaydir = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textKarakterAdet = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// textGiris
			// 
			this->textGiris->Location = System::Drawing::Point(37, 51);
			this->textGiris->Name = L"textGiris";
			this->textGiris->Size = System::Drawing::Size(161, 20);
			this->textGiris->TabIndex = 0;
			// 
			// butKaydir
			// 
			this->butKaydir->Location = System::Drawing::Point(204, 48);
			this->butKaydir->Name = L"butKaydir";
			this->butKaydir->Size = System::Drawing::Size(124, 23);
			this->butKaydir->TabIndex = 1;
			this->butKaydir->Text = L"Karakter Yazdir";
			this->butKaydir->UseVisualStyleBackColor = true;
			this->butKaydir->Click += gcnew System::EventHandler(this, &Deneme2::butKaydir_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Karakter Kaydir:";
			// 
			// textKarakterAdet
			// 
			this->textKarakterAdet->Location = System::Drawing::Point(148, 106);
			this->textKarakterAdet->Name = L"textKarakterAdet";
			this->textKarakterAdet->Size = System::Drawing::Size(100, 20);
			this->textKarakterAdet->TabIndex = 3;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(40, 160);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 108);
			this->listBox1->TabIndex = 4;
			// 
			// Deneme2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(340, 328);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textKarakterAdet);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->butKaydir);
			this->Controls->Add(this->textGiris);
			this->Name = L"Deneme2";
			this->Text = L"Deneme2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void butKaydir_Click(System::Object^  sender, System::EventArgs^  e) {
		System::String^ str = textGiris->Text;
		System::String^ sonuc;
		int kaydirmaAdet = System::Convert::ToInt32(textKarakterAdet->Text);
		char dizi;
		for (int i = 0; i < str->Length; i++)
		{
			System::String^ buffer = str->Substring(i, 1);
			char tampon = System::Convert::ToChar(buffer);
			System::Byte deger = System::Convert::ToByte(tampon);
			deger += kaydirmaAdet;
			dizi = System::Convert::ToChar(deger);
			sonuc += System::Convert::ToChar(dizi);
		}
		listBox1->Items->Add(sonuc);
	}
	};
}
