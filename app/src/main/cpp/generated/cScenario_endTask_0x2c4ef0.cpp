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

// Function: cScenario_endTask
// Address: 0x2c4ef0 - 0x2c5028
void cScenario_endTask_0x2c4ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_endTask_0x2c4ef0");
#endif

    switch (ctx->pc) {
        case 0x2c4f30u: goto label_2c4f30;
        case 0x2c4f3cu: goto label_2c4f3c;
        case 0x2c4f94u: goto label_2c4f94;
        case 0x2c4fa0u: goto label_2c4fa0;
        case 0x2c4fa8u: goto label_2c4fa8;
        case 0x2c4fc4u: goto label_2c4fc4;
        case 0x2c4ff0u: goto label_2c4ff0;
        case 0x2c500cu: goto label_2c500c;
        default: break;
    }

    ctx->pc = 0x2c4ef0u;

    // 0x2c4ef0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c4ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c4ef4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2c4ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2c4ef8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2c4ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2c4efc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2c4efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2c4f00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c4f00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c4f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c4f08: 0x24427470  addiu       $v0, $v0, 0x7470
    ctx->pc = 0x2c4f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29808));
    // 0x2c4f0c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2c4f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2c4f10: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2c4f10u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x2c4f14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c4f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c4f18: 0x9043001c  lbu         $v1, 0x1C($v0)
    ctx->pc = 0x2c4f18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x2c4f1c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2C4F1Cu;
    {
        const bool branch_taken_0x2c4f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4F1Cu;
        // 0x2c4f20: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f1c) {
            ctx->pc = 0x2C4F48u;
            goto label_2c4f48;
        }
    }
    ctx->pc = 0x2C4F24u;
    // 0x2c4f24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c4f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f28: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x2c4f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x2c4f2c: 0x0  nop
    ctx->pc = 0x2c4f2cu;
    // NOP
label_2c4f30:
    // 0x2c4f30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c4f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4f34: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x2C4F34u;
    SET_GPR_U32(ctx, 31, 0x2C4F3Cu);
    ctx->pc = 0x2C4F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4F34u;
    // 0x2c4f38: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x2C4F34u, 0x2C4F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4F3Cu;
label_2c4f3c:
    // 0x2c4f3c: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x2c4f3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2c4f40: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C4F40u;
    {
        const bool branch_taken_0x2c4f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4F40u;
        // 0x2c4f44: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f40) {
            ctx->pc = 0x2C4F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4f30;
        }
    }
    ctx->pc = 0x2C4F48u;
label_2c4f48:
    // 0x2c4f48: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x2c4f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x2c4f4c: 0x80450109  lb          $a1, 0x109($v0)
    ctx->pc = 0x2c4f4cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 265)));
    // 0x2c4f50: 0x4a0000d  bltz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C4F50u;
    {
        const bool branch_taken_0x2c4f50 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2C4F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4F50u;
        // 0x2c4f54: 0x28a20040  slti        $v0, $a1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f50) {
            ctx->pc = 0x2C4F88u;
            goto label_2c4f88;
        }
    }
    ctx->pc = 0x2C4F58u;
    // 0x2c4f58: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C4F58u;
    {
        const bool branch_taken_0x2c4f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4F58u;
        // 0x2c4f5c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f58) {
            ctx->pc = 0x2C4F88u;
            goto label_2c4f88;
        }
    }
    ctx->pc = 0x2C4F60u;
    // 0x2c4f60: 0x52142  srl         $a0, $a1, 5
    ctx->pc = 0x2c4f60u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x2c4f64: 0x24427a8c  addiu       $v0, $v0, 0x7A8C
    ctx->pc = 0x2c4f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31372));
    // 0x2c4f68: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2c4f68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c4f6c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2c4f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c4f70: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x2c4f70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x2c4f74: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c4f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c4f78: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2c4f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2c4f7c: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x2c4f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x2c4f80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c4f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c4f84: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2c4f84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2c4f88:
    // 0x2c4f88: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c4f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2c4f8c: 0xc0abb22  jal         func_2AEC88
    ctx->pc = 0x2C4F8Cu;
    SET_GPR_U32(ctx, 31, 0x2C4F94u);
    ctx->pc = 0x2C4F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4F8Cu;
    // 0x2c4f90: 0x8c4423a4  lw          $a0, 0x23A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEC88u, 0x2C4F8Cu, 0x2C4F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4F94u;
