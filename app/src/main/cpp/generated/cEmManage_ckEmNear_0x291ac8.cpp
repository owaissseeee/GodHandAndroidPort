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

// Function: cEmManage_ckEmNear
// Address: 0x291ac8 - 0x291b90
void cEmManage_ckEmNear_0x291ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_ckEmNear_0x291ac8");
#endif

    switch (ctx->pc) {
        case 0x291b00u: goto label_291b00;
        case 0x291b38u: goto label_291b38;
        case 0x291b4cu: goto label_291b4c;
        default: break;
    }

    ctx->pc = 0x291ac8u;

    // 0x291ac8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x291ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x291acc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x291accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x291ad0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x291ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x291ad4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x291ad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291ad8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x291ad8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x291adc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x291adcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291ae0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x291ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x291ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291ae8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x291ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x291aec: 0x8c910500  lw          $s1, 0x500($a0)
    ctx->pc = 0x291aecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1280)));
    // 0x291af0: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x291AF0u;
    {
        const bool branch_taken_0x291af0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x291AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291AF0u;
        // 0x291af4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291af0) {
            ctx->pc = 0x291B6Cu;
            goto label_291b6c;
        }
    }
    ctx->pc = 0x291AF8u;
    // 0x291af8: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x291af8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x291afc: 0x0  nop
    ctx->pc = 0x291afcu;
    // NOP
label_291b00:
    // 0x291b00: 0x52000018  beql        $s0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x291B00u;
    {
        const bool branch_taken_0x291b00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x291b00) {
            ctx->pc = 0x291B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291B00u;
            // 0x291b04: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291B64u;
            goto label_291b64;
        }
    }
    ctx->pc = 0x291B08u;
    // 0x291b08: 0x52120016  beql        $s0, $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x291B08u;
    {
        const bool branch_taken_0x291b08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x291b08) {
            ctx->pc = 0x291B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291B08u;
            // 0x291b0c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291B64u;
            goto label_291b64;
        }
    }
    ctx->pc = 0x291B10u;
    // 0x291b10: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x291b10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x291b14: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x291b14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x291b18: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x291B18u;
    {
        const bool branch_taken_0x291b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291b18) {
            ctx->pc = 0x291B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291B18u;
            // 0x291b1c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291B64u;
            goto label_291b64;
        }
    }
    ctx->pc = 0x291B20u;
    // 0x291b20: 0x28620250  slti        $v0, $v1, 0x250
    ctx->pc = 0x291b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)592) ? 1 : 0);
    // 0x291b24: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x291b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x291b28: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x291B28u;
    {
        const bool branch_taken_0x291b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291b28) {
            ctx->pc = 0x291B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291B28u;
            // 0x291b2c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291B64u;
            goto label_291b64;
        }
    }
    ctx->pc = 0x291B30u;
    // 0x291b30: 0xc09bb30  jal         func_26ECC0
    ctx->pc = 0x291B30u;
    SET_GPR_U32(ctx, 31, 0x291B38u);
    ctx->pc = 0x291B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291B30u;
    // 0x291b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26ECC0u, 0x291B30u, 0x291B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291B38u;
label_291b38:
    // 0x291b38: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x291B38u;
    {
        const bool branch_taken_0x291b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291b38) {
            ctx->pc = 0x291B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291B38u;
            // 0x291b3c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291B64u;
            goto label_291b64;
        }
    }
    ctx->pc = 0x291B40u;
    // 0x291b40: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x291b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x291b44: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x291B44u;
    SET_GPR_U32(ctx, 31, 0x291B4Cu);
    ctx->pc = 0x291B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291B44u;
    // 0x291b48: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x291B44u, 0x291B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291B4Cu;
label_291b4c:
    // 0x291b4c: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x291b4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x291b50: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291b50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291b54: 0x0  nop
    ctx->pc = 0x291b54u;
    // NOP
    // 0x291b58: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x291B58u;
    {
        const bool branch_taken_0x291b58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x291B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B58u;
        // 0x291b5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291b58) {
            ctx->pc = 0x291B70u;
            goto label_291b70;
        }
    }
    ctx->pc = 0x291B60u;
    // 0x291b60: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x291b60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_291b64:
    // 0x291b64: 0x5620ffe6  bnel        $s1, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x291B64u;
    {
        const bool branch_taken_0x291b64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x291b64) {
            ctx->pc = 0x291B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291B64u;
            // 0x291b68: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291b00;
        }
    }
    ctx->pc = 0x291B6Cu;
label_291b6c:
    // 0x291b6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x291b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_291b70:
    // 0x291b70: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x291b70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x291b74: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x291b74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291b78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x291b78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291b7c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x291b7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291b80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291b84: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x291b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x291b88: 0x3e00008  jr          $ra
    ctx->pc = 0x291B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B88u;
        // 0x291b8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291B90u;
}
