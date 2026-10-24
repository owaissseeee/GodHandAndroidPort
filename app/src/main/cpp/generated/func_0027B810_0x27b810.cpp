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

// Function: func_0027B810
// Address: 0x27b810 - 0x27bb30
void func_0027B810_0x27b810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027B810_0x27b810");
#endif

    switch (ctx->pc) {
        case 0x27b810u: goto label_27b810;
        case 0x27b814u: goto label_27b814;
        case 0x27b818u: goto label_27b818;
        case 0x27b81cu: goto label_27b81c;
        case 0x27b820u: goto label_27b820;
        case 0x27b824u: goto label_27b824;
        case 0x27b828u: goto label_27b828;
        case 0x27b82cu: goto label_27b82c;
        case 0x27b830u: goto label_27b830;
        case 0x27b834u: goto label_27b834;
        case 0x27b838u: goto label_27b838;
        case 0x27b83cu: goto label_27b83c;
        case 0x27b840u: goto label_27b840;
        case 0x27b844u: goto label_27b844;
        case 0x27b848u: goto label_27b848;
        case 0x27b84cu: goto label_27b84c;
        case 0x27b850u: goto label_27b850;
        case 0x27b854u: goto label_27b854;
        case 0x27b858u: goto label_27b858;
        case 0x27b85cu: goto label_27b85c;
        case 0x27b860u: goto label_27b860;
        case 0x27b864u: goto label_27b864;
        case 0x27b868u: goto label_27b868;
        case 0x27b86cu: goto label_27b86c;
        case 0x27b870u: goto label_27b870;
        case 0x27b874u: goto label_27b874;
        case 0x27b878u: goto label_27b878;
        case 0x27b87cu: goto label_27b87c;
        case 0x27b880u: goto label_27b880;
        case 0x27b884u: goto label_27b884;
        case 0x27b888u: goto label_27b888;
        case 0x27b88cu: goto label_27b88c;
        case 0x27b890u: goto label_27b890;
        case 0x27b894u: goto label_27b894;
        case 0x27b898u: goto label_27b898;
        case 0x27b89cu: goto label_27b89c;
        case 0x27b8a0u: goto label_27b8a0;
        case 0x27b8a4u: goto label_27b8a4;
        case 0x27b8a8u: goto label_27b8a8;
        case 0x27b8acu: goto label_27b8ac;
        case 0x27b8b0u: goto label_27b8b0;
        case 0x27b8b4u: goto label_27b8b4;
        case 0x27b8b8u: goto label_27b8b8;
        case 0x27b8bcu: goto label_27b8bc;
        case 0x27b8c0u: goto label_27b8c0;
        case 0x27b8c4u: goto label_27b8c4;
        case 0x27b8c8u: goto label_27b8c8;
        case 0x27b8ccu: goto label_27b8cc;
        case 0x27b8d0u: goto label_27b8d0;
        case 0x27b8d4u: goto label_27b8d4;
        case 0x27b8d8u: goto label_27b8d8;
        case 0x27b8dcu: goto label_27b8dc;
        case 0x27b8e0u: goto label_27b8e0;
        case 0x27b8e4u: goto label_27b8e4;
        case 0x27b8e8u: goto label_27b8e8;
        case 0x27b8ecu: goto label_27b8ec;
        case 0x27b8f0u: goto label_27b8f0;
        case 0x27b8f4u: goto label_27b8f4;
        case 0x27b8f8u: goto label_27b8f8;
        case 0x27b8fcu: goto label_27b8fc;
        case 0x27b900u: goto label_27b900;
        case 0x27b904u: goto label_27b904;
        case 0x27b908u: goto label_27b908;
        case 0x27b90cu: goto label_27b90c;
        case 0x27b910u: goto label_27b910;
        case 0x27b914u: goto label_27b914;
        case 0x27b918u: goto label_27b918;
        case 0x27b91cu: goto label_27b91c;
        case 0x27b920u: goto label_27b920;
        case 0x27b924u: goto label_27b924;
        case 0x27b928u: goto label_27b928;
        case 0x27b92cu: goto label_27b92c;
        case 0x27b930u: goto label_27b930;
        case 0x27b934u: goto label_27b934;
        case 0x27b938u: goto label_27b938;
        case 0x27b93cu: goto label_27b93c;
        case 0x27b940u: goto label_27b940;
        case 0x27b944u: goto label_27b944;
        case 0x27b948u: goto label_27b948;
        case 0x27b94cu: goto label_27b94c;
        case 0x27b950u: goto label_27b950;
        case 0x27b954u: goto label_27b954;
        case 0x27b958u: goto label_27b958;
        case 0x27b95cu: goto label_27b95c;
        case 0x27b960u: goto label_27b960;
        case 0x27b964u: goto label_27b964;
        case 0x27b968u: goto label_27b968;
        case 0x27b96cu: goto label_27b96c;
        case 0x27b970u: goto label_27b970;
        case 0x27b974u: goto label_27b974;
        case 0x27b978u: goto label_27b978;
        case 0x27b97cu: goto label_27b97c;
        case 0x27b980u: goto label_27b980;
        case 0x27b984u: goto label_27b984;
        case 0x27b988u: goto label_27b988;
        case 0x27b98cu: goto label_27b98c;
        case 0x27b990u: goto label_27b990;
        case 0x27b994u: goto label_27b994;
        case 0x27b998u: goto label_27b998;
        case 0x27b99cu: goto label_27b99c;
        case 0x27b9a0u: goto label_27b9a0;
        case 0x27b9a4u: goto label_27b9a4;
        case 0x27b9a8u: goto label_27b9a8;
        case 0x27b9acu: goto label_27b9ac;
        case 0x27b9b0u: goto label_27b9b0;
        case 0x27b9b4u: goto label_27b9b4;
        case 0x27b9b8u: goto label_27b9b8;
        case 0x27b9bcu: goto label_27b9bc;
        case 0x27b9c0u: goto label_27b9c0;
        case 0x27b9c4u: goto label_27b9c4;
        case 0x27b9c8u: goto label_27b9c8;
        case 0x27b9ccu: goto label_27b9cc;
        case 0x27b9d0u: goto label_27b9d0;
        case 0x27b9d4u: goto label_27b9d4;
        case 0x27b9d8u: goto label_27b9d8;
        case 0x27b9dcu: goto label_27b9dc;
        case 0x27b9e0u: goto label_27b9e0;
        case 0x27b9e4u: goto label_27b9e4;
        case 0x27b9e8u: goto label_27b9e8;
        case 0x27b9ecu: goto label_27b9ec;
        case 0x27b9f0u: goto label_27b9f0;
        case 0x27b9f4u: goto label_27b9f4;
        case 0x27b9f8u: goto label_27b9f8;
        case 0x27b9fcu: goto label_27b9fc;
        case 0x27ba00u: goto label_27ba00;
        case 0x27ba04u: goto label_27ba04;
        case 0x27ba08u: goto label_27ba08;
        case 0x27ba0cu: goto label_27ba0c;
        case 0x27ba10u: goto label_27ba10;
        case 0x27ba14u: goto label_27ba14;
        case 0x27ba18u: goto label_27ba18;
        case 0x27ba1cu: goto label_27ba1c;
        case 0x27ba20u: goto label_27ba20;
        case 0x27ba24u: goto label_27ba24;
        case 0x27ba28u: goto label_27ba28;
        case 0x27ba2cu: goto label_27ba2c;
        case 0x27ba30u: goto label_27ba30;
        case 0x27ba34u: goto label_27ba34;
        case 0x27ba38u: goto label_27ba38;
        case 0x27ba3cu: goto label_27ba3c;
        case 0x27ba40u: goto label_27ba40;
        case 0x27ba44u: goto label_27ba44;
        case 0x27ba48u: goto label_27ba48;
        case 0x27ba4cu: goto label_27ba4c;
        case 0x27ba50u: goto label_27ba50;
        case 0x27ba54u: goto label_27ba54;
        case 0x27ba58u: goto label_27ba58;
        case 0x27ba5cu: goto label_27ba5c;
        case 0x27ba60u: goto label_27ba60;
        case 0x27ba64u: goto label_27ba64;
        case 0x27ba68u: goto label_27ba68;
        case 0x27ba6cu: goto label_27ba6c;
        case 0x27ba70u: goto label_27ba70;
        case 0x27ba74u: goto label_27ba74;
        case 0x27ba78u: goto label_27ba78;
        case 0x27ba7cu: goto label_27ba7c;
        case 0x27ba80u: goto label_27ba80;
        case 0x27ba84u: goto label_27ba84;
        case 0x27ba88u: goto label_27ba88;
        case 0x27ba8cu: goto label_27ba8c;
        case 0x27ba90u: goto label_27ba90;
        case 0x27ba94u: goto label_27ba94;
        case 0x27ba98u: goto label_27ba98;
        case 0x27ba9cu: goto label_27ba9c;
        case 0x27baa0u: goto label_27baa0;
        case 0x27baa4u: goto label_27baa4;
        case 0x27baa8u: goto label_27baa8;
        case 0x27baacu: goto label_27baac;
        case 0x27bab0u: goto label_27bab0;
        case 0x27bab4u: goto label_27bab4;
        case 0x27bab8u: goto label_27bab8;
        case 0x27babcu: goto label_27babc;
        case 0x27bac0u: goto label_27bac0;
        case 0x27bac4u: goto label_27bac4;
        case 0x27bac8u: goto label_27bac8;
        case 0x27baccu: goto label_27bacc;
        case 0x27bad0u: goto label_27bad0;
        case 0x27bad4u: goto label_27bad4;
        case 0x27bad8u: goto label_27bad8;
        case 0x27badcu: goto label_27badc;
        case 0x27bae0u: goto label_27bae0;
        case 0x27bae4u: goto label_27bae4;
        case 0x27bae8u: goto label_27bae8;
        case 0x27baecu: goto label_27baec;
        case 0x27baf0u: goto label_27baf0;
        case 0x27baf4u: goto label_27baf4;
        case 0x27baf8u: goto label_27baf8;
        case 0x27bafcu: goto label_27bafc;
        case 0x27bb00u: goto label_27bb00;
        case 0x27bb04u: goto label_27bb04;
        case 0x27bb08u: goto label_27bb08;
        case 0x27bb0cu: goto label_27bb0c;
        case 0x27bb10u: goto label_27bb10;
        case 0x27bb14u: goto label_27bb14;
        case 0x27bb18u: goto label_27bb18;
        case 0x27bb1cu: goto label_27bb1c;
        case 0x27bb20u: goto label_27bb20;
        case 0x27bb24u: goto label_27bb24;
        case 0x27bb28u: goto label_27bb28;
        case 0x27bb2cu: goto label_27bb2c;
        default: break;
    }

    ctx->pc = 0x27b810u;

