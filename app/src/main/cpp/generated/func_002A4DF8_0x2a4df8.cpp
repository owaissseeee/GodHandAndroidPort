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

// Function: func_002A4DF8
// Address: 0x2a4df8 - 0x2a4e58
void func_002A4DF8_0x2a4df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A4DF8_0x2a4df8");
#endif

    switch (ctx->pc) {
        case 0x2a4e0cu: goto label_2a4e0c;
        case 0x2a4e18u: goto label_2a4e18;
        case 0x2a4e44u: goto label_2a4e44;
        default: break;
    }

    ctx->pc = 0x2a4df8u;

    // 0x2a4df8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a4df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a4dfc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a4dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a4e00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a4e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a4e04: 0xc0a93b6  jal         func_2A4ED8
    ctx->pc = 0x2A4E04u;
    SET_GPR_U32(ctx, 31, 0x2A4E0Cu);
    ctx->pc = 0x2A4E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4E04u;
    // 0x2a4e08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4ED8u, 0x2A4E04u, 0x2A4E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E0Cu;
label_2a4e0c:
    // 0x2a4e0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a4e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4e10: 0xc0b84f6  jal         func_2E13D8
    ctx->pc = 0x2A4E10u;
    SET_GPR_U32(ctx, 31, 0x2A4E18u);
    ctx->pc = 0x2A4E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4E10u;
    // 0x2a4e14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E13D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E13D8u, 0x2A4E10u, 0x2A4E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E18u;
label_2a4e18:
    // 0x2a4e18: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2a4e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2a4e1c: 0x3c080045  lui         $t0, 0x45
    ctx->pc = 0x2a4e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)69 << 16));
    // 0x2a4e20: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2a4e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2a4e24: 0x2508acf0  addiu       $t0, $t0, -0x5310
    ctx->pc = 0x2a4e24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294946032));
    // 0x2a4e28: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2a4e28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a4e2c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2a4e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2a4e30: 0x8e09208c  lw          $t1, 0x208C($s0)
    ctx->pc = 0x2a4e30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8332)));
    // 0x2a4e34: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x2a4e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2a4e38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a4e38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4e3c: 0xc0b836a  jal         func_2E0DA8
    ctx->pc = 0x2A4E3Cu;
    SET_GPR_U32(ctx, 31, 0x2A4E44u);
    ctx->pc = 0x2A4E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4E3Cu;
    // 0x2a4e40: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DA8u, 0x2A4E3Cu, 0x2A4E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E44u;
label_2a4e44:
    // 0x2a4e44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a4e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4e48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a4e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4E4Cu;
        // 0x2a4e50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4E54u;
    // 0x2a4e54: 0x0  nop
    ctx->pc = 0x2a4e54u;
    // NOP
    ctx->pc = 0x2a4e58u;
}
