#ifndef UPLOADDATA_H
#define UPLOADDATA_H
#include <QObject>
/*-----------------data config start  -------------------*/

#define MAX_ARRAY_JSON_STR_LEN (512)
#define MAX_SAMPLE_ARRAY_SIZE (16)

#define TOTAL_PROPERTY_COUNT 8
#include "qcloud_iot_c_sdk/sdk_src/internal_inc/utils_timer.h"
#include "qcloud_iot_c_sdk/include/qcloud_iot_export.h"
#include "qcloud_iot_c_sdk/include/qcloud_iot_import.h"
#include "qcloud_iot_c_sdk/include/lite-utils.h"
#include "qcloud_iot_c_sdk/include/utils_getopt.h"
#include <cstring>
#include"data_global.h"
extern struct env_info current1;
extern struct env_info current2;

static sDataPoint    sg_DataTemplate[TOTAL_PROPERTY_COUNT];

typedef struct _ProductDataDefine {
    TYPE_DEF_TEMPLATE_FLOAT m_temperature1;
    TYPE_DEF_TEMPLATE_FLOAT m_humidity1;
    TYPE_DEF_TEMPLATE_FLOAT m_illumination1;
    TYPE_DEF_TEMPLATE_FLOAT m_gas1;
    TYPE_DEF_TEMPLATE_FLOAT m_temperature2;
    TYPE_DEF_TEMPLATE_FLOAT m_humidity2;
    TYPE_DEF_TEMPLATE_FLOAT m_illumination2;
    TYPE_DEF_TEMPLATE_FLOAT m_gas;
} ProductDataDefine;

static   ProductDataDefine     sg_ProductData;

static void _init_data_template(void)
{
    sg_ProductData.m_temperature1 = 0;
    sg_DataTemplate[0].data_property.data = &sg_ProductData.m_temperature1;
    sg_DataTemplate[0].data_property.key  = "temperature1";
    sg_DataTemplate[0].data_property.type = TYPE_TEMPLATE_FLOAT;
    sg_DataTemplate[0].state = eCHANGED;

    sg_ProductData.m_humidity1 = 0;
    sg_DataTemplate[1].data_property.data = &sg_ProductData.m_humidity1;
    sg_DataTemplate[1].data_property.key  = "humidity1";
    sg_DataTemplate[1].data_property.type = TYPE_TEMPLATE_FLOAT;
    sg_DataTemplate[1].state = eCHANGED;

    sg_ProductData.m_illumination1 = 0;
    sg_DataTemplate[2].data_property.data = &sg_ProductData.m_illumination1;
    sg_DataTemplate[2].data_property.key  = "illumination1";
    sg_DataTemplate[2].data_property.type = TYPE_TEMPLATE_FLOAT;
    sg_DataTemplate[2].state = eCHANGED;

    sg_ProductData.m_gas1 = 0;
    sg_DataTemplate[3].data_property.data = &sg_ProductData.m_gas1;
    sg_DataTemplate[3].data_property.key  = "gas1";
    sg_DataTemplate[3].data_property.type = TYPE_TEMPLATE_FLOAT;
    sg_DataTemplate[3].state = eCHANGED;

    sg_ProductData.m_temperature2 = 0;
    sg_DataTemplate[4].data_property.data = &sg_ProductData.m_temperature2;
    sg_DataTemplate[4].data_property.key  = "temperature2";
    sg_DataTemplate[4].data_property.type = TYPE_TEMPLATE_FLOAT;
    sg_DataTemplate[4].state = eCHANGED;

    sg_ProductData.m_humidity2 = 0;
    sg_DataTemplate[5].data_property.data = &sg_ProductData.m_humidity2;
    sg_DataTemplate[5].data_property.key  = "humidity2";
    sg_DataTemplate[5].data_property.type = TYPE_TEMPLATE_FLOAT;
    sg_DataTemplate[5].state = eCHANGED;

    sg_ProductData.m_illumination2 = 0;
    sg_DataTemplate[6].data_property.data = &sg_ProductData.m_illumination2;
    sg_DataTemplate[6].data_property.key  = "illumination2";
    sg_DataTemplate[6].data_property.type = TYPE_TEMPLATE_FLOAT;
    sg_DataTemplate[6].state = eCHANGED;

    sg_ProductData.m_gas = 0;
    sg_DataTemplate[7].data_property.data = &sg_ProductData.m_gas;
    sg_DataTemplate[7].data_property.key  = "gas";
    sg_DataTemplate[7].data_property.type = TYPE_TEMPLATE_FLOAT;
    sg_DataTemplate[7].state = eCHANGED;

};
int OnlineDataUp();
#endif // UPLOADDATA_H