label_27b810:
    // 0x27b810: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x27b810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_27b814:
    // 0x27b814: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x27b814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_27b818:
    // 0x27b818: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27b818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27b81c:
    // 0x27b81c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x27b81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_27b820:
    // 0x27b820: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x27b820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_27b824:
    // 0x27b824: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x27b824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_27b828:
    // 0x27b828: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x27b828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_27b82c:
    // 0x27b82c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x27b82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_27b830:
    // 0x27b830: 0x24120263  addiu       $s2, $zero, 0x263
    ctx->pc = 0x27b830u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 611));
label_27b834:
    // 0x27b834: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x27b834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27b838:
    // 0x27b838: 0xae320564  sw          $s2, 0x564($s1)
    ctx->pc = 0x27b838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 18));
label_27b83c:
    // 0x27b83c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27b83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27b840:
    // 0x27b840: 0xa3a20031  sb          $v0, 0x31($sp)
    ctx->pc = 0x27b840u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
label_27b844:
    // 0x27b844: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x27b844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_27b848:
    // 0x27b848: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x27b848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_27b84c:
    // 0x27b84c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x27b84cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_27b850:
    // 0x27b850: 0xc09f454  jal         func_27D150
label_27b854:
    if (ctx->pc == 0x27B854u) {
        ctx->pc = 0x27B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B850u;
        // 0x27b854: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B858u;
        goto label_27b858;
    }
    ctx->pc = 0x27B850u;
    SET_GPR_U32(ctx, 31, 0x27B858u);
    ctx->pc = 0x27B854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B850u;
    // 0x27b854: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D150u, 0x27B850u, 0x27B858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B858u;
