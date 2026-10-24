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

// Function: func_001CEC68
// Address: 0x1cec68 - 0x1ced40
void func_001CEC68_0x1cec68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CEC68_0x1cec68");
#endif

    switch (ctx->pc) {
        case 0x1cec84u: goto label_1cec84;
        default: break;
    }

    ctx->pc = 0x1cec68u;

    // 0x1cec68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cec68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cec6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cec6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cec70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cec70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cec74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cec74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cec78: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1cec78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1cec7c: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1CEC7Cu;
    SET_GPR_U32(ctx, 31, 0x1CEC84u);
    ctx->pc = 0x1CEC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEC7Cu;
    // 0x1cec80: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1CEC7Cu, 0x1CEC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC84u;
label_1cec84:
    // 0x1cec84: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1cec84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1cec88: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CEC88u;
    {
        const bool branch_taken_0x1cec88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC88u;
        // 0x1cec8c: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec88) {
            ctx->pc = 0x1CECA4u;
            goto label_1ceca4;
        }
    }
    ctx->pc = 0x1CEC90u;
    // 0x1cec90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cec90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cec94: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CEC94u;
    {
        const bool branch_taken_0x1cec94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cec94) {
            ctx->pc = 0x1CEC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEC94u;
            // 0x1cec98: 0xc6010674  lwc1        $f1, 0x674($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CECD8u;
            goto label_1cecd8;
        }
    }
    ctx->pc = 0x1CEC9Cu;
    // 0x1cec9c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1CEC9Cu;
    {
        const bool branch_taken_0x1cec9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC9Cu;
        // 0x1ceca0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec9c) {
            ctx->pc = 0x1CED30u;
            goto label_1ced30;
        }
    }
    ctx->pc = 0x1CECA4u;
label_1ceca4:
    // 0x1ceca4: 0x3c013c54  lui         $at, 0x3C54
    ctx->pc = 0x1ceca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15444 << 16));
    // 0x1ceca8: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1ceca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x1cecac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cecacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cecb0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1cecb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1cecb4: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x1cecb4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
    // 0x1cecb8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1cecb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1cecbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cecbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cecc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cecc4: 0xe6010630  swc1        $f1, 0x630($s0)
    ctx->pc = 0x1cecc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1584), bits); }
    // 0x1cecc8: 0xe6000660  swc1        $f0, 0x660($s0)
    ctx->pc = 0x1cecc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1632), bits); }
    // 0x1ceccc: 0xe6020674  swc1        $f2, 0x674($s0)
    ctx->pc = 0x1cecccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1652), bits); }
    // 0x1cecd0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1cecd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cecd4: 0xc6010674  lwc1        $f1, 0x674($s0)
    ctx->pc = 0x1cecd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cecd8:
    // 0x1cecd8: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1cecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1cecdc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1cecdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1cece0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1cece0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cece4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1cece4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1cece8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cece8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cecec: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1cececu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1cecf0: 0xc6010630  lwc1        $f1, 0x630($s0)
    ctx->pc = 0x1cecf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cecf4: 0xc6000660  lwc1        $f0, 0x660($s0)
    ctx->pc = 0x1cecf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cecf8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1cecf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1cecfc: 0xc6020674  lwc1        $f2, 0x674($s0)
    ctx->pc = 0x1cecfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ced00: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1ced00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1ced04: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1ced04u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1ced08: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1ced08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ced0c: 0xe6000660  swc1        $f0, 0x660($s0)
    ctx->pc = 0x1ced0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1632), bits); }
    // 0x1ced10: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1CED10u;
    {
        const bool branch_taken_0x1ced10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED10u;
        // 0x1ced14: 0xe6020674  swc1        $f2, 0x674($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1652), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ced10) {
            ctx->pc = 0x1CED2Cu;
            goto label_1ced2c;
        }
    }
    ctx->pc = 0x1CED18u;
    // 0x1ced18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ced18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ced1c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1ced1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ced20: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x1ced20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ced24: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1ced24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ced28: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1ced28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1ced2c:
    // 0x1ced2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ced2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ced30:
    // 0x1ced30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ced30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ced34: 0x3e00008  jr          $ra
    ctx->pc = 0x1CED34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED34u;
        // 0x1ced38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CED34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CED3Cu;
    // 0x1ced3c: 0x0  nop
    ctx->pc = 0x1ced3cu;
    // NOP
    ctx->pc = 0x1ced40u;
}
