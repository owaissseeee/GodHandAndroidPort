#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0026B600
// Address: 0x26b600 - 0x26b9e8
void func_0026B600_0x26b600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026B600_0x26b600");
#endif

    switch (ctx->pc) {
        case 0x26b600u: goto label_26b600;
        case 0x26b604u: goto label_26b604;
        case 0x26b608u: goto label_26b608;
        case 0x26b60cu: goto label_26b60c;
        case 0x26b610u: goto label_26b610;
        case 0x26b614u: goto label_26b614;
        case 0x26b618u: goto label_26b618;
        case 0x26b61cu: goto label_26b61c;
        case 0x26b620u: goto label_26b620;
        case 0x26b624u: goto label_26b624;
        case 0x26b628u: goto label_26b628;
        case 0x26b62cu: goto label_26b62c;
        case 0x26b630u: goto label_26b630;
        case 0x26b634u: goto label_26b634;
        case 0x26b638u: goto label_26b638;
        case 0x26b63cu: goto label_26b63c;
        case 0x26b640u: goto label_26b640;
        case 0x26b644u: goto label_26b644;
        case 0x26b648u: goto label_26b648;
        case 0x26b64cu: goto label_26b64c;
        case 0x26b650u: goto label_26b650;
        case 0x26b654u: goto label_26b654;
        case 0x26b658u: goto label_26b658;
        case 0x26b65cu: goto label_26b65c;
        case 0x26b660u: goto label_26b660;
        case 0x26b664u: goto label_26b664;
        case 0x26b668u: goto label_26b668;
        case 0x26b66cu: goto label_26b66c;
        case 0x26b670u: goto label_26b670;
        case 0x26b674u: goto label_26b674;
        case 0x26b678u: goto label_26b678;
        case 0x26b67cu: goto label_26b67c;
        case 0x26b680u: goto label_26b680;
        case 0x26b684u: goto label_26b684;
        case 0x26b688u: goto label_26b688;
        case 0x26b68cu: goto label_26b68c;
        case 0x26b690u: goto label_26b690;
        case 0x26b694u: goto label_26b694;
        case 0x26b698u: goto label_26b698;
        case 0x26b69cu: goto label_26b69c;
        case 0x26b6a0u: goto label_26b6a0;
        case 0x26b6a4u: goto label_26b6a4;
        case 0x26b6a8u: goto label_26b6a8;
        case 0x26b6acu: goto label_26b6ac;
        case 0x26b6b0u: goto label_26b6b0;
        case 0x26b6b4u: goto label_26b6b4;
        case 0x26b6b8u: goto label_26b6b8;
        case 0x26b6bcu: goto label_26b6bc;
        case 0x26b6c0u: goto label_26b6c0;
        case 0x26b6c4u: goto label_26b6c4;
        case 0x26b6c8u: goto label_26b6c8;
        case 0x26b6ccu: goto label_26b6cc;
        case 0x26b6d0u: goto label_26b6d0;
        case 0x26b6d4u: goto label_26b6d4;
        case 0x26b6d8u: goto label_26b6d8;
        case 0x26b6dcu: goto label_26b6dc;
        case 0x26b6e0u: goto label_26b6e0;
        case 0x26b6e4u: goto label_26b6e4;
        case 0x26b6e8u: goto label_26b6e8;
        case 0x26b6ecu: goto label_26b6ec;
        case 0x26b6f0u: goto label_26b6f0;
        case 0x26b6f4u: goto label_26b6f4;
        case 0x26b6f8u: goto label_26b6f8;
        case 0x26b6fcu: goto label_26b6fc;
        case 0x26b700u: goto label_26b700;
        case 0x26b704u: goto label_26b704;
        case 0x26b708u: goto label_26b708;
        case 0x26b70cu: goto label_26b70c;
        case 0x26b710u: goto label_26b710;
        case 0x26b714u: goto label_26b714;
        case 0x26b718u: goto label_26b718;
        case 0x26b71cu: goto label_26b71c;
        case 0x26b720u: goto label_26b720;
        case 0x26b724u: goto label_26b724;
        case 0x26b728u: goto label_26b728;
        case 0x26b72cu: goto label_26b72c;
        case 0x26b730u: goto label_26b730;
        case 0x26b734u: goto label_26b734;
        case 0x26b738u: goto label_26b738;
        case 0x26b73cu: goto label_26b73c;
        case 0x26b740u: goto label_26b740;
        case 0x26b744u: goto label_26b744;
        case 0x26b748u: goto label_26b748;
        case 0x26b74cu: goto label_26b74c;
        case 0x26b750u: goto label_26b750;
        case 0x26b754u: goto label_26b754;
        case 0x26b758u: goto label_26b758;
        case 0x26b75cu: goto label_26b75c;
        case 0x26b760u: goto label_26b760;
        case 0x26b764u: goto label_26b764;
        case 0x26b768u: goto label_26b768;
        case 0x26b76cu: goto label_26b76c;
        case 0x26b770u: goto label_26b770;
        case 0x26b774u: goto label_26b774;
        case 0x26b778u: goto label_26b778;
        case 0x26b77cu: goto label_26b77c;
        case 0x26b780u: goto label_26b780;
        case 0x26b784u: goto label_26b784;
        case 0x26b788u: goto label_26b788;
        case 0x26b78cu: goto label_26b78c;
        case 0x26b790u: goto label_26b790;
        case 0x26b794u: goto label_26b794;
        case 0x26b798u: goto label_26b798;
        case 0x26b79cu: goto label_26b79c;
        case 0x26b7a0u: goto label_26b7a0;
        case 0x26b7a4u: goto label_26b7a4;
        case 0x26b7a8u: goto label_26b7a8;
        case 0x26b7acu: goto label_26b7ac;
        case 0x26b7b0u: goto label_26b7b0;
        case 0x26b7b4u: goto label_26b7b4;
        case 0x26b7b8u: goto label_26b7b8;
        case 0x26b7bcu: goto label_26b7bc;
        case 0x26b7c0u: goto label_26b7c0;
        case 0x26b7c4u: goto label_26b7c4;
        case 0x26b7c8u: goto label_26b7c8;
        case 0x26b7ccu: goto label_26b7cc;
        case 0x26b7d0u: goto label_26b7d0;
        case 0x26b7d4u: goto label_26b7d4;
        case 0x26b7d8u: goto label_26b7d8;
        case 0x26b7dcu: goto label_26b7dc;
        case 0x26b7e0u: goto label_26b7e0;
        case 0x26b7e4u: goto label_26b7e4;
        case 0x26b7e8u: goto label_26b7e8;
        case 0x26b7ecu: goto label_26b7ec;
        case 0x26b7f0u: goto label_26b7f0;
        case 0x26b7f4u: goto label_26b7f4;
        case 0x26b7f8u: goto label_26b7f8;
        case 0x26b7fcu: goto label_26b7fc;
        case 0x26b800u: goto label_26b800;
        case 0x26b804u: goto label_26b804;
        case 0x26b808u: goto label_26b808;
        case 0x26b80cu: goto label_26b80c;
        case 0x26b810u: goto label_26b810;
        case 0x26b814u: goto label_26b814;
        case 0x26b818u: goto label_26b818;
        case 0x26b81cu: goto label_26b81c;
        case 0x26b820u: goto label_26b820;
        case 0x26b824u: goto label_26b824;
        case 0x26b828u: goto label_26b828;
        case 0x26b82cu: goto label_26b82c;
        case 0x26b830u: goto label_26b830;
        case 0x26b834u: goto label_26b834;
        case 0x26b838u: goto label_26b838;
        case 0x26b83cu: goto label_26b83c;
        case 0x26b840u: goto label_26b840;
        case 0x26b844u: goto label_26b844;
        case 0x26b848u: goto label_26b848;
        case 0x26b84cu: goto label_26b84c;
        case 0x26b850u: goto label_26b850;
        case 0x26b854u: goto label_26b854;
        case 0x26b858u: goto label_26b858;
        case 0x26b85cu: goto label_26b85c;
        case 0x26b860u: goto label_26b860;
        case 0x26b864u: goto label_26b864;
        case 0x26b868u: goto label_26b868;
        case 0x26b86cu: goto label_26b86c;
        case 0x26b870u: goto label_26b870;
        case 0x26b874u: goto label_26b874;
        case 0x26b878u: goto label_26b878;
        case 0x26b87cu: goto label_26b87c;
        case 0x26b880u: goto label_26b880;
        case 0x26b884u: goto label_26b884;
        case 0x26b888u: goto label_26b888;
        case 0x26b88cu: goto label_26b88c;
        case 0x26b890u: goto label_26b890;
        case 0x26b894u: goto label_26b894;
        case 0x26b898u: goto label_26b898;
        case 0x26b89cu: goto label_26b89c;
        case 0x26b8a0u: goto label_26b8a0;
        case 0x26b8a4u: goto label_26b8a4;
        case 0x26b8a8u: goto label_26b8a8;
        case 0x26b8acu: goto label_26b8ac;
        case 0x26b8b0u: goto label_26b8b0;
        case 0x26b8b4u: goto label_26b8b4;
        case 0x26b8b8u: goto label_26b8b8;
        case 0x26b8bcu: goto label_26b8bc;
        case 0x26b8c0u: goto label_26b8c0;
        case 0x26b8c4u: goto label_26b8c4;
        case 0x26b8c8u: goto label_26b8c8;
        case 0x26b8ccu: goto label_26b8cc;
        case 0x26b8d0u: goto label_26b8d0;
        case 0x26b8d4u: goto label_26b8d4;
        case 0x26b8d8u: goto label_26b8d8;
        case 0x26b8dcu: goto label_26b8dc;
        case 0x26b8e0u: goto label_26b8e0;
        case 0x26b8e4u: goto label_26b8e4;
        case 0x26b8e8u: goto label_26b8e8;
        case 0x26b8ecu: goto label_26b8ec;
        case 0x26b8f0u: goto label_26b8f0;
        case 0x26b8f4u: goto label_26b8f4;
        case 0x26b8f8u: goto label_26b8f8;
        case 0x26b8fcu: goto label_26b8fc;
        case 0x26b900u: goto label_26b900;
        case 0x26b904u: goto label_26b904;
        case 0x26b908u: goto label_26b908;
        case 0x26b90cu: goto label_26b90c;
        case 0x26b910u: goto label_26b910;
        case 0x26b914u: goto label_26b914;
        case 0x26b918u: goto label_26b918;
        case 0x26b91cu: goto label_26b91c;
        case 0x26b920u: goto label_26b920;
        case 0x26b924u: goto label_26b924;
        case 0x26b928u: goto label_26b928;
        case 0x26b92cu: goto label_26b92c;
        case 0x26b930u: goto label_26b930;
        case 0x26b934u: goto label_26b934;
        case 0x26b938u: goto label_26b938;
        case 0x26b93cu: goto label_26b93c;
        case 0x26b940u: goto label_26b940;
        case 0x26b944u: goto label_26b944;
        case 0x26b948u: goto label_26b948;
        case 0x26b94cu: goto label_26b94c;
        case 0x26b950u: goto label_26b950;
        case 0x26b954u: goto label_26b954;
        case 0x26b958u: goto label_26b958;
        case 0x26b95cu: goto label_26b95c;
        case 0x26b960u: goto label_26b960;
        case 0x26b964u: goto label_26b964;
        case 0x26b968u: goto label_26b968;
        case 0x26b96cu: goto label_26b96c;
        case 0x26b970u: goto label_26b970;
        case 0x26b974u: goto label_26b974;
        case 0x26b978u: goto label_26b978;
        case 0x26b97cu: goto label_26b97c;
        case 0x26b980u: goto label_26b980;
        case 0x26b984u: goto label_26b984;
        case 0x26b988u: goto label_26b988;
        case 0x26b98cu: goto label_26b98c;
        case 0x26b990u: goto label_26b990;
        case 0x26b994u: goto label_26b994;
        case 0x26b998u: goto label_26b998;
        case 0x26b99cu: goto label_26b99c;
        case 0x26b9a0u: goto label_26b9a0;
        case 0x26b9a4u: goto label_26b9a4;
        case 0x26b9a8u: goto label_26b9a8;
        case 0x26b9acu: goto label_26b9ac;
        case 0x26b9b0u: goto label_26b9b0;
        case 0x26b9b4u: goto label_26b9b4;
        case 0x26b9b8u: goto label_26b9b8;
        case 0x26b9bcu: goto label_26b9bc;
        case 0x26b9c0u: goto label_26b9c0;
        case 0x26b9c4u: goto label_26b9c4;
        case 0x26b9c8u: goto label_26b9c8;
        case 0x26b9ccu: goto label_26b9cc;
        case 0x26b9d0u: goto label_26b9d0;
        case 0x26b9d4u: goto label_26b9d4;
        case 0x26b9d8u: goto label_26b9d8;
        case 0x26b9dcu: goto label_26b9dc;
        case 0x26b9e0u: goto label_26b9e0;
        case 0x26b9e4u: goto label_26b9e4;
        default: break;
    }

    ctx->pc = 0x26b600u;

