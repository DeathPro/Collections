#pragma once

namespace CGörselProgramlama {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Deneme3
	/// </summary>
	public ref class Deneme3 : public System::Windows::Forms::Form
	{
	public:
		Deneme3(void)
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
		~Deneme3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Button^  btnPanel;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  btnMesaj;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  btnRenkDeðiþtir;



	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::RadioButton^  rdbtnBekar;
	private: System::Windows::Forms::RadioButton^  rdbtnEvli;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  cmbboxMemleket;
	private: System::Windows::Forms::TextBox^  txtAdSoyad;
	private: System::Windows::Forms::Button^  btnListele;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  btnClose;



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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnListele = (gcnew System::Windows::Forms::Button());
			this->cmbboxMemleket = (gcnew System::Windows::Forms::ComboBox());
			this->txtAdSoyad = (gcnew System::Windows::Forms::TextBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->rdbtnBekar = (gcnew System::Windows::Forms::RadioButton());
			this->rdbtnEvli = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->btnPanel = (gcnew System::Windows::Forms::Button());
			this->btnMesaj = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnRenkDeðiþtir = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->panel1->Controls->Add(this->btnListele);
			this->panel1->Controls->Add(this->cmbboxMemleket);
			this->panel1->Controls->Add(this->txtAdSoyad);
			this->panel1->Controls->Add(this->checkedListBox1);
			this->panel1->Controls->Add(this->rdbtnBekar);
			this->panel1->Controls->Add(this->rdbtnEvli);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->listBox1);
			this->panel1->Location = System::Drawing::Point(12, 144);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(681, 227);
			this->panel1->TabIndex = 0;
			// 
			// btnListele
			// 
			this->btnListele->Location = System::Drawing::Point(403, 16);
			this->btnListele->Name = L"btnListele";
			this->btnListele->Size = System::Drawing::Size(125, 23);
			this->btnListele->TabIndex = 14;
			this->btnListele->Text = L"Listele";
			this->btnListele->UseVisualStyleBackColor = true;
			this->btnListele->Click += gcnew System::EventHandler(this, &Deneme3::btnListele_Click);
			// 
			// cmbboxMemleket
			// 
			this->cmbboxMemleket->FormattingEnabled = true;
			this->cmbboxMemleket->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Adana", L"Ankara", L"Ýstanbul", L"Rize" });
			this->cmbboxMemleket->Location = System::Drawing::Point(130, 50);
			this->cmbboxMemleket->Name = L"cmbboxMemleket";
			this->cmbboxMemleket->Size = System::Drawing::Size(121, 21);
			this->cmbboxMemleket->TabIndex = 6;
			// 
			// txtAdSoyad
			// 
			this->txtAdSoyad->Location = System::Drawing::Point(130, 18);
			this->txtAdSoyad->Name = L"txtAdSoyad";
			this->txtAdSoyad->Size = System::Drawing::Size(100, 20);
			this->txtAdSoyad->TabIndex = 12;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Müzik", L"Sinema", L"Futbol", L"Seyehat",
					L"Basketbol"
			});
			this->checkedListBox1->Location = System::Drawing::Point(110, 90);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(120, 79);
			this->checkedListBox1->TabIndex = 7;
			// 
			// rdbtnBekar
			// 
			this->rdbtnBekar->AutoSize = true;
			this->rdbtnBekar->Location = System::Drawing::Point(115, 207);
			this->rdbtnBekar->Name = L"rdbtnBekar";
			this->rdbtnBekar->Size = System::Drawing::Size(53, 17);
			this->rdbtnBekar->TabIndex = 6;
			this->rdbtnBekar->TabStop = true;
			this->rdbtnBekar->Text = L"Bekar";
			this->rdbtnBekar->UseVisualStyleBackColor = true;
			// 
			// rdbtnEvli
			// 
			this->rdbtnEvli->AutoSize = true;
			this->rdbtnEvli->Location = System::Drawing::Point(115, 184);
			this->rdbtnEvli->Name = L"rdbtnEvli";
			this->rdbtnEvli->Size = System::Drawing::Size(42, 17);
			this->rdbtnEvli->TabIndex = 5;
			this->rdbtnEvli->TabStop = true;
			this->rdbtnEvli->Text = L"Evli";
			this->rdbtnEvli->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(33, 194);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"MEDENÝ HAL:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(33, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"HOBÝLER:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 58);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"MEMLEKET:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"AD SOYAD:";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(403, 50);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(191, 173);
			this->listBox1->TabIndex = 0;
			// 
			// btnPanel
			// 
			this->btnPanel->Location = System::Drawing::Point(323, 82);
			this->btnPanel->Name = L"btnPanel";
			this->btnPanel->Size = System::Drawing::Size(170, 23);
			this->btnPanel->TabIndex = 1;
			this->btnPanel->Text = L"Paneli Gizle";
			this->btnPanel->UseVisualStyleBackColor = true;
			this->btnPanel->Click += gcnew System::EventHandler(this, &Deneme3::btnPanel_Click);
			// 
			// btnMesaj
			// 
			this->btnMesaj->Location = System::Drawing::Point(48, 32);
			this->btnMesaj->Name = L"btnMesaj";
			this->btnMesaj->Size = System::Drawing::Size(97, 23);
			this->btnMesaj->TabIndex = 2;
			this->btnMesaj->Text = L"Mesaj";
			this->btnMesaj->UseVisualStyleBackColor = true;
			this->btnMesaj->Click += gcnew System::EventHandler(this, &Deneme3::btnMesaj_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(192, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Etiket";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(275, 34);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(173, 20);
			this->textBox1->TabIndex = 4;
			// 
			// btnRenkDeðiþtir
			// 
			this->btnRenkDeðiþtir->Location = System::Drawing::Point(57, 82);
			this->btnRenkDeðiþtir->Name = L"btnRenkDeðiþtir";
			this->btnRenkDeðiþtir->Size = System::Drawing::Size(75, 56);
			this->btnRenkDeðiþtir->TabIndex = 5;
			this->btnRenkDeðiþtir->Text = L"Renk Deðiþtir";
			this->btnRenkDeðiþtir->UseVisualStyleBackColor = true;
			this->btnRenkDeðiþtir->Click += gcnew System::EventHandler(this, &Deneme3::btnRenkDeðiþtir_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(154, 101);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(109, 20);
			this->textBox2->TabIndex = 6;
			// 
			// btnClose
			// 
			this->btnClose->BackColor = System::Drawing::Color::Aquamarine;
			this->btnClose->ForeColor = System::Drawing::Color::Red;
			this->btnClose->Location = System::Drawing::Point(565, 31);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(109, 23);
			this->btnClose->TabIndex = 7;
			this->btnClose->Text = L"Kapat";
			this->btnClose->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btnClose->UseVisualStyleBackColor = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &Deneme3::btnClose_Click);
			// 
			// Deneme3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(705, 383);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->btnRenkDeðiþtir);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnMesaj);
			this->Controls->Add(this->btnPanel);
			this->Controls->Add(this->panel1);
			this->Name = L"Deneme3";
			this->Text = L"Deneme3";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnPanel_Click(System::Object^  sender, System::EventArgs^  e) {
		if (panel1->Visible)
		{
			panel1->Visible = false;
			btnPanel->Text = "Paneli Göster";
		}
		else
		{
			panel1->Visible = true;
			btnPanel->Text = "Paneli Gizle";
		}
	}
	private: System::Void btnMesaj_Click(System::Object^  sender, System::EventArgs^  e) {
		label1->Text = "MERHABA...";
		textBox1->Text = "HELLO...";
	}

	private: System::Void btnRenkDeðiþtir_Click(System::Object^  sender, System::EventArgs^  e) {
		label1->ForeColor = System::Drawing::Color::Red;
		this->BackColor = System::Drawing::Color::Yellow;
	}
	private: System::Void btnListele_Click(System::Object^  sender, System::EventArgs^  e) {
		listBox1->Items->Add("Ad Soyad: " + txtAdSoyad->Text->ToUpper());
		listBox1->Items->Add("Memleket: " + cmbboxMemleket->SelectedItem);
		listBox1->Items->Add("Hobiler: ");
		for (int i = 0; i < checkedListBox1->CheckedItems->Count; i++)
		{
			listBox1->Items->Add(checkedListBox1->CheckedItems[i]);
		}
		if (rdbtnEvli->Checked)
		{
			listBox1->Items->Add("Medeni Hali: " + rdbtnEvli->Text);
		}
		else if (rdbtnBekar->Checked)
		{
			listBox1->Items->Add("Medeni Hali: " + rdbtnBekar->Text);
		}

	}

	private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
};
}
