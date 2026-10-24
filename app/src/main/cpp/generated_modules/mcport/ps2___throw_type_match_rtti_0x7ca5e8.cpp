#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __throw_type_match_rtti
// Address: 0x7ca5e8 - 0x7caab0
void ps2___throw_type_match_rtti_0x7ca5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___throw_type_match_rtti_0x7ca5e8");
#endif

    switch (ctx->pc) {
        case 0x7ca5e8u: goto label_7ca5e8;
        case 0x7ca5ecu: goto label_7ca5ec;
        case 0x7ca5f0u: goto label_7ca5f0;
        case 0x7ca5f4u: goto label_7ca5f4;
        case 0x7ca5f8u: goto label_7ca5f8;
        case 0x7ca5fcu: goto label_7ca5fc;
        case 0x7ca600u: goto label_7ca600;
        case 0x7ca604u: goto label_7ca604;
        case 0x7ca608u: goto label_7ca608;
        case 0x7ca60cu: goto label_7ca60c;
        case 0x7ca610u: goto label_7ca610;
        case 0x7ca614u: goto label_7ca614;
        case 0x7ca618u: goto label_7ca618;
        case 0x7ca61cu: goto label_7ca61c;
        case 0x7ca620u: goto label_7ca620;
        case 0x7ca624u: goto label_7ca624;
        case 0x7ca628u: goto label_7ca628;
        case 0x7ca62cu: goto label_7ca62c;
        case 0x7ca630u: goto label_7ca630;
        case 0x7ca634u: goto label_7ca634;
        case 0x7ca638u: goto label_7ca638;
        case 0x7ca63cu: goto label_7ca63c;
        case 0x7ca640u: goto label_7ca640;
        case 0x7ca644u: goto label_7ca644;
        case 0x7ca648u: goto label_7ca648;
        case 0x7ca64cu: goto label_7ca64c;
        case 0x7ca650u: goto label_7ca650;
        case 0x7ca654u: goto label_7ca654;
        case 0x7ca658u: goto label_7ca658;
        case 0x7ca65cu: goto label_7ca65c;
        case 0x7ca660u: goto label_7ca660;
        case 0x7ca664u: goto label_7ca664;
        case 0x7ca668u: goto label_7ca668;
        case 0x7ca66cu: goto label_7ca66c;
        case 0x7ca670u: goto label_7ca670;
        case 0x7ca674u: goto label_7ca674;
        case 0x7ca678u: goto label_7ca678;
        case 0x7ca67cu: goto label_7ca67c;
        case 0x7ca680u: goto label_7ca680;
        case 0x7ca684u: goto label_7ca684;
        case 0x7ca688u: goto label_7ca688;
        case 0x7ca68cu: goto label_7ca68c;
        case 0x7ca690u: goto label_7ca690;
        case 0x7ca694u: goto label_7ca694;
        case 0x7ca698u: goto label_7ca698;
        case 0x7ca69cu: goto label_7ca69c;
        case 0x7ca6a0u: goto label_7ca6a0;
        case 0x7ca6a4u: goto label_7ca6a4;
        case 0x7ca6a8u: goto label_7ca6a8;
        case 0x7ca6acu: goto label_7ca6ac;
        case 0x7ca6b0u: goto label_7ca6b0;
        case 0x7ca6b4u: goto label_7ca6b4;
        case 0x7ca6b8u: goto label_7ca6b8;
        case 0x7ca6bcu: goto label_7ca6bc;
        case 0x7ca6c0u: goto label_7ca6c0;
        case 0x7ca6c4u: goto label_7ca6c4;
        case 0x7ca6c8u: goto label_7ca6c8;
        case 0x7ca6ccu: goto label_7ca6cc;
        case 0x7ca6d0u: goto label_7ca6d0;
        case 0x7ca6d4u: goto label_7ca6d4;
        case 0x7ca6d8u: goto label_7ca6d8;
        case 0x7ca6dcu: goto label_7ca6dc;
        case 0x7ca6e0u: goto label_7ca6e0;
        case 0x7ca6e4u: goto label_7ca6e4;
        case 0x7ca6e8u: goto label_7ca6e8;
        case 0x7ca6ecu: goto label_7ca6ec;
        case 0x7ca6f0u: goto label_7ca6f0;
        case 0x7ca6f4u: goto label_7ca6f4;
        case 0x7ca6f8u: goto label_7ca6f8;
        case 0x7ca6fcu: goto label_7ca6fc;
        case 0x7ca700u: goto label_7ca700;
        case 0x7ca704u: goto label_7ca704;
        case 0x7ca708u: goto label_7ca708;
        case 0x7ca70cu: goto label_7ca70c;
        case 0x7ca710u: goto label_7ca710;
        case 0x7ca714u: goto label_7ca714;
        case 0x7ca718u: goto label_7ca718;
        case 0x7ca71cu: goto label_7ca71c;
        case 0x7ca720u: goto label_7ca720;
        case 0x7ca724u: goto label_7ca724;
        case 0x7ca728u: goto label_7ca728;
        case 0x7ca72cu: goto label_7ca72c;
        case 0x7ca730u: goto label_7ca730;
        case 0x7ca734u: goto label_7ca734;
        case 0x7ca738u: goto label_7ca738;
        case 0x7ca73cu: goto label_7ca73c;
        case 0x7ca740u: goto label_7ca740;
        case 0x7ca744u: goto label_7ca744;
        case 0x7ca748u: goto label_7ca748;
        case 0x7ca74cu: goto label_7ca74c;
        case 0x7ca750u: goto label_7ca750;
        case 0x7ca754u: goto label_7ca754;
        case 0x7ca758u: goto label_7ca758;
        case 0x7ca75cu: goto label_7ca75c;
        case 0x7ca760u: goto label_7ca760;
        case 0x7ca764u: goto label_7ca764;
        case 0x7ca768u: goto label_7ca768;
        case 0x7ca76cu: goto label_7ca76c;
        case 0x7ca770u: goto label_7ca770;
        case 0x7ca774u: goto label_7ca774;
        case 0x7ca778u: goto label_7ca778;
        case 0x7ca77cu: goto label_7ca77c;
        case 0x7ca780u: goto label_7ca780;
        case 0x7ca784u: goto label_7ca784;
        case 0x7ca788u: goto label_7ca788;
        case 0x7ca78cu: goto label_7ca78c;
        case 0x7ca790u: goto label_7ca790;
        case 0x7ca794u: goto label_7ca794;
        case 0x7ca798u: goto label_7ca798;
        case 0x7ca79cu: goto label_7ca79c;
        case 0x7ca7a0u: goto label_7ca7a0;
        case 0x7ca7a4u: goto label_7ca7a4;
        case 0x7ca7a8u: goto label_7ca7a8;
        case 0x7ca7acu: goto label_7ca7ac;
        case 0x7ca7b0u: goto label_7ca7b0;
        case 0x7ca7b4u: goto label_7ca7b4;
        case 0x7ca7b8u: goto label_7ca7b8;
        case 0x7ca7bcu: goto label_7ca7bc;
        case 0x7ca7c0u: goto label_7ca7c0;
        case 0x7ca7c4u: goto label_7ca7c4;
        case 0x7ca7c8u: goto label_7ca7c8;
        case 0x7ca7ccu: goto label_7ca7cc;
        case 0x7ca7d0u: goto label_7ca7d0;
        case 0x7ca7d4u: goto label_7ca7d4;
        case 0x7ca7d8u: goto label_7ca7d8;
        case 0x7ca7dcu: goto label_7ca7dc;
        case 0x7ca7e0u: goto label_7ca7e0;
        case 0x7ca7e4u: goto label_7ca7e4;
        case 0x7ca7e8u: goto label_7ca7e8;
        case 0x7ca7ecu: goto label_7ca7ec;
        case 0x7ca7f0u: goto label_7ca7f0;
        case 0x7ca7f4u: goto label_7ca7f4;
        case 0x7ca7f8u: goto label_7ca7f8;
        case 0x7ca7fcu: goto label_7ca7fc;
        case 0x7ca800u: goto label_7ca800;
        case 0x7ca804u: goto label_7ca804;
        case 0x7ca808u: goto label_7ca808;
        case 0x7ca80cu: goto label_7ca80c;
        case 0x7ca810u: goto label_7ca810;
        case 0x7ca814u: goto label_7ca814;
        case 0x7ca818u: goto label_7ca818;
        case 0x7ca81cu: goto label_7ca81c;
        case 0x7ca820u: goto label_7ca820;
        case 0x7ca824u: goto label_7ca824;
        case 0x7ca828u: goto label_7ca828;
        case 0x7ca82cu: goto label_7ca82c;
        case 0x7ca830u: goto label_7ca830;
        case 0x7ca834u: goto label_7ca834;
        case 0x7ca838u: goto label_7ca838;
        case 0x7ca83cu: goto label_7ca83c;
        case 0x7ca840u: goto label_7ca840;
        case 0x7ca844u: goto label_7ca844;
        case 0x7ca848u: goto label_7ca848;
        case 0x7ca84cu: goto label_7ca84c;
        case 0x7ca850u: goto label_7ca850;
        case 0x7ca854u: goto label_7ca854;
        case 0x7ca858u: goto label_7ca858;
        case 0x7ca85cu: goto label_7ca85c;
        case 0x7ca860u: goto label_7ca860;
        case 0x7ca864u: goto label_7ca864;
        case 0x7ca868u: goto label_7ca868;
        case 0x7ca86cu: goto label_7ca86c;
        case 0x7ca870u: goto label_7ca870;
        case 0x7ca874u: goto label_7ca874;
        case 0x7ca878u: goto label_7ca878;
        case 0x7ca87cu: goto label_7ca87c;
        case 0x7ca880u: goto label_7ca880;
        case 0x7ca884u: goto label_7ca884;
        case 0x7ca888u: goto label_7ca888;
        case 0x7ca88cu: goto label_7ca88c;
        case 0x7ca890u: goto label_7ca890;
        case 0x7ca894u: goto label_7ca894;
        case 0x7ca898u: goto label_7ca898;
        case 0x7ca89cu: goto label_7ca89c;
        case 0x7ca8a0u: goto label_7ca8a0;
        case 0x7ca8a4u: goto label_7ca8a4;
        case 0x7ca8a8u: goto label_7ca8a8;
        case 0x7ca8acu: goto label_7ca8ac;
        case 0x7ca8b0u: goto label_7ca8b0;
        case 0x7ca8b4u: goto label_7ca8b4;
        case 0x7ca8b8u: goto label_7ca8b8;
        case 0x7ca8bcu: goto label_7ca8bc;
        case 0x7ca8c0u: goto label_7ca8c0;
        case 0x7ca8c4u: goto label_7ca8c4;
        case 0x7ca8c8u: goto label_7ca8c8;
        case 0x7ca8ccu: goto label_7ca8cc;
        case 0x7ca8d0u: goto label_7ca8d0;
        case 0x7ca8d4u: goto label_7ca8d4;
        case 0x7ca8d8u: goto label_7ca8d8;
        case 0x7ca8dcu: goto label_7ca8dc;
        case 0x7ca8e0u: goto label_7ca8e0;
        case 0x7ca8e4u: goto label_7ca8e4;
        case 0x7ca8e8u: goto label_7ca8e8;
        case 0x7ca8ecu: goto label_7ca8ec;
        case 0x7ca8f0u: goto label_7ca8f0;
        case 0x7ca8f4u: goto label_7ca8f4;
        case 0x7ca8f8u: goto label_7ca8f8;
        case 0x7ca8fcu: goto label_7ca8fc;
        case 0x7ca900u: goto label_7ca900;
        case 0x7ca904u: goto label_7ca904;
        case 0x7ca908u: goto label_7ca908;
        case 0x7ca90cu: goto label_7ca90c;
        case 0x7ca910u: goto label_7ca910;
        case 0x7ca914u: goto label_7ca914;
        case 0x7ca918u: goto label_7ca918;
        case 0x7ca91cu: goto label_7ca91c;
        case 0x7ca920u: goto label_7ca920;
        case 0x7ca924u: goto label_7ca924;
        case 0x7ca928u: goto label_7ca928;
        case 0x7ca92cu: goto label_7ca92c;
        case 0x7ca930u: goto label_7ca930;
        case 0x7ca934u: goto label_7ca934;
        case 0x7ca938u: goto label_7ca938;
        case 0x7ca93cu: goto label_7ca93c;
        case 0x7ca940u: goto label_7ca940;
        case 0x7ca944u: goto label_7ca944;
        case 0x7ca948u: goto label_7ca948;
        case 0x7ca94cu: goto label_7ca94c;
        case 0x7ca950u: goto label_7ca950;
        case 0x7ca954u: goto label_7ca954;
        case 0x7ca958u: goto label_7ca958;
        case 0x7ca95cu: goto label_7ca95c;
        case 0x7ca960u: goto label_7ca960;
        case 0x7ca964u: goto label_7ca964;
        case 0x7ca968u: goto label_7ca968;
        case 0x7ca96cu: goto label_7ca96c;
        case 0x7ca970u: goto label_7ca970;
        case 0x7ca974u: goto label_7ca974;
        case 0x7ca978u: goto label_7ca978;
        case 0x7ca97cu: goto label_7ca97c;
        case 0x7ca980u: goto label_7ca980;
        case 0x7ca984u: goto label_7ca984;
        case 0x7ca988u: goto label_7ca988;
        case 0x7ca98cu: goto label_7ca98c;
        case 0x7ca990u: goto label_7ca990;
        case 0x7ca994u: goto label_7ca994;
        case 0x7ca998u: goto label_7ca998;
        case 0x7ca99cu: goto label_7ca99c;
        case 0x7ca9a0u: goto label_7ca9a0;
        case 0x7ca9a4u: goto label_7ca9a4;
        case 0x7ca9a8u: goto label_7ca9a8;
        case 0x7ca9acu: goto label_7ca9ac;
        case 0x7ca9b0u: goto label_7ca9b0;
        case 0x7ca9b4u: goto label_7ca9b4;
        case 0x7ca9b8u: goto label_7ca9b8;
        case 0x7ca9bcu: goto label_7ca9bc;
        case 0x7ca9c0u: goto label_7ca9c0;
        case 0x7ca9c4u: goto label_7ca9c4;
        case 0x7ca9c8u: goto label_7ca9c8;
        case 0x7ca9ccu: goto label_7ca9cc;
        case 0x7ca9d0u: goto label_7ca9d0;
        case 0x7ca9d4u: goto label_7ca9d4;
        case 0x7ca9d8u: goto label_7ca9d8;
        case 0x7ca9dcu: goto label_7ca9dc;
        case 0x7ca9e0u: goto label_7ca9e0;
        case 0x7ca9e4u: goto label_7ca9e4;
        case 0x7ca9e8u: goto label_7ca9e8;
        case 0x7ca9ecu: goto label_7ca9ec;
        case 0x7ca9f0u: goto label_7ca9f0;
        case 0x7ca9f4u: goto label_7ca9f4;
        case 0x7ca9f8u: goto label_7ca9f8;
        case 0x7ca9fcu: goto label_7ca9fc;
        case 0x7caa00u: goto label_7caa00;
        case 0x7caa04u: goto label_7caa04;
        case 0x7caa08u: goto label_7caa08;
        case 0x7caa0cu: goto label_7caa0c;
        case 0x7caa10u: goto label_7caa10;
        case 0x7caa14u: goto label_7caa14;
        case 0x7caa18u: goto label_7caa18;
        case 0x7caa1cu: goto label_7caa1c;
        case 0x7caa20u: goto label_7caa20;
        case 0x7caa24u: goto label_7caa24;
        case 0x7caa28u: goto label_7caa28;
        case 0x7caa2cu: goto label_7caa2c;
        case 0x7caa30u: goto label_7caa30;
        case 0x7caa34u: goto label_7caa34;
        case 0x7caa38u: goto label_7caa38;
        case 0x7caa3cu: goto label_7caa3c;
        case 0x7caa40u: goto label_7caa40;
        case 0x7caa44u: goto label_7caa44;
        case 0x7caa48u: goto label_7caa48;
        case 0x7caa4cu: goto label_7caa4c;
        case 0x7caa50u: goto label_7caa50;
        case 0x7caa54u: goto label_7caa54;
        case 0x7caa58u: goto label_7caa58;
        case 0x7caa5cu: goto label_7caa5c;
        case 0x7caa60u: goto label_7caa60;
        case 0x7caa64u: goto label_7caa64;
        case 0x7caa68u: goto label_7caa68;
        case 0x7caa6cu: goto label_7caa6c;
        case 0x7caa70u: goto label_7caa70;
        case 0x7caa74u: goto label_7caa74;
        case 0x7caa78u: goto label_7caa78;
        case 0x7caa7cu: goto label_7caa7c;
        case 0x7caa80u: goto label_7caa80;
        case 0x7caa84u: goto label_7caa84;
        case 0x7caa88u: goto label_7caa88;
        case 0x7caa8cu: goto label_7caa8c;
        case 0x7caa90u: goto label_7caa90;
        case 0x7caa94u: goto label_7caa94;
        case 0x7caa98u: goto label_7caa98;
        case 0x7caa9cu: goto label_7caa9c;
        case 0x7caaa0u: goto label_7caaa0;
        case 0x7caaa4u: goto label_7caaa4;
        case 0x7caaa8u: goto label_7caaa8;
        case 0x7caaacu: goto label_7caaac;
        default: break;
    }

    ctx->pc = 0x7ca5e8u;

