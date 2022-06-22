#include "beremiz.h"
#ifndef __POUS_H
#define __POUS_H

#include "accessor.h"
#include "iec_std_lib.h"

__DECLARE_ENUMERATED_TYPE(LOGLEVEL,
  LOGLEVEL__CRITICAL,
  LOGLEVEL__WARNING,
  LOGLEVEL__INFO,
  LOGLEVEL__DEBUG
)
// FUNCTION_BLOCK LOGGER
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,TRIG)
  __DECLARE_VAR(STRING,MSG)
  __DECLARE_VAR(LOGLEVEL,LEVEL)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,TRIG0)

} LOGGER;

void LOGGER_init__(LOGGER *data__, BOOL retain);
// Code part
void LOGGER_body__(LOGGER *data__);
// FUNCTION_BLOCK PYTHON_EVAL
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,TRIG)
  __DECLARE_VAR(STRING,CODE)
  __DECLARE_VAR(BOOL,ACK)
  __DECLARE_VAR(STRING,RESULT)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(DWORD,STATE)
  __DECLARE_VAR(STRING,BUFFER)
  __DECLARE_VAR(STRING,PREBUFFER)
  __DECLARE_VAR(BOOL,TRIGM1)
  __DECLARE_VAR(BOOL,TRIGGED)

} PYTHON_EVAL;

void PYTHON_EVAL_init__(PYTHON_EVAL *data__, BOOL retain);
// Code part
void PYTHON_EVAL_body__(PYTHON_EVAL *data__);
// FUNCTION_BLOCK PYTHON_POLL
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,TRIG)
  __DECLARE_VAR(STRING,CODE)
  __DECLARE_VAR(BOOL,ACK)
  __DECLARE_VAR(STRING,RESULT)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(DWORD,STATE)
  __DECLARE_VAR(STRING,BUFFER)
  __DECLARE_VAR(STRING,PREBUFFER)
  __DECLARE_VAR(BOOL,TRIGM1)
  __DECLARE_VAR(BOOL,TRIGGED)

} PYTHON_POLL;

void PYTHON_POLL_init__(PYTHON_POLL *data__, BOOL retain);
// Code part
void PYTHON_POLL_body__(PYTHON_POLL *data__);
// FUNCTION_BLOCK PYTHON_GEAR
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(UINT,N)
  __DECLARE_VAR(BOOL,TRIG)
  __DECLARE_VAR(STRING,CODE)
  __DECLARE_VAR(BOOL,ACK)
  __DECLARE_VAR(STRING,RESULT)

  // FB private variables - TEMP, private and located variables
  PYTHON_EVAL PY_EVAL;
  __DECLARE_VAR(UINT,COUNTER)
  __DECLARE_VAR(UINT,ADD10_OUT)
  __DECLARE_VAR(BOOL,EQ13_OUT)
  __DECLARE_VAR(UINT,SEL15_OUT)
  __DECLARE_VAR(BOOL,AND7_OUT)

} PYTHON_GEAR;

void PYTHON_GEAR_init__(PYTHON_GEAR *data__, BOOL retain);
// Code part
void PYTHON_GEAR_body__(PYTHON_GEAR *data__);
// FUNCTION_BLOCK MC_INITSYSTEM
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,DONE)

  // FB private variables - TEMP, private and located variables

} MC_INITSYSTEM;

void MC_INITSYSTEM_init__(MC_INITSYSTEM *data__, BOOL retain);
// Code part
void MC_INITSYSTEM_body__(MC_INITSYSTEM *data__);
// FUNCTION
LOGLEVEL FUNCTION0(
  BOOL EN, 
  BOOL *__ENO, 
  BOOL VAR1);
// FUNCTION_BLOCK MC_CLOSESYSTEM
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,DONE)

  // FB private variables - TEMP, private and located variables

} MC_CLOSESYSTEM;