label_26b600:
    // 0x26b600: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26b600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_26b604:
    // 0x26b604: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x26b604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_26b608:
    // 0x26b608: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x26b608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_26b60c:
    // 0x26b60c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26b60cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26b610:
    // 0x26b610: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x26b610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_26b614:
    // 0x26b614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26b614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_26b618:
    // 0x26b618: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x26b618u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26b61c:
    // 0x26b61c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x26b61cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_26b620:
    // 0x26b620: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x26b620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_26b624:
    // 0x26b624: 0x38420211  xori        $v0, $v0, 0x211
    ctx->pc = 0x26b624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)529);
label_26b628:
    // 0x26b628: 0x144000e7  bnez        $v0, . + 4 + (0xE7 << 2)
label_26b62c:
    if (ctx->pc == 0x26B62Cu) {
        ctx->pc = 0x26B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B628u;
        // 0x26b62c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B630u;
        goto label_26b630;
    }
    ctx->pc = 0x26B628u;
    {
        const bool branch_taken_0x26b628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B628u;
        // 0x26b62c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b628) {
            ctx->pc = 0x26B9C8u;
            goto label_26b9c8;
        }
    }
    ctx->pc = 0x26B630u;
label_26b630:
    // 0x26b630: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x26b630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_26b634:
    // 0x26b634: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26b634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26b638:
    // 0x26b638: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x26b638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_26b63c:
    // 0x26b63c: 0x24060107  addiu       $a2, $zero, 0x107
    ctx->pc = 0x26b63cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
