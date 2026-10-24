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

// Function: func_00392830
// Address: 0x392830 - 0x392998
void func_00392830_0x392830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00392830_0x392830");
#endif

    switch (ctx->pc) {
        case 0x392830u: goto label_392830;
        case 0x392834u: goto label_392834;
        case 0x392838u: goto label_392838;
        case 0x39283cu: goto label_39283c;
        case 0x392840u: goto label_392840;
        case 0x392844u: goto label_392844;
        case 0x392848u: goto label_392848;
        case 0x39284cu: goto label_39284c;
        case 0x392850u: goto label_392850;
        case 0x392854u: goto label_392854;
        case 0x392858u: goto label_392858;
        case 0x39285cu: goto label_39285c;
        case 0x392860u: goto label_392860;
        case 0x392864u: goto label_392864;
        case 0x392868u: goto label_392868;
        case 0x39286cu: goto label_39286c;
        case 0x392870u: goto label_392870;
        case 0x392874u: goto label_392874;
        case 0x392878u: goto label_392878;
        case 0x39287cu: goto label_39287c;
        case 0x392880u: goto label_392880;
        case 0x392884u: goto label_392884;
        case 0x392888u: goto label_392888;
        case 0x39288cu: goto label_39288c;
        case 0x392890u: goto label_392890;
        case 0x392894u: goto label_392894;
        case 0x392898u: goto label_392898;
        case 0x39289cu: goto label_39289c;
        case 0x3928a0u: goto label_3928a0;
        case 0x3928a4u: goto label_3928a4;
        case 0x3928a8u: goto label_3928a8;
        case 0x3928acu: goto label_3928ac;
        case 0x3928b0u: goto label_3928b0;
        case 0x3928b4u: goto label_3928b4;
        case 0x3928b8u: goto label_3928b8;
        case 0x3928bcu: goto label_3928bc;
        case 0x3928c0u: goto label_3928c0;
        case 0x3928c4u: goto label_3928c4;
        case 0x3928c8u: goto label_3928c8;
        case 0x3928ccu: goto label_3928cc;
        case 0x3928d0u: goto label_3928d0;
        case 0x3928d4u: goto label_3928d4;
        case 0x3928d8u: goto label_3928d8;
        case 0x3928dcu: goto label_3928dc;
        case 0x3928e0u: goto label_3928e0;
        case 0x3928e4u: goto label_3928e4;
        case 0x3928e8u: goto label_3928e8;
        case 0x3928ecu: goto label_3928ec;
        case 0x3928f0u: goto label_3928f0;
        case 0x3928f4u: goto label_3928f4;
        case 0x3928f8u: goto label_3928f8;
        case 0x3928fcu: goto label_3928fc;
        case 0x392900u: goto label_392900;
        case 0x392904u: goto label_392904;
        case 0x392908u: goto label_392908;
        case 0x39290cu: goto label_39290c;
        case 0x392910u: goto label_392910;
        case 0x392914u: goto label_392914;
        case 0x392918u: goto label_392918;
        case 0x39291cu: goto label_39291c;
        case 0x392920u: goto label_392920;
        case 0x392924u: goto label_392924;
        case 0x392928u: goto label_392928;
        case 0x39292cu: goto label_39292c;
        case 0x392930u: goto label_392930;
        case 0x392934u: goto label_392934;
        case 0x392938u: goto label_392938;
        case 0x39293cu: goto label_39293c;
        case 0x392940u: goto label_392940;
        case 0x392944u: goto label_392944;
        case 0x392948u: goto label_392948;
        case 0x39294cu: goto label_39294c;
        case 0x392950u: goto label_392950;
        case 0x392954u: goto label_392954;
        case 0x392958u: goto label_392958;
        case 0x39295cu: goto label_39295c;
        case 0x392960u: goto label_392960;
        case 0x392964u: goto label_392964;
        case 0x392968u: goto label_392968;
        case 0x39296cu: goto label_39296c;
        case 0x392970u: goto label_392970;
        case 0x392974u: goto label_392974;
        case 0x392978u: goto label_392978;
        case 0x39297cu: goto label_39297c;
        case 0x392980u: goto label_392980;
        case 0x392984u: goto label_392984;
        case 0x392988u: goto label_392988;
        case 0x39298cu: goto label_39298c;
        case 0x392990u: goto label_392990;
        case 0x392994u: goto label_392994;
        default: break;
    }

    ctx->pc = 0x392830u;

