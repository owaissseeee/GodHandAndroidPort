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

// Function: CopyVec3ToField20_173908
// Address: 0x173908 - 0x173938
void CopyVec3ToField20_173908_0x173908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyVec3ToField20_173908_0x173908");
#endif

    ctx->pc = 0x173908u;

    // 0x173908: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x173908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x17390c: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x17390Cu;
    {
        const bool branch_taken_0x17390c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x17390c) {
            ctx->pc = 0x17392Cu;
            goto label_17392c;
        }
    }
    ctx->pc = 0x173914u;
    // 0x173914: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x173914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173918: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x173918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x17391c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x17391cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173920: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x173920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x173924: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x173924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173928: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x173928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_17392c:
    // 0x17392c: 0x3e00008  jr          $ra
    ctx->pc = 0x17392Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17392Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173934u;
    // 0x173934: 0x0  nop
    ctx->pc = 0x173934u;
    // NOP
    ctx->pc = 0x173938u;
}