label_26b640:
    // 0x26b640: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x26b640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26b644:
    // 0x26b644: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26b644u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26b648:
    // 0x26b648: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26b648u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26b64c:
    // 0x26b64c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26b64cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26b650:
    // 0x26b650: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x26b650u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26b654:
    // 0x26b654: 0xc0b2e92  jal         func_2CBA48
label_26b658:
    if (ctx->pc == 0x26B658u) {
        ctx->pc = 0x26B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B654u;
        // 0x26b658: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B65Cu;
        goto label_26b65c;
    }
    ctx->pc = 0x26B654u;
    SET_GPR_U32(ctx, 31, 0x26B65Cu);
    ctx->pc = 0x26B658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B654u;
    // 0x26b658: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x26B654u, 0x26B65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B65Cu;
label_26b65c:
    // 0x26b65c: 0x0  nop
    ctx->pc = 0x26b65cu;
    // NOP
label_26b660:
    // 0x26b660: 0xc0c73f8  jal         func_31CFE0
label_26b664:
    if (ctx->pc == 0x26B664u) {
        ctx->pc = 0x26B668u;
        goto label_26b668;
    }
    ctx->pc = 0x26B660u;
    SET_GPR_U32(ctx, 31, 0x26B668u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x26B660u, 0x26B668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B668u;
label_26b668:
    // 0x26b668: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26b668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26b66c:
    // 0x26b66c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26b66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b670:
    // 0x26b670: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x26b670u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_26b674:
    // 0x26b674: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_26b678:
    if (ctx->pc == 0x26B678u) {
        ctx->pc = 0x26B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B674u;
        // 0x26b678: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B67Cu;
        goto label_26b67c;
    }
    ctx->pc = 0x26B674u;
    {
        const bool branch_taken_0x26b674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b674) {
            ctx->pc = 0x26B678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B674u;
            // 0x26b678: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B67Cu;
            goto label_26b67c;
        }
    }
    ctx->pc = 0x26B67Cu;
label_26b67c:
    // 0x26b67c: 0x2810  mfhi        $a1
    ctx->pc = 0x26b67cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_26b680:
    // 0x26b680: 0x50a40006  beql        $a1, $a0, . + 4 + (0x6 << 2)
