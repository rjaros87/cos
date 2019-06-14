#pragma once
#include <cmath>
#include <vcclr.h>
#include <iostream>
namespace COS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Globalization;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
	//zmienne wewnatrz klasy
	static bool czysc=0;
	static array<System::Double,2>^tab;//tabica potrzebna do przechowania zmiennych
	static Bitmap^ bmp1 = gcnew Bitmap(650,650); //tworzy obrazek bitmap o wymiarach (x,y)
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
	private: System::Windows::Forms::PageSetupDialog^  pageSetupDialog1;
	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Windows::Forms::ToolStripMenuItem^  ustawieniaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripButton^  Ustawienia;
	private: System::Windows::Forms::CheckBox^  cbCwiartka;
	private: System::Windows::Forms::CheckBox^  cbGray;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::MaskedTextBox^  tbPowierzchniaY;
	private: System::Windows::Forms::ComboBox^  cbAmper;


	public: 
		static System::Int32 ROZMIAR=0;

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TextBox^  tbLog;

	private: System::Windows::Forms::ToolStripMenuItem^  plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  btOtworzMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  btZapiszMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  btDrukujMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  btPreDrukujMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  btWyjdzMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  btAboutMenu;







	private: System::Windows::Forms::ToolStripButton^  btOtworz;
	private: System::Windows::Forms::ToolStripButton^  btZapisz;
	private: System::Windows::Forms::ToolStripButton^  btDrukuj;
	private: System::Windows::Forms::ToolStripButton^  btPreDrukuj;
	private: System::Windows::Forms::ToolStripButton^  btAbout;
	private: System::Windows::Forms::ToolStripButton^  btWyjdz;






	private: System::Windows::Forms::Button^  btOblicz;

	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::MaskedTextBox^  tbPl;

	private: System::Windows::Forms::MaskedTextBox^  tbPowierzchniaX;



	private: System::Windows::Forms::MaskedTextBox^  tbStyczna;


	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;


	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::NumericUpDown^  nrWielomian;

	private: System::Windows::Forms::CheckBox^  cbData;
	private: System::Windows::Forms::CheckBox^  cbMoc;



	private: System::Windows::Forms::CheckBox^  cbWyniki;
	private: System::Windows::Forms::CheckBox^  cbSiatka;
	private: System::Windows::Forms::CheckBox^  cbNazwa;




	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  tbNazwa;

	private: System::Windows::Forms::CheckBox^  cbWynikiP;


	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btOtworzMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btZapiszMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btDrukujMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btPreDrukujMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ustawieniaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btWyjdzMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btAboutMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->btOtworz = (gcnew System::Windows::Forms::ToolStripButton());
			this->btZapisz = (gcnew System::Windows::Forms::ToolStripButton());
			this->btDrukuj = (gcnew System::Windows::Forms::ToolStripButton());
			this->btPreDrukuj = (gcnew System::Windows::Forms::ToolStripButton());
			this->Ustawienia = (gcnew System::Windows::Forms::ToolStripButton());
			this->btAbout = (gcnew System::Windows::Forms::ToolStripButton());
			this->btWyjdz = (gcnew System::Windows::Forms::ToolStripButton());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->cbAmper = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbPowierzchniaY = (gcnew System::Windows::Forms::MaskedTextBox());
			this->tbStyczna = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->nrWielomian = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbPl = (gcnew System::Windows::Forms::MaskedTextBox());
			this->tbPowierzchniaX = (gcnew System::Windows::Forms::MaskedTextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->cbCwiartka = (gcnew System::Windows::Forms::CheckBox());
			this->cbData = (gcnew System::Windows::Forms::CheckBox());
			this->cbMoc = (gcnew System::Windows::Forms::CheckBox());
			this->cbWyniki = (gcnew System::Windows::Forms::CheckBox());
			this->cbSiatka = (gcnew System::Windows::Forms::CheckBox());
			this->cbNazwa = (gcnew System::Windows::Forms::CheckBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tbNazwa = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->cbGray = (gcnew System::Windows::Forms::CheckBox());
			this->cbWynikiP = (gcnew System::Windows::Forms::CheckBox());
			this->tbLog = (gcnew System::Windows::Forms::TextBox());
			this->btOblicz = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->pageSetupDialog1 = (gcnew System::Windows::Forms::PageSetupDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nrWielomian))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->plikToolStripMenuItem, 
				this->btAboutMenu});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1008, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {this->btOtworzMenu, 
				this->btZapiszMenu, this->btDrukujMenu, this->btPreDrukujMenu, this->ustawieniaToolStripMenuItem, this->btWyjdzMenu});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// btOtworzMenu
			// 
			this->btOtworzMenu->Name = L"btOtworzMenu";
			this->btOtworzMenu->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->btOtworzMenu->Size = System::Drawing::Size(221, 22);
			this->btOtworzMenu->Text = L"Otwórz";
			this->btOtworzMenu->Click += gcnew System::EventHandler(this, &Form1::btOtworzMenu_Click);
			// 
			// btZapiszMenu
			// 
			this->btZapiszMenu->Name = L"btZapiszMenu";
			this->btZapiszMenu->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->btZapiszMenu->Size = System::Drawing::Size(221, 22);
			this->btZapiszMenu->Text = L"Zapisz";
			this->btZapiszMenu->Click += gcnew System::EventHandler(this, &Form1::btZapiszMenu_Click);
			// 
			// btDrukujMenu
			// 
			this->btDrukujMenu->Name = L"btDrukujMenu";
			this->btDrukujMenu->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::P));
			this->btDrukujMenu->Size = System::Drawing::Size(221, 22);
			this->btDrukujMenu->Text = L"Drukuj";
			this->btDrukujMenu->Click += gcnew System::EventHandler(this, &Form1::btDrukujMenu_Click);
			// 
			// btPreDrukujMenu
			// 
			this->btPreDrukujMenu->Name = L"btPreDrukujMenu";
			this->btPreDrukujMenu->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::U));
			this->btPreDrukujMenu->Size = System::Drawing::Size(221, 22);
			this->btPreDrukujMenu->Text = L"Podgląd wydruku";
			this->btPreDrukujMenu->Click += gcnew System::EventHandler(this, &Form1::btPreDrukujMenu_Click);
			// 
			// ustawieniaToolStripMenuItem
			// 
			this->ustawieniaToolStripMenuItem->Name = L"ustawieniaToolStripMenuItem";
			this->ustawieniaToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::T));
			this->ustawieniaToolStripMenuItem->Size = System::Drawing::Size(221, 22);
			this->ustawieniaToolStripMenuItem->Text = L"Ustawienia wydruku";
			this->ustawieniaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ustawieniaToolStripMenuItem_Click);
			// 
			// btWyjdzMenu
			// 
			this->btWyjdzMenu->Name = L"btWyjdzMenu";
			this->btWyjdzMenu->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::W));
			this->btWyjdzMenu->Size = System::Drawing::Size(221, 22);
			this->btWyjdzMenu->Text = L"Wyjdź";
			this->btWyjdzMenu->Click += gcnew System::EventHandler(this, &Form1::wyjścieToolStripMenuItem_Click);
			// 
			// btAboutMenu
			// 
			this->btAboutMenu->Name = L"btAboutMenu";
			this->btAboutMenu->Size = System::Drawing::Size(86, 20);
			this->btAboutMenu->Text = L"O programie";
			this->btAboutMenu->Click += gcnew System::EventHandler(this, &Form1::oProgramieToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->btOtworz, this->btZapisz, 
				this->btDrukuj, this->btPreDrukuj, this->Ustawienia, this->btAbout, this->btWyjdz});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1008, 25);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// btOtworz
			// 
			this->btOtworz->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btOtworz->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btOtworz.Image")));
			this->btOtworz->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btOtworz->Name = L"btOtworz";
			this->btOtworz->Size = System::Drawing::Size(23, 22);
			this->btOtworz->Text = L"Otwórz";
			this->btOtworz->Click += gcnew System::EventHandler(this, &Form1::btOtworz_Click);
			// 
			// btZapisz
			// 
			this->btZapisz->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btZapisz->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btZapisz.Image")));
			this->btZapisz->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btZapisz->Name = L"btZapisz";
			this->btZapisz->Size = System::Drawing::Size(23, 22);
			this->btZapisz->Text = L"Zapisz";
			this->btZapisz->Click += gcnew System::EventHandler(this, &Form1::toolStripButton2_Click);
			// 
			// btDrukuj
			// 
			this->btDrukuj->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btDrukuj->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btDrukuj.Image")));
			this->btDrukuj->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btDrukuj->Name = L"btDrukuj";
			this->btDrukuj->Size = System::Drawing::Size(23, 22);
			this->btDrukuj->Text = L"Drukuj";
			this->btDrukuj->Click += gcnew System::EventHandler(this, &Form1::btDrukuj_Click);
			// 
			// btPreDrukuj
			// 
			this->btPreDrukuj->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btPreDrukuj->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btPreDrukuj.Image")));
			this->btPreDrukuj->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btPreDrukuj->Name = L"btPreDrukuj";
			this->btPreDrukuj->Size = System::Drawing::Size(23, 22);
			this->btPreDrukuj->Text = L"Podgląd wydruku";
			this->btPreDrukuj->Click += gcnew System::EventHandler(this, &Form1::btPreDrukuj_Click);
			// 
			// Ustawienia
			// 
			this->Ustawienia->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->Ustawienia->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Ustawienia.Image")));
			this->Ustawienia->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Ustawienia->Name = L"Ustawienia";
			this->Ustawienia->Size = System::Drawing::Size(23, 22);
			this->Ustawienia->Text = L"Ustawienia wydruku";
			this->Ustawienia->Click += gcnew System::EventHandler(this, &Form1::Ustawienia_Click);
			// 
			// btAbout
			// 
			this->btAbout->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btAbout->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btAbout.Image")));
			this->btAbout->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btAbout->Name = L"btAbout";
			this->btAbout->Size = System::Drawing::Size(23, 22);
			this->btAbout->Text = L"Autor";
			this->btAbout->Click += gcnew System::EventHandler(this, &Form1::toolStripButton5_Click);
			// 
			// btWyjdz
			// 
			this->btWyjdz->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btWyjdz->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btWyjdz.Image")));
			this->btWyjdz->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btWyjdz->Name = L"btWyjdz";
			this->btWyjdz->Size = System::Drawing::Size(23, 22);
			this->btWyjdz->Text = L"Wyjdź";
			this->btWyjdz->Click += gcnew System::EventHandler(this, &Form1::toolStripButton6_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(346, 53);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(650, 650);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->cbAmper);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->tbPowierzchniaY);
			this->groupBox1->Controls->Add(this->tbStyczna);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->nrWielomian);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->tbPl);
			this->groupBox1->Controls->Add(this->tbPowierzchniaX);
			this->groupBox1->Location = System::Drawing::Point(12, 52);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(312, 180);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ustawienia";
			// 
			// cbAmper
			// 
			this->cbAmper->FormattingEnabled = true;
			this->cbAmper->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"A", L"mA", L"μA"});
			this->cbAmper->Location = System::Drawing::Point(190, 123);
			this->cbAmper->Name = L"cbAmper";
			this->cbAmper->Size = System::Drawing::Size(53, 21);
			this->cbAmper->TabIndex = 31;
			this->cbAmper->Text = L"μA";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 76);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(89, 13);
			this->label15->TabIndex = 30;
			this->label15->Text = L"Szerokość próbki";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 102);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 13);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Długość próbki";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(249, 102);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 28;
			this->label5->Text = L"[ mm ]";
			// 
			// tbPowierzchniaY
			// 
			this->tbPowierzchniaY->Location = System::Drawing::Point(190, 99);
			this->tbPowierzchniaY->Name = L"tbPowierzchniaY";
			this->tbPowierzchniaY->Size = System::Drawing::Size(53, 20);
			this->tbPowierzchniaY->TabIndex = 27;
			this->tbPowierzchniaY->Text = L"2";
			// 
			// tbStyczna
			// 
			this->tbStyczna->Location = System::Drawing::Point(190, 150);
			this->tbStyczna->Name = L"tbStyczna";
			this->tbStyczna->Size = System::Drawing::Size(53, 20);
			this->tbStyczna->TabIndex = 26;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label13->Location = System::Drawing::Point(129, 160);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(17, 9);
			this->label13->TabIndex = 25;
			this->label13->Text = L"OC";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 153);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(128, 13);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Podaj V dla Rs gdzie V>V";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 127);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(82, 13);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Przejście z A do";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(249, 76);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"[ mm ]";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label10->Location = System::Drawing::Point(293, 48);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(9, 9);
			this->label10->TabIndex = 20;
			this->label10->Text = L"2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(249, 50);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"[ µW/cm   ]";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(74, 58);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(9, 9);
			this->label4->TabIndex = 7;
			this->label4->Text = L"L";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Moc światła P";
			// 
			// nrWielomian
			// 
			this->nrWielomian->Location = System::Drawing::Point(190, 21);
			this->nrWielomian->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			this->nrWielomian->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {3, 0, 0, 0});
			this->nrWielomian->Name = L"nrWielomian";
			this->nrWielomian->Size = System::Drawing::Size(53, 20);
			this->nrWielomian->TabIndex = 5;
			this->nrWielomian->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {3, 0, 0, 0});
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Stopień wielomianu";
			// 
			// tbPl
			// 
			this->tbPl->Location = System::Drawing::Point(190, 47);
			this->tbPl->Name = L"tbPl";
			this->tbPl->Size = System::Drawing::Size(53, 20);
			this->tbPl->TabIndex = 3;
			this->tbPl->Text = L"1315";
			// 
			// tbPowierzchniaX
			// 
			this->tbPowierzchniaX->Location = System::Drawing::Point(190, 73);
			this->tbPowierzchniaX->Name = L"tbPowierzchniaX";
			this->tbPowierzchniaX->Size = System::Drawing::Size(53, 20);
			this->tbPowierzchniaX->TabIndex = 1;
			this->tbPowierzchniaX->Text = L"6,25";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->cbCwiartka);
			this->groupBox2->Controls->Add(this->cbData);
			this->groupBox2->Controls->Add(this->cbMoc);
			this->groupBox2->Controls->Add(this->cbWyniki);
			this->groupBox2->Controls->Add(this->cbSiatka);
			this->groupBox2->Controls->Add(this->cbNazwa);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->tbNazwa);
			this->groupBox2->Location = System::Drawing::Point(12, 238);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(312, 192);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Opcje wykresu";
			// 
			// cbCwiartka
			// 
			this->cbCwiartka->AutoSize = true;
			this->cbCwiartka->Location = System::Drawing::Point(6, 169);
			this->cbCwiartka->Name = L"cbCwiartka";
			this->cbCwiartka->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->cbCwiartka->Size = System::Drawing::Size(185, 17);
			this->cbCwiartka->TabIndex = 39;
			this->cbCwiartka->Text = L"Aproksymacja w IV ćwiartce u.w  ";
			this->cbCwiartka->UseVisualStyleBackColor = true;
			// 
			// cbData
			// 
			this->cbData->AutoSize = true;
			this->cbData->Location = System::Drawing::Point(142, 144);
			this->cbData->Name = L"cbData";
			this->cbData->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->cbData->Size = System::Drawing::Size(49, 17);
			this->cbData->TabIndex = 38;
			this->cbData->Text = L"Data";
			this->cbData->UseVisualStyleBackColor = true;
			// 
			// cbMoc
			// 
			this->cbMoc->AutoSize = true;
			this->cbMoc->Location = System::Drawing::Point(86, 75);
			this->cbMoc->Name = L"cbMoc";
			this->cbMoc->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->cbMoc->Size = System::Drawing::Size(105, 17);
			this->cbMoc->TabIndex = 37;
			this->cbMoc->Text = L"Maksimum Mocy";
			this->cbMoc->UseVisualStyleBackColor = true;
			// 
			// cbWyniki
			// 
			this->cbWyniki->AutoSize = true;
			this->cbWyniki->Location = System::Drawing::Point(133, 121);
			this->cbWyniki->Name = L"cbWyniki";
			this->cbWyniki->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->cbWyniki->Size = System::Drawing::Size(58, 17);
			this->cbWyniki->TabIndex = 35;
			this->cbWyniki->Text = L"Wyniki";
			this->cbWyniki->UseVisualStyleBackColor = true;
			// 
			// cbSiatka
			// 
			this->cbSiatka->AutoSize = true;
			this->cbSiatka->Location = System::Drawing::Point(135, 98);
			this->cbSiatka->Name = L"cbSiatka";
			this->cbSiatka->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->cbSiatka->Size = System::Drawing::Size(56, 17);
			this->cbSiatka->TabIndex = 34;
			this->cbSiatka->Text = L"Siatka";
			this->cbSiatka->UseVisualStyleBackColor = true;
			// 
			// cbNazwa
			// 
			this->cbNazwa->AutoSize = true;
			this->cbNazwa->Location = System::Drawing::Point(132, 51);
			this->cbNazwa->Name = L"cbNazwa";
			this->cbNazwa->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->cbNazwa->Size = System::Drawing::Size(59, 17);
			this->cbNazwa->TabIndex = 33;
			this->cbNazwa->Text = L"Nazwa";
			this->cbNazwa->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->cbNazwa->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(20, 28);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(72, 13);
			this->label11->TabIndex = 31;
			this->label11->Text = L"Nazwa próbki";
			// 
			// tbNazwa
			// 
			this->tbNazwa->Location = System::Drawing::Point(109, 25);
			this->tbNazwa->Name = L"tbNazwa";
			this->tbNazwa->Size = System::Drawing::Size(134, 20);
			this->tbNazwa->TabIndex = 32;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->cbGray);
			this->groupBox3->Controls->Add(this->cbWynikiP);
			this->groupBox3->Location = System::Drawing::Point(15, 436);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(312, 65);
			this->groupBox3->TabIndex = 0;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Dodatkowe opcje";
			// 
			// cbGray
			// 
			this->cbGray->AutoSize = true;
			this->cbGray->Location = System::Drawing::Point(34, 42);
			this->cbGray->Name = L"cbGray";
			this->cbGray->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->cbGray->Size = System::Drawing::Size(157, 17);
			this->cbGray->TabIndex = 2;
			this->cbGray->Text = L"Drukowane w skali szarosci";
			this->cbGray->UseVisualStyleBackColor = true;
			// 
			// cbWynikiP
			// 
			this->cbWynikiP->AutoSize = true;
			this->cbWynikiP->Location = System::Drawing::Point(36, 19);
			this->cbWynikiP->Name = L"cbWynikiP";
			this->cbWynikiP->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->cbWynikiP->Size = System::Drawing::Size(155, 17);
			this->cbWynikiP->TabIndex = 1;
			this->cbWynikiP->Text = L"Wyniki do pliku przy zapisie";
			this->cbWynikiP->UseVisualStyleBackColor = true;
			// 
			// tbLog
			// 
			this->tbLog->BackColor = System::Drawing::Color::White;
			this->tbLog->Font = (gcnew System::Drawing::Font(L"Courier New", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->tbLog->Location = System::Drawing::Point(12, 552);
			this->tbLog->Multiline = true;
			this->tbLog->Name = L"tbLog";
			this->tbLog->ReadOnly = true;
			this->tbLog->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tbLog->Size = System::Drawing::Size(312, 150);
			this->tbLog->TabIndex = 0;
			// 
			// btOblicz
			// 
			this->btOblicz->Enabled = false;
			this->btOblicz->Location = System::Drawing::Point(121, 507);
			this->btOblicz->Name = L"btOblicz";
			this->btOblicz->Size = System::Drawing::Size(84, 27);
			this->btOblicz->TabIndex = 4;
			this->btOblicz->Text = L"Oblicz i rysuj";
			this->btOblicz->UseVisualStyleBackColor = true;
			this->btOblicz->Click += gcnew System::EventHandler(this, &Form1::btOblicz_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(32, 514);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Wczytaj dane!";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(12, 536);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(25, 13);
			this->label14->TabIndex = 6;
			this->label14->Text = L"Log";
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Form1::printDocument1_PrintPage);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1008, 712);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btOblicz);
			this->Controls->Add(this->tbLog);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Charakterystyki prądowo-napięciowe ogniw słonecznych";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nrWielomian))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}	
