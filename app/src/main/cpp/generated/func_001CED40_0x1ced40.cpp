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

// Function: func_001CED40
// Address: 0x1ced40 - 0x1cef28
void func_001CED40_0x1ced40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CED40_0x1ced40");
#endif

    switch (ctx->pc) {
        case 0x1ced5cu: goto label_1ced5c;
        default: break;
    }

    ctx->pc = 0x1ced40u;

    // 0x1ced40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ced40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ced44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ced44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ced48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ced48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ced4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ced4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ced50: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1ced50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1ced54: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1CED54u;
    SET_GPR_U32(ctx, 31, 0x1CED5Cu);
    ctx->pc = 0x1CED58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CED54u;
    // 0x1ced58: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1CED54u, 0x1CED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CED5Cu;
label_1ced5c:
    // 0x1ced5c: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1ced5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1ced60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ced60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ced64: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x1ced64u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x1ced68: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ced68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ced6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CED6Cu;
    {
        const bool branch_taken_0x1ced6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED6Cu;
        // 0x1ced70: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ced6c) {
            ctx->pc = 0x1CED80u;
            goto label_1ced80;
        }
    }
    ctx->pc = 0x1CED74u;
    // 0x1ced74: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1ced74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1ced78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CED78u;
    {
        const bool branch_taken_0x1ced78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED78u;
        // 0x1ced7c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ced78) {
            ctx->pc = 0x1CED84u;
            goto label_1ced84;
        }
    }
    ctx->pc = 0x1CED80u;
label_1ced80:
    // 0x1ced80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ced80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ced84:
    // 0x1ced84: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1ced84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1ced88: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x1ced88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ced8c: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1CED8Cu;
    {
        const bool branch_taken_0x1ced8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED8Cu;
        // 0x1ced90: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ced8c) {
            ctx->pc = 0x1CEF18u;
            goto label_1cef18;
        }
    }
    ctx->pc = 0x1CED94u;
    // 0x1ced94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ced94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ced98: 0x2442a910  addiu       $v0, $v0, -0x56F0
    ctx->pc = 0x1ced98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945040));
    // 0x1ced9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ced9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ceda0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ceda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ceda4: 0x800008  jr          $a0
    ctx->pc = 0x1CEDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CEDACu: goto label_1cedac;
            case 0x1CEDC0u: goto label_1cedc0;
            case 0x1CEE20u: goto label_1cee20;
            case 0x1CEE38u: goto label_1cee38;
            case 0x1CEE78u: goto label_1cee78;
            case 0x1CEE90u: goto label_1cee90;
            case 0x1CEEBCu: goto label_1ceebc;
            case 0x1CEEC8u: goto label_1ceec8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEDA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CEDACu;
label_1cedac:
    // 0x1cedac: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1cedacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1cedb0: 0xa600056a  sh          $zero, 0x56A($s0)
    ctx->pc = 0x1cedb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cedb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cedb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cedb8: 0xae00024c  sw          $zero, 0x24C($s0)
    ctx->pc = 0x1cedb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 0));
    // 0x1cedbc: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1cedbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1cedc0:
    // 0x1cedc0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1cedc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1cedc4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cedc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1cedc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cedc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cedcc: 0xc601024c  lwc1        $f1, 0x24C($s0)
    ctx->pc = 0x1cedccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cedd0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1cedd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1cedd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cedd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cedd8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cedd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ceddc: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x1ceddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1cede0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cede0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cede4: 0x34440010  ori         $a0, $v0, 0x10
    ctx->pc = 0x1cede4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1cede8: 0xae040250  sw          $a0, 0x250($s0)
    ctx->pc = 0x1cede8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 4));
    // 0x1cedec: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1cedecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cedf0: 0x0  nop
    ctx->pc = 0x1cedf0u;
    // NOP
    // 0x1cedf4: 0x45000048  bc1f        . + 4 + (0x48 << 2)
    ctx->pc = 0x1CEDF4u;
    {
        const bool branch_taken_0x1cedf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CEDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEDF4u;
        // 0x1cedf8: 0xe601024c  swc1        $f1, 0x24C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cedf4) {
            ctx->pc = 0x1CEF18u;
            goto label_1cef18;
        }
    }
    ctx->pc = 0x1CEDFCu;
    // 0x1cedfc: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1cedfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1cee00: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1cee00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1cee04: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1cee04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x1cee08: 0xe602024c  swc1        $f2, 0x24C($s0)
    ctx->pc = 0x1cee08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x1cee0c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1cee0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1cee10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cee10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cee14: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x1cee14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cee18: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1CEE18u;
    {
        const bool branch_taken_0x1cee18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE18u;
        // 0x1cee1c: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee18) {
            ctx->pc = 0x1CEF18u;
            goto label_1cef18;
        }
    }
    ctx->pc = 0x1CEE20u;