label_26b684:
    if (ctx->pc == 0x26B684u) {
        ctx->pc = 0x26B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B680u;
        // 0x26b684: 0x240403b9  addiu       $a0, $zero, 0x3B9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 953));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B688u;
        goto label_26b688;
    }
    ctx->pc = 0x26B680u;
    {
        const bool branch_taken_0x26b680 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x26b680) {
            ctx->pc = 0x26B684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B680u;
            // 0x26b684: 0x240403b9  addiu       $a0, $zero, 0x3B9 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 953));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B69Cu;
            goto label_26b69c;
        }
    }
    ctx->pc = 0x26B688u;
label_26b688:
    // 0x26b688: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_26b68c:
    if (ctx->pc == 0x26B68Cu) {
        ctx->pc = 0x26B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B688u;
        // 0x26b68c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B690u;
        goto label_26b690;
    }
    ctx->pc = 0x26B688u;
    {
        const bool branch_taken_0x26b688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B688u;
        // 0x26b68c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b688) {
            ctx->pc = 0x26B698u;
            goto label_26b698;
        }
    }
    ctx->pc = 0x26B690u;
label_26b690:
    // 0x26b690: 0x10a20002  beq         $a1, $v0, . + 4 + (0x2 << 2)
label_26b694:
    if (ctx->pc == 0x26B694u) {
        ctx->pc = 0x26B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B690u;
        // 0x26b694: 0x240403ba  addiu       $a0, $zero, 0x3BA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 954));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B698u;
        goto label_26b698;
    }
    ctx->pc = 0x26B690u;
    {
        const bool branch_taken_0x26b690 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B690u;
        // 0x26b694: 0x240403ba  addiu       $a0, $zero, 0x3BA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 954));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b690) {
            ctx->pc = 0x26B69Cu;
            goto label_26b69c;
        }
    }
    ctx->pc = 0x26B698u;
label_26b698:
    // 0x26b698: 0x240403b8  addiu       $a0, $zero, 0x3B8
    ctx->pc = 0x26b698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 952));
label_26b69c:
    // 0x26b69c: 0xc0c3ea6  jal         func_30FA98
label_26b6a0:
    if (ctx->pc == 0x26B6A0u) {
        ctx->pc = 0x26B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B69Cu;
        // 0x26b6a0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B6A4u;
        goto label_26b6a4;
    }
    ctx->pc = 0x26B69Cu;
    SET_GPR_U32(ctx, 31, 0x26B6A4u);
    ctx->pc = 0x26B6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B69Cu;
    // 0x26b6a0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x26B69Cu, 0x26B6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B6A4u;
label_26b6a4:
    // 0x26b6a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26b6a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26b6a8:
    // 0x26b6a8: 0x520000c7  beql        $s0, $zero, . + 4 + (0xC7 << 2)
label_26b6ac:
    if (ctx->pc == 0x26B6ACu) {
        ctx->pc = 0x26B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B6A8u;
        // 0x26b6ac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B6B0u;
        goto label_26b6b0;
    }
    ctx->pc = 0x26B6A8u;
    {
        const bool branch_taken_0x26b6a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b6a8) {
            ctx->pc = 0x26B6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B6A8u;
            // 0x26b6ac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B9C8u;
            goto label_26b9c8;
        }
    }
    ctx->pc = 0x26B6B0u;
label_26b6b0:
    // 0x26b6b0: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x26b6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_26b6b4:
    // 0x26b6b4: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x26b6b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_26b6b8:
    // 0x26b6b8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x26b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_26b6bc:
    // 0x26b6bc: 0x40f809  jalr        $v0
label_26b6c0:
    if (ctx->pc == 0x26B6C0u) {
        ctx->pc = 0x26B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B6BCu;
        // 0x26b6c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B6C4u;
        goto label_26b6c4;
    }
    ctx->pc = 0x26B6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B6C4u);
        ctx->pc = 0x26B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B6BCu;
        // 0x26b6c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B6BCu, 0x26B6C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26B6C4u;
label_26b6c4:
    // 0x26b6c4: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x26b6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26b6c8:
    // 0x26b6c8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x26b6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_26b6cc:
    // 0x26b6cc: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_26b6d0:
    if (ctx->pc == 0x26B6D0u) {
        ctx->pc = 0x26B6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B6CCu;
        // 0x26b6d0: 0x32430007  andi        $v1, $s2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B6D4u;
        goto label_26b6d4;
    }
    ctx->pc = 0x26B6CCu;
    {
        const bool branch_taken_0x26b6cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b6cc) {
            ctx->pc = 0x26B6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B6CCu;
            // 0x26b6d0: 0x32430007  andi        $v1, $s2, 0x7 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B6F0u;
            goto label_26b6f0;
        }
    }
    ctx->pc = 0x26B6D4u;
label_26b6d4:
    // 0x26b6d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26b6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b6d8:
    // 0x26b6d8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x26b6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_26b6dc:
    // 0x26b6dc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26b6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b6e0:
    // 0x26b6e0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x26b6e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_26b6e4:
    // 0x26b6e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26b6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b6e8:
    // 0x26b6e8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x26b6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_26b6ec:
    // 0x26b6ec: 0x32430007  andi        $v1, $s2, 0x7
    ctx->pc = 0x26b6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