label_27b858:
    // 0x27b858: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_27b85c:
    if (ctx->pc == 0x27B85Cu) {
        ctx->pc = 0x27B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B858u;
        // 0x27b85c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B860u;
        goto label_27b860;
    }
    ctx->pc = 0x27B858u;
    {
        const bool branch_taken_0x27b858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B858u;
        // 0x27b85c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b858) {
            ctx->pc = 0x27B868u;
            goto label_27b868;
        }
    }
    ctx->pc = 0x27B860u;
label_27b860:
    // 0x27b860: 0x100000ab  b           . + 4 + (0xAB << 2)
label_27b864:
    if (ctx->pc == 0x27B864u) {
        ctx->pc = 0x27B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B860u;
        // 0x27b864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B868u;
        goto label_27b868;
    }
    ctx->pc = 0x27B860u;
    {
        const bool branch_taken_0x27b860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B860u;
        // 0x27b864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b860) {
            ctx->pc = 0x27BB10u;
            goto label_27bb10;
        }
    }
    ctx->pc = 0x27B868u;
label_27b868:
    // 0x27b868: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27b868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b86c:
    // 0x27b86c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27b86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27b870:
    // 0x27b870: 0xc0a3afc  jal         func_28EBF0
label_27b874:
    if (ctx->pc == 0x27B874u) {
        ctx->pc = 0x27B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B870u;
        // 0x27b874: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B878u;
        goto label_27b878;
    }
    ctx->pc = 0x27B870u;
    SET_GPR_U32(ctx, 31, 0x27B878u);
    ctx->pc = 0x27B874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B870u;
    // 0x27b874: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EBF0u, 0x27B870u, 0x27B878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B878u;