#pragma endregion
	private: void Autor(){
		MessageBox::Show("Radosław Jaros\r\n email:jaros_radek@op.pl\r\n © 2010 - 2011","Informacje",MessageBoxButtons::OK,MessageBoxIcon::Information);
	}
	private: System::Void wyjścieToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
	}
	private: System::Void oProgramieToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Autor();
	}

	private: System::Void toolStripButton6_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
	}
	private: System::Void toolStripButton2_Click(System::Object^  sender, System::EventArgs^  e) {
		Zapisz();		 
	}
	private: System::Void toolStripButton5_Click(System::Object^  sender, System::EventArgs^  e) {
			 Autor();
	}
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		toolTip1->SetToolTip(cbNazwa,"Wyświetl tytuł na wykresie");
		toolTip1->SetToolTip(cbSiatka,"Wyświetl pomocniczą siatkę na wykresie");
		toolTip1->SetToolTip(cbWyniki,"Wyświetl parametry ogniwa na wykresie");
		toolTip1->SetToolTip(cbWynikiP,"Zapisz parametry ogniwa do pliku tekstowego");
		toolTip1->SetToolTip(cbData,"Wyświetl datę na wykresie");
		toolTip1->SetToolTip(cbMoc,"Wyświetl maksymalną moc na wykresie");
		toolTip1->SetToolTip(btOblicz,"Generuj (odśwież) wykres z wynikami");
		toolTip1->SetToolTip(cbAmper,"Wybierz jednostkę natężenia");
		toolTip1->SetToolTip(tbPl,"Moc padającego świtała w [µW/cm2]");

		openFileDialog1->InitialDirectory = "c:\\";
	}
	private: void Open(){
	  
	  tab= gcnew array<System::Double,2>(1000,1000);
	  OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
      openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
      openFileDialog1->FilterIndex = 2;
      openFileDialog1->RestoreDirectory = false;
	  if ( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
      {
		CultureInfo^ kultura = CultureInfo::CreateSpecificCulture("en-US"); //informacje o kodowaniu (np. że "." jest separatorem)
		System::String^ liczbaString;
		System::String^ tekst;
		System::Int32 j=0,w=0;
		System::IO::StreamReader^ plik = gcnew StreamReader(openFileDialog1->FileName);
		ROZMIAR=0;
		while(liczbaString = plik->ReadLine()){
			tekst = tekst + liczbaString+","; //dodajemy na koncu linijki , żeby było łatwiej dać warunek na koniec lini (poniżej)
		}
		for(int m=0;m<(tekst->Length);m++){
			if(tekst[m] != ',' && tekst[m] != '	'){
				liczbaString = liczbaString+tekst[m];
			}else{
				if(liczbaString != "")
					tab[ROZMIAR,w]=Convert::ToDouble(liczbaString,kultura);
					w++;
					liczbaString = "";
			}		
			if(tekst[m] == ','){
				ROZMIAR++;
				w=0;
			}
	
		}
			//Po wczytaniu danych wlaczamy przycisk
			label1->Visible = false;
			btOblicz->Enabled = true;
	  }
	}
	private: void Zapisz(){
 		if(saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK){
			bmp1->Save(saveFileDialog1->FileName+".bmp",System::Drawing::Imaging::ImageFormat::Bmp);
			if(cbWynikiP->Checked != false){
				StreamWriter^ plik = gcnew StreamWriter(saveFileDialog1->FileName+".txt");
				plik->Write(tbLog->Text);
				plik->Close();
			}
		}
	}
	private: double Funkcja(array<System::Double>^ a ,double x,int m){
		double y = 0.0;
		int j;
		for(j=0;j<=m;j++){
			y+=a[j]*pow(x,j); //wyliczamy wielomian dla dopasowanych wspoczynnikow a
		}
		return y;
	}
	private: double Pochodna(array<System::Double>^ a ,double x,int m){
		double y = 0.0;
		int j,i;
		for(j=0,i=1;j<=m;j++,i++){
			y+=i*a[j]*pow(x,j); //wyliczamy wielomian dla dopasowanych wspoczynnikow a
		}
		return y;
	}
	private: double PochodnaFunkcji(array<System::Double>^ a ,double x,int m){
		double y = 0.0;
		int j,i;
		for(j=1,i=1;j<=m;j++,i++){
			y+=i*a[j]*pow(x,j-1); //wyliczamy wielomian dla dopasowanych wspoczynnikow a
		}
		return y;
	}
	private: double SkalujX(System::Double xr,System::Double xr0,System::Double xe0, System::Double rszer,System::Double eszer){
		System::Double xe = (eszer-xe0)*((xr-xr0)/(rszer-xr0))+xe0; return xe;
	};
	private: double SkalujY(System::Double yr,System::Double yr0,System::Double ye0, System::Double rwys,System::Double ewys){ 
				 System::Double ye  = (ewys-ye0)*((yr-yr0)/(rwys-yr0))+ye0; return ye;
	};
	private: System::Void btOtworz_Click(System::Object^  sender, System::EventArgs^  e) {
		Open();
	}
	private: System::Void btOtworzMenu_Click(System::Object^  sender, System::EventArgs^  e) {
		 Open();
	}
	private: System::Void btOblicz_Click(System::Object^  sender, System::EventArgs^  e) {
		while(tab[ROZMIAR,0] == 0)ROZMIAR--;//Wyliczamy rozmiar tablicy potrzebnej
		tbLog->Clear();
		//Sprawdzamy poprawność wpisanych danych
		bool poprawnosc_textBox;
		poprawnosc_textBox = true;

		array<System::String^>^ liniaPl = gcnew array<System::String^>(tbPl->Text->Length);
		liniaPl = tbPl->Lines;
		for(int i=0;i<liniaPl->Length;i++){
			if(liniaPl[i]->Contains("\.")){ 
				MessageBox::Show("Moc światła zawiera niedozwolony znak \".\" popraw na \",\"","Błąd",MessageBoxButtons::OK,MessageBoxIcon::Error); 
				poprawnosc_textBox = false;
			}
		}

		array<System::String^>^ liniaPowierzchniaX = gcnew array<System::String^>(tbPowierzchniaX->Text->Length);
		liniaPowierzchniaX = tbPowierzchniaX->Lines;
		for(int i=0;i<liniaPowierzchniaX->Length;i++){
			if(liniaPowierzchniaX[i]->Contains("\.")){ 
				MessageBox::Show("Moc światła zawiera niedozwolony znak \".\" popraw na \",\"","Błąd",MessageBoxButtons::OK,MessageBoxIcon::Error); 
				poprawnosc_textBox = false;
			}
		}

		array<System::String^>^ liniaPowierzchniaY = gcnew array<System::String^>(tbPowierzchniaY->Text->Length);
		liniaPowierzchniaY = tbPowierzchniaY->Lines;
		for(int i=0;i<liniaPowierzchniaY->Length;i++){
			if(liniaPowierzchniaY[i]->Contains("\.")){ 
				MessageBox::Show("Moc światła zawiera niedozwolony znak \".\" popraw na \",\"","Błąd",MessageBoxButtons::OK,MessageBoxIcon::Error); 
				poprawnosc_textBox = false;
			}
		}
		array<System::String^>^ liniaStyczna = gcnew array<System::String^>(tbStyczna->Text->Length);
		liniaStyczna = tbStyczna->Lines;
		for(int i=0;i<liniaStyczna->Length;i++){
			if(liniaStyczna[i]->Contains("\.")){ 
				MessageBox::Show("Moc światła zawiera niedozwolony znak \".\" popraw na \",\"","Błąd",MessageBoxButtons::OK,MessageBoxIcon::Error); 
				poprawnosc_textBox = false;
			}
		}

		System::Double suma,d,maxX,minX;
		System::Int32 i,j,n,k,m;
		System::Double maxY=0.0;
		System::Double minY=1.0;
		//Tablica z wspóczynnikami a wielomianu
		array<System::Double>^ A = gcnew array<System::Double>(100);
		//wiersze=ilosc niewiadomych wspoczlynnikow (st. wiel. +1),kolumny=ilosc ukladow rownan(st. wiel. +1))
		array<System::Double,2>^ C = gcnew array<System::Double,2>(ROZMIAR+1,ROZMIAR+1); 
		array<System::Double,2>^ Punkt = gcnew array<System::Double,2>(ROZMIAR+1,2); //W kolumnie 0 zapisujemy X w kolumnie 1 Y
		array<System::Drawing::PointF>^ FitPunkt = gcnew array<System::Drawing::PointF>(ROZMIAR+1); //W kolumnie 0 zapisujemy X w kolumnie 1 Y
		System::Double powierzchnia,valueAmper;
		System::String ^Amper;
		Amper = "µ";
		if(String::Compare(cbAmper->Text,0,"μA",0,cbAmper->Text->Length) != 0){valueAmper = 1000000;}	
		if(String::Compare(cbAmper->Text,0,"mA",0,2) == 0){valueAmper = 1000; Amper = "m";}
		if(String::Compare(cbAmper->Text,0,"A",0,2) == 0) {valueAmper = 1; Amper = "";}
	
		powierzchnia = 100/(Double::Parse(tbPowierzchniaX->Text)*Double::Parse(tbPowierzchniaY->Text));
		tbLog->AppendText("Wymiary próbki w [mm] (dł.x szer.): "+tbPowierzchniaX->Text+" x "+tbPowierzchniaY->Text+"\r\n");
		//Przepisywanie do tablicy o konkretnym rozmiarze oraz szukanie maksimum i minimum punktow
		if(poprawnosc_textBox == true){
		
		for(i=0;i<ROZMIAR+1;i++)Punkt[i,0]=tab[i,0];
		for(i=0;i<ROZMIAR+1;i++){
			Punkt[i,1]=tab[i,1]*valueAmper*powierzchnia;
			if(maxY<=Punkt[i,1]){maxY=Punkt[i,1];maxX=Punkt[i,0];}
			if(minY>=Punkt[i,1]){minY=Punkt[i,1];minX=Punkt[i,0];}
		}
		}
		//TWORZENIE WIELOMIANU
		m=Convert::ToInt32(nrWielomian->Value);
		if(m>=3 && m<=5 && poprawnosc_textBox == true){ //WARUNEK STOPNIA WIELOMIANU
//------------------------------------------------------			
/* TWORZENIE ROWNAN ALGEBRAICZNYCH */
		for(i=0;i<=m;i++){
			for(j=0;j<=m+1;j++){
				suma = 0.0;
				for(k=0;k<=ROZMIAR+1;k++){
					if(j != m+1){
						suma+=pow(Punkt[k,0],i+j);
					}else{
						suma+=Punkt[k,1]*pow(Punkt[k,0],i);
					}
				}
				C[i,j]=suma;
			//tbLog->AppendText("C["+i+","+j+"] = "+C[i,j]+"\n");
			}
		}
	//Zastosowanie eliminacji G-J
		n=m+1; //ilosc wszystkich niewiadomych
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				d=-C[j,i]/C[i,i];
				for(k=i+1;k<=n;k++)C[j,k]+=d*C[i,k];
			}
		}
		//Obliczamy wspolczynniki a0,a1,..,an na podstawie eliminacji G-J
		for(i=n-1;i>=0;i--){
			d=C[i,n];
			for(j=n-1;j>i;j--)d-=C[i,j]*A[j];
			A[i]=d/C[i,i];
		}
		//Wyswietlenie wyliczonych wspolczynnikow
		tbLog->AppendText("Wyliczone współczynniki\r\n");
		for(i=0;i<n;i++)
		tbLog->AppendText("a"+i+"= "+A[i]+"\r\n");
		tbLog->AppendText("Wyniki:\r\n");

		//WYWOLANIE FUNKCJI SKALOWANIA
		System::Double eszer,ewys,rszer,rwys,xr0,yr0,xe0,ye0,marginesX,marginesY,marginesGorny;
		//Wartosci poczatkowe
		marginesGorny = 10;
		marginesX = 15;
		if(cbNazwa->Checked == false && cbWyniki->Checked == false && cbData->Checked == false){
			marginesY = 35;
		}else{
			marginesY = 150;
		}
		rszer = Punkt[ROZMIAR,0];
		rwys = maxY;
		eszer = pictureBox1->Width-marginesX;
		ewys = pictureBox1->Height-marginesY;
		xr0 = Punkt[0,0];
		yr0 = Punkt[0,1];
		xe0 = 15; //miejsce w ktorym znajduje sie x0 na ekranie
		ye0 = 35; //miejsce w ktorym znajduje sie y0 na ekranie


			//Obilczenie pomocniczych punktow do narysowania dopasowanej funkcji
		for(i=0;i<ROZMIAR+1;i++){
			FitPunkt[i].X = SkalujX(Punkt[i,0],xr0,xe0,rszer,eszer);
			suma = 0.0;
			for(j=0;j<=m;j++){
				suma+=A[j]*pow(Punkt[i,0],j); //wyliczamy wielomian dla dopasowanych wspoczynnikow a
			}
			FitPunkt[i].Y = pictureBox1->Height-SkalujY(suma,yr0,ye0,rwys,ewys)-marginesY+marginesGorny;
		}

		//Wyliczenie polozen maksymalnej mocy
		System::Double Isc = A[0];
		System::Double Voc;
		//Wyznaczanie metoda bisekcji Vp
		System::Double a,b,c,eps;
		//Przedzialy i blad
		//tbLog->AppendText("\r\n Minimum = "+minY+"\r\n Maksimum = "+maxY+"\r\n");
		a = minX;
		b = maxX;
		eps = 0.0000000001;
		bool mzerowe = true;
		if(Funkcja(A,a,m)*Funkcja(A,b,m)>=0){  //w Funkcja(A,0,m) sprawdzam specjalnie dla 0 bo jeśli tam nie przechodzi przez zero to nie musimy szukać niczego
			tbLog->AppendText("Nie ma miejsca zerowego w badanym przedziale\r\n");
			//tbLog->AppendText("Wartosc F="+(Funkcja(A,a,m)*Funkcja(A,b,m))+"\r\n");
			mzerowe = false;
		}else{
			while (b-a > eps){
				c = (a+b)/2;
				if (Funkcja(A,a,m)*Funkcja(A,c,m)<0){
					b = c;
				}
				else{
					a = c;
				}
			}
			Voc = c;
			//Jesli szukamy dopasowania w 4 cwiartce to beda tam dokladniejsze dane
			if(cbCwiartka->Checked != true){
				tbLog->AppendText("Voc = "+Voc+" [V]\r\n");
				tbLog->AppendText("Isc = "+fabs(Isc)+" [µA/cm2]\r\n");
			}
			mzerowe = true;
		}

		//------------------- CWIARTKA IV (Aproksymacja)
		array<System::Drawing::PointF>^ FitPunkt_IV; //W kolumnie 0 zapisujemy X w kolumnie 1 Y
		array<System::Double>^ A_IV = gcnew array<System::Double>(100);
		//wiersze=ilosc niewiadomych wspoczlynnikow (st. wiel. +1),kolumny=ilosc ukladow rownan(st. wiel. +1))
		array<System::Double,2>^ C_IV = gcnew array<System::Double,2>(ROZMIAR+1,ROZMIAR+1); 
		array<System::Double,2>^ Punkt_IV = gcnew array<System::Double,2>(ROZMIAR+2,2); //W kolumnie 0 zapisujemy X w kolumnie 1 Y
		int ROZMIAR_IV=0;
		bool punktyIV = false;
		double maxIV = Voc+0.5;
		if(cbCwiartka->Checked == true){
		//Przepisywanie do tablicy o konkretnym rozmiarze oraz szukanie maksimum i minimum punktow
			
			if(poprawnosc_textBox == true){
				int k=0;
				for(i=0;i<ROZMIAR+1;i++){
					if(tab[i,0]>=-0.1 && tab[i,0]<=Voc+0.1){
						Punkt_IV[k,0]=tab[i,0];
						Punkt_IV[k,1]=tab[i,1]*valueAmper*powierzchnia;
						k++;
						punktyIV = true;
					}
				}
				ROZMIAR_IV=k;
				FitPunkt_IV = gcnew array<System::Drawing::PointF>(ROZMIAR_IV);
			}
			/* TWORZENIE ROWNAN ALGEBRAICZNYCH 
	Wyprowadzenie układu równań Aproksymacja-RJ.pdf->(1)*/
		for(i=0;i<=m;i++){
			for(j=0;j<=m+1;j++){
				suma = 0.0;
				for(k=0;k<ROZMIAR_IV;k++){
					if(j != m+1){suma+=pow(Punkt_IV[k,0],i+j);}else{suma+=Punkt_IV[k,1]*pow(Punkt_IV[k,0],i);}
				}
				C_IV[i,j]=suma;
			//tbLog->AppendText("C["+i+","+j+"] = "+C[i,j]+"\n");
			}
		}
	//Zastosowanie eliminacji G-J Aproksymacja-RJ.pdf->(2)
		n=m+1;//ilosc wszystkich niewiadomych
		d=0; 
		for(i=0;i<n;i++){
			//if(fabs(C[i,i])<MIN) return false; //Sprawdzamy czy przypadkiem wartosc przez ktora dzielimy nie wynosi 0
			for(j=i+1;j<n;j++){
				d=-C_IV[j,i]/C_IV[i,i];
				for(k=i+1;k<=n;k++)C_IV[j,k]+=d*C_IV[i,k];
			}
		}
		//Obliczamy wspolczynniki a0,a1,..,an na podstawie eliminacji G-J
		for(i=n-1;i>=0;i--){
			//if(fabs(C[i,i])<MIN) return false; //Sprawdzamy czy przypadkiem wartosc przez ktora dzielimy nie wynosi 0
			d=C_IV[i,n];
			for(j=n-1;j>i;j--)d-=C_IV[i,j]*A_IV[j];
			A_IV[i]=d/C_IV[i,i];
		}
		
		//Obilczenie pomocniczych punktow do narysowania dopasowanej funkcji
		for(i=0;i<ROZMIAR_IV;i++){
			FitPunkt_IV[i].X = SkalujX(Punkt_IV[i,0],xr0,xe0,rszer,eszer);
			suma = 0.0;
			for(j=0;j<=m;j++){
				suma+=A_IV[j]*pow(Punkt_IV[i,0],j); //wyliczamy wielomian dla dopasowanych wspoczynnikow a
			}
			FitPunkt_IV[i].Y = pictureBox1->Height-SkalujY(suma,yr0,ye0,rwys,ewys)-marginesY+marginesGorny;
		}
		tbLog->AppendText("Dla dopasowania w czwartej ćwiartce układu wsp. wynoszą odpowienio\r\n");
		for(i=0;i<m;i++){
			tbLog->AppendText("a["+i+"]="+A_IV[i]+"\r\n");
		}
		a = -0.01;
		b = maxIV;
		if(mzerowe == true){  //w Funkcja(A,0,m) sprawdzam specjalnie dla 0 bo jeśli tam nie przechodzi przez zero to nie musimy szukać niczego
			while (b-a > eps){
				c = (a+b)/2;
				if (Funkcja(A_IV,a,m)*Funkcja(A_IV,c,m)<0){
					b = c;
				}
				else{
					a = c;
				}
			}
			Voc = c;
			//Jesli szukamy dopasowania w 4 cwiartce to beda tam dokladniejsze dane
				tbLog->AppendText("Voc = "+Voc+" [V]\r\n");
				tbLog->AppendText("Isc = "+fabs(Isc)+" ["+Amper+"A/cm2]\r\n");
		}
		
		}
		//-------------------------------
		
		//Liczymy pochodna P'max
		System::Double Ip,Vp;
		a = -0.01;
		b = maxIV;
		double iloczyn;
		//Szukamy miejsca zerowego dla pochodnej
		if(Pochodna(A,a,m)*Pochodna(A,b,m)>=0){ //Analogicznie do poprzedniego
			tbLog->AppendText("Nie ma miejsca zerowego w badanym przedziale asd\r\n");
			tbLog->AppendText("Wartosc F="+(Pochodna(A,a,m)*Pochodna(A,b,m))+"\r\n");
		}else{
			while (b-a > eps){
				c = (a+b)/2;
				if(cbCwiartka->Checked == true){iloczyn = Pochodna(A_IV,a,m)*Pochodna(A_IV,c,m);}else{iloczyn = Pochodna(A,a,m)*Pochodna(A,c,m);}
				if (iloczyn<0){
					b = c;
				}
				else{
					a = c;
				}
			}
			Vp = c;
			tbLog->AppendText("Vp = "+Vp+" [V]\r\n");
		}
		System::Double FF,eta,Rs,Pl,Pmax,V0,Rsh2,Rs2;
		if(mzerowe == true){
			if(cbCwiartka->Checked == true){
				Ip = Funkcja(A_IV,Vp,m);
			}else{
				Ip = Funkcja(A,Vp,m);
			}
			tbLog->AppendText("Ip = "+fabs(Ip)+ " ["+Amper+"A/cm2]");
			//Wyliczamy FF, eta,Rs i Rsh
			FF = (Vp*Ip)/(Isc*Voc);
			tbLog->AppendText("\r\nFF = "+fabs(FF));
			Pl = Convert::ToDouble(tbPl->Text);
			if(valueAmper == 1) Pl = Pl/1000000; //gdy jest opcja A
			if(valueAmper == 1000) Pl = Pl/1000; //gdy jest opcja mA
			eta = (Isc * Voc * FF * 100)/Pl;
			tbLog->AppendText("\r\neta = "+fabs(eta)+" %");

			if(cbCwiartka->Checked == true){Rsh2 = A_IV[1];}else{Rsh2 = A[1];}
			Rsh2 = pow(Rsh2,-1)*valueAmper;
			tbLog->AppendText("\r\nRsh = "+fabs(Rsh2).ToString("0.0###e+00")+" [Ohm]");
			if(tbStyczna->Text != ""){
				V0=Convert::ToDouble(tbStyczna->Text);
				Rs=pow(PochodnaFunkcji(A,V0,m),-1)*valueAmper;
				tbLog->AppendText("\r\nRs = "+Rs.ToString("0.0###e+00")+" [Ohm]\r\n"); //liczbe wprowadzamy z 1,5 z przecinkiem
			}else{
				tbLog->AppendText("\r\nRs = nie podano V w którym ma szukac stycznej\r\n");
			}
			Pmax = Voc*Isc*FF;
			Pmax = fabs(Pmax);
			tbLog->AppendText("Pmax = "+Pmax+" ["+Amper+"W]\r\n");
		}

		//RYSOWANIE WYKRESU
		Graphics^ ekran = pictureBox1->CreateGraphics();
		Graphics^ gl = Graphics::FromImage(bmp1);
		gl->Clear(System::Drawing::Color::White);
		Pen^ pioro = gcnew Pen(System::Drawing::Color::Black);
		Pen^ pioro_siatka = gcnew Pen(System::Drawing::Color::LightGray);
		pioro_siatka->DashStyle = System::Drawing::Drawing2D::DashStyle::Dash;
		Pen^ pioro_Ip = gcnew Pen(System::Drawing::Color::Green);
		Pen^ pioro1 = gcnew Pen(System::Drawing::Color::Red);
		Pen^ pioro2 = gcnew Pen(System::Drawing::Color::Black);
		Pen^ pioro3 = gcnew Pen(System::Drawing::Color::Blue);
		pioro_Ip->Width=2;
		pioro1->Width=2;
		pioro3->Width=2;
		pioro->EndCap = System::Drawing::Drawing2D::LineCap::ArrowAnchor;
		pioro->Width=3;
		SolidBrush^ pedzel = gcnew SolidBrush(System::Drawing::Color::Black);
		System::Drawing::Font^ czcionka_duza = gcnew System::Drawing::Font(System::Drawing::FontFamily::GenericSansSerif,10,FontStyle::Bold);
		System::Drawing::Font^ czcionka = gcnew System::Drawing::Font(System::Drawing::FontFamily::GenericSansSerif,8,FontStyle::Bold);
		System::Drawing::Font^ czcionka2 = gcnew System::Drawing::Font(System::Drawing::FontFamily::GenericSansSerif,8,FontStyle::Regular);
		System::Drawing::Font^ czcionka1 = gcnew System::Drawing::Font(System::Drawing::FontFamily::GenericSansSerif,7,FontStyle::Regular);
		System::Drawing::Font^ czcionka_Ip = gcnew System::Drawing::Font(System::Drawing::FontFamily::GenericSansSerif,8,FontStyle::Bold);
		SolidBrush^ pedzel_Ip = gcnew SolidBrush(System::Drawing::Color::Green);
		//Uklad Kartezjanski
		gl->DrawLine(pioro,10,pictureBox1->Height-SkalujY(0,yr0,ye0,rwys,ewys)-marginesY+marginesGorny,pictureBox1->Width-marginesX,pictureBox1->Height-SkalujY(0,yr0,ye0,rwys,ewys)-marginesY+marginesGorny); //Os x
		gl->DrawLine(pioro,SkalujX(0,xr0,xe0,rszer,eszer),pictureBox1->Height-marginesY+5,SkalujX(0,xr0,xe0,rszer,eszer),10); //Os y
			
		//Kreski i skala na osi Xowej
		double wsp1,wsp2;
		if(Punkt[ROZMIAR,0]>3.5){
			wsp1=0.45;
		}
		else{
			wsp1 = 0.15 ;
		}
		System::Double y1;
		y1=pictureBox1->Height-SkalujY(0,yr0,ye0,rwys,ewys)-marginesY+marginesGorny+4;
		for(i=-35;i<35;i++){
			System::Double x1=SkalujX(wsp1*i,xr0,xe0,rszer,eszer);
			if(x1>marginesGorny && x1<pictureBox1->Width-marginesX-7){
				//Kreksi pomocnicze Y
				if(cbSiatka->Checked != false){
					if(x1 != SkalujX(0,xr0,xe0,rszer,eszer))
						gl->DrawLine(pioro_siatka,x1,pictureBox1->Height-marginesY+5,x1,10);
				}
				gl->DrawLine(pioro2, x1  , y1 , x1 , (int)y1-8);
				gl->DrawString((wsp1*i).ToString(),czcionka1,pedzel,x1+1 , y1+5);
			}
		}

		//Sprawdzenie która liczba jest większa (czy z zakresu dolenego czy górnego)
		//int check;
		//if(fabs(Punkt[0,1])>Punkt[ROZMIAR,1])check=0; else check=ROZMIAR;
		double w=0;
		wsp2=(fabs(minY)+maxY)/15;
		//if(fabs(maxY) > fabs(minY)) w = maxY; else w = minY;
		//for(double i=0.000000001;i<=1000;i*=10){
			//if(((fabs(Punkt[check,1])/i)>1 && (fabs(Punkt[check,1])/i)<10)){wsp2=i;break;}
			//if(((fabs(w)/i)>1 && (fabs(w)/i)<10)){wsp2=i;break;}
		//}
		//wsp2 = 0.45 * wsp2;tbLog->AppendText("maxY="+maxY+" minY="+minY+"\r\n");
		System::Double x1;
		x1=SkalujX(0,xr0,xe0,rszer,eszer);
		//Kreski i skala na osi Ykowej
		for(i=-50;i<50;i++){
			System::Double y1=pictureBox1->Height-SkalujY(wsp2*i,yr0,ye0,rwys,ewys)-marginesY+marginesGorny;
			if(y1<(pictureBox1->Height-marginesY+5) && y1>15){
			//Linie pomocnicze Xowe
				if(cbSiatka->Checked != false){
					if(y1 != pictureBox1->Height-SkalujY(0,yr0,ye0,rwys,ewys)-marginesY+marginesGorny)
						gl->DrawLine(pioro_siatka,10,y1,pictureBox1->Width-marginesX,y1);
				}
				gl->DrawLine(pioro2, x1+4 , y1 , (int)x1-4, y1);
				if(i%2 == 0){
					if(i != 0)
					{
						if(wsp2>0.0099){
							gl->DrawString((wsp2*i).ToString("F2"),czcionka1,pedzel,x1+2 ,y1-5);
						}else{
							gl->DrawString((wsp2*i).ToString("0.0#e+00"),czcionka1,pedzel,x1+2 ,y1-5);
						}
					
					}else{
						gl->DrawString("0",czcionka1,pedzel,x1+2 ,y1-5);
					}
				}
			}
		}
		gl->DrawString("U [V]",czcionka,pedzel,pictureBox1->Width-45,pictureBox1->Height-SkalujY(0,yr0,ye0,rwys,ewys)-marginesY+marginesGorny+25);//os x
		gl->DrawString("I [("+Amper+"A/cm2]",czcionka,pedzel,SkalujX(0,xr0,xe0,rszer,eszer)+10,5);//osy
	
		//Rysowanie punktow
		for(i=0;i<ROZMIAR+1;i++){
			gl->FillEllipse(pedzel,SkalujX(Punkt[i,0],xr0,xe0,rszer,eszer),pictureBox1->Height-SkalujY(Punkt[i,1],yr0,ye0,rwys,ewys)-marginesY+marginesGorny,3,3);
		}
	
		//Rysowanie funkcji dopasowanej
		gl->DrawCurve(pioro1,FitPunkt);
		if(cbCwiartka->Checked == true && FitPunkt_IV->Length > 1){
			gl->DrawCurve(pioro3,FitPunkt_IV);
		}

		//Nazwa na wykresie
		if(cbNazwa->Checked != false){
			if(tbNazwa->Text == ""){
				gl->DrawString("Brak tytułu",czcionka_duza,pedzel,pictureBox1->Width/2-150,pictureBox1->Height - marginesY+15);
			}else{			
				gl->DrawString(tbNazwa->Text,czcionka_duza,pedzel,pictureBox1->Width/2-150,pictureBox1->Height - marginesY+15);
			}
		}

		//Wyniki na wykresie
		if(cbWyniki->Checked != false && mzerowe == true){
			gl->DrawString("Isc = "+fabs(Isc).ToString("F4")+" ["+Amper+"A/cm2]",czcionka1,pedzel,50,pictureBox1->Height - marginesY+35);
			gl->DrawString("Voc = "+Voc.ToString("F4")+" [V]",czcionka1,pedzel,50,pictureBox1->Height - marginesY+50);
			gl->DrawString("Vp = "+Vp.ToString("F4")+" [V]",czcionka1,pedzel,50,pictureBox1->Height - marginesY+65);
			gl->DrawString("Ip = "+fabs(Ip).ToString("F4")+" ["+Amper+"A/cm2]",czcionka1,pedzel,50,pictureBox1->Height - marginesY+80);
			gl->DrawString("FF = "+FF.ToString("F4"),czcionka1,pedzel,50,pictureBox1->Height - marginesY+95);

			gl->DrawString("eta = "+fabs(eta).ToString("F4")+" [%]",czcionka1,pedzel,200,pictureBox1->Height - marginesY+35);
			gl->DrawString("Pmax = "+Pmax.ToString("F4")+" ["+Amper+"W]",czcionka1,pedzel,200,pictureBox1->Height - marginesY+50);
			gl->DrawString("Rsh = "+fabs(Rsh2).ToString("0.0###e+00")+" [Ohm]",czcionka1,pedzel,200,pictureBox1->Height - marginesY+65);
			gl->DrawString("Rs = "+Rs.ToString("0.0###e+00")+" [Ohm]",czcionka1,pedzel,200,pictureBox1->Height - marginesY+80);
		}

		//Maksimum mocy
		if(cbMoc->Checked != false && mzerowe == true && Ip <= 0){
			System::Double yIp,xVp;
			yIp = pictureBox1->Height-SkalujY(Ip,yr0,ye0,rwys,ewys)-marginesY+marginesGorny;
			xVp = SkalujX(Vp,xr0,xe0,rszer,eszer);
			gl->DrawLine(pioro_Ip,SkalujX(0,xr0,xe0,rszer,eszer),yIp,xVp,(int)yIp); //Ip
			gl->DrawLine(pioro_Ip,xVp,pictureBox1->Height-SkalujY(0,yr0,ye0,rwys,ewys)-marginesY+marginesGorny,xVp,(int)yIp);
			gl->DrawString("Ip",czcionka_Ip,pedzel_Ip,SkalujX(0,xr0,xe0,rszer,eszer)-20,yIp-5);
			gl->DrawString("Vp",czcionka_Ip,pedzel_Ip,xVp-5,pictureBox1->Height-SkalujY(0,yr0,ye0,rwys,ewys)-marginesY-marginesGorny);
		}

		//Data
		if(cbData->Checked != false){
			System::DateTime czas = System::DateTime::Now;
			gl->DrawString(czas.ToString(),czcionka1,pedzel,pictureBox1->Width-150,pictureBox1->Height - marginesY+120);
		}
		pictureBox1->Image=bmp1;
//------------------------------------------------------
		}
	}

