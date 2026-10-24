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

// Function: func_0026EC60
// Address: 0x26ec60 - 0x26ecc0
void func_0026EC60_0x26ec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026EC60_0x26ec60");
#endif

    ctx->pc = 0x26ec60u;

    // 0x26ec60: 0x8c8517a0  lw          $a1, 0x17A0($a0)
    ctx->pc = 0x26ec60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6048)));
    // 0x26ec64: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x26EC64u;
    {
        const bool branch_taken_0x26ec64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ec64) {
            ctx->pc = 0x26ECB4u;
            goto label_26ecb4;
        }
    }
    ctx->pc = 0x26EC6Cu;
    // 0x26ec6c: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x26ec6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x26ec70: 0x94a202fe  lhu         $v0, 0x2FE($a1)
    ctx->pc = 0x26ec70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 766)));
    // 0x26ec74: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x26EC74u;
    {
        const bool branch_taken_0x26ec74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26ec74) {
            ctx->pc = 0x26ECB4u;
            goto label_26ecb4;
        }
    }
    ctx->pc = 0x26EC7Cu;
    // 0x26ec7c: 0x90a202f4  lbu         $v0, 0x2F4($a1)
    ctx->pc = 0x26ec7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 756)));
    // 0x26ec80: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26EC80u;
    {
        const bool branch_taken_0x26ec80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ec80) {
            ctx->pc = 0x26ECB4u;
            goto label_26ecb4;
        }
    }
    ctx->pc = 0x26EC88u;
    // 0x26ec88: 0xc4a1054c  lwc1        $f1, 0x54C($a1)
    ctx->pc = 0x26ec88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ec8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ec8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ec90: 0x0  nop
    ctx->pc = 0x26ec90u;
    // NOP
    // 0x26ec94: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26ec94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ec98: 0x0  nop
    ctx->pc = 0x26ec98u;
    // NOP
    // 0x26ec9c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x26EC9Cu;
    {
        const bool branch_taken_0x26ec9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26ECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EC9Cu;
        // 0x26eca0: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ec9c) {
            ctx->pc = 0x26ECB4u;
            goto label_26ecb4;
        }
    }
    ctx->pc = 0x26ECA4u;
    // 0x26eca4: 0xa0a002f7  sb          $zero, 0x2F7($a1)
    ctx->pc = 0x26eca4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x26eca8: 0xa0a202f5  sb          $v0, 0x2F5($a1)
    ctx->pc = 0x26eca8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x26ecac: 0xa0a002f4  sb          $zero, 0x2F4($a1)
    ctx->pc = 0x26ecacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x26ecb0: 0xa0a002f6  sb          $zero, 0x2F6($a1)
    ctx->pc = 0x26ecb0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 758), (uint8_t)GPR_U32(ctx, 0));
label_26ecb4:
    // 0x26ecb4: 0x3e00008  jr          $ra
    ctx->pc = 0x26ECB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26ECB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26ECBCu;
    // 0x26ecbc: 0x0  nop
    ctx->pc = 0x26ecbcu;
    // NOP
    ctx->pc = 0x26ecc0u;
}