label_7ca5e8:
    // 0x7ca5e8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x7ca5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_7ca5ec:
    // 0x7ca5ec: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x7ca5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_7ca5f0:
    // 0x7ca5f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x7ca5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_7ca5f4:
    // 0x7ca5f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7ca5f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_7ca5f8:
    // 0x7ca5f8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x7ca5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_7ca5fc:
    // 0x7ca5fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x7ca5fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_7ca600:
    // 0x7ca600: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x7ca600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_7ca604:
    // 0x7ca604: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x7ca604u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7ca608:
    // 0x7ca608: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x7ca608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_7ca60c:
    // 0x7ca60c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x7ca60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_7ca610:
    // 0x7ca610: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x7ca610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_7ca614:
    // 0x7ca614: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x7ca614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_7ca618:
    // 0x7ca618: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x7ca618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_7ca61c:
    // 0x7ca61c: 0xc1f25f2  jal         func_7C97C8
label_7ca620:
    if (ctx->pc == 0x7CA620u) {
        ctx->pc = 0x7CA620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA61Cu;
        // 0x7ca620: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA624u;
        goto label_7ca624;
    }
    ctx->pc = 0x7CA61Cu;
    SET_GPR_U32(ctx, 31, 0x7CA624u);
    ctx->pc = 0x7CA620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA61Cu;
    // 0x7ca620: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C97C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C97C8u, 0x7CA61Cu, 0x7CA624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA624u;
