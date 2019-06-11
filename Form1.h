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

	private: System::Windows::Forms::Button^ bt_limpa;
	private: System::Windows::Forms::Button^ bt_localiza;
	private: System::Windows::Forms::TextBox^ txt_localiza;
	private: System::Windows::Forms::TextBox^ txt_result;
	private: System::Windows::Forms::Button^ bt_velhos;
	private: System::Windows::Forms::Button^ bt_freguesia;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ verLinhaParaAdicionarToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^ delegadoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mostrarColunaDelegadoToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ sortearDelegadoToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ reiniciarDatagridToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nome;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Freguesia;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nascimento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Sexo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Delegado;
	private: System::Windows::Forms::ToolStripMenuItem^ estatisticasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ removerLinhaSelecionadaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ maisVelhosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ guardaDelegadoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clacularMédiasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ melhorAlunoToolStripMenuItem;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->data_infos = (gcnew System::Windows::Forms::DataGridView());
			this->Nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Freguesia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nascimento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sexo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Delegado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->bt_limpa = (gcnew System::Windows::Forms::Button());
			this->bt_localiza = (gcnew System::Windows::Forms::Button());
			this->txt_localiza = (gcnew System::Windows::Forms::TextBox());
			this->txt_result = (gcnew System::Windows::Forms::TextBox());
			this->bt_velhos = (gcnew System::Windows::Forms::Button());
			this->bt_freguesia = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verLinhaParaAdicionarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reiniciarDatagridToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->removerLinhaSelecionadaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->delegadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mostrarColunaDelegadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sortearDelegadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->guardaDelegadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estatisticasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->maisVelhosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clacularMédiasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->melhorAlunoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_infos))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// data_infos
			// 
			this->data_infos->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->data_infos->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->data_infos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_infos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Nome, this->Freguesia,
					this->Nascimento, this->Sexo, this->Delegado
			});
			this->data_infos->Location = System::Drawing::Point(12, 137);
			this->data_infos->Name = L"data_infos";
			this->data_infos->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_infos->Size = System::Drawing::Size(927, 423);
			this->data_infos->TabIndex = 0;
			// 
			// Nome
			// 
			this->Nome->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Nome->FillWeight = 80;
			this->Nome->HeaderText = L"Nome";
			this->Nome->Name = L"Nome";
			// 
			// Freguesia
			// 
			this->Freguesia->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Freguesia->FillWeight = 50;
			this->Freguesia->HeaderText = L"Freguesia";
			this->Freguesia->Name = L"Freguesia";
			// 
			// Nascimento
			// 
			this->Nascimento->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Nascimento->FillWeight = 50;
			this->Nascimento->HeaderText = L"Nascimento";
			this->Nascimento->Name = L"Nascimento";
			// 
			// Sexo
			// 
			this->Sexo->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Sexo->FillWeight = 15;
			this->Sexo->HeaderText = L"Sexo";
			this->Sexo->Name = L"Sexo";
			// 
			// Delegado
			// 
			this->Delegado->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Delegado->FillWeight = 25;
			this->Delegado->HeaderText = L"Delegado";
			this->Delegado->Name = L"Delegado";
			// 
			// bt_limpa
			// 
			this->bt_limpa->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->bt_limpa->Location = System::Drawing::Point(12, 29);
			this->bt_limpa->Name = L"bt_limpa";
			this->bt_limpa->Size = System::Drawing::Size(218, 23);
			this->bt_limpa->TabIndex = 1;
			this->bt_limpa->Text = L"Reinicia Datagrid";
			this->bt_limpa->UseVisualStyleBackColor = true;
			this->bt_limpa->Click += gcnew System::EventHandler(this, &Form1::Bt_limpa_Click);
			// 
			// bt_localiza
			// 
			this->bt_localiza->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->bt_localiza->Location = System::Drawing::Point(12, 58);
			this->bt_localiza->Name = L"bt_localiza";
			this->bt_localiza->Size = System::Drawing::Size(218, 23);
			this->bt_localiza->TabIndex = 2;
			this->bt_localiza->Text = L"Localiza Nome";
			this->bt_localiza->UseVisualStyleBackColor = true;
			this->bt_localiza->Click += gcnew System::EventHandler(this, &Form1::Bt_localiza_Click);
			// 
			// txt_localiza
			// 
			this->txt_localiza->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->txt_localiza->Location = System::Drawing::Point(118, 87);
			this->txt_localiza->Name = L"txt_localiza";
			this->txt_localiza->Size = System::Drawing::Size(217, 20);
			this->txt_localiza->TabIndex = 3;
			// 
			// txt_result
			// 
			this->txt_result->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->txt_result->Location = System::Drawing::Point(714, 29);
			this->txt_result->Multiline = true;
			this->txt_result->Name = L"txt_result";
			this->txt_result->Size = System::Drawing::Size(225, 89);
			this->txt_result->TabIndex = 4;
			this->txt_result->TextChanged += gcnew System::EventHandler(this, &Form1::Txt_result_TextChanged);
			// 
			// bt_velhos
			// 
			this->bt_velhos->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->bt_velhos->Location = System::Drawing::Point(236, 29);
			this->bt_velhos->Name = L"bt_velhos";
			this->bt_velhos->Size = System::Drawing::Size(218, 23);
			this->bt_velhos->TabIndex = 5;
			this->bt_velhos->Text = L"Quem é o mais velho\?";
			this->bt_velhos->UseVisualStyleBackColor = true;
			this->bt_velhos->Click += gcnew System::EventHandler(this, &Form1::Bt_velhos_Click);
			// 
			// bt_freguesia
			// 
			this->bt_freguesia->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->bt_freguesia->Location = System::Drawing::Point(236, 58);
			this->bt_freguesia->Name = L"bt_freguesia";
			this->bt_freguesia->Size = System::Drawing::Size(218, 23);
			this->bt_freguesia->TabIndex = 6;
			this->bt_freguesia->Text = L"Quantos há desta freguesia";
			this->bt_freguesia->UseVisualStyleBackColor = true;
			this->bt_freguesia->Click += gcnew System::EventHandler(this, &Form1::Bt_freguesia_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem1,
					this->delegadoToolStripMenuItem, this->estatisticasToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(951, 24);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->verLinhaParaAdicionarToolStripMenuItem,
					this->reiniciarDatagridToolStripMenuItem, this->removerLinhaSelecionadaToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(64, 20);
			this->toolStripMenuItem1->Text = L"Datagrid";
			// 
			// verLinhaParaAdicionarToolStripMenuItem
			// 
			this->verLinhaParaAdicionarToolStripMenuItem->Name = L"verLinhaParaAdicionarToolStripMenuItem";
			this->verLinhaParaAdicionarToolStripMenuItem->Size = System::Drawing::Size(300, 22);
			this->verLinhaParaAdicionarToolStripMenuItem->Text = L"Esconder linha para adicionar e cabeçalhos";
			this->verLinhaParaAdicionarToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::VerLinhaParaAdicionarToolStripMenuItem_Click);
			// 
			// reiniciarDatagridToolStripMenuItem
			// 
			this->reiniciarDatagridToolStripMenuItem->Name = L"reiniciarDatagridToolStripMenuItem";
			this->reiniciarDatagridToolStripMenuItem->Size = System::Drawing::Size(300, 22);
			this->reiniciarDatagridToolStripMenuItem->Text = L"Reiniciar Datagrid";
			this->reiniciarDatagridToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ReiniciarDatagridToolStripMenuItem_Click);
			// 
			// removerLinhaSelecionadaToolStripMenuItem
			// 
			this->removerLinhaSelecionadaToolStripMenuItem->Name = L"removerLinhaSelecionadaToolStripMenuItem";
			this->removerLinhaSelecionadaToolStripMenuItem->Size = System::Drawing::Size(300, 22);
			this->removerLinhaSelecionadaToolStripMenuItem->Text = L"Remover linha selecionada";
			this->removerLinhaSelecionadaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::RemoverLinhaSelecionadaToolStripMenuItem_Click);
			// 
			// delegadoToolStripMenuItem
			// 
			this->delegadoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->mostrarColunaDelegadoToolStripMenuItem,
					this->sortearDelegadoToolStripMenuItem, this->guardaDelegadoToolStripMenuItem
			});
			this->delegadoToolStripMenuItem->Name = L"delegadoToolStripMenuItem";
			this->delegadoToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->delegadoToolStripMenuItem->Text = L"Delegado";
			// 
			// mostrarColunaDelegadoToolStripMenuItem
			// 
			this->mostrarColunaDelegadoToolStripMenuItem->Name = L"mostrarColunaDelegadoToolStripMenuItem";
			this->mostrarColunaDelegadoToolStripMenuItem->Size = System::Drawing::Size(223, 22);
			this->mostrarColunaDelegadoToolStripMenuItem->Text = L"Mostrar coluna do delegado";
			this->mostrarColunaDelegadoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::MostrarColunaDelegadoToolStripMenuItem_Click);
			// 
			// sortearDelegadoToolStripMenuItem
			// 
			this->sortearDelegadoToolStripMenuItem->Name = L"sortearDelegadoToolStripMenuItem";
			this->sortearDelegadoToolStripMenuItem->Size = System::Drawing::Size(223, 22);
			this->sortearDelegadoToolStripMenuItem->Text = L"Sortear delegado";
			this->sortearDelegadoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::SortearDelegadoToolStripMenuItem_Click);
			// 
			// guardaDelegadoToolStripMenuItem
			// 
			this->guardaDelegadoToolStripMenuItem->Name = L"guardaDelegadoToolStripMenuItem";
			this->guardaDelegadoToolStripMenuItem->Size = System::Drawing::Size(223, 22);
			this->guardaDelegadoToolStripMenuItem->Text = L"Guarda delegado";
			this->guardaDelegadoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::GuardaDelegadoToolStripMenuItem_Click);
			// 
			// estatisticasToolStripMenuItem
			// 
			this->estatisticasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->maisVelhosToolStripMenuItem,
					this->clacularMédiasToolStripMenuItem, this->melhorAlunoToolStripMenuItem
			});
			this->estatisticasToolStripMenuItem->Name = L"estatisticasToolStripMenuItem";
			this->estatisticasToolStripMenuItem->Size = System::Drawing::Size(76, 20);
			this->estatisticasToolStripMenuItem->Text = L"Estatisticas";
			// 
			// maisVelhosToolStripMenuItem
			// 
			this->maisVelhosToolStripMenuItem->Name = L"maisVelhosToolStripMenuItem";
			this->maisVelhosToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->maisVelhosToolStripMenuItem->Text = L"Mais velho(s)";
			this->maisVelhosToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::MaisVelhosToolStripMenuItem_Click);
			// 
			// clacularMédiasToolStripMenuItem
			// 
			this->clacularMédiasToolStripMenuItem->Name = L"clacularMédiasToolStripMenuItem";
			this->clacularMédiasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->clacularMédiasToolStripMenuItem->Text = L"Calcular médias";
			this->clacularMédiasToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ClacularMédiasToolStripMenuItem_Click);
			// 
			// melhorAlunoToolStripMenuItem
			// 
			this->melhorAlunoToolStripMenuItem->Name = L"melhorAlunoToolStripMenuItem";
			this->melhorAlunoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->melhorAlunoToolStripMenuItem->Text = L"Melhor aluno";
			this->melhorAlunoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::MelhorAlunoToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(951, 572);
			this->Controls->Add(this->bt_freguesia);
			this->Controls->Add(this->bt_velhos);
			this->Controls->Add(this->txt_result);
			this->Controls->Add(this->txt_localiza);
			this->Controls->Add(this->bt_localiza);
			this->Controls->Add(this->bt_limpa);
			this->Controls->Add(this->data_infos);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Madagascar";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_infos))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) 
		{
		inicializa();

		data_infos->ColumnCount = 15;

		for (int i = 5; i < 15; i++)
		{
			data_infos->Columns[i]->Width = 35;
		}

		data_infos->Columns[5]->Name = "d1";
		data_infos->Columns[5]->HeaderText = "POR";
		data_infos->Columns[6]->Name = "d2";
		data_infos->Columns[6]->HeaderText = "ING";
		data_infos->Columns[7]->Name = "d3";
		data_infos->Columns[7]->HeaderText = "FIL";
		data_infos->Columns[8]->Name = "d4";
		data_infos->Columns[8]->HeaderText = "MAT";
		data_infos->Columns[9]->Name = "d5";
		data_infos->Columns[9]->HeaderText = "FÍS";
		data_infos->Columns[10]->Name = "d6";
		data_infos->Columns[10]->HeaderText = "QUÍ";
		data_infos->Columns[11]->Name = "d7";
		data_infos->Columns[11]->HeaderText = "GEO";
		data_infos->Columns[12]->Name = "d8";
		data_infos->Columns[12]->HeaderText = "HIS";
		data_infos->Columns[13]->Name = "d9";
		data_infos->Columns[13]->HeaderText = "EF";
		data_infos->Columns[14]->Name = "d10";
		data_infos->Columns[14]->HeaderText = "MOR";
	
		//data_infos->Rows[i]->Cells[j]->Value = geravalor();
		
		for (size_t i = 5; i < 15; i++)
		{
			for (size_t j = 0; j < 20; j++)
			{
				data_infos->Rows[j]->Cells[i]->Value = geravalor();
				data_infos->Columns[i]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
			}
		}
		}

