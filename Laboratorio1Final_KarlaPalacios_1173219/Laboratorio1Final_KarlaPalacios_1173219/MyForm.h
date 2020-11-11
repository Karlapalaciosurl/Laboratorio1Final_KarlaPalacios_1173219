#pragma once
#include"Problema1.h"
#include"Problema2.h"
#include"Problema3.h"
#include"Problema4.h"

namespace Laboratorio1FinalKarlaPalacios1173219 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ cbBoxProblemas;
	private: System::Windows::Forms::Button^ btnContinuar;
	private: System::Windows::Forms::Button^ button2;
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
			this->cbBoxProblemas = (gcnew System::Windows::Forms::ComboBox());
			this->btnContinuar = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Seleccione al problema al que desea ingresar";
			// 
			// cbBoxProblemas
			// 
			this->cbBoxProblemas->FormattingEnabled = true;
			this->cbBoxProblemas->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Problema 1", L"Problema 2", L"Problema 3",
					L"Problema 4"
			});
			this->cbBoxProblemas->Location = System::Drawing::Point(51, 66);
			this->cbBoxProblemas->Name = L"cbBoxProblemas";
			this->cbBoxProblemas->Size = System::Drawing::Size(164, 21);
			this->cbBoxProblemas->TabIndex = 1;
			this->cbBoxProblemas->Text = L"Seleccione Problema";
			this->cbBoxProblemas->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cbBoxProblemas_SelectedIndexChanged);
			// 
			// btnContinuar
			// 
			this->btnContinuar->Location = System::Drawing::Point(39, 114);
			this->btnContinuar->Name = L"btnContinuar";
			this->btnContinuar->Size = System::Drawing::Size(75, 23);
			this->btnContinuar->TabIndex = 2;
			this->btnContinuar->Text = L"Continuar";
			this->btnContinuar->UseVisualStyleBackColor = true;
			this->btnContinuar->Click += gcnew System::EventHandler(this, &MyForm::btnContinuar_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(146, 114);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Salir";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(267, 183);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnContinuar);
			this->Controls->Add(this->cbBoxProblemas);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnContinuar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (cbBoxProblemas->SelectedItem == "Problema 1")
		{
			this->Hide();
			Problema1^ p1 = gcnew Problema1();
			p1->ShowDialog();
		}
		if (cbBoxProblemas->SelectedItem == "Problema 2")
		{
			this->Hide();
			Problema2^ p2 = gcnew Problema2();
			p2->ShowDialog();
		}
		if (cbBoxProblemas->SelectedItem == "Problema 3")
		{
			this->Hide();
			Problema3^ p3 = gcnew Problema3();
			p3->ShowDialog();
		}
		if (cbBoxProblemas->SelectedItem == "Problema 4")
		{
			this->Hide();
			Problema4^ p4 = gcnew Problema4();
			p4->ShowDialog();
		}
	}
		   
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
}
private: System::Void cbBoxProblemas_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
