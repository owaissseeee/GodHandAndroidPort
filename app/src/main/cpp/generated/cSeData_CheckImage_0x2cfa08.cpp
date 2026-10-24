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

// Function: cSeData_CheckImage
// Address: 0x2cfa08 - 0x2cfb60
void cSeData_CheckImage_0x2cfa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSeData_CheckImage_0x2cfa08");
#endif

    switch (ctx->pc) {
        case 0x2cfa2cu: goto label_2cfa2c;
        case 0x2cfb04u: goto label_2cfb04;
        case 0x2cfb1cu: goto label_2cfb1c;
        case 0x2cfb2cu: goto label_2cfb2c;
        case 0x2cfb3cu: goto label_2cfb3c;
        case 0x2cfb48u: goto label_2cfb48;
        default: break;
    }

    ctx->pc = 0x2cfa08u;

    // 0x2cfa08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cfa08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cfa0c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2cfa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2cfa10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cfa10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cfa14: 0x24a5cfb8  addiu       $a1, $a1, -0x3048
    ctx->pc = 0x2cfa14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954936));
    // 0x2cfa18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cfa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cfa1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cfa1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfa20: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2cfa20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cfa24: 0xc0e96f6  jal         func_3A5BD8
    ctx->pc = 0x2CFA24u;
    SET_GPR_U32(ctx, 31, 0x2CFA2Cu);
    ctx->pc = 0x2CFA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFA24u;
    // 0x2cfa28: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5BD8u, 0x2CFA24u, 0x2CFA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFA2Cu;
label_2cfa2c:
    // 0x2cfa2c: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2CFA2Cu;
    {
        const bool branch_taken_0x2cfa2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CFA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA2Cu;
        // 0x2cfa30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfa2c) {
            ctx->pc = 0x2CFB4Cu;
            goto label_2cfb4c;
        }
    }
    ctx->pc = 0x2CFA34u;
    // 0x2cfa34: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2cfa34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cfa38: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2cfa38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x2cfa3c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2cfa3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2cfa40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cfa40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cfa44: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2cfa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfa48: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2cfa48u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cfa4c: 0x0  nop
    ctx->pc = 0x2cfa4cu;
    // NOP
    // 0x2cfa50: 0x4502003f  bc1fl       . + 4 + (0x3F << 2)
    ctx->pc = 0x2CFA50u;
    {
        const bool branch_taken_0x2cfa50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cfa50) {
            ctx->pc = 0x2CFA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFA50u;
            // 0x2cfa54: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFB50u;
            goto label_2cfb50;
        }
    }
    ctx->pc = 0x2CFA58u;
    // 0x2cfa58: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2cfa58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2cfa5c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CFA5Cu;
    {
        const bool branch_taken_0x2cfa5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfa5c) {
            ctx->pc = 0x2CFA60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFA5Cu;
            // 0x2cfa60: 0x90a2000c  lbu         $v0, 0xC($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFA6Cu;
            goto label_2cfa6c;
        }
    }
    ctx->pc = 0x2CFA64u;
    // 0x2cfa64: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2CFA64u;
    {
        const bool branch_taken_0x2cfa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA64u;
        // 0x2cfa68: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfa64) {
            ctx->pc = 0x2CFB50u;
            goto label_2cfb50;
        }
    }
    ctx->pc = 0x2CFA6Cu;