label_7ca624:
    // 0x7ca624: 0x14400116  bnez        $v0, . + 4 + (0x116 << 2)
label_7ca628:
    if (ctx->pc == 0x7CA628u) {
        ctx->pc = 0x7CA628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA624u;
        // 0x7ca628: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA62Cu;
        goto label_7ca62c;
    }
    ctx->pc = 0x7CA624u;
    {
        const bool branch_taken_0x7ca624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CA628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA624u;
        // 0x7ca628: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca624) {
            ctx->pc = 0x7CAA80u;
            goto label_7caa80;
        }
    }
    ctx->pc = 0x7CA62Cu;
label_7ca62c:
    // 0x7ca62c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_7ca630:
    if (ctx->pc == 0x7CA630u) {
        ctx->pc = 0x7CA630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA62Cu;
        // 0x7ca630: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA634u;
        goto label_7ca634;
    }
    ctx->pc = 0x7CA62Cu;
    {
        const bool branch_taken_0x7ca62c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CA630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA62Cu;
        // 0x7ca630: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca62c) {
            ctx->pc = 0x7CA63Cu;
            goto label_7ca63c;
        }
    }
    ctx->pc = 0x7CA634u;
label_7ca634:
    // 0x7ca634: 0x1000000d  b           . + 4 + (0xD << 2)
label_7ca638:
    if (ctx->pc == 0x7CA638u) {
        ctx->pc = 0x7CA638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA634u;
        // 0x7ca638: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA63Cu;
        goto label_7ca63c;
    }
    ctx->pc = 0x7CA634u;
    {
        const bool branch_taken_0x7ca634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA634u;
        // 0x7ca638: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca634) {
            ctx->pc = 0x7CA66Cu;
            goto label_7ca66c;
        }
    }
    ctx->pc = 0x7CA63Cu;
label_7ca63c:
    // 0x7ca63c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x7ca63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_7ca640:
    // 0x7ca640: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7ca640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
label_7ca644:
    // 0x7ca644: 0x3c08007d  lui         $t0, 0x7D
    ctx->pc = 0x7ca644u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)125 << 16));
label_7ca648:
    // 0x7ca648: 0x24a59c48  addiu       $a1, $a1, -0x63B8
    ctx->pc = 0x7ca648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941768));
label_7ca64c:
    // 0x7ca64c: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x7ca64cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_7ca650:
    // 0x7ca650: 0x25089e28  addiu       $t0, $t0, -0x61D8
    ctx->pc = 0x7ca650u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942248));
label_7ca654:
    // 0x7ca654: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x7ca654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_7ca658:
    // 0x7ca658: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7ca658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7ca65c:
    // 0x7ca65c: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x7ca65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_7ca660:
    // 0x7ca660: 0xc1f2af2  jal         func_7CABC8
label_7ca664:
    if (ctx->pc == 0x7CA664u) {
        ctx->pc = 0x7CA664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA660u;
        // 0x7ca664: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA668u;
        goto label_7ca668;
    }
    ctx->pc = 0x7CA660u;
    SET_GPR_U32(ctx, 31, 0x7CA668u);
    ctx->pc = 0x7CA664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA660u;
    // 0x7ca664: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CABC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CABC8u, 0x7CA660u, 0x7CA668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA668u;
label_7ca668:
    // 0x7ca668: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x7ca668u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7ca66c:
    // 0x7ca66c: 0x5540007b  bnel        $t2, $zero, . + 4 + (0x7B << 2)
label_7ca670:
    if (ctx->pc == 0x7CA670u) {
        ctx->pc = 0x7CA670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA66Cu;
        // 0x7ca670: 0x8d430004  lw          $v1, 0x4($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA674u;
        goto label_7ca674;
    }
    ctx->pc = 0x7CA66Cu;
    {
        const bool branch_taken_0x7ca66c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ca66c) {
            ctx->pc = 0x7CA670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CA66Cu;
            // 0x7ca670: 0x8d430004  lw          $v1, 0x4($t2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CA85Cu;
            goto label_7ca85c;
        }
    }
    ctx->pc = 0x7CA674u;
label_7ca674:
    // 0x7ca674: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_7ca678:
    if (ctx->pc == 0x7CA678u) {
        ctx->pc = 0x7CA678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA674u;
        // 0x7ca678: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA67Cu;
        goto label_7ca67c;
    }
    ctx->pc = 0x7CA674u;
    {
        const bool branch_taken_0x7ca674 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ca674) {
            ctx->pc = 0x7CA678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CA674u;
            // 0x7ca678: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CA684u;
            goto label_7ca684;
        }
    }
    ctx->pc = 0x7CA67Cu;
label_7ca67c:
    // 0x7ca67c: 0x1000000c  b           . + 4 + (0xC << 2)
label_7ca680:
    if (ctx->pc == 0x7CA680u) {
        ctx->pc = 0x7CA680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA67Cu;
        // 0x7ca680: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA684u;
        goto label_7ca684;
    }
    ctx->pc = 0x7CA67Cu;
    {
        const bool branch_taken_0x7ca67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA67Cu;
        // 0x7ca680: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca67c) {
            ctx->pc = 0x7CA6B0u;
            goto label_7ca6b0;
        }
    }
    ctx->pc = 0x7CA684u;
label_7ca684:
    // 0x7ca684: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7ca684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
label_7ca688:
    // 0x7ca688: 0x3c08007d  lui         $t0, 0x7D
    ctx->pc = 0x7ca688u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)125 << 16));
label_7ca68c:
    // 0x7ca68c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x7ca68cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7ca690:
    // 0x7ca690: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x7ca690u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_7ca694:
    // 0x7ca694: 0x24a5b2d0  addiu       $a1, $a1, -0x4D30
    ctx->pc = 0x7ca694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947536));
label_7ca698:
    // 0x7ca698: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x7ca698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_7ca69c:
    // 0x7ca69c: 0x25089e28  addiu       $t0, $t0, -0x61D8
    ctx->pc = 0x7ca69cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942248));
label_7ca6a0:
    // 0x7ca6a0: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x7ca6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_7ca6a4:
    // 0x7ca6a4: 0xc1f2af2  jal         func_7CABC8
label_7ca6a8:
    if (ctx->pc == 0x7CA6A8u) {
        ctx->pc = 0x7CA6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA6A4u;
        // 0x7ca6a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA6ACu;
        goto label_7ca6ac;
    }
    ctx->pc = 0x7CA6A4u;
    SET_GPR_U32(ctx, 31, 0x7CA6ACu);
    ctx->pc = 0x7CA6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA6A4u;
    // 0x7ca6a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CABC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CABC8u, 0x7CA6A4u, 0x7CA6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA6ACu;
label_7ca6ac:
    // 0x7ca6ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7ca6acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7ca6b0:
    // 0x7ca6b0: 0x120000f3  beqz        $s0, . + 4 + (0xF3 << 2)
label_7ca6b4:
    if (ctx->pc == 0x7CA6B4u) {
        ctx->pc = 0x7CA6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA6B0u;
        // 0x7ca6b4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA6B8u;
        goto label_7ca6b8;
    }
    ctx->pc = 0x7CA6B0u;
    {
        const bool branch_taken_0x7ca6b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA6B0u;
        // 0x7ca6b4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca6b0) {
            ctx->pc = 0x7CAA80u;
            goto label_7caa80;
        }
    }
    ctx->pc = 0x7CA6B8u;
label_7ca6b8:
    // 0x7ca6b8: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_7ca6bc:
    if (ctx->pc == 0x7CA6BCu) {
        ctx->pc = 0x7CA6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA6B8u;
        // 0x7ca6bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA6C0u;
        goto label_7ca6c0;
    }
    ctx->pc = 0x7CA6B8u;
    {
        const bool branch_taken_0x7ca6b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA6B8u;
        // 0x7ca6bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca6b8) {
            ctx->pc = 0x7CA6ECu;
            goto label_7ca6ec;
        }
    }
    ctx->pc = 0x7CA6C0u;
label_7ca6c0:
    // 0x7ca6c0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x7ca6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_7ca6c4:
    // 0x7ca6c4: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7ca6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
label_7ca6c8:
    // 0x7ca6c8: 0x3c08007d  lui         $t0, 0x7D
    ctx->pc = 0x7ca6c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)125 << 16));
