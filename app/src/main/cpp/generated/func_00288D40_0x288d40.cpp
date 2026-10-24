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

// Function: func_00288D40
// Address: 0x288d40 - 0x288da0
void func_00288D40_0x288d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00288D40_0x288d40");
#endif

    switch (ctx->pc) {
        case 0x288d6cu: goto label_288d6c;
        default: break;
    }

    ctx->pc = 0x288d40u;

    // 0x288d40: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x288d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x288d44: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x288d44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x288d48: 0x8c437a80  lw          $v1, 0x7A80($v0)
    ctx->pc = 0x288d48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A80u));
    // 0x288d4c: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x288d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x288d50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x288d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x288d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x288d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x288d58: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x288d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x288d5c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x288D5Cu;
    {
        const bool branch_taken_0x288d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x288D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288D5Cu;
        // 0x288d60: 0x24507a80  addiu       $s0, $v0, 0x7A80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 31360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d5c) {
            ctx->pc = 0x288D88u;
            goto label_288d88;
        }
    }
    ctx->pc = 0x288D64u;
    // 0x288d64: 0xc0a9d12  jal         func_2A7448
    ctx->pc = 0x288D64u;
    SET_GPR_U32(ctx, 31, 0x288D6Cu);
    ctx->pc = 0x2A7448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7448u, 0x288D64u, 0x288D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288D6Cu;
label_288d6c:
    // 0x288d6c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x288D6Cu;
    {
        const bool branch_taken_0x288d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x288d6c) {
            ctx->pc = 0x288D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288D6Cu;
            // 0x288d70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288D8Cu;
            goto label_288d8c;
        }
    }
    ctx->pc = 0x288D74u;
    // 0x288d74: 0x8e02ffac  lw          $v0, -0x54($s0)
    ctx->pc = 0x288d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967212)));
    // 0x288d78: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x288d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x288d7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x288d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x288d80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x288D80u;
    {
        const bool branch_taken_0x288d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288D80u;
        // 0x288d84: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d80) {
            ctx->pc = 0x288D8Cu;
            goto label_288d8c;
        }
    }
    ctx->pc = 0x288D88u;
label_288d88:
    // 0x288d88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x288d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_288d8c:
    // 0x288d8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x288d8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288d90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288d94: 0x3e00008  jr          $ra
    ctx->pc = 0x288D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288D94u;
        // 0x288d98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288D9Cu;
    // 0x288d9c: 0x0  nop
    ctx->pc = 0x288d9cu;
    // NOP
    ctx->pc = 0x288da0u;
}
