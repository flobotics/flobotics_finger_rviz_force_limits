#include <pluginlib/class_list_macros.h>

#include "flobotics_finger_rviz_force_limits.h"



#include <flobotics_finger_messages/flobotics_finger_force_limit_values.h>

namespace flobotics_finger_force_limits_panel {


  FloboticsFingerForceLimitsPanel::FloboticsFingerForceLimitsPanel(QWidget* parent):
			rviz::Panel(parent)
	{
			_vbox = new QVBoxLayout();
			_hbox0 = new QHBoxLayout();
			_hbox1 = new QHBoxLayout();
			_hbox2 = new QHBoxLayout();
			_hbox3 = new QHBoxLayout();
			_hbox4 = new QHBoxLayout();
			_hbox5 = new QHBoxLayout();
			_hbox6 = new QHBoxLayout();
			_hbox7 = new QHBoxLayout();
			_hbox0_s = new QHBoxLayout();
			_hbox1_s = new QHBoxLayout();
			_hbox2_s = new QHBoxLayout();
			_hbox3_s = new QHBoxLayout();
			_hbox4_s = new QHBoxLayout();
			_hbox5_s = new QHBoxLayout();
			_hbox6_s = new QHBoxLayout();
			_hbox7_s = new QHBoxLayout();
			_hbox0_slider = new QSlider( Qt::Horizontal);
			_hbox0_slider->setMinimum(-1100);
			_hbox0_slider->setMaximum(1100);
			_hbox0_slider->setValue(0);

      _hbox1_slider = new QSlider( Qt::Horizontal);
      _hbox1_slider->setMinimum(-1100);
      _hbox1_slider->setMaximum(1100);
      _hbox1_slider->setValue(0);

      _hbox2_slider = new QSlider( Qt::Horizontal);
      _hbox2_slider->setMinimum(-1100);
      _hbox2_slider->setMaximum(1100);
      _hbox2_slider->setValue(0);

      _hbox3_slider = new QSlider( Qt::Horizontal);
      _hbox3_slider->setMinimum(-1100);
      _hbox3_slider->setMaximum(1100);
      _hbox3_slider->setValue(0);

      _hbox4_slider = new QSlider( Qt::Horizontal);
      _hbox4_slider->setMinimum(-1100);
      _hbox4_slider->setMaximum(1100);
      _hbox4_slider->setValue(0);

      _hbox5_slider = new QSlider( Qt::Horizontal);
      _hbox5_slider->setMinimum(-1100);
      _hbox5_slider->setMaximum(1100);
      _hbox5_slider->setValue(0);

      _hbox6_slider = new QSlider( Qt::Horizontal);
      _hbox6_slider->setMinimum(-1100);
      _hbox6_slider->setMaximum(1100);
      _hbox6_slider->setValue(0);

      _hbox7_slider = new QSlider( Qt::Horizontal);
      _hbox7_slider->setMinimum(-1100);
      _hbox7_slider->setMaximum(1100);
      _hbox7_slider->setValue(0);

			proximal_limit_min_1 = new QLineEdit();
			proximal_limit_min_1->setValidator( new QIntValidator(0, 1023, this) );
			proximal_limit_min_1->setText("10");
			proximal_limit_max_1 = new QLineEdit();
			proximal_limit_max_1->setValidator( new QIntValidator(0, 1023, this) );
			proximal_limit_max_1->setText("50");
			proximal_limit_hold_1 = new QLineEdit();
			proximal_limit_hold_1->setValidator( new QIntValidator(0, 1023, this) );
			proximal_limit_hold_1->setText("25");

			proximal_limit_min_2 = new QLineEdit();
      proximal_limit_min_2->setValidator( new QIntValidator(0, 1023, this) );
      proximal_limit_min_2->setText("10");
      proximal_limit_max_2 = new QLineEdit();
      proximal_limit_max_2->setValidator( new QIntValidator(0, 1023, this) );
      proximal_limit_max_2->setText("50");
      proximal_limit_hold_2 = new QLineEdit();
      proximal_limit_hold_2->setValidator( new QIntValidator(0, 1023, this) );
      proximal_limit_hold_2->setText("25");

      proximal_1_limit_min_1 = new QLineEdit();
      proximal_1_limit_min_1->setValidator( new QIntValidator(0, 1023, this) );
      proximal_1_limit_min_1->setText("10");
      proximal_1_limit_max_1 = new QLineEdit();
      proximal_1_limit_max_1->setValidator( new QIntValidator(0, 1023, this) );
      proximal_1_limit_max_1->setText("50");
      proximal_1_limit_hold_1 = new QLineEdit();
      proximal_1_limit_hold_1->setValidator( new QIntValidator(0, 1023, this) );
      proximal_1_limit_hold_1->setText("25");

      proximal_1_limit_min_2 = new QLineEdit();
      proximal_1_limit_min_2->setValidator( new QIntValidator(0, 1023, this) );
      proximal_1_limit_min_2->setText("10");
      proximal_1_limit_max_2 = new QLineEdit();
      proximal_1_limit_max_2->setValidator( new QIntValidator(0, 1023, this) );
      proximal_1_limit_max_2->setText("50");
      proximal_1_limit_hold_2 = new QLineEdit();
      proximal_1_limit_hold_2->setValidator( new QIntValidator(0, 1023, this) );
      proximal_1_limit_hold_2->setText("25");

      intermediate_limit_min_1 = new QLineEdit();
      intermediate_limit_min_1->setValidator( new QIntValidator(0, 1023, this) );
      intermediate_limit_min_1->setText("10");
      intermediate_limit_max_1 = new QLineEdit();
      intermediate_limit_max_1->setValidator( new QIntValidator(0, 1023, this) );
      intermediate_limit_max_1->setText("50");
      intermediate_limit_hold_1 = new QLineEdit();
      intermediate_limit_hold_1->setValidator( new QIntValidator(0, 1023, this) );
      intermediate_limit_hold_1->setText("25");

      intermediate_limit_min_2 = new QLineEdit();
      intermediate_limit_min_2->setValidator( new QIntValidator(0, 1023, this) );
      intermediate_limit_min_2->setText("10");
      intermediate_limit_max_2 = new QLineEdit();
      intermediate_limit_max_2->setValidator( new QIntValidator(0, 1023, this) );
      intermediate_limit_max_2->setText("50");
      intermediate_limit_hold_2 = new QLineEdit();
      intermediate_limit_hold_2->setValidator( new QIntValidator(0, 1023, this) );
      intermediate_limit_hold_2->setText("25");

      distal_limit_min_1 = new QLineEdit();
      distal_limit_min_1->setValidator( new QIntValidator(0, 1023, this) );
      distal_limit_min_1->setText("10");
      distal_limit_max_1 = new QLineEdit();
      distal_limit_max_1->setValidator( new QIntValidator(0, 1023, this) );
      distal_limit_max_1->setText("50");
      distal_limit_hold_1 = new QLineEdit();
      distal_limit_hold_1->setValidator( new QIntValidator(0, 1023, this) );
      distal_limit_hold_1->setText("25");

      distal_limit_min_2 = new QLineEdit();
      distal_limit_min_2->setValidator( new QIntValidator(0, 1023, this) );
      distal_limit_min_2->setText("10");
      distal_limit_max_2 = new QLineEdit();
      distal_limit_max_2->setValidator( new QIntValidator(0, 1023, this) );
      distal_limit_max_2->setText("50");
      distal_limit_hold_2 = new QLineEdit();
      distal_limit_hold_2->setValidator( new QIntValidator(0, 1023, this) );
      distal_limit_hold_2->setText("25");


			_button0 = new QPushButton(tr("Set limits"));



			//_button1->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
			//_button2->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

			_hbox0_s->addWidget(_hbox0_slider);
			_vbox->addLayout(_hbox0_s);

      _hbox1_s->addWidget(_hbox1_slider);
      _vbox->addLayout(_hbox1_s);

      _hbox2_s->addWidget(_hbox2_slider);
      _vbox->addLayout(_hbox2_s);

      _hbox3_s->addWidget(_hbox3_slider);
      _vbox->addLayout(_hbox3_s);

      _hbox4_s->addWidget(_hbox4_slider);
      _vbox->addLayout(_hbox4_s);

      _hbox5_s->addWidget(_hbox5_slider);
      _vbox->addLayout(_hbox5_s);

      _hbox6_s->addWidget(_hbox6_slider);
      _vbox->addLayout(_hbox6_s);

      _hbox7_s->addWidget(_hbox7_slider);
      _vbox->addLayout(_hbox7_s);

			_hbox0->addWidget(new QLabel("proximal_limit_min_1:"));
			_hbox0->addWidget(proximal_limit_min_1);
			_hbox0->addWidget(new QLabel("hold:"));
			_hbox0->addWidget(proximal_limit_hold_1);
			_hbox0->addWidget(new QLabel("max:"));
			_hbox0->addWidget(proximal_limit_max_1);
			_vbox->addLayout(_hbox0);

			_hbox1->addWidget(new QLabel("proximal_limit_min_2:"));
			_hbox1->addWidget(proximal_limit_min_2);
			_hbox1->addWidget(new QLabel("hold:"));
			_hbox1->addWidget(proximal_limit_hold_2);
			_hbox1->addWidget(new QLabel("max:"));
			_hbox1->addWidget(proximal_limit_max_2);
      _vbox->addLayout(_hbox1);

      _hbox2->addWidget(new QLabel("proximal_1_limit_min_1:"));
      _hbox2->addWidget(proximal_1_limit_min_1);
      _hbox2->addWidget(new QLabel("hold:"));
      _hbox2->addWidget(proximal_1_limit_hold_1);
      _hbox2->addWidget(new QLabel("max:"));
      _hbox2->addWidget(proximal_1_limit_max_1);
      _vbox->addLayout(_hbox2);

      _hbox3->addWidget(new QLabel("proximal_1_limit_min_2:"));
      _hbox3->addWidget(proximal_1_limit_min_2);
      _hbox3->addWidget(new QLabel("hold:"));
      _hbox3->addWidget(proximal_1_limit_hold_2);
      _hbox3->addWidget(new QLabel("max:"));
      _hbox3->addWidget(proximal_1_limit_max_2);
      _vbox->addLayout(_hbox3);

      _hbox4->addWidget(new QLabel("intermediate_limit_min_1:"));
      _hbox4->addWidget(intermediate_limit_min_1);
      _hbox4->addWidget(new QLabel("hold:"));
      _hbox4->addWidget(intermediate_limit_hold_1);
      _hbox4->addWidget(new QLabel("max:"));
      _hbox4->addWidget(intermediate_limit_max_1);
      _vbox->addLayout(_hbox4);

      _hbox5->addWidget(new QLabel("intermediate_limit_min_2:"));
      _hbox5->addWidget(intermediate_limit_min_2);
      _hbox5->addWidget(new QLabel("hold:"));
      _hbox5->addWidget(intermediate_limit_hold_2);
      _hbox5->addWidget(new QLabel("max:"));
      _hbox5->addWidget(intermediate_limit_max_2);
      _vbox->addLayout(_hbox5);

      _hbox6->addWidget(new QLabel("distal_limit_min_1:"));
      _hbox6->addWidget(distal_limit_min_1);
      _hbox6->addWidget(new QLabel("hold:"));
      _hbox6->addWidget(distal_limit_hold_1);
      _hbox6->addWidget(new QLabel("max:"));
      _hbox6->addWidget(distal_limit_max_1);
      _vbox->addLayout(_hbox6);

      _hbox7->addWidget(new QLabel("distal_limit_min_2:"));
      _hbox7->addWidget(distal_limit_min_2);
      _hbox7->addWidget(new QLabel("hold:"));
      _hbox7->addWidget(distal_limit_hold_2);
      _hbox7->addWidget(new QLabel("max:"));
      _hbox7->addWidget(distal_limit_max_2);
      _hbox7->addWidget(_button0);
      _vbox->addLayout(_hbox7);

			setLayout(_vbox);

			signalMapper = new QSignalMapper(this);
			signalMapper->setMapping(_button0, int(0));

			connect(_button0, SIGNAL(clicked()), signalMapper, SLOT (map()));
			connect(signalMapper, SIGNAL(mapped(int)), this, SLOT(setLimits(int)));

      connect(_hbox0_slider, SIGNAL(sliderReleased()), this, SLOT(hbox0_slider_released()));
      connect(_hbox0_slider, SIGNAL(valueChanged(int)), this, SLOT(hbox0_slider_valueChanged(int)));
      connect(_hbox1_slider, SIGNAL(sliderReleased()), this, SLOT(hbox1_slider_released()));
      connect(_hbox1_slider, SIGNAL(valueChanged(int)), this, SLOT(hbox1_slider_valueChanged(int)));
      connect(_hbox2_slider, SIGNAL(sliderReleased()), this, SLOT(hbox2_slider_released()));
      connect(_hbox2_slider, SIGNAL(valueChanged(int)), this, SLOT(hbox2_slider_valueChanged(int)));
      connect(_hbox3_slider, SIGNAL(sliderReleased()), this, SLOT(hbox3_slider_released()));
      connect(_hbox3_slider, SIGNAL(valueChanged(int)), this, SLOT(hbox3_slider_valueChanged(int)));
      connect(_hbox4_slider, SIGNAL(sliderReleased()), this, SLOT(hbox4_slider_released()));
      connect(_hbox4_slider, SIGNAL(valueChanged(int)), this, SLOT(hbox4_slider_valueChanged(int)));
      connect(_hbox5_slider, SIGNAL(sliderReleased()), this, SLOT(hbox5_slider_released()));
      connect(_hbox5_slider, SIGNAL(valueChanged(int)), this, SLOT(hbox5_slider_valueChanged(int)));
      connect(_hbox6_slider, SIGNAL(sliderReleased()), this, SLOT(hbox6_slider_released()));
      connect(_hbox6_slider, SIGNAL(valueChanged(int)), this, SLOT(hbox6_slider_valueChanged(int)));
      connect(_hbox7_slider, SIGNAL(sliderReleased()), this, SLOT(hbox7_slider_released()));
      connect(_hbox7_slider, SIGNAL(valueChanged(int)), this, SLOT(hbox7_slider_valueChanged(int)));

			setLimits_publisher_ = nh_.advertise<flobotics_finger_messages::flobotics_finger_force_limit_values>("flobotics_finger_force_limit_values", 10 );
	}