label_7ca6cc:
    // 0x7ca6cc: 0x24a5b2d0  addiu       $a1, $a1, -0x4D30
    ctx->pc = 0x7ca6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947536));
label_7ca6d0:
    // 0x7ca6d0: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x7ca6d0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_7ca6d4:
    // 0x7ca6d4: 0x25089e28  addiu       $t0, $t0, -0x61D8
    ctx->pc = 0x7ca6d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942248));
label_7ca6d8:
    // 0x7ca6d8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x7ca6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_7ca6dc:
    // 0x7ca6dc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x7ca6dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7ca6e0:
    // 0x7ca6e0: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x7ca6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_7ca6e4:
    // 0x7ca6e4: 0xc1f2af2  jal         func_7CABC8
label_7ca6e8:
    if (ctx->pc == 0x7CA6E8u) {
        ctx->pc = 0x7CA6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA6E4u;
        // 0x7ca6e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA6ECu;
        goto label_7ca6ec;
    }
    ctx->pc = 0x7CA6E4u;
    SET_GPR_U32(ctx, 31, 0x7CA6ECu);
    ctx->pc = 0x7CA6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA6E4u;
    // 0x7ca6e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CABC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CABC8u, 0x7CA6E4u, 0x7CA6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA6ECu;
label_7ca6ec:
    // 0x7ca6ec: 0x504000e4  beql        $v0, $zero, . + 4 + (0xE4 << 2)
label_7ca6f0:
    if (ctx->pc == 0x7CA6F0u) {
        ctx->pc = 0x7CA6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA6ECu;
        // 0x7ca6f0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA6F4u;
        goto label_7ca6f4;
    }
    ctx->pc = 0x7CA6ECu;
    {
        const bool branch_taken_0x7ca6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ca6ec) {
            ctx->pc = 0x7CA6F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CA6ECu;
            // 0x7ca6f0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CAA80u;
            goto label_7caa80;
        }
    }
    ctx->pc = 0x7CA6F4u;
label_7ca6f4:
    // 0x7ca6f4: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x7ca6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_7ca6f8:
    // 0x7ca6f8: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x7ca6f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_7ca6fc:
    // 0x7ca6fc: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_7ca700:
    if (ctx->pc == 0x7CA700u) {
        ctx->pc = 0x7CA700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA6FCu;
        // 0x7ca700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA704u;
        goto label_7ca704;
    }
    ctx->pc = 0x7CA6FCu;
    {
        const bool branch_taken_0x7ca6fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA6FCu;
        // 0x7ca700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca6fc) {
            ctx->pc = 0x7CA730u;
            goto label_7ca730;
        }
    }
    ctx->pc = 0x7CA704u;
label_7ca704:
    // 0x7ca704: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x7ca704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_7ca708:
    // 0x7ca708: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7ca708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
label_7ca70c:
    // 0x7ca70c: 0x3c08007d  lui         $t0, 0x7D
    ctx->pc = 0x7ca70cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)125 << 16));
label_7ca710:
    // 0x7ca710: 0x24a5b260  addiu       $a1, $a1, -0x4DA0
    ctx->pc = 0x7ca710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947424));
label_7ca714:
    // 0x7ca714: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x7ca714u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_7ca718:
    // 0x7ca718: 0x25089e28  addiu       $t0, $t0, -0x61D8
    ctx->pc = 0x7ca718u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942248));
label_7ca71c:
    // 0x7ca71c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x7ca71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_7ca720:
    // 0x7ca720: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7ca720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7ca724:
    // 0x7ca724: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x7ca724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_7ca728:
    // 0x7ca728: 0xc1f2af2  jal         func_7CABC8
label_7ca72c:
    if (ctx->pc == 0x7CA72Cu) {
        ctx->pc = 0x7CA72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA728u;
        // 0x7ca72c: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA730u;
        goto label_7ca730;
    }
    ctx->pc = 0x7CA728u;
    SET_GPR_U32(ctx, 31, 0x7CA730u);
    ctx->pc = 0x7CA72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA728u;
    // 0x7ca72c: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CABC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CABC8u, 0x7CA728u, 0x7CA730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA730u;
label_7ca730:
    // 0x7ca730: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_7ca734:
    if (ctx->pc == 0x7CA734u) {
        ctx->pc = 0x7CA734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA730u;
        // 0x7ca734: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA738u;
        goto label_7ca738;
    }
    ctx->pc = 0x7CA730u;
    {
        const bool branch_taken_0x7ca730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA730u;
        // 0x7ca734: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca730) {
            ctx->pc = 0x7CA740u;
            goto label_7ca740;
        }
    }
    ctx->pc = 0x7CA738u;
label_7ca738:
    // 0x7ca738: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x7ca738u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_7ca73c:
    // 0x7ca73c: 0x8c53000c  lw          $s3, 0xC($v0)
    ctx->pc = 0x7ca73cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_7ca740:
    // 0x7ca740: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_7ca744:
    if (ctx->pc == 0x7CA744u) {
        ctx->pc = 0x7CA744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA740u;
        // 0x7ca744: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA748u;
        goto label_7ca748;
    }
    ctx->pc = 0x7CA740u;
    {
        const bool branch_taken_0x7ca740 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA740u;
        // 0x7ca744: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca740) {
            ctx->pc = 0x7CA774u;
            goto label_7ca774;
        }
    }
    ctx->pc = 0x7CA748u;
label_7ca748:
    // 0x7ca748: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x7ca748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_7ca74c:
    // 0x7ca74c: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7ca74cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
label_7ca750:
    // 0x7ca750: 0x3c08007d  lui         $t0, 0x7D
    ctx->pc = 0x7ca750u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)125 << 16));
label_7ca754:
    // 0x7ca754: 0x24a5b260  addiu       $a1, $a1, -0x4DA0
    ctx->pc = 0x7ca754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947424));
label_7ca758:
    // 0x7ca758: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x7ca758u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_7ca75c:
    // 0x7ca75c: 0x25089e28  addiu       $t0, $t0, -0x61D8
    ctx->pc = 0x7ca75cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942248));
label_7ca760:
    // 0x7ca760: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x7ca760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_7ca764:
    // 0x7ca764: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7ca764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7ca768:
    // 0x7ca768: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x7ca768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_7ca76c:
    // 0x7ca76c: 0xc1f2af2  jal         func_7CABC8
label_7ca770:
    if (ctx->pc == 0x7CA770u) {
        ctx->pc = 0x7CA770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA76Cu;
        // 0x7ca770: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA774u;
        goto label_7ca774;
    }
    ctx->pc = 0x7CA76Cu;
    SET_GPR_U32(ctx, 31, 0x7CA774u);
    ctx->pc = 0x7CA770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA76Cu;
    // 0x7ca770: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CABC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CABC8u, 0x7CA76Cu, 0x7CA774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA774u;
label_7ca774:
    // 0x7ca774: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_7ca778:
    if (ctx->pc == 0x7CA778u) {
        ctx->pc = 0x7CA778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA774u;
        // 0x7ca778: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA77Cu;
        goto label_7ca77c;
    }
    ctx->pc = 0x7CA774u;
    {
        const bool branch_taken_0x7ca774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA774u;
        // 0x7ca778: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca774) {
            ctx->pc = 0x7CA784u;
            goto label_7ca784;
        }
    }
    ctx->pc = 0x7CA77Cu;
label_7ca77c:
    // 0x7ca77c: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x7ca77cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_7ca780:
    // 0x7ca780: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x7ca780u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_7ca784:
    // 0x7ca784: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x7ca784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_7ca788:
    // 0x7ca788: 0x32540001  andi        $s4, $s2, 0x1
    ctx->pc = 0x7ca788u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_7ca78c:
    // 0x7ca78c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x7ca78cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_7ca790:
    // 0x7ca790: 0x144000bb  bnez        $v0, . + 4 + (0xBB << 2)
label_7ca794:
    if (ctx->pc == 0x7CA794u) {
        ctx->pc = 0x7CA794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA790u;
        // 0x7ca794: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA798u;
        goto label_7ca798;
    }
    ctx->pc = 0x7CA790u;
    {
        const bool branch_taken_0x7ca790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CA794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA790u;
        // 0x7ca794: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca790) {
            ctx->pc = 0x7CAA80u;
            goto label_7caa80;
        }
    }
    ctx->pc = 0x7CA798u;
label_7ca798:
    // 0x7ca798: 0x32630002  andi        $v1, $s3, 0x2
    ctx->pc = 0x7ca798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
label_7ca79c:
    // 0x7ca79c: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x7ca79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_7ca7a0:
    // 0x7ca7a0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x7ca7a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_7ca7a4:
    // 0x7ca7a4: 0x144000b6  bnez        $v0, . + 4 + (0xB6 << 2)
label_7ca7a8:
    if (ctx->pc == 0x7CA7A8u) {
        ctx->pc = 0x7CA7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA7A4u;
        // 0x7ca7a8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA7ACu;
        goto label_7ca7ac;
    }
    ctx->pc = 0x7CA7A4u;
    {
        const bool branch_taken_0x7ca7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CA7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA7A4u;
        // 0x7ca7a8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca7a4) {
            ctx->pc = 0x7CAA80u;
            goto label_7caa80;
        }
    }
    ctx->pc = 0x7CA7ACu;
