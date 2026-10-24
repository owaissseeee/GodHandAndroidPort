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

// Function: cMovie_isIdle
// Address: 0x2b4e48 - 0x2b4ec8
void cMovie_isIdle_0x2b4e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMovie_isIdle_0x2b4e48");
#endif

    switch (ctx->pc) {
        case 0x2b4e5cu: goto label_2b4e5c;
        case 0x2b4e68u: goto label_2b4e68;
        default: break;
    }

    ctx->pc = 0x2b4e48u;

    // 0x2b4e48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b4e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b4e4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b4e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b4e50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4e54: 0xc0ad294  jal         func_2B4A50
    ctx->pc = 0x2B4E54u;
    SET_GPR_U32(ctx, 31, 0x2B4E5Cu);
    ctx->pc = 0x2B4E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4E54u;
    // 0x2b4e58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A50u, 0x2B4E54u, 0x2B4E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4E5Cu;
label_2b4e5c:
    // 0x2b4e5c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2b4e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b4e60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b4e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4e64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b4e64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4e68:
    // 0x2b4e68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b4e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b4e6c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B4E6Cu;
    {
        const bool branch_taken_0x2b4e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4E6Cu;
        // 0x2b4e70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4e6c) {
            ctx->pc = 0x2B4E78u;
            goto label_2b4e78;
        }
    }
    ctx->pc = 0x2B4E74u;
    // 0x2b4e74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b4e74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4e78:
    // 0x2b4e78: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4E78u;
    {
        const bool branch_taken_0x2b4e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2b4e78) {
            ctx->pc = 0x2B4E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4E78u;
            // 0x2b4e7c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4E88u;
            goto label_2b4e88;
        }
    }
    ctx->pc = 0x2B4E80u;
    // 0x2b4e80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4E80u;
    {
        const bool branch_taken_0x2b4e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4E80u;
        // 0x2b4e84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4e80) {
            ctx->pc = 0x2B4E98u;
            goto label_2b4e98;
        }
    }
    ctx->pc = 0x2B4E88u;
label_2b4e88:
    // 0x2b4e88: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2b4e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b4e8c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2B4E8Cu;
    {
        const bool branch_taken_0x2b4e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4E8Cu;
        // 0x2b4e90: 0x261000ac  addiu       $s0, $s0, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4e8c) {
            ctx->pc = 0x2B4E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4e68;
        }
    }
    ctx->pc = 0x2B4E94u;
    // 0x2b4e94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b4e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b4e98:
    // 0x2b4e98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b4e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4e9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4EA0u;
        // 0x2b4ea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4EA8u;
    // 0x2b4ea8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b4ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b4eac: 0x0  nop
    ctx->pc = 0x2b4eacu;
    // NOP
    // 0x2b4eb0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b4eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b4eb4: 0x0  nop
    ctx->pc = 0x2b4eb4u;
    // NOP
    // 0x2b4eb8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b4eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b4ebc: 0x0  nop
    ctx->pc = 0x2b4ebcu;
    // NOP
    // 0x2b4ec0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b4ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b4ec4: 0x0  nop
    ctx->pc = 0x2b4ec4u;
    // NOP
    ctx->pc = 0x2b4ec8u;
}