	void FloboticsFingerForceLimitsPanel::setLimits(int servoNr){
	  flobotics_finger_messages::flobotics_finger_force_limit_values msg;
		msg.proximal_limit_min_1 = proximal_limit_min_1->text().toInt();
		msg.proximal_limit_hold_1 = proximal_limit_hold_1->text().toInt();
		msg.proximal_limit_max_1 = proximal_limit_max_1->text().toInt();

    msg.proximal_limit_min_2 = proximal_limit_min_2->text().toInt();
    msg.proximal_limit_hold_2 = proximal_limit_hold_2->text().toInt();
    msg.proximal_limit_max_2 = proximal_limit_max_2->text().toInt();

    msg.proximal_1_limit_min_1 = proximal_1_limit_min_1->text().toInt();
    msg.proximal_1_limit_hold_1 = proximal_1_limit_hold_1->text().toInt();
    msg.proximal_1_limit_max_1 = proximal_1_limit_max_1->text().toInt();

    msg.proximal_1_limit_min_2 = proximal_1_limit_min_2->text().toInt();
    msg.proximal_1_limit_hold_2 = proximal_1_limit_hold_2->text().toInt();
    msg.proximal_1_limit_max_2 = proximal_1_limit_max_2->text().toInt();

    msg.intermediate_limit_min_1 = intermediate_limit_min_1->text().toInt();
    msg.intermediate_limit_hold_1 = intermediate_limit_hold_1->text().toInt();
    msg.intermediate_limit_max_1 = intermediate_limit_max_1->text().toInt();

    msg.intermediate_limit_min_2 = intermediate_limit_min_2->text().toInt();
    msg.intermediate_limit_hold_2 = intermediate_limit_hold_2->text().toInt();
    msg.intermediate_limit_max_2 = intermediate_limit_max_2->text().toInt();

    msg.distal_limit_min_1 = distal_limit_min_1->text().toInt();
    msg.distal_limit_hold_1 = distal_limit_hold_1->text().toInt();
    msg.distal_limit_max_1 = distal_limit_max_1->text().toInt();

    msg.distal_limit_min_2 = distal_limit_min_2->text().toInt();
    msg.distal_limit_hold_2 = distal_limit_hold_2->text().toInt();
    msg.distal_limit_max_2 = distal_limit_max_2->text().toInt();

		setLimits_publisher_.publish(msg);
	}