label_27b878:
    // 0x27b878: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x27b878u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b87c:
    // 0x27b87c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x27b87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_27b880:
    // 0x27b880: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27b880u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b884:
    // 0x27b884: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x27b884u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_27b888:
    // 0x27b888: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27b888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b88c:
    // 0x27b88c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x27b88cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_27b890:
    // 0x27b890: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27b890u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b894:
    // 0x27b894: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x27b894u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_27b898:
    // 0x27b898: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27b898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27b89c:
    // 0x27b89c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x27b89cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_27b8a0:
    // 0x27b8a0: 0xae201580  sw          $zero, 0x1580($s1)
    ctx->pc = 0x27b8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5504), GPR_U32(ctx, 0));
label_27b8a4:
    // 0x27b8a4: 0xae201584  sw          $zero, 0x1584($s1)
    ctx->pc = 0x27b8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5508), GPR_U32(ctx, 0));
label_27b8a8:
    // 0x27b8a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27b8a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27b8ac:
    // 0x27b8ac: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x27b8acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_27b8b0:
    // 0x27b8b0: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x27b8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_27b8b4:
    // 0x27b8b4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27b8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_27b8b8:
    // 0x27b8b8: 0xc0aa15e  jal         func_2A8578
label_27b8bc:
    if (ctx->pc == 0x27B8BCu) {
        ctx->pc = 0x27B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B8B8u;
        // 0x27b8bc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B8C0u;
        goto label_27b8c0;
    }
    ctx->pc = 0x27B8B8u;
    SET_GPR_U32(ctx, 31, 0x27B8C0u);
    ctx->pc = 0x27B8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B8B8u;
    // 0x27b8bc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27B8B8u, 0x27B8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B8C0u;
label_27b8c0:
    // 0x27b8c0: 0xc055f06  jal         func_157C18
label_27b8c4:
    if (ctx->pc == 0x27B8C4u) {
        ctx->pc = 0x27B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B8C0u;
        // 0x27b8c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B8C8u;
        goto label_27b8c8;
    }
    ctx->pc = 0x27B8C0u;
    SET_GPR_U32(ctx, 31, 0x27B8C8u);
    ctx->pc = 0x27B8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B8C0u;
    // 0x27b8c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27B8C0u, 0x27B8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B8C8u;
label_27b8c8:
    // 0x27b8c8: 0xc0527ae  jal         func_149EB8
label_27b8cc:
    if (ctx->pc == 0x27B8CCu) {
        ctx->pc = 0x27B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B8C8u;
        // 0x27b8cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B8D0u;
        goto label_27b8d0;
    }
    ctx->pc = 0x27B8C8u;
    SET_GPR_U32(ctx, 31, 0x27B8D0u);
    ctx->pc = 0x27B8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B8C8u;
    // 0x27b8cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x27B8C8u, 0x27B8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B8D0u;
label_27b8d0:
    // 0x27b8d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27b8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27b8d4:
    // 0x27b8d4: 0xc054a88  jal         func_152A20
label_27b8d8:
    if (ctx->pc == 0x27B8D8u) {
        ctx->pc = 0x27B8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B8D4u;
        // 0x27b8d8: 0x26240448  addiu       $a0, $s1, 0x448 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B8DCu;
        goto label_27b8dc;
    }
    ctx->pc = 0x27B8D4u;
    SET_GPR_U32(ctx, 31, 0x27B8DCu);
    ctx->pc = 0x27B8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B8D4u;
    // 0x27b8d8: 0x26240448  addiu       $a0, $s1, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x27B8D4u, 0x27B8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B8DCu;
label_27b8dc:
    // 0x27b8dc: 0xc05280e  jal         func_14A038
label_27b8e0:
    if (ctx->pc == 0x27B8E0u) {
        ctx->pc = 0x27B8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B8DCu;
        // 0x27b8e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B8E4u;
        goto label_27b8e4;
    }
    ctx->pc = 0x27B8DCu;
    SET_GPR_U32(ctx, 31, 0x27B8E4u);
    ctx->pc = 0x27B8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B8DCu;
    // 0x27b8e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x27B8DCu, 0x27B8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B8E4u;
label_27b8e4:
    // 0x27b8e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b8e8:
    // 0x27b8e8: 0x26042fc0  addiu       $a0, $s0, 0x2FC0
    ctx->pc = 0x27b8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
label_27b8ec:
    // 0x27b8ec: 0xa2220616  sb          $v0, 0x616($s1)
    ctx->pc = 0x27b8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1558), (uint8_t)GPR_U32(ctx, 2));
