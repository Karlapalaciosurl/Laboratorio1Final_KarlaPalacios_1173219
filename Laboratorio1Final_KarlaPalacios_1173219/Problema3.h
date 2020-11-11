#pragma once
#include "math.h"
#define FilCol 20

namespace Laboratorio1FinalKarlaPalacios1173219 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Problema3
	/// </summary>

	public ref class Problema3 : public System::Windows::Forms::Form
	{
	public:
		Problema3(void)
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
		~Problema3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtFilas;
	private: System::Windows::Forms::TextBox^ txtColumnas;
	private: System::Windows::Forms::Button^ btnGenerar;
	private: System::Windows::Forms::DataGridView^ dgvMatriz;
	private: System::Windows::Forms::Button^ btnDeternimante;
	private: System::Windows::Forms::Label^ lblDeternimante;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnRegresar;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtFilas = (gcnew System::Windows::Forms::TextBox());
			this->txtColumnas = (gcnew System::Windows::Forms::TextBox());
			this->btnGenerar = (gcnew System::Windows::Forms::Button());
			this->dgvMatriz = (gcnew System::Windows::Forms::DataGridView());
			this->btnDeternimante = (gcnew System::Windows::Forms::Button());
			this->lblDeternimante = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnRegresar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(59, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(296, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese el número de filas y columnas para la matriz cuadrada";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(151, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Filas:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(126, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Columnas:";
			this->label3->Click += gcnew System::EventHandler(this, &Problema3::label3_Click);
			// 
			// txtFilas
			// 
			this->txtFilas->Location = System::Drawing::Point(202, 45);
			this->txtFilas->Name = L"txtFilas";
			this->txtFilas->Size = System::Drawing::Size(61, 20);
			this->txtFilas->TabIndex = 3;
			// 
			// txtColumnas
			// 
			this->txtColumnas->Location = System::Drawing::Point(202, 79);
			this->txtColumnas->Name = L"txtColumnas";
			this->txtColumnas->Size = System::Drawing::Size(61, 20);
			this->txtColumnas->TabIndex = 4;
			// 
			// btnGenerar
			// 
			this->btnGenerar->Location = System::Drawing::Point(129, 112);
			this->btnGenerar->Name = L"btnGenerar";
			this->btnGenerar->Size = System::Drawing::Size(130, 23);
			this->btnGenerar->TabIndex = 5;
			this->btnGenerar->Text = L"Generar Matriz";
			this->btnGenerar->UseVisualStyleBackColor = true;
			this->btnGenerar->Click += gcnew System::EventHandler(this, &Problema3::btnGenerar_Click);
			// 
			// dgvMatriz
			// 
			this->dgvMatriz->AllowUserToAddRows = false;
			this->dgvMatriz->AllowUserToDeleteRows = false;
			this->dgvMatriz->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMatriz->Location = System::Drawing::Point(27, 171);
			this->dgvMatriz->Name = L"dgvMatriz";
			this->dgvMatriz->Size = System::Drawing::Size(356, 217);
			this->dgvMatriz->TabIndex = 6;
			// 
			// btnDeternimante
			// 
			this->btnDeternimante->Location = System::Drawing::Point(77, 400);
			this->btnDeternimante->Name = L"btnDeternimante";
			this->btnDeternimante->Size = System::Drawing::Size(134, 23);
			this->btnDeternimante->TabIndex = 7;
			this->btnDeternimante->Text = L"Calcular Determinante";
			this->btnDeternimante->UseVisualStyleBackColor = true;
			this->btnDeternimante->Click += gcnew System::EventHandler(this, &Problema3::btnDeternimante_Click);
			// 
			// lblDeternimante
			// 
			this->lblDeternimante->AutoSize = true;
			this->lblDeternimante->Location = System::Drawing::Point(241, 405);
			this->lblDeternimante->Name = L"lblDeternimante";
			this->lblDeternimante->Size = System::Drawing::Size(70, 13);
			this->lblDeternimante->TabIndex = 8;
			this->lblDeternimante->Text = L"Determinante";
			this->lblDeternimante->Click += gcnew System::EventHandler(this, &Problema3::lblDeternimante_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(24, 155);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(160, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Ingrese los valores para la matriz";
			// 
			// btnRegresar
			// 
			this->btnRegresar->Location = System::Drawing::Point(171, 444);
			this->btnRegresar->Name = L"btnRegresar";
			this->btnRegresar->Size = System::Drawing::Size(75, 23);
			this->btnRegresar->TabIndex = 10;
			this->btnRegresar->Text = L"Regresar";
			this->btnRegresar->UseVisualStyleBackColor = true;
			this->btnRegresar->Click += gcnew System::EventHandler(this, &Problema3::btnRegresar_Click);
			// 
			// Problema3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(420, 489);
			this->Controls->Add(this->btnRegresar);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lblDeternimante);
			this->Controls->Add(this->btnDeternimante);
			this->Controls->Add(this->dgvMatriz);
			this->Controls->Add(this->btnGenerar);
			this->Controls->Add(this->txtColumnas);
			this->Controls->Add(this->txtFilas);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Problema3";
			this->Text = L"Problema3";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}


	private: void ReestablecerMatriz() {
		dgvMatriz->Rows->Clear();
		dgvMatriz->Columns->Clear();
		dgvMatriz->ColumnHeadersVisible = false;
		dgvMatriz->RowHeadersVisible = false;
	};

		   int Filas = 0;
		   int Columnas = 0;
		   int Orden = 0;

	private: System::Void btnGenerar_Click(System::Object^ sender, System::EventArgs^ e) {


		try {
			Filas = Convert::ToInt32(txtFilas->Text);
			Columnas = Convert::ToInt32(txtColumnas->Text);
			
			if (Filas==Columnas)
			{
				Orden = Filas;
			}
			else
			{
				MessageBox::Show("Ingrese valores para una matriz cuadrada");
				ReestablecerMatriz();
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Error detectado: " + e->Message
				, "Valores ingresados incorrectamente"
				, MessageBoxButtons::OK
				, MessageBoxIcon::Error);
		}

		ReestablecerMatriz();


		if (Columnas > 0) {

			for (int i = 0; i < Columnas; i++) {
				DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
				nuevacolumna->Width = 20;

				DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
				nuevacolumna->CellTemplate = cellTemplate;

				dgvMatriz->Columns->Add(nuevacolumna);
			}
		}

		if (Filas > 0) {
			for (int i = 0; i < Filas; i++) {
				dgvMatriz->Rows->Add();
			}
		}
	}


	private: int Determinante(int matriz[FilCol][FilCol], int orden) {
		int determinante = 0.0;

		if (orden==1)
		{
			determinante = matriz[0][0];
		}
		else
		{
			for (int j = 0; j <orden; j++)
			{
				determinante = determinante + matriz[0][j] * Cofactor(matriz, orden, 0, j);
			}
		}
		return determinante;
	};

	private: int Cofactor(int matriz1[FilCol][FilCol], int _orden, int filC, int colC) {
		int n;
		int cofact = 0;
		int x = 0;
		int y = 0;
		int matriz2[FilCol][FilCol];

		n = _orden - 1;
		for (int i = 0; i < _orden; i++)
		{
			for (int j = 0; j < _orden; j++)
			{
				if (i != filC && j != colC)
				{
					matriz2[x][y] = matriz1[i][j];
					y ++;
					if (y >= n)
					{
						x ++;
						y = 0;
					}
				}
			}
		}
		cofact = pow(-1.0, (filC + colC)) * Determinante(matriz2, n);
		return cofact;
	};

	private: System::Void btnDeternimante_Click(System::Object^ sender, System::EventArgs^ e) {
				
		int Matriz[FilCol][FilCol];
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				Matriz[i][j] = 0;
			}
		}


		for (int i = 0; i < Filas; i++)
		{
			for (int j = 0; j < Columnas; j++)
			{
				Matriz[i][j] = Convert::ToInt32(dgvMatriz->Rows[i]->Cells[j]->Value);
			}
		}

		lblDeternimante->Text=Convert::ToString(Determinante(Matriz, Orden));
	}
	private: System::Void lblDeternimante_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnRegresar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}