label_7ca7ac:
    // 0x7ca7ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7ca7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7ca7b0:
    // 0x7ca7b0: 0xc1f25f2  jal         func_7C97C8
label_7ca7b4:
    if (ctx->pc == 0x7CA7B4u) {
        ctx->pc = 0x7CA7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA7B0u;
        // 0x7ca7b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA7B8u;
        goto label_7ca7b8;
    }
    ctx->pc = 0x7CA7B0u;
    SET_GPR_U32(ctx, 31, 0x7CA7B8u);
    ctx->pc = 0x7CA7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA7B0u;
    // 0x7ca7b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C97C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C97C8u, 0x7CA7B0u, 0x7CA7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA7B8u;
label_7ca7b8:
    // 0x7ca7b8: 0x544000b0  bnel        $v0, $zero, . + 4 + (0xB0 << 2)
label_7ca7bc:
    if (ctx->pc == 0x7CA7BCu) {
        ctx->pc = 0x7CA7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA7B8u;
        // 0x7ca7bc: 0xafb60000  sw          $s6, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA7C0u;
        goto label_7ca7c0;
    }
    ctx->pc = 0x7CA7B8u;
    {
        const bool branch_taken_0x7ca7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ca7b8) {
            ctx->pc = 0x7CA7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CA7B8u;
            // 0x7ca7bc: 0xafb60000  sw          $s6, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CAA7Cu;
            goto label_7caa7c;
        }
    }
    ctx->pc = 0x7CA7C0u;
label_7ca7c0:
    // 0x7ca7c0: 0xc1f2b1e  jal         func_7CAC78
label_7ca7c4:
    if (ctx->pc == 0x7CA7C4u) {
        ctx->pc = 0x7CA7C8u;
        goto label_7ca7c8;
    }
    ctx->pc = 0x7CA7C0u;
    SET_GPR_U32(ctx, 31, 0x7CA7C8u);
    ctx->pc = 0x7CAC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CAC78u, 0x7CA7C0u, 0x7CA7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA7C8u;
label_7ca7c8:
    // 0x7ca7c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7ca7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7ca7cc:
    // 0x7ca7cc: 0xc1f25f2  jal         func_7C97C8
label_7ca7d0:
    if (ctx->pc == 0x7CA7D0u) {
        ctx->pc = 0x7CA7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA7CCu;
        // 0x7ca7d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA7D4u;
        goto label_7ca7d4;
    }
    ctx->pc = 0x7CA7CCu;
    SET_GPR_U32(ctx, 31, 0x7CA7D4u);
    ctx->pc = 0x7CA7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA7CCu;
    // 0x7ca7d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C97C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C97C8u, 0x7CA7CCu, 0x7CA7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA7D4u;
label_7ca7d4:
    // 0x7ca7d4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_7ca7d8:
    if (ctx->pc == 0x7CA7D8u) {
        ctx->pc = 0x7CA7DCu;
        goto label_7ca7dc;
    }
    ctx->pc = 0x7CA7D4u;
    {
        const bool branch_taken_0x7ca7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ca7d4) {
            ctx->pc = 0x7CA814u;
            goto label_7ca814;
        }
    }
    ctx->pc = 0x7CA7DCu;
label_7ca7dc:
    // 0x7ca7dc: 0x120000a6  beqz        $s0, . + 4 + (0xA6 << 2)
label_7ca7e0:
    if (ctx->pc == 0x7CA7E0u) {
        ctx->pc = 0x7CA7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA7DCu;
        // 0x7ca7e0: 0x3c08007d  lui         $t0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA7E4u;
        goto label_7ca7e4;
    }
    ctx->pc = 0x7CA7DCu;
    {
        const bool branch_taken_0x7ca7dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA7DCu;
        // 0x7ca7e0: 0x3c08007d  lui         $t0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca7dc) {
            ctx->pc = 0x7CAA78u;
            goto label_7caa78;
        }
    }
    ctx->pc = 0x7CA7E4u;
label_7ca7e4:
    // 0x7ca7e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x7ca7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_7ca7e8:
    // 0x7ca7e8: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7ca7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
label_7ca7ec:
    // 0x7ca7ec: 0x24a5b180  addiu       $a1, $a1, -0x4E80
    ctx->pc = 0x7ca7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947200));
label_7ca7f0:
    // 0x7ca7f0: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x7ca7f0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_7ca7f4:
    // 0x7ca7f4: 0x25089e28  addiu       $t0, $t0, -0x61D8
    ctx->pc = 0x7ca7f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942248));
label_7ca7f8:
    // 0x7ca7f8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x7ca7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_7ca7fc:
    // 0x7ca7fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7ca7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7ca800:
    // 0x7ca800: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x7ca800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_7ca804:
    // 0x7ca804: 0xc1f2af2  jal         func_7CABC8
label_7ca808:
    if (ctx->pc == 0x7CA808u) {
        ctx->pc = 0x7CA808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA804u;
        // 0x7ca808: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA80Cu;
        goto label_7ca80c;
    }
    ctx->pc = 0x7CA804u;
    SET_GPR_U32(ctx, 31, 0x7CA80Cu);
    ctx->pc = 0x7CA808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA804u;
    // 0x7ca808: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CABC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CABC8u, 0x7CA804u, 0x7CA80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA80Cu;
label_7ca80c:
    // 0x7ca80c: 0x5040009b  beql        $v0, $zero, . + 4 + (0x9B << 2)
label_7ca810:
    if (ctx->pc == 0x7CA810u) {
        ctx->pc = 0x7CA810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA80Cu;
        // 0x7ca810: 0xafb60000  sw          $s6, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA814u;
        goto label_7ca814;
    }
    ctx->pc = 0x7CA80Cu;
    {
        const bool branch_taken_0x7ca80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ca80c) {
            ctx->pc = 0x7CA810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CA80Cu;
            // 0x7ca810: 0xafb60000  sw          $s6, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CAA7Cu;
            goto label_7caa7c;
        }
    }
    ctx->pc = 0x7CA814u;
label_7ca814:
    // 0x7ca814: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_7ca818:
    if (ctx->pc == 0x7CA818u) {
        ctx->pc = 0x7CA818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA814u;
        // 0x7ca818: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA81Cu;
        goto label_7ca81c;
    }
    ctx->pc = 0x7CA814u;
    {
        const bool branch_taken_0x7ca814 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ca814) {
            ctx->pc = 0x7CA818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CA814u;
            // 0x7ca818: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CA824u;
            goto label_7ca824;
        }
    }
    ctx->pc = 0x7CA81Cu;
label_7ca81c:
    // 0x7ca81c: 0x1000000c  b           . + 4 + (0xC << 2)
label_7ca820:
    if (ctx->pc == 0x7CA820u) {
        ctx->pc = 0x7CA820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA81Cu;
        // 0x7ca820: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA824u;
        goto label_7ca824;
    }
    ctx->pc = 0x7CA81Cu;
    {
        const bool branch_taken_0x7ca81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA81Cu;
        // 0x7ca820: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca81c) {
            ctx->pc = 0x7CA850u;
            goto label_7ca850;
        }
    }
    ctx->pc = 0x7CA824u;
label_7ca824:
    // 0x7ca824: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7ca824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
label_7ca828:
    // 0x7ca828: 0x3c08007d  lui         $t0, 0x7D
    ctx->pc = 0x7ca828u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)125 << 16));
label_7ca82c:
    // 0x7ca82c: 0x24a59c48  addiu       $a1, $a1, -0x63B8
    ctx->pc = 0x7ca82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941768));
label_7ca830:
    // 0x7ca830: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x7ca830u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_7ca834:
    // 0x7ca834: 0x25089e28  addiu       $t0, $t0, -0x61D8
    ctx->pc = 0x7ca834u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942248));
label_7ca838:
    // 0x7ca838: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x7ca838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_7ca83c:
    // 0x7ca83c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7ca83cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7ca840:
    // 0x7ca840: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x7ca840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_7ca844:
    // 0x7ca844: 0xc1f2af2  jal         func_7CABC8
label_7ca848:
    if (ctx->pc == 0x7CA848u) {
        ctx->pc = 0x7CA848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA844u;
        // 0x7ca848: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA84Cu;
        goto label_7ca84c;
    }
    ctx->pc = 0x7CA844u;
    SET_GPR_U32(ctx, 31, 0x7CA84Cu);
    ctx->pc = 0x7CA848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA844u;
    // 0x7ca848: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CABC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CABC8u, 0x7CA844u, 0x7CA84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA84Cu;
label_7ca84c:
    // 0x7ca84c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x7ca84cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7ca850:
    // 0x7ca850: 0x1140000d  beqz        $t2, . + 4 + (0xD << 2)
label_7ca854:
    if (ctx->pc == 0x7CA854u) {
        ctx->pc = 0x7CA858u;
        goto label_7ca858;
    }
    ctx->pc = 0x7CA850u;
    {
        const bool branch_taken_0x7ca850 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ca850) {
            ctx->pc = 0x7CA888u;
            goto label_7ca888;
        }
    }
    ctx->pc = 0x7CA858u;
