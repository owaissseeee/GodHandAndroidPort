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

// Function: CopyVec3ToField40_173968
// Address: 0x173968 - 0x173998
void CopyVec3ToField40_173968_0x173968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyVec3ToField40_173968_0x173968");
#endif

    ctx->pc = 0x173968u;

    // 0x173968: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x173968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x17396c: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x17396Cu;
    {
        const bool branch_taken_0x17396c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x17396c) {
            ctx->pc = 0x17398Cu;
            goto label_17398c;
        }
    }
    ctx->pc = 0x173974u;
    // 0x173974: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x173974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173978: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x173978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x17397c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x17397cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173980: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x173980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x173984: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x173984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173988: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x173988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_17398c:
    // 0x17398c: 0x3e00008  jr          $ra
    ctx->pc = 0x17398Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17398Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173994u;
    // 0x173994: 0x0  nop
    ctx->pc = 0x173994u;
    // NOP
    ctx->pc = 0x173998u;
}