label_26b6f0:
    // 0x26b6f0: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x26b6f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_26b6f4:
    // 0x26b6f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_26b6f8:
    if (ctx->pc == 0x26B6F8u) {
        ctx->pc = 0x26B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B6F4u;
        // 0x26b6f8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B6FCu;
        goto label_26b6fc;
    }
    ctx->pc = 0x26B6F4u;
    {
        const bool branch_taken_0x26b6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B6F4u;
        // 0x26b6f8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b6f4) {
            ctx->pc = 0x26B714u;
            goto label_26b714;
        }
    }
    ctx->pc = 0x26B6FCu;
label_26b6fc:
    // 0x26b6fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26b6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_26b700:
    // 0x26b700: 0x24425620  addiu       $v0, $v0, 0x5620
    ctx->pc = 0x26b700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22048));
label_26b704:
    // 0x26b704: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26b704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26b708:
    // 0x26b708: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26b708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26b70c:
    // 0x26b70c: 0x800008  jr          $a0
label_26b710:
    if (ctx->pc == 0x26B710u) {
        ctx->pc = 0x26B714u;
        goto label_26b714;
    }
    ctx->pc = 0x26B70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B714u: goto label_26b714;
            case 0x26B760u: goto label_26b760;
            case 0x26B7ACu: goto label_26b7ac;
            case 0x26B7F8u: goto label_26b7f8;
            case 0x26B844u: goto label_26b844;
            case 0x26B864u: goto label_26b864;
            case 0x26B8B4u: goto label_26b8b4;
            case 0x26B904u: goto label_26b904;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B70Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26B714u;
label_26b714:
    // 0x26b714: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26b714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26b718:
    // 0x26b718: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26b718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26b71c:
    // 0x26b71c: 0xc0c7408  jal         func_31D020
label_26b720:
    if (ctx->pc == 0x26B720u) {
        ctx->pc = 0x26B724u;
        goto label_26b724;
    }
    ctx->pc = 0x26B71Cu;
    SET_GPR_U32(ctx, 31, 0x26B724u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26B71Cu, 0x26B724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B724u;
label_26b724:
    // 0x26b724: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x26b724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26b728:
    // 0x26b728: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x26b728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_26b72c:
    // 0x26b72c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26b730:
    // 0x26b730: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x26b730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b734:
    // 0x26b734: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x26b734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_26b738:
    // 0x26b738: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26b738u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26b73c:
    // 0x26b73c: 0xc0c7408  jal         func_31D020
label_26b740:
    if (ctx->pc == 0x26B740u) {
        ctx->pc = 0x26B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B73Cu;
        // 0x26b740: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B744u;
        goto label_26b744;
    }
    ctx->pc = 0x26B73Cu;
    SET_GPR_U32(ctx, 31, 0x26B744u);
    ctx->pc = 0x26B740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B73Cu;
    // 0x26b740: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26B73Cu, 0x26B744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B744u;
label_26b744:
    // 0x26b744: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x26b744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_26b748:
    // 0x26b748: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x26b748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_26b74c:
    // 0x26b74c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26b74cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26b750:
    // 0x26b750: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26b750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26b754:
    // 0x26b754: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x26b754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_26b758:
    // 0x26b758: 0x1000007b  b           . + 4 + (0x7B << 2)
label_26b75c:
    if (ctx->pc == 0x26B75Cu) {
        ctx->pc = 0x26B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B758u;
        // 0x26b75c: 0xc4410008  lwc1        $f1, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B760u;
        goto label_26b760;
    }
    ctx->pc = 0x26B758u;
    {
        const bool branch_taken_0x26b758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B758u;
        // 0x26b75c: 0xc4410008  lwc1        $f1, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b758) {
            ctx->pc = 0x26B948u;
            goto label_26b948;
        }
    }
    ctx->pc = 0x26B760u;
label_26b760:
    // 0x26b760: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26b760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26b764:
    // 0x26b764: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26b764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26b768:
    // 0x26b768: 0xc0c7408  jal         func_31D020
label_26b76c:
    if (ctx->pc == 0x26B76Cu) {
        ctx->pc = 0x26B770u;
        goto label_26b770;
    }
    ctx->pc = 0x26B768u;
    SET_GPR_U32(ctx, 31, 0x26B770u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26B768u, 0x26B770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B770u;
label_26b770:
    // 0x26b770: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x26b770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_26b774:
    // 0x26b774: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26b774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26b778:
    // 0x26b778: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x26b778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_26b77c:
    // 0x26b77c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26b780:
    // 0x26b780: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x26b780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b784:
    // 0x26b784: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x26b784u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_26b788:
    // 0x26b788: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26b788u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26b78c:
    // 0x26b78c: 0xc0c7408  jal         func_31D020
label_26b790:
    if (ctx->pc == 0x26B790u) {
        ctx->pc = 0x26B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B78Cu;
        // 0x26b790: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B794u;
        goto label_26b794;
    }
    ctx->pc = 0x26B78Cu;
    SET_GPR_U32(ctx, 31, 0x26B794u);
    ctx->pc = 0x26B790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B78Cu;
    // 0x26b790: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26B78Cu, 0x26B794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B794u;
label_26b794:
    // 0x26b794: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x26b794u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_26b798:
    // 0x26b798: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26b798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26b79c:
    // 0x26b79c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x26b79cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26b7a0:
    // 0x26b7a0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x26b7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b7a4:
    // 0x26b7a4: 0x10000068  b           . + 4 + (0x68 << 2)
label_26b7a8:
    if (ctx->pc == 0x26B7A8u) {
        ctx->pc = 0x26B7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7A4u;
        // 0x26b7a8: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B7ACu;
        goto label_26b7ac;
    }
    ctx->pc = 0x26B7A4u;
    {
        const bool branch_taken_0x26b7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7A4u;
        // 0x26b7a8: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7a4) {
            ctx->pc = 0x26B948u;
            goto label_26b948;
        }
    }
    ctx->pc = 0x26B7ACu;