//Função com a inicialização dos dados da datagridview
private: void inicializa()
		{
		data_infos->Rows->Clear();

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
		data_infos->Rows->Add("Zacarias Alexandre Sampaio", "Ferreiros", 1996, "M");
		}

//Função mostrar/esconder linha e cabeçalhos
private: void mostra_adicionar()
	{
	if (data_infos->RowHeadersVisible)
	{
		try
		{
			data_infos->RowHeadersVisible = false;
			data_infos->AllowUserToAddRows = false;
			verLinhaParaAdicionarToolStripMenuItem->Text = "Mostrar linha adicionar e cabeçalho";
		}
		catch (...){}
		
	}
	else
	{
		try
		{
			data_infos->RowHeadersVisible = true;
			data_infos->AllowUserToAddRows = true;
			verLinhaParaAdicionarToolStripMenuItem->Text = "Esconder linha adicionar e cabeçalho";
		}
		catch (...){}
		}

	}

//Função que encontra o mais velho ou os mais velhos
//Escreve os nomes e o ano de nascimento na textbox
private: void mais_velhos()
	{
	int index = data_infos->Rows->Count - 1;
	int data_velho = Convert::ToInt16(data_infos->Rows[0]->Cells[2]->Value);
	String^ resultado = "Mais velho(s):\r\n";

	for (size_t i = 1; i < index; i++)
	{
		if (Convert::ToInt16(data_infos->Rows[i]->Cells[2]->Value) < data_velho)
		{
			data_velho = Convert::ToInt16(data_infos->Rows[i]->Cells[2]->Value);
		}
	}

	for (size_t i = 1; i < index; i++)
	{
		if (Convert::ToInt16(data_infos->Rows[i]->Cells[2]->Value) == data_velho)
		{
			resultado = resultado + Convert::ToString(data_infos->Rows[i]->Cells[0]->Value) + ", " + Convert::ToString(data_infos->Rows[i]->Cells[2]->Value) + "\r\n";
		}
	}
	txt_result->Text = resultado;
	}

