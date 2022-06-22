void LOGGER_init__(LOGGER *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MSG,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->LEVEL,LOGLEVEL__INFO,retain)
  __INIT_VAR(data__->TRIG0,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void LOGGER_body__(LOGGER *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  if ((__GET_VAR(data__->TRIG,) && !(__GET_VAR(data__->TRIG0,)))) {
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  
    #undef GetFbVar
    #undef SetFbVar
;
  };
  __SET_VAR(data__->,TRIG0,,__GET_VAR(data__->TRIG,));

  goto __end;

__end:
  return;
} // LOGGER_body__() 





void PYTHON_EVAL_init__(PYTHON_EVAL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_EVAL_body__(PYTHON_EVAL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(0, data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_EVAL_body__() 





void PYTHON_POLL_init__(PYTHON_POLL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_POLL_body__(PYTHON_POLL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(1,(PYTHON_EVAL*)(void*)data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_POLL_body__() 





void PYTHON_GEAR_init__(PYTHON_GEAR *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->N,0,retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  PYTHON_EVAL_init__(&data__->PY_EVAL,retain);
  __INIT_VAR(data__->COUNTER,0,retain)
  __INIT_VAR(data__->ADD10_OUT,0,retain)
  __INIT_VAR(data__->EQ13_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SEL15_OUT,0,retain)
  __INIT_VAR(data__->AND7_OUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_GEAR_body__(PYTHON_GEAR *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,ADD10_OUT,,ADD__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->COUNTER,),
    (UINT)1));
  __SET_VAR(data__->,EQ13_OUT,,EQ__BOOL__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->N,),
    (UINT)__GET_VAR(data__->ADD10_OUT,)));
  __SET_VAR(data__->,SEL15_OUT,,SEL__UINT__BOOL__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (BOOL)__GET_VAR(data__->EQ13_OUT,),
    (UINT)__GET_VAR(data__->ADD10_OUT,),
    (UINT)0));
  __SET_VAR(data__->,COUNTER,,__GET_VAR(data__->SEL15_OUT,));
  __SET_VAR(data__->,AND7_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->EQ13_OUT,),
    (BOOL)__GET_VAR(data__->TRIG,)));
  __SET_VAR(data__->PY_EVAL.,TRIG,,__GET_VAR(data__->AND7_OUT,));
  __SET_VAR(data__->PY_EVAL.,CODE,,__GET_VAR(data__->CODE,));
  PYTHON_EVAL_body__(&data__->PY_EVAL);
  __SET_VAR(data__->,ACK,,__GET_VAR(data__->PY_EVAL.ACK,));
  __SET_VAR(data__->,RESULT,,__GET_VAR(data__->PY_EVAL.RESULT,));

  goto __end;

__end:
  return;
} // PYTHON_GEAR_body__() 





void MC_INITSYSTEM_init__(MC_INITSYSTEM *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->DONE,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void MC_INITSYSTEM_body__(MC_INITSYSTEM *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  goto __end;

  goto __end;

__end:
  return;
} // MC_INITSYSTEM_body__() 





// FUNCTION
LOGLEVEL FUNCTION0(
  BOOL EN, 
  BOOL *__ENO, 
  BOOL VAR1)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  LOGLEVEL FUNCTION0 = LOGLEVEL__INFO;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return FUNCTION0;
  }
  goto __end;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return FUNCTION0;
}


void MC_CLOSESYSTEM_init__(MC_CLOSESYSTEM *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->DONE,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void MC_CLOSESYSTEM_body__(MC_CLOSESYSTEM *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  goto __end;

  goto __end;

__end:
  return;
} // MC_CLOSESYSTEM_body__() 





void MC_EMERGENCYSTOPSYSTEM_init__(MC_EMERGENCYSTOPSYSTEM *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->DONE,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void MC_EMERGENCYSTOPSYSTEM_body__(MC_EMERGENCYSTOPSYSTEM *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  goto __end;

  goto __end;

__end:
  return;
} // MC_EMERGENCYSTOPSYSTEM_body__() 





void MC_READSTATUS_init__(MC_READSTATUS *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXIS,0,retain)
  __INIT_VAR(data__->EXECUTE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VALID,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BUSY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERROR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERRORID,0,retain)
  __INIT_VAR(data__->ERRORSTOP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DISABLED,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STOPPING,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STANDSTILL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DISCRETEMOTION,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONTINUOUSMOTION,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SYNCHRONIZEMOTION,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->HOMING,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONSTANTVELOCITY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ACCELERATING,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DECELERATING,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STATUS,0,retain)
}

// Code part
void MC_READSTATUS_body__(MC_READSTATUS *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,AXIS,,1);

  goto __end;

__end:
  return;
} // MC_READSTATUS_body__() 





