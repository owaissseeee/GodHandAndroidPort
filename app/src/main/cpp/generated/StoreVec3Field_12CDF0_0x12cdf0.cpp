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

// Function: StoreVec3Field_12CDF0
// Address: 0x12cdf0 - 0x12ce20
void StoreVec3Field_12CDF0_0x12cdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StoreVec3Field_12CDF0_0x12cdf0");
#endif

    ctx->pc = 0x12cdf0u;

    // 0x12cdf0: 0x24820650  addiu       $v0, $a0, 0x650
    ctx->pc = 0x12cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1616));
    // 0x12cdf4: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12CDF4u;
    {
        const bool branch_taken_0x12cdf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x12cdf4) {
            ctx->pc = 0x12CE14u;
            goto label_12ce14;
        }
    }
    ctx->pc = 0x12CDFCu;
    // 0x12cdfc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x12cdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ce00: 0xe4800650  swc1        $f0, 0x650($a0)
    ctx->pc = 0x12ce00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1616), bits); }
    // 0x12ce04: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x12ce04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ce08: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x12ce08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12ce0c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x12ce0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ce10: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12ce10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_12ce14:
    // 0x12ce14: 0x3e00008  jr          $ra
    ctx->pc = 0x12CE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CE14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CE1Cu;
    // 0x12ce1c: 0x0  nop
    ctx->pc = 0x12ce1cu;
    // NOP
    ctx->pc = 0x12ce20u;
}
