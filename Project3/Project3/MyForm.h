#pragma once
#include "Login.h"

namespace Project3 {

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
	private: System::Windows::Forms::Panel^  pnlSide;
	private: System::Windows::Forms::Button^  btnDrinks;
	private: System::Windows::Forms::Button^  btnDesserts;
	private: System::Windows::Forms::Button^  btnMyChart;
	private: System::Windows::Forms::Panel^  pnla;
	protected:




	private: System::Windows::Forms::Button^  btnFoods;
	private: System::Windows::Forms::Panel^  PnlTop;
	private: System::Windows::Forms::Button^  btnAbout;
	private: System::Windows::Forms::Panel^  pnlFoods;


	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  btnmin;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Panel^  pnlDrinks;
	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Panel^  panel9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Panel^  panel10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Panel^  panel11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Panel^  panel12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Panel^  panel13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Panel^  pnlDesserts;
	private: System::Windows::Forms::Panel^  panel17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Panel^  panel18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Panel^  panel19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Panel^  pnlMyChart;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Panel^  pnlAbout;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Panel^  pnlChicken;





	private: System::Windows::Forms::Label^  label20;





private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::TextBox^  txtharga1;

private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::ComboBox^  comboBox1;
private: System::Windows::Forms::Button^  button13;
private: System::Windows::Forms::Panel^  pnlNasi;
private: System::Windows::Forms::Button^  button14;
private: System::Windows::Forms::ComboBox^  comboBox2;
private: System::Windows::Forms::TextBox^  textBox3;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::TextBox^  textBox4;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::TextBox^  textBox5;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Button^  button15;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Panel^  pnlMie;
private: System::Windows::Forms::Button^  button19;
private: System::Windows::Forms::ComboBox^  comboBox3;
private: System::Windows::Forms::TextBox^  textBox6;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::TextBox^  textBox7;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::TextBox^  textBox8;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Button^  button20;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Panel^  pnlSop;
private: System::Windows::Forms::Button^  button21;
private: System::Windows::Forms::ComboBox^  comboBox4;
private: System::Windows::Forms::TextBox^  textBox9;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::TextBox^  textBox11;

private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::TextBox^  textBox10;


private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Button^  button22;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Panel^  pnlSfd;
private: System::Windows::Forms::Button^  button23;
private: System::Windows::Forms::ComboBox^  comboBox5;
private: System::Windows::Forms::TextBox^  textBox12;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::TextBox^  textBox13;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::TextBox^  textBox14;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Button^  button24;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Panel^  pnllain1;


private: System::Windows::Forms::Button^  button25;
private: System::Windows::Forms::ComboBox^  comboBox6;
private: System::Windows::Forms::TextBox^  textBox15;
private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::TextBox^  textBox16;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::TextBox^  textBox17;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::Button^  button26;
private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::DataGridView^  dataGridView1;




private: System::Windows::Forms::Button^  btnChart1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  nama;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  jumlah;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  harga;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  total;
private: System::Windows::Forms::Button^  button27;
private: System::Windows::Forms::Panel^  pnlCoffee;
private: System::Windows::Forms::Button^  button28;
private: System::Windows::Forms::ComboBox^  comboBox7;
private: System::Windows::Forms::TextBox^  textBox18;
private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::TextBox^  textBox19;
private: System::Windows::Forms::Label^  label51;
private: System::Windows::Forms::TextBox^  textBox20;
private: System::Windows::Forms::Label^  label52;
private: System::Windows::Forms::Label^  label53;
private: System::Windows::Forms::Button^  button29;
private: System::Windows::Forms::Label^  label54;
private: System::Windows::Forms::Panel^  pnlMilk;
private: System::Windows::Forms::Button^  button30;
private: System::Windows::Forms::ComboBox^  comboBox8;
private: System::Windows::Forms::TextBox^  textBox21;
private: System::Windows::Forms::Label^  label55;
private: System::Windows::Forms::TextBox^  textBox22;
private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::TextBox^  textBox23;
private: System::Windows::Forms::Label^  label57;
private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::Button^  button31;
private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::Panel^  pnlTeh;
private: System::Windows::Forms::Button^  button32;
private: System::Windows::Forms::ComboBox^  comboBox9;
private: System::Windows::Forms::TextBox^  textBox24;
private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::TextBox^  textBox25;
private: System::Windows::Forms::Label^  label61;
private: System::Windows::Forms::TextBox^  textBox26;
private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::Label^  label63;
private: System::Windows::Forms::Button^  button33;
private: System::Windows::Forms::Label^  label64;
private: System::Windows::Forms::Panel^  pnlJus;
private: System::Windows::Forms::Button^  button34;
private: System::Windows::Forms::ComboBox^  comboBox10;
private: System::Windows::Forms::TextBox^  textBox27;
private: System::Windows::Forms::Label^  label65;
private: System::Windows::Forms::TextBox^  textBox28;
private: System::Windows::Forms::Label^  label66;
private: System::Windows::Forms::TextBox^  textBox29;
private: System::Windows::Forms::Label^  label67;
private: System::Windows::Forms::Label^  label68;
private: System::Windows::Forms::Button^  button35;
private: System::Windows::Forms::Label^  label69;
private: System::Windows::Forms::Panel^  pnlSoft;
private: System::Windows::Forms::Button^  button36;
private: System::Windows::Forms::ComboBox^  comboBox11;
private: System::Windows::Forms::TextBox^  textBox30;
private: System::Windows::Forms::Label^  label70;
private: System::Windows::Forms::TextBox^  textBox31;
private: System::Windows::Forms::Label^  label71;
private: System::Windows::Forms::TextBox^  textBox32;
private: System::Windows::Forms::Label^  label72;
private: System::Windows::Forms::Label^  label73;
private: System::Windows::Forms::Button^  button37;
private: System::Windows::Forms::Label^  label74;
private: System::Windows::Forms::Panel^  pnlLain2;
private: System::Windows::Forms::Button^  button38;
private: System::Windows::Forms::ComboBox^  comboBox12;
private: System::Windows::Forms::TextBox^  textBox33;
private: System::Windows::Forms::Label^  label75;
private: System::Windows::Forms::TextBox^  textBox34;
private: System::Windows::Forms::Label^  label76;
private: System::Windows::Forms::TextBox^  textBox35;
private: System::Windows::Forms::Label^  label77;
private: System::Windows::Forms::Label^  label78;
private: System::Windows::Forms::Button^  button39;
private: System::Windows::Forms::Label^  label79;
private: System::Windows::Forms::Panel^  pnlPuding;
private: System::Windows::Forms::Button^  button40;
private: System::Windows::Forms::ComboBox^  comboBox13;
private: System::Windows::Forms::TextBox^  textBox36;
private: System::Windows::Forms::Label^  label80;
private: System::Windows::Forms::TextBox^  textBox37;
private: System::Windows::Forms::Label^  label81;
private: System::Windows::Forms::TextBox^  textBox38;
private: System::Windows::Forms::Label^  label82;
private: System::Windows::Forms::Label^  label83;
private: System::Windows::Forms::Button^  button41;
private: System::Windows::Forms::Label^  label84;
private: System::Windows::Forms::Panel^  pnlIce;
private: System::Windows::Forms::Button^  button42;
private: System::Windows::Forms::ComboBox^  comboBox14;
private: System::Windows::Forms::TextBox^  textBox39;
private: System::Windows::Forms::Label^  label85;
private: System::Windows::Forms::TextBox^  textBox40;
private: System::Windows::Forms::Label^  label86;
private: System::Windows::Forms::TextBox^  textBox41;
private: System::Windows::Forms::Label^  label87;
private: System::Windows::Forms::Label^  label88;
private: System::Windows::Forms::Button^  button43;
private: System::Windows::Forms::Label^  label89;
private: System::Windows::Forms::Panel^  pnlKue;
private: System::Windows::Forms::Button^  button44;
private: System::Windows::Forms::ComboBox^  comboBox15;
private: System::Windows::Forms::TextBox^  textBox42;
private: System::Windows::Forms::Label^  label90;
private: System::Windows::Forms::TextBox^  textBox43;
private: System::Windows::Forms::Label^  label91;
private: System::Windows::Forms::TextBox^  textBox44;
private: System::Windows::Forms::Label^  label92;
private: System::Windows::Forms::Label^  label93;
private: System::Windows::Forms::Button^  button45;
private: System::Windows::Forms::Label^  label94;
private: System::Windows::Forms::TextBox^  textBoxKembali;

private: System::Windows::Forms::Button^  button47;
private: System::Windows::Forms::Label^  lblKembali;

private: System::Windows::Forms::Label^  label96;
private: System::Windows::Forms::Label^  lblJumlah;
private: System::Windows::Forms::Label^  label95;












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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pnlSide = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->btnmin = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pnla = (gcnew System::Windows::Forms::Panel());
			this->btnAbout = (gcnew System::Windows::Forms::Button());
			this->btnDrinks = (gcnew System::Windows::Forms::Button());
			this->btnDesserts = (gcnew System::Windows::Forms::Button());
			this->btnMyChart = (gcnew System::Windows::Forms::Button());
			this->btnFoods = (gcnew System::Windows::Forms::Button());
			this->PnlTop = (gcnew System::Windows::Forms::Panel());
			this->pnlFoods = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pnlDrinks = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->pnlDesserts = (gcnew System::Windows::Forms::Panel());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->pnlMyChart = (gcnew System::Windows::Forms::Panel());
			this->textBoxKembali = (gcnew System::Windows::Forms::TextBox());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->lblKembali = (gcnew System::Windows::Forms::Label());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->lblJumlah = (gcnew System::Windows::Forms::Label());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->nama = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->jumlah = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->harga = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pnlAbout = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pnlChicken = (gcnew System::Windows::Forms::Panel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->txtharga1 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->btnChart1 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->pnlNasi = (gcnew System::Windows::Forms::Panel());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->pnlMie = (gcnew System::Windows::Forms::Panel());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->pnlSop = (gcnew System::Windows::Forms::Panel());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->pnlSfd = (gcnew System::Windows::Forms::Panel());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->pnllain1 = (gcnew System::Windows::Forms::Panel());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->pnlCoffee = (gcnew System::Windows::Forms::Panel());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->pnlMilk = (gcnew System::Windows::Forms::Panel());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->pnlTeh = (gcnew System::Windows::Forms::Panel());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->pnlJus = (gcnew System::Windows::Forms::Panel());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->pnlSoft = (gcnew System::Windows::Forms::Panel());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->pnlLain2 = (gcnew System::Windows::Forms::Panel());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->comboBox12 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->pnlPuding = (gcnew System::Windows::Forms::Panel());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->comboBox13 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->pnlIce = (gcnew System::Windows::Forms::Panel());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->comboBox14 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->pnlKue = (gcnew System::Windows::Forms::Panel());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->comboBox15 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->pnlSide->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnmin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->pnlFoods->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->pnlDrinks->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel13->SuspendLayout();
			this->pnlDesserts->SuspendLayout();
			this->panel17->SuspendLayout();
			this->panel18->SuspendLayout();
			this->panel19->SuspendLayout();
			this->pnlMyChart->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->pnlAbout->SuspendLayout();
			this->pnlChicken->SuspendLayout();
			this->pnlNasi->SuspendLayout();
			this->pnlMie->SuspendLayout();
			this->pnlSop->SuspendLayout();
			this->pnlSfd->SuspendLayout();
			this->pnllain1->SuspendLayout();
			this->pnlCoffee->SuspendLayout();
			this->pnlMilk->SuspendLayout();
			this->pnlTeh->SuspendLayout();
			this->pnlJus->SuspendLayout();
			this->pnlSoft->SuspendLayout();
			this->pnlLain2->SuspendLayout();
			this->pnlPuding->SuspendLayout();
			this->pnlIce->SuspendLayout();
			this->pnlKue->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlSide
			// 
			this->pnlSide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(2)));
			this->pnlSide->Controls->Add(this->pictureBox3);
			this->pnlSide->Controls->Add(this->btnmin);
			this->pnlSide->Controls->Add(this->pictureBox1);
			this->pnlSide->Controls->Add(this->label19);
			this->pnlSide->Controls->Add(this->label15);
			this->pnlSide->Controls->Add(this->pnla);
			this->pnlSide->Controls->Add(this->btnAbout);
			this->pnlSide->Controls->Add(this->btnDrinks);
			this->pnlSide->Controls->Add(this->btnDesserts);
			this->pnlSide->Controls->Add(this->btnMyChart);
			this->pnlSide->Controls->Add(this->btnFoods);
			this->pnlSide->Dock = System::Windows::Forms::DockStyle::Left;
			this->pnlSide->Location = System::Drawing::Point(0, 0);
			this->pnlSide->Name = L"pnlSide";
			this->pnlSide->Size = System::Drawing::Size(200, 498);
			this->pnlSide->TabIndex = 0;
			this->pnlSide->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pnlSide_Paint);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(60, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(18, 18);
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// btnmin
			// 
			this->btnmin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnmin.BackgroundImage")));
			this->btnmin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnmin->Location = System::Drawing::Point(36, 3);
			this->btnmin->Name = L"btnmin";
			this->btnmin->Size = System::Drawing::Size(18, 18);
			this->btnmin->TabIndex = 9;
			this->btnmin->TabStop = false;
			this->btnmin->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(12, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(18, 18);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Fira Sans", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::SystemColors::Control;
			this->label19->Location = System::Drawing::Point(101, 36);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(54, 28);
			this->label19->TabIndex = 7;
			this->label19->Text = L"App";
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Fira Sans Medium", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::SystemColors::Control;
			this->label15->Location = System::Drawing::Point(37, 36);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(70, 28);
			this->label15->TabIndex = 6;
			this->label15->Text = L"Food";
			// 
			// pnla
			// 
			this->pnla->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->pnla->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)));
			this->pnla->Location = System::Drawing::Point(0, 78);
			this->pnla->Name = L"pnla";
			this->pnla->Size = System::Drawing::Size(10, 37);
			this->pnla->TabIndex = 1;
			// 
			// btnAbout
			// 
			this->btnAbout->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->btnAbout->FlatAppearance->BorderSize = 0;
			this->btnAbout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAbout->Font = (gcnew System::Drawing::Font(L"Fira Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAbout->ForeColor = System::Drawing::SystemColors::Control;
			this->btnAbout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAbout.Image")));
			this->btnAbout->Location = System::Drawing::Point(0, 250);
			this->btnAbout->Name = L"btnAbout";
			this->btnAbout->Size = System::Drawing::Size(200, 37);
			this->btnAbout->TabIndex = 5;
			this->btnAbout->Text = L"     About";
			this->btnAbout->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnAbout->UseVisualStyleBackColor = true;
			this->btnAbout->Click += gcnew System::EventHandler(this, &MyForm::btnAbout_Click);
			// 
			// btnDrinks
			// 
			this->btnDrinks->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->btnDrinks->FlatAppearance->BorderSize = 0;
			this->btnDrinks->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDrinks->Font = (gcnew System::Drawing::Font(L"Fira Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDrinks->ForeColor = System::Drawing::SystemColors::Control;
			this->btnDrinks->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDrinks.Image")));
			this->btnDrinks->Location = System::Drawing::Point(0, 121);
			this->btnDrinks->Name = L"btnDrinks";
			this->btnDrinks->Size = System::Drawing::Size(200, 37);
			this->btnDrinks->TabIndex = 4;
			this->btnDrinks->Text = L"     Drinks";
			this->btnDrinks->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnDrinks->UseVisualStyleBackColor = true;
			this->btnDrinks->Click += gcnew System::EventHandler(this, &MyForm::btnDrinks_Click);
			// 
			// btnDesserts
			// 
			this->btnDesserts->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->btnDesserts->FlatAppearance->BorderSize = 0;
			this->btnDesserts->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDesserts->Font = (gcnew System::Drawing::Font(L"Fira Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDesserts->ForeColor = System::Drawing::SystemColors::Control;
			this->btnDesserts->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDesserts.Image")));
			this->btnDesserts->Location = System::Drawing::Point(3, 164);
			this->btnDesserts->Name = L"btnDesserts";
			this->btnDesserts->Size = System::Drawing::Size(200, 37);
			this->btnDesserts->TabIndex = 3;
			this->btnDesserts->Text = L"    Desserts";
			this->btnDesserts->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnDesserts->UseVisualStyleBackColor = true;
			this->btnDesserts->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// btnMyChart
			// 
			this->btnMyChart->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->btnMyChart->FlatAppearance->BorderSize = 0;
			this->btnMyChart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMyChart->Font = (gcnew System::Drawing::Font(L"Fira Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMyChart->ForeColor = System::Drawing::SystemColors::Control;
			this->btnMyChart->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMyChart.Image")));
			this->btnMyChart->Location = System::Drawing::Point(3, 207);
			this->btnMyChart->Name = L"btnMyChart";
			this->btnMyChart->Size = System::Drawing::Size(200, 37);
			this->btnMyChart->TabIndex = 2;
			this->btnMyChart->Text = L"    My Chart";
			this->btnMyChart->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnMyChart->UseVisualStyleBackColor = true;
			this->btnMyChart->Click += gcnew System::EventHandler(this, &MyForm::btnMyChart_Click);
			// 
			// btnFoods
			// 
			this->btnFoods->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->btnFoods->FlatAppearance->BorderSize = 0;
			this->btnFoods->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFoods->Font = (gcnew System::Drawing::Font(L"Fira Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFoods->ForeColor = System::Drawing::SystemColors::Control;
			this->btnFoods->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFoods.Image")));
			this->btnFoods->Location = System::Drawing::Point(0, 78);
			this->btnFoods->Name = L"btnFoods";
			this->btnFoods->Size = System::Drawing::Size(200, 37);
			this->btnFoods->TabIndex = 0;
			this->btnFoods->Text = L"     Foods";
			this->btnFoods->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnFoods->UseVisualStyleBackColor = true;
			this->btnFoods->Click += gcnew System::EventHandler(this, &MyForm::btnFoods_Click);
			// 
			// PnlTop
			// 
			this->PnlTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)));
			this->PnlTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->PnlTop->Location = System::Drawing::Point(200, 0);
			this->PnlTop->Name = L"PnlTop";
			this->PnlTop->Size = System::Drawing::Size(683, 27);
			this->PnlTop->TabIndex = 1;
			// 
			// pnlFoods
			// 
			this->pnlFoods->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pnlFoods->Controls->Add(this->panel4);
			this->pnlFoods->Controls->Add(this->panel5);
			this->pnlFoods->Controls->Add(this->panel6);
			this->pnlFoods->Controls->Add(this->panel3);
			this->pnlFoods->Controls->Add(this->panel2);
			this->pnlFoods->Controls->Add(this->panel1);
			this->pnlFoods->Location = System::Drawing::Point(200, 27);
			this->pnlFoods->Name = L"pnlFoods";
			this->pnlFoods->Size = System::Drawing::Size(683, 471);
			this->pnlFoods->TabIndex = 2;
			this->pnlFoods->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pnlFoods_Paint);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->button4);
			this->panel4->Location = System::Drawing::Point(466, 264);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(174, 174);
			this->panel4->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Fira Sans Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(52, 10);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 19);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Lainnya";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Gainsboro;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::Gainsboro;
			this->button4->Location = System::Drawing::Point(7, 39);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(160, 124);
			this->button4->TabIndex = 0;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label5);
			this->panel5->Controls->Add(this->button5);
			this->panel5->Location = System::Drawing::Point(254, 264);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(174, 174);
			this->panel5->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Fira Sans Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(54, 10);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 19);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Seafood";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Gainsboro;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::Color::Gainsboro;
			this->button5->Location = System::Drawing::Point(7, 39);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(160, 124);
			this->button5->TabIndex = 0;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->label6);
			this->panel6->Controls->Add(this->button6);
			this->panel6->Location = System::Drawing::Point(42, 264);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(174, 174);
			this->panel6->TabIndex = 3;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Fira Sans Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(69, 10);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(36, 19);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Sop";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Gainsboro;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::Color::Gainsboro;
			this->button6->Location = System::Drawing::Point(7, 39);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(160, 124);
			this->button6->TabIndex = 0;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Location = System::Drawing::Point(466, 34);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(174, 174);
			this->panel3->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Fira Sans Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(73, 10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 19);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Mie";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gainsboro;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::Gainsboro;
			this->button3->Location = System::Drawing::Point(7, 39);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(160, 124);
			this->button3->TabIndex = 0;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Location = System::Drawing::Point(254, 34);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(174, 174);
			this->panel2->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Fira Sans Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(70, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nasi";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gainsboro;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::Gainsboro;
			this->button2->Location = System::Drawing::Point(7, 39);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(160, 124);
			this->button2->TabIndex = 0;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(42, 34);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(174, 174);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Fira Sans Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(62, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ayam";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gainsboro;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::Gainsboro;
			this->button1->Location = System::Drawing::Point(7, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 124);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pnlDrinks
			// 
			this->pnlDrinks->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pnlDrinks->Controls->Add(this->panel8);
			this->pnlDrinks->Controls->Add(this->panel9);
			this->pnlDrinks->Controls->Add(this->panel10);
			this->pnlDrinks->Controls->Add(this->panel11);
			this->pnlDrinks->Controls->Add(this->panel12);
			this->pnlDrinks->Controls->Add(this->panel13);
			this->pnlDrinks->Location = System::Drawing::Point(200, 27);
			this->pnlDrinks->Name = L"pnlDrinks";
			this->pnlDrinks->Size = System::Drawing::Size(683, 471);
			this->pnlDrinks->TabIndex = 3;
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->label7);
			this->panel8->Controls->Add(this->button7);
			this->panel8->Location = System::Drawing::Point(466, 264);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(174, 174);
			this->panel8->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Fira Sans Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(52, 10);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(64, 19);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Lainnya";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Gainsboro;
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->ForeColor = System::Drawing::Color::Gainsboro;
			this->button7->Location = System::Drawing::Point(7, 39);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(160, 124);
			this->button7->TabIndex = 0;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->label8);
			this->panel9->Controls->Add(this->button8);
			this->panel9->Location = System::Drawing::Point(254, 264);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(174, 174);
			this->panel9->TabIndex = 4;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Fira Sans Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(46, 10);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 19);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Soft Drinks";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Gainsboro;
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->ForeColor = System::Drawing::Color::Gainsboro;
			this->button8->Location = System::Drawing::Point(7, 39);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(160, 124);
			this->button8->TabIndex = 0;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->label9);
			this->panel10->Controls->Add(this->button9);
			this->panel10->Location = System::Drawing::Point(42, 264);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(174, 174);
			this->panel10->TabIndex = 3;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Fira Sans Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(69, 10);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(30, 19);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Jus";
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Gainsboro;
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->ForeColor = System::Drawing::Color::Gainsboro;
			this->button9->Location = System::Drawing::Point(7, 39);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(160, 124);
			this->button9->TabIndex = 0;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->label10);
			this->panel11->Controls->Add(this->button10);
			this->panel11->Location = System::Drawing::Point(466, 34);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(174, 174);
			this->panel11->TabIndex = 2;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Fira Sans Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(73, 10);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 19);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Teh";
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Gainsboro;
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->ForeColor = System::Drawing::Color::Gainsboro;
			this->button10->Location = System::Drawing::Point(7, 39);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(160, 124);
			this->button10->TabIndex = 0;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// panel12
			// 
			this->panel12->Controls->Add(this->label11);
			this->panel12->Controls->Add(this->button11);
			this->panel12->Location = System::Drawing::Point(254, 34);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(174, 174);
			this->panel12->TabIndex = 1;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Fira Sans Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(47, 10);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(86, 19);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Milk Shake";
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Gainsboro;
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->ForeColor = System::Drawing::Color::Gainsboro;
			this->button11->Location = System::Drawing::Point(7, 39);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(160, 124);
			this->button11->TabIndex = 0;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// panel13
			// 
			this->panel13->Controls->Add(this->label12);
			this->panel13->Controls->Add(this->button12);
			this->panel13->Location = System::Drawing::Point(42, 34);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(174, 174);
			this->panel13->TabIndex = 0;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Fira Sans Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(57, 10);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(55, 19);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Coffee";
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Gainsboro;
			this->button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.BackgroundImage")));
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->ForeColor = System::Drawing::Color::Gainsboro;
			this->button12->Location = System::Drawing::Point(7, 39);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(160, 124);
			this->button12->TabIndex = 0;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// pnlDesserts
			// 
			this->pnlDesserts->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pnlDesserts->Controls->Add(this->panel17);
			this->pnlDesserts->Controls->Add(this->panel18);
			this->pnlDesserts->Controls->Add(this->panel19);
			this->pnlDesserts->Location = System::Drawing::Point(200, 27);
			this->pnlDesserts->Name = L"pnlDesserts";
			this->pnlDesserts->Size = System::Drawing::Size(683, 471);
			this->pnlDesserts->TabIndex = 4;
			// 
			// panel17
			// 
			this->panel17->Controls->Add(this->label16);
			this->panel17->Controls->Add(this->button16);
			this->panel17->Location = System::Drawing::Point(466, 34);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(174, 174);
			this->panel17->TabIndex = 2;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Fira Sans Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(73, 10);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(36, 19);
			this->label16->TabIndex = 1;
			this->label16->Text = L"Kue";
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Gainsboro;
			this->button16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.BackgroundImage")));
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->ForeColor = System::Drawing::Color::Gainsboro;
			this->button16->Location = System::Drawing::Point(7, 39);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(160, 124);
			this->button16->TabIndex = 0;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// panel18
			// 
			this->panel18->Controls->Add(this->label17);
			this->panel18->Controls->Add(this->button17);
			this->panel18->Location = System::Drawing::Point(254, 34);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(174, 174);
			this->panel18->TabIndex = 1;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Fira Sans Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(51, 10);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(82, 19);
			this->label17->TabIndex = 1;
			this->label17->Text = L"Ice Cream";
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Gainsboro;
			this->button17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.BackgroundImage")));
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->ForeColor = System::Drawing::Color::Gainsboro;
			this->button17->Location = System::Drawing::Point(7, 39);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(160, 124);
			this->button17->TabIndex = 0;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// panel19
			// 
			this->panel19->Controls->Add(this->label18);
			this->panel19->Controls->Add(this->button18);
			this->panel19->Location = System::Drawing::Point(42, 34);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(174, 174);
			this->panel19->TabIndex = 0;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Fira Sans Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(57, 10);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(57, 19);
			this->label18->TabIndex = 1;
			this->label18->Text = L"Puding";
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Gainsboro;
			this->button18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.BackgroundImage")));
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->ForeColor = System::Drawing::Color::Gainsboro;
			this->button18->Location = System::Drawing::Point(7, 39);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(160, 124);
			this->button18->TabIndex = 0;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// pnlMyChart
			// 
			this->pnlMyChart->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pnlMyChart->Controls->Add(this->textBoxKembali);
			this->pnlMyChart->Controls->Add(this->button47);
			this->pnlMyChart->Controls->Add(this->lblKembali);
			this->pnlMyChart->Controls->Add(this->label96);
			this->pnlMyChart->Controls->Add(this->lblJumlah);
			this->pnlMyChart->Controls->Add(this->label95);
			this->pnlMyChart->Controls->Add(this->button27);
			this->pnlMyChart->Controls->Add(this->dataGridView1);
			this->pnlMyChart->Controls->Add(this->label13);
			this->pnlMyChart->Location = System::Drawing::Point(200, 27);
			this->pnlMyChart->Name = L"pnlMyChart";
			this->pnlMyChart->Size = System::Drawing::Size(683, 471);
			this->pnlMyChart->TabIndex = 3;
			// 
			// textBoxKembali
			// 
			this->textBoxKembali->Location = System::Drawing::Point(482, 337);
			this->textBoxKembali->Name = L"textBoxKembali";
			this->textBoxKembali->Size = System::Drawing::Size(100, 20);
			this->textBoxKembali->TabIndex = 9;
			// 
			// button47
			// 
			this->button47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button47->Location = System::Drawing::Point(356, 370);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(89, 33);
			this->button47->TabIndex = 8;
			this->button47->Text = L"Kembalian";
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &MyForm::button47_Click);
			// 
			// lblKembali
			// 
			this->lblKembali->AutoSize = true;
			this->lblKembali->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblKembali->Location = System::Drawing::Point(478, 375);
			this->lblKembali->Name = L"lblKembali";
			this->lblKembali->Size = System::Drawing::Size(99, 24);
			this->lblKembali->TabIndex = 6;
			this->lblKembali->Text = L"Kembalian";
			// 
			// label96
			// 
			this->label96->AutoSize = true;
			this->label96->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label96->Location = System::Drawing::Point(358, 338);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(87, 16);
			this->label96->TabIndex = 5;
			this->label96->Text = L"Jumlah Uang";
			// 
			// lblJumlah
			// 
			this->lblJumlah->AutoSize = true;
			this->lblJumlah->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblJumlah->Location = System::Drawing::Point(139, 375);
			this->lblJumlah->Name = L"lblJumlah";
			this->lblJumlah->Size = System::Drawing::Size(51, 24);
			this->lblJumlah->TabIndex = 4;
			this->lblJumlah->Text = L"Total";
			// 
			// label95
			// 
			this->label95->AutoSize = true;
			this->label95->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label95->Location = System::Drawing::Point(118, 375);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(15, 24);
			this->label95->TabIndex = 3;
			this->label95->Text = L":";
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(37, 370);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(75, 33);
			this->button27->TabIndex = 2;
			this->button27->Text = L"Total";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->nama, this->jumlah,
					this->harga, this->total
			});
			this->dataGridView1->Location = System::Drawing::Point(37, 73);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(600, 235);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// nama
			// 
			this->nama->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->nama->HeaderText = L"Nama ";
			this->nama->Name = L"nama";
			this->nama->ReadOnly = true;
			// 
			// jumlah
			// 
			this->jumlah->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->jumlah->HeaderText = L"Jumlah";
			this->jumlah->Name = L"jumlah";
			this->jumlah->ReadOnly = true;
			// 
			// harga
			// 
			this->harga->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->harga->HeaderText = L"@Harga";
			this->harga->Name = L"harga";
			this->harga->ReadOnly = true;
			this->harga->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// total
			// 
			this->total->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->total->HeaderText = L"Total";
			this->total->Name = L"total";
			this->total->ReadOnly = true;
			this->total->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Fira Sans Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(294, 29);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(94, 26);
			this->label13->TabIndex = 0;
			this->label13->Text = L"My Chart";
			// 
			// pnlAbout
			// 
			this->pnlAbout->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pnlAbout->Controls->Add(this->label14);
			this->pnlAbout->Location = System::Drawing::Point(200, 27);
			this->pnlAbout->Name = L"pnlAbout";
			this->pnlAbout->Size = System::Drawing::Size(683, 471);
			this->pnlAbout->TabIndex = 5;
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Fira Sans Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(294, 29);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(97, 26);
			this->label14->TabIndex = 0;
			this->label14->Text = L"About Us";
			// 
			// pnlChicken
			// 
			this->pnlChicken->Controls->Add(this->button13);
			this->pnlChicken->Controls->Add(this->comboBox1);
			this->pnlChicken->Controls->Add(this->txtharga1);
			this->pnlChicken->Controls->Add(this->label24);
			this->pnlChicken->Controls->Add(this->textBox2);
			this->pnlChicken->Controls->Add(this->label23);
			this->pnlChicken->Controls->Add(this->textBox1);
			this->pnlChicken->Controls->Add(this->label22);
			this->pnlChicken->Controls->Add(this->label21);
			this->pnlChicken->Controls->Add(this->btnChart1);
			this->pnlChicken->Controls->Add(this->label20);
			this->pnlChicken->Location = System::Drawing::Point(200, 27);
			this->pnlChicken->Name = L"pnlChicken";
			this->pnlChicken->Size = System::Drawing::Size(683, 471);
			this->pnlChicken->TabIndex = 6;
			this->pnlChicken->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pnlChicken_Paint);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(175, 314);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(115, 42);
			this->button13->TabIndex = 20;
			this->button13->Text = L"Hitung";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click_1);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Ayam Goreng", L"Ayam Bakar", L"Ayam Geprek",
					L"Ayam Penyet", L"Pepes Ayam"
			});
			this->comboBox1->Location = System::Drawing::Point(178, 121);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(186, 28);
			this->comboBox1->TabIndex = 19;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged_1);
			// 
			// txtharga1
			// 
			this->txtharga1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtharga1->Location = System::Drawing::Point(178, 163);
			this->txtharga1->Name = L"txtharga1";
			this->txtharga1->ReadOnly = true;
			this->txtharga1->Size = System::Drawing::Size(112, 26);
			this->txtharga1->TabIndex = 18;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(33, 163);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(53, 20);
			this->label24->TabIndex = 17;
			this->label24->Text = L"Harga";
			this->label24->Click += gcnew System::EventHandler(this, &MyForm::label24_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(178, 252);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(112, 26);
			this->textBox2->TabIndex = 16;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(33, 252);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(92, 20);
			this->label23->TabIndex = 15;
			this->label23->Text = L"Total Harga";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(178, 206);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(112, 26);
			this->textBox1->TabIndex = 14;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(33, 206);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(90, 20);
			this->label22->TabIndex = 13;
			this->label22->Text = L"Jumlah Beli";
			this->label22->Click += gcnew System::EventHandler(this, &MyForm::label22_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(33, 121);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(121, 20);
			this->label21->TabIndex = 11;
			this->label21->Text = L"Nama Makanan";
			// 
			// btnChart1
			// 
			this->btnChart1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnChart1->Location = System::Drawing::Point(309, 314);
			this->btnChart1->Name = L"btnChart1";
			this->btnChart1->Size = System::Drawing::Size(136, 42);
			this->btnChart1->TabIndex = 10;
			this->btnChart1->Text = L"Add To Chart";
			this->btnChart1->UseVisualStyleBackColor = true;
			this->btnChart1->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Fira Sans", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label20->Location = System::Drawing::Point(306, 34);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(71, 28);
			this->label20->TabIndex = 8;
			this->label20->Text = L"Ayam";
			// 
			// pnlNasi
			// 
			this->pnlNasi->Controls->Add(this->button14);
			this->pnlNasi->Controls->Add(this->comboBox2);
			this->pnlNasi->Controls->Add(this->textBox3);
			this->pnlNasi->Controls->Add(this->label25);
			this->pnlNasi->Controls->Add(this->textBox4);
			this->pnlNasi->Controls->Add(this->label26);
			this->pnlNasi->Controls->Add(this->textBox5);
			this->pnlNasi->Controls->Add(this->label27);
			this->pnlNasi->Controls->Add(this->label28);
			this->pnlNasi->Controls->Add(this->button15);
			this->pnlNasi->Controls->Add(this->label29);
			this->pnlNasi->Location = System::Drawing::Point(200, 27);
			this->pnlNasi->Name = L"pnlNasi";
			this->pnlNasi->Size = System::Drawing::Size(683, 471);
			this->pnlNasi->TabIndex = 7;
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(175, 314);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(115, 42);
			this->button14->TabIndex = 20;
			this->button14->Text = L"Hitung";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Nasi Goreng", L"Nasi Goreng Spesial", L"Nasi Bakar",
					L"Nasi Uduk", L"Nasi Kuning", L"Nasi Putih"
			});
			this->comboBox2->Location = System::Drawing::Point(178, 121);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(186, 28);
			this->comboBox2->TabIndex = 19;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged_1);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(178, 163);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(112, 26);
			this->textBox3->TabIndex = 18;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(33, 163);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(53, 20);
			this->label25->TabIndex = 17;
			this->label25->Text = L"Harga";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(178, 252);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(112, 26);
			this->textBox4->TabIndex = 16;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(33, 252);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(92, 20);
			this->label26->TabIndex = 15;
			this->label26->Text = L"Total Harga";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(178, 206);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(112, 26);
			this->textBox5->TabIndex = 14;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(33, 206);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(90, 20);
			this->label27->TabIndex = 13;
			this->label27->Text = L"Jumlah Beli";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(33, 121);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(121, 20);
			this->label28->TabIndex = 11;
			this->label28->Text = L"Nama Makanan";
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(309, 314);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(136, 42);
			this->button15->TabIndex = 10;
			this->button15->Text = L"Add To Chart";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// label29
			// 
			this->label29->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Fira Sans", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label29->Location = System::Drawing::Point(306, 34);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(60, 28);
			this->label29->TabIndex = 8;
			this->label29->Text = L"Nasi";
			// 
			// pnlMie
			// 
			this->pnlMie->Controls->Add(this->button19);
			this->pnlMie->Controls->Add(this->comboBox3);
			this->pnlMie->Controls->Add(this->textBox6);
			this->pnlMie->Controls->Add(this->label30);
			this->pnlMie->Controls->Add(this->textBox7);
			this->pnlMie->Controls->Add(this->label31);
			this->pnlMie->Controls->Add(this->textBox8);
			this->pnlMie->Controls->Add(this->label32);
			this->pnlMie->Controls->Add(this->label33);
			this->pnlMie->Controls->Add(this->button20);
			this->pnlMie->Controls->Add(this->label34);
			this->pnlMie->Location = System::Drawing::Point(200, 27);
			this->pnlMie->Name = L"pnlMie";
			this->pnlMie->Size = System::Drawing::Size(683, 471);
			this->pnlMie->TabIndex = 8;
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(175, 314);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(115, 42);
			this->button19->TabIndex = 20;
			this->button19->Text = L"Hitung";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Mie Goreng", L"Mie Goreng Spesial", L"Mie Rebus",
					L"Mie Rebus Spesial", L"Mie Ayam Kuah", L"Mie Ayam Goreng", L"Kwetiau", L"Kwetiau Spesial"
			});
			this->comboBox3->Location = System::Drawing::Point(178, 121);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(186, 28);
			this->comboBox3->TabIndex = 19;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox3_SelectedIndexChanged);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(178, 163);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(112, 26);
			this->textBox6->TabIndex = 18;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(33, 163);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(53, 20);
			this->label30->TabIndex = 17;
			this->label30->Text = L"Harga";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(178, 252);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(112, 26);
			this->textBox7->TabIndex = 16;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(33, 252);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(92, 20);
			this->label31->TabIndex = 15;
			this->label31->Text = L"Total Harga";
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(178, 206);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(112, 26);
			this->textBox8->TabIndex = 14;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(33, 206);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(90, 20);
			this->label32->TabIndex = 13;
			this->label32->Text = L"Jumlah Beli";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(33, 121);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(121, 20);
			this->label33->TabIndex = 11;
			this->label33->Text = L"Nama Makanan";
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(309, 314);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(136, 42);
			this->button20->TabIndex = 10;
			this->button20->Text = L"Add To Chart";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// label34
			// 
			this->label34->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Fira Sans", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label34->Location = System::Drawing::Point(316, 34);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(51, 28);
			this->label34->TabIndex = 8;
			this->label34->Text = L"Mie";
			// 
			// pnlSop
			// 
			this->pnlSop->Controls->Add(this->button21);
			this->pnlSop->Controls->Add(this->comboBox4);
			this->pnlSop->Controls->Add(this->textBox9);
			this->pnlSop->Controls->Add(this->label35);
			this->pnlSop->Controls->Add(this->textBox11);
			this->pnlSop->Controls->Add(this->label36);
			this->pnlSop->Controls->Add(this->textBox10);
			this->pnlSop->Controls->Add(this->label37);
			this->pnlSop->Controls->Add(this->label38);
			this->pnlSop->Controls->Add(this->button22);
			this->pnlSop->Controls->Add(this->label39);
			this->pnlSop->Location = System::Drawing::Point(200, 27);
			this->pnlSop->Name = L"pnlSop";
			this->pnlSop->Size = System::Drawing::Size(683, 471);
			this->pnlSop->TabIndex = 9;
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(175, 314);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(115, 42);
			this->button21->TabIndex = 20;
			this->button21->Text = L"Hitung";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Sop Ayam", L"Sop Sapi", L"Sop Kambing", L"Sop Iga",
					L"Sop Dengkil"
			});
			this->comboBox4->Location = System::Drawing::Point(178, 121);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(186, 28);
			this->comboBox4->TabIndex = 19;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox4_SelectedIndexChanged);
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(178, 163);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(112, 26);
			this->textBox9->TabIndex = 18;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(33, 163);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(53, 20);
			this->label35->TabIndex = 17;
			this->label35->Text = L"Harga";
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(178, 252);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(112, 26);
			this->textBox11->TabIndex = 16;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(33, 252);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(92, 20);
			this->label36->TabIndex = 15;
			this->label36->Text = L"Total Harga";
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(179, 206);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(112, 26);
			this->textBox10->TabIndex = 14;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(33, 206);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(90, 20);
			this->label37->TabIndex = 13;
			this->label37->Text = L"Jumlah Beli";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(33, 121);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(121, 20);
			this->label38->TabIndex = 11;
			this->label38->Text = L"Nama Makanan";
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(309, 314);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(136, 42);
			this->button22->TabIndex = 10;
			this->button22->Text = L"Add To Chart";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// label39
			// 
			this->label39->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Fira Sans", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label39->Location = System::Drawing::Point(316, 34);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(53, 28);
			this->label39->TabIndex = 8;
			this->label39->Text = L"Sop";
			this->label39->Click += gcnew System::EventHandler(this, &MyForm::label39_Click);
			// 
			// pnlSfd
			// 
			this->pnlSfd->Controls->Add(this->button23);
			this->pnlSfd->Controls->Add(this->comboBox5);
			this->pnlSfd->Controls->Add(this->textBox12);
			this->pnlSfd->Controls->Add(this->label40);
			this->pnlSfd->Controls->Add(this->textBox13);
			this->pnlSfd->Controls->Add(this->label41);
			this->pnlSfd->Controls->Add(this->textBox14);
			this->pnlSfd->Controls->Add(this->label42);
			this->pnlSfd->Controls->Add(this->label43);
			this->pnlSfd->Controls->Add(this->button24);
			this->pnlSfd->Controls->Add(this->label44);
			this->pnlSfd->Location = System::Drawing::Point(200, 27);
			this->pnlSfd->Name = L"pnlSfd";
			this->pnlSfd->Size = System::Drawing::Size(683, 471);
			this->pnlSfd->TabIndex = 10;
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(175, 314);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(115, 42);
			this->button23->TabIndex = 20;
			this->button23->Text = L"Hitung";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// comboBox5
			// 
			this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Kepiting", L"Cumi Cumi", L"Kerang", L"Udang",
					L"Ikan Bakar", L"Ikan Goreng"
			});
			this->comboBox5->Location = System::Drawing::Point(178, 121);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(186, 28);
			this->comboBox5->TabIndex = 19;
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox5_SelectedIndexChanged);
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(178, 163);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(112, 26);
			this->textBox12->TabIndex = 18;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(33, 163);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(53, 20);
			this->label40->TabIndex = 17;
			this->label40->Text = L"Harga";
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->Location = System::Drawing::Point(178, 252);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(112, 26);
			this->textBox13->TabIndex = 16;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(33, 252);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(92, 20);
			this->label41->TabIndex = 15;
			this->label41->Text = L"Total Harga";
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(178, 206);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(112, 26);
			this->textBox14->TabIndex = 14;
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox14_TextChanged);
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(33, 206);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(90, 20);
			this->label42->TabIndex = 13;
			this->label42->Text = L"Jumlah Beli";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(33, 121);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(121, 20);
			this->label43->TabIndex = 11;
			this->label43->Text = L"Nama Makanan";
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(309, 314);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(136, 42);
			this->button24->TabIndex = 10;
			this->button24->Text = L"Add To Chart";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// label44
			// 
			this->label44->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Fira Sans", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label44->Location = System::Drawing::Point(290, 34);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(102, 28);
			this->label44->TabIndex = 8;
			this->label44->Text = L"Seafood";
			this->label44->Click += gcnew System::EventHandler(this, &MyForm::label44_Click);
			// 
			// pnllain1
			// 
			this->pnllain1->Controls->Add(this->button25);
			this->pnllain1->Controls->Add(this->comboBox6);
			this->pnllain1->Controls->Add(this->textBox15);
			this->pnllain1->Controls->Add(this->label45);
			this->pnllain1->Controls->Add(this->textBox16);
			this->pnllain1->Controls->Add(this->label46);
			this->pnllain1->Controls->Add(this->textBox17);
			this->pnllain1->Controls->Add(this->label47);
			this->pnllain1->Controls->Add(this->label48);
			this->pnllain1->Controls->Add(this->button26);
			this->pnllain1->Controls->Add(this->label49);
			this->pnllain1->Location = System::Drawing::Point(200, 27);
			this->pnllain1->Name = L"pnllain1";
			this->pnllain1->Size = System::Drawing::Size(683, 471);
			this->pnllain1->TabIndex = 11;
			// 
			// button25
			// 
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(175, 314);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(115, 42);
			this->button25->TabIndex = 20;
			this->button25->Text = L"Hitung";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// comboBox6
			// 
			this->comboBox6->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Baso", L"Gado Gado", L"Tahu Gimbal" });
			this->comboBox6->Location = System::Drawing::Point(178, 121);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(186, 28);
			this->comboBox6->TabIndex = 19;
			this->comboBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox6_SelectedIndexChanged);
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->Location = System::Drawing::Point(178, 163);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(112, 26);
			this->textBox15->TabIndex = 18;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(33, 163);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(53, 20);
			this->label45->TabIndex = 17;
			this->label45->Text = L"Harga";
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->Location = System::Drawing::Point(178, 252);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(112, 26);
			this->textBox16->TabIndex = 16;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(33, 252);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(92, 20);
			this->label46->TabIndex = 15;
			this->label46->Text = L"Total Harga";
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox17->Location = System::Drawing::Point(178, 206);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(112, 26);
			this->textBox17->TabIndex = 14;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(33, 206);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(90, 20);
			this->label47->TabIndex = 13;
			this->label47->Text = L"Jumlah Beli";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->Location = System::Drawing::Point(33, 121);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(121, 20);
			this->label48->TabIndex = 11;
			this->label48->Text = L"Nama Makanan";
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(309, 314);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(136, 42);
			this->button26->TabIndex = 10;
			this->button26->Text = L"Add To Chart";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// label49
			// 
			this->label49->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Fira Sans", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label49->Location = System::Drawing::Point(292, 34);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(99, 28);
			this->label49->TabIndex = 8;
			this->label49->Text = L"Lainnya";
			// 
			// pnlCoffee
			// 
			this->pnlCoffee->Controls->Add(this->button28);
			this->pnlCoffee->Controls->Add(this->comboBox7);
			this->pnlCoffee->Controls->Add(this->textBox18);
			this->pnlCoffee->Controls->Add(this->label50);
			this->pnlCoffee->Controls->Add(this->textBox19);
			this->pnlCoffee->Controls->Add(this->label51);
			this->pnlCoffee->Controls->Add(this->textBox20);
			this->pnlCoffee->Controls->Add(this->label52);
			this->pnlCoffee->Controls->Add(this->label53);
			this->pnlCoffee->Controls->Add(this->button29);
			this->pnlCoffee->Controls->Add(this->label54);
			this->pnlCoffee->Location = System::Drawing::Point(200, 27);
			this->pnlCoffee->Name = L"pnlCoffee";
			this->pnlCoffee->Size = System::Drawing::Size(683, 471);
			this->pnlCoffee->TabIndex = 12;
			// 
			// button28
			// 
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(175, 314);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(115, 42);
			this->button28->TabIndex = 20;
			this->button28->Text = L"Hitung";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// comboBox7
			// 
			this->comboBox7->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Vanila Latte", L"Matcha", L"Caramel", L"Hazelnut",
					L"Americano"
			});
			this->comboBox7->Location = System::Drawing::Point(178, 121);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(186, 28);
			this->comboBox7->TabIndex = 19;
			this->comboBox7->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox7_SelectedIndexChanged);
			// 
			// textBox18
			// 
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox18->Location = System::Drawing::Point(178, 163);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(112, 26);
			this->textBox18->TabIndex = 18;
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->Location = System::Drawing::Point(33, 163);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(53, 20);
			this->label50->TabIndex = 17;
			this->label50->Text = L"Harga";
			// 
			// textBox19
			// 
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox19->Location = System::Drawing::Point(178, 252);
			this->textBox19->Name = L"textBox19";
			this->textBox19->ReadOnly = true;
			this->textBox19->Size = System::Drawing::Size(112, 26);
			this->textBox19->TabIndex = 16;
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->Location = System::Drawing::Point(33, 252);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(92, 20);
			this->label51->TabIndex = 15;
			this->label51->Text = L"Total Harga";
			// 
			// textBox20
			// 
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox20->Location = System::Drawing::Point(178, 206);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(112, 26);
			this->textBox20->TabIndex = 14;
			this->textBox20->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox20_TextChanged);
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->Location = System::Drawing::Point(33, 206);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(90, 20);
			this->label52->TabIndex = 13;
			this->label52->Text = L"Jumlah Beli";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label53->Location = System::Drawing::Point(33, 121);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(120, 20);
			this->label53->TabIndex = 11;
			this->label53->Text = L"Nama Minuman";
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(309, 314);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(136, 42);
			this->button29->TabIndex = 10;
			this->button29->Text = L"Add To Chart";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// label54
			// 
			this->label54->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Fira Sans", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label54->Location = System::Drawing::Point(311, 34);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(61, 28);
			this->label54->TabIndex = 8;
			this->label54->Text = L"Kopi";
			// 
			// pnlMilk
			// 
			this->pnlMilk->Controls->Add(this->button30);
			this->pnlMilk->Controls->Add(this->comboBox8);
			this->pnlMilk->Controls->Add(this->textBox21);
			this->pnlMilk->Controls->Add(this->label55);
			this->pnlMilk->Controls->Add(this->textBox22);
			this->pnlMilk->Controls->Add(this->label56);
			this->pnlMilk->Controls->Add(this->textBox23);
			this->pnlMilk->Controls->Add(this->label57);
			this->pnlMilk->Controls->Add(this->label58);
			this->pnlMilk->Controls->Add(this->button31);
			this->pnlMilk->Controls->Add(this->label59);
			this->pnlMilk->Location = System::Drawing::Point(200, 27);
			this->pnlMilk->Name = L"pnlMilk";
			this->pnlMilk->Size = System::Drawing::Size(683, 471);
			this->pnlMilk->TabIndex = 13;
			// 
			// button30
			// 
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(175, 314);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(115, 42);
			this->button30->TabIndex = 20;
			this->button30->Text = L"Hitung";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// comboBox8
			// 
			this->comboBox8->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Milk Shake Strawberry", L"Milk Shake Coklat",
					L"Milk Shake Vanila", L"Smoothies Strawberry", L"Smoothies Vanila", L"Smoothies Coklat"
			});
			this->comboBox8->Location = System::Drawing::Point(178, 121);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(186, 28);
			this->comboBox8->TabIndex = 19;
			this->comboBox8->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox8_SelectedIndexChanged);
			// 
			// textBox21
			// 
			this->textBox21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox21->Location = System::Drawing::Point(178, 163);
			this->textBox21->Name = L"textBox21";
			this->textBox21->ReadOnly = true;
			this->textBox21->Size = System::Drawing::Size(112, 26);
			this->textBox21->TabIndex = 18;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label55->Location = System::Drawing::Point(33, 163);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(53, 20);
			this->label55->TabIndex = 17;
			this->label55->Text = L"Harga";
			// 
			// textBox22
			// 
			this->textBox22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox22->Location = System::Drawing::Point(178, 252);
			this->textBox22->Name = L"textBox22";
			this->textBox22->ReadOnly = true;
			this->textBox22->Size = System::Drawing::Size(112, 26);
			this->textBox22->TabIndex = 16;
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label56->Location = System::Drawing::Point(33, 252);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(92, 20);
			this->label56->TabIndex = 15;
			this->label56->Text = L"Total Harga";
			// 
			// textBox23
			// 
			this->textBox23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox23->Location = System::Drawing::Point(178, 206);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(112, 26);
			this->textBox23->TabIndex = 14;
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label57->Location = System::Drawing::Point(33, 206);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(90, 20);
			this->label57->TabIndex = 13;
			this->label57->Text = L"Jumlah Beli";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label58->Location = System::Drawing::Point(33, 121);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(120, 20);
			this->label58->TabIndex = 11;
			this->label58->Text = L"Nama Minuman";
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(309, 314);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(136, 42);
			this->button31->TabIndex = 10;
			this->button31->Text = L"Add To Chart";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// label59
			// 
			this->label59->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Fira Sans", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label59->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label59->Location = System::Drawing::Point(276, 34);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(131, 28);
			this->label59->TabIndex = 8;
			this->label59->Text = L"Milk Shake";
			// 
			// pnlTeh
			// 
			this->pnlTeh->Controls->Add(this->button32);
			this->pnlTeh->Controls->Add(this->comboBox9);
			this->pnlTeh->Controls->Add(this->textBox24);
			this->pnlTeh->Controls->Add(this->label60);
			this->pnlTeh->Controls->Add(this->textBox25);
			this->pnlTeh->Controls->Add(this->label61);
			this->pnlTeh->Controls->Add(this->textBox26);
			this->pnlTeh->Controls->Add(this->label62);
			this->pnlTeh->Controls->Add(this->label63);
			this->pnlTeh->Controls->Add(this->button33);
			this->pnlTeh->Controls->Add(this->label64);
			this->pnlTeh->Location = System::Drawing::Point(200, 27);
			this->pnlTeh->Name = L"pnlTeh";
			this->pnlTeh->Size = System::Drawing::Size(683, 471);
			this->pnlTeh->TabIndex = 14;
			// 
			// button32
			// 
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(175, 314);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(115, 42);
			this->button32->TabIndex = 20;
			this->button32->Text = L"Hitung";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// comboBox9
			// 
			this->comboBox9->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Teh Anget", L"Es Teh", L"Lemon Tea", L"Teh Tawar" });
			this->comboBox9->Location = System::Drawing::Point(178, 121);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(186, 28);
			this->comboBox9->TabIndex = 19;
			this->comboBox9->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox9_SelectedIndexChanged);
			// 
			// textBox24
			// 
			this->textBox24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox24->Location = System::Drawing::Point(178, 163);
			this->textBox24->Name = L"textBox24";
			this->textBox24->ReadOnly = true;
			this->textBox24->Size = System::Drawing::Size(112, 26);
			this->textBox24->TabIndex = 18;
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label60->Location = System::Drawing::Point(33, 163);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(53, 20);
			this->label60->TabIndex = 17;
			this->label60->Text = L"Harga";
			// 
			// textBox25
			// 
			this->textBox25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox25->Location = System::Drawing::Point(178, 252);
			this->textBox25->Name = L"textBox25";
			this->textBox25->ReadOnly = true;
			this->textBox25->Size = System::Drawing::Size(112, 26);
			this->textBox25->TabIndex = 16;
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label61->Location = System::Drawing::Point(33, 252);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(92, 20);
			this->label61->TabIndex = 15;
			this->label61->Text = L"Total Harga";
			// 
			// textBox26
			// 
			this->textBox26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox26->Location = System::Drawing::Point(178, 206);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(112, 26);
			this->textBox26->TabIndex = 14;
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label62->Location = System::Drawing::Point(33, 206);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(90, 20);
			this->label62->TabIndex = 13;
			this->label62->Text = L"Jumlah Beli";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label63->Location = System::Drawing::Point(33, 121);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(120, 20);
			this->label63->TabIndex = 11;
			this->label63->Text = L"Nama Minuman";
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->Location = System::Drawing::Point(309, 314);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(136, 42);
			this->button33->TabIndex = 10;
			this->button33->Text = L"Add To Chart";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// label64
			// 
			this->label64->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label64->AutoSize = true;
			this->label64->Font = (gcnew System::Drawing::Font(L"Fira Sans", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label64->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label64->Location = System::Drawing::Point(317, 34);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(49, 28);
			this->label64->TabIndex = 8;
			this->label64->Text = L"Teh";
			// 
			// pnlJus
			// 
			this->pnlJus->Controls->Add(this->button34);
			this->pnlJus->Controls->Add(this->comboBox10);
			this->pnlJus->Controls->Add(this->textBox27);
			this->pnlJus->Controls->Add(this->label65);
			this->pnlJus->Controls->Add(this->textBox28);
			this->pnlJus->Controls->Add(this->label66);
			this->pnlJus->Controls->Add(this->textBox29);
			this->pnlJus->Controls->Add(this->label67);
			this->pnlJus->Controls->Add(this->label68);
			this->pnlJus->Controls->Add(this->button35);
			this->pnlJus->Controls->Add(this->label69);
			this->pnlJus->Location = System::Drawing::Point(200, 27);
			this->pnlJus->Name = L"pnlJus";
			this->pnlJus->Size = System::Drawing::Size(683, 471);
			this->pnlJus->TabIndex = 15;
			// 
			// button34
			// 
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->Location = System::Drawing::Point(175, 314);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(115, 42);
			this->button34->TabIndex = 20;
			this->button34->Text = L"Hitung";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// comboBox10
			// 
			this->comboBox10->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Jus Alpukat", L"Jus Kiwi", L"Jus Mangga", L"Jus Strawberry",
					L"Jus Sirsak", L"Jus Jeruk", L"Jus Melon", L"Jus Nanas", L"Jus Jambu", L"Jus Mix"
			});
			this->comboBox10->Location = System::Drawing::Point(178, 121);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(186, 28);
			this->comboBox10->TabIndex = 19;
			this->comboBox10->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox10_SelectedIndexChanged);
			// 
			// textBox27
			// 
			this->textBox27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox27->Location = System::Drawing::Point(178, 163);
			this->textBox27->Name = L"textBox27";
			this->textBox27->ReadOnly = true;
			this->textBox27->Size = System::Drawing::Size(112, 26);
			this->textBox27->TabIndex = 18;
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label65->Location = System::Drawing::Point(33, 163);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(53, 20);
			this->label65->TabIndex = 17;
			this->label65->Text = L"Harga";
			// 
			// textBox28
			// 
			this->textBox28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox28->Location = System::Drawing::Point(178, 252);
			this->textBox28->Name = L"textBox28";
			this->textBox28->ReadOnly = true;
			this->textBox28->Size = System::Drawing::Size(112, 26);
			this->textBox28->TabIndex = 16;
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label66->Location = System::Drawing::Point(33, 252);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(92, 20);
			this->label66->TabIndex = 15;
			this->label66->Text = L"Total Harga";
			// 
			// textBox29
			// 
			this->textBox29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox29->Location = System::Drawing::Point(178, 206);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(112, 26);
			this->textBox29->TabIndex = 14;
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label67->Location = System::Drawing::Point(33, 206);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(90, 20);
			this->label67->TabIndex = 13;
			this->label67->Text = L"Jumlah Beli";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label68->Location = System::Drawing::Point(33, 121);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(120, 20);
			this->label68->TabIndex = 11;
			this->label68->Text = L"Nama Minuman";
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->Location = System::Drawing::Point(309, 314);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(136, 42);
			this->button35->TabIndex = 10;
			this->button35->Text = L"Add To Chart";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// label69
			// 
			this->label69->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label69->AutoSize = true;
			this->label69->Font = (gcnew System::Drawing::Font(L"Fira Sans", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label69->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label69->Location = System::Drawing::Point(319, 34);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(44, 28);
			this->label69->TabIndex = 8;
			this->label69->Text = L"Jus";
			// 
			// pnlSoft
			// 
			this->pnlSoft->Controls->Add(this->button36);
			this->pnlSoft->Controls->Add(this->comboBox11);
			this->pnlSoft->Controls->Add(this->textBox30);
			this->pnlSoft->Controls->Add(this->label70);
			this->pnlSoft->Controls->Add(this->textBox31);
			this->pnlSoft->Controls->Add(this->label71);
			this->pnlSoft->Controls->Add(this->textBox32);
			this->pnlSoft->Controls->Add(this->label72);
			this->pnlSoft->Controls->Add(this->label73);
			this->pnlSoft->Controls->Add(this->button37);
			this->pnlSoft->Controls->Add(this->label74);
			this->pnlSoft->Location = System::Drawing::Point(200, 27);
			this->pnlSoft->Name = L"pnlSoft";
			this->pnlSoft->Size = System::Drawing::Size(683, 471);
			this->pnlSoft->TabIndex = 16;
			// 
			// button36
			// 
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->Location = System::Drawing::Point(175, 314);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(115, 42);
			this->button36->TabIndex = 20;
			this->button36->Text = L"Hitung";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// comboBox11
			// 
			this->comboBox11->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Soda Ocean", L"Fanta", L"Coca Cola", L"Sprite" });
			this->comboBox11->Location = System::Drawing::Point(178, 121);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(186, 28);
			this->comboBox11->TabIndex = 19;
			this->comboBox11->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox11_SelectedIndexChanged);
			// 
			// textBox30
			// 
			this->textBox30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox30->Location = System::Drawing::Point(178, 163);
			this->textBox30->Name = L"textBox30";
			this->textBox30->ReadOnly = true;
			this->textBox30->Size = System::Drawing::Size(112, 26);
			this->textBox30->TabIndex = 18;
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label70->Location = System::Drawing::Point(33, 163);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(53, 20);
			this->label70->TabIndex = 17;
			this->label70->Text = L"Harga";
			// 
			// textBox31
			// 
			this->textBox31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox31->Location = System::Drawing::Point(178, 252);
			this->textBox31->Name = L"textBox31";
			this->textBox31->ReadOnly = true;
			this->textBox31->Size = System::Drawing::Size(112, 26);
			this->textBox31->TabIndex = 16;
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label71->Location = System::Drawing::Point(33, 252);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(92, 20);
			this->label71->TabIndex = 15;
			this->label71->Text = L"Total Harga";
			// 
			// textBox32
			// 
			this->textBox32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox32->Location = System::Drawing::Point(178, 206);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(112, 26);
			this->textBox32->TabIndex = 14;
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label72->Location = System::Drawing::Point(33, 206);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(90, 20);
			this->label72->TabIndex = 13;
			this->label72->Text = L"Jumlah Beli";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label73->Location = System::Drawing::Point(33, 121);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(120, 20);
			this->label73->TabIndex = 11;
			this->label73->Text = L"Nama Minuman";
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->Location = System::Drawing::Point(309, 314);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(136, 42);
			this->button37->TabIndex = 10;
			this->button37->Text = L"Add To Chart";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// label74
			// 
			this->label74->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label74->AutoSize = true;
			this->label74->Font = (gcnew System::Drawing::Font(L"Fira Sans", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label74->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label74->Location = System::Drawing::Point(281, 34);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(120, 28);
			this->label74->TabIndex = 8;
			this->label74->Text = L"Soft Drink";
			// 
			// pnlLain2
			// 
			this->pnlLain2->Controls->Add(this->button38);
			this->pnlLain2->Controls->Add(this->comboBox12);
			this->pnlLain2->Controls->Add(this->textBox33);
			this->pnlLain2->Controls->Add(this->label75);
			this->pnlLain2->Controls->Add(this->textBox34);
			this->pnlLain2->Controls->Add(this->label76);
			this->pnlLain2->Controls->Add(this->textBox35);
			this->pnlLain2->Controls->Add(this->label77);
			this->pnlLain2->Controls->Add(this->label78);
			this->pnlLain2->Controls->Add(this->button39);
			this->pnlLain2->Controls->Add(this->label79);
			this->pnlLain2->Location = System::Drawing::Point(200, 27);
			this->pnlLain2->Name = L"pnlLain2";
			this->pnlLain2->Size = System::Drawing::Size(683, 471);
			this->pnlLain2->TabIndex = 17;
			// 
			// button38
			// 
			this->button38->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button38->Location = System::Drawing::Point(175, 314);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(115, 42);
			this->button38->TabIndex = 20;
			this->button38->Text = L"Hitung";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// comboBox12
			// 
			this->comboBox12->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox12->FormattingEnabled = true;
			this->comboBox12->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Air Putih", L"Kelapa Muda", L"Float" });
			this->comboBox12->Location = System::Drawing::Point(178, 121);
			this->comboBox12->Name = L"comboBox12";
			this->comboBox12->Size = System::Drawing::Size(186, 28);
			this->comboBox12->TabIndex = 19;
			this->comboBox12->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox12_SelectedIndexChanged);
			// 
			// textBox33
			// 
			this->textBox33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox33->Location = System::Drawing::Point(178, 163);
			this->textBox33->Name = L"textBox33";
			this->textBox33->ReadOnly = true;
			this->textBox33->Size = System::Drawing::Size(112, 26);
			this->textBox33->TabIndex = 18;
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label75->Location = System::Drawing::Point(33, 163);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(53, 20);
			this->label75->TabIndex = 17;
			this->label75->Text = L"Harga";
			// 
			// textBox34
			// 
			this->textBox34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox34->Location = System::Drawing::Point(178, 252);
			this->textBox34->Name = L"textBox34";
			this->textBox34->ReadOnly = true;
			this->textBox34->Size = System::Drawing::Size(112, 26);
			this->textBox34->TabIndex = 16;
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label76->Location = System::Drawing::Point(33, 252);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(92, 20);
			this->label76->TabIndex = 15;
			this->label76->Text = L"Total Harga";
			// 
			// textBox35
			// 
			this->textBox35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox35->Location = System::Drawing::Point(178, 206);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(112, 26);
			this->textBox35->TabIndex = 14;
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label77->Location = System::Drawing::Point(33, 206);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(90, 20);
			this->label77->TabIndex = 13;
			this->label77->Text = L"Jumlah Beli";
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label78->Location = System::Drawing::Point(33, 121);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(120, 20);
			this->label78->TabIndex = 11;
			this->label78->Text = L"Nama Minuman";
			// 
			// button39
			// 
			this->button39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button39->Location = System::Drawing::Point(309, 314);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(136, 42);
			this->button39->TabIndex = 10;
			this->button39->Text = L"Add To Chart";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// label79
			// 
			this->label79->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label79->AutoSize = true;
			this->label79->Font = (gcnew System::Drawing::Font(L"Fira Sans", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label79->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label79->Location = System::Drawing::Point(292, 34);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(99, 28);
			this->label79->TabIndex = 8;
			this->label79->Text = L"Lainnya";
			// 
			// pnlPuding
			// 
			this->pnlPuding->Controls->Add(this->button40);
			this->pnlPuding->Controls->Add(this->comboBox13);
			this->pnlPuding->Controls->Add(this->textBox36);
			this->pnlPuding->Controls->Add(this->label80);
			this->pnlPuding->Controls->Add(this->textBox37);
			this->pnlPuding->Controls->Add(this->label81);
			this->pnlPuding->Controls->Add(this->textBox38);
			this->pnlPuding->Controls->Add(this->label82);
			this->pnlPuding->Controls->Add(this->label83);
			this->pnlPuding->Controls->Add(this->button41);
			this->pnlPuding->Controls->Add(this->label84);
			this->pnlPuding->Location = System::Drawing::Point(200, 27);
			this->pnlPuding->Name = L"pnlPuding";
			this->pnlPuding->Size = System::Drawing::Size(683, 471);
			this->pnlPuding->TabIndex = 18;
			// 
			// button40
			// 
			this->button40->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button40->Location = System::Drawing::Point(175, 314);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(115, 42);
			this->button40->TabIndex = 20;
			this->button40->Text = L"Hitung";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
			// 
			// comboBox13
			// 
			this->comboBox13->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox13->FormattingEnabled = true;
			this->comboBox13->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Puding Coklat", L"Puding Jeruk", L"Puding Strawberrry",
					L"Nutrijel", L"Fla"
			});
			this->comboBox13->Location = System::Drawing::Point(178, 121);
			this->comboBox13->Name = L"comboBox13";
			this->comboBox13->Size = System::Drawing::Size(186, 28);
			this->comboBox13->TabIndex = 19;
			this->comboBox13->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox13_SelectedIndexChanged);
			// 
			// textBox36
			// 
			this->textBox36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox36->Location = System::Drawing::Point(178, 163);
			this->textBox36->Name = L"textBox36";
			this->textBox36->ReadOnly = true;
			this->textBox36->Size = System::Drawing::Size(112, 26);
			this->textBox36->TabIndex = 18;
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label80->Location = System::Drawing::Point(33, 163);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(53, 20);
			this->label80->TabIndex = 17;
			this->label80->Text = L"Harga";
			// 
			// textBox37
			// 
			this->textBox37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox37->Location = System::Drawing::Point(178, 252);
			this->textBox37->Name = L"textBox37";
			this->textBox37->ReadOnly = true;
			this->textBox37->Size = System::Drawing::Size(112, 26);
			this->textBox37->TabIndex = 16;
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label81->Location = System::Drawing::Point(33, 252);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(92, 20);
			this->label81->TabIndex = 15;
			this->label81->Text = L"Total Harga";
			// 
			// textBox38
			// 
			this->textBox38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox38->Location = System::Drawing::Point(178, 206);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(112, 26);
			this->textBox38->TabIndex = 14;
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label82->Location = System::Drawing::Point(33, 206);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(90, 20);
			this->label82->TabIndex = 13;
			this->label82->Text = L"Jumlah Beli";
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label83->Location = System::Drawing::Point(33, 121);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(111, 20);
			this->label83->TabIndex = 11;
			this->label83->Text = L"Nama Dessert";
			// 
			// button41
			// 
			this->button41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button41->Location = System::Drawing::Point(309, 314);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(136, 42);
			this->button41->TabIndex = 10;
			this->button41->Text = L"Add To Chart";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::button41_Click);
			// 
			// label84
			// 
			this->label84->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label84->AutoSize = true;
			this->label84->Font = (gcnew System::Drawing::Font(L"Fira Sans", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label84->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label84->Location = System::Drawing::Point(297, 34);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(89, 28);
			this->label84->TabIndex = 8;
			this->label84->Text = L"Puding";
			// 
			// pnlIce
			// 
			this->pnlIce->Controls->Add(this->button42);
			this->pnlIce->Controls->Add(this->comboBox14);
			this->pnlIce->Controls->Add(this->textBox39);
			this->pnlIce->Controls->Add(this->label85);
			this->pnlIce->Controls->Add(this->textBox40);
			this->pnlIce->Controls->Add(this->label86);
			this->pnlIce->Controls->Add(this->textBox41);
			this->pnlIce->Controls->Add(this->label87);
			this->pnlIce->Controls->Add(this->label88);
			this->pnlIce->Controls->Add(this->button43);
			this->pnlIce->Controls->Add(this->label89);
			this->pnlIce->Location = System::Drawing::Point(200, 27);
			this->pnlIce->Name = L"pnlIce";
			this->pnlIce->Size = System::Drawing::Size(683, 471);
			this->pnlIce->TabIndex = 19;
			// 
			// button42
			// 
			this->button42->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button42->Location = System::Drawing::Point(175, 314);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(115, 42);
			this->button42->TabIndex = 20;
			this->button42->Text = L"Hitung";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::button42_Click);
			// 
			// comboBox14
			// 
			this->comboBox14->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox14->FormattingEnabled = true;
			this->comboBox14->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Banana Split", L"Berries Cream", L"Cream Sandwich",
					L"Waffle Sundae"
			});
			this->comboBox14->Location = System::Drawing::Point(178, 121);
			this->comboBox14->Name = L"comboBox14";
			this->comboBox14->Size = System::Drawing::Size(186, 28);
			this->comboBox14->TabIndex = 19;
			this->comboBox14->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox14_SelectedIndexChanged);
			// 
			// textBox39
			// 
			this->textBox39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox39->Location = System::Drawing::Point(178, 163);
			this->textBox39->Name = L"textBox39";
			this->textBox39->ReadOnly = true;
			this->textBox39->Size = System::Drawing::Size(112, 26);
			this->textBox39->TabIndex = 18;
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label85->Location = System::Drawing::Point(33, 163);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(53, 20);
			this->label85->TabIndex = 17;
			this->label85->Text = L"Harga";
			// 
			// textBox40
			// 
			this->textBox40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox40->Location = System::Drawing::Point(178, 252);
			this->textBox40->Name = L"textBox40";
			this->textBox40->ReadOnly = true;
			this->textBox40->Size = System::Drawing::Size(112, 26);
			this->textBox40->TabIndex = 16;
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label86->Location = System::Drawing::Point(33, 252);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(92, 20);
			this->label86->TabIndex = 15;
			this->label86->Text = L"Total Harga";
			// 
			// textBox41
			// 
			this->textBox41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox41->Location = System::Drawing::Point(178, 206);
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(112, 26);
			this->textBox41->TabIndex = 14;
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label87->Location = System::Drawing::Point(33, 206);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(90, 20);
			this->label87->TabIndex = 13;
			this->label87->Text = L"Jumlah Beli";
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label88->Location = System::Drawing::Point(33, 121);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(111, 20);
			this->label88->TabIndex = 11;
			this->label88->Text = L"Nama Dessert";
			// 
			// button43
			// 
			this->button43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button43->Location = System::Drawing::Point(309, 314);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(136, 42);
			this->button43->TabIndex = 10;
			this->button43->Text = L"Add To Chart";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::button43_Click);
			// 
			// label89
			// 
			this->label89->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label89->AutoSize = true;
			this->label89->Font = (gcnew System::Drawing::Font(L"Fira Sans", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label89->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label89->Location = System::Drawing::Point(282, 34);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(118, 28);
			this->label89->TabIndex = 8;
			this->label89->Text = L"Ice Cream";
			// 
			// pnlKue
			// 
			this->pnlKue->Controls->Add(this->button44);
			this->pnlKue->Controls->Add(this->comboBox15);
			this->pnlKue->Controls->Add(this->textBox42);
			this->pnlKue->Controls->Add(this->label90);
			this->pnlKue->Controls->Add(this->textBox43);
			this->pnlKue->Controls->Add(this->label91);
			this->pnlKue->Controls->Add(this->textBox44);
			this->pnlKue->Controls->Add(this->label92);
			this->pnlKue->Controls->Add(this->label93);
			this->pnlKue->Controls->Add(this->button45);
			this->pnlKue->Controls->Add(this->label94);
			this->pnlKue->Location = System::Drawing::Point(200, 27);
			this->pnlKue->Name = L"pnlKue";
			this->pnlKue->Size = System::Drawing::Size(683, 471);
			this->pnlKue->TabIndex = 20;
			// 
			// button44
			// 
			this->button44->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button44->Location = System::Drawing::Point(175, 314);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(115, 42);
			this->button44->TabIndex = 20;
			this->button44->Text = L"Hitung";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &MyForm::button44_Click);
			// 
			// comboBox15
			// 
			this->comboBox15->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox15->FormattingEnabled = true;
			this->comboBox15->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Dessert Box Oreo", L"Kue Coklat", L"Kue Vanila" });
			this->comboBox15->Location = System::Drawing::Point(178, 121);
			this->comboBox15->Name = L"comboBox15";
			this->comboBox15->Size = System::Drawing::Size(186, 28);
			this->comboBox15->TabIndex = 19;
			this->comboBox15->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox15_SelectedIndexChanged);
			// 
			// textBox42
			// 
			this->textBox42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox42->Location = System::Drawing::Point(178, 163);
			this->textBox42->Name = L"textBox42";
			this->textBox42->ReadOnly = true;
			this->textBox42->Size = System::Drawing::Size(112, 26);
			this->textBox42->TabIndex = 18;
			// 
			// label90
			// 
			this->label90->AutoSize = true;
			this->label90->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label90->Location = System::Drawing::Point(33, 163);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(53, 20);
			this->label90->TabIndex = 17;
			this->label90->Text = L"Harga";
			// 
			// textBox43
			// 
			this->textBox43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox43->Location = System::Drawing::Point(178, 252);
			this->textBox43->Name = L"textBox43";
			this->textBox43->ReadOnly = true;
			this->textBox43->Size = System::Drawing::Size(112, 26);
			this->textBox43->TabIndex = 16;
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label91->Location = System::Drawing::Point(33, 252);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(92, 20);
			this->label91->TabIndex = 15;
			this->label91->Text = L"Total Harga";
			// 
			// textBox44
			// 
			this->textBox44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox44->Location = System::Drawing::Point(178, 206);
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(112, 26);
			this->textBox44->TabIndex = 14;
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label92->Location = System::Drawing::Point(33, 206);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(90, 20);
			this->label92->TabIndex = 13;
			this->label92->Text = L"Jumlah Beli";
			// 
			// label93
			// 
			this->label93->AutoSize = true;
			this->label93->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label93->Location = System::Drawing::Point(33, 121);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(111, 20);
			this->label93->TabIndex = 11;
			this->label93->Text = L"Nama Dessert";
			// 
			// button45
			// 
			this->button45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button45->Location = System::Drawing::Point(309, 314);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(136, 42);
			this->button45->TabIndex = 10;
			this->button45->Text = L"Add To Chart";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &MyForm::button45_Click);
			// 
			// label94
			// 
			this->label94->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label94->AutoSize = true;
			this->label94->Font = (gcnew System::Drawing::Font(L"Fira Sans", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label94->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label94->Location = System::Drawing::Point(315, 34);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(53, 28);
			this->label94->TabIndex = 8;
			this->label94->Text = L"Kue";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(883, 498);
			this->Controls->Add(this->pnlFoods);
			this->Controls->Add(this->pnlAbout);
			this->Controls->Add(this->pnlMyChart);
			this->Controls->Add(this->pnlJus);
			this->Controls->Add(this->pnlDesserts);
			this->Controls->Add(this->pnlDrinks);
			this->Controls->Add(this->pnlKue);
			this->Controls->Add(this->pnlIce);
			this->Controls->Add(this->pnlPuding);
			this->Controls->Add(this->pnlLain2);
			this->Controls->Add(this->pnlSoft);
			this->Controls->Add(this->pnlTeh);
			this->Controls->Add(this->pnlMilk);
			this->Controls->Add(this->pnlCoffee);
			this->Controls->Add(this->pnllain1);
			this->Controls->Add(this->pnlSfd);
			this->Controls->Add(this->pnlSop);
			this->Controls->Add(this->pnlMie);
			this->Controls->Add(this->pnlNasi);
			this->Controls->Add(this->pnlChicken);
			this->Controls->Add(this->PnlTop);
			this->Controls->Add(this->pnlSide);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->pnlSide->ResumeLayout(false);
			this->pnlSide->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnmin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pnlFoods->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->pnlDrinks->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->pnlDesserts->ResumeLayout(false);
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->pnlMyChart->ResumeLayout(false);
			this->pnlMyChart->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->pnlAbout->ResumeLayout(false);
			this->pnlAbout->PerformLayout();
			this->pnlChicken->ResumeLayout(false);
			this->pnlChicken->PerformLayout();
			this->pnlNasi->ResumeLayout(false);
			this->pnlNasi->PerformLayout();
			this->pnlMie->ResumeLayout(false);
			this->pnlMie->PerformLayout();
			this->pnlSop->ResumeLayout(false);
			this->pnlSop->PerformLayout();
			this->pnlSfd->ResumeLayout(false);
			this->pnlSfd->PerformLayout();
			this->pnllain1->ResumeLayout(false);
			this->pnllain1->PerformLayout();
			this->pnlCoffee->ResumeLayout(false);
			this->pnlCoffee->PerformLayout();
			this->pnlMilk->ResumeLayout(false);
			this->pnlMilk->PerformLayout();
			this->pnlTeh->ResumeLayout(false);
			this->pnlTeh->PerformLayout();
			this->pnlJus->ResumeLayout(false);
			this->pnlJus->PerformLayout();
			this->pnlSoft->ResumeLayout(false);
			this->pnlSoft->PerformLayout();
			this->pnlLain2->ResumeLayout(false);
			this->pnlLain2->PerformLayout();
			this->pnlPuding->ResumeLayout(false);
			this->pnlPuding->PerformLayout();
			this->pnlIce->ResumeLayout(false);
			this->pnlIce->PerformLayout();
			this->pnlKue->ResumeLayout(false);
			this->pnlKue->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		bool dragging;
		Point offset;

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

		dragging = false;
		
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		pnlFoods->Visible = false;
		pnlDrinks->Visible = false;
		pnlDesserts->Visible = true;
		pnlMyChart->Visible = false;
		pnlAbout->Visible = false;
		pnlNasi->Visible = false;
		pnlMie->Visible = false;
		pnlSop->Visible = false;
		pnlSfd->Visible = false;
		pnllain1->Visible = false;
		pnlCoffee->Visible = false;
		pnlMilk->Visible = false;
		pnlTeh->Visible = false;
		pnlJus->Visible = false;
		pnlSoft->Visible = false;
		pnlLain2->Visible = false;
		pnlPuding->Visible = false;
		pnlIce->Visible = false;
		pnlKue->Visible = false;

		pnla->Height = btnDesserts->Height;
		pnla->Top = btnDesserts->Top;
	}
private: System::Void pnlFoods_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnDrinks_Click(System::Object^  sender, System::EventArgs^  e) {

	pnlFoods->Visible = false;
	pnlDrinks->Visible = true;
	pnlDesserts->Visible = false;
	pnlMyChart->Visible = false;
	pnlAbout->Visible = false;
	pnlChicken->Visible = false;
	pnlNasi->Visible = false;
	pnlMie->Visible = false;
	pnlSop->Visible = false;
	pnlSfd->Visible = false;
	pnllain1->Visible = false;
	pnlCoffee->Visible = false;
	pnlMilk->Visible = false;
	pnlTeh->Visible = false;
	pnlJus->Visible = false;
	pnlSoft->Visible = false;
	pnlLain2->Visible = false;
	pnlPuding->Visible = false;
	pnlIce->Visible = false;
	pnlKue->Visible = false;

	pnla->Height = btnDrinks->Height;
	pnla->Top = btnDrinks->Top;
	
}
private: System::Void btnFoods_Click(System::Object^  sender, System::EventArgs^  e) {
	pnlFoods->Visible = true;
	pnlDrinks->Visible = false;
	pnlDesserts->Visible = false;
	pnlMyChart->Visible = false;
	pnlAbout->Visible = false;
	pnlChicken->Visible = false;
	pnlNasi->Visible = false;
	pnlMie->Visible = false;
	pnlSop->Visible = false;
	pnlSfd->Visible = false;
	pnllain1->Visible = false;
	pnlCoffee->Visible = false;
	pnlMilk->Visible = false;
	pnlTeh->Visible = false;
	pnlJus->Visible = false;
	pnlSoft->Visible = false;
	pnlLain2->Visible = false;
	pnlPuding->Visible = false;
	pnlIce->Visible = false;
	pnlKue->Visible = false;

	pnla->Height = btnFoods->Height;
	pnla->Top = btnFoods->Top;
}
private: System::Void btnMyChart_Click(System::Object^  sender, System::EventArgs^  e) {
	pnlChicken->Visible = false;
	pnlFoods->Visible = false;
	pnlDrinks->Visible = false;
	pnlDesserts->Visible = false;
	pnlMyChart->Visible = true;
	pnlAbout->Visible = false;
	pnlChicken->Visible = false;
	pnlNasi->Visible = false;
	pnlMie->Visible = false;
	pnlSop->Visible = false;
	pnlSfd->Visible = false;
	pnllain1->Visible = false;
	pnlCoffee->Visible = false;
	pnlMilk->Visible = false;
	pnlTeh->Visible = false;
	pnlJus->Visible = false;
	pnlSoft->Visible = false;
	pnlLain2->Visible = false;
	pnlPuding->Visible = false;
	pnlIce->Visible = false;
	pnlKue->Visible = false;

	pnla->Height = btnMyChart->Height;
	pnla->Top = btnMyChart->Top;
}
private: System::Void btnAbout_Click(System::Object^  sender, System::EventArgs^  e) {
	pnlFoods->Visible = false;
	pnlDrinks->Visible = false;
	pnlDesserts->Visible = false;
	pnlMyChart->Visible = false;
	pnlAbout->Visible = true;
	pnlChicken->Visible = false;
	pnlNasi->Visible = false;
	pnlMie->Visible = false;
	pnlSop->Visible = false;
	pnlSfd->Visible = false;
	pnllain1->Visible = false;
	pnlCoffee->Visible = false;
	pnlMilk->Visible = false;
	pnlTeh->Visible = false;
	pnlJus->Visible = false;
	pnlSoft->Visible = false;
	pnlLain2->Visible = false;
	pnlPuding->Visible = false;
	pnlIce->Visible = false;
	pnlKue->Visible = false;

	pnla->Height = btnAbout->Height;
	pnla->Top = btnAbout->Top;
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	}
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {


}
private: System::Void pnlSide_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	

}
private: System::Void pnlb_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void MyForm_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			dragging = true;
			offset = Point(e->X, e->Y);

}