private: void mostra_delegado()
	{
		if (data_infos->Columns["Delegado"]->Visible == false)
		{
			//data_infos->Width = data_infos->Width + 100;
			data_infos->Columns["Delegado"]->Visible = true;
			mostrarColunaDelegadoToolStripMenuItem->Text = "Esconder coluna do delegado";
		}
		else
		{
			//data_infos->Width = data_infos->Width - 100;
			data_infos->Columns["Delegado"]->Visible = false;
			mostrarColunaDelegadoToolStripMenuItem->Text = "Mostrar coluna do delegado";

		}
	}

//Função para gerar as notas
private: int geravalor()
{
	//devolve valor entre 6 e 20
	//para gerar números aleatórios:
	Random^ r = gcnew Random();
	int avaliacao;
	int contador = 0;
	for (int k = 0; k < 9999999; k++)
	{
		//diversão ao processador,
		//para melhorar a geração de aleatórios
	}
	//gera um número entre 6 e 20
	avaliacao = r->Next(6, 21);
	if (avaliacao < 10) { avaliacao = r->Next(6, 21); }
	return avaliacao;
}

private: System::Void Bt_limpa_Click(System::Object^ sender, System::EventArgs^ e) 
		{
		inicializa();
		}

private: System::Void Bt_localiza_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	String^ busca = txt_localiza->Text->ToUpper();
	int index = data_infos->Rows->Count-1;

	for (size_t i = 0; i < index; i++)
	{
		if (data_infos->Rows[i]->Cells[0]->Value->ToString()->ToUpper()==busca)
		{
			txt_result->Text = data_infos->Rows[i]->Cells[0]->Value->ToString();
		
		}
		
		index--;
	}

	}