label_26b7ac:
    // 0x26b7ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26b7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26b7b0:
    // 0x26b7b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26b7b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26b7b4:
    // 0x26b7b4: 0xc0c7408  jal         func_31D020
label_26b7b8:
    if (ctx->pc == 0x26B7B8u) {
        ctx->pc = 0x26B7BCu;
        goto label_26b7bc;
    }
    ctx->pc = 0x26B7B4u;
    SET_GPR_U32(ctx, 31, 0x26B7BCu);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26B7B4u, 0x26B7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B7BCu;
label_26b7bc:
    // 0x26b7bc: 0x3c01c0a0  lui         $at, 0xC0A0
    ctx->pc = 0x26b7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49312 << 16));
label_26b7c0:
    // 0x26b7c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26b7c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26b7c4:
    // 0x26b7c4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x26b7c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_26b7c8:
    // 0x26b7c8: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26b7cc:
    // 0x26b7cc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x26b7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b7d0:
    // 0x26b7d0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x26b7d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_26b7d4:
    // 0x26b7d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26b7d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26b7d8:
    // 0x26b7d8: 0xc0c7408  jal         func_31D020
label_26b7dc:
    if (ctx->pc == 0x26B7DCu) {
        ctx->pc = 0x26B7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7D8u;
        // 0x26b7dc: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B7E0u;
        goto label_26b7e0;
    }
    ctx->pc = 0x26B7D8u;
    SET_GPR_U32(ctx, 31, 0x26B7E0u);
    ctx->pc = 0x26B7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B7D8u;
    // 0x26b7dc: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26B7D8u, 0x26B7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B7E0u;
label_26b7e0:
    // 0x26b7e0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x26b7e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_26b7e4:
    // 0x26b7e4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26b7e8:
    // 0x26b7e8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x26b7e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26b7ec:
    // 0x26b7ec: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x26b7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b7f0:
    // 0x26b7f0: 0x10000055  b           . + 4 + (0x55 << 2)
label_26b7f4:
    if (ctx->pc == 0x26B7F4u) {
        ctx->pc = 0x26B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7F0u;
        // 0x26b7f4: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B7F8u;
        goto label_26b7f8;
    }
    ctx->pc = 0x26B7F0u;
    {
        const bool branch_taken_0x26b7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7F0u;
        // 0x26b7f4: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7f0) {
            ctx->pc = 0x26B948u;
            goto label_26b948;
        }
    }
    ctx->pc = 0x26B7F8u;
label_26b7f8:
    // 0x26b7f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26b7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26b7fc:
    // 0x26b7fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26b7fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26b800:
    // 0x26b800: 0xc0c7408  jal         func_31D020
label_26b804:
    if (ctx->pc == 0x26B804u) {
        ctx->pc = 0x26B808u;
        goto label_26b808;
    }
    ctx->pc = 0x26B800u;
    SET_GPR_U32(ctx, 31, 0x26B808u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26B800u, 0x26B808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B808u;
label_26b808:
    // 0x26b808: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x26b808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26b80c:
    // 0x26b80c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x26b80cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_26b810:
    // 0x26b810: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26b810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26b814:
    // 0x26b814: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x26b814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b818:
    // 0x26b818: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x26b818u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_26b81c:
    // 0x26b81c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26b81cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26b820:
    // 0x26b820: 0xc0c7408  jal         func_31D020
label_26b824:
    if (ctx->pc == 0x26B824u) {
        ctx->pc = 0x26B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B820u;
        // 0x26b824: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B828u;
        goto label_26b828;
    }
    ctx->pc = 0x26B820u;
    SET_GPR_U32(ctx, 31, 0x26B828u);
    ctx->pc = 0x26B824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B820u;
    // 0x26b824: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26B820u, 0x26B828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B828u;
label_26b828:
    // 0x26b828: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x26b828u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_26b82c:
    // 0x26b82c: 0x3c01c0a0  lui         $at, 0xC0A0
    ctx->pc = 0x26b82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49312 << 16));
label_26b830:
    // 0x26b830: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26b830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26b834:
    // 0x26b834: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26b834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26b838:
    // 0x26b838: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x26b838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_26b83c:
    // 0x26b83c: 0x10000042  b           . + 4 + (0x42 << 2)
label_26b840:
    if (ctx->pc == 0x26B840u) {
        ctx->pc = 0x26B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B83Cu;
        // 0x26b840: 0xc4410008  lwc1        $f1, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B844u;
        goto label_26b844;
    }
    ctx->pc = 0x26B83Cu;
    {
        const bool branch_taken_0x26b83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B83Cu;
        // 0x26b840: 0xc4410008  lwc1        $f1, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b83c) {
            ctx->pc = 0x26B948u;
            goto label_26b948;
        }
    }
    ctx->pc = 0x26B844u;
label_26b844:
    // 0x26b844: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26b844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26b848:
    // 0x26b848: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26b848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26b84c:
    // 0x26b84c: 0xc0c7408  jal         func_31D020
label_26b850:
    if (ctx->pc == 0x26B850u) {
        ctx->pc = 0x26B854u;
        goto label_26b854;
    }
    ctx->pc = 0x26B84Cu;
    SET_GPR_U32(ctx, 31, 0x26B854u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26B84Cu, 0x26B854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B854u;
label_26b854:
    // 0x26b854: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x26b854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
label_26b858:
    // 0x26b858: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x26b858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_26b85c:
    // 0x26b85c: 0x10000030  b           . + 4 + (0x30 << 2)
label_26b860:
    if (ctx->pc == 0x26B860u) {
        ctx->pc = 0x26B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B85Cu;
        // 0x26b860: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B864u;
        goto label_26b864;
    }
    ctx->pc = 0x26B85Cu;
    {
        const bool branch_taken_0x26b85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B85Cu;
        // 0x26b860: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b85c) {
            ctx->pc = 0x26B920u;
            goto label_26b920;
        }
    }
    ctx->pc = 0x26B864u;
