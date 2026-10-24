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

// Function: func_00369F20
// Address: 0x369f20 - 0x369f70
void func_00369F20_0x369f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00369F20_0x369f20");
#endif

    switch (ctx->pc) {
        case 0x369f48u: goto label_369f48;
        case 0x369f58u: goto label_369f58;
        default: break;
    }

    ctx->pc = 0x369f20u;

    // 0x369f20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x369f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x369f24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x369f24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369f28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x369f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x369f2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x369f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369f30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x369f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x369f34: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x369F34u;
    {
        const bool branch_taken_0x369f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369F34u;
        // 0x369f38: 0x24440250  addiu       $a0, $v0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369f34) {
            ctx->pc = 0x369F50u;
            goto label_369f50;
        }
    }
    ctx->pc = 0x369F3Cu;
    // 0x369f3c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x369f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x369f40: 0xc0da7dc  jal         func_369F70
    ctx->pc = 0x369F40u;
    SET_GPR_U32(ctx, 31, 0x369F48u);
    ctx->pc = 0x369F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369F40u;
    // 0x369f44: 0x24841aa0  addiu       $a0, $a0, 0x1AA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369F70u, 0x369F40u, 0x369F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369F48u;
label_369f48:
    // 0x369f48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x369F48u;
    {
        const bool branch_taken_0x369f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369F48u;
        // 0x369f4c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369f48) {
            ctx->pc = 0x369F5Cu;
            goto label_369f5c;
        }
    }
    ctx->pc = 0x369F50u;
label_369f50:
    // 0x369f50: 0xc0da7dc  jal         func_369F70
    ctx->pc = 0x369F50u;
    SET_GPR_U32(ctx, 31, 0x369F58u);
    ctx->pc = 0x369F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369F70u, 0x369F50u, 0x369F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369F58u;
label_369f58:
    // 0x369f58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x369f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_369f5c:
    // 0x369f5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x369f5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369f60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x369f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x369f64: 0x3e00008  jr          $ra
    ctx->pc = 0x369F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369F64u;
        // 0x369f68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369F6Cu;
    // 0x369f6c: 0x0  nop
    ctx->pc = 0x369f6cu;
    // NOP
    ctx->pc = 0x369f70u;
}
