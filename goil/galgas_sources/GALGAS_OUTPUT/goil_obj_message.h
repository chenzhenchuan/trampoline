//---------------------------------------------------------------------------*
//                                                                           *
//                        File 'goil_obj_message.h'                          *
//                        Generated by version 1.9.4                         *
//                    november 12th, 2009, at 11h42'53"                      *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef goil_obj_message_DEFINED
#define goil_obj_message_DEFINED

#include <string.h>

//---------------------------------------------------------------------------*

#include "galgas/C_GGS_Object.h"
#include "galgas/GGS_location.h"
#include "galgas/GGS_data.h"
#include "galgas/GGS_lbool.h"
#include "galgas/GGS_lchar.h"
#include "galgas/GGS_lstring.h"
#include "galgas/GGS_ldouble.h"
#include "galgas/GGS_luint.h"
#include "galgas/GGS_lsint.h"
#include "galgas/GGS_luint64.h"
#include "galgas/GGS_lsint64.h"
#include "galgas/GGS_stringset.h"
#include "galgas/GGS_binaryset.h"
#include "galgas/GGS_filewrapper.h"
#include "galgas/predefined_types.h"
#include "galgas/AC_galgas_class.h"
#include "galgas/AC_galgas_domain.h"
#include "galgas/AC_galgas_mapindex.h"
#include "galgas/AC_galgas_map.h"
#include "galgas/AC_galgas_listmap.h"
#include "galgas/AC_galgas_list.h"
#include "galgas/AC_galgas_sortedlist.h"

//---------------------------------------------------------------------------*

#include "goil_lexique.h"

// Include imported semantics
#include "goil_options.h"
#include "goil_semantics.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                          Class Predeclarations                            *
//                                                                           *
//---------------------------------------------------------------------------*


//---------------------------------------------------------------------------*
//                                                                           *
//                Parser class goil_obj_message declaration                  *
//                                                                           *
//---------------------------------------------------------------------------*

class goil_obj_message {
  public : virtual ~goil_obj_message (void) {}

  protected : virtual void nt_mess_ (goil_lexique &,
                                GGS_message_map  &) = 0 ;

  protected : virtual void nt_message_attributes_ (goil_lexique &,
                                GGS_action_obj  &,
                                GGS_action_obj  &,
                                GGS_lstringlist  &,
                                GGS_ident_map  &,
                                GGS_mess_prop_obj  &) = 0 ;

  protected : virtual void nt_message_property_ (goil_lexique &,
                                GGS_mess_prop_obj  &) = 0 ;

  protected : virtual void nt_notification_property_ (goil_lexique &,
                                GGS_action_obj  &) = 0 ;

  protected : virtual void nt_ssi_attributes_ (goil_lexique &,
                                GGS_mess_prop_obj  &) = 0 ;

  protected : virtual void nt_sse_attributes_ (goil_lexique &,
                                GGS_mess_prop_obj  &) = 0 ;

  protected : virtual void nt_sde_attributes_ (goil_lexique &,
                                GGS_mess_prop_obj  &) = 0 ;

  protected : virtual void nt_sze_attributes_ (goil_lexique &,
                                GGS_mess_prop_obj  &) = 0 ;

  protected : virtual void nt_rzi_attributes_ (goil_lexique &,
                                GGS_mess_prop_obj  &) = 0 ;

  protected : virtual void nt_rze_attributes_ (goil_lexique &,
                                GGS_mess_prop_obj  &) = 0 ;

  protected : virtual void nt_rui_attributes_ (goil_lexique &,
                                GGS_mess_prop_obj  &) = 0 ;

  protected : virtual void nt_rqi_attributes_ (goil_lexique &,
                                GGS_mess_prop_obj  &) = 0 ;

  protected : virtual void nt_rue_attributes_ (goil_lexique &,
                                GGS_mess_prop_obj  &) = 0 ;

  protected : virtual void nt_rqe_attributes_ (goil_lexique &,
                                GGS_mess_prop_obj  &) = 0 ;

  protected : virtual void nt_rde_attributes_ (goil_lexique &,
                                GGS_mess_prop_obj  &) = 0 ;

  protected : virtual void nt_rzs_attributes_ (goil_lexique &,
                                GGS_mess_prop_obj  &) = 0 ;

  protected : virtual void nt_cdatatype_ (goil_lexique &,
                                GGS_lstring  &) = 0 ;