void MC_CLOSESYSTEM_init__(MC_CLOSESYSTEM *data__, BOOL retain);
// Code part
void MC_CLOSESYSTEM_body__(MC_CLOSESYSTEM *data__);
// FUNCTION_BLOCK MC_EMERGENCYSTOPSYSTEM
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,DONE)

  // FB private variables - TEMP, private and located variables

} MC_EMERGENCYSTOPSYSTEM;

void MC_EMERGENCYSTOPSYSTEM_init__(MC_EMERGENCYSTOPSYSTEM *data__, BOOL retain);
// Code part
void MC_EMERGENCYSTOPSYSTEM_body__(MC_EMERGENCYSTOPSYSTEM *data__);
// FUNCTION_BLOCK MC_READSTATUS
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXIS)
  __DECLARE_VAR(BOOL,EXECUTE)
  __DECLARE_VAR(BOOL,VALID)
  __DECLARE_VAR(BOOL,BUSY)
  __DECLARE_VAR(BOOL,ERROR)
  __DECLARE_VAR(UINT,ERRORID)
  __DECLARE_VAR(BOOL,ERRORSTOP)
  __DECLARE_VAR(BOOL,DISABLED)
  __DECLARE_VAR(BOOL,STOPPING)
  __DECLARE_VAR(BOOL,STANDSTILL)
  __DECLARE_VAR(BOOL,DISCRETEMOTION)
  __DECLARE_VAR(BOOL,CONTINUOUSMOTION)
  __DECLARE_VAR(BOOL,SYNCHRONIZEMOTION)
  __DECLARE_VAR(BOOL,HOMING)
  __DECLARE_VAR(BOOL,CONSTANTVELOCITY)
  __DECLARE_VAR(BOOL,ACCELERATING)
  __DECLARE_VAR(BOOL,DECELERATING)
  __DECLARE_VAR(INT,STATUS)

  // FB private variables - TEMP, private and located variables

} MC_READSTATUS;

void MC_READSTATUS_init__(MC_READSTATUS *data__, BOOL retain);
// Code part
void MC_READSTATUS_body__(MC_READSTATUS *data__);
// FUNCTION_BLOCK MC_GEARIN
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,MASTER)
  __DECLARE_VAR(INT,SLAVE)
  __DECLARE_VAR(BOOL,EXECUTE)
  __DECLARE_VAR(LREAL,RATIONUMERATOR)
  __DECLARE_VAR(UINT,RATIODENOMINATOR)
  __DECLARE_VAR(LREAL,ACCELERATION)
  __DECLARE_VAR(LREAL,DECELERATION)
  __DECLARE_VAR(LREAL,JERK)
  __DECLARE_VAR(INT,BUFFERMODE)
  __DECLARE_VAR(INT,OPTIONS)
  __DECLARE_VAR(BOOL,INGEAR)
  __DECLARE_VAR(BOOL,BUSY)
  __DECLARE_VAR(BOOL,ACTIVE)
  __DECLARE_VAR(BOOL,COMMANDABORTED)
  __DECLARE_VAR(BOOL,ERROR)
  __DECLARE_VAR(UINT,ERRORID)

  // FB private variables - TEMP, private and located variables

} MC_GEARIN;

void MC_GEARIN_init__(MC_GEARIN *data__, BOOL retain);
// Code part
void MC_GEARIN_body__(MC_GEARIN *data__);
// FUNCTION_BLOCK MC_GROUPRESET
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXESGROUP)
  __DECLARE_VAR(BOOL,EXECUTE)
  __DECLARE_VAR(BOOL,DONE)
  __DECLARE_VAR(BOOL,BUSY)
  __DECLARE_VAR(BOOL,ERROR)
  __DECLARE_VAR(UINT,ERRORID)

  // FB private variables - TEMP, private and located variables

} MC_GROUPRESET;