label_392830:
    // 0x392830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x392830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_392834:
    // 0x392834: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x392834u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_392838:
    // 0x392838: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x392838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_39283c:
    // 0x39283c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39283cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_392840:
    // 0x392840: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x392840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_392844:
    // 0x392844: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x392844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_392848:
    // 0x392848: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x392848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_39284c:
    // 0x39284c: 0x441001e  bgez        $v0, . + 4 + (0x1E << 2)
label_392850:
    if (ctx->pc == 0x392850u) {
        ctx->pc = 0x392850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39284Cu;
        // 0x392850: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392854u;
        goto label_392854;
    }
    ctx->pc = 0x39284Cu;
    {
        const bool branch_taken_0x39284c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x392850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39284Cu;
        // 0x392850: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39284c) {
            ctx->pc = 0x3928C8u;
            goto label_3928c8;
        }
    }
    ctx->pc = 0x392854u;
label_392854:
    // 0x392854: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x392854u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_392858:
    // 0x392858: 0x24020072  addiu       $v0, $zero, 0x72
    ctx->pc = 0x392858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_39285c:
    // 0x39285c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_392860:
    if (ctx->pc == 0x392860u) {
        ctx->pc = 0x392860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39285Cu;
        // 0x392860: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392864u;
        goto label_392864;
    }
    ctx->pc = 0x39285Cu;
    {
        const bool branch_taken_0x39285c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x392860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39285Cu;
        // 0x392860: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39285c) {
            ctx->pc = 0x392894u;
            goto label_392894;
        }
    }
    ctx->pc = 0x392864u;
label_392864:
    // 0x392864: 0x28620073  slti        $v0, $v1, 0x73
    ctx->pc = 0x392864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)115) ? 1 : 0);
label_392868:
    // 0x392868: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_39286c:
    if (ctx->pc == 0x39286Cu) {
        ctx->pc = 0x39286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392868u;
        // 0x39286c: 0x24020061  addiu       $v0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392870u;
        goto label_392870;
    }
    ctx->pc = 0x392868u;
    {
        const bool branch_taken_0x392868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392868u;
        // 0x39286c: 0x24020061  addiu       $v0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392868) {
            ctx->pc = 0x392880u;
            goto label_392880;
        }
    }
    ctx->pc = 0x392870u;
label_392870:
    // 0x392870: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_392874:
    if (ctx->pc == 0x392874u) {
        ctx->pc = 0x392874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392870u;
        // 0x392874: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392878u;
        goto label_392878;
    }
    ctx->pc = 0x392870u;
    {
        const bool branch_taken_0x392870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x392874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392870u;
        // 0x392874: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392870) {
            ctx->pc = 0x3928ACu;
            goto label_3928ac;
        }
    }
    ctx->pc = 0x392878u;
label_392878:
    // 0x392878: 0x1000000f  b           . + 4 + (0xF << 2)
label_39287c:
    if (ctx->pc == 0x39287Cu) {
        ctx->pc = 0x392880u;
        goto label_392880;
    }
    ctx->pc = 0x392878u;
    {
        const bool branch_taken_0x392878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x392878) {
            ctx->pc = 0x3928B8u;
            goto label_3928b8;
        }
    }
    ctx->pc = 0x392880u;