label_2cfa6c:
    // 0x2cfa6c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2CFA6Cu;
    {
        const bool branch_taken_0x2cfa6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfa6c) {
            ctx->pc = 0x2CFA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFA6Cu;
            // 0x2cfa70: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFAC0u;
            goto label_2cfac0;
        }
    }
    ctx->pc = 0x2CFA74u;
    // 0x2cfa74: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x2cfa74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cfa78: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x2cfa78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x2cfa7c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2cfa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cfa80: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2cfa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2cfa84: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2cfa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2cfa88: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x2cfa88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x2cfa8c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2cfa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cfa90: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x2cfa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2cfa94: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2cfa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2cfa98: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x2cfa98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x2cfa9c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2cfa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cfaa0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2cfaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2cfaa4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CFAA4u;
    {
        const bool branch_taken_0x2cfaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFAA4u;
        // 0x2cfaa8: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfaa4) {
            ctx->pc = 0x2CFAB4u;
            goto label_2cfab4;
        }
    }
    ctx->pc = 0x2CFAACu;
    // 0x2cfaac: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x2cfaacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x2cfab0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2cfab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cfab4:
    // 0x2cfab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfab8: 0xa062000c  sb          $v0, 0xC($v1)
    ctx->pc = 0x2cfab8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cfabc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2cfabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cfac0:
    // 0x2cfac0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2cfac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2cfac4: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x2cfac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2cfac8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cfac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2cfacc: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2cfaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2cfad0: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CFAD0u;
    {
        const bool branch_taken_0x2cfad0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CFAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFAD0u;
        // 0x2cfad4: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfad0) {
            ctx->pc = 0x2CFAE0u;
            goto label_2cfae0;
        }
    }
    ctx->pc = 0x2CFAD8u;
    // 0x2cfad8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2cfad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2cfadc: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x2cfadcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_2cfae0:
    // 0x2cfae0: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x2cfae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2cfae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cfae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfae8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2cfae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cfaec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2cfaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cfaf0: 0x24630082  addiu       $v1, $v1, 0x82
    ctx->pc = 0x2cfaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 130));
    // 0x2cfaf4: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x2cfaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x2cfaf8: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x2cfaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2cfafc: 0xc0b3f2c  jal         func_2CFCB0
    ctx->pc = 0x2CFAFCu;
    SET_GPR_U32(ctx, 31, 0x2CFB04u);
    ctx->pc = 0x2CFB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFAFCu;
    // 0x2cfb00: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCB0u, 0x2CFAFCu, 0x2CFB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFB04u;
label_2cfb04:
    // 0x2cfb04: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2cfb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cfb08: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x2cfb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2cfb0c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CFB0Cu;
    {
        const bool branch_taken_0x2cfb0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB0Cu;
        // 0x2cfb10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfb0c) {
            ctx->pc = 0x2CFB34u;
            goto label_2cfb34;
        }
    }
    ctx->pc = 0x2CFB14u;
    // 0x2cfb14: 0xc0b3ef0  jal         func_2CFBC0
    ctx->pc = 0x2CFB14u;
    SET_GPR_U32(ctx, 31, 0x2CFB1Cu);
    ctx->pc = 0x2CFB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFB14u;
    // 0x2cfb18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBC0u, 0x2CFB14u, 0x2CFB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFB1Cu;
label_2cfb1c:
    // 0x2cfb1c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CFB1Cu;
    {
        const bool branch_taken_0x2cfb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CFB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB1Cu;
        // 0x2cfb20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfb1c) {
            ctx->pc = 0x2CFB40u;
            goto label_2cfb40;
        }
    }
    ctx->pc = 0x2CFB24u;
    // 0x2cfb24: 0xc0b3f2c  jal         func_2CFCB0
    ctx->pc = 0x2CFB24u;
    SET_GPR_U32(ctx, 31, 0x2CFB2Cu);
    ctx->pc = 0x2CFB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFB24u;
    // 0x2cfb28: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCB0u, 0x2CFB24u, 0x2CFB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFB2Cu;
label_2cfb2c:
    // 0x2cfb2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CFB2Cu;
    {
        const bool branch_taken_0x2cfb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB2Cu;
        // 0x2cfb30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfb2c) {
            ctx->pc = 0x2CFB40u;
            goto label_2cfb40;
        }
    }
    ctx->pc = 0x2CFB34u;
label_2cfb34:
    // 0x2cfb34: 0xc0b3f2c  jal         func_2CFCB0
    ctx->pc = 0x2CFB34u;
    SET_GPR_U32(ctx, 31, 0x2CFB3Cu);
    ctx->pc = 0x2CFB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFB34u;
    // 0x2cfb38: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCB0u, 0x2CFB34u, 0x2CFB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFB3Cu;
label_2cfb3c:
    // 0x2cfb3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cfb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cfb40:
    // 0x2cfb40: 0xc0b3f2c  jal         func_2CFCB0
    ctx->pc = 0x2CFB40u;
    SET_GPR_U32(ctx, 31, 0x2CFB48u);
    ctx->pc = 0x2CFB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFB40u;
    // 0x2cfb44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCB0u, 0x2CFB40u, 0x2CFB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFB48u;
label_2cfb48:
    // 0x2cfb48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cfb4c:
    // 0x2cfb4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cfb4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cfb50:
    // 0x2cfb50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cfb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfb54: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB54u;
        // 0x2cfb58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFB54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFB5Cu;
    // 0x2cfb5c: 0x0  nop
    ctx->pc = 0x2cfb5cu;
    // NOP
    ctx->pc = 0x2cfb60u;
}