void MC_GROUPRESET_init__(MC_GROUPRESET *data__, BOOL retain);
// Code part
void MC_GROUPRESET_body__(MC_GROUPRESET *data__);
// FUNCTION_BLOCK MC_GEARINPOSCA
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,MASTER)
  __DECLARE_VAR(INT,SLAVE)
  __DECLARE_VAR(BOOL,EXECUTE)
  __DECLARE_VAR(BOOL,CONTINUOUSUPDATE)
  __DECLARE_VAR(LREAL,RATIONUMERATOR)
  __DECLARE_VAR(INT,RATIODENUMERATOR)
  __DECLARE_VAR(LREAL,MASTERSYNCPOSITION)
  __DECLARE_VAR(LREAL,SLAVESYNCPOSITION)
  __DECLARE_VAR(INT,SYNCSTRATEGY)
  __DECLARE_VAR(INT,SYNCMODE)
  __DECLARE_VAR(LREAL,MASTERSTARTDISTANCE)
  __DECLARE_VAR(LREAL,VELOCITY)
  __DECLARE_VAR(LREAL,ACCELERATION)
  __DECLARE_VAR(LREAL,DECELERATION)
  __DECLARE_VAR(LREAL,JERK)
  __DECLARE_VAR(LREAL,GAP)
  __DECLARE_VAR(INT,BUFFERMODE)
  __DECLARE_VAR(INT,OPTIONS)
  __DECLARE_VAR(BOOL,STARTSYNC)
  __DECLARE_VAR(BOOL,STARTSYNC0)
  __DECLARE_VAR(BOOL,INSYNC)
  __DECLARE_VAR(BOOL,BUSY)
  __DECLARE_VAR(BOOL,ACTIVE)
  __DECLARE_VAR(BOOL,COMMANDABORTED)
  __DECLARE_VAR(BOOL,ERROR)
  __DECLARE_VAR(UINT,ERRORID)

  // FB private variables - TEMP, private and located variables

} MC_GEARINPOSCA;

void MC_GEARINPOSCA_init__(MC_GEARINPOSCA *data__, BOOL retain);
// Code part
void MC_GEARINPOSCA_body__(MC_GEARINPOSCA *data__);
// FUNCTION_BLOCK MC_MOVEABSOLUTECA
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXIS)
  __DECLARE_VAR(BOOL,EXCUTE)
  __DECLARE_VAR(BOOL,CONTINUOUSUPDATE)
  __DECLARE_VAR(LREAL,POSITION)
  __DECLARE_VAR(LREAL,VELOCITY)
  __DECLARE_VAR(LREAL,ACCELERATION)
  __DECLARE_VAR(LREAL,DECELERATION)
  __DECLARE_VAR(LREAL,JERK)
  __DECLARE_VAR(LREAL,GAP)
  __DECLARE_VAR(INT,BUFFERMODE)
  __DECLARE_VAR(INT,DIRECTION)
  __DECLARE_VAR(INT,OPTIONS)
  __DECLARE_VAR(BOOL,DONE)
  __DECLARE_VAR(BOOL,BUSY)
  __DECLARE_VAR(BOOL,ACTIVE)
  __DECLARE_VAR(BOOL,COMMANDABORTED)
  __DECLARE_VAR(BOOL,ERROR)
  __DECLARE_VAR(UINT,ERRORID)

  // FB private variables - TEMP, private and located variables

} MC_MOVEABSOLUTECA;

void MC_MOVEABSOLUTECA_init__(MC_MOVEABSOLUTECA *data__, BOOL retain);
// Code part
void MC_MOVEABSOLUTECA_body__(MC_MOVEABSOLUTECA *data__);
// FUNCTION_BLOCK MC_GROUPENABLE
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXESGROUP)
  __DECLARE_VAR(BOOL,EXECUTE)
  __DECLARE_VAR(BOOL,DONE)
  __DECLARE_VAR(BOOL,BUSY)
  __DECLARE_VAR(BOOL,ERROR)
  __DECLARE_VAR(UDINT,ERRORID)

  // FB private variables - TEMP, private and located variables

} MC_GROUPENABLE;

void MC_GROUPENABLE_init__(MC_GROUPENABLE *data__, BOOL retain);
// Code part
void MC_GROUPENABLE_body__(MC_GROUPENABLE *data__);
// FUNCTION_BLOCK MC_CHECKMOVER
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,DONE)

  // FB private variables - TEMP, private and located variables

} MC_CHECKMOVER;

