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

// Function: cGame_setReleaseActiveHeap
// Address: 0x2a6c18 - 0x2a6c50
void cGame_setReleaseActiveHeap_0x2a6c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGame_setReleaseActiveHeap_0x2a6c18");
#endif

    switch (ctx->pc) {
        case 0x2a6c34u: goto label_2a6c34;
        default: break;
    }

    ctx->pc = 0x2a6c18u;

    // 0x2a6c18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a6c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a6c1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a6c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a6c20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a6c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a6c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a6c28: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2a6c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2a6c2c: 0xc0a4230  jal         func_2908C0
    ctx->pc = 0x2A6C2Cu;
    SET_GPR_U32(ctx, 31, 0x2A6C34u);
    ctx->pc = 0x2A6C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6C2Cu;
    // 0x2a6c30: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2908C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2908C0u, 0x2A6C2Cu, 0x2A6C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6C34u;
label_2a6c34:
    // 0x2a6c34: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2a6c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a6c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a6c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6c3c: 0xa60201b2  sh          $v0, 0x1B2($s0)
    ctx->pc = 0x2a6c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 434), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6c40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a6c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6c44: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C44u;
        // 0x2a6c48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6C4Cu;
    // 0x2a6c4c: 0x0  nop
    ctx->pc = 0x2a6c4cu;
    // NOP
    ctx->pc = 0x2a6c50u;
}
