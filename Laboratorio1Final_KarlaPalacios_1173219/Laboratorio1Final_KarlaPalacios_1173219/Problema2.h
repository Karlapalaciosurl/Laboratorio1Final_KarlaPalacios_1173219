#pragma once


namespace Laboratorio1FinalKarlaPalacios1173219 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Problema2
	/// </summary>
	public ref class Problema2 : public System::Windows::Forms::Form
	{
	public:
		Problema2(void)
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
		~Problema2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnVerificar;
	protected:
	private: System::Windows::Forms::Label^ lblResPalindromo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblNumero;
	private: System::Windows::Forms::Label^ lblNumero2;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lblTotal;
	private: System::Windows::Forms::Label^ label5;

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
			this->btnVerificar = (gcnew System::Windows::Forms::Button());
			this->lblResPalindromo = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblNumero = (gcnew System::Windows::Forms::Label());
			this->lblNumero2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblTotal = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnVerificar
			// 
			this->btnVerificar->Location = System::Drawing::Point(91, 61);
			this->btnVerificar->Name = L"btnVerificar";
			this->btnVerificar->Size = System::Drawing::Size(100, 23);
			this->btnVerificar->TabIndex = 0;
			this->btnVerificar->Text = L"Verificar Archivo";
			this->btnVerificar->UseVisualStyleBackColor = true;
			this->btnVerificar->Click += gcnew System::EventHandler(this, &Problema2::button1_Click);
			// 
			// lblResPalindromo
			// 
			this->lblResPalindromo->AutoSize = true;
			this->lblResPalindromo->Location = System::Drawing::Point(48, 106);
			this->lblResPalindromo->Name = L"lblResPalindromo";
			this->lblResPalindromo->Size = System::Drawing::Size(13, 13);
			this->lblResPalindromo->TabIndex = 1;
			this->lblResPalindromo->Text = L"_";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(63, 145);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Número de Palíndromas:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(69, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 15);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Palablas Palíndromas";
			// 
			// lblNumero
			// 
			this->lblNumero->AutoSize = true;
			this->lblNumero->Location = System::Drawing::Point(205, 145);
			this->lblNumero->Name = L"lblNumero";
			this->lblNumero->Size = System::Drawing::Size(13, 13);
			this->lblNumero->TabIndex = 4;
			this->lblNumero->Text = L"_";
			// 
			// lblNumero2
			// 
			this->lblNumero2->AutoSize = true;
			this->lblNumero2->Location = System::Drawing::Point(205, 178);
			this->lblNumero2->Name = L"lblNumero2";
			this->lblNumero2->Size = System::Drawing::Size(13, 13);
			this->lblNumero2->TabIndex = 6;
			this->lblNumero2->Text = L"_";
			this->lblNumero2->Click += gcnew System::EventHandler(this, &Problema2::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(46, 178);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(141, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Número de No Palíndromas:";
			this->label4->Click += gcnew System::EventHandler(this, &Problema2::label4_Click);
			// 
			// lblTotal
			// 
			this->lblTotal->AutoSize = true;
			this->lblTotal->Location = System::Drawing::Point(205, 211);
			this->lblTotal->Name = L"lblTotal";
			this->lblTotal->Size = System::Drawing::Size(13, 13);
			this->lblTotal->TabIndex = 8;
			this->lblTotal->Text = L"_";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(95, 211);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Total de palabras:";
			// 
			// Problema2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->lblTotal);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->lblNumero2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lblNumero);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblResPalindromo);
			this->Controls->Add(this->btnVerificar);
			this->Name = L"Problema2";
			this->Text = L"Problema2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		bool Palindromo(System::String^ palabra, int pos) {
			if (palabra[pos] == palabra[palabra->Length - (pos + 1)])
			{
				if (pos > palabra->Length / 2) {
					return true;
				}
				else {
					return (true && Palindromo(palabra, pos + 1));
				}
			}
			else {
				return false;
			}
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::IO::StreamReader^ streamReader = gcnew System::IO::StreamReader("...//Palabras.txt");
		String^ contenidoArchivo = streamReader->ReadToEnd();
		array<String^>^ palabras = contenidoArchivo->Split(',');
		System::IO::StreamWriter^ streamWriter = gcnew System::IO::StreamWriter("...//PalabrasPalindromas.txt");
		String^ resultado = "";
		int contador = 0;
		int contador2 = 0;
		int total = 0;

		for (int i = 0; i < palabras->Length; i++)
		{
			String^ palabra = palabras[i];
			if (Palindromo(palabra, 0)) {
				resultado += "Palíndroma";
				contador++;
			}
			else {
				resultado += "No palíndroma";
				contador2++;
			}
			if (i != palabras->Length - 1) {
				resultado += ", ";
			}
		}

		total = contador + contador2;
		streamWriter->WriteLine(resultado);
		streamWriter->Close();
		lblResPalindromo->Text = "El archivo ha sido guardado con éxito";
		lblNumero->Text = Convert::ToString(contador);
		lblNumero2->Text = Convert::ToString(contador2);
		lblTotal->Text = Convert::ToString(total);
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