	void FloboticsFingerForceLimitsPanel::hbox0_slider_valueChanged(int val)
	{
	  flobotics_finger_messages::flobotics_finger_force_limit_values msg;
    
    if( (proximal_limit_min_1->text().toInt() + val) > 0)
	msg.proximal_limit_min_1 = proximal_limit_min_1->text().toInt() + val;
    else
	msg.proximal_limit_min_1 = 0;

	if( (proximal_limit_hold_1->text().toInt() + val) > 0)
	    msg.proximal_limit_hold_1 = proximal_limit_hold_1->text().toInt() + val;
	else
	   msg.proximal_limit_hold_1 = 0;

	if( (proximal_limit_max_1->text().toInt() + val) > 0)
	    msg.proximal_limit_max_1 = proximal_limit_max_1->text().toInt() + val;
	else
	   msg.proximal_limit_max_1 = 0;

    msg.proximal_limit_min_2 = proximal_limit_min_2->text().toInt();
    msg.proximal_limit_hold_2 = proximal_limit_hold_2->text().toInt();
    msg.proximal_limit_max_2 = proximal_limit_max_2->text().toInt();

    msg.proximal_1_limit_min_1 = proximal_1_limit_min_1->text().toInt();
    msg.proximal_1_limit_hold_1 = proximal_1_limit_hold_1->text().toInt();
    msg.proximal_1_limit_max_1 = proximal_1_limit_max_1->text().toInt();

    msg.proximal_1_limit_min_2 = proximal_1_limit_min_2->text().toInt();
    msg.proximal_1_limit_hold_2 = proximal_1_limit_hold_2->text().toInt();
    msg.proximal_1_limit_max_2 = proximal_1_limit_max_2->text().toInt();

    msg.intermediate_limit_min_1 = intermediate_limit_min_1->text().toInt();
    msg.intermediate_limit_hold_1 = intermediate_limit_hold_1->text().toInt();
    msg.intermediate_limit_max_1 = intermediate_limit_max_1->text().toInt();

    msg.intermediate_limit_min_2 = intermediate_limit_min_2->text().toInt();
    msg.intermediate_limit_hold_2 = intermediate_limit_hold_2->text().toInt();
    msg.intermediate_limit_max_2 = intermediate_limit_max_2->text().toInt();

    msg.distal_limit_min_1 = distal_limit_min_1->text().toInt();
    msg.distal_limit_hold_1 = distal_limit_hold_1->text().toInt();
    msg.distal_limit_max_1 = distal_limit_max_1->text().toInt();

    msg.distal_limit_min_2 = distal_limit_min_2->text().toInt();
    msg.distal_limit_hold_2 = distal_limit_hold_2->text().toInt();
    msg.distal_limit_max_2 = distal_limit_max_2->text().toInt();

    setLimits_publisher_.publish(msg);

    ROS_INFO("hbox0 slider value changed val:%d, sli:%d", val, _hbox0_slider->value() );
	}

