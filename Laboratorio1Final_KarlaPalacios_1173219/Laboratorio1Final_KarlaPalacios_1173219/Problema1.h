#pragma once


namespace Laboratorio1FinalKarlaPalacios1173219 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Problema1
	/// </summary>
	public ref class Problema1 : public System::Windows::Forms::Form
	{
	public:
		Problema1(void)
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
		~Problema1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtoperando1;
	private: System::Windows::Forms::TextBox^ txtoperando2;
	private: System::Windows::Forms::Button^ btncalcularRecursivo;
	private: System::Windows::Forms::Button^ btnIterativo;
	private: System::Windows::Forms::LinkLabel^ lblresultadorecursivo;
	private: System::Windows::Forms::LinkLabel^ lblresultadoIterativo;
	private: System::Windows::Forms::Button^ btnregresar;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtoperando1 = (gcnew System::Windows::Forms::TextBox());
			this->txtoperando2 = (gcnew System::Windows::Forms::TextBox());
			this->btncalcularRecursivo = (gcnew System::Windows::Forms::Button());
			this->btnIterativo = (gcnew System::Windows::Forms::Button());
			this->lblresultadorecursivo = (gcnew System::Windows::Forms::LinkLabel());
			this->lblresultadoIterativo = (gcnew System::Windows::Forms::LinkLabel());
			this->btnregresar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Operando 1:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Operando 2:";
			// 
			// txtoperando1
			// 
			this->txtoperando1->Location = System::Drawing::Point(130, 31);
			this->txtoperando1->Name = L"txtoperando1";
			this->txtoperando1->Size = System::Drawing::Size(142, 20);
			this->txtoperando1->TabIndex = 2;
			// 
			// txtoperando2
			// 
			this->txtoperando2->Location = System::Drawing::Point(130, 57);
			this->txtoperando2->Name = L"txtoperando2";
			this->txtoperando2->Size = System::Drawing::Size(142, 20);
			this->txtoperando2->TabIndex = 3;
			// 
			// btncalcularRecursivo
			// 
			this->btncalcularRecursivo->Location = System::Drawing::Point(24, 113);
			this->btncalcularRecursivo->Name = L"btncalcularRecursivo";
			this->btncalcularRecursivo->Size = System::Drawing::Size(122, 23);
			this->btncalcularRecursivo->TabIndex = 4;
			this->btncalcularRecursivo->Text = L"Calcular Recursivo";
			this->btncalcularRecursivo->UseVisualStyleBackColor = true;
			this->btncalcularRecursivo->Click += gcnew System::EventHandler(this, &Problema1::btncalcularRecursivo_Click);
			// 
			// btnIterativo
			// 
			this->btnIterativo->Location = System::Drawing::Point(24, 167);
			this->btnIterativo->Name = L"btnIterativo";
			this->btnIterativo->Size = System::Drawing::Size(122, 23);
			this->btnIterativo->TabIndex = 5;
			this->btnIterativo->Text = L"Calcular Iterativo";
			this->btnIterativo->UseVisualStyleBackColor = true;
			this->btnIterativo->Click += gcnew System::EventHandler(this, &Problema1::btnIterativo_Click);
			// 
			// lblresultadorecursivo
			// 
			this->lblresultadorecursivo->AutoSize = true;
			this->lblresultadorecursivo->Location = System::Drawing::Point(166, 118);
			this->lblresultadorecursivo->Name = L"lblresultadorecursivo";
			this->lblresultadorecursivo->Size = System::Drawing::Size(106, 13);
			this->lblresultadorecursivo->TabIndex = 6;
			this->lblresultadorecursivo->TabStop = true;
			this->lblresultadorecursivo->Text = L"Resultado Recursivo";
			// 
			// lblresultadoIterativo
			// 
			this->lblresultadoIterativo->AutoSize = true;
			this->lblresultadoIterativo->Location = System::Drawing::Point(166, 172);
			this->lblresultadoIterativo->Name = L"lblresultadoIterativo";
			this->lblresultadoIterativo->Size = System::Drawing::Size(96, 13);
			this->lblresultadoIterativo->TabIndex = 7;
			this->lblresultadoIterativo->TabStop = true;
			this->lblresultadoIterativo->Text = L"Resultado Iterativo";
			// 
			// btnregresar
			// 
			this->btnregresar->Location = System::Drawing::Point(99, 217);
			this->btnregresar->Name = L"btnregresar";
			this->btnregresar->Size = System::Drawing::Size(75, 23);
			this->btnregresar->TabIndex = 8;
			this->btnregresar->Text = L"Regresar";
			this->btnregresar->UseVisualStyleBackColor = true;
			this->btnregresar->Click += gcnew System::EventHandler(this, &Problema1::button1_Click);
			// 
			// Problema1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->btnregresar);
			this->Controls->Add(this->lblresultadoIterativo);
			this->Controls->Add(this->lblresultadorecursivo);
			this->Controls->Add(this->btnIterativo);
			this->Controls->Add(this->btncalcularRecursivo);
			this->Controls->Add(this->txtoperando2);
			this->Controls->Add(this->txtoperando1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Problema1";
			this->Text = L"Problema1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void btncalcularRecursivo_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			lblresultadorecursivo->Text = "" + P1Recursivo(Convert::ToInt32(txtoperando1->Text), Convert::ToInt32(txtoperando2->Text));
			MessageBox::Show("Operacion Realizada exitosamente", "Operacion producto", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ e) {
			MessageBox::Show("Error detectado" + e->Message, "Operacion suma", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void btnIterativo_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		lblresultadoIterativo->Text = "" + P1Iterativo(Convert::ToInt32(txtoperando1->Text), Convert::ToInt32(txtoperando2->Text));
		MessageBox::Show("Operacion Realizada exitosamente", "Operacion producto", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ e) {
		MessageBox::Show("Error detectado" + e->Message, "Operacion suma", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->Close();
}
	   int P1Recursivo(int a, int b) {
		   if (b == 0 || a == 0)
		   {
			   return 0;
		   }
		   if (b == 1)
		   {
			   return a;
		   }
		   else
		   {
			   return a + P1Recursivo(a, b - 1);
		   }
	   }
	   int P1Iterativo(int a, int b) {
		   int producto = 0;
		   while (b != 0)
		   {
			   producto = producto + a;
			   b = b - 1;

		   }
		   return producto;
	   }
};
}
