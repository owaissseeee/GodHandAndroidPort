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

// Function: func_0017AEB0
// Address: 0x17aeb0 - 0x17b010
void func_0017AEB0_0x17aeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017AEB0_0x17aeb0");
#endif

    switch (ctx->pc) {
        case 0x17af08u: goto label_17af08;
        case 0x17af58u: goto label_17af58;
        default: break;
    }

    ctx->pc = 0x17aeb0u;

    // 0x17aeb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17aeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17aeb4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17aeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17aeb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17aeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17aebc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17aebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aec0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17aec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17aec4: 0x86020606  lh          $v0, 0x606($s0)
    ctx->pc = 0x17aec4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x17aec8: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x17AEC8u;
    {
        const bool branch_taken_0x17aec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AEC8u;
        // 0x17aecc: 0x96030606  lhu         $v1, 0x606($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1542)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aec8) {
            ctx->pc = 0x17AFF8u;
            goto label_17aff8;
        }
    }
    ctx->pc = 0x17AED0u;
    // 0x17aed0: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x17aed0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
    // 0x17aed4: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x17AED4u;
    {
        const bool branch_taken_0x17aed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17aed4) {
            ctx->pc = 0x17AED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17AED4u;
            // 0x17aed8: 0x920202b4  lbu         $v0, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17AFB0u;
            goto label_17afb0;
        }
    }
    ctx->pc = 0x17AEDCu;
    // 0x17aedc: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x17aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17aee0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x17aee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x17aee4: 0xa6020606  sh          $v0, 0x606($s0)
    ctx->pc = 0x17aee4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1542), (uint16_t)GPR_U32(ctx, 2));
    // 0x17aee8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x17aee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x17aeec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17aeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17aef0: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x17aef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x17aef4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x17aef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17aef8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x17aef8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17aefc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17aefcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17af00: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x17AF00u;
    SET_GPR_U32(ctx, 31, 0x17AF08u);
    ctx->pc = 0x17AF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AF00u;
    // 0x17af04: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x17AF00u, 0x17AF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AF08u;
label_17af08:
    // 0x17af08: 0x86030606  lh          $v1, 0x606($s0)
    ctx->pc = 0x17af08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x17af0c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x17AF0Cu;
    {
        const bool branch_taken_0x17af0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AF0Cu;
        // 0x17af10: 0x920202b4  lbu         $v0, 0x2B4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af0c) {
            ctx->pc = 0x17AF7Cu;
            goto label_17af7c;
        }
    }
    ctx->pc = 0x17AF14u;
    // 0x17af14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17AF14u;
    {
        const bool branch_taken_0x17af14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AF14u;
        // 0x17af18: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af14) {
            ctx->pc = 0x17AF28u;
            goto label_17af28;
        }
    }
    ctx->pc = 0x17AF1Cu;
    // 0x17af1c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x17af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x17af20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17AF20u;
    {
        const bool branch_taken_0x17af20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AF20u;
        // 0x17af24: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af20) {
            ctx->pc = 0x17AF2Cu;
            goto label_17af2c;
        }
    }
    ctx->pc = 0x17AF28u;
label_17af28:
    // 0x17af28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17af28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17af2c:
    // 0x17af2c: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x17AF2Cu;
    {
        const bool branch_taken_0x17af2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17af2c) {
            ctx->pc = 0x17AF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17AF2Cu;
            // 0x17af30: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17AFFCu;
            goto label_17affc;
        }
    }
    ctx->pc = 0x17AF34u;
    // 0x17af34: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x17af34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x17af38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17AF38u;
    {
        const bool branch_taken_0x17af38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AF38u;
        // 0x17af3c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af38) {
            ctx->pc = 0x17AF4Cu;
            goto label_17af4c;
        }
    }
    ctx->pc = 0x17AF40u;
    // 0x17af40: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x17af40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x17af44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17AF44u;
    {
        const bool branch_taken_0x17af44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AF44u;
        // 0x17af48: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af44) {
            ctx->pc = 0x17AF50u;
            goto label_17af50;
        }
    }
    ctx->pc = 0x17AF4Cu;
