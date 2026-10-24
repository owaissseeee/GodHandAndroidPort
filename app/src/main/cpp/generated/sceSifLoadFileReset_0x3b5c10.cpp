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

// Function: sceSifLoadFileReset
// Address: 0x3b5c10 - 0x3b5c48
void sceSifLoadFileReset_0x3b5c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifLoadFileReset_0x3b5c10");
#endif

    switch (ctx->pc) {
        case 0x3b5c38u: goto label_3b5c38;
        default: break;
    }

    ctx->pc = 0x3b5c10u;

    // 0x3b5c10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b5c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b5c14: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3b5c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3b5c18: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3b5c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b5c1c: 0x3c040078  lui         $a0, 0x78
    ctx->pc = 0x3b5c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)120 << 16));
    // 0x3b5c20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b5c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b5c24: 0x24841ba8  addiu       $a0, $a0, 0x1BA8
    ctx->pc = 0x3b5c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7080));
    // 0x3b5c28: 0xac43aef8  sw          $v1, -0x5108($v0)
    ctx->pc = 0x3b5c28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FAEF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FAEF8u, _value); } while (0);
    // 0x3b5c2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b5c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5c30: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3B5C30u;
    SET_GPR_U32(ctx, 31, 0x3B5C38u);
    ctx->pc = 0x3B5C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5C30u;
    // 0x3b5c34: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3B5C30u, 0x3B5C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5C38u;
label_3b5c38:
    // 0x3b5c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b5c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b5c3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b5c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5c40: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5C40u;
        // 0x3b5c44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5C48u;
}
