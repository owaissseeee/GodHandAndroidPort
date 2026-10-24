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

// Function: func_001CCA08
// Address: 0x1cca08 - 0x1ccde0
void func_001CCA08_0x1cca08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CCA08_0x1cca08");
#endif

    switch (ctx->pc) {
        case 0x1cca30u: goto label_1cca30;
        case 0x1ccb94u: goto label_1ccb94;
        case 0x1ccbf4u: goto label_1ccbf4;
        case 0x1ccc38u: goto label_1ccc38;
        case 0x1ccc74u: goto label_1ccc74;
        case 0x1ccc80u: goto label_1ccc80;
        case 0x1ccc94u: goto label_1ccc94;
        case 0x1cccb4u: goto label_1cccb4;
        case 0x1cccf0u: goto label_1cccf0;
        case 0x1ccdc0u: goto label_1ccdc0;
        default: break;
    }

    ctx->pc = 0x1cca08u;

    // 0x1cca08: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1cca08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1cca0c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1cca0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1cca10: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1cca10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1cca14: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x1cca14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x1cca18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cca18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cca1c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1cca1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1cca20: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1cca20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1cca24: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1cca24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1cca28: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1CCA28u;
    SET_GPR_U32(ctx, 31, 0x1CCA30u);
    ctx->pc = 0x1CCA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCA28u;
    // 0x1cca2c: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1CCA28u, 0x1CCA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCA30u;
label_1cca30:
    // 0x1cca30: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1cca30u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1cca34: 0x8e320690  lw          $s2, 0x690($s1)
    ctx->pc = 0x1cca34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x1cca38: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x1cca38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cca3c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1cca3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cca40: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1cca40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1cca44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cca44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cca48: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CCA48u;
    {
        const bool branch_taken_0x1cca48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA48u;
        // 0x1cca4c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca48) {
            ctx->pc = 0x1CCAB0u;
            goto label_1ccab0;
        }
    }
    ctx->pc = 0x1CCA50u;
    // 0x1cca50: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CCA50u;
    {
        const bool branch_taken_0x1cca50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cca50) {
            ctx->pc = 0x1CCA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCA50u;
            // 0x1cca54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCA68u;
            goto label_1cca68;
        }
    }
    ctx->pc = 0x1CCA58u;
    // 0x1cca58: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CCA58u;
    {
        const bool branch_taken_0x1cca58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA58u;
        // 0x1cca5c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca58) {
            ctx->pc = 0x1CCA80u;
            goto label_1cca80;
        }
    }
    ctx->pc = 0x1CCA60u;
    // 0x1cca60: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x1CCA60u;
    {
        const bool branch_taken_0x1cca60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA60u;
        // 0x1cca64: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca60) {
            ctx->pc = 0x1CCDC8u;
            goto label_1ccdc8;
        }
    }
    ctx->pc = 0x1CCA68u;
label_1cca68:
    // 0x1cca68: 0x1062004c  beq         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1CCA68u;
    {
        const bool branch_taken_0x1cca68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA68u;
        // 0x1cca6c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca68) {
            ctx->pc = 0x1CCB9Cu;
            goto label_1ccb9c;
        }
    }
    ctx->pc = 0x1CCA70u;
    // 0x1cca70: 0x1062007e  beq         $v1, $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x1CCA70u;
    {
        const bool branch_taken_0x1cca70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cca70) {
            ctx->pc = 0x1CCC6Cu;
            goto label_1ccc6c;
        }
    }
    ctx->pc = 0x1CCA78u;
    // 0x1cca78: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x1CCA78u;
    {
        const bool branch_taken_0x1cca78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA78u;
        // 0x1cca7c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca78) {
            ctx->pc = 0x1CCDC4u;
            goto label_1ccdc4;
        }
    }
    ctx->pc = 0x1CCA80u;