	void FloboticsFingerForceLimitsPanel::hbox1_slider_valueChanged(int val)
  {
    flobotics_finger_messages::flobotics_finger_force_limit_values msg;
    msg.proximal_limit_min_1 = proximal_limit_min_1->text().toInt();
    msg.proximal_limit_hold_1 = proximal_limit_hold_1->text().toInt();
    msg.proximal_limit_max_1 = proximal_limit_max_1->text().toInt();

	if( (proximal_limit_min_2->text().toInt() + val) > 0)
	    msg.proximal_limit_min_2 = proximal_limit_min_2->text().toInt() + val;
	else
		msg.proximal_limit_min_2 = 0;

	if( (proximal_limit_hold_2->text().toInt() + val) > 0)	
	    msg.proximal_limit_hold_2 = proximal_limit_hold_2->text().toInt() + val;
	else
		msg.proximal_limit_hold_2 = 0;

	if( (proximal_limit_max_2->text().toInt() + val) > 0)
	    msg.proximal_limit_max_2 = proximal_limit_max_2->text().toInt() + val;
	else
		msg.proximal_limit_max_2 = 0;

    msg.proximal_1_limit_min_1 = proximal_1_limit_min_1->text().toInt();
    msg.proximal_1_limit_hold_1 = proximal_1_limit_hold_1->text().toInt();
    msg.proximal_1_limit_max_1 = proximal_1_limit_max_1->text().toInt();

    msg.proximal_1_limit_min_2 = proximal_1_limit_min_2->text().toInt();
    msg.proximal_1_limit_hold_2 = proximal_1_limit_hold_2->text().toInt();
    msg.proximal_1_limit_max_2 = proximal_1_limit_max_2->text().toInt();

    msg.intermediate_limit_min_1 = intermediate_limit_min_1->text().toInt();
    msg.intermediate_limit_hold_1 = intermediate_limit_hold_1->text().toInt();
    msg.intermediate_limit_max_1 = intermediate_limit_max_1->text().toInt();

    msg.intermediate_limit_min_2 = intermediate_limit_min_2->text().toInt();
    msg.intermediate_limit_hold_2 = intermediate_limit_hold_2->text().toInt();
    msg.intermediate_limit_max_2 = intermediate_limit_max_2->text().toInt();

    msg.distal_limit_min_1 = distal_limit_min_1->text().toInt();
    msg.distal_limit_hold_1 = distal_limit_hold_1->text().toInt();
    msg.distal_limit_max_1 = distal_limit_max_1->text().toInt();

    msg.distal_limit_min_2 = distal_limit_min_2->text().toInt();
    msg.distal_limit_hold_2 = distal_limit_hold_2->text().toInt();
    msg.distal_limit_max_2 = distal_limit_max_2->text().toInt();

    setLimits_publisher_.publish(msg);

    ROS_INFO("hbox1 slider value changed val:%d, sli:%d", val, _hbox1_slider->value() );
  }

