#pragma once

namespace SistemaCensosView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaCensosController;
	using namespace SistemaCensosModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de frmVerRespuesta
	/// </summary>
	public ref class frmVerRespuesta : public System::Windows::Forms::Form
	{
	public:
		frmVerRespuesta(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		frmVerRespuesta(GestorCenso^ objGestorCenso,int codigoVer, String^ tituloFormulario, Censo^ objCenso, GestorCensoxEntidad^ objGestorCensoxEntidad)
		{
			InitializeComponent();
			this->objGestorCenso = objGestorCenso;
			this->tituloFormulario = tituloFormulario;
			this->objCenso = objCenso;
			this->objGestorCensoxEntidad = objGestorCensoxEntidad;
			this->codigoVer = codigoVer;

			this->objGestorPregunta = gcnew GestorPregunta();
			this->objGestorAlternativa = gcnew GestorAlternativa();
			this->objPregunta = gcnew Pregunta();
			this->objCensador = gcnew Censador();
			this->objGestorCensoxEntidadxPregunta = gcnew GestorCensoxEntidadxPregunta();
			this->objGestorRespuesta = gcnew GestorRespuesta();
			this->objCensoxEntidad = gcnew CensoxEntidad();
			this->objPersona = gcnew EntidadPersona();
			this->objColegio = gcnew EntidadColegio();
			this->objUniversidad= gcnew EntidadUniversidad();
			this->objCensoxEntidadxPregunta = gcnew CensoxEntidadxPregunta();
			//
			//TODO: agregar código de constructor aquí
			//
		}


	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmVerRespuesta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ Datos_Censo;
	protected:


	private: System::Windows::Forms::TextBox^ Txt_Box_censador;
	private: System::Windows::Forms::Label^ NombreCensador;
	private: System::Windows::Forms::TextBox^ Txt_Box_hora;
	private: System::Windows::Forms::Label^ Hora;
	private: System::Windows::Forms::TextBox^ Txt_Box_codigo;
	private: System::Windows::Forms::Label^ Codigo;
	private: System::Windows::Forms::TextBox^ Txt_Box_obs;
	private: System::Windows::Forms::Label^ label_Observacion;
	private: System::Windows::Forms::Label^ Fecha;


	private: System::Windows::Forms::GroupBox^ groupBox10;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::ComboBox^ comboBox10;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox10;
	private: System::Windows::Forms::GroupBox^ groupBox9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::ComboBox^ comboBox9;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox9;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::ComboBox^ comboBox8;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox8;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::ComboBox^ comboBox7;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox7;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox6;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox5;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox4;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label12;


	 private: GestorCenso^ objGestorCenso;
	private: GestorFormulario^ objGestorFormulario;
	private: GestorPregunta^ objGestorPregunta;
	private: GestorCensoxEntidad^ objGestorCensoxEntidad;
	private: int codigoFormulario;
	private: int codigoVer;
	private: GestorAlternativa^ objGestorAlternativa;
	private: Pregunta^ objPregunta;
	private: String^ tituloFormulario;
	private: String^ tituloCenso;
	private: Censador^ objCensador;
	private: GestorCensoxEntidadxPregunta^ objGestorCensoxEntidadxPregunta;
	private: GestorRespuesta^ objGestorRespuesta;
	private: Censo^ objCenso;
	private: CensoxEntidad^ objCensoxEntidad;
	private: EntidadPersona^ objPersona;
	private: EntidadUniversidad^ objUniversidad;
	private: EntidadColegio^ objColegio;
		   private: CensoxEntidadxPregunta^ objCensoxEntidadxPregunta;
private: System::Windows::Forms::TextBox^ textBox13;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Datos_Censo = (gcnew System::Windows::Forms::GroupBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Txt_Box_censador = (gcnew System::Windows::Forms::TextBox());
			this->NombreCensador = (gcnew System::Windows::Forms::Label());
			this->Txt_Box_hora = (gcnew System::Windows::Forms::TextBox());
			this->Hora = (gcnew System::Windows::Forms::Label());
			this->Txt_Box_codigo = (gcnew System::Windows::Forms::TextBox());
			this->Codigo = (gcnew System::Windows::Forms::Label());
			this->Txt_Box_obs = (gcnew System::Windows::Forms::TextBox());
			this->label_Observacion = (gcnew System::Windows::Forms::Label());
			this->Fecha = (gcnew System::Windows::Forms::Label());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->checkedListBox10 = (gcnew System::Windows::Forms::CheckedListBox());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->checkedListBox9 = (gcnew System::Windows::Forms::CheckedListBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->checkedListBox8 = (gcnew System::Windows::Forms::CheckedListBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->checkedListBox7 = (gcnew System::Windows::Forms::CheckedListBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->checkedListBox6 = (gcnew System::Windows::Forms::CheckedListBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->checkedListBox5 = (gcnew System::Windows::Forms::CheckedListBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->checkedListBox4 = (gcnew System::Windows::Forms::CheckedListBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->checkedListBox3 = (gcnew System::Windows::Forms::CheckedListBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->checkedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->Datos_Censo->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Datos_Censo
			// 
			this->Datos_Censo->Controls->Add(this->textBox13);
			this->Datos_Censo->Controls->Add(this->textBox12);
			this->Datos_Censo->Controls->Add(this->label12);
			this->Datos_Censo->Controls->Add(this->textBox11);
			this->Datos_Censo->Controls->Add(this->label11);
			this->Datos_Censo->Controls->Add(this->Txt_Box_censador);
			this->Datos_Censo->Controls->Add(this->NombreCensador);
			this->Datos_Censo->Controls->Add(this->Txt_Box_hora);
			this->Datos_Censo->Controls->Add(this->Hora);
			this->Datos_Censo->Controls->Add(this->Txt_Box_codigo);
			this->Datos_Censo->Controls->Add(this->Codigo);
			this->Datos_Censo->Controls->Add(this->Txt_Box_obs);
			this->Datos_Censo->Controls->Add(this->label_Observacion);
			this->Datos_Censo->Controls->Add(this->Fecha);
			this->Datos_Censo->Location = System::Drawing::Point(12, 12);
			this->Datos_Censo->Name = L"Datos_Censo";
			this->Datos_Censo->Size = System::Drawing::Size(1244, 136);
			this->Datos_Censo->TabIndex = 24;
			this->Datos_Censo->TabStop = false;
			this->Datos_Censo->Text = L"Datos Censo";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(186, 59);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(178, 20);
			this->textBox13->TabIndex = 34;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(962, 56);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(245, 20);
			this->textBox12->TabIndex = 33;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(889, 59);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(49, 13);
			this->label12->TabIndex = 32;
			this->label12->Text = L"Telefono";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(962, 13);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(245, 20);
			this->textBox11->TabIndex = 31;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(860, 17);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(43, 13);
			this->label11->TabIndex = 30;
			this->label11->Text = L"Entidad";
			// 
			// Txt_Box_censador
			// 
			this->Txt_Box_censador->Location = System::Drawing::Point(580, 13);
			this->Txt_Box_censador->Name = L"Txt_Box_censador";
			this->Txt_Box_censador->Size = System::Drawing::Size(259, 20);
			this->Txt_Box_censador->TabIndex = 28;
			// 
			// NombreCensador
			// 
			this->NombreCensador->AutoSize = true;
			this->NombreCensador->Location = System::Drawing::Point(435, 16);
			this->NombreCensador->Name = L"NombreCensador";
			this->NombreCensador->Size = System::Drawing::Size(109, 13);
			this->NombreCensador->TabIndex = 27;
			this->NombreCensador->Text = L"Nombre del Censador";
			// 
			// Txt_Box_hora
			// 
			this->Txt_Box_hora->Location = System::Drawing::Point(186, 97);
			this->Txt_Box_hora->Name = L"Txt_Box_hora";
			this->Txt_Box_hora->Size = System::Drawing::Size(178, 20);
			this->Txt_Box_hora->TabIndex = 26;
			// 
			// Hora
			// 
			this->Hora->AutoSize = true;
			this->Hora->Location = System::Drawing::Point(31, 100);
			this->Hora->Name = L"Hora";
			this->Hora->Size = System::Drawing::Size(30, 13);
			this->Hora->TabIndex = 25;
			this->Hora->Text = L"Hora";
			// 
			// Txt_Box_codigo
			// 
			this->Txt_Box_codigo->Location = System::Drawing::Point(186, 17);
			this->Txt_Box_codigo->Name = L"Txt_Box_codigo";
			this->Txt_Box_codigo->Size = System::Drawing::Size(84, 20);
			this->Txt_Box_codigo->TabIndex = 24;
			this->Txt_Box_codigo->TextChanged += gcnew System::EventHandler(this, &frmVerRespuesta::Txt_Box_codigo_TextChanged);
			// 
			// Codigo
			// 
			this->Codigo->AutoSize = true;
			this->Codigo->Location = System::Drawing::Point(31, 20);
			this->Codigo->Name = L"Codigo";
			this->Codigo->Size = System::Drawing::Size(40, 13);
			this->Codigo->TabIndex = 23;
			this->Codigo->Text = L"Codigo";
			// 
			// Txt_Box_obs
			// 
			this->Txt_Box_obs->Location = System::Drawing::Point(580, 59);
			this->Txt_Box_obs->Multiline = true;
			this->Txt_Box_obs->Name = L"Txt_Box_obs";
			this->Txt_Box_obs->Size = System::Drawing::Size(259, 63);
			this->Txt_Box_obs->TabIndex = 22;
			// 
			// label_Observacion
			// 
			this->label_Observacion->AutoSize = true;
			this->label_Observacion->Location = System::Drawing::Point(435, 62);
			this->label_Observacion->Name = L"label_Observacion";
			this->label_Observacion->Size = System::Drawing::Size(128, 13);
			this->label_Observacion->TabIndex = 20;
			this->label_Observacion->Text = L"Descripción/Observación";
			// 
			// Fecha
			// 
			this->Fecha->AutoSize = true;
			this->Fecha->Location = System::Drawing::Point(31, 62);
			this->Fecha->Name = L"Fecha";
			this->Fecha->Size = System::Drawing::Size(37, 13);
			this->Fecha->TabIndex = 19;
			this->Fecha->Text = L"Fecha";
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->label10);
			this->groupBox10->Controls->Add(this->textBox10);
			this->groupBox10->Controls->Add(this->comboBox10);
			this->groupBox10->Controls->Add(this->checkedListBox10);
			this->groupBox10->Location = System::Drawing::Point(346, 644);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(299, 226);
			this->groupBox10->TabIndex = 26;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Pregunta 10";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label10->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label10->Location = System::Drawing::Point(19, 28);
			this->label10->MaximumSize = System::Drawing::Size(266, 60);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(43, 15);
			this->label10->TabIndex = 3;
			this->label10->Text = L"label10";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(161, 70);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(127, 134);
			this->textBox10->TabIndex = 2;
			// 
			// comboBox10
			// 
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Location = System::Drawing::Point(6, 183);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(134, 21);
			this->comboBox10->TabIndex = 1;
			// 
			// checkedListBox10
			// 
			this->checkedListBox10->FormattingEnabled = true;
			this->checkedListBox10->Location = System::Drawing::Point(6, 70);
			this->checkedListBox10->Name = L"checkedListBox10";
			this->checkedListBox10->Size = System::Drawing::Size(134, 79);
			this->checkedListBox10->TabIndex = 0;
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->label9);
			this->groupBox9->Controls->Add(this->textBox9);
			this->groupBox9->Controls->Add(this->comboBox9);
			this->groupBox9->Controls->Add(this->checkedListBox9);
			this->groupBox9->Location = System::Drawing::Point(29, 644);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(299, 225);
			this->groupBox9->TabIndex = 34;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Pregunta 9";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label9->Location = System::Drawing::Point(19, 28);
			this->label9->MaximumSize = System::Drawing::Size(266, 60);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(37, 15);
			this->label9->TabIndex = 3;
			this->label9->Text = L"label9";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(161, 70);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(127, 134);
			this->textBox9->TabIndex = 2;
			// 
			// comboBox9
			// 
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Location = System::Drawing::Point(6, 183);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(134, 21);
			this->comboBox9->TabIndex = 1;
			// 
			// checkedListBox9
			// 
			this->checkedListBox9->FormattingEnabled = true;
			this->checkedListBox9->Location = System::Drawing::Point(6, 70);
			this->checkedListBox9->Name = L"checkedListBox9";
			this->checkedListBox9->Size = System::Drawing::Size(134, 79);
			this->checkedListBox9->TabIndex = 0;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label8);
			this->groupBox8->Controls->Add(this->textBox8);
			this->groupBox8->Controls->Add(this->comboBox8);
			this->groupBox8->Controls->Add(this->checkedListBox8);
			this->groupBox8->Location = System::Drawing::Point(968, 412);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(299, 226);
			this->groupBox8->TabIndex = 27;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Pregunta8";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label8->Location = System::Drawing::Point(19, 28);
			this->label8->MaximumSize = System::Drawing::Size(266, 60);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 15);
			this->label8->TabIndex = 3;
			this->label8->Text = L"label8";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(161, 70);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(127, 134);
			this->textBox8->TabIndex = 2;
			// 
			// comboBox8
			// 
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Location = System::Drawing::Point(6, 183);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(134, 21);
			this->comboBox8->TabIndex = 1;
			// 
			// checkedListBox8
			// 
			this->checkedListBox8->FormattingEnabled = true;
			this->checkedListBox8->Location = System::Drawing::Point(6, 70);
			this->checkedListBox8->Name = L"checkedListBox8";
			this->checkedListBox8->Size = System::Drawing::Size(134, 79);
			this->checkedListBox8->TabIndex = 0;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label7);
			this->groupBox7->Controls->Add(this->textBox7);
			this->groupBox7->Controls->Add(this->comboBox7);
			this->groupBox7->Controls->Add(this->checkedListBox7);
			this->groupBox7->Location = System::Drawing::Point(651, 412);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(299, 226);
			this->groupBox7->TabIndex = 28;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Pregunta7";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label7->Location = System::Drawing::Point(19, 28);
			this->label7->MaximumSize = System::Drawing::Size(266, 60);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 15);
			this->label7->TabIndex = 3;
			this->label7->Text = L"label7";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(161, 70);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(127, 134);
			this->textBox7->TabIndex = 2;
			// 
			// comboBox7
			// 
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Location = System::Drawing::Point(6, 183);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(134, 21);
			this->comboBox7->TabIndex = 1;
			// 
			// checkedListBox7
			// 
			this->checkedListBox7->FormattingEnabled = true;
			this->checkedListBox7->Location = System::Drawing::Point(6, 70);
			this->checkedListBox7->Name = L"checkedListBox7";
			this->checkedListBox7->Size = System::Drawing::Size(134, 79);
			this->checkedListBox7->TabIndex = 0;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label6);
			this->groupBox6->Controls->Add(this->textBox6);
			this->groupBox6->Controls->Add(this->comboBox6);
			this->groupBox6->Controls->Add(this->checkedListBox6);
			this->groupBox6->Location = System::Drawing::Point(340, 412);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(299, 226);
			this->groupBox6->TabIndex = 29;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Pregunta6";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label6->Location = System::Drawing::Point(19, 28);
			this->label6->MaximumSize = System::Drawing::Size(266, 60);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 15);
			this->label6->TabIndex = 3;
			this->label6->Text = L"label6";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(161, 70);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(127, 134);
			this->textBox6->TabIndex = 2;
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(6, 183);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(134, 21);
			this->comboBox6->TabIndex = 1;
			// 
			// checkedListBox6
			// 
			this->checkedListBox6->FormattingEnabled = true;
			this->checkedListBox6->Location = System::Drawing::Point(6, 70);
			this->checkedListBox6->Name = L"checkedListBox6";
			this->checkedListBox6->Size = System::Drawing::Size(134, 79);
			this->checkedListBox6->TabIndex = 0;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label5);
			this->groupBox5->Controls->Add(this->textBox5);
			this->groupBox5->Controls->Add(this->comboBox5);
			this->groupBox5->Controls->Add(this->checkedListBox5);
			this->groupBox5->Location = System::Drawing::Point(23, 412);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(299, 226);
			this->groupBox5->TabIndex = 30;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Pregunta5";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label5->Location = System::Drawing::Point(19, 28);
			this->label5->MaximumSize = System::Drawing::Size(266, 60);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 15);
			this->label5->TabIndex = 3;
			this->label5->Text = L"label5";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(161, 70);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(127, 134);
			this->textBox5->TabIndex = 2;
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(6, 183);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(134, 21);
			this->comboBox5->TabIndex = 1;
			// 
			// checkedListBox5
			// 
			this->checkedListBox5->FormattingEnabled = true;
			this->checkedListBox5->Location = System::Drawing::Point(6, 70);
			this->checkedListBox5->Name = L"checkedListBox5";
			this->checkedListBox5->Size = System::Drawing::Size(134, 79);
			this->checkedListBox5->TabIndex = 0;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Controls->Add(this->textBox4);
			this->groupBox4->Controls->Add(this->comboBox4);
			this->groupBox4->Controls->Add(this->checkedListBox4);
			this->groupBox4->Location = System::Drawing::Point(962, 164);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(299, 226);
			this->groupBox4->TabIndex = 31;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Pregunta4";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label4->Location = System::Drawing::Point(19, 28);
			this->label4->MaximumSize = System::Drawing::Size(266, 60);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 15);
			this->label4->TabIndex = 3;
			this->label4->Text = L"label4";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(161, 70);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(127, 134);
			this->textBox4->TabIndex = 2;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(6, 183);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(134, 21);
			this->comboBox4->TabIndex = 1;
			// 
			// checkedListBox4
			// 
			this->checkedListBox4->FormattingEnabled = true;
			this->checkedListBox4->Location = System::Drawing::Point(6, 70);
			this->checkedListBox4->Name = L"checkedListBox4";
			this->checkedListBox4->Size = System::Drawing::Size(134, 79);
			this->checkedListBox4->TabIndex = 0;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Controls->Add(this->comboBox3);
			this->groupBox3->Controls->Add(this->checkedListBox3);
			this->groupBox3->Location = System::Drawing::Point(645, 164);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(299, 226);
			this->groupBox3->TabIndex = 32;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Pregunta3";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label3->Location = System::Drawing::Point(19, 28);
			this->label3->MaximumSize = System::Drawing::Size(266, 60);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 15);
			this->label3->TabIndex = 3;
			this->label3->Text = L"label3";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(161, 70);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(127, 134);
			this->textBox3->TabIndex = 2;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(6, 183);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(134, 21);
			this->comboBox3->TabIndex = 1;
			// 
			// checkedListBox3
			// 
			this->checkedListBox3->FormattingEnabled = true;
			this->checkedListBox3->Location = System::Drawing::Point(6, 70);
			this->checkedListBox3->Name = L"checkedListBox3";
			this->checkedListBox3->Size = System::Drawing::Size(134, 79);
			this->checkedListBox3->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->comboBox2);
			this->groupBox2->Controls->Add(this->checkedListBox2);
			this->groupBox2->Location = System::Drawing::Point(340, 164);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(299, 226);
			this->groupBox2->TabIndex = 33;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Pregunta2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(19, 28);
			this->label2->MaximumSize = System::Drawing::Size(266, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 15);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(161, 70);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(127, 134);
			this->textBox2->TabIndex = 2;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(6, 183);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(134, 21);
			this->comboBox2->TabIndex = 1;
			// 
			// checkedListBox2
			// 
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Location = System::Drawing::Point(6, 70);
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(134, 79);
			this->checkedListBox2->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->checkedListBox1);
			this->groupBox1->Location = System::Drawing::Point(23, 164);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(299, 226);
			this->groupBox1->TabIndex = 25;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Pregunta1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(19, 28);
			this->label1->MaximumSize = System::Drawing::Size(266, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 15);
			this->label1->TabIndex = 3;
			this->label1->Text = L"label1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(161, 70);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(127, 134);
			this->textBox1->TabIndex = 2;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(6, 183);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(134, 21);
			this->comboBox1->TabIndex = 1;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(6, 70);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(134, 79);
			this->checkedListBox1->TabIndex = 0;
			// 
			// frmVerRespuesta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1273, 881);
			this->Controls->Add(this->groupBox10);
			this->Controls->Add(this->groupBox9);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Datos_Censo);
			this->Name = L"frmVerRespuesta";
			this->Text = L"frmVerRespuesta";
			this->Load += gcnew System::EventHandler(this, &frmVerRespuesta::frmVerRespuesta_Load);
			this->Datos_Censo->ResumeLayout(false);
			this->Datos_Censo->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AgregarCensador_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: void OcultarEspaciosYLabels(List<Label^>^ listaLabels, List<ComboBox^>^ listaCombos,
		List<CheckedListBox^>^ listaCheckLists, List<TextBox^>^ listaTextBoxes) {

		for (int i = 0; i < listaLabels->Count; i++) {
			listaLabels[i]->Hide();
		}

		for (int i = 0; i < listaCombos->Count; i++) {
			listaCombos[i]->Enabled = false;
		}

		for (int i = 0; i < listaCheckLists->Count; i++) {
			listaCheckLists[i]->Enabled = false;
		}

		for (int i = 0; i < listaTextBoxes->Count; i++) {
			listaTextBoxes[i]->Enabled = false;
		}
	}