label_27b8f0:
    // 0x27b8f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27b8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27b8f4:
    // 0x27b8f4: 0xc04d476  jal         func_1351D8
label_27b8f8:
    if (ctx->pc == 0x27B8F8u) {
        ctx->pc = 0x27B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B8F4u;
        // 0x27b8f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B8FCu;
        goto label_27b8fc;
    }
    ctx->pc = 0x27B8F4u;
    SET_GPR_U32(ctx, 31, 0x27B8FCu);
    ctx->pc = 0x27B8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B8F4u;
    // 0x27b8f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x27B8F4u, 0x27B8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B8FCu;
label_27b8fc:
    // 0x27b8fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27b8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27b900:
    // 0x27b900: 0xc05404a  jal         func_150128
label_27b904:
    if (ctx->pc == 0x27B904u) {
        ctx->pc = 0x27B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B900u;
        // 0x27b904: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B908u;
        goto label_27b908;
    }
    ctx->pc = 0x27B900u;
    SET_GPR_U32(ctx, 31, 0x27B908u);
    ctx->pc = 0x27B904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B900u;
    // 0x27b904: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150128u, 0x27B900u, 0x27B908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B908u;
label_27b908:
    // 0x27b908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b90c:
    // 0x27b90c: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x27b90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_27b910:
    // 0x27b910: 0xa622054a  sh          $v0, 0x54A($s1)
    ctx->pc = 0x27b910u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
label_27b914:
    // 0x27b914: 0xa6220548  sh          $v0, 0x548($s1)
    ctx->pc = 0x27b914u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1352), (uint16_t)GPR_U32(ctx, 2));
label_27b918:
    // 0x27b918: 0x1072001e  beq         $v1, $s2, . + 4 + (0x1E << 2)
label_27b91c:
    if (ctx->pc == 0x27B91Cu) {
        ctx->pc = 0x27B91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B918u;
        // 0x27b91c: 0xae200670  sw          $zero, 0x670($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B920u;
        goto label_27b920;
    }
    ctx->pc = 0x27B918u;
    {
        const bool branch_taken_0x27b918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x27B91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B918u;
        // 0x27b91c: 0xae200670  sw          $zero, 0x670($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b918) {
            ctx->pc = 0x27B994u;
            goto label_27b994;
        }
    }
    ctx->pc = 0x27B920u;
label_27b920:
    // 0x27b920: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x27b920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_27b924:
    // 0x27b924: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27b924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27b928:
    // 0x27b928: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x27b928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
label_27b92c:
    // 0x27b92c: 0xc07f886  jal         func_1FE218
label_27b930:
    if (ctx->pc == 0x27B930u) {
        ctx->pc = 0x27B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B92Cu;
        // 0x27b930: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B934u;
        goto label_27b934;
    }
    ctx->pc = 0x27B92Cu;
    SET_GPR_U32(ctx, 31, 0x27B934u);
    ctx->pc = 0x27B930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B92Cu;
    // 0x27b930: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x27B92Cu, 0x27B934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B934u;
label_27b934:
    // 0x27b934: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x27b934u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_27b938:
    // 0x27b938: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27b938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b93c:
    // 0x27b93c: 0xae220670  sw          $v0, 0x670($s1)
    ctx->pc = 0x27b93cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 2));
label_27b940:
    // 0x27b940: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x27b940u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_27b944:
    // 0x27b944: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_27b948:
    if (ctx->pc == 0x27B948u) {
        ctx->pc = 0x27B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B944u;
        // 0x27b948: 0xafa40040  sw          $a0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B94Cu;
        goto label_27b94c;
    }
    ctx->pc = 0x27B944u;
    {
        const bool branch_taken_0x27b944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B944u;
        // 0x27b948: 0xafa40040  sw          $a0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b944) {
            ctx->pc = 0x27B958u;
            goto label_27b958;
        }
    }
    ctx->pc = 0x27B94Cu;
label_27b94c:
    // 0x27b94c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x27b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_27b950:
    // 0x27b950: 0x10000002  b           . + 4 + (0x2 << 2)
label_27b954:
    if (ctx->pc == 0x27B954u) {
        ctx->pc = 0x27B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B950u;
        // 0x27b954: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B958u;
        goto label_27b958;
    }
    ctx->pc = 0x27B950u;
    {
        const bool branch_taken_0x27b950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B950u;
        // 0x27b954: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b950) {
            ctx->pc = 0x27B95Cu;
            goto label_27b95c;
        }
    }
    ctx->pc = 0x27B958u;
