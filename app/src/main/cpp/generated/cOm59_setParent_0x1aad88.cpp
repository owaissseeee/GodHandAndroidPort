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

// Function: cOm59_setParent
// Address: 0x1aad88 - 0x1aade0
void cOm59_setParent_0x1aad88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm59_setParent_0x1aad88");
#endif

    ctx->pc = 0x1aad88u;

    // 0x1aad88: 0x248209b0  addiu       $v0, $a0, 0x9B0
    ctx->pc = 0x1aad88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2480));
    // 0x1aad8c: 0xac8509a0  sw          $a1, 0x9A0($a0)
    ctx->pc = 0x1aad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2464), GPR_U32(ctx, 5));
    // 0x1aad90: 0x10470007  beq         $v0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AAD90u;
    {
        const bool branch_taken_0x1aad90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x1AAD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD90u;
        // 0x1aad94: 0xac8609a4  sw          $a2, 0x9A4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2468), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aad90) {
            ctx->pc = 0x1AADB0u;
            goto label_1aadb0;
        }
    }
    ctx->pc = 0x1AAD98u;
    // 0x1aad98: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1aad98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aad9c: 0xe48009b0  swc1        $f0, 0x9B0($a0)
    ctx->pc = 0x1aad9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2480), bits); }
    // 0x1aada0: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x1aada0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aada4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1aada4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1aada8: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x1aada8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aadac: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1aadacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1aadb0:
    // 0x1aadb0: 0x248209c0  addiu       $v0, $a0, 0x9C0
    ctx->pc = 0x1aadb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2496));
    // 0x1aadb4: 0x10480007  beq         $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AADB4u;
    {
        const bool branch_taken_0x1aadb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x1aadb4) {
            ctx->pc = 0x1AADD4u;
            goto label_1aadd4;
        }
    }
    ctx->pc = 0x1AADBCu;
    // 0x1aadbc: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1aadbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aadc0: 0xe48009c0  swc1        $f0, 0x9C0($a0)
    ctx->pc = 0x1aadc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2496), bits); }
    // 0x1aadc4: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x1aadc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aadc8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1aadc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1aadcc: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x1aadccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aadd0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1aadd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1aadd4:
    // 0x1aadd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AADD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AADD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AADDCu;
    // 0x1aaddc: 0x0  nop
    ctx->pc = 0x1aaddcu;
    // NOP
    ctx->pc = 0x1aade0u;
}