label_392880:
    // 0x392880: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x392880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_392884:
    // 0x392884: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_392888:
    if (ctx->pc == 0x392888u) {
        ctx->pc = 0x392888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392884u;
        // 0x392888: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39288Cu;
        goto label_39288c;
    }
    ctx->pc = 0x392884u;
    {
        const bool branch_taken_0x392884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x392888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392884u;
        // 0x392888: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392884) {
            ctx->pc = 0x3928A0u;
            goto label_3928a0;
        }
    }
    ctx->pc = 0x39288Cu;
label_39288c:
    // 0x39288c: 0x1000000a  b           . + 4 + (0xA << 2)
label_392890:
    if (ctx->pc == 0x392890u) {
        ctx->pc = 0x392894u;
        goto label_392894;
    }
    ctx->pc = 0x39288Cu;
    {
        const bool branch_taken_0x39288c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39288c) {
            ctx->pc = 0x3928B8u;
            goto label_3928b8;
        }
    }
    ctx->pc = 0x392894u;
label_392894:
    // 0x392894: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x392894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_392898:
    // 0x392898: 0x1000000d  b           . + 4 + (0xD << 2)
label_39289c:
    if (ctx->pc == 0x39289Cu) {
        ctx->pc = 0x39289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392898u;
        // 0x39289c: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3928A0u;
        goto label_3928a0;
    }
    ctx->pc = 0x392898u;
    {
        const bool branch_taken_0x392898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392898u;
        // 0x39289c: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392898) {
            ctx->pc = 0x3928D0u;
            goto label_3928d0;
        }
    }
    ctx->pc = 0x3928A0u;
label_3928a0:
    // 0x3928a0: 0x24080600  addiu       $t0, $zero, 0x600
    ctx->pc = 0x3928a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
label_3928a4:
    // 0x3928a4: 0x1000000a  b           . + 4 + (0xA << 2)
label_3928a8:
    if (ctx->pc == 0x3928A8u) {
        ctx->pc = 0x3928A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3928A4u;
        // 0x3928a8: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3928ACu;
        goto label_3928ac;
    }
    ctx->pc = 0x3928A4u;
    {
        const bool branch_taken_0x3928a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3928A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3928A4u;
        // 0x3928a8: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3928a4) {
            ctx->pc = 0x3928D0u;
            goto label_3928d0;
        }
    }
    ctx->pc = 0x3928ACu;
label_3928ac:
    // 0x3928ac: 0x24080208  addiu       $t0, $zero, 0x208
    ctx->pc = 0x3928acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
label_3928b0:
    // 0x3928b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3928b4:
    if (ctx->pc == 0x3928B4u) {
        ctx->pc = 0x3928B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3928B0u;
        // 0x3928b4: 0x24111004  addiu       $s1, $zero, 0x1004 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3928B8u;
        goto label_3928b8;
    }
    ctx->pc = 0x3928B0u;
    {
        const bool branch_taken_0x3928b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3928B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3928B0u;
        // 0x3928b4: 0x24111004  addiu       $s1, $zero, 0x1004 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3928b0) {
            ctx->pc = 0x3928D0u;
            goto label_3928d0;
        }
    }
    ctx->pc = 0x3928B8u;
label_3928b8:
    // 0x3928b8: 0xc0e93ee  jal         func_3A4FB8
label_3928bc:
    if (ctx->pc == 0x3928BCu) {
        ctx->pc = 0x3928C0u;
        goto label_3928c0;
    }
    ctx->pc = 0x3928B8u;
    SET_GPR_U32(ctx, 31, 0x3928C0u);
    ctx->pc = 0x3A4FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FB8u, 0x3928B8u, 0x3928C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3928C0u;
label_3928c0:
    // 0x3928c0: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x3928c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_3928c4:
    // 0x3928c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3928c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3928c8:
    // 0x3928c8: 0x1000002e  b           . + 4 + (0x2E << 2)
label_3928cc:
    if (ctx->pc == 0x3928CCu) {
        ctx->pc = 0x3928CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3928C8u;
        // 0x3928cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3928D0u;
        goto label_3928d0;
    }
    ctx->pc = 0x3928C8u;
    {
        const bool branch_taken_0x3928c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3928CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3928C8u;
        // 0x3928cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3928c8) {
            ctx->pc = 0x392984u;
            goto label_392984;
        }
    }
    ctx->pc = 0x3928D0u;