//Botão mais velhos 
private: System::Void Bt_velhos_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	mais_velhos();
	}

private: System::Void Bt_freguesia_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	int index = data_infos->Rows->Count - 1;
	int cont_freg = 0;
	String^ nomes = "Sexo masculino: \r\n\r\n";
	for (size_t i = 0; i < index; i++)
	{
		if (data_infos->Rows[i]->Cells[1]->Value->ToString()->ToUpper() == txt_localiza->Text->ToUpper() && data_infos->Rows[i]->Cells[3]->Value->ToString()->ToUpper()== "M")
		{
			nomes = nomes + Convert::ToString(data_infos->Rows[i]->Cells[0]->Value->ToString()) +  "\r\n";
			cont_freg++;
		}
	}

	txt_result->Text = nomes + "\r\nTotal: " + Convert::ToString(cont_freg);

	}

private: System::Void VerLinhaParaAdicionarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	mostra_adicionar();
	}

private: System::Void MostrarColunaDelegadoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	mostra_delegado();	
	}

private: System::Void SortearDelegadoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	
	Random^ sorteio = gcnew Random();//para gerar números aleatórios
	int x = sorteio->Next(1, 20); //gera um número entre 1 e 20
	int index = data_infos->Rows->Count - 1;

	for (size_t i = 0; i < index; i++)
	{
		data_infos->Rows[i]->Cells[4]->Value=" ";
	}

	data_infos->Rows[x]->Cells[4]->Value = "X";

	}