label_1cca80:
    // 0x1cca80: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1cca80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1cca84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cca84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cca88: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x1cca88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x1cca8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cca8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cca90: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1cca90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x1cca94: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1cca94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1cca98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cca98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cca9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ccaa0: 0xa2230531  sb          $v1, 0x531($s1)
    ctx->pc = 0x1ccaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1329), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ccaa4: 0xe6200674  swc1        $f0, 0x674($s1)
    ctx->pc = 0x1ccaa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
    // 0x1ccaa8: 0xe6210678  swc1        $f1, 0x678($s1)
    ctx->pc = 0x1ccaa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1656), bits); }
    // 0x1ccaac: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1ccaacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1ccab0:
    // 0x1ccab0: 0x52400030  beql        $s2, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x1CCAB0u;
    {
        const bool branch_taken_0x1ccab0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccab0) {
            ctx->pc = 0x1CCAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCAB0u;
            // 0x1ccab4: 0xc6200674  lwc1        $f0, 0x674($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCB74u;
            goto label_1ccb74;
        }
    }
    ctx->pc = 0x1CCAB8u;
    // 0x1ccab8: 0xc6210678  lwc1        $f1, 0x678($s1)
    ctx->pc = 0x1ccab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ccabc: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1ccabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ccac0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1ccac0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1ccac4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1ccac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1ccac8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ccac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ccacc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1ccaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccad0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ccad0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ccad4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1ccad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1ccad8: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1ccad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1ccadc: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1ccadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ccae0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1ccae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccae4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1ccae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ccae8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1ccae8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1ccaec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ccaecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ccaf0: 0x0  nop
    ctx->pc = 0x1ccaf0u;
    // NOP
    // 0x1ccaf4: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1CCAF4u;
    {
        const bool branch_taken_0x1ccaf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CCAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAF4u;
        // 0x1ccaf8: 0xc6210678  lwc1        $f1, 0x678($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccaf4) {
            ctx->pc = 0x1CCB38u;
            goto label_1ccb38;
        }
    }
    ctx->pc = 0x1CCAFCu;
    // 0x1ccafc: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1ccafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1ccb00: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ccb00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ccb04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ccb04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccb08: 0x0  nop
    ctx->pc = 0x1ccb08u;
    // NOP
    // 0x1ccb0c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1ccb0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1ccb10: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1ccb10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ccb14: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ccb14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ccb18: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1ccb18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ccb1c: 0x0  nop
    ctx->pc = 0x1ccb1cu;
    // NOP
    // 0x1ccb20: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1CCB20u;
    {
        const bool branch_taken_0x1ccb20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CCB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB20u;
        // 0x1ccb24: 0xe6210678  swc1        $f1, 0x678($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1656), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb20) {
            ctx->pc = 0x1CCB70u;
            goto label_1ccb70;
        }
    }
    ctx->pc = 0x1CCB28u;
    // 0x1ccb28: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1ccb28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1ccb2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ccb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ccb30: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1CCB30u;
    {
        const bool branch_taken_0x1ccb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB30u;
        // 0x1ccb34: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb30) {
            ctx->pc = 0x1CCB70u;
            goto label_1ccb70;
        }
    }
    ctx->pc = 0x1CCB38u;
label_1ccb38:
    // 0x1ccb38: 0x3c013b03  lui         $at, 0x3B03
    ctx->pc = 0x1ccb38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15107 << 16));
    // 0x1ccb3c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1ccb3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1ccb40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ccb40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccb44: 0x0  nop
    ctx->pc = 0x1ccb44u;
    // NOP
    // 0x1ccb48: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1ccb48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1ccb4c: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1ccb4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x1ccb50: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ccb50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1ccb54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ccb54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ccb58: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ccb58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ccb5c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1ccb5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ccb60: 0x0  nop
    ctx->pc = 0x1ccb60u;
    // NOP
    // 0x1ccb64: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1CCB64u;
    {
        const bool branch_taken_0x1ccb64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CCB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB64u;
        // 0x1ccb68: 0xe6210678  swc1        $f1, 0x678($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1656), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb64) {
            ctx->pc = 0x1CCB70u;
            goto label_1ccb70;
        }
    }
    ctx->pc = 0x1CCB6Cu;
    // 0x1ccb6c: 0xe6220678  swc1        $f2, 0x678($s1)
    ctx->pc = 0x1ccb6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1656), bits); }