  void FloboticsFingerForceLimitsPanel::hbox2_slider_valueChanged(int val)
  {
    flobotics_finger_messages::flobotics_finger_force_limit_values msg;
    msg.proximal_limit_min_1 = proximal_limit_min_1->text().toInt();
    msg.proximal_limit_hold_1 = proximal_limit_hold_1->text().toInt();
    msg.proximal_limit_max_1 = proximal_limit_max_1->text().toInt();

    msg.proximal_limit_min_2 = proximal_limit_min_2->text().toInt();
    msg.proximal_limit_hold_2 = proximal_limit_hold_2->text().toInt();
    msg.proximal_limit_max_2 = proximal_limit_max_2->text().toInt();

	if( (proximal_1_limit_min_1->text().toInt() + val) > 0)
	    msg.proximal_1_limit_min_1 = proximal_1_limit_min_1->text().toInt() + val;
	else
		msg.proximal_1_limit_min_1 = 0;

	if( (proximal_1_limit_hold_1->text().toInt() + val) > 0)
	    msg.proximal_1_limit_hold_1 = proximal_1_limit_hold_1->text().toInt() + val;
	else
		msg.proximal_1_limit_hold_1 = 0;

	if( (proximal_1_limit_max_1->text().toInt() + val) > 0)
	    msg.proximal_1_limit_max_1 = proximal_1_limit_max_1->text().toInt() + val;
	else
		msg.proximal_1_limit_max_1 = 0;

    msg.proximal_1_limit_min_2 = proximal_1_limit_min_2->text().toInt();
    msg.proximal_1_limit_hold_2 = proximal_1_limit_hold_2->text().toInt();
    msg.proximal_1_limit_max_2 = proximal_1_limit_max_2->text().toInt();

    msg.intermediate_limit_min_1 = intermediate_limit_min_1->text().toInt();
    msg.intermediate_limit_hold_1 = intermediate_limit_hold_1->text().toInt();
    msg.intermediate_limit_max_1 = intermediate_limit_max_1->text().toInt();

    msg.intermediate_limit_min_2 = intermediate_limit_min_2->text().toInt();
    msg.intermediate_limit_hold_2 = intermediate_limit_hold_2->text().toInt();
    msg.intermediate_limit_max_2 = intermediate_limit_max_2->text().toInt();

    msg.distal_limit_min_1 = distal_limit_min_1->text().toInt();
    msg.distal_limit_hold_1 = distal_limit_hold_1->text().toInt();
    msg.distal_limit_max_1 = distal_limit_max_1->text().toInt();

    msg.distal_limit_min_2 = distal_limit_min_2->text().toInt();
    msg.distal_limit_hold_2 = distal_limit_hold_2->text().toInt();
    msg.distal_limit_max_2 = distal_limit_max_2->text().toInt();

    setLimits_publisher_.publish(msg);

    ROS_INFO("hbox2 slider value changed val:%d, sli:%d", val, _hbox2_slider->value() );
  }

