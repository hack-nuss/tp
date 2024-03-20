#ifndef D_A_TAG_YAMI_H
#define D_A_TAG_YAMI_H

#include "d/com/d_com_inf_game.h"
#include "f_op/f_op_actor_mng.h"

class daTagYami_c : public fopAc_ac_c {
public:
    /* 80D659F8 */ void create();
    /* 80D65C24 */ void Execute();
    /* 80D65C60 */ void calcCoC(cXyz&);
    /* 80D65D08 */ void col_set();
    /* 80D65D0C */ void chk_CoHit();
    /* 80D65D60 */ void getPlDist();
    /* 80D65EEC */ void onMidnaTagSw();
    /* 80D65F24 */ void offMidnaTagSw2();
    /* 80D66100 */ void setCoC(cXyz);

    /* 0x568 */ dCcD_Cyl mCyl;
    /* 0x6a4 */ dCcD_Stts mStts;
    /* 0x6e0 */ u8 field_0x6e0[4];
    /* 0x6e4 */ s32 mMTagSw;
    /* 0x6e8 */ s32 mMTagSw2;
    /* 0x6ec */ cXyz mCoC;
    /* 0x6f8 */ f32 mCoH;
    /* 0x6fc */ f32 mCoR;
    /* 0x700 */ s32 mIsCoHit;
};

#endif /* D_A_TAG_YAMI_H */