label_3928d0:
    // 0x3928d0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x3928d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3928d4:
    // 0x3928d4: 0x2407002b  addiu       $a3, $zero, 0x2B
    ctx->pc = 0x3928d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_3928d8:
    // 0x3928d8: 0x50670008  beql        $v1, $a3, . + 4 + (0x8 << 2)
label_3928dc:
    if (ctx->pc == 0x3928DCu) {
        ctx->pc = 0x3928DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3928D8u;
        // 0x3928dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3928E0u;
        goto label_3928e0;
    }
    ctx->pc = 0x3928D8u;
    {
        const bool branch_taken_0x3928d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x3928d8) {
            ctx->pc = 0x3928DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3928D8u;
            // 0x3928dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3928FCu;
            goto label_3928fc;
        }
    }
    ctx->pc = 0x3928E0u;
label_3928e0:
    // 0x3928e0: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x3928e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_3928e4:
    // 0x3928e4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_3928e8:
    if (ctx->pc == 0x3928E8u) {
        ctx->pc = 0x3928E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3928E4u;
        // 0x3928e8: 0xa82825  or          $a1, $a1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3928ECu;
        goto label_3928ec;
    }
    ctx->pc = 0x3928E4u;
    {
        const bool branch_taken_0x3928e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3928E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3928E4u;
        // 0x3928e8: 0xa82825  or          $a1, $a1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3928e4) {
            ctx->pc = 0x392904u;
            goto label_392904;
        }
    }
    ctx->pc = 0x3928ECu;
label_3928ec:
    // 0x3928ec: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x3928ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_3928f0:
    // 0x3928f0: 0x14470004  bne         $v0, $a3, . + 4 + (0x4 << 2)
label_3928f4:
    if (ctx->pc == 0x3928F4u) {
        ctx->pc = 0x3928F8u;
        goto label_3928f8;
    }
    ctx->pc = 0x3928F0u;
    {
        const bool branch_taken_0x3928f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x3928f0) {
            ctx->pc = 0x392904u;
            goto label_392904;
        }
    }
    ctx->pc = 0x3928F8u;
label_3928f8:
    // 0x3928f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3928f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3928fc:
    // 0x3928fc: 0x32311000  andi        $s1, $s1, 0x1000
    ctx->pc = 0x3928fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4096);
label_392900:
    // 0x392900: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x392900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
label_392904:
    // 0x392904: 0xc0ec0d8  jal         func_3B0360
label_392908:
    if (ctx->pc == 0x392908u) {
        ctx->pc = 0x392908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392904u;
        // 0x392908: 0x240601b6  addiu       $a2, $zero, 0x1B6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 438));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39290Cu;
        goto label_39290c;
    }
    ctx->pc = 0x392904u;
    SET_GPR_U32(ctx, 31, 0x39290Cu);
    ctx->pc = 0x392908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392904u;
    // 0x392908: 0x240601b6  addiu       $a2, $zero, 0x1B6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 438));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0360u, 0x392904u, 0x39290Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39290Cu;
label_39290c:
    // 0x39290c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39290cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_392910:
    // 0x392910: 0x480001c  bltz        $a0, . + 4 + (0x1C << 2)
label_392914:
    if (ctx->pc == 0x392914u) {
        ctx->pc = 0x392914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392910u;
        // 0x392914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392918u;
        goto label_392918;
    }
    ctx->pc = 0x392910u;
    {
        const bool branch_taken_0x392910 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x392914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392910u;
        // 0x392914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392910) {
            ctx->pc = 0x392984u;
            goto label_392984;
        }
    }
    ctx->pc = 0x392918u;
label_392918:
    // 0x392918: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x392918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39291c:
    // 0x39291c: 0x2403eff3  addiu       $v1, $zero, -0x100D
    ctx->pc = 0x39291cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963187));
