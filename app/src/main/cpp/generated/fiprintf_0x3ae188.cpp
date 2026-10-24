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

// Function: fiprintf
// Address: 0x3ae188 - 0x3ae1d0
void fiprintf_0x3ae188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fiprintf_0x3ae188");
#endif

    switch (ctx->pc) {
        case 0x3ae1c0u: goto label_3ae1c0;
        default: break;
    }

    ctx->pc = 0x3ae188u;

    // 0x3ae188: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3ae188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3ae18c: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x3ae18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
    // 0x3ae190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ae190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ae194: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3ae194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3ae198: 0xffa70058  sd          $a3, 0x58($sp)
    ctx->pc = 0x3ae198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
    // 0x3ae19c: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x3ae19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x3ae1a0: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x3ae1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x3ae1a4: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x3ae1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x3ae1a8: 0xffab0078  sd          $t3, 0x78($sp)
    ctx->pc = 0x3ae1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    // 0x3ae1ac: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x3ae1acu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3ae1b0: 0xe7ae0044  swc1        $f14, 0x44($sp)
    ctx->pc = 0x3ae1b0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3ae1b4: 0xe7b00048  swc1        $f16, 0x48($sp)
    ctx->pc = 0x3ae1b4u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3ae1b8: 0xc0eac56  jal         func_3AB158
    ctx->pc = 0x3AE1B8u;
    SET_GPR_U32(ctx, 31, 0x3AE1C0u);
    ctx->pc = 0x3AE1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE1B8u;
    // 0x3ae1bc: 0xe7b2004c  swc1        $f18, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB158u, 0x3AE1B8u, 0x3AE1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE1C0u;
label_3ae1c0:
    // 0x3ae1c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ae1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE1C4u;
        // 0x3ae1c8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE1CCu;
    // 0x3ae1cc: 0x0  nop
    ctx->pc = 0x3ae1ccu;
    // NOP
    ctx->pc = 0x3ae1d0u;
}
