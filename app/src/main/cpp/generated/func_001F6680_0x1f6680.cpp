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

// Function: func_001F6680
// Address: 0x1f6680 - 0x1f6758
void func_001F6680_0x1f6680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F6680_0x1f6680");
#endif

    switch (ctx->pc) {
        case 0x1f66b8u: goto label_1f66b8;
        case 0x1f66ccu: goto label_1f66cc;
        case 0x1f66e4u: goto label_1f66e4;
        case 0x1f6708u: goto label_1f6708;
        case 0x1f671cu: goto label_1f671c;
        default: break;
    }

    ctx->pc = 0x1f6680u;

    // 0x1f6680: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f6680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f6684: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f6684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1f6688: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1f6688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1f668c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f668cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6690: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f6690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1f6694: 0x3c13dfff  lui         $s3, 0xDFFF
    ctx->pc = 0x1f6694u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)57343 << 16));
    // 0x1f6698: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f6698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1f669c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f669cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f66a0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1f66a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1f66a4: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x1f66a4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x1f66a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f66a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f66ac: 0x3c142000  lui         $s4, 0x2000
    ctx->pc = 0x1f66acu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)8192 << 16));
    // 0x1f66b0: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x1f66b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1f66b4: 0x0  nop
    ctx->pc = 0x1f66b4u;
    // NOP
label_1f66b8:
    // 0x1f66b8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1f66b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f66bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F66BCu;
    {
        const bool branch_taken_0x1f66bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F66C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F66BCu;
        // 0x1f66c0: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f66bc) {
            ctx->pc = 0x1F66DCu;
            goto label_1f66dc;
        }
    }
    ctx->pc = 0x1F66C4u;
    // 0x1f66c4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1F66C4u;
    SET_GPR_U32(ctx, 31, 0x1F66CCu);
    ctx->pc = 0x1F66C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F66C4u;
    // 0x1f66c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1F66C4u, 0x1F66CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F66CCu;
label_1f66cc:
    // 0x1f66cc: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1f66ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1f66d0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1f66d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1f66d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F66D4u;
    {
        const bool branch_taken_0x1f66d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F66D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F66D4u;
        // 0x1f66d8: 0x731824  and         $v1, $v1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f66d4) {
            ctx->pc = 0x1F66F0u;
            goto label_1f66f0;
        }
    }
    ctx->pc = 0x1F66DCu;
label_1f66dc:
    // 0x1f66dc: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1F66DCu;
    SET_GPR_U32(ctx, 31, 0x1F66E4u);
    ctx->pc = 0x1F66E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F66DCu;
    // 0x1f66e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1F66DCu, 0x1F66E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F66E4u;
label_1f66e4:
    // 0x1f66e4: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1f66e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1f66e8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1f66e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1f66ec: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x1f66ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
label_1f66f0:
    // 0x1f66f0: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x1f66f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x1f66f4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1f66f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f66f8: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F66F8u;
    {
        const bool branch_taken_0x1f66f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f66f8) {
            ctx->pc = 0x1F6714u;
            goto label_1f6714;
        }
    }
    ctx->pc = 0x1F6700u;
    // 0x1f6700: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1F6700u;
    SET_GPR_U32(ctx, 31, 0x1F6708u);
    ctx->pc = 0x1F6704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6700u;
    // 0x1f6704: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1F6700u, 0x1F6708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6708u;
label_1f6708:
    // 0x1f6708: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1f6708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1f670c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F670Cu;
    {
        const bool branch_taken_0x1f670c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F670Cu;
        // 0x1f6710: 0x731824  and         $v1, $v1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f670c) {
            ctx->pc = 0x1F6724u;
            goto label_1f6724;
        }
    }
    ctx->pc = 0x1F6714u;
label_1f6714:
    // 0x1f6714: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1F6714u;
    SET_GPR_U32(ctx, 31, 0x1F671Cu);
    ctx->pc = 0x1F6718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6714u;
    // 0x1f6718: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1F6714u, 0x1F671Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F671Cu;
label_1f671c:
    // 0x1f671c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1f671cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1f6720: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x1f6720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
label_1f6724:
    // 0x1f6724: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x1f6724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x1f6728: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f672c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1f672cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f6730: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1F6730u;
    {
        const bool branch_taken_0x1f6730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6730u;
        // 0x1f6734: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6730) {
            ctx->pc = 0x1F66B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f66b8;
        }
    }
    ctx->pc = 0x1F6738u;
    // 0x1f6738: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f6738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f673c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f673cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f6740: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f6740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6744: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1f6744u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6748: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1f6748u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f674c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f674cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6750: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6750u;
        // 0x1f6754: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6758u;
}