  void FloboticsFingerForceLimitsPanel::hbox3_slider_valueChanged(int val)
  {
    flobotics_finger_messages::flobotics_finger_force_limit_values msg;
    msg.proximal_limit_min_1 = proximal_limit_min_1->text().toInt();
    msg.proximal_limit_hold_1 = proximal_limit_hold_1->text().toInt();
    msg.proximal_limit_max_1 = proximal_limit_max_1->text().toInt();

    msg.proximal_limit_min_2 = proximal_limit_min_2->text().toInt();
    msg.proximal_limit_hold_2 = proximal_limit_hold_2->text().toInt();
    msg.proximal_limit_max_2 = proximal_limit_max_2->text().toInt();

    msg.proximal_1_limit_min_1 = proximal_1_limit_min_1->text().toInt();
    msg.proximal_1_limit_hold_1 = proximal_1_limit_hold_1->text().toInt();
    msg.proximal_1_limit_max_1 = proximal_1_limit_max_1->text().toInt();

	if( (proximal_1_limit_min_2->text().toInt() + val) > 0)
	    msg.proximal_1_limit_min_2 = proximal_1_limit_min_2->text().toInt() + val;
	else
		msg.proximal_1_limit_min_2 = 0;

	if( (proximal_1_limit_hold_2->text().toInt() + val) > 0)
	    msg.proximal_1_limit_hold_2 = proximal_1_limit_hold_2->text().toInt() + val;
	else
		msg.proximal_1_limit_hold_2 = 0;

	if( (proximal_1_limit_max_2->text().toInt() + val) > 0)
	    msg.proximal_1_limit_max_2 = proximal_1_limit_max_2->text().toInt() + val;
	else
		msg.proximal_1_limit_max_2 = 0;

    msg.intermediate_limit_min_1 = intermediate_limit_min_1->text().toInt();
    msg.intermediate_limit_hold_1 = intermediate_limit_hold_1->text().toInt();
    msg.intermediate_limit_max_1 = intermediate_limit_max_1->text().toInt();

    msg.intermediate_limit_min_2 = intermediate_limit_min_2->text().toInt();
    msg.intermediate_limit_hold_2 = intermediate_limit_hold_2->text().toInt();
    msg.intermediate_limit_max_2 = intermediate_limit_max_2->text().toInt();

    msg.distal_limit_min_1 = distal_limit_min_1->text().toInt();
    msg.distal_limit_hold_1 = distal_limit_hold_1->text().toInt();
    msg.distal_limit_max_1 = distal_limit_max_1->text().toInt();

    msg.distal_limit_min_2 = distal_limit_min_2->text().toInt();
    msg.distal_limit_hold_2 = distal_limit_hold_2->text().toInt();
    msg.distal_limit_max_2 = distal_limit_max_2->text().toInt();

    setLimits_publisher_.publish(msg);

    ROS_INFO("hbox3 slider value changed val:%d, sli:%d", val, _hbox3_slider->value() );
  }

  void FloboticsFingerForceLimitsPanel::hbox4_slider_valueChanged(int val)
  {
    flobotics_finger_messages::flobotics_finger_force_limit_values msg;
    msg.proximal_limit_min_1 = proximal_limit_min_1->text().toInt();
    msg.proximal_limit_hold_1 = proximal_limit_hold_1->text().toInt();
    msg.proximal_limit_max_1 = proximal_limit_max_1->text().toInt();

    msg.proximal_limit_min_2 = proximal_limit_min_2->text().toInt();
    msg.proximal_limit_hold_2 = proximal_limit_hold_2->text().toInt();
    msg.proximal_limit_max_2 = proximal_limit_max_2->text().toInt();

    msg.proximal_1_limit_min_1 = proximal_1_limit_min_1->text().toInt();
    msg.proximal_1_limit_hold_1 = proximal_1_limit_hold_1->text().toInt();
    msg.proximal_1_limit_max_1 = proximal_1_limit_max_1->text().toInt();

    msg.proximal_1_limit_min_2 = proximal_1_limit_min_2->text().toInt();
    msg.proximal_1_limit_hold_2 = proximal_1_limit_hold_2->text().toInt();
    msg.proximal_1_limit_max_2 = proximal_1_limit_max_2->text().toInt();

	if( (intermediate_limit_min_1->text().toInt() + val) > 0)
	    msg.intermediate_limit_min_1 = intermediate_limit_min_1->text().toInt() + val;
	else
		msg.intermediate_limit_min_1 = 0;
	
	if( (intermediate_limit_hold_1->text().toInt() + val) > 0)
	    msg.intermediate_limit_hold_1 = intermediate_limit_hold_1->text().toInt() + val;
	else
		msg.intermediate_limit_hold_1 = 0;

	if( (intermediate_limit_max_1->text().toInt() + val) > 0)	
	    msg.intermediate_limit_max_1 = intermediate_limit_max_1->text().toInt() + val;
	else
		msg.intermediate_limit_max_1 = 0;

    msg.intermediate_limit_min_2 = intermediate_limit_min_2->text().toInt();
    msg.intermediate_limit_hold_2 = intermediate_limit_hold_2->text().toInt();
    msg.intermediate_limit_max_2 = intermediate_limit_max_2->text().toInt();

    msg.distal_limit_min_1 = distal_limit_min_1->text().toInt();
    msg.distal_limit_hold_1 = distal_limit_hold_1->text().toInt();
    msg.distal_limit_max_1 = distal_limit_max_1->text().toInt();

    msg.distal_limit_min_2 = distal_limit_min_2->text().toInt();
    msg.distal_limit_hold_2 = distal_limit_hold_2->text().toInt();
    msg.distal_limit_max_2 = distal_limit_max_2->text().toInt();

    setLimits_publisher_.publish(msg);

    ROS_INFO("hbox4 slider value changed val:%d, sli:%d", val, _hbox4_slider->value() );
  }