label_27b958:
    // 0x27b958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b95c:
    // 0x27b95c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x27b95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_27b960:
    // 0x27b960: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x27b960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_27b964:
    // 0x27b964: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x27b964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_27b968:
    // 0x27b968: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x27b968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_27b96c:
    // 0x27b96c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x27b96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_27b970:
    // 0x27b970: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27b970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27b974:
    // 0x27b974: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27b974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27b978:
    // 0x27b978: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27b978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27b97c:
    // 0x27b97c: 0x8e240670  lw          $a0, 0x670($s1)
    ctx->pc = 0x27b97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_27b980:
    // 0x27b980: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x27b980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_27b984:
    // 0x27b984: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27b984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27b988:
    // 0x27b988: 0xc07f6bc  jal         func_1FDAF0
label_27b98c:
    if (ctx->pc == 0x27B98Cu) {
        ctx->pc = 0x27B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B988u;
        // 0x27b98c: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B990u;
        goto label_27b990;
    }
    ctx->pc = 0x27B988u;
    SET_GPR_U32(ctx, 31, 0x27B990u);
    ctx->pc = 0x27B98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B988u;
    // 0x27b98c: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x27B988u, 0x27B990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B990u;
label_27b990:
    // 0x27b990: 0xae220674  sw          $v0, 0x674($s1)
    ctx->pc = 0x27b990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 2));
label_27b994:
    // 0x27b994: 0x26702fc0  addiu       $s0, $s3, 0x2FC0
    ctx->pc = 0x27b994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 12224));
label_27b998:
    // 0x27b998: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x27b998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_27b99c:
    // 0x27b99c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27b99cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_27b9a0:
    // 0x27b9a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27b9a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27b9a4:
    // 0x27b9a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b9a8:
    // 0x27b9a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27b9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27b9ac:
    // 0x27b9ac: 0xc04d1be  jal         func_1346F8
label_27b9b0:
    if (ctx->pc == 0x27B9B0u) {
        ctx->pc = 0x27B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9ACu;
        // 0x27b9b0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B9B4u;
        goto label_27b9b4;
    }
    ctx->pc = 0x27B9ACu;
    SET_GPR_U32(ctx, 31, 0x27B9B4u);
    ctx->pc = 0x27B9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B9ACu;
    // 0x27b9b0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1346F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1346F8u, 0x27B9ACu, 0x27B9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B9B4u;
label_27b9b4:
    // 0x27b9b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27b9b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_27b9b8:
    // 0x27b9b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27b9b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27b9bc:
    // 0x27b9bc: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x27b9bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_27b9c0:
    // 0x27b9c0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x27b9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_27b9c4:
    // 0x27b9c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b9c8:
    // 0x27b9c8: 0xe64c0004  swc1        $f12, 0x4($s2)
    ctx->pc = 0x27b9c8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_27b9cc:
    // 0x27b9cc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x27b9ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b9d0:
    // 0x27b9d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27b9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27b9d4:
    // 0x27b9d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27b9d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27b9d8:
    // 0x27b9d8: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x27b9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_27b9dc:
    // 0x27b9dc: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x27b9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_27b9e0:
    // 0x27b9e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27b9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27b9e4:
    // 0x27b9e4: 0xc04d220  jal         func_134880
label_27b9e8:
    if (ctx->pc == 0x27B9E8u) {
        ctx->pc = 0x27B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9E4u;
        // 0x27b9e8: 0xe640000c  swc1        $f0, 0xC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B9ECu;
        goto label_27b9ec;
    }
    ctx->pc = 0x27B9E4u;
    SET_GPR_U32(ctx, 31, 0x27B9ECu);
    ctx->pc = 0x27B9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B9E4u;
    // 0x27b9e8: 0xe640000c  swc1        $f0, 0xC($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x134880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134880u, 0x27B9E4u, 0x27B9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B9ECu;
label_27b9ec:
    // 0x27b9ec: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x27b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_27b9f0:
    // 0x27b9f0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x27b9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_27b9f4:
    // 0x27b9f4: 0x248464e0  addiu       $a0, $a0, 0x64E0
    ctx->pc = 0x27b9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
label_27b9f8:
    // 0x27b9f8: 0x24050369  addiu       $a1, $zero, 0x369
    ctx->pc = 0x27b9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 873));
label_27b9fc:
    // 0x27b9fc: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x27b9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_27ba00:
    // 0x27ba00: 0xc07fb38  jal         func_1FECE0
label_27ba04:
    if (ctx->pc == 0x27BA04u) {
        ctx->pc = 0x27BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA00u;
        // 0x27ba04: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BA08u;
        goto label_27ba08;
    }
    ctx->pc = 0x27BA00u;
    SET_GPR_U32(ctx, 31, 0x27BA08u);
    ctx->pc = 0x27BA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BA00u;
    // 0x27ba04: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x27BA00u, 0x27BA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA08u;
