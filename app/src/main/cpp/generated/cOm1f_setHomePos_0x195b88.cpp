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

// Function: cOm1f_setHomePos
// Address: 0x195b88 - 0x195bd0
void cOm1f_setHomePos_0x195b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm1f_setHomePos_0x195b88");
#endif

    ctx->pc = 0x195b88u;

    // 0x195b88: 0x24820b10  addiu       $v0, $a0, 0xB10
    ctx->pc = 0x195b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2832));
    // 0x195b8c: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x195B8Cu;
    {
        const bool branch_taken_0x195b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x195b8c) {
            ctx->pc = 0x195BACu;
            goto label_195bac;
        }
    }
    ctx->pc = 0x195B94u;
    // 0x195b94: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x195b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195b98: 0xe4800b10  swc1        $f0, 0xB10($a0)
    ctx->pc = 0x195b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2832), bits); }
    // 0x195b9c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x195b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195ba0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x195ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x195ba4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x195ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195ba8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x195ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_195bac:
    // 0x195bac: 0x3e00008  jr          $ra
    ctx->pc = 0x195BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195BB4u;
    // 0x195bb4: 0x0  nop
    ctx->pc = 0x195bb4u;
    // NOP
    // 0x195bb8: 0x0  nop
    ctx->pc = 0x195bb8u;
    // NOP
    // 0x195bbc: 0x0  nop
    ctx->pc = 0x195bbcu;
    // NOP
    // 0x195bc0: 0x0  nop
    ctx->pc = 0x195bc0u;
    // NOP
    // 0x195bc4: 0x0  nop
    ctx->pc = 0x195bc4u;
    // NOP
    // 0x195bc8: 0x0  nop
    ctx->pc = 0x195bc8u;
    // NOP
    // 0x195bcc: 0x0  nop
    ctx->pc = 0x195bccu;
    // NOP
    ctx->pc = 0x195bd0u;
}
