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

// Function: func_002B8A30
// Address: 0x2b8a30 - 0x2b8a70
void func_002B8A30_0x2b8a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B8A30_0x2b8a30");
#endif

    ctx->pc = 0x2b8a30u;

    // 0x2b8a30: 0x2ca20009  sltiu       $v0, $a1, 0x9
    ctx->pc = 0x2b8a30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2b8a34: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B8A34u;
    {
        const bool branch_taken_0x2b8a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A34u;
        // 0x2b8a38: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8a34) {
            ctx->pc = 0x2B8A64u;
            goto label_2b8a64;
        }
    }
    ctx->pc = 0x2B8A3Cu;
    // 0x2b8a3c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2b8a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b8a40: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x2b8a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x2b8a44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b8a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b8a48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b8a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b8a4c: 0x800008  jr          $a0
    ctx->pc = 0x2B8A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B8A54u: goto label_2b8a54;
            case 0x2B8A5Cu: goto label_2b8a5c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8A4Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B8A54u;
label_2b8a54:
    // 0x2b8a54: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A54u;
        // 0x2b8a58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8A5Cu;
label_2b8a5c:
    // 0x2b8a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A5Cu;
        // 0x2b8a60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8A64u;
label_2b8a64:
    // 0x2b8a64: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A64u;
        // 0x2b8a68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8A6Cu;
    // 0x2b8a6c: 0x0  nop
    ctx->pc = 0x2b8a6cu;
    // NOP
    ctx->pc = 0x2b8a70u;
}
