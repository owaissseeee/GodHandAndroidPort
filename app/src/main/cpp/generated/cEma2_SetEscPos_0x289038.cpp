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

// Function: cEma2_SetEscPos
// Address: 0x289038 - 0x289068
void cEma2_SetEscPos_0x289038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEma2_SetEscPos_0x289038");
#endif

    ctx->pc = 0x289038u;

    // 0x289038: 0x24821590  addiu       $v0, $a0, 0x1590
    ctx->pc = 0x289038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 5520));
    // 0x28903c: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28903Cu;
    {
        const bool branch_taken_0x28903c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x28903c) {
            ctx->pc = 0x28905Cu;
            goto label_28905c;
        }
    }
    ctx->pc = 0x289044u;
    // 0x289044: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x289044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289048: 0xe4801590  swc1        $f0, 0x1590($a0)
    ctx->pc = 0x289048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5520), bits); }
    // 0x28904c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x28904cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289050: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x289050u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x289054: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x289054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289058: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x289058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_28905c:
    // 0x28905c: 0x3e00008  jr          $ra
    ctx->pc = 0x28905Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28905Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289064u;
    // 0x289064: 0x0  nop
    ctx->pc = 0x289064u;
    // NOP
    ctx->pc = 0x289068u;
}
