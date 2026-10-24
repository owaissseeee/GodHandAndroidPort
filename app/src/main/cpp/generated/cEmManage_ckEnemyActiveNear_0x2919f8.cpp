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

// Function: cEmManage_ckEnemyActiveNear
// Address: 0x2919f8 - 0x291ac8
void cEmManage_ckEnemyActiveNear_0x2919f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_ckEnemyActiveNear_0x2919f8");
#endif

    switch (ctx->pc) {
        case 0x291a30u: goto label_291a30;
        case 0x291a80u: goto label_291a80;
        default: break;
    }

    ctx->pc = 0x2919f8u;

    // 0x2919f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2919f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2919fc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2919fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x291a00: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x291a00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x291a04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x291a04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291a08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x291a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x291a0c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x291a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x291a10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291a14: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x291a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x291a18: 0x8c900500  lw          $s0, 0x500($a0)
    ctx->pc = 0x291a18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1280)));
    // 0x291a1c: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x291A1Cu;
    {
        const bool branch_taken_0x291a1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x291A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A1Cu;
        // 0x291a20: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291a1c) {
            ctx->pc = 0x291AA0u;
            goto label_291aa0;
        }
    }
    ctx->pc = 0x291A24u;
    // 0x291a24: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x291a24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291a28: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x291a28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x291a2c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x291a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_291a30:
    // 0x291a30: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x291A30u;
    {
        const bool branch_taken_0x291a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x291a30) {
            ctx->pc = 0x291A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291A30u;
            // 0x291a34: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291A98u;
            goto label_291a98;
        }
    }
    ctx->pc = 0x291A38u;
    // 0x291a38: 0x946402fe  lhu         $a0, 0x2FE($v1)
    ctx->pc = 0x291a38u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
    // 0x291a3c: 0x288202a0  slti        $v0, $a0, 0x2A0
    ctx->pc = 0x291a3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)672) ? 1 : 0);
    // 0x291a40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x291A40u;
    {
        const bool branch_taken_0x291a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A40u;
        // 0x291a44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291a40) {
            ctx->pc = 0x291A50u;
            goto label_291a50;
        }
    }
    ctx->pc = 0x291A48u;
    // 0x291a48: 0x28820300  slti        $v0, $a0, 0x300
    ctx->pc = 0x291a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x291a4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x291a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_291a50:
    // 0x291a50: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x291a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x291a54: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x291A54u;
    {
        const bool branch_taken_0x291a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291a54) {
            ctx->pc = 0x291A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291A54u;
            // 0x291a58: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291A98u;
            goto label_291a98;
        }
    }
    ctx->pc = 0x291A5Cu;
    // 0x291a5c: 0x906202f4  lbu         $v0, 0x2F4($v1)
    ctx->pc = 0x291a5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 756)));
    // 0x291a60: 0x50530005  beql        $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x291A60u;
    {
        const bool branch_taken_0x291a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x291a60) {
            ctx->pc = 0x291A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291A60u;
            // 0x291a64: 0x8c6400f0  lw          $a0, 0xF0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291A78u;
            goto label_291a78;
        }
    }
    ctx->pc = 0x291A68u;
    // 0x291a68: 0x906202f5  lbu         $v0, 0x2F5($v1)
    ctx->pc = 0x291a68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 757)));
    // 0x291a6c: 0x5452000a  bnel        $v0, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x291A6Cu;
    {
        const bool branch_taken_0x291a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x291a6c) {
            ctx->pc = 0x291A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291A6Cu;
            // 0x291a70: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291A98u;
            goto label_291a98;
        }
    }
    ctx->pc = 0x291A74u;
    // 0x291a74: 0x8c6400f0  lw          $a0, 0xF0($v1)
    ctx->pc = 0x291a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_291a78:
    // 0x291a78: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x291A78u;
    SET_GPR_U32(ctx, 31, 0x291A80u);
    ctx->pc = 0x291A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291A78u;
    // 0x291a7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x291A78u, 0x291A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291A80u;
label_291a80:
    // 0x291a80: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x291a80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x291a84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291a84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291a88: 0x0  nop
    ctx->pc = 0x291a88u;
    // NOP
    // 0x291a8c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x291A8Cu;
    {
        const bool branch_taken_0x291a8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x291A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A8Cu;
        // 0x291a90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291a8c) {
            ctx->pc = 0x291AA4u;
            goto label_291aa4;
        }
    }
    ctx->pc = 0x291A94u;
    // 0x291a94: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x291a94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_291a98:
    // 0x291a98: 0x5600ffe5  bnel        $s0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x291A98u;
    {
        const bool branch_taken_0x291a98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x291a98) {
            ctx->pc = 0x291A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291A98u;
            // 0x291a9c: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291a30;
        }
    }
    ctx->pc = 0x291AA0u;
label_291aa0:
    // 0x291aa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x291aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_291aa4:
    // 0x291aa4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x291aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x291aa8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x291aa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291aac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x291aacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291ab0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x291ab0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291ab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291ab8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x291ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x291abc: 0x3e00008  jr          $ra
    ctx->pc = 0x291ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291ABCu;
        // 0x291ac0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291AC4u;
    // 0x291ac4: 0x0  nop
    ctx->pc = 0x291ac4u;
    // NOP
    ctx->pc = 0x291ac8u;
}
