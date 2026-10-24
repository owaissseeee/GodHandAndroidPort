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

// Function: __ieee754_logf
// Address: 0x3a2bb0 - 0x3a2ed8
void ps2___ieee754_logf_0x3a2bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_logf_0x3a2bb0");
#endif

    ctx->pc = 0x3a2bb0u;

    // 0x3a2bb0: 0x44046000  mfc1        $a0, $f12
    ctx->pc = 0x3a2bb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3a2bb4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3a2bb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2bb8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x3a2bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x3a2bbc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a2bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a2bc0: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x3a2bc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3a2bc4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3A2BC4u;
    {
        const bool branch_taken_0x3a2bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2BC4u;
        // 0x3a2bc8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2bc4) {
            ctx->pc = 0x3A2C28u;
            goto label_3a2c28;
        }
    }
    ctx->pc = 0x3A2BCCu;
    // 0x3a2bcc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3a2bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3a2bd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a2bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a2bd4: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x3a2bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x3a2bd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A2BD8u;
    {
        const bool branch_taken_0x3a2bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2BD8u;
        // 0x3a2bdc: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2bd8) {
            ctx->pc = 0x3A2BE8u;
            goto label_3a2be8;
        }
    }
    ctx->pc = 0x3A2BE0u;
    // 0x3a2be0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2BE0u;
        // 0x3a2be4: 0xc440eb40  lwc1        $f0, -0x14C0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2BE8u;
label_3a2be8:
    // 0x3a2be8: 0x4e10009  bgez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A2BE8u;
    {
        const bool branch_taken_0x3a2be8 = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x3A2BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2BE8u;
        // 0x3a2bec: 0x2408ffe7  addiu       $t0, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2be8) {
            ctx->pc = 0x3A2C10u;
            goto label_3a2c10;
        }
    }
    ctx->pc = 0x3A2BF0u;
    // 0x3a2bf0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3a2bf0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2bf4: 0x46000041  sub.s       $f1, $f0, $f0
    ctx->pc = 0x3a2bf4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[0]);
    // 0x3a2bf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a2bf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2bfc: 0x0  nop
    ctx->pc = 0x3a2bfcu;
    // NOP
    // 0x3a2c00: 0x0  nop
    ctx->pc = 0x3a2c00u;
    // NOP
    // 0x3a2c04: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3a2c04u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x3a2c08: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2C10u;
label_3a2c10:
    // 0x3a2c10: 0x3c014c00  lui         $at, 0x4C00
    ctx->pc = 0x3a2c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19456 << 16));
    // 0x3a2c14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a2c14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2c18: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3a2c18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a2c1c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3a2c1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3a2c20: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3a2c20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3a2c24: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3a2c24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a2c28:
    // 0x3a2c28: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x3a2c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x3a2c2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a2c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a2c30: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x3a2c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3a2c34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A2C34u;
    {
        const bool branch_taken_0x3a2c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2C34u;
        // 0x3a2c38: 0x3c05007f  lui         $a1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2c34) {
            ctx->pc = 0x3A2C48u;
            goto label_3a2c48;
        }
    }
    ctx->pc = 0x3A2C3Cu;
    // 0x3a2c3c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3a2c3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a2c40: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2C40u;
        // 0x3a2c44: 0x46021000  add.s       $f0, $f2, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2C48u;
