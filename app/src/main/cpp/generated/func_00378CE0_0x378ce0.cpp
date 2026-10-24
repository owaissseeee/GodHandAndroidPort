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

// Function: func_00378CE0
// Address: 0x378ce0 - 0x378d18
void func_00378CE0_0x378ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00378CE0_0x378ce0");
#endif

    switch (ctx->pc) {
        case 0x378cf4u: goto label_378cf4;
        case 0x378cfcu: goto label_378cfc;
        case 0x378d04u: goto label_378d04;
        default: break;
    }

    ctx->pc = 0x378ce0u;

    // 0x378ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x378ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x378ce4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x378ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x378ce8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x378ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x378cec: 0xc0de2b8  jal         func_378AE0
    ctx->pc = 0x378CECu;
    SET_GPR_U32(ctx, 31, 0x378CF4u);
    ctx->pc = 0x378CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378CECu;
    // 0x378cf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378AE0u, 0x378CECu, 0x378CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378CF4u;
label_378cf4:
    // 0x378cf4: 0xc0dec38  jal         func_37B0E0
    ctx->pc = 0x378CF4u;
    SET_GPR_U32(ctx, 31, 0x378CFCu);
    ctx->pc = 0x378CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378CF4u;
    // 0x378cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0E0u, 0x378CF4u, 0x378CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378CFCu;
label_378cfc:
    // 0x378cfc: 0xc0de534  jal         func_3794D0
    ctx->pc = 0x378CFCu;
    SET_GPR_U32(ctx, 31, 0x378D04u);
    ctx->pc = 0x378D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378CFCu;
    // 0x378d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3794D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3794D0u, 0x378CFCu, 0x378D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378D04u;
label_378d04:
    // 0x378d04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x378d04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x378d08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x378d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x378D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378D0Cu;
        // 0x378d10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378D14u;
    // 0x378d14: 0x0  nop
    ctx->pc = 0x378d14u;
    // NOP
    ctx->pc = 0x378d18u;
}