void MC_GEARIN_init__(MC_GEARIN *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->MASTER,0,retain)
  __INIT_VAR(data__->SLAVE,0,retain)
  __INIT_VAR(data__->EXECUTE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RATIONUMERATOR,0,retain)
  __INIT_VAR(data__->RATIODENOMINATOR,0,retain)
  __INIT_VAR(data__->ACCELERATION,0,retain)
  __INIT_VAR(data__->DECELERATION,0,retain)
  __INIT_VAR(data__->JERK,0,retain)
  __INIT_VAR(data__->BUFFERMODE,0,retain)
  __INIT_VAR(data__->OPTIONS,0,retain)
  __INIT_VAR(data__->INGEAR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BUSY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ACTIVE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->COMMANDABORTED,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERROR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERRORID,0,retain)
}

// Code part
void MC_GEARIN_body__(MC_GEARIN *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,MASTER,,1);

  goto __end;

__end:
  return;
} // MC_GEARIN_body__() 





void MC_GROUPRESET_init__(MC_GROUPRESET *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXESGROUP,0,retain)
  __INIT_VAR(data__->EXECUTE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DONE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BUSY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERROR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERRORID,0,retain)
}

// Code part
void MC_GROUPRESET_body__(MC_GROUPRESET *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,AXESGROUP,,1);

  goto __end;

__end:
  return;
} // MC_GROUPRESET_body__() 





void MC_GEARINPOSCA_init__(MC_GEARINPOSCA *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->MASTER,0,retain)
  __INIT_VAR(data__->SLAVE,0,retain)
  __INIT_VAR(data__->EXECUTE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONTINUOUSUPDATE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RATIONUMERATOR,0,retain)
  __INIT_VAR(data__->RATIODENUMERATOR,0,retain)
  __INIT_VAR(data__->MASTERSYNCPOSITION,0,retain)
  __INIT_VAR(data__->SLAVESYNCPOSITION,0,retain)
  __INIT_VAR(data__->SYNCSTRATEGY,0,retain)
  __INIT_VAR(data__->SYNCMODE,0,retain)
  __INIT_VAR(data__->MASTERSTARTDISTANCE,0,retain)
  __INIT_VAR(data__->VELOCITY,0,retain)
  __INIT_VAR(data__->ACCELERATION,0,retain)
  __INIT_VAR(data__->DECELERATION,0,retain)
  __INIT_VAR(data__->JERK,0,retain)
  __INIT_VAR(data__->GAP,0,retain)
  __INIT_VAR(data__->BUFFERMODE,0,retain)
  __INIT_VAR(data__->OPTIONS,0,retain)
  __INIT_VAR(data__->STARTSYNC,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STARTSYNC0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->INSYNC,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BUSY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ACTIVE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->COMMANDABORTED,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERROR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERRORID,0,retain)
}

// Code part
void MC_GEARINPOSCA_body__(MC_GEARINPOSCA *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,MASTER,,1);

  goto __end;

__end:
  return;
} // MC_GEARINPOSCA_body__() 





void MC_MOVEABSOLUTECA_init__(MC_MOVEABSOLUTECA *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXIS,0,retain)
  __INIT_VAR(data__->EXCUTE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONTINUOUSUPDATE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->POSITION,0,retain)
  __INIT_VAR(data__->VELOCITY,0,retain)
  __INIT_VAR(data__->ACCELERATION,0,retain)
  __INIT_VAR(data__->DECELERATION,0,retain)
  __INIT_VAR(data__->JERK,0,retain)
  __INIT_VAR(data__->GAP,0,retain)
  __INIT_VAR(data__->BUFFERMODE,0,retain)
  __INIT_VAR(data__->DIRECTION,0,retain)
  __INIT_VAR(data__->OPTIONS,0,retain)
  __INIT_VAR(data__->DONE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BUSY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ACTIVE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->COMMANDABORTED,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERROR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERRORID,0,retain)
}

// Code part
void MC_MOVEABSOLUTECA_body__(MC_MOVEABSOLUTECA *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,AXIS,,1);

  goto __end;

__end:
  return;
} // MC_MOVEABSOLUTECA_body__() 





void MC_GROUPENABLE_init__(MC_GROUPENABLE *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXESGROUP,0,retain)
  __INIT_VAR(data__->EXECUTE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DONE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BUSY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERROR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERRORID,0,retain)
}

// Code part
void MC_GROUPENABLE_body__(MC_GROUPENABLE *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,AXESGROUP,,1);

  goto __end;

__end:
  return;
} // MC_GROUPENABLE_body__() 





void MC_CHECKMOVER_init__(MC_CHECKMOVER *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->DONE,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void MC_CHECKMOVER_body__(MC_CHECKMOVER *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  goto __end;

  goto __end;

__end:
  return;
} // MC_CHECKMOVER_body__() 





void MC_HALTCA_init__(MC_HALTCA *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXIS,0,retain)
  __INIT_VAR(data__->EXCUTE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DECELERATION,0,retain)
  __INIT_VAR(data__->JERK,0,retain)
  __INIT_VAR(data__->GAP,0,retain)
  __INIT_VAR(data__->OPTIONS,0,retain)
  __INIT_VAR(data__->BUSY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DONE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ACTIVE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->COMMANDABORTED,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERROR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERRORID,0,retain)
}