label_3a2c48:
    // 0x3a2c48: 0x735c3  sra         $a2, $a3, 23
    ctx->pc = 0x3a2c48u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 23));
    // 0x3a2c4c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x3a2c4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x3a2c50: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x3a2c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x3a2c54: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x3a2c54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x3a2c58: 0x3463fb20  ori         $v1, $v1, 0xFB20
    ctx->pc = 0x3a2c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64288);
    // 0x3a2c5c: 0x2502ff81  addiu       $v0, $t0, -0x7F
    ctx->pc = 0x3a2c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967169));
    // 0x3a2c60: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x3a2c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3a2c64: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x3a2c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x3a2c68: 0x464021  addu        $t0, $v0, $a2
    ctx->pc = 0x3a2c68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3a2c6c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3a2c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3a2c70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3a2c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3a2c74: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x3a2c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x3a2c78: 0xe22025  or          $a0, $a3, $v0
    ctx->pc = 0x3a2c78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3a2c7c: 0x31dc3  sra         $v1, $v1, 23
    ctx->pc = 0x3a2c7cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x3a2c80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a2c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a2c84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a2c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2c88: 0x24e2000f  addiu       $v0, $a3, 0xF
    ctx->pc = 0x3a2c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x3a2c8c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3a2c8cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a2c90: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x3a2c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x3a2c94: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x3a2c94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x3a2c98: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x3a2c98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3a2c9c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x3A2C9Cu;
    {
        const bool branch_taken_0x3a2c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2C9Cu;
        // 0x3a2ca0: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2c9c) {
            ctx->pc = 0x3A2D54u;
            goto label_3a2d54;
        }
    }
    ctx->pc = 0x3A2CA4u;
    // 0x3a2ca4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a2ca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2ca8: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x3a2ca8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a2cac: 0x0  nop
    ctx->pc = 0x3a2cacu;
    // NOP
    // 0x3a2cb0: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x3A2CB0u;
    {
        const bool branch_taken_0x3a2cb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a2cb0) {
            ctx->pc = 0x3A2CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2CB0u;
            // 0x3a2cb4: 0x460c6082  mul.s       $f2, $f12, $f12 (Delay Slot)
            ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2CF0u;
            goto label_3a2cf0;
        }
    }
    ctx->pc = 0x3A2CB8u;
    // 0x3a2cb8: 0x11000084  beqz        $t0, . + 4 + (0x84 << 2)
    ctx->pc = 0x3A2CB8u;
    {
        const bool branch_taken_0x3a2cb8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2cb8) {
            ctx->pc = 0x3A2ECCu;
            goto label_3a2ecc;
        }
    }
    ctx->pc = 0x3A2CC0u;
    // 0x3a2cc0: 0x44884800  mtc1        $t0, $f9
    ctx->pc = 0x3a2cc0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x3a2cc4: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x3a2cc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x3a2cc8: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x3a2cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x3a2ccc: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x3a2cccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x3a2cd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a2cd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a2cd4: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x3a2cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x3a2cd8: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x3a2cd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x3a2cdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a2cdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2ce0: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x3a2ce0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x3a2ce4: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x3a2ce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x3a2ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2CE8u;
        // 0x3a2cec: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2CF0u;
label_3a2cf0:
    // 0x3a2cf0: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x3a2cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x3a2cf4: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x3a2cf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x3a2cf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a2cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2cfc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3a2cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3a2d00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a2d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a2d04: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3a2d04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3a2d08: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3a2d08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3a2d0c: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A2D0Cu;
    {
        const bool branch_taken_0x3a2d0c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2D0Cu;
        // 0x3a2d10: 0x46011082  mul.s       $f2, $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2d0c) {
            ctx->pc = 0x3A2D1Cu;
            goto label_3a2d1c;
        }
    }
    ctx->pc = 0x3A2D14u;
    // 0x3a2d14: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2D14u;
        // 0x3a2d18: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2D1Cu;
label_3a2d1c:
    // 0x3a2d1c: 0x44884800  mtc1        $t0, $f9
    ctx->pc = 0x3a2d1cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x3a2d20: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x3a2d20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x3a2d24: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x3a2d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x3a2d28: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x3a2d28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x3a2d2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a2d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2d30: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x3a2d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x3a2d34: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x3a2d34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x3a2d38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a2d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a2d3c: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x3a2d3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x3a2d40: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x3a2d40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x3a2d44: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3a2d44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3a2d48: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x3a2d48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x3a2d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2D4Cu;
        // 0x3a2d50: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2D54u;