label_7ca858:
    // 0x7ca858: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x7ca858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_7ca85c:
    // 0x7ca85c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7ca85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7ca860:
    // 0x7ca860: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x7ca860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_7ca864:
    // 0x7ca864: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7ca864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7ca868:
    // 0x7ca868: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x7ca868u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_7ca86c:
    // 0x7ca86c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7ca86cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7ca870:
    // 0x7ca870: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x7ca870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_7ca874:
    // 0x7ca874: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7ca874u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7ca878:
    // 0x7ca878: 0x40f809  jalr        $v0
label_7ca87c:
    if (ctx->pc == 0x7CA87Cu) {
        ctx->pc = 0x7CA87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA878u;
        // 0x7ca87c: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA880u;
        goto label_7ca880;
    }
    ctx->pc = 0x7CA878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7CA880u);
        ctx->pc = 0x7CA87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA878u;
        // 0x7ca87c: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CA878u, 0x7CA880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7CA880u;
label_7ca880:
    // 0x7ca880: 0x1000007e  b           . + 4 + (0x7E << 2)
label_7ca884:
    if (ctx->pc == 0x7CA884u) {
        ctx->pc = 0x7CA884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA880u;
        // 0x7ca884: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA888u;
        goto label_7ca888;
    }
    ctx->pc = 0x7CA880u;
    {
        const bool branch_taken_0x7ca880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA880u;
        // 0x7ca884: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca880) {
            ctx->pc = 0x7CAA7Cu;
            goto label_7caa7c;
        }
    }
    ctx->pc = 0x7CA888u;
label_7ca888:
    // 0x7ca888: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_7ca88c:
    if (ctx->pc == 0x7CA88Cu) {
        ctx->pc = 0x7CA88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA888u;
        // 0x7ca88c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA890u;
        goto label_7ca890;
    }
    ctx->pc = 0x7CA888u;
    {
        const bool branch_taken_0x7ca888 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ca888) {
            ctx->pc = 0x7CA88Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CA888u;
            // 0x7ca88c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CA898u;
            goto label_7ca898;
        }
    }
    ctx->pc = 0x7CA890u;
label_7ca890:
    // 0x7ca890: 0x1000000c  b           . + 4 + (0xC << 2)
label_7ca894:
    if (ctx->pc == 0x7CA894u) {
        ctx->pc = 0x7CA894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA890u;
        // 0x7ca894: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA898u;
        goto label_7ca898;
    }
    ctx->pc = 0x7CA890u;
    {
        const bool branch_taken_0x7ca890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA890u;
        // 0x7ca894: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca890) {
            ctx->pc = 0x7CA8C4u;
            goto label_7ca8c4;
        }
    }
    ctx->pc = 0x7CA898u;
label_7ca898:
    // 0x7ca898: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7ca898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
label_7ca89c:
    // 0x7ca89c: 0x3c08007d  lui         $t0, 0x7D
    ctx->pc = 0x7ca89cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)125 << 16));
label_7ca8a0:
    // 0x7ca8a0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x7ca8a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7ca8a4:
    // 0x7ca8a4: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x7ca8a4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_7ca8a8:
    // 0x7ca8a8: 0x24a5b2d0  addiu       $a1, $a1, -0x4D30
    ctx->pc = 0x7ca8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947536));
label_7ca8ac:
    // 0x7ca8ac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x7ca8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_7ca8b0:
    // 0x7ca8b0: 0x25089e28  addiu       $t0, $t0, -0x61D8
    ctx->pc = 0x7ca8b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942248));
label_7ca8b4:
    // 0x7ca8b4: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x7ca8b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_7ca8b8:
    // 0x7ca8b8: 0xc1f2af2  jal         func_7CABC8
label_7ca8bc:
    if (ctx->pc == 0x7CA8BCu) {
        ctx->pc = 0x7CA8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA8B8u;
        // 0x7ca8bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA8C0u;
        goto label_7ca8c0;
    }
    ctx->pc = 0x7CA8B8u;
    SET_GPR_U32(ctx, 31, 0x7CA8C0u);
    ctx->pc = 0x7CA8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA8B8u;
    // 0x7ca8bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CABC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CABC8u, 0x7CA8B8u, 0x7CA8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA8C0u;
label_7ca8c0:
    // 0x7ca8c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7ca8c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7ca8c4:
    // 0x7ca8c4: 0x1200006e  beqz        $s0, . + 4 + (0x6E << 2)
label_7ca8c8:
    if (ctx->pc == 0x7CA8C8u) {
        ctx->pc = 0x7CA8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA8C4u;
        // 0x7ca8c8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA8CCu;
        goto label_7ca8cc;
    }
    ctx->pc = 0x7CA8C4u;
    {
        const bool branch_taken_0x7ca8c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA8C4u;
        // 0x7ca8c8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca8c4) {
            ctx->pc = 0x7CAA80u;
            goto label_7caa80;
        }
    }
    ctx->pc = 0x7CA8CCu;
label_7ca8cc:
    // 0x7ca8cc: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_7ca8d0:
    if (ctx->pc == 0x7CA8D0u) {
        ctx->pc = 0x7CA8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA8CCu;
        // 0x7ca8d0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA8D4u;
        goto label_7ca8d4;
    }
    ctx->pc = 0x7CA8CCu;
    {
        const bool branch_taken_0x7ca8cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ca8cc) {
            ctx->pc = 0x7CA8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CA8CCu;
            // 0x7ca8d0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CA8DCu;
            goto label_7ca8dc;
        }
    }
    ctx->pc = 0x7CA8D4u;
label_7ca8d4:
    // 0x7ca8d4: 0x1000000c  b           . + 4 + (0xC << 2)
label_7ca8d8:
    if (ctx->pc == 0x7CA8D8u) {
        ctx->pc = 0x7CA8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA8D4u;
        // 0x7ca8d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA8DCu;
        goto label_7ca8dc;
    }
    ctx->pc = 0x7CA8D4u;
    {
        const bool branch_taken_0x7ca8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA8D4u;
        // 0x7ca8d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca8d4) {
            ctx->pc = 0x7CA908u;
            goto label_7ca908;
        }
    }
    ctx->pc = 0x7CA8DCu;
label_7ca8dc:
    // 0x7ca8dc: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7ca8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
label_7ca8e0:
    // 0x7ca8e0: 0x3c08007d  lui         $t0, 0x7D
    ctx->pc = 0x7ca8e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)125 << 16));
label_7ca8e4:
    // 0x7ca8e4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x7ca8e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7ca8e8:
    // 0x7ca8e8: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x7ca8e8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_7ca8ec:
    // 0x7ca8ec: 0x24a5b2d0  addiu       $a1, $a1, -0x4D30
    ctx->pc = 0x7ca8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947536));
label_7ca8f0:
    // 0x7ca8f0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x7ca8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_7ca8f4:
    // 0x7ca8f4: 0x25089e28  addiu       $t0, $t0, -0x61D8
    ctx->pc = 0x7ca8f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942248));
label_7ca8f8:
    // 0x7ca8f8: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x7ca8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_7ca8fc:
    // 0x7ca8fc: 0xc1f2af2  jal         func_7CABC8
label_7ca900:
    if (ctx->pc == 0x7CA900u) {
        ctx->pc = 0x7CA900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA8FCu;
        // 0x7ca900: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA904u;
        goto label_7ca904;
    }
    ctx->pc = 0x7CA8FCu;
    SET_GPR_U32(ctx, 31, 0x7CA904u);
    ctx->pc = 0x7CA900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA8FCu;
    // 0x7ca900: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CABC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CABC8u, 0x7CA8FCu, 0x7CA904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA904u;
label_7ca904:
    // 0x7ca904: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7ca904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7ca908:
    // 0x7ca908: 0x1220005c  beqz        $s1, . + 4 + (0x5C << 2)
label_7ca90c:
    if (ctx->pc == 0x7CA90Cu) {
        ctx->pc = 0x7CA90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA908u;
        // 0x7ca90c: 0x3c1e007d  lui         $fp, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA910u;
        goto label_7ca910;
    }
    ctx->pc = 0x7CA908u;
    {
        const bool branch_taken_0x7ca908 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA908u;
        // 0x7ca90c: 0x3c1e007d  lui         $fp, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca908) {
            ctx->pc = 0x7CAA7Cu;
            goto label_7caa7c;
        }
    }
    ctx->pc = 0x7CA910u;
label_7ca910:
    // 0x7ca910: 0x8e310008  lw          $s1, 0x8($s1)
    ctx->pc = 0x7ca910u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_7ca914:
    // 0x7ca914: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x7ca914u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_7ca918:
    // 0x7ca918: 0x3c15007d  lui         $s5, 0x7D
    ctx->pc = 0x7ca918u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)125 << 16));
label_7ca91c:
    // 0x7ca91c: 0x10000024  b           . + 4 + (0x24 << 2)