private: System::Void MyForm_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (dragging) {			
			Point currentScreenPos = PointToScreen (e->Location);
			Location = Point(currentScreenPos.X, currentScreenPos.Y);
		
		}
}


private: System::Void MyForm_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			dragging = false;

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	pnlChicken->Visible = true;
	pnlFoods->Visible = false;
	pnlDrinks->Visible = false;
	pnlDesserts->Visible = false;
	pnlMyChart->Visible = false;
	pnlAbout->Visible = false;
	pnlNasi->Visible = false;
	pnlMie->Visible = false;
	pnlSop->Visible = false;
	pnlSfd->Visible = false;
	pnllain1->Visible = false;
	pnlCoffee->Visible = false;
	pnlMilk->Visible = false;
	pnlTeh->Visible = false;
	pnlJus->Visible = false;
	pnlSoft->Visible = false;
	pnlLain2->Visible = false;
	pnlPuding->Visible = false;
	pnlIce->Visible = false;
	pnlKue->Visible = false;
	
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Makanan Ditambahkan Kedalam Keranjang");
	
	dataGridView1->Rows->Add(comboBox1->Text, txtharga1->Text, textBox1->Text, textBox2->Text);

}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void label22_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void label24_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->Text == "Ayam Goreng") {
		txtharga1->Text = "10000";
	}
	else if (comboBox1->Text == "Ayam Bakar") {
		txtharga1->Text = "12000";
	}
	else if (comboBox1->Text == "Ayam Geprek") {
		txtharga1->Text = "11000";
	}
	else if (comboBox1->Text == "Ayam Penyet") {
		txtharga1->Text = "10000";
	}
	else if (comboBox1->Text == "Pepes Ayam") {
		txtharga1->Text = "8000";
	}
	else {
		txtharga1->Text = "0";
	}
}
private: System::Void button13_Click_1(System::Object^  sender, System::EventArgs^  e) {
	int result1 = System::Convert::ToInt32(textBox1->Text) * System::Convert::ToInt32(txtharga1->Text);
	textBox2->Text = System::Convert::ToString(result1);
}
private: System::Void comboBox2_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox2->Text == "Nasi Goreng") {
		textBox3->Text = "12000";
	}
	else if (comboBox2->Text == "Nasi Goreng Spesial") {
		textBox3->Text = "18000";
	}
	else if (comboBox2->Text == "Nasi Bakar") {
		textBox3->Text = "8000";
	}
	else if (comboBox2->Text == "Nasi Kuning") {
		textBox3->Text = "4000";
	}
	else if (comboBox2->Text == "Nasi Uduk") {
		textBox3->Text = "4000";
	}
	else if (comboBox2->Text == "Nasi Putih") {
		textBox3->Text = "4000";
	}
	else {
		textBox3->Text = "0";
	}
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	int result2 = System::Convert::ToInt32(textBox3->Text) * System::Convert::ToInt32(textBox5->Text);
	textBox4->Text = System::Convert::ToString(result2);
}
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	pnlChicken->Visible = false;
	pnlFoods->Visible = false;
	pnlDrinks->Visible = false;
	pnlDesserts->Visible = false;
	pnlMyChart->Visible = false;
	pnlAbout->Visible = false;
	pnlNasi->Visible = true;
	pnlMie->Visible = false;
	pnlSop->Visible = false;
	pnlSfd->Visible = false;
	pnllain1->Visible = false;
	pnlCoffee->Visible = false;
	pnlMilk->Visible = false;
	pnlTeh->Visible = false;
	pnlJus->Visible = false;
	pnlSoft->Visible = false;
	pnlLain2->Visible = false;
	pnlPuding->Visible = false;
	pnlIce->Visible = false;
	pnlKue->Visible = false;
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox3->Text == "Mie Goreng") {
		textBox6->Text = "6000";
	}
	else if (comboBox3->Text == "Mie Goreng Spesial") {
		textBox6->Text = "10000";
	}
	else if (comboBox3->Text == "Mie Rebus") {
		textBox6->Text = "6000";
	}
	else if (comboBox3->Text == "Mie Rebus Spesial") {
		textBox6->Text = "10000";
	}
	else if (comboBox3->Text == "Mie Ayam Kuah") {
		textBox6->Text = "10000";
	}
	else if (comboBox3->Text == "Mie Ayam Goreng") {
		textBox6->Text = "12000";
	}
	else if (comboBox3->Text == "Kwetiau") {
		textBox6->Text = "10000";
	}
	else if (comboBox3->Text == "Kwetiau Spesial") {
		textBox6->Text = "15000";
	}
	else {
		textBox6->Text = "0";
	}
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	int result3 = System::Convert::ToInt32(textBox6->Text) * System::Convert::ToInt32(textBox8->Text);
	textBox7->Text = System::Convert::ToString(result3);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	pnlChicken->Visible = false;
	pnlFoods->Visible = false;
	pnlDrinks->Visible = false;
	pnlDesserts->Visible = false;
	pnlMyChart->Visible = false;
	pnlAbout->Visible = false;
	pnlNasi->Visible = false;
	pnlMie->Visible = true;
	pnlSop->Visible = false;
	pnlSfd->Visible = false;
	pnllain1->Visible = false;
	pnlCoffee->Visible = false;
	pnlMilk->Visible = false;
	pnlTeh->Visible = false;
	pnlJus->Visible = false;
	pnlSoft->Visible = false;
	pnlLain2->Visible = false;
	pnlPuding->Visible = false;
	pnlIce->Visible = false;
	pnlKue->Visible = false;
}
private: System::Void label39_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox4->Text == "Sop Ayam") {
		textBox9->Text = "15000";
	}
	else if (comboBox4->Text == "Sop Sapi") {
		textBox9->Text = "30000";
	}
	else if (comboBox4->Text == "Sop Kambing") {
		textBox9->Text = "20000";
	}
	else if (comboBox4->Text == "Sop Iga") {
		textBox9->Text = "25000";
	}
	else if (comboBox4->Text == "Sop Dengkil") {
		textBox9->Text = "25000";
	}
	else {
		textBox9->Text = "0";
	}
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	int result4 = System::Convert::ToInt32(textBox9->Text) * System::Convert::ToInt32(textBox10->Text);
	textBox11->Text = System::Convert::ToString(result4);
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	pnlFoods->Visible = false;
	pnlDrinks->Visible = false;
	pnlDesserts->Visible = false;
	pnlMyChart->Visible = false;
	pnlAbout->Visible = false;
	pnlNasi->Visible = false;
	pnlMie->Visible = false;
	pnlSop->Visible = true;
	pnlSfd->Visible = false;
	pnllain1->Visible = false;
	pnlCoffee->Visible = false;
	pnlMilk->Visible = false;
	pnlTeh->Visible = false;
	pnlJus->Visible = false;
	pnlSoft->Visible = false;
	pnlLain2->Visible = false;
	pnlPuding->Visible = false;
	pnlIce->Visible = false;
	pnlKue->Visible = false;

}
private: System::Void label44_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox14_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox5->Text == "Kepiting") {
		textBox12->Text = "30000";
	}
	else if (comboBox5->Text == "Cumi Cumi") {
		textBox12->Text = "35000";
	}
	else if (comboBox5->Text == "Kerang") {
		textBox12->Text = "20000";
	}
	else if (comboBox5->Text == "Ikan Bakar") {
		textBox12->Text = "25000";
	}
	else if (comboBox5->Text == "Ikan Goreng") {
		textBox12->Text = "20000";
	}
	else if (comboBox5->Text == "Udang") {
		textBox12->Text = "20000";
	}
	else {
		textBox12->Text = "0";
	}
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	int result5 = System::Convert::ToInt32(textBox12->Text) * System::Convert::ToInt32(textBox14->Text);
	textBox13->Text = System::Convert::ToString(result5);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	pnlFoods->Visible = false;
	pnlDrinks->Visible = false;
	pnlDesserts->Visible = false;
	pnlMyChart->Visible = false;
	pnlAbout->Visible = false;
	pnlNasi->Visible = false;
	pnlMie->Visible = false;
	pnlSop->Visible = false;
	pnlSfd->Visible = true;
	pnllain1->Visible = false;
	pnlCoffee->Visible = false;
	pnlMilk->Visible = false;
	pnlTeh->Visible = false;
	pnlJus->Visible = false;
	pnlSoft->Visible = false;
	pnlLain2->Visible = false;
	pnlPuding->Visible = false;
	pnlIce->Visible = false;
	pnlKue->Visible = false;
}
private: System::Void comboBox6_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox6->Text == "Baso") {
		textBox15->Text = "15000";
	}
	else if (comboBox6->Text == "Tahu Gimbal") {
		textBox15->Text = "10000";
	}
	else if (comboBox6->Text == "Gado Gado") {
		textBox15->Text = "10000";
	}
	else {
		textBox12->Text = "0";
	}
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	int result6 = System::Convert::ToInt32(textBox15->Text) * System::Convert::ToInt32(textBox17->Text);
	textBox16->Text = System::Convert::ToString(result6);
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	pnlFoods->Visible = false;
	pnlDrinks->Visible = false;
	pnlDesserts->Visible = false;
	pnlMyChart->Visible = false;
	pnlAbout->Visible = false;
	pnlNasi->Visible = false;
	pnlMie->Visible = false;
	pnlSop->Visible = false;
	pnlSfd->Visible = false;
	pnllain1->Visible = true;
	pnlCoffee->Visible = false;
	pnlMilk->Visible = false;
	pnlTeh->Visible = false;
	pnlJus->Visible = false;
	pnlSoft->Visible = false;
	pnlLain2->Visible = false;
	pnlPuding->Visible = false;
	pnlIce->Visible = false;
	pnlKue->Visible = false;
}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void pnlChicken_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	int	x = 0, y = 0;
	for (x = 0; x < dataGridView1->Rows->Count; x++) {
		y += System::Convert::ToInt32(dataGridView1->Rows[x]->Cells[3]->Value);
	}
	lblJumlah->Text = System::Convert::ToString(y);
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Makanan Ditambahkan Kedalam Keranjang");

	dataGridView1->Rows->Add(comboBox2->Text, textBox3->Text, textBox5->Text, textBox4->Text);
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Makanan Ditambahkan Kedalam Keranjang");

	dataGridView1->Rows->Add(comboBox3->Text, textBox6->Text, textBox8->Text, textBox7->Text);
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Makanan Ditambahkan Kedalam Keranjang");

	dataGridView1->Rows->Add(comboBox4->Text, textBox9->Text, textBox10->Text, textBox11->Text);
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Makanan Ditambahkan Kedalam Keranjang");

	dataGridView1->Rows->Add(comboBox6->Text, textBox15->Text, textBox17->Text, textBox16->Text);
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Makanan Ditambahkan Kedalam Keranjang");

	dataGridView1->Rows->Add(comboBox5->Text, textBox12->Text, textBox14->Text, textBox13->Text);
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	int result7 = System::Convert::ToInt32(textBox18->Text) * System::Convert::ToInt32(textBox20->Text);
	textBox19->Text = System::Convert::ToString(result7);
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Minuman Ditambahkan Kedalam Keranjang");

	dataGridView1->Rows->Add(comboBox7->Text, textBox18->Text, textBox20->Text, textBox19->Text);
}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
	int result8 = System::Convert::ToInt32(textBox21->Text) * System::Convert::ToInt32(textBox23->Text);
	textBox22->Text = System::Convert::ToString(result8);
}
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Minuman Ditambahkan Kedalam Keranjang");

	dataGridView1->Rows->Add(comboBox8->Text, textBox21->Text, textBox23->Text, textBox22->Text);
}
private: System::Void comboBox7_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox7->Text == "Vanila Latte") {
		textBox18->Text = "18000";
	}
	else if (comboBox7->Text == "Matcha") {
		textBox18->Text = "20000";
	}
	else if (comboBox7->Text == "Caramel") {
		textBox18->Text = "19000";
	}
	else if (comboBox7->Text == "Hazelnut") {
		textBox18->Text = "19000";
	}
	else if (comboBox7->Text == "Americano") {
		textBox18->Text = "20000";
	}
	else {
		textBox18->Text = "0";
	}

}
private: System::Void textBox20_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox9_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox9->Text == "Teh Anget") {
		textBox24->Text = "4000";
	}
	else if (comboBox9->Text == "Es Teh") {
		textBox24->Text = "5000";
	}
	else if (comboBox9->Text == "Lemon Tea") {
		textBox24->Text = "8000";
	}
	else if (comboBox9->Text == "Teh Tawar") {
		textBox24->Text = "4000";
	}
	else {
		textBox24->Text = "0";
	}
}
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
	int result9 = System::Convert::ToInt32(textBox24->Text) * System::Convert::ToInt32(textBox26->Text);
	textBox25->Text = System::Convert::ToString(result9);
}
private: System::Void comboBox8_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox8->Text == "Milk Shake Strawberry") {
		textBox21->Text = "17000";
	}
	else if (comboBox8->Text == "Milk Shake Vanila") {
		textBox21->Text = "17000";
	}
	else if (comboBox8->Text == "Milk Shake Coklat") {
		textBox21->Text = "17000";
	}
	else if (comboBox8->Text == "Smoothies Vanila") {
		textBox21->Text = "20000";
	}
	else if (comboBox8->Text == "Smoothies Coklat") {
		textBox21->Text = "20000";
	}
	else if (comboBox8->Text == "Smoothies Strawberry") {
		textBox21->Text = "20000";
	}
	else {
		textBox21->Text = "0";
	}
}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Minuman Ditambahkan Kedalam Keranjang");

	dataGridView1->Rows->Add(comboBox9->Text, textBox24->Text, textBox26->Text, textBox25->Text);
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	pnlFoods->Visible = false;
	pnlDrinks->Visible = false;
	pnlDesserts->Visible = false;
	pnlMyChart->Visible = false;
	pnlAbout->Visible = false;
	pnlNasi->Visible = false;
	pnlMie->Visible = false;
	pnlSop->Visible = false;
	pnlSfd->Visible = false;
	pnllain1->Visible = false;
	pnlCoffee->Visible = true;
	pnlMilk->Visible = false;
	pnlTeh->Visible = false;
	pnlJus->Visible = false;
	pnlSoft->Visible = false;
	pnlLain2->Visible = false;
	pnlPuding->Visible = false;
	pnlIce->Visible = false;
	pnlKue->Visible = false;
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	pnlFoods->Visible = false;
	pnlDrinks->Visible = false;
	pnlDesserts->Visible = false;
	pnlMyChart->Visible = false;
	pnlAbout->Visible = false;
	pnlNasi->Visible = false;
	pnlMie->Visible = false;
	pnlSop->Visible = false;
	pnlSfd->Visible = false;
	pnllain1->Visible = false;
	pnlCoffee->Visible = false;
	pnlMilk->Visible = true;
	pnlTeh->Visible = false;
	pnlJus->Visible = false;
	pnlSoft->Visible = false;
	pnlLain2->Visible = false;
	pnlPuding->Visible = false;
	pnlIce->Visible = false;
	pnlKue->Visible = false;

}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	pnlFoods->Visible = false;
	pnlDrinks->Visible = false;
	pnlDesserts->Visible = false;
	pnlMyChart->Visible = false;
	pnlAbout->Visible = false;
	pnlNasi->Visible = false;
	pnlMie->Visible = false;
	pnlSop->Visible = false;
	pnlSfd->Visible = false;
	pnllain1->Visible = false;
	pnlCoffee->Visible = false;
	pnlMilk->Visible = false;
	pnlTeh->Visible = true;
	pnlJus->Visible = false;
	pnlSoft->Visible = false;
	pnlLain2->Visible = false;
	pnlPuding->Visible = false;
	pnlIce->Visible = false;
	pnlKue->Visible = false;
}
private: System::Void comboBox10_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox10->Text == "Jus Alpukat") {
		textBox27->Text = "12000";
	}
	else if (comboBox10->Text == "Jus Kiwi") {
		textBox27->Text = "12000";
	}
	else if (comboBox10->Text == "Jus Mangga") {
		textBox27->Text = "10000";
	}
	else if (comboBox10->Text == "Jus Strawberry") {
		textBox27->Text = "10000";
	}
	else if (comboBox10->Text == "Jus Sirsak") {
		textBox27->Text = "8000";
	}
	else if (comboBox10->Text == "Jus Jeruk") {
		textBox27->Text = "8000";
	}
	else if (comboBox10->Text == "Jus Melon") {
		textBox27->Text = "8000";
	}
	else if (comboBox10->Text == "Jus Nanas") {
		textBox27->Text = "8000";
	}
	else if (comboBox10->Text == "Jus Jambu") {
		textBox27->Text = "8000";
	}
	else if (comboBox10->Text == "Jus Mix") {
		textBox27->Text = "15000";
	}
	else {
		textBox21->Text = "0";
	}
}
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
	int result10 = System::Convert::ToInt32(textBox27->Text) * System::Convert::ToInt32(textBox29->Text);
	textBox28->Text = System::Convert::ToString(result10);
}
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Minuman Ditambahkan Kedalam Keranjang");

	dataGridView1->Rows->Add(comboBox10->Text, textBox27->Text, textBox29->Text, textBox28->Text);
}
private: System::Void comboBox11_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox11->Text == "Soda Ocean") {
		textBox30->Text = "8000";
	}
	else if (comboBox11->Text == "Fanta") {
		textBox30->Text = "5000";
	}
	else if (comboBox11->Text == "Coca Cola") {
		textBox30->Text = "5000";
	}
	else if (comboBox11->Text == "Sprite") {
		textBox30->Text = "5000";
	}
	else {
		textBox30->Text = "0";
	}
}
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
	int result11 = System::Convert::ToInt32(textBox30->Text) * System::Convert::ToInt32(textBox32->Text);
	textBox31->Text = System::Convert::ToString(result11);
}
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Minuman Ditambahkan Kedalam Keranjang");

	dataGridView1->Rows->Add(comboBox11->Text, textBox30->Text, textBox32->Text, textBox31->Text);
}
private: System::Void comboBox12_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox12->Text == "Air Putih") {
		textBox33->Text = "2000";
	}
	else if (comboBox12->Text == "Kelapa Muda") {
		textBox33->Text = "7000";
	}
	else if (comboBox12->Text == "Float") {
		textBox33->Text = "3000";
	}
	else {
		textBox30->Text = "0";
	}
}
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
	int result12 = System::Convert::ToInt32(textBox33->Text) * System::Convert::ToInt32(textBox35->Text);
	textBox34->Text = System::Convert::ToString(result12);
}
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Minuman Ditambahkan Kedalam Keranjang");

	dataGridView1->Rows->Add(comboBox12->Text, textBox33->Text, textBox35->Text, textBox34->Text);
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	pnlFoods->Visible = false;
	pnlDrinks->Visible = false;
	pnlDesserts->Visible = false;
	pnlMyChart->Visible = false;
	pnlAbout->Visible = false;
	pnlNasi->Visible = false;
	pnlMie->Visible = false;
	pnlSop->Visible = false;
	pnlSfd->Visible = false;
	pnllain1->Visible = false;
	pnlCoffee->Visible = false;
	pnlMilk->Visible = false;
	pnlTeh->Visible = false;
	pnlJus->Visible = true;
	pnlSoft->Visible = false;
	pnlLain2->Visible = false;
	pnlPuding->Visible = false;
	pnlIce->Visible = false;
	pnlKue->Visible = false;
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	pnlFoods->Visible = false;
	pnlDrinks->Visible = false;
	pnlDesserts->Visible = false;
	pnlMyChart->Visible = false;
	pnlAbout->Visible = false;
	pnlNasi->Visible = false;
	pnlMie->Visible = false;
	pnlSop->Visible = false;
	pnlSfd->Visible = false;
	pnllain1->Visible = false;
	pnlCoffee->Visible = false;
	pnlMilk->Visible = false;
	pnlTeh->Visible = false;
	pnlJus->Visible = false;
	pnlSoft->Visible = true;
	pnlLain2->Visible = false;
	pnlPuding->Visible = false;
	pnlIce->Visible = false;
	pnlKue->Visible = false;
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	pnlFoods->Visible = false;
	pnlDrinks->Visible = false;
	pnlDesserts->Visible = false;
	pnlMyChart->Visible = false;
	pnlAbout->Visible = false;
	pnlNasi->Visible = false;
	pnlMie->Visible = false;
	pnlSop->Visible = false;
	pnlSfd->Visible = false;
	pnllain1->Visible = false;
	pnlCoffee->Visible = false;
	pnlMilk->Visible = false;
	pnlTeh->Visible = false;
	pnlJus->Visible = false;
	pnlSoft->Visible = false;
	pnlLain2->Visible = true;
	pnlPuding->Visible = false;
	pnlIce->Visible = false;
	pnlKue->Visible = false;
}
private: System::Void comboBox13_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox13->Text == "Puding Coklat"){
		textBox36->Text = "12000";
	}
	else if (comboBox13->Text == "Puding Jeruk") {
		textBox36->Text = "12000";
	}
	else if (comboBox13->Text == "Puding Strawberry") {
		textBox36->Text = "12000";
	}
	else if (comboBox13->Text == "Nutrijel") {
		textBox36->Text = "10000";
	}
	else if (comboBox13->Text == "Fla") {
		textBox36->Text = "3000";
	}
	else {
		textBox30->Text = "0";
	}
}
private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
	int result13 = System::Convert::ToInt32(textBox36->Text) * System::Convert::ToInt32(textBox38->Text);
	textBox37->Text = System::Convert::ToString(result13);
}
private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Dessert Ditambahkan Kedalam Keranjang");

	dataGridView1->Rows->Add(comboBox13->Text, textBox36->Text, textBox38->Text, textBox37->Text);
}
private: System::Void comboBox14_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox14->Text == "Banana Split") {
		textBox39->Text = "15000";
	}
	else if (comboBox14->Text == "Berries Cream") {
		textBox39->Text = "15000";
	}
	else if (comboBox14->Text == "Cream Sandwich") {
		textBox39->Text = "15000";
	}
	else if (comboBox14->Text == "Waffle Sundae") {
		textBox39->Text = "20000";
	}
	else {
		textBox30->Text = "0";
	}
}
private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
	int result14 = System::Convert::ToInt32(textBox39->Text) * System::Convert::ToInt32(textBox41->Text);
	textBox40->Text = System::Convert::ToString(result14);
}
private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Dessert Ditambahkan Kedalam Keranjang");

	dataGridView1->Rows->Add(comboBox14->Text, textBox39->Text, textBox41->Text, textBox40->Text);
}
private: System::Void comboBox15_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox15->Text == "Dessert Box Oreo") {
		textBox42->Text = "20000";
	}
	else if (comboBox15->Text == "Kue Coklat") {
		textBox42->Text = "10000";
	}
	else if (comboBox15->Text == "Kue Vanila") {
		textBox42->Text = "10000";
	}
	else {
		textBox30->Text = "0";
	}
}
private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
	int result15 = System::Convert::ToInt32(textBox42->Text) * System::Convert::ToInt32(textBox44->Text);
	textBox43->Text = System::Convert::ToString(result15);
}
private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Dessert Ditambahkan Kedalam Keranjang");

	dataGridView1->Rows->Add(comboBox15->Text, textBox42->Text, textBox44->Text, textBox43->Text);
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	pnlFoods->Visible = false;
	pnlDrinks->Visible = false;
	pnlDesserts->Visible = false;
	pnlMyChart->Visible = false;
	pnlAbout->Visible = false;
	pnlNasi->Visible = false;
	pnlMie->Visible = false;
	pnlSop->Visible = false;
	pnlSfd->Visible = false;
	pnllain1->Visible = false;
	pnlCoffee->Visible = false;
	pnlMilk->Visible = false;
	pnlTeh->Visible = false;
	pnlJus->Visible = false;
	pnlSoft->Visible = false;
	pnlLain2->Visible = false;
	pnlPuding->Visible = true;
	pnlIce->Visible = false;
	pnlKue->Visible = false;
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	pnlFoods->Visible = false;
	pnlDrinks->Visible = false;
	pnlDesserts->Visible = false;
	pnlMyChart->Visible = false;
	pnlAbout->Visible = false;
	pnlNasi->Visible = false;
	pnlMie->Visible = false;
	pnlSop->Visible = false;
	pnlSfd->Visible = false;
	pnllain1->Visible = false;
	pnlCoffee->Visible = false;
	pnlMilk->Visible = false;
	pnlTeh->Visible = false;
	pnlJus->Visible = false;
	pnlSoft->Visible = false;
	pnlLain2->Visible = false;
	pnlPuding->Visible = false;
	pnlIce->Visible = true;
	pnlKue->Visible = false;
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	pnlFoods->Visible = false;
	pnlDrinks->Visible = false;
	pnlDesserts->Visible = false;
	pnlMyChart->Visible = false;
	pnlAbout->Visible = false;
	pnlNasi->Visible = false;
	pnlMie->Visible = false;
	pnlSop->Visible = false;
	pnlSfd->Visible = false;
	pnllain1->Visible = false;
	pnlCoffee->Visible = false;
	pnlMilk->Visible = false;
	pnlTeh->Visible = false;
	pnlJus->Visible = false;
	pnlSoft->Visible = false;
	pnlLain2->Visible = false;
	pnlPuding->Visible = false;
	pnlIce->Visible = false;
	pnlKue->Visible = true;
}
private: System::Void button47_Click(System::Object^  sender, System::EventArgs^  e) {
	int result16 = System::Convert::ToInt32(textBoxKembali->Text) - System::Convert::ToInt32(lblJumlah->Text);
	lblKembali->Text = System::Convert::ToString(result16);

}
}
; }