label_392920:
    // 0x392920: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x392920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
label_392924:
    // 0x392924: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x392924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_392928:
    // 0x392928: 0x32241000  andi        $a0, $s1, 0x1000
    ctx->pc = 0x392928u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4096);
label_39292c:
    // 0x39292c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x39292cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_392930:
    // 0x392930: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_392934:
    if (ctx->pc == 0x392934u) {
        ctx->pc = 0x392934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392930u;
        // 0x392934: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392938u;
        goto label_392938;
    }
    ctx->pc = 0x392930u;
    {
        const bool branch_taken_0x392930 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x392934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392930u;
        // 0x392934: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392930) {
            ctx->pc = 0x392978u;
            goto label_392978;
        }
    }
    ctx->pc = 0x392938u;
label_392938:
    // 0x392938: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x392938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_39293c:
    // 0x39293c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39293cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_392940:
    // 0x392940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x392940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_392944:
    // 0x392944: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x392944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_392948:
    // 0x392948: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x392948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_39294c:
    // 0x39294c: 0x40f809  jalr        $v0
label_392950:
    if (ctx->pc == 0x392950u) {
        ctx->pc = 0x392950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39294Cu;
        // 0x392950: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392954u;
        goto label_392954;
    }
    ctx->pc = 0x39294Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392954u);
        ctx->pc = 0x392950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39294Cu;
        // 0x392950: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39294Cu, 0x392954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392954u;
label_392954:
    // 0x392954: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x392954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_392958:
    // 0x392958: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_39295c:
    if (ctx->pc == 0x39295Cu) {
        ctx->pc = 0x392960u;
        goto label_392960;
    }
    ctx->pc = 0x392958u;
    {
        const bool branch_taken_0x392958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x392958) {
            ctx->pc = 0x392978u;
            goto label_392978;
        }
    }
    ctx->pc = 0x392960u;
label_392960:
    // 0x392960: 0xc0e93ee  jal         func_3A4FB8
label_392964:
    if (ctx->pc == 0x392964u) {
        ctx->pc = 0x392968u;
        goto label_392968;
    }
    ctx->pc = 0x392960u;
    SET_GPR_U32(ctx, 31, 0x392968u);
    ctx->pc = 0x3A4FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FB8u, 0x392960u, 0x392968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392968u;
label_392968:
    // 0x392968: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x392968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39296c:
    // 0x39296c: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x39296cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_392970:
    // 0x392970: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_392974:
    if (ctx->pc == 0x392974u) {
        ctx->pc = 0x392974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392970u;
        // 0x392974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392978u;
        goto label_392978;
    }
    ctx->pc = 0x392970u;
    {
        const bool branch_taken_0x392970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x392974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392970u;
        // 0x392974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392970) {
            ctx->pc = 0x392984u;
            goto label_392984;
        }
    }
    ctx->pc = 0x392978u;
label_392978:
    // 0x392978: 0xc0e3082  jal         func_38C208
label_39297c:
    if (ctx->pc == 0x39297Cu) {
        ctx->pc = 0x39297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392978u;
        // 0x39297c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392980u;
        goto label_392980;
    }
    ctx->pc = 0x392978u;
    SET_GPR_U32(ctx, 31, 0x392980u);
    ctx->pc = 0x39297Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392978u;
    // 0x39297c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C208u, 0x392978u, 0x392980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392980u;
label_392980:
    // 0x392980: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x392980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_392984:
    // 0x392984: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x392984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_392988:
    // 0x392988: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x392988u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39298c:
    // 0x39298c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39298cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_392990:
    // 0x392990: 0x3e00008  jr          $ra
label_392994:
    if (ctx->pc == 0x392994u) {
        ctx->pc = 0x392994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392990u;
        // 0x392994: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392998u;
        goto label_fallthrough_0x392990;
    }
    ctx->pc = 0x392990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392990u;
        // 0x392994: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x392990:
    ctx->pc = 0x392998u;
}