  void FloboticsFingerForceLimitsPanel::hbox5_slider_valueChanged(int val)
  {
    flobotics_finger_messages::flobotics_finger_force_limit_values msg;
    msg.proximal_limit_min_1 = proximal_limit_min_1->text().toInt();
    msg.proximal_limit_hold_1 = proximal_limit_hold_1->text().toInt();
    msg.proximal_limit_max_1 = proximal_limit_max_1->text().toInt();

    msg.proximal_limit_min_2 = proximal_limit_min_2->text().toInt();
    msg.proximal_limit_hold_2 = proximal_limit_hold_2->text().toInt();
    msg.proximal_limit_max_2 = proximal_limit_max_2->text().toInt();

    msg.proximal_1_limit_min_1 = proximal_1_limit_min_1->text().toInt();
    msg.proximal_1_limit_hold_1 = proximal_1_limit_hold_1->text().toInt();
    msg.proximal_1_limit_max_1 = proximal_1_limit_max_1->text().toInt();

    msg.proximal_1_limit_min_2 = proximal_1_limit_min_2->text().toInt();
    msg.proximal_1_limit_hold_2 = proximal_1_limit_hold_2->text().toInt();
    msg.proximal_1_limit_max_2 = proximal_1_limit_max_2->text().toInt();

    msg.intermediate_limit_min_1 = intermediate_limit_min_1->text().toInt();
    msg.intermediate_limit_hold_1 = intermediate_limit_hold_1->text().toInt();
    msg.intermediate_limit_max_1 = intermediate_limit_max_1->text().toInt();

	if( (intermediate_limit_min_2->text().toInt() + val) > 0)
	    msg.intermediate_limit_min_2 = intermediate_limit_min_2->text().toInt() + val;
	else
		msg.intermediate_limit_min_2 = 0;

	if( (intermediate_limit_hold_2->text().toInt() + val) > 0)
	    msg.intermediate_limit_hold_2 = intermediate_limit_hold_2->text().toInt() + val;
	else	
		msg.intermediate_limit_hold_2 = 0;

	if( (intermediate_limit_max_2->text().toInt() + val) > 0)
	    msg.intermediate_limit_max_2 = intermediate_limit_max_2->text().toInt() + val;
	else
		msg.intermediate_limit_max_2 = 0;

    msg.distal_limit_min_1 = distal_limit_min_1->text().toInt();
    msg.distal_limit_hold_1 = distal_limit_hold_1->text().toInt();
    msg.distal_limit_max_1 = distal_limit_max_1->text().toInt();

    msg.distal_limit_min_2 = distal_limit_min_2->text().toInt();
    msg.distal_limit_hold_2 = distal_limit_hold_2->text().toInt();
    msg.distal_limit_max_2 = distal_limit_max_2->text().toInt();

    setLimits_publisher_.publish(msg);

    ROS_INFO("hbox5 slider value changed val:%d, sli:%d", val, _hbox5_slider->value() );
  }

  void FloboticsFingerForceLimitsPanel::hbox6_slider_valueChanged(int val)
  {
    flobotics_finger_messages::flobotics_finger_force_limit_values msg;
    msg.proximal_limit_min_1 = proximal_limit_min_1->text().toInt();
    msg.proximal_limit_hold_1 = proximal_limit_hold_1->text().toInt();
    msg.proximal_limit_max_1 = proximal_limit_max_1->text().toInt();

    msg.proximal_limit_min_2 = proximal_limit_min_2->text().toInt();
    msg.proximal_limit_hold_2 = proximal_limit_hold_2->text().toInt();
    msg.proximal_limit_max_2 = proximal_limit_max_2->text().toInt();

    msg.proximal_1_limit_min_1 = proximal_1_limit_min_1->text().toInt();
    msg.proximal_1_limit_hold_1 = proximal_1_limit_hold_1->text().toInt();
    msg.proximal_1_limit_max_1 = proximal_1_limit_max_1->text().toInt();

    msg.proximal_1_limit_min_2 = proximal_1_limit_min_2->text().toInt();
    msg.proximal_1_limit_hold_2 = proximal_1_limit_hold_2->text().toInt();
    msg.proximal_1_limit_max_2 = proximal_1_limit_max_2->text().toInt();

    msg.intermediate_limit_min_1 = intermediate_limit_min_1->text().toInt();
    msg.intermediate_limit_hold_1 = intermediate_limit_hold_1->text().toInt();
    msg.intermediate_limit_max_1 = intermediate_limit_max_1->text().toInt();

    msg.intermediate_limit_min_2 = intermediate_limit_min_2->text().toInt();
    msg.intermediate_limit_hold_2 = intermediate_limit_hold_2->text().toInt();
    msg.intermediate_limit_max_2 = intermediate_limit_max_2->text().toInt();

	if( (distal_limit_min_1->text().toInt() + val) > 0)
	    msg.distal_limit_min_1 = distal_limit_min_1->text().toInt() + val;
	else
		msg.distal_limit_min_1 = 0;

	if( (distal_limit_hold_1->text().toInt() + val) > 0)
	    msg.distal_limit_hold_1 = distal_limit_hold_1->text().toInt() + val;
	else
		msg.distal_limit_hold_1 = 0;

	if( (distal_limit_max_1->text().toInt() + val) > 0)
	    msg.distal_limit_max_1 = distal_limit_max_1->text().toInt() + val;
	else
		msg.distal_limit_max_1 = 0;

    msg.distal_limit_min_2 = distal_limit_min_2->text().toInt();
    msg.distal_limit_hold_2 = distal_limit_hold_2->text().toInt();
    msg.distal_limit_max_2 = distal_limit_max_2->text().toInt();

    setLimits_publisher_.publish(msg);

    ROS_INFO("hbox6 slider value changed val:%d, sli:%d", val, _hbox6_slider->value() );
  }