// Code part
void MC_HALTCA_body__(MC_HALTCA *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,AXIS,,1);

  goto __end;

__end:
  return;
} // MC_HALTCA_body__() 





void MC_RESET_init__(MC_RESET *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXIS,0,retain)
  __INIT_VAR(data__->EXECUTE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DONE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BUSY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERROR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERRORID,0,retain)
}

// Code part
void MC_RESET_body__(MC_RESET *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,AXIS,,1);

  goto __end;

__end:
  return;
} // MC_RESET_body__() 





void MC_POWER_init__(MC_POWER *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXIS,0,retain)
  __INIT_VAR(data__->ENABLE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ENABLE_POSITIVE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ENABLE_NEGATIVE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->OVERRIDE,0,retain)
  __INIT_VAR(data__->BUFFERMODE,0,retain)
  __INIT_VAR(data__->OPTIONS,0,retain)
  __INIT_VAR(data__->STATUS,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BUSY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ACTIVE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERROR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERRORID,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void MC_POWER_body__(MC_POWER *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,AXIS,,1);

  goto __end;

__end:
  return;
} // MC_POWER_body__() 





void MC_GROUPREADSTATUS_init__(MC_GROUPREADSTATUS *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXESGROUP,0,retain)
  __INIT_VAR(data__->EXECUTE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VALID,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BUSY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GROUPMOVING,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GROUPHOMING,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GROUPERRORSTOP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GROUPNOTREADY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GROUPSTANDBY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GROUPSTOPPING,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GROUPDISABLED,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ALLAXESSTANDING,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONSTANTVELOCITY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ACCELERATING,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DECELERATING,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->INPOSITION,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERROR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERRORID,0,retain)
}

// Code part
void MC_GROUPREADSTATUS_body__(MC_GROUPREADSTATUS *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,AXESGROUP,,1);

  goto __end;

__end:
  return;
} // MC_GROUPREADSTATUS_body__() 





void MC_MOVERELATIVECA_init__(MC_MOVERELATIVECA *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXIS,0,retain)
  __INIT_VAR(data__->EXCUTE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONTINUOUSUPDATE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DISTANCE,0,retain)
  __INIT_VAR(data__->VELOCITY,0,retain)
  __INIT_VAR(data__->ACCLERATION,0,retain)
  __INIT_VAR(data__->DECELERATION,0,retain)
  __INIT_VAR(data__->JERK,0,retain)
  __INIT_VAR(data__->GAP,0,retain)
  __INIT_VAR(data__->BUFFERMODE,0,retain)
  __INIT_VAR(data__->OPTIONS,0,retain)
  __INIT_VAR(data__->DONE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BUSY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ACTIVE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->COMMANDABORTER,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERROR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERRORID,0,retain)
  __INIT_VAR(data__->ERRORID0,0,retain)
}

// Code part
void MC_MOVERELATIVECA_body__(MC_MOVERELATIVECA *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,AXIS,,1);

  goto __end;

__end:
  return;
} // MC_MOVERELATIVECA_body__() 





void MC_REMOVEAXISFROMGROUP_init__(MC_REMOVEAXISFROMGROUP *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXESGROUP,0,retain)
  __INIT_VAR(data__->AXIS,0,retain)
  __INIT_VAR(data__->DONE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BUSY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERROR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERRORID,0,retain)
}

// Code part
void MC_REMOVEAXISFROMGROUP_body__(MC_REMOVEAXISFROMGROUP *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,AXESGROUP,,1);

  goto __end;

__end:
  return;
} // MC_REMOVEAXISFROMGROUP_body__() 





void MC_GROUPDISABLE_init__(MC_GROUPDISABLE *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->AXESGROUP,0,retain)
  __INIT_VAR(data__->EXECUTE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DONE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BUSY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERROR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ERRORID,0,retain)
}

// Code part
void MC_GROUPDISABLE_body__(MC_GROUPDISABLE *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,AXESGROUP,,1);

  goto __end;

__end:
  return;
} // MC_GROUPDISABLE_body__() 





void MC_DELAY_init__(MC_DELAY *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->IN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PT,0,retain)
  __INIT_VAR(data__->Q,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ET,0,retain)
}

// Code part
void MC_DELAY_body__(MC_DELAY *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,IN,,1);

  goto __end;

__end:
  return;
} // MC_DELAY_body__() 





void MAIN_init__(MAIN *data__, BOOL retain) {
  MC_POWER_init__(&data__->FBMCPOWER,retain);
  __INIT_VAR(data__->HELLO,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void MAIN_body__(MAIN *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->FBMCPOWER.,AXIS,,1);
  MC_POWER_body__(&data__->FBMCPOWER);
  goto __end;

  goto __end;

__end:
  return;
} // MAIN_body__() 





