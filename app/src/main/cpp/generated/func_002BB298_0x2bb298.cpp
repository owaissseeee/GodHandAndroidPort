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

// Function: func_002BB298
// Address: 0x2bb298 - 0x2bb2d8
void func_002BB298_0x2bb298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BB298_0x2bb298");
#endif

    switch (ctx->pc) {
        case 0x2bb2c8u: goto label_2bb2c8;
        default: break;
    }

    ctx->pc = 0x2bb298u;

    // 0x2bb298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bb298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bb29c: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x2bb29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x2bb2a0: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BB2A0u;
    {
        const bool branch_taken_0x2bb2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2BB2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2A0u;
        // 0x2bb2a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb2a0) {
            ctx->pc = 0x2BB2C0u;
            goto label_2bb2c0;
        }
    }
    ctx->pc = 0x2BB2A8u;
    // 0x2bb2a8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2bb2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb2ac: 0xe4800060  swc1        $f0, 0x60($a0)
    ctx->pc = 0x2bb2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x2bb2b0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2bb2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb2b4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2bb2b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2bb2b8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2bb2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb2bc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2bb2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2bb2c0:
    // 0x2bb2c0: 0xc0aecb6  jal         func_2BB2D8
    ctx->pc = 0x2BB2C0u;
    SET_GPR_U32(ctx, 31, 0x2BB2C8u);
    ctx->pc = 0x2BB2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB2D8u, 0x2BB2C0u, 0x2BB2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB2C8u;
label_2bb2c8:
    // 0x2bb2c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bb2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2CCu;
        // 0x2bb2d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB2D4u;
    // 0x2bb2d4: 0x0  nop
    ctx->pc = 0x2bb2d4u;
    // NOP
    ctx->pc = 0x2bb2d8u;
}