label_7ca920:
    if (ctx->pc == 0x7CA920u) {
        ctx->pc = 0x7CA920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA91Cu;
        // 0x7ca920: 0x3c17007d  lui         $s7, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA924u;
        goto label_7ca924;
    }
    ctx->pc = 0x7CA91Cu;
    {
        const bool branch_taken_0x7ca91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA91Cu;
        // 0x7ca920: 0x3c17007d  lui         $s7, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca91c) {
            ctx->pc = 0x7CA9B0u;
            goto label_7ca9b0;
        }
    }
    ctx->pc = 0x7CA924u;
label_7ca924:
    // 0x7ca924: 0x0  nop
    ctx->pc = 0x7ca924u;
    // NOP
label_7ca928:
    // 0x7ca928: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_7ca92c:
    if (ctx->pc == 0x7CA92Cu) {
        ctx->pc = 0x7CA92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA928u;
        // 0x7ca92c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA930u;
        goto label_7ca930;
    }
    ctx->pc = 0x7CA928u;
    {
        const bool branch_taken_0x7ca928 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ca928) {
            ctx->pc = 0x7CA92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CA928u;
            // 0x7ca92c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CA938u;
            goto label_7ca938;
        }
    }
    ctx->pc = 0x7CA930u;
label_7ca930:
    // 0x7ca930: 0x1000000a  b           . + 4 + (0xA << 2)
label_7ca934:
    if (ctx->pc == 0x7CA934u) {
        ctx->pc = 0x7CA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA930u;
        // 0x7ca934: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA938u;
        goto label_7ca938;
    }
    ctx->pc = 0x7CA930u;
    {
        const bool branch_taken_0x7ca930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA930u;
        // 0x7ca934: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca930) {
            ctx->pc = 0x7CA95Cu;
            goto label_7ca95c;
        }
    }
    ctx->pc = 0x7CA938u;
label_7ca938:
    // 0x7ca938: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x7ca938u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7ca93c:
    // 0x7ca93c: 0x26e5b2d0  addiu       $a1, $s7, -0x4D30
    ctx->pc = 0x7ca93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294947536));
label_7ca940:
    // 0x7ca940: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7ca940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7ca944:
    // 0x7ca944: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x7ca944u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_7ca948:
    // 0x7ca948: 0x26a89e28  addiu       $t0, $s5, -0x61D8
    ctx->pc = 0x7ca948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942248));
label_7ca94c:
    // 0x7ca94c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x7ca94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_7ca950:
    // 0x7ca950: 0xc1f2af2  jal         func_7CABC8
label_7ca954:
    if (ctx->pc == 0x7CA954u) {
        ctx->pc = 0x7CA954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA950u;
        // 0x7ca954: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA958u;
        goto label_7ca958;
    }
    ctx->pc = 0x7CA950u;
    SET_GPR_U32(ctx, 31, 0x7CA958u);
    ctx->pc = 0x7CA954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA950u;
    // 0x7ca954: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CABC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CABC8u, 0x7CA950u, 0x7CA958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA958u;
label_7ca958:
    // 0x7ca958: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7ca958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7ca95c:
    // 0x7ca95c: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_7ca960:
    if (ctx->pc == 0x7CA960u) {
        ctx->pc = 0x7CA960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA95Cu;
        // 0x7ca960: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA964u;
        goto label_7ca964;
    }
    ctx->pc = 0x7CA95Cu;
    {
        const bool branch_taken_0x7ca95c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ca95c) {
            ctx->pc = 0x7CA960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CA95Cu;
            // 0x7ca960: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CA96Cu;
            goto label_7ca96c;
        }
    }
    ctx->pc = 0x7CA964u;
label_7ca964:
    // 0x7ca964: 0x1000000a  b           . + 4 + (0xA << 2)
label_7ca968:
    if (ctx->pc == 0x7CA968u) {
        ctx->pc = 0x7CA968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA964u;
        // 0x7ca968: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA96Cu;
        goto label_7ca96c;
    }
    ctx->pc = 0x7CA964u;
    {
        const bool branch_taken_0x7ca964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA964u;
        // 0x7ca968: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca964) {
            ctx->pc = 0x7CA990u;
            goto label_7ca990;
        }
    }
    ctx->pc = 0x7CA96Cu;
label_7ca96c:
    // 0x7ca96c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x7ca96cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7ca970:
    // 0x7ca970: 0x26e5b2d0  addiu       $a1, $s7, -0x4D30
    ctx->pc = 0x7ca970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294947536));
label_7ca974:
    // 0x7ca974: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7ca974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7ca978:
    // 0x7ca978: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x7ca978u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_7ca97c:
    // 0x7ca97c: 0x26a89e28  addiu       $t0, $s5, -0x61D8
    ctx->pc = 0x7ca97cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942248));
label_7ca980:
    // 0x7ca980: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x7ca980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_7ca984:
    // 0x7ca984: 0xc1f2af2  jal         func_7CABC8
label_7ca988:
    if (ctx->pc == 0x7CA988u) {
        ctx->pc = 0x7CA988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA984u;
        // 0x7ca988: 0x2073821  addu        $a3, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA98Cu;
        goto label_7ca98c;
    }
    ctx->pc = 0x7CA984u;
    SET_GPR_U32(ctx, 31, 0x7CA98Cu);
    ctx->pc = 0x7CA988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA984u;
    // 0x7ca988: 0x2073821  addu        $a3, $s0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CABC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CABC8u, 0x7CA984u, 0x7CA98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA98Cu;
label_7ca98c:
    // 0x7ca98c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7ca98cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7ca990:
    // 0x7ca990: 0x1220003b  beqz        $s1, . + 4 + (0x3B << 2)
label_7ca994:
    if (ctx->pc == 0x7CA994u) {
        ctx->pc = 0x7CA994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA990u;
        // 0x7ca994: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA998u;
        goto label_7ca998;
    }
    ctx->pc = 0x7CA990u;
    {
        const bool branch_taken_0x7ca990 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA990u;
        // 0x7ca994: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca990) {
            ctx->pc = 0x7CAA80u;
            goto label_7caa80;
        }
    }
    ctx->pc = 0x7CA998u;
label_7ca998:
    // 0x7ca998: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
label_7ca99c:
    if (ctx->pc == 0x7CA99Cu) {
        ctx->pc = 0x7CA99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA998u;
        // 0x7ca99c: 0x3a420001  xori        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA9A0u;
        goto label_7ca9a0;
    }
    ctx->pc = 0x7CA998u;
    {
        const bool branch_taken_0x7ca998 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA998u;
        // 0x7ca99c: 0x3a420001  xori        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca998) {
            ctx->pc = 0x7CAA7Cu;
            goto label_7caa7c;
        }
    }
    ctx->pc = 0x7CA9A0u;
label_7ca9a0:
    // 0x7ca9a0: 0x8e310008  lw          $s1, 0x8($s1)
    ctx->pc = 0x7ca9a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_7ca9a4:
    // 0x7ca9a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7ca9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_7ca9a8:
    // 0x7ca9a8: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x7ca9a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_7ca9ac:
    // 0x7ca9ac: 0x2a00b  movn        $s4, $zero, $v0
    ctx->pc = 0x7ca9acu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_7ca9b0:
    // 0x7ca9b0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_7ca9b4:
    if (ctx->pc == 0x7CA9B4u) {
        ctx->pc = 0x7CA9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA9B0u;
        // 0x7ca9b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA9B8u;
        goto label_7ca9b8;
    }
    ctx->pc = 0x7CA9B0u;
    {
        const bool branch_taken_0x7ca9b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA9B0u;
        // 0x7ca9b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca9b0) {
            ctx->pc = 0x7CA9DCu;
            goto label_7ca9dc;
        }
    }
    ctx->pc = 0x7CA9B8u;
label_7ca9b8:
    // 0x7ca9b8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x7ca9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_7ca9bc:
    // 0x7ca9bc: 0x27c5b260  addiu       $a1, $fp, -0x4DA0
    ctx->pc = 0x7ca9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294947424));
label_7ca9c0:
    // 0x7ca9c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7ca9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7ca9c4:
    // 0x7ca9c4: 0x26a89e28  addiu       $t0, $s5, -0x61D8
    ctx->pc = 0x7ca9c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942248));
label_7ca9c8:
    // 0x7ca9c8: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x7ca9c8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_7ca9cc:
    // 0x7ca9cc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x7ca9ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7ca9d0:
    // 0x7ca9d0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x7ca9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_7ca9d4:
    // 0x7ca9d4: 0xc1f2af2  jal         func_7CABC8
label_7ca9d8:
    if (ctx->pc == 0x7CA9D8u) {
        ctx->pc = 0x7CA9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA9D4u;
        // 0x7ca9d8: 0x2073821  addu        $a3, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA9DCu;
        goto label_7ca9dc;
    }
    ctx->pc = 0x7CA9D4u;
    SET_GPR_U32(ctx, 31, 0x7CA9DCu);
    ctx->pc = 0x7CA9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA9D4u;
    // 0x7ca9d8: 0x2073821  addu        $a3, $s0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CABC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CABC8u, 0x7CA9D4u, 0x7CA9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA9DCu;
