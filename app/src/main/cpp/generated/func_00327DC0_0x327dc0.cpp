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

// Function: func_00327DC0
// Address: 0x327dc0 - 0x327e18
void func_00327DC0_0x327dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00327DC0_0x327dc0");
#endif

    switch (ctx->pc) {
        case 0x327ddcu: goto label_327ddc;
        case 0x327de4u: goto label_327de4;
        default: break;
    }

    ctx->pc = 0x327dc0u;

    // 0x327dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x327dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x327dc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327dc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x327dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327dcc: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x327DCCu;
    {
        const bool branch_taken_0x327dcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x327DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DCCu;
        // 0x327dd0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327dcc) {
            ctx->pc = 0x327E08u;
            goto label_327e08;
        }
    }
    ctx->pc = 0x327DD4u;
    // 0x327dd4: 0xc0ca0da  jal         func_328368
    ctx->pc = 0x327DD4u;
    SET_GPR_U32(ctx, 31, 0x327DDCu);
    ctx->pc = 0x328368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328368u, 0x327DD4u, 0x327DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327DDCu;
label_327ddc:
    // 0x327ddc: 0xc0ca006  jal         func_328018
    ctx->pc = 0x327DDCu;
    SET_GPR_U32(ctx, 31, 0x327DE4u);
    ctx->pc = 0x327DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327DDCu;
    // 0x327de0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328018u, 0x327DDCu, 0x327DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327DE4u;
label_327de4:
    // 0x327de4: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x327de4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x327de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x327de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327dec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327decu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327df0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x327df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x327df4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x327df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327df8: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x327df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x327dfc: 0x80e94bc  j           func_3A52F0
    ctx->pc = 0x327DFCu;
    ctx->pc = 0x327E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327DFCu;
    // 0x327e00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x327DFCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x327E04u;
    // 0x327e04: 0x0  nop
    ctx->pc = 0x327e04u;
    // NOP
label_327e08:
    // 0x327e08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327e08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327e0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x327e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x327e10: 0x3e00008  jr          $ra
    ctx->pc = 0x327E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E10u;
        // 0x327e14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327E18u;
}