label_1ccb70:
    // 0x1ccb70: 0xc6200674  lwc1        $f0, 0x674($s1)
    ctx->pc = 0x1ccb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ccb74:
    // 0x1ccb74: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ccb74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccb78: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1ccb78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1ccb7c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ccb7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ccb80: 0x0  nop
    ctx->pc = 0x1ccb80u;
    // NOP
    // 0x1ccb84: 0x4500008e  bc1f        . + 4 + (0x8E << 2)
    ctx->pc = 0x1CCB84u;
    {
        const bool branch_taken_0x1ccb84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CCB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB84u;
        // 0x1ccb88: 0xe6200674  swc1        $f0, 0x674($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb84) {
            ctx->pc = 0x1CCDC0u;
            goto label_1ccdc0;
        }
    }
    ctx->pc = 0x1CCB8Cu;
    // 0x1ccb8c: 0xc074206  jal         func_1D0818
    ctx->pc = 0x1CCB8Cu;
    SET_GPR_U32(ctx, 31, 0x1CCB94u);
    ctx->pc = 0x1CCB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCB8Cu;
    // 0x1ccb90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0818u, 0x1CCB8Cu, 0x1CCB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCB94u;
label_1ccb94:
    // 0x1ccb94: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x1CCB94u;
    {
        const bool branch_taken_0x1ccb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB94u;
        // 0x1ccb98: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb94) {
            ctx->pc = 0x1CCDC4u;
            goto label_1ccdc4;
        }
    }
    ctx->pc = 0x1CCB9Cu;
label_1ccb9c:
    // 0x1ccb9c: 0x52400028  beql        $s2, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x1CCB9Cu;
    {
        const bool branch_taken_0x1ccb9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccb9c) {
            ctx->pc = 0x1CCBA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCB9Cu;
            // 0x1ccba0: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCC40u;
            goto label_1ccc40;
        }
    }
    ctx->pc = 0x1CCBA4u;
    // 0x1ccba4: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x1ccba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ccba8: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x1ccba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ccbac: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x1ccbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1ccbb0: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x1ccbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ccbb4: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1ccbb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ccbb8: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1ccbb8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ccbbc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1ccbbcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ccbc0: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1ccbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ccbc4: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1ccbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ccbc8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1ccbc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ccbcc: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1ccbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ccbd0: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1ccbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ccbd4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1ccbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccbd8: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x1ccbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ccbdc: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x1ccbdcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
    // 0x1ccbe0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1ccbe0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1ccbe4: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x1ccbe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1ccbe8: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x1ccbe8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1ccbec: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x1CCBECu;
    SET_GPR_U32(ctx, 31, 0x1CCBF4u);
    ctx->pc = 0x1CCBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCBECu;
    // 0x1ccbf0: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1CCBECu, 0x1CCBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCBF4u;
