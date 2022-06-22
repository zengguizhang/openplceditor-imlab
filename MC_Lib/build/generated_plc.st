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
