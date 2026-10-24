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

// Function: func_002BDC00
// Address: 0x2bdc00 - 0x2bdd90
void func_002BDC00_0x2bdc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BDC00_0x2bdc00");
#endif

    switch (ctx->pc) {
        case 0x2bdc4cu: goto label_2bdc4c;
        case 0x2bdc68u: goto label_2bdc68;
        case 0x2bdc9cu: goto label_2bdc9c;
        case 0x2bdcd0u: goto label_2bdcd0;
        case 0x2bdce8u: goto label_2bdce8;
        case 0x2bdd68u: goto label_2bdd68;
        default: break;
    }

    ctx->pc = 0x2bdc00u;

    // 0x2bdc00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2bdc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2bdc04: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2bdc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2bdc08: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2bdc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2bdc0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bdc0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdc10: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2bdc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2bdc14: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bdc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2bdc18: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2bdc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2bdc1c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2bdc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2bdc20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bdc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bdc24: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2bdc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bdc28: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2BDC28u;
    {
        const bool branch_taken_0x2bdc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC28u;
        // 0x2bdc2c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdc28) {
            ctx->pc = 0x2BDD6Cu;
            goto label_2bdd6c;
        }
    }
    ctx->pc = 0x2BDC30u;
    // 0x2bdc30: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2bdc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2bdc34: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2BDC34u;
    {
        const bool branch_taken_0x2bdc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC34u;
        // 0x2bdc38: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdc34) {
            ctx->pc = 0x2BDD6Cu;
            goto label_2bdd6c;
        }
    }
    ctx->pc = 0x2BDC3Cu;
    // 0x2bdc3c: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x2bdc3cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bdc40: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x2bdc40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2bdc44: 0xc0af778  jal         func_2BDDE0
    ctx->pc = 0x2BDC44u;
    SET_GPR_U32(ctx, 31, 0x2BDC4Cu);
    ctx->pc = 0x2BDC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDC44u;
    // 0x2bdc48: 0xc64c0020  lwc1        $f12, 0x20($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDE0u, 0x2BDC44u, 0x2BDC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDC4Cu;
label_2bdc4c:
    // 0x2bdc4c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2bdc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2bdc50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bdc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdc54: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x2bdc54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2bdc58: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2bdc58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bdc5c: 0x90660001  lbu         $a2, 0x1($v1)
    ctx->pc = 0x2bdc5cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2bdc60: 0xc0af778  jal         func_2BDDE0
    ctx->pc = 0x2BDC60u;
    SET_GPR_U32(ctx, 31, 0x2BDC68u);
    ctx->pc = 0x2BDC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDC60u;
    // 0x2bdc64: 0xc64c0020  lwc1        $f12, 0x20($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDE0u, 0x2BDC60u, 0x2BDC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDC68u;
label_2bdc68:
    // 0x2bdc68: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2bdc68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2bdc6c: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x2bdc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x2bdc70: 0x247474a0  addiu       $s4, $v1, 0x74A0
    ctx->pc = 0x2bdc70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x2bdc74: 0x24938140  addiu       $s3, $a0, -0x7EC0
    ctx->pc = 0x2bdc74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934848));
    // 0x2bdc78: 0x8e860564  lw          $a2, 0x564($s4)
    ctx->pc = 0x2bdc78u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x747A04u));
    // 0x2bdc7c: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x2bdc7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x2bdc80: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x2bdc80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x2bdc84: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2bdc84u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bdc88: 0xd53004  sllv        $a2, $s5, $a2
    ctx->pc = 0x2bdc88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 6) & 0x1F));
    // 0x2bdc8c: 0x2052825  or          $a1, $s0, $a1
    ctx->pc = 0x2bdc8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
    // 0x2bdc90: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2bdc90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2bdc94: 0xc0c6ec2  jal         func_31BB08
    ctx->pc = 0x2BDC94u;
    SET_GPR_U32(ctx, 31, 0x2BDC9Cu);
    ctx->pc = 0x2BDC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDC94u;
    // 0x2bdc98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BB08u, 0x2BDC94u, 0x2BDC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDC9Cu;