label_27ba08:
    // 0x27ba08: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x27ba08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_27ba0c:
    // 0x27ba0c: 0xc0c3ea6  jal         func_30FA98
label_27ba10:
    if (ctx->pc == 0x27BA10u) {
        ctx->pc = 0x27BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA0Cu;
        // 0x27ba10: 0x24040369  addiu       $a0, $zero, 0x369 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 873));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BA14u;
        goto label_27ba14;
    }
    ctx->pc = 0x27BA0Cu;
    SET_GPR_U32(ctx, 31, 0x27BA14u);
    ctx->pc = 0x27BA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BA0Cu;
    // 0x27ba10: 0x24040369  addiu       $a0, $zero, 0x369 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 873));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x27BA0Cu, 0x27BA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA14u;
label_27ba14:
    // 0x27ba14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27ba14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ba18:
    // 0x27ba18: 0x10a00031  beqz        $a1, . + 4 + (0x31 << 2)
label_27ba1c:
    if (ctx->pc == 0x27BA1Cu) {
        ctx->pc = 0x27BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA18u;
        // 0x27ba1c: 0xae2515b0  sw          $a1, 0x15B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BA20u;
        goto label_27ba20;
    }
    ctx->pc = 0x27BA18u;
    {
        const bool branch_taken_0x27ba18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA18u;
        // 0x27ba1c: 0xae2515b0  sw          $a1, 0x15B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ba18) {
            ctx->pc = 0x27BAE0u;
            goto label_27bae0;
        }
    }
    ctx->pc = 0x27BA20u;
label_27ba20:
    // 0x27ba20: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x27ba20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_27ba24:
    // 0x27ba24: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x27ba24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
label_27ba28:
    // 0x27ba28: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x27ba28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_27ba2c:
    // 0x27ba2c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x27ba2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_27ba30:
    // 0x27ba30: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x27ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_27ba34:
    // 0x27ba34: 0x40f809  jalr        $v0
label_27ba38:
    if (ctx->pc == 0x27BA38u) {
        ctx->pc = 0x27BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA34u;
        // 0x27ba38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BA3Cu;
        goto label_27ba3c;
    }
    ctx->pc = 0x27BA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27BA3Cu);
        ctx->pc = 0x27BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA34u;
        // 0x27ba38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BA34u, 0x27BA3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27BA3Cu;
label_27ba3c:
    // 0x27ba3c: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x27ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_27ba40:
    // 0x27ba40: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x27ba40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_27ba44:
    // 0x27ba44: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x27ba44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_27ba48:
    // 0x27ba48: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
label_27ba4c:
    if (ctx->pc == 0x27BA4Cu) {
        ctx->pc = 0x27BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA48u;
        // 0x27ba4c: 0x8e2415b0  lw          $a0, 0x15B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BA50u;
        goto label_27ba50;
    }
    ctx->pc = 0x27BA48u;
    {
        const bool branch_taken_0x27ba48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27ba48) {
            ctx->pc = 0x27BA4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BA48u;
            // 0x27ba4c: 0x8e2415b0  lw          $a0, 0x15B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BA6Cu;
            goto label_27ba6c;
        }
    }
    ctx->pc = 0x27BA50u;
label_27ba50:
    // 0x27ba50: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27ba50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ba54:
    // 0x27ba54: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x27ba54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_27ba58:
    // 0x27ba58: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x27ba58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ba5c:
    // 0x27ba5c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x27ba5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_27ba60:
    // 0x27ba60: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x27ba60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ba64:
    // 0x27ba64: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x27ba64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_27ba68:
    // 0x27ba68: 0x8e2415b0  lw          $a0, 0x15B0($s1)
    ctx->pc = 0x27ba68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_27ba6c:
    // 0x27ba6c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x27ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_27ba70:
    // 0x27ba70: 0x24830490  addiu       $v1, $a0, 0x490
    ctx->pc = 0x27ba70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
label_27ba74:
    // 0x27ba74: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_27ba78:
    if (ctx->pc == 0x27BA78u) {
        ctx->pc = 0x27BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA74u;
        // 0x27ba78: 0x8e2215b0  lw          $v0, 0x15B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BA7Cu;
        goto label_27ba7c;
    }
    ctx->pc = 0x27BA74u;
    {
        const bool branch_taken_0x27ba74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27ba74) {
            ctx->pc = 0x27BA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BA74u;
            // 0x27ba78: 0x8e2215b0  lw          $v0, 0x15B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BA98u;
            goto label_27ba98;
        }
    }
    ctx->pc = 0x27BA7Cu;
label_27ba7c:
    // 0x27ba7c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27ba7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ba80:
    // 0x27ba80: 0xe4800490  swc1        $f0, 0x490($a0)
    ctx->pc = 0x27ba80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1168), bits); }