label_1ccbf4:
    // 0x1ccbf4: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x1ccbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ccbf8: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1ccbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ccbfc: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1ccbfcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1ccc00: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x1ccc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ccc04: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1ccc04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1ccc08: 0xe6200694  swc1        $f0, 0x694($s1)
    ctx->pc = 0x1ccc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1684), bits); }
    // 0x1ccc0c: 0xe62306a4  swc1        $f3, 0x6A4($s1)
    ctx->pc = 0x1ccc0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1700), bits); }
    // 0x1ccc10: 0x46011300  add.s       $f12, $f2, $f1
    ctx->pc = 0x1ccc10u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1ccc14: 0x0  nop
    ctx->pc = 0x1ccc14u;
    // NOP
    // 0x1ccc18: 0x0  nop
    ctx->pc = 0x1ccc18u;
    // NOP
    // 0x1ccc1c: 0x460c0004  c1          0xC0004
    ctx->pc = 0x1ccc1cu;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x1ccc20: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x1ccc20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ccc24: 0x0  nop
    ctx->pc = 0x1ccc24u;
    // NOP
    // 0x1ccc28: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1CCC28u;
    {
        const bool branch_taken_0x1ccc28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CCC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC28u;
        // 0x1ccc2c: 0xae2006a0  sw          $zero, 0x6A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1696), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc28) {
            ctx->pc = 0x1CCC38u;
            goto label_1ccc38;
        }
    }
    ctx->pc = 0x1CCC30u;
    // 0x1ccc30: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x1CCC30u;
    SET_GPR_U32(ctx, 31, 0x1CCC38u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x1CCC30u, 0x1CCC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC38u;
label_1ccc38:
    // 0x1ccc38: 0xe62006a8  swc1        $f0, 0x6A8($s1)
    ctx->pc = 0x1ccc38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1704), bits); }
    // 0x1ccc3c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1ccc3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_1ccc40:
    // 0x1ccc40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ccc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ccc44: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x1ccc44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x1ccc48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ccc48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccc4c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1ccc4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1ccc50: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1ccc50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x1ccc54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ccc54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccc58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ccc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ccc5c: 0xa2230531  sb          $v1, 0x531($s1)
    ctx->pc = 0x1ccc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1329), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ccc60: 0xe6200674  swc1        $f0, 0x674($s1)
    ctx->pc = 0x1ccc60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
    // 0x1ccc64: 0xe6210678  swc1        $f1, 0x678($s1)
    ctx->pc = 0x1ccc64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1656), bits); }
    // 0x1ccc68: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1ccc68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1ccc6c:
    // 0x1ccc6c: 0xc0a52a2  jal         func_294A88
    ctx->pc = 0x1CCC6Cu;
    SET_GPR_U32(ctx, 31, 0x1CCC74u);
    ctx->pc = 0x1CCC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCC6Cu;
    // 0x1ccc70: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294A88u, 0x1CCC6Cu, 0x1CCC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC74u;
label_1ccc74:
    // 0x1ccc74: 0xc62c0694  lwc1        $f12, 0x694($s1)
    ctx->pc = 0x1ccc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ccc78: 0xc051e62  jal         func_147988
    ctx->pc = 0x1CCC78u;
    SET_GPR_U32(ctx, 31, 0x1CCC80u);
    ctx->pc = 0x1CCC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCC78u;
    // 0x1ccc7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x1CCC78u, 0x1CCC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC80u;
label_1ccc80:
    // 0x1ccc80: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CCC80u;
    {
        const bool branch_taken_0x1ccc80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC80u;
        // 0x1ccc84: 0x27b00070  addiu       $s0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc80) {
            ctx->pc = 0x1CCC98u;
            goto label_1ccc98;
        }
    }
    ctx->pc = 0x1CCC88u;
    // 0x1ccc88: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x1ccc88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1ccc8c: 0xc051f10  jal         func_147C40
    ctx->pc = 0x1CCC8Cu;
    SET_GPR_U32(ctx, 31, 0x1CCC94u);
    ctx->pc = 0x1CCC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCC8Cu;
    // 0x1ccc90: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x1CCC8Cu, 0x1CCC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC94u;
label_1ccc94:
    // 0x1ccc94: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x1ccc94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ccc98:
    // 0x1ccc98: 0x262206a0  addiu       $v0, $s1, 0x6A0
    ctx->pc = 0x1ccc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1696));
    // 0x1ccc9c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1ccc9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ccca0: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1ccca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ccca4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ccca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cccac: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1CCCACu;
    SET_GPR_U32(ctx, 31, 0x1CCCB4u);
    ctx->pc = 0x1CCCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCCACu;
    // 0x1cccb0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1CCCACu, 0x1CCCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCCB4u;
label_1cccb4:
    // 0x1cccb4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1cccb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cccb8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1cccb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cccbc: 0xc6200678  lwc1        $f0, 0x678($s1)
    ctx->pc = 0x1cccbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cccc0: 0xc6210694  lwc1        $f1, 0x694($s1)
    ctx->pc = 0x1cccc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cccc4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1cccc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1cccc8: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x1cccc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ccccc: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x1cccccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cccd0: 0xc7a40068  lwc1        $f4, 0x68($sp)
    ctx->pc = 0x1cccd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1cccd4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cccd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cccd8: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1cccd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1cccdc: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x1cccdcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1ccce0: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x1ccce0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1ccce4: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1ccce4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x1ccce8: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1CCCE8u;
    SET_GPR_U32(ctx, 31, 0x1CCCF0u);
    ctx->pc = 0x1CCCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCCE8u;
    // 0x1cccec: 0xe6210694  swc1        $f1, 0x694($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1684), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1CCCE8u, 0x1CCCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCCF0u;