label_26b864:
    // 0x26b864: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26b864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26b868:
    // 0x26b868: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26b868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26b86c:
    // 0x26b86c: 0xc0c7408  jal         func_31D020
label_26b870:
    if (ctx->pc == 0x26B870u) {
        ctx->pc = 0x26B874u;
        goto label_26b874;
    }
    ctx->pc = 0x26B86Cu;
    SET_GPR_U32(ctx, 31, 0x26B874u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26B86Cu, 0x26B874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B874u;
label_26b874:
    // 0x26b874: 0x3c01c060  lui         $at, 0xC060
    ctx->pc = 0x26b874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49248 << 16));
label_26b878:
    // 0x26b878: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26b878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26b87c:
    // 0x26b87c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x26b87cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_26b880:
    // 0x26b880: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26b880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26b884:
    // 0x26b884: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x26b884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b888:
    // 0x26b888: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x26b888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_26b88c:
    // 0x26b88c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26b88cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26b890:
    // 0x26b890: 0xc0c7408  jal         func_31D020
label_26b894:
    if (ctx->pc == 0x26B894u) {
        ctx->pc = 0x26B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B890u;
        // 0x26b894: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B898u;
        goto label_26b898;
    }
    ctx->pc = 0x26B890u;
    SET_GPR_U32(ctx, 31, 0x26B898u);
    ctx->pc = 0x26B894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B890u;
    // 0x26b894: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26B890u, 0x26B898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B898u;
label_26b898:
    // 0x26b898: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x26b898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_26b89c:
    // 0x26b89c: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x26b89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
label_26b8a0:
    // 0x26b8a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26b8a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26b8a4:
    // 0x26b8a4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26b8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26b8a8:
    // 0x26b8a8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x26b8a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_26b8ac:
    // 0x26b8ac: 0x10000026  b           . + 4 + (0x26 << 2)
label_26b8b0:
    if (ctx->pc == 0x26B8B0u) {
        ctx->pc = 0x26B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8ACu;
        // 0x26b8b0: 0xc4410008  lwc1        $f1, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B8B4u;
        goto label_26b8b4;
    }
    ctx->pc = 0x26B8ACu;
    {
        const bool branch_taken_0x26b8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8ACu;
        // 0x26b8b0: 0xc4410008  lwc1        $f1, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b8ac) {
            ctx->pc = 0x26B948u;
            goto label_26b948;
        }
    }
    ctx->pc = 0x26B8B4u;
label_26b8b4:
    // 0x26b8b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26b8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26b8b8:
    // 0x26b8b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26b8b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26b8bc:
    // 0x26b8bc: 0xc0c7408  jal         func_31D020
label_26b8c0:
    if (ctx->pc == 0x26B8C0u) {
        ctx->pc = 0x26B8C4u;
        goto label_26b8c4;
    }
    ctx->pc = 0x26B8BCu;
    SET_GPR_U32(ctx, 31, 0x26B8C4u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26B8BCu, 0x26B8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B8C4u;
label_26b8c4:
    // 0x26b8c4: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x26b8c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
label_26b8c8:
    // 0x26b8c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26b8c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26b8cc:
    // 0x26b8cc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x26b8ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_26b8d0:
    // 0x26b8d0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26b8d4:
    // 0x26b8d4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x26b8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b8d8:
    // 0x26b8d8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x26b8d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_26b8dc:
    // 0x26b8dc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26b8dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26b8e0:
    // 0x26b8e0: 0xc0c7408  jal         func_31D020
label_26b8e4:
    if (ctx->pc == 0x26B8E4u) {
        ctx->pc = 0x26B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8E0u;
        // 0x26b8e4: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B8E8u;
        goto label_26b8e8;
    }
    ctx->pc = 0x26B8E0u;
    SET_GPR_U32(ctx, 31, 0x26B8E8u);
    ctx->pc = 0x26B8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B8E0u;
    // 0x26b8e4: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26B8E0u, 0x26B8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B8E8u;
label_26b8e8:
    // 0x26b8e8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x26b8e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_26b8ec:
    // 0x26b8ec: 0x3c01c060  lui         $at, 0xC060
    ctx->pc = 0x26b8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49248 << 16));
label_26b8f0:
    // 0x26b8f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26b8f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26b8f4:
    // 0x26b8f4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26b8f8:
    // 0x26b8f8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x26b8f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_26b8fc:
    // 0x26b8fc: 0x10000012  b           . + 4 + (0x12 << 2)
label_26b900:
    if (ctx->pc == 0x26B900u) {
        ctx->pc = 0x26B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8FCu;
        // 0x26b900: 0xc4410008  lwc1        $f1, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B904u;
        goto label_26b904;
    }
    ctx->pc = 0x26B8FCu;
    {
        const bool branch_taken_0x26b8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8FCu;
        // 0x26b900: 0xc4410008  lwc1        $f1, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b8fc) {
            ctx->pc = 0x26B948u;
            goto label_26b948;
        }
    }
    ctx->pc = 0x26B904u;
label_26b904:
    // 0x26b904: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26b904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26b908:
    // 0x26b908: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26b908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26b90c:
    // 0x26b90c: 0xc0c7408  jal         func_31D020
