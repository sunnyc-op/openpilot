#pragma once

#include <QStackedLayout>
#include <QWidget>

#include "selfdrive/common/util.h"
#include "selfdrive/ui/qt/widgets/cameraview.h"
#include "selfdrive/ui/ui.h"

#include <QTimer>
#include <QMap>
#include "selfdrive/ui/qt/screenrecorder/screenrecorder.h"


// ***** onroad widgets *****
class OnroadHud : public QWidget {
  Q_OBJECT
  Q_PROPERTY(bool engageable MEMBER engageable NOTIFY valueChanged);

  // crwusiz
  Q_PROPERTY(QString speedUnit MEMBER speedUnit NOTIFY valueChanged);
  Q_PROPERTY(float angleSteers MEMBER angleSteers NOTIFY valueChanged);
  Q_PROPERTY(float steerAngleDesired MEMBER steerAngleDesired NOTIFY valueChanged);
  Q_PROPERTY(bool dmActive MEMBER dmActive NOTIFY valueChanged);
  Q_PROPERTY(bool hideDM MEMBER hideDM NOTIFY valueChanged);
  Q_PROPERTY(int status MEMBER status NOTIFY valueChanged);
  Q_PROPERTY(int lead_status MEMBER lead_status NOTIFY valueChanged);
  Q_PROPERTY(float lead_d_rel MEMBER lead_d_rel NOTIFY valueChanged);
  Q_PROPERTY(float lead_v_rel MEMBER lead_v_rel NOTIFY valueChanged);
  Q_PROPERTY(int wifi_status MEMBER wifi_status NOTIFY valueChanged);
  Q_PROPERTY(bool gps_status MEMBER gps_status NOTIFY valueChanged);
  Q_PROPERTY(float gpsBearing MEMBER gpsBearing NOTIFY valueChanged);


public:
  explicit OnroadHud(QWidget *parent);
  void updateState(const UIState &s);

private:
  void drawIcon(QPainter &p, int x, int y, QPixmap &img, QBrush bg, float opacity);
  // crwusiz
  void drawIconRotate(QPainter &p, int x, int y, QPixmap &img, QBrush bg, float opacity);
  void drawText(QPainter &p, int x, int y, const QString &text, int alpha = 255);
  void drawNrotate(QPainter &p, int x, int y, QPixmap &img, QBrush bg, float opacity);
  void drawTextColor(QPainter &p, int x, int y, const QString &text, QColor &color);
  void paintEvent(QPaintEvent *event) override;
  void drawRightDevUi(QPainter &p, int x, int y);
  void drawLeftDevUi(QPainter &p, int x, int y);
  int rightSideElement(QPainter &p, int x, int y, const char* value, const char* label, QColor &color);
  int leftSideElement(QPainter &p, int x, int y, const char* value, const char* label, QColor &color);

  QPixmap engage_img;
  QPixmap dm_img;

  // crwusiz
  QPixmap wifi_img;
  QPixmap direction_img;

  const int radius = 192;
  const int img_size = (radius / 2) * 1.5;
  QString speedUnit;
  bool is_cruise_set = false;
  bool engageable = true;
  bool engaged = true;
  bool dmActive = false;
  bool hideDM = false;
  int status = STATUS_DISENGAGED;
  // crwusiz
  float angleSteers = 0;
  int wifi_status = 0;
  bool gps_status = false;
  float gpsBearing = 0;
  int lead_status;
  float lead_d_rel = 0;
  float lead_v_rel = 0;
  float steerAngleDesired = 0;

signals:
  void valueChanged();
};

class OnroadAlerts : public QWidget {
  Q_OBJECT

public:
  OnroadAlerts(QWidget *parent = 0) : QWidget(parent) {};
  void updateAlert(const Alert &a, const QColor &color);

protected:
  void paintEvent(QPaintEvent*) override;

private:
  QColor bg;
  Alert alert = {};
};

// container window for the NVG UI
class NvgWindow : public CameraViewWidget {
  Q_OBJECT

public:
  explicit NvgWindow(VisionStreamType type, QWidget* parent = 0);

protected:
  void paintGL() override;
  void initializeGL() override;
  void showEvent(QShowEvent *event) override;
  void updateFrameMat(int w, int h) override;
  void drawLaneLines(QPainter &painter, const UIState *s);
  void drawLead(QPainter &painter, const cereal::ModelDataV2::LeadDataV3::Reader &lead_data, const QPointF &vd, bool is_radar);
  inline QColor redColor(int alpha = 255) { return QColor(201, 34, 49, alpha); }
  inline QColor whiteColor(int alpha = 255) { return QColor(255, 255, 255, alpha); }

  double prev_draw_t = 0;
  FirstOrderFilter fps_filter;

  // neokii
  void drawIcon(QPainter &p, int x, int y, QPixmap &img, QBrush bg, float opacity);
  void drawText(QPainter &p, int x, int y, const QString &text, int alpha = 255);
  void drawText2(QPainter &p, int x, int y, int flags, const QString &text, const QColor& color);
  void drawTextWithColor(QPainter &p, int x, int y, const QString &text, QColor& color);
  void paintEvent(QPaintEvent *event) override;

  const int radius = 192;
  const int img_size = (radius / 2) * 1.5;

  uint64_t last_update_params;

  // neokii
  QPixmap ic_brake;
  QPixmap ic_autohold_active;
  QPixmap ic_nda;
  QPixmap ic_hda;
  QPixmap ic_satellite;

  QMap<QString, QPixmap> ic_oil_com;

  void drawMaxSpeed(QPainter &p);
  void drawSpeed(QPainter &p);
  void drawBottomIcons(QPainter &p);
  void drawSpeedLimit(QPainter &p);
  void drawRestArea(QPainter &p);
  void drawGpsStatus(QPainter &p);
  void drawDebugText(QPainter &p);
  void drawHud(QPainter &p);

private:
  QPixmap get_icon_iol_com(const char* key);
  void drawRestAreaItem(QPainter &p, int yPos, capnp::Text::Reader image, capnp::Text::Reader title,
                        capnp::Text::Reader oilPrice, capnp::Text::Reader distance, bool lastItem);
};

// container for all onroad widgets
class OnroadWindow : public QWidget {
  Q_OBJECT

public:
  OnroadWindow(QWidget* parent = 0);
  bool isMapVisible() const { return map && map->isVisible(); }

protected:
  void mousePressEvent(QMouseEvent* e) override;
  OnroadHud *hud;
  void mouseReleaseEvent(QMouseEvent* e) override;

  void paintEvent(QPaintEvent *event) override;

private:
  OnroadAlerts *alerts;
  NvgWindow *nvg;
  QColor bg = bg_colors[STATUS_DISENGAGED];
  QWidget *map = nullptr;
  QHBoxLayout* split;

  // neokii
private:
  ScreenRecoder* recorder;
  std::shared_ptr<QTimer> record_timer;
  QPoint startPos;

private slots:
  void offroadTransition(bool offroad);
  void updateState(const UIState &s);
};