label_3a2d54:
    // 0x3a2d54: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3a2d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x3a2d58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a2d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2d5c: 0x3c03ffcf  lui         $v1, 0xFFCF
    ctx->pc = 0x3a2d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65487 << 16));
    // 0x3a2d60: 0x3c013e17  lui         $at, 0x3E17
    ctx->pc = 0x3a2d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15895 << 16));
    // 0x3a2d64: 0x34218897  ori         $at, $at, 0x8897
    ctx->pc = 0x3a2d64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34967);
    // 0x3a2d68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a2d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a2d6c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x3a2d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x3a2d70: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x3a2d70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x3a2d74: 0x3c013e3a  lui         $at, 0x3E3A
    ctx->pc = 0x3a2d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15930 << 16));
    // 0x3a2d78: 0x34213325  ori         $at, $at, 0x3325
    ctx->pc = 0x3a2d78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13093);
    // 0x3a2d7c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x3a2d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x3a2d80: 0x3c013e1c  lui         $at, 0x3E1C
    ctx->pc = 0x3a2d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15900 << 16));
    // 0x3a2d84: 0x3421d04f  ori         $at, $at, 0xD04F
    ctx->pc = 0x3a2d84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53327);
    // 0x3a2d88: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a2d88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a2d8c: 0x34635c30  ori         $v1, $v1, 0x5C30
    ctx->pc = 0x3a2d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23600);
    // 0x3a2d90: 0x3c013e63  lui         $at, 0x3E63
    ctx->pc = 0x3a2d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15971 << 16));
    // 0x3a2d94: 0x34218e29  ori         $at, $at, 0x8E29
    ctx->pc = 0x3a2d94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36393);
    // 0x3a2d98: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3a2d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3a2d9c: 0x3442c288  ori         $v0, $v0, 0xC288
    ctx->pc = 0x3a2d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49800);
    // 0x3a2da0: 0x0  nop
    ctx->pc = 0x3a2da0u;
    // NOP
    // 0x3a2da4: 0x0  nop
    ctx->pc = 0x3a2da4u;
    // NOP
    // 0x3a2da8: 0x46006283  div.s       $f10, $f12, $f0
    ctx->pc = 0x3a2da8u;
    ctx->f[10] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[0]);
    // 0x3a2dac: 0x3c013e92  lui         $at, 0x3E92
    ctx->pc = 0x3a2dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16018 << 16));
    // 0x3a2db0: 0x34214925  ori         $at, $at, 0x4925
    ctx->pc = 0x3a2db0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18725);
    // 0x3a2db4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x3a2db4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3a2db8: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x3a2db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x3a2dbc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3a2dbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3a2dc0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x3a2dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3a2dc4: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x3a2dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3a2dc8: 0x3c013f2a  lui         $at, 0x3F2A
    ctx->pc = 0x3a2dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16170 << 16));
    // 0x3a2dcc: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x3a2dccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x3a2dd0: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x3a2dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x3a2dd4: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x3a2dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3a2dd8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a2dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a2ddc: 0x44884800  mtc1        $t0, $f9
    ctx->pc = 0x3a2ddcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x3a2de0: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x3a2de0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x3a2de4: 0x460a50c2  mul.s       $f3, $f10, $f10
    ctx->pc = 0x3a2de4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x3a2de8: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x3a2de8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x3a2dec: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3a2decu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a2df0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x3a2df0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3a2df4: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x3a2df4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x3a2df8: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x3a2df8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x3a2dfc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3a2dfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a2e00: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x3a2e00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3a2e04: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x3a2e04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x3a2e08: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x3a2e08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x3a2e0c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3a2e0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a2e10: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3a2e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3a2e14: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x3a2e14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x3a2e18: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x3a2e18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3a2e1c: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3A2E1Cu;
    {
        const bool branch_taken_0x3a2e1c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x3A2E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2E1Cu;
        // 0x3a2e20: 0x46001880  add.s       $f2, $f3, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2e1c) {
            ctx->pc = 0x3A2E88u;
            goto label_3a2e88;
        }
    }
    ctx->pc = 0x3A2E24u;
    // 0x3a2e24: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3a2e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3a2e28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a2e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2e2c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3a2e2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3a2e30: 0x15000006  bnez        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A2E30u;
    {
        const bool branch_taken_0x3a2e30 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2E30u;
        // 0x3a2e34: 0x460c0102  mul.s       $f4, $f0, $f12 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2e30) {
            ctx->pc = 0x3A2E4Cu;
            goto label_3a2e4c;
        }
    }
    ctx->pc = 0x3A2E38u;
    // 0x3a2e38: 0x46022000  add.s       $f0, $f4, $f2
    ctx->pc = 0x3a2e38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x3a2e3c: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x3a2e3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x3a2e40: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x3a2e40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x3a2e44: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2E44u;
        // 0x3a2e48: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2E4Cu;
label_3a2e4c:
    // 0x3a2e4c: 0x46022000  add.s       $f0, $f4, $f2
    ctx->pc = 0x3a2e4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x3a2e50: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x3a2e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x3a2e54: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x3a2e54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x3a2e58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a2e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a2e5c: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x3a2e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x3a2e60: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x3a2e60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x3a2e64: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a2e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a2e68: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x3a2e68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x3a2e6c: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x3a2e6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x3a2e70: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x3a2e70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x3a2e74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3a2e74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3a2e78: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x3a2e78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x3a2e7c: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x3a2e7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x3a2e80: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2E80u;
        // 0x3a2e84: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2E88u;
label_3a2e88:
    // 0x3a2e88: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A2E88u;
    {
        const bool branch_taken_0x3a2e88 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2E88u;
        // 0x3a2e8c: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2e88) {
            ctx->pc = 0x3A2E9Cu;
            goto label_3a2e9c;
        }
    }
    ctx->pc = 0x3A2E90u;
    // 0x3a2e90: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x3a2e90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x3a2e94: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2E94u;
        // 0x3a2e98: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2E9Cu;
label_3a2e9c:
    // 0x3a2e9c: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x3a2e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x3a2ea0: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x3a2ea0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x3a2ea4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a2ea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a2ea8: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x3a2ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x3a2eac: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x3a2eacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x3a2eb0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a2eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a2eb4: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x3a2eb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x3a2eb8: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x3a2eb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x3a2ebc: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x3a2ebcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x3a2ec0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3a2ec0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3a2ec4: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x3a2ec4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x3a2ec8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3a2ec8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3a2ecc:
    // 0x3a2ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2ED4u;
    // 0x3a2ed4: 0x0  nop
    ctx->pc = 0x3a2ed4u;
    // NOP
    ctx->pc = 0x3a2ed8u;
}
