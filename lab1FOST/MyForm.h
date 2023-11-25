#pragma once
#include <cmath>
#include <stdlib.h>

#define PI 3.14159265

namespace lab1FOST {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// —водка дл€ MyForm
    /// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            //
            //TODO: добавьте код конструктора
            //
        }

    protected:
        /// <summary>
        /// ќсвободить все используемые ресурсы.
        /// </summary>
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
    private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::MaskedTextBox^ maskedTextBox3;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Button^ button2;

    protected:

    private:
        /// <summary>
        /// ќб€зательна€ переменна€ конструктора.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        void InitializeComponent(void)
        {
            System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
            System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
            this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
            this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->button2 = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
            this->SuspendLayout();
            // 
            // chart1
            // 
            chartArea1->Name = L"ChartArea1";
            this->chart1->ChartAreas->Add(chartArea1);
            legend1->Name = L"Legend1";
            this->chart1->Legends->Add(legend1);
            this->chart1->Location = System::Drawing::Point(0, 0);
            this->chart1->Name = L"chart1";
            series1->ChartArea = L"ChartArea1";
            series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
            series1->Legend = L"Legend1";
            series1->Name = L"Series1";
            this->chart1->Series->Add(series1);
            this->chart1->Size = System::Drawing::Size(698, 386);
            this->chart1->TabIndex = 0;
            this->chart1->Text = L"chart1";
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(358, 397);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(151, 34);
            this->button1->TabIndex = 1;
            this->button1->Text = L"button1";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
            // 
            // maskedTextBox1
            // 
            this->maskedTextBox1->Location = System::Drawing::Point(9, 405);
            this->maskedTextBox1->Mask = L"00000";
            this->maskedTextBox1->Name = L"maskedTextBox1";
            this->maskedTextBox1->Size = System::Drawing::Size(100, 20);
            this->maskedTextBox1->TabIndex = 2;
            this->maskedTextBox1->ValidatingType = System::Int32::typeid;
            // 
            // maskedTextBox2
            // 
            this->maskedTextBox2->Location = System::Drawing::Point(115, 405);
            this->maskedTextBox2->Mask = L"00000";
            this->maskedTextBox2->Name = L"maskedTextBox2";
            this->maskedTextBox2->Size = System::Drawing::Size(100, 20);
            this->maskedTextBox2->TabIndex = 3;
            this->maskedTextBox2->ValidatingType = System::Int32::typeid;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(9, 389);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(32, 13);
            this->label1->TabIndex = 4;
            this->label1->Text = L"”гол";
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(112, 389);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(55, 13);
            this->label2->TabIndex = 5;
            this->label2->Text = L"—корость";
            this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
            // 
            // maskedTextBox3
            // 
            this->maskedTextBox3->Location = System::Drawing::Point(221, 405);
            this->maskedTextBox3->Mask = L"0.0";
            this->maskedTextBox3->Name = L"maskedTextBox3";
            this->maskedTextBox3->Size = System::Drawing::Size(100, 20);
            this->maskedTextBox3->TabIndex = 6;
            this->maskedTextBox3->Text = L"0";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(221, 389);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(85, 13);
            this->label3->TabIndex = 7;
            this->label3->Text = L"—опротивление";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(112, 432);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(0, 13);
            this->label4->TabIndex = 8;
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(515, 397);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(151, 34);
            this->button2->TabIndex = 9;
            this->button2->Text = L"button2";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(698, 483);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->maskedTextBox3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->maskedTextBox2);
            this->Controls->Add(this->maskedTextBox1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->chart1);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void drawGrafic(System::Collections::Generic::Dictionary <double, double>^ coordinates, System::Drawing::Color color, int width, System::String^ name, System::String^ legentText, double max) {

        System::Windows::Forms::DataVisualization::Charting::Series^ series = (gcnew System::Windows::Forms::DataVisualization::Charting::Series(name));
        System::Windows::Forms::DataVisualization::Charting::Legend^ legend = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());

        this->chart1->ChartAreas["ChartArea1"]->AxisY->Interval = max / 10;
        this->chart1->ChartAreas["ChartArea1"]->AxisY2->Minimum = 0;
        this->chart1->ChartAreas["ChartArea1"]->AxisY->Minimum = -max;
        this->chart1->ChartAreas["ChartArea1"]->AxisY->Maximum = max;
        this->chart1->ChartAreas["ChartArea1"]->AxisX->Interval = max / 10;
        this->chart1->ChartAreas["ChartArea1"]->AxisX->Minimum = -max;
        this->chart1->ChartAreas["ChartArea1"]->AxisX2->Minimum = -max;
        this->chart1->ChartAreas["ChartArea1"]->AxisX->Maximum = max;
        this->chart1->ChartAreas["ChartArea1"]->Position->Width = 100;
        this->chart1->ChartAreas["ChartArea1"]->Position->Height = 100;

        legend->Name = name;
        this->chart1->Legends->Add(legend);

        this->chart1->Location = System::Drawing::Point(0, 0);
        this->chart1->Name = name;
        series->ChartArea = L"ChartArea1";
        series->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
        series->Legend = name;
        series->Name = name;
        this->chart1->Series->Add(series);

        this->chart1->Series[name]->Points->DataBindXY(coordinates->Keys, coordinates->Values);
        this->chart1->Series[name]->LegendText = legentText;
        this->chart1->Series[name]->Color = color;
        this->chart1->Series[name]->BorderWidth = width;

    }
    private: System::Void buildGrafic(int Z, double M) {
        using namespace System::Collections::Generic;
        using namespace System::Drawing::Drawing2D;
        using namespace System::Windows::Forms::DataVisualization::Charting;
        Dictionary <double, double>^ f1 = gcnew Dictionary<double, double>();

        // long double M = 15.9 * pow(10, -27); // H weight
        double electron = 1.6021892 * pow(10, -19);
        double k = 8987551777;

        int N = 1;

        double V_x = 0.2;
        double V_y = 0;
        double time_step = 0.001;

        double x = -15;
        double y = 2;

        f1->Add(x, y);

        while (N < 1000) {
            V_x = V_x + (2 * k * Z * electron * electron) / M * x / pow((x * x + y * y), 3 / 2) * time_step;
            V_y = V_y + (2 * k * Z * electron * electron) / M * y / pow((x * x + y * y), 3 / 2) * time_step;

            x = x + V_x * time_step;
            y = y + V_y * time_step;

            f1->Add(x, y);
            N++;
        }

        int red = rand() % 100 + 155;
        int green = rand() % 100 + 155;
        int blue = rand() % 100 + 155;
        System::Drawing::Color color = Color::FromArgb(red, green, blue);

        drawGrafic(f1, color, 2, "name", "name", 20);
    }
    private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
        using namespace System::Collections::Generic;
        using namespace System::Drawing::Drawing2D;
        using namespace System::Windows::Forms::DataVisualization::Charting;
        Dictionary <double, double>^ f1 = gcnew Dictionary<double, double>();
        Dictionary <double, double>^ f2 = gcnew Dictionary<double, double>();

        int Z = 8; // H
        long double M = 15.9 * pow(10, -27); // H weight
        double electron = 1.6021892 * pow(10, -19);
        double k = 8987551777;

        int N = 1;

        double V0x = 0.2;
        double V0y= 0;
        double x0 = -15;
        double y0 = 2;
        double time_step = 0.1;

        double VHalfX = V0x + ((2 * k * Z * electron * electron) / M) * (x0 / pow((x0 * x0 + y0 * y0), 1.5)) * time_step / 2;
        double VHalfY = V0x + ((2 * k * Z * electron * electron) / M) * (y0 / pow((x0 * x0 + y0 * y0), 1.5)) * time_step / 2;

        double x1 = -15;
        double y1 = 10;

        double V1x = 0.2;
        double V1y = 0;
        double VHalfX1 = V1x + ((2 * k * Z * electron * electron) / M) * (x1 / pow((x1 * x1 + y1 * y1), 1.5)) * time_step / 2;
        double VHalfY1 = V1y + ((2 * k * Z * electron * electron) / M) * (y1 / pow((x1 * x1 + y1 * y1), 1.5)) * time_step / 2;

        int X_MAX = 20;
        int X_MIN = -20;
        int Y_MAX = 60;
        int Y_MIN = -3;

        while (x0 < X_MAX && x0 > X_MIN && y0 > Y_MIN && y0 < Y_MAX) {
            V0x = VHalfX + ((2 * k * Z * electron * electron) / M) * (x0 / pow(x0 * x0 + y0 * y0, 1.5)) * time_step;
            V0y = VHalfY + ((2 * k * Z * electron * electron) / M) * (y0 / pow(x0 * x0 + y0 * y0, 1.5)) * time_step;
            x0 = x0 + V0x * time_step;
            VHalfY = V0y;
            y0 = y0 + V0y * time_step;
            VHalfX = V0x;

            V1x = VHalfX1 + ((2 * k * Z * electron * electron) / M) * (x1 / pow((x1 * x1 + y1 * y1), 1.5)) * time_step;
            V1y = VHalfY1 + ((2 * k * Z * electron * electron) / M) * (y1 / pow((x1 * x1 + y1 * y1), 1.5)) * time_step;
            x1 = x1 + V1x * time_step;
            y1 = y1 + V1y * time_step;
            VHalfX1 = V1x;
            VHalfY1 = V1y;

            f1->Add(x0, y0);
            f2->Add(x1, y1);
        }

        int red = rand() % 100 + 155;
        int green = rand() % 100 + 155;
        int blue = rand() % 100 + 155;
        System::Drawing::Color color = Color::FromArgb(red, green, blue);

        int red1 = rand() % 100 + 155;
        int green1 = rand() % 100 + 155;
        int blue1 = rand() % 100 + 155;
        System::Drawing::Color color1 = Color::FromArgb(red1, green1, blue1);

        drawGrafic(f1, color, 2, "first", "first", Y_MAX + 10);
        drawGrafic(f2, color1, 2, "second", "second", Y_MAX + 10);
    }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        this->chart1->Series->Clear();
        this->chart1->Legends->Clear();
        this->chart1->Name = L"";
    }
    };
}