label_26b910:
    if (ctx->pc == 0x26B910u) {
        ctx->pc = 0x26B914u;
        goto label_26b914;
    }
    ctx->pc = 0x26B90Cu;
    SET_GPR_U32(ctx, 31, 0x26B914u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26B90Cu, 0x26B914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B914u;
label_26b914:
    // 0x26b914: 0x3c01c060  lui         $at, 0xC060
    ctx->pc = 0x26b914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49248 << 16));
label_26b918:
    // 0x26b918: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x26b918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_26b91c:
    // 0x26b91c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x26b91cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_26b920:
    // 0x26b920: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26b920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26b924:
    // 0x26b924: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x26b924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b928:
    // 0x26b928: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x26b928u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_26b92c:
    // 0x26b92c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26b92cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26b930:
    // 0x26b930: 0xc0c7408  jal         func_31D020
label_26b934:
    if (ctx->pc == 0x26B934u) {
        ctx->pc = 0x26B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B930u;
        // 0x26b934: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B938u;
        goto label_26b938;
    }
    ctx->pc = 0x26B930u;
    SET_GPR_U32(ctx, 31, 0x26B938u);
    ctx->pc = 0x26B934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B930u;
    // 0x26b934: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26B930u, 0x26B938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B938u;
label_26b938:
    // 0x26b938: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x26b938u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_26b93c:
    // 0x26b93c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26b940:
    // 0x26b940: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x26b940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b944:
    // 0x26b944: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x26b944u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_26b948:
    // 0x26b948: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26b948u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26b94c:
    // 0x26b94c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x26b94cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_26b950:
    // 0x26b950: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26b950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26b954:
    // 0x26b954: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x26b954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
label_26b958:
    // 0x26b958: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x26b958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_26b95c:
    // 0x26b95c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26b95cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26b960:
    // 0x26b960: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x26b960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b964:
    // 0x26b964: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26b964u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_26b968:
    // 0x26b968: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x26b968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_26b96c:
    // 0x26b96c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26b970:
    // 0x26b970: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_26b974:
    if (ctx->pc == 0x26B974u) {
        ctx->pc = 0x26B974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B970u;
        // 0x26b974: 0x26020100  addiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B978u;
        goto label_26b978;
    }
    ctx->pc = 0x26B970u;
    {
        const bool branch_taken_0x26b970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b970) {
            ctx->pc = 0x26B974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B970u;
            // 0x26b974: 0x26020100  addiu       $v0, $s0, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B994u;
            goto label_26b994;
        }
    }
    ctx->pc = 0x26B978u;
label_26b978:
    // 0x26b978: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26b978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b97c:
    // 0x26b97c: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x26b97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
label_26b980:
    // 0x26b980: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26b980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b984:
    // 0x26b984: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x26b984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_26b988:
    // 0x26b988: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26b988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b98c:
    // 0x26b98c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x26b98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_26b990:
    // 0x26b990: 0x26020100  addiu       $v0, $s0, 0x100
    ctx->pc = 0x26b990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_26b994:
    // 0x26b994: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x26b994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
label_26b998:
    // 0x26b998: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x26b998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_26b99c:
    // 0x26b99c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b9a0:
    // 0x26b9a0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x26b9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_26b9a4:
    // 0x26b9a4: 0xc073f58  jal         func_1CFD60
label_26b9a8:
    if (ctx->pc == 0x26B9A8u) {
        ctx->pc = 0x26B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B9A4u;
        // 0x26b9a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B9ACu;
        goto label_26b9ac;
    }
    ctx->pc = 0x26B9A4u;
    SET_GPR_U32(ctx, 31, 0x26B9ACu);
    ctx->pc = 0x26B9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B9A4u;
    // 0x26b9a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD60u, 0x26B9A4u, 0x26B9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B9ACu;
label_26b9ac:
    // 0x26b9ac: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x26b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_26b9b0:
    // 0x26b9b0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x26b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_26b9b4:
    // 0x26b9b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x26b9b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_26b9b8:
    // 0x26b9b8: 0x2e430008  sltiu       $v1, $s2, 0x8
    ctx->pc = 0x26b9b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_26b9bc:
    // 0x26b9bc: 0x1460ff28  bnez        $v1, . + 4 + (-0xD8 << 2)
label_26b9c0:
    if (ctx->pc == 0x26B9C0u) {
        ctx->pc = 0x26B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B9BCu;
        // 0x26b9c0: 0xac500710  sw          $s0, 0x710($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1808), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B9C4u;
        goto label_26b9c4;
    }
    ctx->pc = 0x26B9BCu;
    {
        const bool branch_taken_0x26b9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B9BCu;
        // 0x26b9c0: 0xac500710  sw          $s0, 0x710($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1808), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b9bc) {
            ctx->pc = 0x26B660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26b660;
        }
    }
    ctx->pc = 0x26B9C4u;
label_26b9c4:
    // 0x26b9c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x26b9c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26b9c8:
    // 0x26b9c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x26b9c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26b9cc:
    // 0x26b9cc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x26b9ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26b9d0:
    // 0x26b9d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26b9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26b9d4:
    // 0x26b9d4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x26b9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_26b9d8:
    // 0x26b9d8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x26b9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26b9dc:
    // 0x26b9dc: 0x3e00008  jr          $ra
label_26b9e0:
    if (ctx->pc == 0x26B9E0u) {
        ctx->pc = 0x26B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B9DCu;
        // 0x26b9e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B9E4u;
        goto label_26b9e4;
    }
    ctx->pc = 0x26B9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B9DCu;
        // 0x26b9e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B9E4u;
label_26b9e4:
    // 0x26b9e4: 0x0  nop
    ctx->pc = 0x26b9e4u;
    // NOP
    ctx->pc = 0x26b9e8u;
}