private: System::Void btZapiszMenu_Click(System::Object^  sender, System::EventArgs^  e) {
	Zapisz();
}

private: System::Void btDrukujMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			if(cbGray->Checked == true)
			{
				if ( printDocument1->PrinterSettings->SupportsColor )
				printDocument1->DefaultPageSettings->Color = false;
			}
			printDocument1->Print();
		 }
private: System::Void btPreDrukujMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			 printPreviewDialog1->Document=printDocument1;
			 printPreviewDialog1->ShowDialog();
		 }
private: System::Void ustawieniaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 pageSetupDialog1->Document=printDocument1;
			 pageSetupDialog1->ShowDialog();
		 }
private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
			 Graphics^ g = e->Graphics;
			 g->DrawImage(pictureBox1->Image,e->MarginBounds.Top,e->MarginBounds.Left);
			 if(cbGray->Checked == true)e->PageSettings->Color = false;
			 e->HasMorePages=false;
		 }
private: System::Void Ustawienia_Click(System::Object^  sender, System::EventArgs^  e) {
			 pageSetupDialog1->Document=printDocument1;
			 pageSetupDialog1->ShowDialog();
		 }
private: System::Void btPreDrukuj_Click(System::Object^  sender, System::EventArgs^  e) {
			 printPreviewDialog1->Document=printDocument1;
			 printPreviewDialog1->ShowDialog();
		 }
private: System::Void btDrukuj_Click(System::Object^  sender, System::EventArgs^  e) {
			 if ( printDocument1->PrinterSettings->SupportsColor )
				 printDocument1->DefaultPageSettings->Color = false;
			printDocument1->Print();
		 }

};
}

