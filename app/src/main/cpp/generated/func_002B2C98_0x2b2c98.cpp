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

// Function: func_002B2C98
// Address: 0x2b2c98 - 0x2b2d08
void func_002B2C98_0x2b2c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B2C98_0x2b2c98");
#endif

    switch (ctx->pc) {
        case 0x2b2cc8u: goto label_2b2cc8;
        default: break;
    }

    ctx->pc = 0x2b2c98u;

    // 0x2b2c98: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2b2c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2b2c9c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2c9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b2ca0: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2b2ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x2b2ca4: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x2b2ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x2b2ca8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b2ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b2cac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b2cb0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2b2cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2b2cb4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2B2CB4u;
    {
        const bool branch_taken_0x2b2cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2CB4u;
        // 0x2b2cb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2cb4) {
            ctx->pc = 0x2B2CF4u;
            goto label_2b2cf4;
        }
    }
    ctx->pc = 0x2B2CBCu;
    // 0x2b2cbc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2b2cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2b2cc0: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x2B2CC0u;
    SET_GPR_U32(ctx, 31, 0x2B2CC8u);
    ctx->pc = 0x2B2CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2CC0u;
    // 0x2b2cc4: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x2B2CC0u, 0x2B2CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2CC8u;
label_2b2cc8:
    // 0x2b2cc8: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x2b2cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2b2ccc: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x2b2cccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2b2cd0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b2cd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b2cd4: 0x0  nop
    ctx->pc = 0x2b2cd4u;
    // NOP
    // 0x2b2cd8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b2cd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b2cdc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b2cdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b2ce0: 0x0  nop
    ctx->pc = 0x2b2ce0u;
    // NOP
    // 0x2b2ce4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B2CE4u;
    {
        const bool branch_taken_0x2b2ce4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B2CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2CE4u;
        // 0x2b2ce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ce4) {
            ctx->pc = 0x2B2CF8u;
            goto label_2b2cf8;
        }
    }
    ctx->pc = 0x2B2CECu;
    // 0x2b2cec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2CECu;
    {
        const bool branch_taken_0x2b2cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2CECu;
        // 0x2b2cf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2cec) {
            ctx->pc = 0x2B2CF8u;
            goto label_2b2cf8;
        }
    }
    ctx->pc = 0x2B2CF4u;
label_2b2cf4:
    // 0x2b2cf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b2cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2cf8:
    // 0x2b2cf8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b2cf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2cfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2d00: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2D00u;
        // 0x2b2d04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2D08u;
}
