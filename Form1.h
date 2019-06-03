#pragma once

namespace ProjCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ data_infos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nome;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Freguesia;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nascimento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Sexo;
	private: System::Windows::Forms::Button^ bt_limpa;
	private: System::Windows::Forms::Button^ bt_localiza;
	private: System::Windows::Forms::TextBox^ txt_localiza;
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
			this->data_infos = (gcnew System::Windows::Forms::DataGridView());
			this->Nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Freguesia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nascimento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sexo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->bt_limpa = (gcnew System::Windows::Forms::Button());
			this->bt_localiza = (gcnew System::Windows::Forms::Button());
			this->txt_localiza = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_infos))->BeginInit();
			this->SuspendLayout();
			// 
			// data_infos
			// 
			this->data_infos->AllowUserToAddRows = false;
			this->data_infos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_infos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Nome, this->Freguesia,
					this->Nascimento, this->Sexo
			});
			this->data_infos->Location = System::Drawing::Point(12, 51);
			this->data_infos->Name = L"data_infos";
			this->data_infos->Size = System::Drawing::Size(433, 423);
			this->data_infos->TabIndex = 0;
			// 
			// Nome
			// 
			this->Nome->HeaderText = L"Nome";
			this->Nome->Name = L"Nome";
			// 
			// Freguesia
			// 
			this->Freguesia->HeaderText = L"Freguesia";
			this->Freguesia->Name = L"Freguesia";
			// 
			// Nascimento
			// 
			this->Nascimento->HeaderText = L"Nascimento";
			this->Nascimento->Name = L"Nascimento";
			// 
			// Sexo
			// 
			this->Sexo->HeaderText = L"Sexo";
			this->Sexo->Name = L"Sexo";
			// 
			// bt_limpa
			// 
			this->bt_limpa->Location = System::Drawing::Point(462, 51);
			this->bt_limpa->Name = L"bt_limpa";
			this->bt_limpa->Size = System::Drawing::Size(218, 23);
			this->bt_limpa->TabIndex = 1;
			this->bt_limpa->Text = L"Reinicia Datagrid";
			this->bt_limpa->UseVisualStyleBackColor = true;
			this->bt_limpa->Click += gcnew System::EventHandler(this, &Form1::Bt_limpa_Click);
			// 
			// bt_localiza
			// 
			this->bt_localiza->Location = System::Drawing::Point(462, 81);
			this->bt_localiza->Name = L"bt_localiza";
			this->bt_localiza->Size = System::Drawing::Size(75, 23);
			this->bt_localiza->TabIndex = 2;
			this->bt_localiza->Text = L"Localiza";
			this->bt_localiza->UseVisualStyleBackColor = true;
			this->bt_localiza->Click += gcnew System::EventHandler(this, &Form1::Bt_localiza_Click);
			// 
			// txt_localiza
			// 
			this->txt_localiza->Location = System::Drawing::Point(544, 83);
			this->txt_localiza->Name = L"txt_localiza";
			this->txt_localiza->Size = System::Drawing::Size(136, 20);
			this->txt_localiza->TabIndex = 3;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1021, 486);
			this->Controls->Add(this->txt_localiza);
			this->Controls->Add(this->bt_localiza);
			this->Controls->Add(this->bt_limpa);
			this->Controls->Add(this->data_infos);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_infos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) 
		{
		inicializa();
		}

	//Função com a inicialização dos dados da datagridview
	private: void inicializa()
		{
		data_infos->Rows->Add("Ana Rita Cunha", "Maximinos", 1998, "F");
		data_infos->Rows->Add("Bela Costa Silva", "Lomar", 2002, "F");
		data_infos->Rows->Add("Carlos Alberto Costa", "Sequeira", 1999, "M");
		data_infos->Rows->Add("Carlos Daniel Ferreira", "Sequeira", 2001, "M");
		data_infos->Rows->Add("Daniel Bastos Gomes", "Lovios", 1998, "M");
		data_infos->Rows->Add("Daniel Silva Ferraz", "S. Vítor", 1999, "M");
		data_infos->Rows->Add("Elvira Gomes Pendes", "Maximinos", 2001, "F");
		data_infos->Rows->Add("Fernanda Maria Silva", "S. Vítor", 2002, "F");
		data_infos->Rows->Add("Fernando Gomes Barros", "Maximinos", 1999, "M");
		data_infos->Rows->Add("Gilherme Alexandre Barros", "Lamaçães", 2001, "M");
		data_infos->Rows->Add("Hilda Fonseca Silva", "S. Geraldo", 1999, "F");
		data_infos->Rows->Add("José Manuel Carvalho", "Gualtar", 1997, "M");
		data_infos->Rows->Add("José Alberto Gomes", "Maximinos", 2001, "M");
		data_infos->Rows->Add("Maria Silvéria Bastos", "Maximinos", 1997, "F");
		data_infos->Rows->Add("Anabela Bastos Torres", "S. Vítor", 1996, "F");
		data_infos->Rows->Add("Rui Vasco Santos", "Maximinos", 2002, "M");
		data_infos->Rows->Add("Otávio Ferreira", "Maximinos", 1999, "M");
		data_infos->Rows->Add("Silvério Silva Teixeira", "Lamaçães", 2001, "M");
		data_infos->Rows->Add("Teodoro Armando Matos", "Maximinos", 2002, "M");
		data_infos->Rows->Add("Zacarias Alexandre Sampaio", "Ferreiros", 1998, "M");
		}

	private: System::Void Bt_limpa_Click(System::Object^ sender, System::EventArgs^ e) 
		{
		inicializa();
		}

private: System::Void Bt_localiza_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	String^ busca = txt_localiza->Text->ToUpper;
	int index = 0;

	for (size_t i = 0; i < index; i++)
	{
		if (data_infos->Rows[i]->Cells[0]->Value->ToString()->ToUpper()==busca)
		{

		}

		index--;
	}

	//dataGridView1->Rows[i]->Cells[0]->Value->ToString()->ToUpper()
	}
};
}