private: System::Void frmVerRespuesta_Load(System::Object^ sender, System::EventArgs^ e) {

	Formulario^ objFormulario = this->objGestorCenso->ObtenerFormularioXNombre_EnCenso(objCenso, tituloFormulario);
	this->objGestorFormulario->GenerarGestorPreguntas(objFormulario, objGestorPregunta);
	this->Text = objFormulario->Titulo->ToUpper();
	List<Label^>^ listaLabels = gcnew List<Label^>();
	listaLabels->Add(label1); listaLabels->Add(label2); listaLabels->Add(label3); listaLabels->Add(label4); listaLabels->Add(label5);
	listaLabels->Add(label6); listaLabels->Add(label7); listaLabels->Add(label8); listaLabels->Add(label9); listaLabels->Add(label10);

	List<ComboBox^>^ listaCombos = gcnew List<ComboBox^>();
	listaCombos->Add(comboBox1); listaCombos->Add(comboBox2); listaCombos->Add(comboBox3); listaCombos->Add(comboBox4); listaCombos->Add(comboBox5);
	listaCombos->Add(comboBox6); listaCombos->Add(comboBox7); listaCombos->Add(comboBox8); listaCombos->Add(comboBox9); listaCombos->Add(comboBox10);

	List<CheckedListBox^>^ listaCheckLists = gcnew List<CheckedListBox^>();
	listaCheckLists->Add(checkedListBox1); listaCheckLists->Add(checkedListBox2); listaCheckLists->Add(checkedListBox3); listaCheckLists->Add(checkedListBox4); listaCheckLists->Add(checkedListBox5);
	listaCheckLists->Add(checkedListBox6); listaCheckLists->Add(checkedListBox7); listaCheckLists->Add(checkedListBox8); listaCheckLists->Add(checkedListBox9); listaCheckLists->Add(checkedListBox10);

	List<TextBox^>^ listaTextBoxes = gcnew List<TextBox^>();
	listaTextBoxes->Add(textBox1); listaTextBoxes->Add(textBox2); listaTextBoxes->Add(textBox3); listaTextBoxes->Add(textBox4); listaTextBoxes->Add(textBox5);
	listaTextBoxes->Add(textBox6); listaTextBoxes->Add(textBox7); listaTextBoxes->Add(textBox8); listaTextBoxes->Add(textBox9); listaTextBoxes->Add(textBox10);

	OcultarEspaciosYLabels(listaLabels, listaCombos, listaCheckLists, listaTextBoxes);

	int lim = this->objCenso->listaCensosxEntidad->Count;
	for (int i = 0; i < lim; i++) {
		if (objCenso->listaCensosxEntidad[i]->codigoCensoxEntidad == codigoVer && objCenso->listaCensosxEntidad[i]->formularioAsociado == this->tituloFormulario) {
			this->objCensoxEntidad = this->objCenso->listaCensosxEntidad[i];
			break;
		}
	}

	// datos de censo, censador y entidad


	this->Txt_Box_codigo->Text = Convert::ToString(this->objCensoxEntidad->codigoCensoxEntidad);
	this->textBox13->Text = this->objCensoxEntidad->Fecha;
	this->Txt_Box_hora->Text = this->objCensoxEntidad->Hora;

	String^ NombreyApellidosCensador = this->objCensoxEntidad->objCensador->Nombres + " " + this->objCensoxEntidad->objCensador->Apellido_Paterno + " " + this->objCensoxEntidad->objCensador->Apellido_Materno;
	this->Txt_Box_censador->Text = NombreyApellidosCensador;
	this->Txt_Box_obs->Text = this->objCensoxEntidad->Descripcion;


	if (this->objCenso->objTipoEntidad->tipo = "Persona") {
		this->label11->Text = "Entidad Persona";
		String^ NombresyApellidosPersona=  this->objCensoxEntidad->objPersona->nombre + " " + this->objCensoxEntidad->objPersona->apellidoPaterno + " " + this->objCensoxEntidad->objPersona->apellidoMaterno;
		this->textBox11->Text = NombresyApellidosPersona;
		this->textBox12->Text = this->objCensoxEntidad->objPersona->telefono;

	}
	else {
		if (this->objCenso->objTipoEntidad->tipo = "Colegio") {
			this->label11->Text = "Entidad Colegio";
			this->textBox11->Text = this->objCensoxEntidad->objColegio->nombre;
			this->textBox12->Text = this->objCensoxEntidad->objColegio->telefono;
		}
		else if (this->objCenso->objTipoEntidad->tipo = "Universidad") {
			this->label11->Text = "Entidad Universidad";
			this->textBox11->Text = this->objCensoxEntidad->objUniversidad->nombre;
			this->textBox12->Text = this->objCensoxEntidad->objUniversidad->telefono;
		}
	}

	


	//parte de las respuestas
	for (int i = 0; i < 10; i++) {
		
		if (i < this->objCensoxEntidad->ListaCensoxEntidadxPregunta->Count) {
			objCensoxEntidadxPregunta = this->objCensoxEntidad->ListaCensoxEntidadxPregunta[i];
		}
		  //las preguntas necesariamente deben estar del 1 al 10, sin excepciones.
		objPregunta = this->objGestorPregunta->ObtenerPreguntaxCodigo(i + 1);
		if (objPregunta != nullptr) {
			String^ modalidadPregunta = objPregunta->ModalidadRespuesta;
			listaLabels[i]->Show();
			listaLabels[i]->Text = objPregunta->Descripcion;
			if (modalidadPregunta == "Texto") {
				listaTextBoxes[i]->Enabled = true;
				listaTextBoxes[i]->Text = this->objCensoxEntidadxPregunta->ListaRespuesta[0]->texto;//aqui cumple
			}
			else if (modalidadPregunta == "Múltiple") {
				listaCheckLists[i]->Enabled = true;
				for (int j = 0; j < objCensoxEntidadxPregunta->ListaRespuesta->Count; j++) {
					listaCheckLists[i]->Items->Add(this->objCensoxEntidadxPregunta->ListaRespuesta[j]->texto);
				}
			}
			else if (modalidadPregunta == "Única") {
				listaCombos[i]->Enabled = true;
				listaCombos[i]->Text = this->objCensoxEntidadxPregunta->ListaRespuesta[0]->texto;
			}
		}
	}


//muestra lo respondido
	






}
private: System::Void Txt_Box_codigo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
