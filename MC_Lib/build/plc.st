TYPE
  LOGLEVEL : (CRITICAL, WARNING, INFO, DEBUG) := INFO;
END_TYPE

FUNCTION_BLOCK LOGGER
  VAR_INPUT
    TRIG : BOOL;
    MSG : STRING;
    LEVEL : LOGLEVEL := INFO;
  END_VAR
  VAR
    TRIG0 : BOOL;
  END_VAR

  IF TRIG AND NOT TRIG0 THEN
  {{
   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  }}
  END_IF;
  TRIG0:=TRIG;
END_FUNCTION_BLOCK



FUNCTION_BLOCK python_eval
  VAR_INPUT
    TRIG : BOOL;
    CODE : STRING;
  END_VAR
  VAR_OUTPUT
    ACK : BOOL;
    RESULT : STRING;
  END_VAR
  VAR
    STATE : DWORD;
    BUFFER : STRING;
    PREBUFFER : STRING;
    TRIGM1 : BOOL;
    TRIGGED : BOOL;
  END_VAR

  {extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(0, data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK python_poll
  VAR_INPUT
    TRIG : BOOL;
    CODE : STRING;
  END_VAR
  VAR_OUTPUT
    ACK : BOOL;
    RESULT : STRING;
  END_VAR
  VAR
    STATE : DWORD;
    BUFFER : STRING;
    PREBUFFER : STRING;
    TRIGM1 : BOOL;
    TRIGGED : BOOL;
  END_VAR

  {extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(1,(PYTHON_EVAL*)(void*)data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK python_gear
  VAR_INPUT
    N : UINT;
    TRIG : BOOL;
    CODE : STRING;
  END_VAR
  VAR_OUTPUT
    ACK : BOOL;
    RESULT : STRING;
  END_VAR
  VAR
    py_eval : python_eval;
    COUNTER : UINT;
    ADD10_OUT : UINT;
    EQ13_OUT : BOOL;
    SEL15_OUT : UINT;
    AND7_OUT : BOOL;
  END_VAR

  ADD10_OUT := ADD(COUNTER, 1);
  EQ13_OUT := EQ(N, ADD10_OUT);
  SEL15_OUT := SEL(EQ13_OUT, ADD10_OUT, 0);
  COUNTER := SEL15_OUT;
  AND7_OUT := AND(EQ13_OUT, TRIG);
  py_eval(TRIG := AND7_OUT, CODE := CODE);
  ACK := py_eval.ACK;
  RESULT := py_eval.RESULT;
END_FUNCTION_BLOCK


FUNCTION_BLOCK MC_InitSystem
  VAR_OUTPUT
    Done : BOOL;
  END_VAR

  return;
END_FUNCTION_BLOCK

FUNCTION function0 : LOGLEVEL
  VAR_INPUT
    VAR1 : BOOL := TRUE;
  END_VAR

  return;
END_FUNCTION

FUNCTION_BLOCK MC_CloseSystem
  VAR_OUTPUT
    Done : BOOL;
  END_VAR

  return;
END_FUNCTION_BLOCK

FUNCTION_BLOCK MC_EmergencyStopSystem
  VAR_OUTPUT
    Done : BOOL;
  END_VAR

  return;
END_FUNCTION_BLOCK

FUNCTION_BLOCK MC_ReadStatus
  VAR_INPUT
    Axis : INT;
    Execute : BOOL;
  END_VAR
  VAR_OUTPUT
    Valid : BOOL;
    Busy : BOOL;
    Error : BOOL;
    ErrorID : UINT;
    ErrorStop : BOOL;
    Disabled : BOOL;
    Stopping : BOOL;
    Standstill : BOOL;
    DiscreteMotion : BOOL;
    ContinuousMotion : BOOL;
    SynchronizeMotion : BOOL;
    Homing : BOOL;
    ConstantVelocity : BOOL;
    Accelerating : BOOL;
    Decelerating : BOOL;
    Status : INT;
  END_VAR

  Axis := 1;
END_FUNCTION_BLOCK

FUNCTION_BLOCK MC_GearIn
  VAR_INPUT
    Master : INT;
    Slave : INT;
    Execute : BOOL;
    RatioNumerator : LREAL;
    RatioDenominator : UINT;
    Acceleration : LREAL;
    Deceleration : LREAL;
    Jerk : LREAL;
    BufferMode : INT;
    Options : INT;
  END_VAR
  VAR_OUTPUT
    InGear : BOOL;
    Busy : BOOL;
    Active : BOOL;
    CommandAborted : BOOL;
    Error : BOOL;
    ErrorID : UINT;
  END_VAR

  Master := 1;
END_FUNCTION_BLOCK

FUNCTION_BLOCK MC_GroupReset
  VAR_INPUT
    AxesGroup : INT;
    Execute : BOOL;
  END_VAR
  VAR_OUTPUT
    Done : BOOL;
    Busy : BOOL;
    Error : BOOL;
    ErrorId : UINT;
  END_VAR

  AxesGroup := 1;
END_FUNCTION_BLOCK

FUNCTION_BLOCK MC_GearInPosCA
  VAR_INPUT
    Master : INT;
    Slave : INT;
    Execute : BOOL;
    ContinuousUpdate : BOOL;
    RatioNumerator : LREAL;
    RatioDenumerator : INT;
    MasterSyncPosition : LREAL;
    SlaveSyncPosition : LREAL;
    SyncStrategy : INT;
    SyncMode : INT;
    MasterStartDistance : LREAL;
    Velocity : LREAL;
    Acceleration : LREAL;
    Deceleration : LREAL;
    Jerk : LREAL;
    Gap : LREAL;
    BufferMode : INT;
    Options : INT;
    StartSync : BOOL;
  END_VAR
  VAR_OUTPUT
    StartSync0 : BOOL;
    InSync : BOOL;
    Busy : BOOL;
    Active : BOOL;
    CommandAborted : BOOL;
    Error : BOOL;
    ErrorId : UINT;
  END_VAR

  Master := 1;
END_FUNCTION_BLOCK

FUNCTION_BLOCK MC_MoveAbsoluteCA
  VAR_INPUT
    Axis : INT;
    Excute : BOOL;
    ContinuousUpdate : BOOL;
    Position : LREAL;
    Velocity : LREAL;
    Acceleration : LREAL;
    Deceleration : LREAL;
    Jerk : LREAL;
    Gap : LREAL;
    BufferMode : INT;
    Direction : INT;
    Options : INT;
  END_VAR
  VAR_OUTPUT
    Done : BOOL;
    Busy : BOOL;
    Active : BOOL;
    CommandAborted : BOOL;
    Error : BOOL;
    ErrorId : UINT;
  END_VAR

  Axis := 1;
END_FUNCTION_BLOCK

FUNCTION_BLOCK MC_GroupEnable
  VAR_INPUT
    AxesGroup : INT;
    Execute : BOOL;
  END_VAR
  VAR_OUTPUT
    Done : BOOL;
    Busy : BOOL;
    Error : BOOL;
    ErrorId : UDINT;
  END_VAR

  AxesGroup := 1;
END_FUNCTION_BLOCK

FUNCTION_BLOCK MC_CheckMover
  VAR_OUTPUT
    Done : BOOL;
  END_VAR

  return;
END_FUNCTION_BLOCK

FUNCTION_BLOCK MC_HaltCA
  VAR_INPUT
    Axis : INT;
    Excute : BOOL;
    Deceleration : LREAL;
    Jerk : LREAL;
    Gap : LREAL;
    Options : INT;
  END_VAR
  VAR_OUTPUT
    Busy : BOOL;
    Done : BOOL;
    Active : BOOL;
    CommandAborted : BOOL;
    Error : BOOL;
    ErrorId : UDINT;
  END_VAR

  Axis := 1;
END_FUNCTION_BLOCK

FUNCTION_BLOCK MC_Reset
  VAR_INPUT
    Axis : INT;
    Execute : BOOL;
  END_VAR
  VAR_OUTPUT
    Done : BOOL;
    Busy : BOOL;
    Error : BOOL;
    ErrorID : UDINT;
  END_VAR

  Axis := 1;
END_FUNCTION_BLOCK

FUNCTION_BLOCK MC_Power
  VAR_INPUT
    Axis : INT;
    Enable : BOOL;
    Enable_Positive : BOOL;
    Enable_Negative : BOOL;
    Override : LREAL;
    BufferMode : INT;
    Options : INT;
  END_VAR
  VAR_OUTPUT
    Status : BOOL;
    Busy : BOOL;
    Active : BOOL;
    Error : BOOL;
    ErrorID : BOOL;
  END_VAR

  Axis := 1;
END_FUNCTION_BLOCK

FUNCTION_BLOCK MC_GroupReadStatus
  VAR_INPUT
    AxesGroup : INT;
    Execute : BOOL;
  END_VAR
  VAR_OUTPUT
    Valid : BOOL;
    Busy : BOOL;
    GroupMoving : BOOL;
    GroupHoming : BOOL;
    GroupErrorStop : BOOL;
    GroupNotReady : BOOL;
    GroupStandby : BOOL;
    GroupStopping : BOOL;
    GroupDisabled : BOOL;
    AllAxesStanding : BOOL;
    ConstantVelocity : BOOL;
    Accelerating : BOOL;
    Decelerating : BOOL;
    InPosition : BOOL;
    Error : BOOL;
    ErrorId : UDINT;
  END_VAR

  AxesGroup := 1;
END_FUNCTION_BLOCK

FUNCTION_BLOCK MC_MoveRelativeCA
  VAR_INPUT
    Axis : INT;
    Excute : BOOL;
    ContinuousUpdate : BOOL;
    Distance : LREAL;
    Velocity : LREAL;
    Accleration : LREAL;
    Deceleration : LREAL;
    Jerk : LREAL;
    Gap : LREAL;
    BufferMode : INT;
    Options : INT;
  END_VAR
  VAR_OUTPUT
    Done : BOOL;
    Busy : BOOL;
    Active : BOOL;
    CommandAborter : BOOL;
    Error : BOOL;
    ErrorId : UINT;
    ErrorId0 : UINT;
  END_VAR

  Axis := 1;
END_FUNCTION_BLOCK

FUNCTION_BLOCK MC_RemoveAxisFromGroup
  VAR_INPUT
    AxesGroup : INT;
    Axis : INT;
  END_VAR
  VAR_OUTPUT
    Done : BOOL;
    Busy : BOOL;
    Error : BOOL;
    ErrorId : UDINT;
  END_VAR

  AxesGroup := 1;
END_FUNCTION_BLOCK

FUNCTION_BLOCK MC_GroupDisable
  VAR_INPUT
    AxesGroup : INT;
    Execute : BOOL;
  END_VAR
  VAR_OUTPUT
    Done : BOOL;
    Busy : BOOL;
    Error : BOOL;
    ErrorId : UINT;
  END_VAR

  AxesGroup := 1;
END_FUNCTION_BLOCK

FUNCTION_BLOCK MC_Delay
  VAR_INPUT
    IN : BOOL;
    PT : LREAL;
  END_VAR
  VAR_OUTPUT
    Q : BOOL;
    ET : LREAL;
  END_VAR

  IN := 1;
END_FUNCTION_BLOCK

PROGRAM MAIN
  VAR
    fbMCPower : MC_Power;
    hello : BOOL;
  END_VAR

  fbMCPower(Axis := 1);

  return;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : MAIN;
  END_RESOURCE
END_CONFIGURATION
