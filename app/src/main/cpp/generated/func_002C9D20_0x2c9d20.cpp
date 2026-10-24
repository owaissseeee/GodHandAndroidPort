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

// Function: func_002C9D20
// Address: 0x2c9d20 - 0x2c9d58
void func_002C9D20_0x2c9d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C9D20_0x2c9d20");
#endif

    switch (ctx->pc) {
        case 0x2c9d34u: goto label_2c9d34;
        case 0x2c9d3cu: goto label_2c9d3c;
        case 0x2c9d44u: goto label_2c9d44;
        default: break;
    }

    ctx->pc = 0x2c9d20u;

    // 0x2c9d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c9d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c9d24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c9d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c9d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c9d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c9d2c: 0xc0b2756  jal         func_2C9D58
    ctx->pc = 0x2C9D2Cu;
    SET_GPR_U32(ctx, 31, 0x2C9D34u);
    ctx->pc = 0x2C9D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9D2Cu;
    // 0x2c9d30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9D58u, 0x2C9D2Cu, 0x2C9D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9D34u;
label_2c9d34:
    // 0x2c9d34: 0xc0b279e  jal         func_2C9E78
    ctx->pc = 0x2C9D34u;
    SET_GPR_U32(ctx, 31, 0x2C9D3Cu);
    ctx->pc = 0x2C9D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9D34u;
    // 0x2c9d38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E78u, 0x2C9D34u, 0x2C9D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9D3Cu;
label_2c9d3c:
    // 0x2c9d3c: 0xc0b27d6  jal         func_2C9F58
    ctx->pc = 0x2C9D3Cu;
    SET_GPR_U32(ctx, 31, 0x2C9D44u);
    ctx->pc = 0x2C9D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9D3Cu;
    // 0x2c9d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9F58u, 0x2C9D3Cu, 0x2C9D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9D44u;
label_2c9d44:
    // 0x2c9d44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c9d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9d48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c9d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9D4Cu;
        // 0x2c9d50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9D54u;
    // 0x2c9d54: 0x0  nop
    ctx->pc = 0x2c9d54u;
    // NOP
    ctx->pc = 0x2c9d58u;
}