  protected : virtual void nt_transferproperty_ (goil_lexique &,
                                GGS_lstring  &) = 0 ;

  protected : virtual void nt_networkmessage_ (goil_lexique &,
                                GGS_lstring  &) = 0 ;

  protected : virtual void nt_filter_ (goil_lexique &,
                                GGS_filter_prop_obj  &) = 0 ;

  protected : virtual void nt_mask_x_attribute_ (goil_lexique &,
                                GGS_luint64  &,
                                GGS_luint64  &) = 0 ;

  protected : virtual void nt_mask_attribute_ (goil_lexique &,
                                GGS_luint64  &) = 0 ;

  protected : virtual void nt_min_max_attribute_ (goil_lexique &,
                                GGS_luint64  &,
                                GGS_luint64  &) = 0 ;

  protected : virtual void nt_period_offset_attribute_ (goil_lexique &,
                                GGS_luint64  &,
                                GGS_luint64  &) = 0 ;

  protected : virtual void nt_networkordercallout_ (goil_lexique &,
                                GGS_lstring  &) = 0 ;

  protected : virtual void nt_cpuordercallout_ (goil_lexique &,
                                GGS_lstring  &) = 0 ;

  protected : virtual void nt_initialvalue_ (goil_lexique &,
                                GGS_basic_type  &) = 0 ;

  protected : virtual void nt_sendingmessage_ (goil_lexique &,
                                GGS_lstring  &) = 0 ;

  protected : virtual void nt_queuesize_ (goil_lexique &,
                                GGS_luint64  &) = 0 ;

  protected : virtual void nt_link_ (goil_lexique &,
                                GGS_link_obj  &) = 0 ;

  protected : virtual void nt_description_ (goil_lexique &,
                                GGS_lstring  &) = 0 ;

  protected : virtual void nt_free_field_ (goil_lexique &,
                                GGS_ident_map  &) = 0 ;

  protected : void pr_mess_goil_obj_message_130_11_ (goil_lexique &,
                                GGS_message_map  &) ;

  protected : void pr_message_attributes_goil_obj_message_169_25_ (goil_lexique &,
                                GGS_action_obj  &,
                                GGS_action_obj  &,
                                GGS_lstringlist  &,
                                GGS_ident_map  &,
                                GGS_mess_prop_obj  &) ;

  protected : virtual PMSInt16 select_goil_obj_message_0 (goil_lexique &) = 0 ;

  protected : void pr_message_property_goil_obj_message_210_23_ (goil_lexique &,
                                GGS_mess_prop_obj  &) ;

  protected : virtual PMSInt16 select_goil_obj_message_1 (goil_lexique &) = 0 ;

  protected : void pr_notification_property_goil_obj_message_229_28_ (goil_lexique &,
                                GGS_action_obj  &) ;

  protected : virtual PMSInt16 select_goil_obj_message_2 (goil_lexique &) = 0 ;

  protected : virtual PMSInt16 select_goil_obj_message_3 (goil_lexique &) = 0 ;

  protected : virtual PMSInt16 select_goil_obj_message_4 (goil_lexique &) = 0 ;

  protected : void pr_ssi_attributes_goil_obj_message_321_21_ (goil_lexique &,
                                GGS_mess_prop_obj  &) ;

  protected : void pr_sse_attributes_goil_obj_message_332_21_ (goil_lexique &,
                                GGS_mess_prop_obj  &) ;

  protected : virtual PMSInt16 select_goil_obj_message_5 (goil_lexique &) = 0 ;

  protected : void pr_sde_attributes_goil_obj_message_418_21_ (goil_lexique &,
                                GGS_mess_prop_obj  &) ;

  protected : virtual PMSInt16 select_goil_obj_message_6 (goil_lexique &) = 0 ;

  protected : void pr_sze_attributes_goil_obj_message_476_21_ (goil_lexique &,
                                GGS_mess_prop_obj  &) ;

  protected : virtual PMSInt16 select_goil_obj_message_7 (goil_lexique &) = 0 ;

  protected : void pr_rzi_attributes_goil_obj_message_519_21_ (goil_lexique &,
                                GGS_mess_prop_obj  &) ;

  protected : void pr_rze_attributes_goil_obj_message_533_21_ (goil_lexique &,
                                GGS_mess_prop_obj  &) ;

