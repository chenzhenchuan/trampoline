//---------------------------------------------------------------------------*
//                                                                           *
//                    File 'goil_timing_prot_attrs.cpp'                      *
//                        Generated by version 1.9.4                         *
//                    november 12th, 2009, at 11h43'30"                      *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//---------------------------------------------------------------------------*

#include "version_libpm.h"
#if LIBPM_VERSION != 599
  #error "This file has been compiled with a version of GALGAS different than the version of libpm"
#endif

//---------------------------------------------------------------------------*

#include <typeinfo>
#include "utilities/MF_MemoryControl.h"
#include "files/C_TextFileWrite.h"
#include "galgas/C_galgas_CLI_Options.h"
#include "goil_timing_prot_attrs.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "goil_timing_prot_attrs.ggs", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//          Implementation of production rule 'timing_prot_attrs'            *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_timing_prot_attrs::
pr_timing_prot_attrs_goil_timing_prot_attrs_22_24_ (goil_lexique & inLexique,
                                GGS_basic_type  &var_cas_exe_budget,
                                GGS_basic_type  &var_cas_exe_time,
                                GGS_basic_type  &var_cas_count_limit,
                                GGS_basic_type  &var_cas_time_frame,
                                GGS_basic_type  &var_cas_os_it_lock,
                                GGS_basic_type  &var_cas_all_it_lock,
                                GGS_rezlock_map  &var_cas_rezlocks) {
  var_cas_exe_budget = GGS_void ::constructor_new (inLexique, GGS_location (inLexique) COMMA_HERE) ;
  var_cas_exe_time = GGS_void ::constructor_new (inLexique, GGS_location (inLexique) COMMA_HERE) ;
  var_cas_count_limit = GGS_void ::constructor_new (inLexique, GGS_location (inLexique) COMMA_HERE) ;
  var_cas_time_frame = GGS_void ::constructor_new (inLexique, GGS_location (inLexique) COMMA_HERE) ;
  var_cas_os_it_lock = GGS_void ::constructor_new (inLexique, GGS_location (inLexique) COMMA_HERE) ;
  var_cas_all_it_lock = GGS_void ::constructor_new (inLexique, GGS_location (inLexique) COMMA_HERE) ;
  var_cas_rezlocks = GGS_rezlock_map ::constructor_emptyMap (inLexique COMMA_HERE) ;
  { bool syntaxRepeat_0 = true ;
    while (syntaxRepeat_0) {
      switch (select_goil_timing_prot_attrs_0 (inLexique)) {
        case 2 : {
          GGS_luint64  var_cas_eb ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_EXECUTIONBUDGET) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
          inLexique.assignFromAttribute_integerNumber (var_cas_eb) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_uint_5F_number) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
          { const GGS_basic_type _var_1529 = var_cas_exe_budget ; // CAST instruction
            if (_var_1529.getPtr () != NULL) {
              macroValidPointer (_var_1529.getPtr ()) ;
              if (typeid (cPtr_void) == typeid (* (_var_1529.getPtr ()))) {
                var_cas_exe_budget = GGS_uint64_class ::constructor_new (inLexique, GGS_location (inLexique), var_cas_eb.reader_uint64 (inLexique COMMA_SOURCE_FILE_AT_LINE (43)) COMMA_HERE) ;
              }else{
                GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("EXECUTIONBUDGET already declared") COMMA_SOURCE_FILE_AT_LINE (46)) ;
                var_cas_exe_budget.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (46)).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("was previously declared here") COMMA_SOURCE_FILE_AT_LINE (47)) ;
              }
            }
          }
          } break ;
        case 3 : {
          GGS_luint64  var_cas_et ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_EXECUTIONTIME) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
          inLexique.assignFromAttribute_integerNumber (var_cas_et) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_uint_5F_number) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
          { const GGS_basic_type _var_1886 = var_cas_exe_time ; // CAST instruction
            if (_var_1886.getPtr () != NULL) {
              macroValidPointer (_var_1886.getPtr ()) ;
              if (typeid (cPtr_void) == typeid (* (_var_1886.getPtr ()))) {
                var_cas_exe_time = GGS_uint64_class ::constructor_new (inLexique, GGS_location (inLexique), var_cas_et.reader_uint64 (inLexique COMMA_SOURCE_FILE_AT_LINE (52)) COMMA_HERE) ;
              }else{
                GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("EXECUTIONTIME already declared") COMMA_SOURCE_FILE_AT_LINE (55)) ;
                var_cas_exe_time.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (55)).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("was previously declared here") COMMA_SOURCE_FILE_AT_LINE (56)) ;
              }
            }
          }
          } break ;
        case 4 : {
          GGS_luint64  var_cas_cl ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_COUNTLIMIT) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
          inLexique.assignFromAttribute_integerNumber (var_cas_cl) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_uint_5F_number) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
          { const GGS_basic_type _var_2253 = var_cas_count_limit ; // CAST instruction
            if (_var_2253.getPtr () != NULL) {
              macroValidPointer (_var_2253.getPtr ()) ;
              if (typeid (cPtr_void) == typeid (* (_var_2253.getPtr ()))) {
                var_cas_count_limit = GGS_uint32_class ::constructor_new (inLexique, GGS_location (inLexique), var_cas_cl.reader_uint64 (inLexique COMMA_SOURCE_FILE_AT_LINE (61)).reader_uint (inLexique COMMA_SOURCE_FILE_AT_LINE (61)) COMMA_HERE) ;
              }else{
                GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("COUNTLIMIT already declared") COMMA_SOURCE_FILE_AT_LINE (64)) ;
                var_cas_count_limit.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (64)).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("was previously declared here") COMMA_SOURCE_FILE_AT_LINE (65)) ;
              }
            }
          }
          } break ;
        case 5 : {
          GGS_luint64  var_cas_tf ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_TIMEFRAME) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
          inLexique.assignFromAttribute_integerNumber (var_cas_tf) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_uint_5F_number) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
          { const GGS_basic_type _var_2608 = var_cas_time_frame ; // CAST instruction
            if (_var_2608.getPtr () != NULL) {
              macroValidPointer (_var_2608.getPtr ()) ;
              if (typeid (cPtr_void) == typeid (* (_var_2608.getPtr ()))) {
                var_cas_time_frame = GGS_uint64_class ::constructor_new (inLexique, GGS_location (inLexique), var_cas_tf.reader_uint64 (inLexique COMMA_SOURCE_FILE_AT_LINE (70)) COMMA_HERE) ;
              }else{
                GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("TIMEFRAME already declared") COMMA_SOURCE_FILE_AT_LINE (73)) ;
                var_cas_time_frame.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (73)).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("was previously declared here") COMMA_SOURCE_FILE_AT_LINE (74)) ;
              }
            }
          }
          } break ;
        case 6 : {
          GGS_luint64  var_cas_moilt ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_MAXOSINTERRUPTLOCKTIME) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
          inLexique.assignFromAttribute_integerNumber (var_cas_moilt) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_uint_5F_number) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
          { const GGS_basic_type _var_2998 = var_cas_os_it_lock ; // CAST instruction
            if (_var_2998.getPtr () != NULL) {
              macroValidPointer (_var_2998.getPtr ()) ;
              if (typeid (cPtr_void) == typeid (* (_var_2998.getPtr ()))) {
                var_cas_os_it_lock = GGS_uint64_class ::constructor_new (inLexique, GGS_location (inLexique), var_cas_moilt.reader_uint64 (inLexique COMMA_SOURCE_FILE_AT_LINE (79)) COMMA_HERE) ;
              }else{
                GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("MAXOSINTERRUPTLOCKTIME already declared") COMMA_SOURCE_FILE_AT_LINE (82)) ;
                var_cas_os_it_lock.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (82)).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("was previously declared here") COMMA_SOURCE_FILE_AT_LINE (83)) ;
              }
            }
          }
          } break ;
        case 7 : {
          GGS_luint64  var_cas_maitl ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_MAXALLINTERRUPTLOCKTIME) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
          inLexique.assignFromAttribute_integerNumber (var_cas_maitl) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_uint_5F_number) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
          { const GGS_basic_type _var_3393 = var_cas_all_it_lock ; // CAST instruction
            if (_var_3393.getPtr () != NULL) {
              macroValidPointer (_var_3393.getPtr ()) ;
              if (typeid (cPtr_void) == typeid (* (_var_3393.getPtr ()))) {
                var_cas_all_it_lock = GGS_uint64_class ::constructor_new (inLexique, GGS_location (inLexique), var_cas_maitl.reader_uint64 (inLexique COMMA_SOURCE_FILE_AT_LINE (88)) COMMA_HERE) ;
              }else{
                GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("MAXALLINTERRUPTLOCKTIME already declared") COMMA_SOURCE_FILE_AT_LINE (91)) ;
                var_cas_all_it_lock.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (91)).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("was previously declared here") COMMA_SOURCE_FILE_AT_LINE (92)) ;
              }
            }
          }
          } break ;
        case 8 : {
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_LOCKINGTIME) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_RESOURCELOCK) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7B_) COMMA_HERE) ;
          GGS_lstring  var_cas_rez = GGS_lstring ::constructor_new (inLexique, GGS_string (""), GGS_location (inLexique) COMMA_HERE) ;
          GGS_basic_type  var_cas_lock = GGS_void ::constructor_new (inLexique, GGS_location (inLexique) COMMA_HERE) ;
          { bool syntaxRepeat_1 = true ;
            while (syntaxRepeat_1) {
              switch (select_goil_timing_prot_attrs_1 (inLexique)) {
                case 2 : {
                  GGS_lstring  var_cas_r ;
                  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_RESOURCE) COMMA_HERE) ;
                  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
                  inLexique.assignFromAttribute_att_token (var_cas_r) ;
                  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
                  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
                  const GGS_bool cond_3840 = (var_cas_rez.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (101))).operator_isNotEqual (GGS_string ("")) ;
                  if (cond_3840.isBuiltAndTrue ()) {
                    GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("RESOURCE already declared") COMMA_SOURCE_FILE_AT_LINE (103)) ;
                    var_cas_rez.reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("was previously declared here") COMMA_SOURCE_FILE_AT_LINE (104)) ;
                  }else if (cond_3840.isBuiltAndFalse ()) {
                    var_cas_rez = var_cas_r ;
                  }
                  } break ;
                case 3 : {
                  GGS_luint64  var_cas_mrlt ;
                  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_MAXRESOURCELOCKTIME) COMMA_HERE) ;
                  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
                  inLexique.assignFromAttribute_integerNumber (var_cas_mrlt) ;
                  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_uint_5F_number) COMMA_HERE) ;
                  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
                  { const GGS_basic_type _var_4280 = var_cas_lock ; // CAST instruction
                    if (_var_4280.getPtr () != NULL) {
                      macroValidPointer (_var_4280.getPtr ()) ;
                      if (typeid (cPtr_void) == typeid (* (_var_4280.getPtr ()))) {
                        var_cas_lock = GGS_uint64_class ::constructor_new (inLexique, GGS_location (inLexique), var_cas_mrlt.reader_uint64 (inLexique COMMA_SOURCE_FILE_AT_LINE (111)) COMMA_HERE) ;
                      }else{
                        GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("MAXRESOURCELOCKTIME already declared") COMMA_SOURCE_FILE_AT_LINE (114)) ;
                        var_cas_lock.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (114)).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("was previously declared here") COMMA_SOURCE_FILE_AT_LINE (115)) ;
                      }
                    }
                  }
                  } break ;
                default :
                  syntaxRepeat_1 = false ;
                  break ;
              }
            }
          }
          const GGS_bool cond_4421 = (var_cas_rez.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (117))).operator_isEqual (GGS_string ("")) ;
          if (cond_4421.isBuiltAndTrue ()) {
            GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("No RESOURCE declared for LOCKINGTIME") COMMA_SOURCE_FILE_AT_LINE (119)) ;
          }
          GGS_uint64  var_cas_l = GGS_uint64 (0ULL) ;
          { const GGS_basic_type _var_4629 = var_cas_lock ; // CAST instruction
            if (_var_4629.getPtr () != NULL) {
              macroValidPointer (_var_4629.getPtr ()) ;
              if (typeid (cPtr_uint64_class) == typeid (* (_var_4629.getPtr ()))) {
                const GGS_uint64_class var_cas_lu (_var_4629.getPtr ()) ;
                var_cas_l = var_cas_lu.reader_value (inLexique COMMA_SOURCE_FILE_AT_LINE (123)) ;
              }else{
                GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("No MAXRESOURCELOCKTIME declared for LOCKINGTIME") COMMA_SOURCE_FILE_AT_LINE (126)) ;
              }
            }
          }
          var_cas_rezlocks.modifier_put (inLexique, var_cas_rez, var_cas_l COMMA_SOURCE_FILE_AT_LINE (127)) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7D_) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
          } break ;
        default :
          syntaxRepeat_0 = false ;
          break ;
      }
    }
  }
  { const GGS_basic_type _var_4798 = var_cas_time_frame ; // CAST instruction
    if (_var_4798.getPtr () != NULL) {
      macroValidPointer (_var_4798.getPtr ()) ;
      if (typeid (cPtr_void) == typeid (* (_var_4798.getPtr ()))) {
        GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("TIMEFRAME not declared") COMMA_SOURCE_FILE_AT_LINE (131)) ;
      }else{
      }
    }
  }
  { const GGS_basic_type _var_4907 = var_cas_os_it_lock ; // CAST instruction
    if (_var_4907.getPtr () != NULL) {
      macroValidPointer (_var_4907.getPtr ()) ;
      if (typeid (cPtr_void) == typeid (* (_var_4907.getPtr ()))) {
        GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("MAXOSINTERRUPTLOCKTIME not declared") COMMA_SOURCE_FILE_AT_LINE (132)) ;
      }else{
      }
    }
  }
  { const GGS_basic_type _var_5017 = var_cas_all_it_lock ; // CAST instruction
    if (_var_5017.getPtr () != NULL) {
      macroValidPointer (_var_5017.getPtr ()) ;
      if (typeid (cPtr_void) == typeid (* (_var_5017.getPtr ()))) {
        GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("MAXALLINTERRUPTLOCKTIME not declared") COMMA_SOURCE_FILE_AT_LINE (133)) ;
      }else{
      }
    }
  }
}

//---------------------------------------------------------------------------*

