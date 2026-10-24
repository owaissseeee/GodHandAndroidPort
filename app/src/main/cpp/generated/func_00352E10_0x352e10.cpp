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

// Function: func_00352E10
// Address: 0x352e10 - 0x352f40
void func_00352E10_0x352e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00352E10_0x352e10");
#endif

    switch (ctx->pc) {
        case 0x352e64u: goto label_352e64;
        case 0x352e7cu: goto label_352e7c;
        case 0x352e98u: goto label_352e98;
        case 0x352ea4u: goto label_352ea4;
        case 0x352ec0u: goto label_352ec0;
        case 0x352ef8u: goto label_352ef8;
        case 0x352f0cu: goto label_352f0c;
        case 0x352f18u: goto label_352f18;
        default: break;
    }

    ctx->pc = 0x352e10u;

    // 0x352e10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x352e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x352e14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x352e14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352e18: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x352e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x352e1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x352e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352e20: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x352e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x352e24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x352e24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352e28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x352e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x352e2c: 0x2612090c  addiu       $s2, $s0, 0x90C
    ctx->pc = 0x352e2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2316));
    // 0x352e30: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x352e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x352e34: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x352e34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352e38: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x352e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x352e3c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x352e3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352e40: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x352e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x352e44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x352e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352e48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x352e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x352e4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x352e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352e50: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x352e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x352e54: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x352E54u;
    {
        const bool branch_taken_0x352e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x352E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352E54u;
        // 0x352e58: 0x8e131fc0  lw          $s3, 0x1FC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352e54) {
            ctx->pc = 0x352F18u;
            goto label_352f18;
        }
    }
    ctx->pc = 0x352E5Cu;
    // 0x352e5c: 0xc0da876  jal         func_36A1D8
    ctx->pc = 0x352E5Cu;
    SET_GPR_U32(ctx, 31, 0x352E64u);
    ctx->pc = 0x36A1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D8u, 0x352E5Cu, 0x352E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352E64u;
label_352e64:
    // 0x352e64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x352E64u;
    {
        const bool branch_taken_0x352e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352E64u;
        // 0x352e68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352e64) {
            ctx->pc = 0x352E88u;
            goto label_352e88;
        }
    }
    ctx->pc = 0x352E6Cu;
    // 0x352e6c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x352e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x352e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x352e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352e74: 0xc0d375c  jal         func_34DD70
    ctx->pc = 0x352E74u;
    SET_GPR_U32(ctx, 31, 0x352E7Cu);
    ctx->pc = 0x352E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352E74u;
    // 0x352e78: 0x34a50f16  ori         $a1, $a1, 0xF16 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3862);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x352E74u, 0x352E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352E7Cu;
label_352e7c:
    // 0x352e7c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x352E7Cu;
    {
        const bool branch_taken_0x352e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352E7Cu;
        // 0x352e80: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352e7c) {
            ctx->pc = 0x352F1Cu;
            goto label_352f1c;
        }
    }
    ctx->pc = 0x352E84u;
    // 0x352e84: 0x0  nop
    ctx->pc = 0x352e84u;
    // NOP
label_352e88:
    // 0x352e88: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x352e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x352e8c: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x352e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x352e90: 0xc0da88e  jal         func_36A238
    ctx->pc = 0x352E90u;
    SET_GPR_U32(ctx, 31, 0x352E98u);
    ctx->pc = 0x352E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352E90u;
    // 0x352e94: 0x27a7000c  addiu       $a3, $sp, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A238u, 0x352E90u, 0x352E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352E98u;
label_352e98:
    // 0x352e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x352e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352e9c: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x352E9Cu;
    SET_GPR_U32(ctx, 31, 0x352EA4u);
    ctx->pc = 0x352EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352E9Cu;
    // 0x352ea0: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x352E9Cu, 0x352EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352EA4u;
label_352ea4:
    // 0x352ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x352ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352ea8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x352EA8u;
    {
        const bool branch_taken_0x352ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x352EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352EA8u;
        // 0x352eac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352ea8) {
            ctx->pc = 0x352EB8u;
            goto label_352eb8;
        }
    }
    ctx->pc = 0x352EB0u;
    // 0x352eb0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x352EB0u;
    {
        const bool branch_taken_0x352eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352EB0u;
        // 0x352eb4: 0xae600114  sw          $zero, 0x114($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352eb0) {
            ctx->pc = 0x352EE8u;
            goto label_352ee8;
        }
    }
    ctx->pc = 0x352EB8u;
label_352eb8:
    // 0x352eb8: 0xc0d31ec  jal         func_34C7B0
    ctx->pc = 0x352EB8u;
    SET_GPR_U32(ctx, 31, 0x352EC0u);
    ctx->pc = 0x34C7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C7B0u, 0x352EB8u, 0x352EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352EC0u;
label_352ec0:
    // 0x352ec0: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x352ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x352ec4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x352ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352ec8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x352ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x352ecc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x352ECCu;
    {
        const bool branch_taken_0x352ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x352ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352ECCu;
        // 0x352ed0: 0x64102a  slt         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x352ecc) {
            ctx->pc = 0x352EE0u;
            goto label_352ee0;
        }
    }
    ctx->pc = 0x352ED4u;
    // 0x352ed4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x352ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x352ed8: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x352ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x352edc: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x352edcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_352ee0:
    // 0x352ee0: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x352ee0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x352ee4: 0xae630114  sw          $v1, 0x114($s3)
    ctx->pc = 0x352ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 3));
label_352ee8:
    // 0x352ee8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x352ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352eec: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x352eecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352ef0: 0xc0d4bd0  jal         func_352F40
    ctx->pc = 0x352EF0u;
    SET_GPR_U32(ctx, 31, 0x352EF8u);
    ctx->pc = 0x352EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352EF0u;
    // 0x352ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352F40u, 0x352EF0u, 0x352EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352EF8u;
label_352ef8:
    // 0x352ef8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x352ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352efc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x352efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352f00: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x352f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352f04: 0xc0d4c18  jal         func_353060
    ctx->pc = 0x352F04u;
    SET_GPR_U32(ctx, 31, 0x352F0Cu);
    ctx->pc = 0x352F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352F04u;
    // 0x352f08: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353060u, 0x352F04u, 0x352F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352F0Cu;
label_352f0c:
    // 0x352f0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x352f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352f10: 0xc0d4c26  jal         func_353098
    ctx->pc = 0x352F10u;
    SET_GPR_U32(ctx, 31, 0x352F18u);
    ctx->pc = 0x352F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352F10u;
    // 0x352f14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353098u, 0x352F10u, 0x352F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352F18u;
label_352f18:
    // 0x352f18: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x352f18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_352f1c:
    // 0x352f1c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x352f1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352f20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x352f20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x352f24: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x352f24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x352f28: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x352f28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x352f2c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x352f2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x352f30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x352f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x352f34: 0x3e00008  jr          $ra
    ctx->pc = 0x352F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352F34u;
        // 0x352f38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352F3Cu;
    // 0x352f3c: 0x0  nop
    ctx->pc = 0x352f3cu;
    // NOP
    ctx->pc = 0x352f40u;
}
