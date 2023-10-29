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

        this->chart1->ChartAreas["ChartArea1"]->AxisY->Interval = 10;
        this->chart1->ChartAreas["ChartArea1"]->AxisY2->Minimum = 0;
        this->chart1->ChartAreas["ChartArea1"]->AxisY->Minimum = -max;
        this->chart1->ChartAreas["ChartArea1"]->AxisY->Maximum = max;
        this->chart1->ChartAreas["ChartArea1"]->AxisX->Interval = 10;
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
    private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
        using namespace System::Collections::Generic;
        using namespace System::Drawing::Drawing2D;
        using namespace System::Windows::Forms::DataVisualization::Charting;
        Dictionary <double, double>^ f1 = gcnew Dictionary<double, double>();

        double M = 5.98 * 1024; // kg
        double R = 6370; // km
        double G = 6.67 * pow(10, -11);
        double h = 380 * 1000; // km

        double _x = R + h;
        double _t = 1 / sqrt((G * M) / pow(_x, 3));

        double x_0 = R + h; // from keyboard
        double _v = sqrt(G * M / _x);
        double v_0 = 20000 * _v; // from keyboard

        double X = x_0 / _x;
        double y = 0;
        double v_x = 0;
        double v_y = v_0;

        bool isEnd = false;
        double timeStep = 0.2;
        double t = timeStep;
        int counter = 0;

        while (isEnd == false) {

            double a_x = (-X / (sqrt(pow((X * X + y * y), 3))));
            double a_y = (-y / (sqrt(pow((X * X + y * y), 3))));

            double v_xn = v_x + timeStep * a_x;
            double v_yn = v_y + timeStep * a_y;

            X += v_xn * t;
            y += v_yn * t;

            f1->Add(X, y);

            t += timeStep;
            v_x = v_xn;
            v_y = v_yn;
            counter++;
            if (counter > 500) {
                isEnd = true;
            }
        }

        int red = rand() % 100 + 155;
        int green = rand() % 100 + 155;
        int blue = rand() % 100 + 155;
        System::Drawing::Color color = Color::FromArgb(red, green, blue);

        drawGrafic(f1, color, 2, "name", "name", -100);
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