label_1cccf0:
    // 0x1cccf0: 0xc6210678  lwc1        $f1, 0x678($s1)
    ctx->pc = 0x1cccf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cccf4: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1cccf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1cccf8: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1cccf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x1cccfc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cccfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ccd00: 0x3c013eb2  lui         $at, 0x3EB2
    ctx->pc = 0x1ccd00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16050 << 16));
    // 0x1ccd04: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1ccd04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x1ccd08: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ccd08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ccd0c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1ccd0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1ccd10: 0xe6200694  swc1        $f0, 0x694($s1)
    ctx->pc = 0x1ccd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1684), bits); }
    // 0x1ccd14: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x1ccd14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ccd18: 0x0  nop
    ctx->pc = 0x1ccd18u;
    // NOP
    // 0x1ccd1c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1CCD1Cu;
    {
        const bool branch_taken_0x1ccd1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CCD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD1Cu;
        // 0x1ccd20: 0xe6210678  swc1        $f1, 0x678($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1656), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccd1c) {
            ctx->pc = 0x1CCD28u;
            goto label_1ccd28;
        }
    }
    ctx->pc = 0x1CCD24u;
    // 0x1ccd24: 0xe6230678  swc1        $f3, 0x678($s1)
    ctx->pc = 0x1ccd24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1656), bits); }
label_1ccd28:
    // 0x1ccd28: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1ccd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ccd2c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1ccd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ccd30: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x1ccd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ccd34: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1ccd34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ccd38: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1ccd38u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ccd3c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1ccd3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ccd40: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1ccd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ccd44: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1ccd44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ccd48: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1ccd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ccd4c: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1ccd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ccd50: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x1ccd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ccd54: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x1ccd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ccd58: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1ccd58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1ccd5c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ccd5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ccd60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ccd60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccd64: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x1ccd64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1ccd68: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x1ccd68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1ccd6c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1ccd6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1ccd70: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x1ccd70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1ccd74: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1ccd74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ccd78: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1ccd78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1ccd7c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1ccd7cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1ccd80: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1ccd80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ccd84: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1ccd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ccd88: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1ccd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ccd8c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1ccd8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ccd90: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1ccd90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ccd94: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1ccd94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ccd98: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1ccd98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ccd9c: 0xc6200674  lwc1        $f0, 0x674($s1)
    ctx->pc = 0x1ccd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccda0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ccda0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccda4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1ccda4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1ccda8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ccda8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ccdac: 0x0  nop
    ctx->pc = 0x1ccdacu;
    // NOP
    // 0x1ccdb0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1CCDB0u;
    {
        const bool branch_taken_0x1ccdb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CCDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCDB0u;
        // 0x1ccdb4: 0xe6200674  swc1        $f0, 0x674($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccdb0) {
            ctx->pc = 0x1CCDC0u;
            goto label_1ccdc0;
        }
    }
    ctx->pc = 0x1CCDB8u;
    // 0x1ccdb8: 0xc074206  jal         func_1D0818
    ctx->pc = 0x1CCDB8u;
    SET_GPR_U32(ctx, 31, 0x1CCDC0u);
    ctx->pc = 0x1CCDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCDB8u;
    // 0x1ccdbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0818u, 0x1CCDB8u, 0x1CCDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCDC0u;
label_1ccdc0:
    // 0x1ccdc0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1ccdc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1ccdc4:
    // 0x1ccdc4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1ccdc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1ccdc8:
    // 0x1ccdc8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1ccdc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ccdcc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ccdccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ccdd0: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1ccdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ccdd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCDD4u;
        // 0x1ccdd8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCDDCu;
    // 0x1ccddc: 0x0  nop
    ctx->pc = 0x1ccddcu;
    // NOP
    ctx->pc = 0x1ccde0u;
}
