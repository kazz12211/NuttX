#ifndef __INCLUDE_NUTTX_SENSORS_BME280_H
#define __INCLUDE_NUTTX_SENSORS_BME280_H

#include <nuttx/config.h>

#if defined(CONFIG_I2C) && defined(CONFIG_SENSORS_BME280)

struct i2c_master_s;

#ifdef __cplusplus
#define EXTERN extern "C"
extern "C"
{
#else
#define EXTERN extern
#endif



#undef EXTERN
#ifdef __cplusplus
}
#endif

#endif /* CONFIG_I2C && CONFIG_SENSORS_BME280 */
#endif /* __INCLUDE_NUTTX_BME280_H */
