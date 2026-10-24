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

// Function: func_00368A28
// Address: 0x368a28 - 0x368aa0
void func_00368A28_0x368a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00368A28_0x368a28");
#endif

    ctx->pc = 0x368a28u;

    // 0x368a28: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x368a28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x368a2c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x368A2Cu;
    {
        const bool branch_taken_0x368a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368A2Cu;
        // 0x368a30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368a2c) {
            ctx->pc = 0x368A90u;
            goto label_368a90;
        }
    }
    ctx->pc = 0x368A34u;
    // 0x368a34: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x368a34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x368a38: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x368A38u;
    {
        const bool branch_taken_0x368a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368A38u;
        // 0x368a3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368a38) {
            ctx->pc = 0x368A90u;
            goto label_368a90;
        }
    }
    ctx->pc = 0x368A40u;
    // 0x368a40: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x368a40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x368a44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x368a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368a48: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x368A48u;
    {
        const bool branch_taken_0x368a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x368A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368A48u;
        // 0x368a4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368a48) {
            ctx->pc = 0x368A90u;
            goto label_368a90;
        }
    }
    ctx->pc = 0x368A50u;
    // 0x368a50: 0x90840003  lbu         $a0, 0x3($a0)
    ctx->pc = 0x368a50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x368a54: 0x240300ba  addiu       $v1, $zero, 0xBA
    ctx->pc = 0x368a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    // 0x368a58: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x368A58u;
    {
        const bool branch_taken_0x368a58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x368A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368A58u;
        // 0x368a5c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368a58) {
            ctx->pc = 0x368A90u;
            goto label_368a90;
        }
    }
    ctx->pc = 0x368A60u;
    // 0x368a60: 0x288200bb  slti        $v0, $a0, 0xBB
    ctx->pc = 0x368a60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)187) ? 1 : 0);
    // 0x368a64: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x368A64u;
    {
        const bool branch_taken_0x368a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x368a64) {
            ctx->pc = 0x368A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x368A64u;
            // 0x368a68: 0x240300bb  addiu       $v1, $zero, 0xBB (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
            ctx->in_delay_slot = false;
            ctx->pc = 0x368A78u;
            goto label_368a78;
        }
    }
    ctx->pc = 0x368A6Cu;
    // 0x368a6c: 0x240300b9  addiu       $v1, $zero, 0xB9
    ctx->pc = 0x368a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x368a70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x368A70u;
    {
        const bool branch_taken_0x368a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368A70u;
        // 0x368a74: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368a70) {
            ctx->pc = 0x368A7Cu;
            goto label_368a7c;
        }
    }
    ctx->pc = 0x368A78u;
label_368a78:
    // 0x368a78: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x368a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_368a7c:
    // 0x368a7c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x368A7Cu;
    {
        const bool branch_taken_0x368a7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x368A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368A7Cu;
        // 0x368a80: 0x2c8300bc  sltiu       $v1, $a0, 0xBC (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)188) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x368a7c) {
            ctx->pc = 0x368A90u;
            goto label_368a90;
        }
    }
    ctx->pc = 0x368A84u;
    // 0x368a84: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x368A84u;
    {
        const bool branch_taken_0x368a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x368A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368A84u;
        // 0x368a88: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368a84) {
            ctx->pc = 0x368A90u;
            goto label_368a90;
        }
    }
    ctx->pc = 0x368A8Cu;
    // 0x368a8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x368a8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_368a90:
    // 0x368a90: 0x3e00008  jr          $ra
    ctx->pc = 0x368A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368A98u;
    // 0x368a98: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x368a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x368a9c: 0x0  nop
    ctx->pc = 0x368a9cu;
    // NOP
    ctx->pc = 0x368aa0u;
}