void MC_CHECKMOVER_init__(MC_CHECKMOVER *data__, BOOL retain);
// Code part
void MC_CHECKMOVER_body__(MC_CHECKMOVER *data__);
// FUNCTION_BLOCK MC_HALTCA
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXIS)
  __DECLARE_VAR(BOOL,EXCUTE)
  __DECLARE_VAR(LREAL,DECELERATION)
  __DECLARE_VAR(LREAL,JERK)
  __DECLARE_VAR(LREAL,GAP)
  __DECLARE_VAR(INT,OPTIONS)
  __DECLARE_VAR(BOOL,BUSY)
  __DECLARE_VAR(BOOL,DONE)
  __DECLARE_VAR(BOOL,ACTIVE)
  __DECLARE_VAR(BOOL,COMMANDABORTED)
  __DECLARE_VAR(BOOL,ERROR)
  __DECLARE_VAR(UDINT,ERRORID)

  // FB private variables - TEMP, private and located variables

} MC_HALTCA;

void MC_HALTCA_init__(MC_HALTCA *data__, BOOL retain);
// Code part
void MC_HALTCA_body__(MC_HALTCA *data__);
// FUNCTION_BLOCK MC_RESET
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXIS)
  __DECLARE_VAR(BOOL,EXECUTE)
  __DECLARE_VAR(BOOL,DONE)
  __DECLARE_VAR(BOOL,BUSY)
  __DECLARE_VAR(BOOL,ERROR)
  __DECLARE_VAR(UDINT,ERRORID)

  // FB private variables - TEMP, private and located variables

} MC_RESET;

void MC_RESET_init__(MC_RESET *data__, BOOL retain);
// Code part
void MC_RESET_body__(MC_RESET *data__);
// FUNCTION_BLOCK MC_POWER
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXIS)
  __DECLARE_VAR(BOOL,ENABLE)
  __DECLARE_VAR(BOOL,ENABLE_POSITIVE)
  __DECLARE_VAR(BOOL,ENABLE_NEGATIVE)
  __DECLARE_VAR(LREAL,OVERRIDE)
  __DECLARE_VAR(INT,BUFFERMODE)
  __DECLARE_VAR(INT,OPTIONS)
  __DECLARE_VAR(BOOL,STATUS)
  __DECLARE_VAR(BOOL,BUSY)
  __DECLARE_VAR(BOOL,ACTIVE)
  __DECLARE_VAR(BOOL,ERROR)
  __DECLARE_VAR(BOOL,ERRORID)

  // FB private variables - TEMP, private and located variables

} MC_POWER;

void MC_POWER_init__(MC_POWER *data__, BOOL retain);
// Code part
void MC_POWER_body__(MC_POWER *data__);
// FUNCTION_BLOCK MC_GROUPREADSTATUS
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXESGROUP)
  __DECLARE_VAR(BOOL,EXECUTE)
  __DECLARE_VAR(BOOL,VALID)
  __DECLARE_VAR(BOOL,BUSY)
  __DECLARE_VAR(BOOL,GROUPMOVING)
  __DECLARE_VAR(BOOL,GROUPHOMING)
  __DECLARE_VAR(BOOL,GROUPERRORSTOP)
  __DECLARE_VAR(BOOL,GROUPNOTREADY)
  __DECLARE_VAR(BOOL,GROUPSTANDBY)
  __DECLARE_VAR(BOOL,GROUPSTOPPING)
  __DECLARE_VAR(BOOL,GROUPDISABLED)
  __DECLARE_VAR(BOOL,ALLAXESSTANDING)
  __DECLARE_VAR(BOOL,CONSTANTVELOCITY)
  __DECLARE_VAR(BOOL,ACCELERATING)
  __DECLARE_VAR(BOOL,DECELERATING)
  __DECLARE_VAR(BOOL,INPOSITION)
  __DECLARE_VAR(BOOL,ERROR)
  __DECLARE_VAR(UDINT,ERRORID)

  // FB private variables - TEMP, private and located variables

} MC_GROUPREADSTATUS;