  void FloboticsFingerForceLimitsPanel::hbox7_slider_valueChanged(int val)
  {
    flobotics_finger_messages::flobotics_finger_force_limit_values msg;
    msg.proximal_limit_min_1 = proximal_limit_min_1->text().toInt();
    msg.proximal_limit_hold_1 = proximal_limit_hold_1->text().toInt();
    msg.proximal_limit_max_1 = proximal_limit_max_1->text().toInt();

    msg.proximal_limit_min_2 = proximal_limit_min_2->text().toInt();
    msg.proximal_limit_hold_2 = proximal_limit_hold_2->text().toInt();
    msg.proximal_limit_max_2 = proximal_limit_max_2->text().toInt();

    msg.proximal_1_limit_min_1 = proximal_1_limit_min_1->text().toInt();
    msg.proximal_1_limit_hold_1 = proximal_1_limit_hold_1->text().toInt();
    msg.proximal_1_limit_max_1 = proximal_1_limit_max_1->text().toInt();

    msg.proximal_1_limit_min_2 = proximal_1_limit_min_2->text().toInt();
    msg.proximal_1_limit_hold_2 = proximal_1_limit_hold_2->text().toInt();
    msg.proximal_1_limit_max_2 = proximal_1_limit_max_2->text().toInt();

    msg.intermediate_limit_min_1 = intermediate_limit_min_1->text().toInt();
    msg.intermediate_limit_hold_1 = intermediate_limit_hold_1->text().toInt();
    msg.intermediate_limit_max_1 = intermediate_limit_max_1->text().toInt();

    msg.intermediate_limit_min_2 = intermediate_limit_min_2->text().toInt();
    msg.intermediate_limit_hold_2 = intermediate_limit_hold_2->text().toInt();
    msg.intermediate_limit_max_2 = intermediate_limit_max_2->text().toInt();

    msg.distal_limit_min_1 = distal_limit_min_1->text().toInt();
    msg.distal_limit_hold_1 = distal_limit_hold_1->text().toInt();
    msg.distal_limit_max_1 = distal_limit_max_1->text().toInt();

	if( (distal_limit_min_2->text().toInt() + val) > 0)
	    msg.distal_limit_min_2 = distal_limit_min_2->text().toInt() + val;
	else
		msg.distal_limit_min_2 = 0;

	if( (distal_limit_hold_2->text().toInt() + val) > 0)
	    msg.distal_limit_hold_2 = distal_limit_hold_2->text().toInt() + val;
	else
		msg.distal_limit_hold_2 = 0;

	if( (distal_limit_max_2->text().toInt() + val) > 0)
	    msg.distal_limit_max_2 = distal_limit_max_2->text().toInt() + val;
	else
		msg.distal_limit_max_2 = 0;

    setLimits_publisher_.publish(msg);

    ROS_INFO("hbox7 slider value changed val:%d, sli:%d", val, _hbox7_slider->value() );
  }

	void FloboticsFingerForceLimitsPanel::hbox0_slider_released()
	{
	  ROS_INFO("hbox0 slider released");

	  _hbox0_slider->setValue(0);
	  this->setLimits(0);
	}

	void FloboticsFingerForceLimitsPanel::hbox1_slider_released()
  {
    ROS_INFO("hbox1 slider released");

    _hbox1_slider->setValue(0);
    this->setLimits(0);
  }

  void FloboticsFingerForceLimitsPanel::hbox2_slider_released()
  {
    ROS_INFO("hbox2 slider released");

    _hbox2_slider->setValue(0);
    this->setLimits(0);
  }

  void FloboticsFingerForceLimitsPanel::hbox3_slider_released()
  {
    ROS_INFO("hbox3 slider released");

    _hbox3_slider->setValue(0);
    this->setLimits(0);
  }
  void FloboticsFingerForceLimitsPanel::hbox4_slider_released()
  {
    ROS_INFO("hbox4 slider released");

    _hbox4_slider->setValue(0);
    this->setLimits(0);
  }

  void FloboticsFingerForceLimitsPanel::hbox5_slider_released()
  {
    ROS_INFO("hbox5 slider released");

    _hbox5_slider->setValue(0);
    this->setLimits(0);
  }
  void FloboticsFingerForceLimitsPanel::hbox6_slider_released()
  {
    ROS_INFO("hbox6 slider released");

    _hbox6_slider->setValue(0);
    this->setLimits(0);
  }

  void FloboticsFingerForceLimitsPanel::hbox7_slider_released()
  {
    ROS_INFO("hbox7 slider released");

    _hbox7_slider->setValue(0);
    this->setLimits(0);
  }


}

PLUGINLIB_EXPORT_CLASS(flobotics_finger_force_limits_panel::FloboticsFingerForceLimitsPanel, rviz::Panel)
