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
    /// Сводка для MyForm
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
        /// Освободить все используемые ресурсы.
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

    private: System::Windows::Forms::Label^ label1;



    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Label^ label3;




    protected:

    private:
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        void InitializeComponent(void)
        {
            System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
            System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
            this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->label3 = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
            this->SuspendLayout();
            // 
            // chart1
            // 
            chartArea1->Name = L"ChartArea1";
            chartArea1->Position->Auto = false;
            chartArea1->Position->Height = 100;
            chartArea1->Position->Width = 50;
            chartArea2->BackColor = System::Drawing::Color::White;
            chartArea2->Name = L"ChartArea2";
            chartArea2->Position->Auto = false;
            chartArea2->Position->Height = 100;
            chartArea2->Position->Width = 50;
            chartArea2->Position->X = 50;
            this->chart1->ChartAreas->Add(chartArea1);
            this->chart1->ChartAreas->Add(chartArea2);
            legend1->Name = L"Legend1";
            this->chart1->Legends->Add(legend1);
            this->chart1->Location = System::Drawing::Point(26, 8);
            this->chart1->Name = L"chart1";
            series1->ChartArea = L"ChartArea1";
            series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
            series1->Legend = L"Legend1";
            series1->Name = L"Series1";
            this->chart1->Series->Add(series1);
            this->chart1->Size = System::Drawing::Size(893, 307);
            this->chart1->TabIndex = 0;
            this->chart1->Text = L"chart1";
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(133, 336);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(151, 34);
            this->button1->TabIndex = 1;
            this->button1->Text = L"build";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
            // 
            // maskedTextBox1
            // 
            this->maskedTextBox1->Location = System::Drawing::Point(23, 344);
            this->maskedTextBox1->Mask = L"00000";
            this->maskedTextBox1->Name = L"maskedTextBox1";
            this->maskedTextBox1->Size = System::Drawing::Size(100, 20);
            this->maskedTextBox1->TabIndex = 2;
            this->maskedTextBox1->ValidatingType = System::Int32::typeid;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(23, 328);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(45, 13);
            this->label1->TabIndex = 4;
            this->label1->Text = L"Высота";
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(126, 371);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(0, 13);
            this->label4->TabIndex = 8;
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(290, 336);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(151, 34);
            this->button2->TabIndex = 9;
            this->button2->Text = L"clear";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->Location = System::Drawing::Point(457, 344);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(70, 25);
            this->label3->TabIndex = 10;
            this->label3->Text = L"";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(931, 386);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label1);
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
    private: System::Void drawGrafic(System::Windows::Forms::DataVisualization::Charting::Chart^ chart, System::String  ^chartArea, System::Collections::Generic::Dictionary <double, double>^ coordinates, System::Drawing::Color color, int width, System::String^ name, System::String^ legentText, double maxY, double maxX) {

        System::Windows::Forms::DataVisualization::Charting::Series^ series = (gcnew System::Windows::Forms::DataVisualization::Charting::Series(name));
        System::Windows::Forms::DataVisualization::Charting::Legend^ legend = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());

        chart->ChartAreas[chartArea]->AxisY->Interval = System::Math::Round(maxY / 10);
        chart->ChartAreas[chartArea]->AxisY->Minimum = 0;
        chart->ChartAreas[chartArea]->AxisY->Maximum = maxY + 10;
        chart->ChartAreas[chartArea]->AxisX->Interval = System::Math::Round(maxX / 10);
        chart->ChartAreas[chartArea]->AxisX->Minimum = 0;
        chart->ChartAreas[chartArea]->AxisX->Maximum = maxX + 10;

        legend->Name = name;
        chart->Legends->Add(legend);

        chart->Name = name;
        series->ChartArea = chartArea;
        series->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
        series->Legend = name;
        series->Name = name;
        chart->Series->Add(series);

        chart->Series[name]->Points->DataBindXY(coordinates->Keys, coordinates->Values);
        chart->Series[name]->LegendText = legentText;
        chart->Series[name]->Color = color;
        chart->Series[name]->BorderWidth = width;

    }
    private: System::Void buildSpeedToTime(double speed, int flightHeight, double weight, double k, System::Drawing::Color color) {
        using namespace System::Collections::Generic;
        Dictionary <double, double>^ f1 = gcnew Dictionary<double, double>();
        Dictionary <double, double>^ f2 = gcnew Dictionary<double, double>();
        double prevSpeed = speed;
        double currHeight = 0;
        double T = 0.2;
        bool isEnd = false;
        double t = 0;
        
        int sameSpeedCount = 0;
        int tSameSpeed = -1;

        f1->Add(t, speed);
        while (isEnd == false) {
            double currSpeed = prevSpeed + (T / (2 * weight)) * ((weight * 10 - k * prevSpeed * prevSpeed) / weight + (weight * 10 - k * (prevSpeed + T * (weight * 10 - k * prevSpeed * prevSpeed) / weight) * (prevSpeed + T * (weight * 10 - k * prevSpeed * prevSpeed) / weight)));
            double newHeight = currHeight + currSpeed * t;
            if (f1->ContainsKey(t) == false) {
                f1->Add(t, currSpeed);
            }
            if (f2->ContainsKey(t) == false) {
                f2->Add(t, newHeight);
            }
            if (t > 1) {
                if (currSpeed == prevSpeed) {
                    sameSpeedCount++;
                    if (tSameSpeed == -1) {
                        tSameSpeed = t - T;
                    }
                }
                else {
                    tSameSpeed = -1;
                }
                isEnd = sameSpeedCount > 10;

            }
            prevSpeed = currSpeed;
            currHeight = newHeight;
            t += T;
        }

        System::String^ nameS = System::String::Format(String::Concat(Convert::ToString(speed), ":", Convert::ToString(flightHeight), ":", "speed"));
        System::String^ nameH = System::String::Format(String::Concat(Convert::ToString(speed), ":", Convert::ToString(flightHeight), ":", "height"));
        this->label3->Text = System::String::Concat("Постоянная скорость в", Convert::ToString(tSameSpeed));

        this->drawGrafic(this->chart1, "ChartArea1", f1, color, 2, nameS, nameS, prevSpeed, t);
        this->drawGrafic(this->chart1, "ChartArea2", f2, color, 2, nameH, nameH, currHeight, t);
    }
    private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
        using namespace System::Drawing::Drawing2D;
        using namespace System::Windows::Forms::DataVisualization::Charting;
        double speed = 0;
        int height = Convert::ToInt32(this->maskedTextBox1->Text);
        
        double PERSON_WEIGHT = 65;
        double C = 1.33;
        double RO = 1.29;
        double R = 2;

        double K = 0.5 * 3.14159265 * R * R * C * RO;

        int red = rand() % 100 + 155;
        int green = rand() % 100 + 155;
        int blue = rand() % 100 + 155;
        System::Drawing::Color color = Color::FromArgb(red, green, blue);

        this->buildSpeedToTime(speed, height, PERSON_WEIGHT, K, color);
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
    private: System::Void maskedTextBox2_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
    }
};
}