  protected : virtual PMSInt16 select_goil_obj_message_8 (goil_lexique &) = 0 ;

  protected : void pr_rui_attributes_goil_obj_message_576_21_ (goil_lexique &,
                                GGS_mess_prop_obj  &) ;

  protected : virtual PMSInt16 select_goil_obj_message_9 (goil_lexique &) = 0 ;

  protected : void pr_rqi_attributes_goil_obj_message_619_21_ (goil_lexique &,
                                GGS_mess_prop_obj  &) ;

  protected : virtual PMSInt16 select_goil_obj_message_10 (goil_lexique &) = 0 ;

  protected : void pr_rue_attributes_goil_obj_message_674_21_ (goil_lexique &,
                                GGS_mess_prop_obj  &) ;

  protected : virtual PMSInt16 select_goil_obj_message_11 (goil_lexique &) = 0 ;

  protected : void pr_rqe_attributes_goil_obj_message_731_21_ (goil_lexique &,
                                GGS_mess_prop_obj  &) ;

  protected : virtual PMSInt16 select_goil_obj_message_12 (goil_lexique &) = 0 ;

  protected : void pr_rde_attributes_goil_obj_message_802_21_ (goil_lexique &,
                                GGS_mess_prop_obj  &) ;

  protected : virtual PMSInt16 select_goil_obj_message_13 (goil_lexique &) = 0 ;

  protected : void pr_rzs_attributes_goil_obj_message_840_21_ (goil_lexique &,
                                GGS_mess_prop_obj  &) ;

  protected : virtual PMSInt16 select_goil_obj_message_14 (goil_lexique &) = 0 ;

  protected : void pr_cdatatype_goil_obj_message_876_16_ (goil_lexique &,
                                GGS_lstring  &) ;

  protected : void pr_transferproperty_goil_obj_message_885_23_ (goil_lexique &,
                                GGS_lstring  &) ;

  protected : virtual PMSInt16 select_goil_obj_message_15 (goil_lexique &) = 0 ;

  protected : void pr_networkmessage_goil_obj_message_901_21_ (goil_lexique &,
                                GGS_lstring  &) ;

  protected : void pr_filter_goil_obj_message_910_13_ (goil_lexique &,
                                GGS_filter_prop_obj  &) ;

  protected : virtual PMSInt16 select_goil_obj_message_16 (goil_lexique &) = 0 ;

  protected : void pr_mask_x_attribute_goil_obj_message_976_23_ (goil_lexique &,
                                GGS_luint64  &,
                                GGS_luint64  &) ;

  protected : virtual PMSInt16 select_goil_obj_message_17 (goil_lexique &) = 0 ;

  protected : void pr_mask_attribute_goil_obj_message_1009_21_ (goil_lexique &,
                                GGS_luint64  &) ;

  protected : void pr_min_max_attribute_goil_obj_message_1017_24_ (goil_lexique &,
                                GGS_luint64  &,
                                GGS_luint64  &) ;

  protected : virtual PMSInt16 select_goil_obj_message_18 (goil_lexique &) = 0 ;

  protected : void pr_period_offset_attribute_goil_obj_message_1050_30_ (goil_lexique &,
                                GGS_luint64  &,
                                GGS_luint64  &) ;

  protected : virtual PMSInt16 select_goil_obj_message_19 (goil_lexique &) = 0 ;

  protected : void pr_networkordercallout_goil_obj_message_1083_26_ (goil_lexique &,
                                GGS_lstring  &) ;

  protected : void pr_cpuordercallout_goil_obj_message_1092_22_ (goil_lexique &,
                                GGS_lstring  &) ;

  protected : void pr_initialvalue_goil_obj_message_1101_19_ (goil_lexique &,
                                GGS_basic_type  &) ;

  protected : virtual PMSInt16 select_goil_obj_message_20 (goil_lexique &) = 0 ;

  protected : void pr_sendingmessage_goil_obj_message_1122_21_ (goil_lexique &,
                                GGS_lstring  &) ;

  protected : void pr_queuesize_goil_obj_message_1131_16_ (goil_lexique &,
                                GGS_luint64  &) ;

  protected : void pr_link_goil_obj_message_1140_11_ (goil_lexique &,
                                GGS_link_obj  &) ;

  protected : virtual PMSInt16 select_goil_obj_message_21 (goil_lexique &) = 0 ;

} ;

//---------------------------------------------------------------------------*

#endif