label_7ca9dc:
    // 0x7ca9dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_7ca9e0:
    if (ctx->pc == 0x7CA9E0u) {
        ctx->pc = 0x7CA9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA9DCu;
        // 0x7ca9e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA9E4u;
        goto label_7ca9e4;
    }
    ctx->pc = 0x7CA9DCu;
    {
        const bool branch_taken_0x7ca9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA9DCu;
        // 0x7ca9e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca9dc) {
            ctx->pc = 0x7CA9ECu;
            goto label_7ca9ec;
        }
    }
    ctx->pc = 0x7CA9E4u;
label_7ca9e4:
    // 0x7ca9e4: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x7ca9e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_7ca9e8:
    // 0x7ca9e8: 0x8c53000c  lw          $s3, 0xC($v0)
    ctx->pc = 0x7ca9e8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_7ca9ec:
    // 0x7ca9ec: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_7ca9f0:
    if (ctx->pc == 0x7CA9F0u) {
        ctx->pc = 0x7CA9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA9ECu;
        // 0x7ca9f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA9F4u;
        goto label_7ca9f4;
    }
    ctx->pc = 0x7CA9ECu;
    {
        const bool branch_taken_0x7ca9ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA9ECu;
        // 0x7ca9f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca9ec) {
            ctx->pc = 0x7CAA18u;
            goto label_7caa18;
        }
    }
    ctx->pc = 0x7CA9F4u;
label_7ca9f4:
    // 0x7ca9f4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x7ca9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_7ca9f8:
    // 0x7ca9f8: 0x27c5b260  addiu       $a1, $fp, -0x4DA0
    ctx->pc = 0x7ca9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294947424));
label_7ca9fc:
    // 0x7ca9fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7ca9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7caa00:
    // 0x7caa00: 0x26a89e28  addiu       $t0, $s5, -0x61D8
    ctx->pc = 0x7caa00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942248));
label_7caa04:
    // 0x7caa04: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x7caa04u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_7caa08:
    // 0x7caa08: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x7caa08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7caa0c:
    // 0x7caa0c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x7caa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_7caa10:
    // 0x7caa10: 0xc1f2af2  jal         func_7CABC8
label_7caa14:
    if (ctx->pc == 0x7CAA14u) {
        ctx->pc = 0x7CAA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAA10u;
        // 0x7caa14: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CAA18u;
        goto label_7caa18;
    }
    ctx->pc = 0x7CAA10u;
    SET_GPR_U32(ctx, 31, 0x7CAA18u);
    ctx->pc = 0x7CAA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CAA10u;
    // 0x7caa14: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CABC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CABC8u, 0x7CAA10u, 0x7CAA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CAA18u;
label_7caa18:
    // 0x7caa18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_7caa1c:
    if (ctx->pc == 0x7CAA1Cu) {
        ctx->pc = 0x7CAA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAA18u;
        // 0x7caa1c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CAA20u;
        goto label_7caa20;
    }
    ctx->pc = 0x7CAA18u;
    {
        const bool branch_taken_0x7caa18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CAA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAA18u;
        // 0x7caa1c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7caa18) {
            ctx->pc = 0x7CAA28u;
            goto label_7caa28;
        }
    }
    ctx->pc = 0x7CAA20u;
label_7caa20:
    // 0x7caa20: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x7caa20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_7caa24:
    // 0x7caa24: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x7caa24u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_7caa28:
    // 0x7caa28: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x7caa28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_7caa2c:
    // 0x7caa2c: 0x32450001  andi        $a1, $s2, 0x1
    ctx->pc = 0x7caa2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_7caa30:
    // 0x7caa30: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x7caa30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_7caa34:
    // 0x7caa34: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_7caa38:
    if (ctx->pc == 0x7CAA38u) {
        ctx->pc = 0x7CAA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAA34u;
        // 0x7caa38: 0x32640002  andi        $a0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CAA3Cu;
        goto label_7caa3c;
    }
    ctx->pc = 0x7CAA34u;
    {
        const bool branch_taken_0x7caa34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CAA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAA34u;
        // 0x7caa38: 0x32640002  andi        $a0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7caa34) {
            ctx->pc = 0x7CAA7Cu;
            goto label_7caa7c;
        }
    }
    ctx->pc = 0x7CAA3Cu;
label_7caa3c:
    // 0x7caa3c: 0x32430002  andi        $v1, $s2, 0x2
    ctx->pc = 0x7caa3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_7caa40:
    // 0x7caa40: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x7caa40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_7caa44:
    // 0x7caa44: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_7caa48:
    if (ctx->pc == 0x7CAA48u) {
        ctx->pc = 0x7CAA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAA44u;
        // 0x7caa48: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CAA4Cu;
        goto label_7caa4c;
    }
    ctx->pc = 0x7CAA44u;
    {
        const bool branch_taken_0x7caa44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CAA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAA44u;
        // 0x7caa48: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7caa44) {
            ctx->pc = 0x7CAA80u;
            goto label_7caa80;
        }
    }
    ctx->pc = 0x7CAA4Cu;
label_7caa4c:
    // 0x7caa4c: 0x56800006  bnel        $s4, $zero, . + 4 + (0x6 << 2)
label_7caa50:
    if (ctx->pc == 0x7CAA50u) {
        ctx->pc = 0x7CAA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAA4Cu;
        // 0x7caa50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CAA54u;
        goto label_7caa54;
    }
    ctx->pc = 0x7CAA4Cu;
    {
        const bool branch_taken_0x7caa4c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x7caa4c) {
            ctx->pc = 0x7CAA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CAA4Cu;
            // 0x7caa50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CAA68u;
            goto label_7caa68;
        }
    }
    ctx->pc = 0x7CAA54u;
label_7caa54:
    // 0x7caa54: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x7caa54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_7caa58:
    // 0x7caa58: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_7caa5c:
    if (ctx->pc == 0x7CAA5Cu) {
        ctx->pc = 0x7CAA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAA58u;
        // 0x7caa5c: 0x83102a  slt         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CAA60u;
        goto label_7caa60;
    }
    ctx->pc = 0x7CAA58u;
    {
        const bool branch_taken_0x7caa58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CAA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAA58u;
        // 0x7caa5c: 0x83102a  slt         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7caa58) {
            ctx->pc = 0x7CAA7Cu;
            goto label_7caa7c;
        }
    }
    ctx->pc = 0x7CAA60u;
label_7caa60:
    // 0x7caa60: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_7caa64:
    if (ctx->pc == 0x7CAA64u) {
        ctx->pc = 0x7CAA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAA60u;
        // 0x7caa64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CAA68u;
        goto label_7caa68;
    }
    ctx->pc = 0x7CAA60u;
    {
        const bool branch_taken_0x7caa60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CAA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAA60u;
        // 0x7caa64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7caa60) {
            ctx->pc = 0x7CAA7Cu;
            goto label_7caa7c;
        }
    }
    ctx->pc = 0x7CAA68u;
label_7caa68:
    // 0x7caa68: 0xc1f25f2  jal         func_7C97C8
label_7caa6c:
    if (ctx->pc == 0x7CAA6Cu) {
        ctx->pc = 0x7CAA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAA68u;
        // 0x7caa6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CAA70u;
        goto label_7caa70;
    }
    ctx->pc = 0x7CAA68u;
    SET_GPR_U32(ctx, 31, 0x7CAA70u);
    ctx->pc = 0x7CAA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CAA68u;
    // 0x7caa6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C97C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C97C8u, 0x7CAA68u, 0x7CAA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CAA70u;
label_7caa70:
    // 0x7caa70: 0x1040ffad  beqz        $v0, . + 4 + (-0x53 << 2)
label_7caa74:
    if (ctx->pc == 0x7CAA74u) {
        ctx->pc = 0x7CAA78u;
        goto label_7caa78;
    }
    ctx->pc = 0x7CAA70u;
    {
        const bool branch_taken_0x7caa70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7caa70) {
            ctx->pc = 0x7CA928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ca928;
        }
    }
    ctx->pc = 0x7CAA78u;
label_7caa78:
    // 0x7caa78: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x7caa78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_7caa7c:
    // 0x7caa7c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x7caa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_7caa80:
    // 0x7caa80: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x7caa80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_7caa84:
    // 0x7caa84: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x7caa84u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_7caa88:
    // 0x7caa88: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x7caa88u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_7caa8c:
    // 0x7caa8c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x7caa8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_7caa90:
    // 0x7caa90: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x7caa90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_7caa94:
    // 0x7caa94: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x7caa94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_7caa98:
    // 0x7caa98: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x7caa98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_7caa9c:
    // 0x7caa9c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x7caa9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_7caaa0:
    // 0x7caaa0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x7caaa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_7caaa4:
    // 0x7caaa4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x7caaa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7caaa8:
    // 0x7caaa8: 0x3e00008  jr          $ra
label_7caaac:
    if (ctx->pc == 0x7CAAACu) {
        ctx->pc = 0x7CAAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAAA8u;
        // 0x7caaac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CAAB0u;
        goto label_fallthrough_0x7caaa8;
    }
    ctx->pc = 0x7CAAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CAAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAAA8u;
        // 0x7caaac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CAAA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x7caaa8:
    ctx->pc = 0x7CAAB0u;
}
} // namespace gh_mcport