private: System::Void ReiniciarDatagridToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	inicializa();
	}

private: System::Void Txt_result_TextChanged(System::Object^ sender, System::EventArgs^ e) {}

//Apagar linha selecionada
private: System::Void RemoverLinhaSelecionadaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	int index = data_infos->Rows->Count - 1;

	for (size_t i = 0; i < index; i++)
	{
		if (data_infos->Rows[i]->Selected)
		{
			data_infos->Rows->RemoveAt(i);
		}
	}
	}

//Menu mais velhos
private: System::Void MaisVelhosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	mais_velhos();
	}

//Guardar nome do delegado em ficheiro (incompleto)
private: System::Void GuardaDelegadoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	String^ nome_delegado;
	int index = data_infos->Rows->Count - 1;

	for (size_t i = 0; i < index; i++)
	{
		if (data_infos->Rows[i]->Cells[4]->Value == "X")
		{
			nome_delegado = Convert::ToString(data_infos->Rows[i]->Cells[0]->Value);
		}
	}
	MessageBox::Show(nome_delegado);
	}

//Função que calcula as média e cria uma nova coluna com os resultados
private: System::Void ClacularMédiasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{

	int media = 0;

	data_infos->ColumnCount = 16;

	data_infos->Columns[15]->Name = "med";
	data_infos->Columns[15]->HeaderText = "MED";
	data_infos->Columns[15]->Width = 35;
	data_infos->Columns[15]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;

	for (size_t linhas = 0; linhas < 20; linhas++)
	{
		for (size_t colunas = 5; colunas < 15; colunas++)
		{
			media = media + Convert::ToInt16(data_infos->Rows[linhas]->Cells[colunas]->Value);
		}
		media = media / 10;
		data_infos->Rows[linhas]->Cells[15]->Value = media;
	}
	}

//Procura as média mais altas e escreve na textbox
private: System::Void MelhorAlunoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	int media = 0;
	int media_alta = 0;
	String^ resultado = "";

	for (size_t linhas = 0; linhas < 20; linhas++)
	{
		for (size_t colunas = 5; colunas < 15; colunas++)
		{
			media = media + Convert::ToInt16(data_infos->Rows[linhas]->Cells[colunas]->Value);
		}
		media = media / 10;
		if (media > media_alta)
		{
			resultado = "";
			media_alta = media;
			resultado = resultado + Convert::ToString(data_infos->Rows[linhas]->Cells[0]->Value) + " " + Convert::ToString(media) + "\r\n";
		}
		else if (media==media_alta)
		{
			resultado = resultado + Convert::ToString(data_infos->Rows[linhas]->Cells[0]->Value) + " " + Convert::ToString(media) + "\r\n";
		}
	}

	txt_result->Text = resultado;

	}
};
}
