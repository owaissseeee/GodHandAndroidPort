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

// Function: func_00348A08
// Address: 0x348a08 - 0x348a50
void func_00348A08_0x348a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00348A08_0x348a08");
#endif

    switch (ctx->pc) {
        case 0x348a38u: goto label_348a38;
        default: break;
    }

    ctx->pc = 0x348a08u;

    // 0x348a08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x348a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x348a0c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x348a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348a10: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x348a10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348a14: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x348a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348a18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x348a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x348a1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x348a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348a20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x348a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348a24: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x348a24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348a28: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x348a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x348a2c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x348a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x348a30: 0xc0cee84  jal         func_33BA10
    ctx->pc = 0x348A30u;
    SET_GPR_U32(ctx, 31, 0x348A38u);
    ctx->pc = 0x348A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348A30u;
    // 0x348a34: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BA10u, 0x348A30u, 0x348A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348A38u;
label_348a38:
    // 0x348a38: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x348a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x348a3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x348a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x348a40: 0xac500d84  sw          $s0, 0xD84($v0)
    ctx->pc = 0x348a40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x760D84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x760D84u, _value); } while (0);
    // 0x348a44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x348a44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348a48: 0x3e00008  jr          $ra
    ctx->pc = 0x348A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348A48u;
        // 0x348a4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348A50u;
}