label_2c4f94:
    // 0x2c4f94: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2c4f94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2c4f98: 0xc0b29ac  jal         func_2CA6B0
    ctx->pc = 0x2C4F98u;
    SET_GPR_U32(ctx, 31, 0x2C4FA0u);
    ctx->pc = 0x2C4F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4F98u;
    // 0x2c4f9c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA6B0u, 0x2C4F98u, 0x2C4FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4FA0u;
label_2c4fa0:
    // 0x2c4fa0: 0xc0c1850  jal         func_306140
    ctx->pc = 0x2C4FA0u;
    SET_GPR_U32(ctx, 31, 0x2C4FA8u);
    ctx->pc = 0x306140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306140u, 0x2C4FA0u, 0x2C4FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4FA8u;
label_2c4fa8:
    // 0x2c4fa8: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x2c4fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x2c4fac: 0x8c8500fc  lw          $a1, 0xFC($a0)
    ctx->pc = 0x2c4facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x2c4fb0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4FB0u;
    {
        const bool branch_taken_0x2c4fb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4FB0u;
        // 0x2c4fb4: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4fb0) {
            ctx->pc = 0x2C4FC8u;
            goto label_2c4fc8;
        }
    }
    ctx->pc = 0x2C4FB8u;
    // 0x2c4fb8: 0x8c860100  lw          $a2, 0x100($a0)
    ctx->pc = 0x2c4fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x2c4fbc: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x2C4FBCu;
    SET_GPR_U32(ctx, 31, 0x2C4FC4u);
    ctx->pc = 0x2C4FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4FBCu;
    // 0x2c4fc0: 0x8c87010c  lw          $a3, 0x10C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x2C4FBCu, 0x2C4FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4FC4u;
label_2c4fc4:
    // 0x2c4fc4: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x2c4fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_2c4fc8:
    // 0x2c4fc8: 0x90430110  lbu         $v1, 0x110($v0)
    ctx->pc = 0x2c4fc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x2c4fcc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C4FCCu;
    {
        const bool branch_taken_0x2c4fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4FCCu;
        // 0x2c4fd0: 0x26647470  addiu       $a0, $s3, 0x7470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 29808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4fcc) {
            ctx->pc = 0x2C4FF0u;
            goto label_2c4ff0;
        }
    }
    ctx->pc = 0x2C4FD4u;
    // 0x2c4fd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c4fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4fd8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2c4fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c4fdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c4fdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4fe0: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x2c4fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x2c4fe4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c4fe4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4fe8: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x2C4FE8u;
    SET_GPR_U32(ctx, 31, 0x2C4FF0u);
    ctx->pc = 0x2C4FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4FE8u;
    // 0x2c4fec: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x2C4FE8u, 0x2C4FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4FF0u;
label_2c4ff0:
    // 0x2c4ff0: 0x8e427a84  lw          $v0, 0x7A84($s2)
    ctx->pc = 0x2c4ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31364)));
    // 0x2c4ff4: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2c4ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2c4ff8: 0x8e252f84  lw          $a1, 0x2F84($s1)
    ctx->pc = 0x2c4ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x2c4ffc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c4ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c5000: 0xae427a84  sw          $v0, 0x7A84($s2)
    ctx->pc = 0x2c5000u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 31364), GPR_U32(ctx, 2));
    // 0x2c5004: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x2C5004u;
    SET_GPR_U32(ctx, 31, 0x2C500Cu);
    ctx->pc = 0x2C5008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5004u;
    // 0x2c5008: 0x8ca40020  lw          $a0, 0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x2C5004u, 0x2C500Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C500Cu;
label_2c500c:
    // 0x2c500c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2c500cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c5010: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2c5010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5014: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c5014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5018: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2c5018u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c501c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c501cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5020: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5020u;
        // 0x2c5024: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5028u;
}