label_17af4c:
    // 0x17af4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17af4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17af50:
    // 0x17af50: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x17AF50u;
    SET_GPR_U32(ctx, 31, 0x17AF58u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x17AF50u, 0x17AF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AF58u;
label_17af58:
    // 0x17af58: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17af58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x17af5c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x17af5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x17af60: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x17af60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x17af64: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x17af64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17af68: 0xc6010608  lwc1        $f1, 0x608($s0)
    ctx->pc = 0x17af68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17af6c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x17af6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x17af70: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x17af70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17af74: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x17AF74u;
    {
        const bool branch_taken_0x17af74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AF74u;
        // 0x17af78: 0xe6210100  swc1        $f1, 0x100($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af74) {
            ctx->pc = 0x17AFF8u;
            goto label_17aff8;
        }
    }
    ctx->pc = 0x17AF7Cu;
label_17af7c:
    // 0x17af7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17AF7Cu;
    {
        const bool branch_taken_0x17af7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AF7Cu;
        // 0x17af80: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af7c) {
            ctx->pc = 0x17AF90u;
            goto label_17af90;
        }
    }
    ctx->pc = 0x17AF84u;
    // 0x17af84: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x17af84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x17af88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17AF88u;
    {
        const bool branch_taken_0x17af88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AF88u;
        // 0x17af8c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af88) {
            ctx->pc = 0x17AF94u;
            goto label_17af94;
        }
    }
    ctx->pc = 0x17AF90u;
label_17af90:
    // 0x17af90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17af90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17af94:
    // 0x17af94: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x17AF94u;
    {
        const bool branch_taken_0x17af94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17af94) {
            ctx->pc = 0x17AF98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17AF94u;
            // 0x17af98: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17AFFCu;
            goto label_17affc;
        }
    }
    ctx->pc = 0x17AF9Cu;
    // 0x17af9c: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x17af9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x17afa0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x17AFA0u;
    {
        const bool branch_taken_0x17afa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFA0u;
        // 0x17afa4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17afa0) {
            ctx->pc = 0x17AFE0u;
            goto label_17afe0;
        }
    }
    ctx->pc = 0x17AFA8u;
    // 0x17afa8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17AFA8u;
    {
        const bool branch_taken_0x17afa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFA8u;
        // 0x17afac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17afa8) {
            ctx->pc = 0x17AFF0u;
            goto label_17aff0;
        }
    }
    ctx->pc = 0x17AFB0u;
label_17afb0:
    // 0x17afb0: 0xa6000606  sh          $zero, 0x606($s0)
    ctx->pc = 0x17afb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1542), (uint16_t)GPR_U32(ctx, 0));
    // 0x17afb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17AFB4u;
    {
        const bool branch_taken_0x17afb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFB4u;
        // 0x17afb8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17afb4) {
            ctx->pc = 0x17AFC8u;
            goto label_17afc8;
        }
    }
    ctx->pc = 0x17AFBCu;
    // 0x17afbc: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x17afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x17afc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17AFC0u;
    {
        const bool branch_taken_0x17afc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFC0u;
        // 0x17afc4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17afc0) {
            ctx->pc = 0x17AFCCu;
            goto label_17afcc;
        }
    }
    ctx->pc = 0x17AFC8u;
label_17afc8:
    // 0x17afc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17afc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17afcc:
    // 0x17afcc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x17AFCCu;
    {
        const bool branch_taken_0x17afcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17afcc) {
            ctx->pc = 0x17AFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17AFCCu;
            // 0x17afd0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17AFFCu;
            goto label_17affc;
        }
    }
    ctx->pc = 0x17AFD4u;
    // 0x17afd4: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x17afd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x17afd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17AFD8u;
    {
        const bool branch_taken_0x17afd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFD8u;
        // 0x17afdc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17afd8) {
            ctx->pc = 0x17AFECu;
            goto label_17afec;
        }
    }
    ctx->pc = 0x17AFE0u;
label_17afe0:
    // 0x17afe0: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x17afe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x17afe4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17AFE4u;
    {
        const bool branch_taken_0x17afe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFE4u;
        // 0x17afe8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17afe4) {
            ctx->pc = 0x17AFF0u;
            goto label_17aff0;
        }
    }
    ctx->pc = 0x17AFECu;
label_17afec:
    // 0x17afec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17afecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17aff0:
    // 0x17aff0: 0xc6000608  lwc1        $f0, 0x608($s0)
    ctx->pc = 0x17aff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17aff4: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x17aff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
label_17aff8:
    // 0x17aff8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17aff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17affc:
    // 0x17affc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17affcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b000: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b004: 0x3e00008  jr          $ra
    ctx->pc = 0x17B004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B004u;
        // 0x17b008: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B00Cu;
    // 0x17b00c: 0x0  nop
    ctx->pc = 0x17b00cu;
    // NOP
    ctx->pc = 0x17b010u;
}