label_1cee20:
    // 0x1cee20: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1cee20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1cee24: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1cee24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1cee28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cee28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cee2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cee30: 0xe6000674  swc1        $f0, 0x674($s0)
    ctx->pc = 0x1cee30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1652), bits); }
    // 0x1cee34: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1cee34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1cee38:
    // 0x1cee38: 0x50a0001d  beql        $a1, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CEE38u;
    {
        const bool branch_taken_0x1cee38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cee38) {
            ctx->pc = 0x1CEE3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEE38u;
            // 0x1cee3c: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CEEB0u;
            goto label_1ceeb0;
        }
    }
    ctx->pc = 0x1CEE40u;
    // 0x1cee40: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1cee40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1cee44: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cee44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1cee48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cee48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cee4c: 0x8ca200d0  lw          $v0, 0xD0($a1)
    ctx->pc = 0x1cee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x1cee50: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1cee50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1cee54: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1cee54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cee58: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1cee58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cee5c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cee5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cee60: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1cee60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1cee64: 0xc6000674  lwc1        $f0, 0x674($s0)
    ctx->pc = 0x1cee64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cee68: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1cee68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1cee6c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1cee6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cee70: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CEE70u;
    {
        const bool branch_taken_0x1cee70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE70u;
        // 0x1cee74: 0xe6000674  swc1        $f0, 0x674($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1652), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee70) {
            ctx->pc = 0x1CEEA4u;
            goto label_1ceea4;
        }
    }
    ctx->pc = 0x1CEE78u;
label_1cee78:
    // 0x1cee78: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1cee78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1cee7c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1cee7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1cee80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cee80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cee84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cee84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cee88: 0xe6000674  swc1        $f0, 0x674($s0)
    ctx->pc = 0x1cee88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1652), bits); }
    // 0x1cee8c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1cee8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1cee90:
    // 0x1cee90: 0xc6000674  lwc1        $f0, 0x674($s0)
    ctx->pc = 0x1cee90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cee94: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1cee94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cee98: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1cee98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1cee9c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cee9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ceea0: 0xe6000674  swc1        $f0, 0x674($s0)
    ctx->pc = 0x1ceea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1652), bits); }
label_1ceea4:
    // 0x1ceea4: 0x4502001d  bc1fl       . + 4 + (0x1D << 2)
    ctx->pc = 0x1CEEA4u;
    {
        const bool branch_taken_0x1ceea4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ceea4) {
            ctx->pc = 0x1CEEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEEA4u;
            // 0x1ceea8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CEF1Cu;
            goto label_1cef1c;
        }
    }
    ctx->pc = 0x1CEEACu;
    // 0x1ceeac: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1ceeacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_1ceeb0:
    // 0x1ceeb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ceeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ceeb4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1CEEB4u;
    {
        const bool branch_taken_0x1ceeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEEB4u;
        // 0x1ceeb8: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceeb4) {
            ctx->pc = 0x1CEF18u;
            goto label_1cef18;
        }
    }
    ctx->pc = 0x1CEEBCu;
label_1ceebc:
    // 0x1ceebc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1ceebcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1ceec0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ceec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ceec4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1ceec4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1ceec8:
    // 0x1ceec8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1ceec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1ceecc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ceeccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ceed0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ceed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ceed4: 0xc601024c  lwc1        $f1, 0x24C($s0)
    ctx->pc = 0x1ceed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ceed8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1ceed8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1ceedc: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x1ceedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1ceee0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1ceee0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ceee4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1ceee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1ceee8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ceee8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ceeec: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x1ceeecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    // 0x1ceef0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1ceef0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ceef4: 0x0  nop
    ctx->pc = 0x1ceef4u;
    // NOP
    // 0x1ceef8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1CEEF8u;
    {
        const bool branch_taken_0x1ceef8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CEEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEEF8u;
        // 0x1ceefc: 0xe601024c  swc1        $f1, 0x24C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceef8) {
            ctx->pc = 0x1CEF18u;
            goto label_1cef18;
        }
    }
    ctx->pc = 0x1CEF00u;
    // 0x1cef00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cef00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cef04: 0xe602024c  swc1        $f2, 0x24C($s0)
    ctx->pc = 0x1cef04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x1cef08: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x1cef08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cef0c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1cef0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cef10: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1cef10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cef14: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1cef14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1cef18:
    // 0x1cef18: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cef18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cef1c:
    // 0x1cef1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cef1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cef20: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEF20u;
        // 0x1cef24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEF28u;
}