void MC_GROUPREADSTATUS_init__(MC_GROUPREADSTATUS *data__, BOOL retain);
// Code part
void MC_GROUPREADSTATUS_body__(MC_GROUPREADSTATUS *data__);
// FUNCTION_BLOCK MC_MOVERELATIVECA
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXIS)
  __DECLARE_VAR(BOOL,EXCUTE)
  __DECLARE_VAR(BOOL,CONTINUOUSUPDATE)
  __DECLARE_VAR(LREAL,DISTANCE)
  __DECLARE_VAR(LREAL,VELOCITY)
  __DECLARE_VAR(LREAL,ACCLERATION)
  __DECLARE_VAR(LREAL,DECELERATION)
  __DECLARE_VAR(LREAL,JERK)
  __DECLARE_VAR(LREAL,GAP)
  __DECLARE_VAR(INT,BUFFERMODE)
  __DECLARE_VAR(INT,OPTIONS)
  __DECLARE_VAR(BOOL,DONE)
  __DECLARE_VAR(BOOL,BUSY)
  __DECLARE_VAR(BOOL,ACTIVE)
  __DECLARE_VAR(BOOL,COMMANDABORTER)
  __DECLARE_VAR(BOOL,ERROR)
  __DECLARE_VAR(UINT,ERRORID)
  __DECLARE_VAR(UINT,ERRORID0)

  // FB private variables - TEMP, private and located variables

} MC_MOVERELATIVECA;

void MC_MOVERELATIVECA_init__(MC_MOVERELATIVECA *data__, BOOL retain);
// Code part
void MC_MOVERELATIVECA_body__(MC_MOVERELATIVECA *data__);
// FUNCTION_BLOCK MC_REMOVEAXISFROMGROUP
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXESGROUP)
  __DECLARE_VAR(INT,AXIS)
  __DECLARE_VAR(BOOL,DONE)
  __DECLARE_VAR(BOOL,BUSY)
  __DECLARE_VAR(BOOL,ERROR)
  __DECLARE_VAR(UDINT,ERRORID)

  // FB private variables - TEMP, private and located variables

} MC_REMOVEAXISFROMGROUP;

void MC_REMOVEAXISFROMGROUP_init__(MC_REMOVEAXISFROMGROUP *data__, BOOL retain);
// Code part
void MC_REMOVEAXISFROMGROUP_body__(MC_REMOVEAXISFROMGROUP *data__);
// FUNCTION_BLOCK MC_GROUPDISABLE
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(INT,AXESGROUP)
  __DECLARE_VAR(BOOL,EXECUTE)
  __DECLARE_VAR(BOOL,DONE)
  __DECLARE_VAR(BOOL,BUSY)
  __DECLARE_VAR(BOOL,ERROR)
  __DECLARE_VAR(UINT,ERRORID)

  // FB private variables - TEMP, private and located variables

} MC_GROUPDISABLE;

void MC_GROUPDISABLE_init__(MC_GROUPDISABLE *data__, BOOL retain);
// Code part
void MC_GROUPDISABLE_body__(MC_GROUPDISABLE *data__);
// FUNCTION_BLOCK MC_DELAY
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,IN)
  __DECLARE_VAR(LREAL,PT)
  __DECLARE_VAR(BOOL,Q)
  __DECLARE_VAR(LREAL,ET)

  // FB private variables - TEMP, private and located variables

} MC_DELAY;

void MC_DELAY_init__(MC_DELAY *data__, BOOL retain);
// Code part
void MC_DELAY_body__(MC_DELAY *data__);
// PROGRAM MAIN
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  MC_POWER FBMCPOWER;
  __DECLARE_VAR(BOOL,HELLO)

} MAIN;

void MAIN_init__(MAIN *data__, BOOL retain);
// Code part
void MAIN_body__(MAIN *data__);
#endif //__POUS_H