label_27ba84:
    // 0x27ba84: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x27ba84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ba88:
    // 0x27ba88: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27ba88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_27ba8c:
    // 0x27ba8c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27ba8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ba90:
    // 0x27ba90: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27ba90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27ba94:
    // 0x27ba94: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x27ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_27ba98:
    // 0x27ba98: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x27ba98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27ba9c:
    // 0x27ba9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27ba9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27baa0:
    // 0x27baa0: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x27baa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_27baa4:
    // 0x27baa4: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x27baa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
label_27baa8:
    // 0x27baa8: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x27baa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_27baac:
    // 0x27baac: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x27baacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_27bab0:
    // 0x27bab0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27bab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_27bab4:
    // 0x27bab4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27bab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_27bab8:
    // 0x27bab8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x27bab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_27babc:
    // 0x27babc: 0x8e2415b0  lw          $a0, 0x15B0($s1)
    ctx->pc = 0x27babcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_27bac0:
    // 0x27bac0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x27bac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_27bac4:
    // 0x27bac4: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x27bac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_27bac8:
    // 0x27bac8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x27bac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_27bacc:
    // 0x27bacc: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x27baccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_27bad0:
    // 0x27bad0: 0xc073c58  jal         func_1CF160
label_27bad4:
    if (ctx->pc == 0x27BAD4u) {
        ctx->pc = 0x27BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAD0u;
        // 0x27bad4: 0xafa00068  sw          $zero, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BAD8u;
        goto label_27bad8;
    }
    ctx->pc = 0x27BAD0u;
    SET_GPR_U32(ctx, 31, 0x27BAD8u);
    ctx->pc = 0x27BAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BAD0u;
    // 0x27bad4: 0xafa00068  sw          $zero, 0x68($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF160u, 0x27BAD0u, 0x27BAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BAD8u;
label_27bad8:
    // 0x27bad8: 0xc0741e6  jal         func_1D0798
label_27badc:
    if (ctx->pc == 0x27BADCu) {
        ctx->pc = 0x27BADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAD8u;
        // 0x27badc: 0x8e2415b0  lw          $a0, 0x15B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BAE0u;
        goto label_27bae0;
    }
    ctx->pc = 0x27BAD8u;
    SET_GPR_U32(ctx, 31, 0x27BAE0u);
    ctx->pc = 0x27BADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BAD8u;
    // 0x27badc: 0x8e2415b0  lw          $a0, 0x15B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0798u, 0x27BAD8u, 0x27BAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BAE0u;
label_27bae0:
    // 0x27bae0: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x27bae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_27bae4:
    // 0x27bae4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x27bae4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_27bae8:
    // 0x27bae8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27bae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27baec:
    // 0x27baec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27baecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27baf0:
    // 0x27baf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27baf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27baf4:
    // 0x27baf4: 0xa2220531  sb          $v0, 0x531($s1)
    ctx->pc = 0x27baf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1329), (uint8_t)GPR_U32(ctx, 2));
label_27baf8:
    // 0x27baf8: 0xa2230617  sb          $v1, 0x617($s1)
    ctx->pc = 0x27baf8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1559), (uint8_t)GPR_U32(ctx, 3));
label_27bafc:
    // 0x27bafc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27bb00:
    // 0x27bb00: 0xe6201564  swc1        $f0, 0x1564($s1)
    ctx->pc = 0x27bb00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5476), bits); }
label_27bb04:
    // 0x27bb04: 0xae2015d4  sw          $zero, 0x15D4($s1)
    ctx->pc = 0x27bb04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5588), GPR_U32(ctx, 0));
label_27bb08:
    // 0x27bb08: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x27bb08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
label_27bb0c:
    // 0x27bb0c: 0xae201568  sw          $zero, 0x1568($s1)
    ctx->pc = 0x27bb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5480), GPR_U32(ctx, 0));
label_27bb10:
    // 0x27bb10: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x27bb10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_27bb14:
    // 0x27bb14: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x27bb14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_27bb18:
    // 0x27bb18: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x27bb18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_27bb1c:
    // 0x27bb1c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x27bb1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27bb20:
    // 0x27bb20: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x27bb20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_27bb24:
    // 0x27bb24: 0x3e00008  jr          $ra
label_27bb28:
    if (ctx->pc == 0x27BB28u) {
        ctx->pc = 0x27BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB24u;
        // 0x27bb28: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BB2Cu;
        goto label_27bb2c;
    }
    ctx->pc = 0x27BB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB24u;
        // 0x27bb28: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BB2Cu;
label_27bb2c:
    // 0x27bb2c: 0x0  nop
    ctx->pc = 0x27bb2cu;
    // NOP
    ctx->pc = 0x27bb30u;
}
