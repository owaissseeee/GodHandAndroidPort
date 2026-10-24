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

// Function: cEm00_setPosA
// Address: 0x1a9588 - 0x1a95f0
void cEm00_setPosA_0x1a9588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_setPosA_0x1a9588");
#endif

    switch (ctx->pc) {
        case 0x1a95e0u: goto label_1a95e0;
        default: break;
    }

    ctx->pc = 0x1a9588u;

    // 0x1a9588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a9588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a958c: 0x24830490  addiu       $v1, $a0, 0x490
    ctx->pc = 0x1a958cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
    // 0x1a9590: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A9590u;
    {
        const bool branch_taken_0x1a9590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A9594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9590u;
        // 0x1a9594: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9590) {
            ctx->pc = 0x1A95B0u;
            goto label_1a95b0;
        }
    }
    ctx->pc = 0x1A9598u;
    // 0x1a9598: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1a9598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a959c: 0xe4800490  swc1        $f0, 0x490($a0)
    ctx->pc = 0x1a959cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1168), bits); }
    // 0x1a95a0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1a95a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a95a4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1a95a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1a95a8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1a95a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a95ac: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1a95acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1a95b0:
    // 0x1a95b0: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x1a95b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1a95b4: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A95B4u;
    {
        const bool branch_taken_0x1a95b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a95b4) {
            ctx->pc = 0x1A95B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A95B4u;
            // 0x1a95b8: 0x8c8500f0  lw          $a1, 0xF0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A95D8u;
            goto label_1a95d8;
        }
    }
    ctx->pc = 0x1A95BCu;
    // 0x1a95bc: 0xc4800490  lwc1        $f0, 0x490($a0)
    ctx->pc = 0x1a95bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a95c0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1a95c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1a95c4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1a95c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a95c8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1a95c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1a95cc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1a95ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a95d0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1a95d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1a95d4: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x1a95d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1a95d8:
    // 0x1a95d8: 0xc06a484  jal         func_1A9210
    ctx->pc = 0x1A95D8u;
    SET_GPR_U32(ctx, 31, 0x1A95E0u);
    ctx->pc = 0x1A95DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A95D8u;
    // 0x1a95dc: 0x24860100  addiu       $a2, $a0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9210u, 0x1A95D8u, 0x1A95E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A95E0u;
label_1a95e0:
    // 0x1a95e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a95e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a95e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A95E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A95E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95E4u;
        // 0x1a95e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A95E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A95ECu;
    // 0x1a95ec: 0x0  nop
    ctx->pc = 0x1a95ecu;
    // NOP
    ctx->pc = 0x1a95f0u;
}
