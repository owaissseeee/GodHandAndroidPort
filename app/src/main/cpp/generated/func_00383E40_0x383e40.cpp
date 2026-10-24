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

// Function: func_00383E40
// Address: 0x383e40 - 0x383eb0
void func_00383E40_0x383e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00383E40_0x383e40");
#endif

    switch (ctx->pc) {
        case 0x383e68u: goto label_383e68;
        case 0x383e70u: goto label_383e70;
        case 0x383e88u: goto label_383e88;
        case 0x383ea4u: goto label_383ea4;
        default: break;
    }

    ctx->pc = 0x383e40u;

    // 0x383e40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x383e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x383e44: 0x24830370  addiu       $v1, $a0, 0x370
    ctx->pc = 0x383e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 880));
    // 0x383e48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x383e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x383e4c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x383e4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x383e50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x383e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x383e54: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x383E54u;
    {
        const bool branch_taken_0x383e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x383e54) {
            ctx->pc = 0x383E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383E54u;
            // 0x383e58: 0x8c8203d4  lw          $v0, 0x3D4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 980)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383E78u;
            goto label_383e78;
        }
    }
    ctx->pc = 0x383E5Cu;
    // 0x383e5c: 0x8c820434  lw          $v0, 0x434($a0)
    ctx->pc = 0x383e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1076)));
    // 0x383e60: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x383E60u;
    {
        const bool branch_taken_0x383e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x383e60) {
            ctx->pc = 0x383E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383E60u;
            // 0x383e64: 0x90620003  lbu         $v0, 0x3($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383E90u;
            goto label_383e90;
        }
    }
    ctx->pc = 0x383E68u;
label_383e68:
    // 0x383e68: 0xc0e0fd4  jal         func_383F50
    ctx->pc = 0x383E68u;
    SET_GPR_U32(ctx, 31, 0x383E70u);
    ctx->pc = 0x383F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383F50u, 0x383E68u, 0x383E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383E70u;
label_383e70:
    // 0x383e70: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x383E70u;
    {
        const bool branch_taken_0x383e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383E70u;
        // 0x383e74: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383e70) {
            ctx->pc = 0x383EA8u;
            goto label_383ea8;
        }
    }
    ctx->pc = 0x383E78u;
label_383e78:
    // 0x383e78: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x383E78u;
    {
        const bool branch_taken_0x383e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x383e78) {
            ctx->pc = 0x383E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383E78u;
            // 0x383e7c: 0x90620003  lbu         $v0, 0x3($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383E90u;
            goto label_383e90;
        }
    }
    ctx->pc = 0x383E80u;
    // 0x383e80: 0xc0e0fac  jal         func_383EB0
    ctx->pc = 0x383E80u;
    SET_GPR_U32(ctx, 31, 0x383E88u);
    ctx->pc = 0x383EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383EB0u, 0x383E80u, 0x383E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383E88u;
label_383e88:
    // 0x383e88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x383E88u;
    {
        const bool branch_taken_0x383e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383E88u;
        // 0x383e8c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383e88) {
            ctx->pc = 0x383EA8u;
            goto label_383ea8;
        }
    }
    ctx->pc = 0x383E90u;
label_383e90:
    // 0x383e90: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x383e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x383e94: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x383E94u;
    {
        const bool branch_taken_0x383e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383e94) {
            ctx->pc = 0x383E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383e68;
        }
    }
    ctx->pc = 0x383E9Cu;
    // 0x383e9c: 0xc0e0fac  jal         func_383EB0
    ctx->pc = 0x383E9Cu;
    SET_GPR_U32(ctx, 31, 0x383EA4u);
    ctx->pc = 0x383EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383EB0u, 0x383E9Cu, 0x383EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383EA4u;
label_383ea4:
    // 0x383ea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x383ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_383ea8:
    // 0x383ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x383EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383EA8u;
        // 0x383eac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383EB0u;
}
