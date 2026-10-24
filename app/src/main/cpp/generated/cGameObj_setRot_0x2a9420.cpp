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

// Function: cGameObj_setRot
// Address: 0x2a9420 - 0x2a9458
void cGameObj_setRot_0x2a9420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObj_setRot_0x2a9420");
#endif

    ctx->pc = 0x2a9420u;

    // 0x2a9420: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x2a9420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x2a9424: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A9424u;
    {
        const bool branch_taken_0x2a9424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2a9424) {
            ctx->pc = 0x2A9444u;
            goto label_2a9444;
        }
    }
    ctx->pc = 0x2A942Cu;
    // 0x2a942c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2a942cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9430: 0xe4800100  swc1        $f0, 0x100($a0)
    ctx->pc = 0x2a9430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 256), bits); }
    // 0x2a9434: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2a9434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9438: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a9438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a943c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2a943cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9440: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a9440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2a9444:
    // 0x2a9444: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A944Cu;
    // 0x2a944c: 0x0  nop
    ctx->pc = 0x2a944cu;
    // NOP
    // 0x2a9450: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a9450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a9454: 0x0  nop
    ctx->pc = 0x2a9454u;
    // NOP
    ctx->pc = 0x2a9458u;
}
