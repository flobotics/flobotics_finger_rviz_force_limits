#include <QtGui>
#include <QSignalMapper>
#include <qlineedit.h>

#ifndef Q_MOC_RUN
# include <ros/ros.h>
# include <rviz/panel.h>
#endif

namespace flobotics_finger_force_limits_panel {


class FloboticsFingerForceLimitsPanel: public rviz::Panel
{
    Q_OBJECT

public:
    FloboticsFingerForceLimitsPanel(QWidget* parent = 0);

signals:
    void pressed(int value);

protected:
    QVBoxLayout* _vbox;
    QHBoxLayout* _hbox0;
    QHBoxLayout* _hbox1;
    QHBoxLayout* _hbox2;
    QHBoxLayout* _hbox3;
    QHBoxLayout* _hbox4;
    QHBoxLayout* _hbox5;
    QHBoxLayout* _hbox6;
    QHBoxLayout* _hbox7;
    QHBoxLayout* _hbox0_s;
    QHBoxLayout* _hbox1_s;
    QHBoxLayout* _hbox2_s;
    QHBoxLayout* _hbox3_s;
    QHBoxLayout* _hbox4_s;
    QHBoxLayout* _hbox5_s;
    QHBoxLayout* _hbox6_s;
    QHBoxLayout* _hbox7_s;
    QSlider* _hbox0_slider;
    QSlider* _hbox1_slider;
    QSlider* _hbox2_slider;
    QSlider* _hbox3_slider;
    QSlider* _hbox4_slider;
    QSlider* _hbox5_slider;
    QSlider* _hbox6_slider;
    QSlider* _hbox7_slider;


    QLineEdit* proximal_limit_min_1;
    QLineEdit* proximal_limit_max_1;
    QLineEdit* proximal_limit_hold_1;
    QLineEdit* proximal_limit_min_2;
    QLineEdit* proximal_limit_max_2;
    QLineEdit* proximal_limit_hold_2;
    QLineEdit* proximal_1_limit_min_1;
    QLineEdit* proximal_1_limit_max_1;
    QLineEdit* proximal_1_limit_hold_1;
    QLineEdit* proximal_1_limit_min_2;
    QLineEdit* proximal_1_limit_max_2;
    QLineEdit* proximal_1_limit_hold_2;
    QLineEdit* intermediate_limit_min_1;
    QLineEdit* intermediate_limit_max_1;
    QLineEdit* intermediate_limit_hold_1;
    QLineEdit* intermediate_limit_min_2;
    QLineEdit* intermediate_limit_max_2;
    QLineEdit* intermediate_limit_hold_2;
    QLineEdit* distal_limit_min_1;
    QLineEdit* distal_limit_max_1;
    QLineEdit* distal_limit_hold_1;
    QLineEdit* distal_limit_min_2;
    QLineEdit* distal_limit_max_2;
    QLineEdit* distal_limit_hold_2;
    QPushButton* _button0;


    QSignalMapper *signalMapper;

public Q_SLOTS:
		void setLimits(int servoNr);
		void hbox0_slider_released();
		void hbox1_slider_released();
		void hbox2_slider_released();
		void hbox3_slider_released();
		void hbox4_slider_released();
		void hbox5_slider_released();
		void hbox6_slider_released();
		void hbox7_slider_released();
		void hbox0_slider_valueChanged(int);
		void hbox1_slider_valueChanged(int);
		void hbox2_slider_valueChanged(int);
		void hbox3_slider_valueChanged(int);
		void hbox4_slider_valueChanged(int);
		void hbox5_slider_valueChanged(int);
		void hbox6_slider_valueChanged(int);
		void hbox7_slider_valueChanged(int);

protected:
		ros::Publisher setLimits_publisher_;
		ros::NodeHandle nh_;
};

}
