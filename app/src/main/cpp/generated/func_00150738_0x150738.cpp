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

// Function: func_00150738
// Address: 0x150738 - 0x150778
void func_00150738_0x150738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00150738_0x150738");
#endif

    ctx->pc = 0x150738u;

    // 0x150738: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x150738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15073c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x15073cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150740: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x150740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x150744: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x150744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x150748: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x150748u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15074c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x15074cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x150750: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x150750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150754: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x150754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150758: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x150758u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15075c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x15075cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x150760: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x150760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150764: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x150764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150768: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x150768u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x15076c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x15076cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x150770: 0x3e00008  jr          $ra
    ctx->pc = 0x150770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150770u;
        // 0x150774: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150778u;
}
