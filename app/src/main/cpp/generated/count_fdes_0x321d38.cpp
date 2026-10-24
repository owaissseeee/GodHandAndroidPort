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

// Function: count_fdes
// Address: 0x321d38 - 0x321d80
void count_fdes_0x321d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("count_fdes_0x321d38");
#endif

    switch (ctx->pc) {
        case 0x321d50u: goto label_321d50;
        default: break;
    }

    ctx->pc = 0x321d38u;

    // 0x321d38: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x321d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x321d3c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x321D3Cu;
    {
        const bool branch_taken_0x321d3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x321D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D3Cu;
        // 0x321d40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d3c) {
            ctx->pc = 0x321D78u;
            goto label_321d78;
        }
    }
    ctx->pc = 0x321D44u;
    // 0x321d44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x321D44u;
    {
        const bool branch_taken_0x321d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D44u;
        // 0x321d48: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d44) {
            ctx->pc = 0x321D58u;
            goto label_321d58;
        }
    }
    ctx->pc = 0x321D4Cu;
    // 0x321d4c: 0x0  nop
    ctx->pc = 0x321d4cu;
    // NOP
label_321d50:
    // 0x321d50: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x321d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321d54: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x321d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_321d58:
    // 0x321d58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x321D58u;
    {
        const bool branch_taken_0x321d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D58u;
        // 0x321d5c: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d58) {
            ctx->pc = 0x321D68u;
            goto label_321d68;
        }
    }
    ctx->pc = 0x321D60u;
    // 0x321d60: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x321d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x321d64: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x321d64u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_321d68:
    // 0x321d68: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x321d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x321d6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x321d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x321d70: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x321D70u;
    {
        const bool branch_taken_0x321d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x321D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D70u;
        // 0x321d74: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d70) {
            ctx->pc = 0x321D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321d50;
        }
    }
    ctx->pc = 0x321D78u;
label_321d78:
    // 0x321d78: 0x3e00008  jr          $ra
    ctx->pc = 0x321D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D78u;
        // 0x321d7c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321D80u;
}
