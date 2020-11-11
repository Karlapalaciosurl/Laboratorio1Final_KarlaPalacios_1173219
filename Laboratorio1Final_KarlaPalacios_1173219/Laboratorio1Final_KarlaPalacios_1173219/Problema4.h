#pragma once

namespace Laboratorio1FinalKarlaPalacios1173219 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Problema4
	/// </summary>
	public ref class Problema4 : public System::Windows::Forms::Form
	{
	public:
		Problema4(void)
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
		~Problema4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtNumConvertir;


	private: System::Windows::Forms::TextBox^ txtBaseActual;

	private: System::Windows::Forms::TextBox^ txtBaseDestino;
	private: System::Windows::Forms::Button^ btnConvertirBase;


	protected:




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lblResConversion;

	private: System::Windows::Forms::Label^ label5;


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
			this->txtNumConvertir = (gcnew System::Windows::Forms::TextBox());
			this->txtBaseActual = (gcnew System::Windows::Forms::TextBox());
			this->txtBaseDestino = (gcnew System::Windows::Forms::TextBox());
			this->btnConvertirBase = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblResConversion = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(102, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Conversión de base m a n";
			// 
			// txtNumConvertir
			// 
			this->txtNumConvertir->Location = System::Drawing::Point(205, 44);
			this->txtNumConvertir->Name = L"txtNumConvertir";
			this->txtNumConvertir->Size = System::Drawing::Size(100, 20);
			this->txtNumConvertir->TabIndex = 1;
			// 
			// txtBaseActual
			// 
			this->txtBaseActual->Location = System::Drawing::Point(205, 70);
			this->txtBaseActual->Name = L"txtBaseActual";
			this->txtBaseActual->Size = System::Drawing::Size(100, 20);
			this->txtBaseActual->TabIndex = 2;
			// 
			// txtBaseDestino
			// 
			this->txtBaseDestino->Location = System::Drawing::Point(205, 96);
			this->txtBaseDestino->Name = L"txtBaseDestino";
			this->txtBaseDestino->Size = System::Drawing::Size(100, 20);
			this->txtBaseDestino->TabIndex = 3;
			// 
			// btnConvertirBase
			// 
			this->btnConvertirBase->Location = System::Drawing::Point(87, 147);
			this->btnConvertirBase->Name = L"btnConvertirBase";
			this->btnConvertirBase->Size = System::Drawing::Size(75, 23);
			this->btnConvertirBase->TabIndex = 4;
			this->btnConvertirBase->Text = L"Convertir";
			this->btnConvertirBase->UseVisualStyleBackColor = true;
			this->btnConvertirBase->Click += gcnew System::EventHandler(this, &Problema4::btnConvertir_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(55, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Ingrese el número";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(55, 73);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Ingrese la base actual";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(55, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(131, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Ingrese la base de destino";
			// 
			// lblResConversion
			// 
			this->lblResConversion->AutoSize = true;
			this->lblResConversion->Location = System::Drawing::Point(244, 157);
			this->lblResConversion->Name = L"lblResConversion";
			this->lblResConversion->Size = System::Drawing::Size(13, 13);
			this->lblResConversion->TabIndex = 8;
			this->lblResConversion->Text = L"_";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(222, 137);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Resultado";
			// 
			// Problema4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(392, 196);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->lblResConversion);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnConvertirBase);
			this->Controls->Add(this->txtBaseDestino);
			this->Controls->Add(this->txtBaseActual);
			this->Controls->Add(this->txtNumConvertir);
			this->Controls->Add(this->label1);
			this->Name = L"Problema4";
			this->Text = L"Problema4";
			this->Load += gcnew System::EventHandler(this, &Problema4::Problema4_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

		System::String^ CambiarBase(int num, int basedestino) {
			int currentNum = num % basedestino;
			System::String^ letters = "ABCDEF";
			System::String^ let = "";
			if (currentNum >= 10) {
				currentNum -= 10;
				let = letters[currentNum].ToString();
			}
			else {
				let = currentNum.ToString();
			}
			int newNum = num / basedestino;
			if (num < basedestino) {
				return System::Convert::ToString(let);
			}
			return (CambiarBase(newNum, basedestino) + let);
		}

		int Potencia(int num, int pot) {
			if (pot == 1) {
				return num;
			}
			else if (pot == 0) {
				return 1;
			}
			else {
				return num * Potencia(num, pot - 1);
			}
		}
		
		int ConvertDecimal(System::String^ num1, int num, int num2, int baseactual) {
			//num1->Split();
			char currentChar;
			int currentValue;
			for (int i = 0; i < num1->Length; i++)
			{
				//if (num1[i] != ".")
				currentChar = num1[i];
				if (currentChar >= 'A') {
					currentValue = currentChar - 'A' + 10;
				}
				else {
					currentValue = currentChar - '0';
				}

				num2 = System::Convert::ToInt32(currentValue);
				num += num2 * Potencia(baseactual, num1->Length - 1 - i);
			}

			return num;
		}

	private: System::Void btnConvertir_Click(System::Object^ sender, System::EventArgs^ e) {
		
		System::String^ numconversion = System::Convert::ToString(txtNumConvertir->Text);
		int baseactual = System::Convert::ToInt32(txtBaseActual->Text);
		int basedestino = System::Convert::ToInt32(txtBaseDestino->Text);

		int num1 = ConvertDecimal(numconversion, 0, 0, baseactual);

		if (basedestino == 10) {
			lblResConversion->Text = System::Convert::ToString(num1);
		}
		else {
			lblResConversion->Text = CambiarBase(num1, basedestino);
		}

		
	}
private: System::Void Problema4_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