label_2bdc9c:
    // 0x2bdc9c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2bdc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2bdca0: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2bdca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2bdca4: 0x2c6200ff  sltiu       $v0, $v1, 0xFF
    ctx->pc = 0x2bdca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x2bdca8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BDCA8u;
    {
        const bool branch_taken_0x2bdca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDCA8u;
        // 0x2bdcac: 0xae430024  sw          $v1, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdca8) {
            ctx->pc = 0x2BDCD0u;
            goto label_2bdcd0;
        }
    }
    ctx->pc = 0x2BDCB0u;
    // 0x2bdcb0: 0x2462ff01  addiu       $v0, $v1, -0xFF
    ctx->pc = 0x2bdcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967041));
    // 0x2bdcb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bdcb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdcb8: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x2bdcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x2bdcbc: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x2bdcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x2bdcc0: 0x8e860564  lw          $a2, 0x564($s4)
    ctx->pc = 0x2bdcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1380)));
    // 0x2bdcc4: 0xd53004  sllv        $a2, $s5, $a2
    ctx->pc = 0x2bdcc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 6) & 0x1F));
    // 0x2bdcc8: 0xc0c6ec2  jal         func_31BB08
    ctx->pc = 0x2BDCC8u;
    SET_GPR_U32(ctx, 31, 0x2BDCD0u);
    ctx->pc = 0x2BDCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDCC8u;
    // 0x2bdccc: 0x63400  sll         $a2, $a2, 16 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BB08u, 0x2BDCC8u, 0x2BDCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDCD0u;
label_2bdcd0:
    // 0x2bdcd0: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x2bdcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdcd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bdcd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdcd8: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x2bdcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdcdc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bdcdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bdce0: 0xc0af764  jal         func_2BDD90
    ctx->pc = 0x2BDCE0u;
    SET_GPR_U32(ctx, 31, 0x2BDCE8u);
    ctx->pc = 0x2BDCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDCE0u;
    // 0x2bdce4: 0xe6400020  swc1        $f0, 0x20($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDD90u, 0x2BDCE0u, 0x2BDCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDCE8u;
label_2bdce8:
    // 0x2bdce8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bdce8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdcec: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x2bdcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2bdcf0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bdcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bdcf4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2BDCF4u;
    {
        const bool branch_taken_0x2bdcf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDCF4u;
        // 0x2bdcf8: 0xc6420020  lwc1        $f2, 0x20($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdcf4) {
            ctx->pc = 0x2BDD34u;
            goto label_2bdd34;
        }
    }
    ctx->pc = 0x2BDCFCu;
    // 0x2bdcfc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bdcfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bdd00: 0x0  nop
    ctx->pc = 0x2bdd00u;
    // NOP
    // 0x2bdd04: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bdd04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bdd08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bdd08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bdd0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bdd0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdd10: 0x0  nop
    ctx->pc = 0x2bdd10u;
    // NOP
    // 0x2bdd14: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2bdd14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bdd18: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2bdd18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bdd1c: 0x0  nop
    ctx->pc = 0x2bdd1cu;
    // NOP
    // 0x2bdd20: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2BDD20u;
    {
        const bool branch_taken_0x2bdd20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BDD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD20u;
        // 0x2bdd24: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdd20) {
            ctx->pc = 0x2BDD6Cu;
            goto label_2bdd6c;
        }
    }
    ctx->pc = 0x2BDD28u;
    // 0x2bdd28: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2bdd28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2bdd2c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2BDD2Cu;
    {
        const bool branch_taken_0x2bdd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD2Cu;
        // 0x2bdd30: 0xe6400020  swc1        $f0, 0x20($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdd2c) {
            ctx->pc = 0x2BDD6Cu;
            goto label_2bdd6c;
        }
    }
    ctx->pc = 0x2BDD34u;
label_2bdd34:
    // 0x2bdd34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bdd34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdd38: 0x0  nop
    ctx->pc = 0x2bdd38u;
    // NOP
    // 0x2bdd3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bdd3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bdd40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bdd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bdd44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bdd44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bdd48: 0x0  nop
    ctx->pc = 0x2bdd48u;
    // NOP
    // 0x2bdd4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2bdd4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2bdd50: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2bdd50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bdd54: 0x0  nop
    ctx->pc = 0x2bdd54u;
    // NOP
    // 0x2bdd58: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDD58u;
    {
        const bool branch_taken_0x2bdd58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BDD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD58u;
        // 0x2bdd5c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdd58) {
            ctx->pc = 0x2BDD6Cu;
            goto label_2bdd6c;
        }
    }
    ctx->pc = 0x2BDD60u;
    // 0x2bdd60: 0xc0af7f6  jal         func_2BDFD8
    ctx->pc = 0x2BDD60u;
    SET_GPR_U32(ctx, 31, 0x2BDD68u);
    ctx->pc = 0x2BDD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDD60u;
    // 0x2bdd64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDFD8u, 0x2BDD60u, 0x2BDD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDD68u;
label_2bdd68:
    // 0x2bdd68: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2bdd68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2bdd6c:
    // 0x2bdd6c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2bdd6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bdd70: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2bdd70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bdd74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bdd74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bdd78: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2bdd78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bdd7c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2bdd7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdd80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bdd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bdd84: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD84u;
        // 0x2bdd88: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDD8Cu;
    // 0x2bdd8c: 0x0  nop
    ctx->pc = 0x2bdd8cu;
    // NOP
    ctx->pc = 0x2bdd90u;
}
