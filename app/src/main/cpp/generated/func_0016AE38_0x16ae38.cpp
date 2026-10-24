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

// Function: func_0016AE38
// Address: 0x16ae38 - 0x16b1f8
void func_0016AE38_0x16ae38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0016AE38_0x16ae38");
#endif

    switch (ctx->pc) {
        case 0x16aed8u: goto label_16aed8;
        case 0x16af38u: goto label_16af38;
        case 0x16afe8u: goto label_16afe8;
        case 0x16b070u: goto label_16b070;
        case 0x16b088u: goto label_16b088;
        case 0x16b09cu: goto label_16b09c;
        case 0x16b0b0u: goto label_16b0b0;
        case 0x16b104u: goto label_16b104;
        case 0x16b150u: goto label_16b150;
        case 0x16b190u: goto label_16b190;
        case 0x16b1d4u: goto label_16b1d4;
        default: break;
    }

    ctx->pc = 0x16ae38u;

    // 0x16ae38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16ae38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16ae3c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16ae3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16ae40: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16ae40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16ae44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16ae44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16ae48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16ae4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ae4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ae50: 0x8203005a  lb          $v1, 0x5A($s0)
    ctx->pc = 0x16ae50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x16ae54: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x16ae54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x16ae58: 0x104000d0  beqz        $v0, . + 4 + (0xD0 << 2)
    ctx->pc = 0x16AE58u;
    {
        const bool branch_taken_0x16ae58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE58u;
        // 0x16ae5c: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae58) {
            ctx->pc = 0x16B19Cu;
            goto label_16b19c;
        }
    }
    ctx->pc = 0x16AE60u;
    // 0x16ae60: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x16ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x16ae64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16ae64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16ae68: 0x2442fd90  addiu       $v0, $v0, -0x270
    ctx->pc = 0x16ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966672));
    // 0x16ae6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16ae6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ae70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16ae70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ae74: 0x800008  jr          $a0
    ctx->pc = 0x16AE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16AE7Cu: goto label_16ae7c;
            case 0x16B07Cu: goto label_16b07c;
            case 0x16B090u: goto label_16b090;
            case 0x16B0A4u: goto label_16b0a4;
            case 0x16B0B8u: goto label_16b0b8;
            case 0x16B19Cu: goto label_16b19c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AE74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16AE7Cu;
label_16ae7c:
    // 0x16ae7c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x16ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x16ae80: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x16ae80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16ae84: 0x31e78  dsll        $v1, $v1, 25
    ctx->pc = 0x16ae84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 25);
    // 0x16ae88: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x16ae88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x16ae8c: 0x31af8  dsll        $v1, $v1, 11
    ctx->pc = 0x16ae8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 11);
    // 0x16ae90: 0x244474a0  addiu       $a0, $v0, 0x74A0
    ctx->pc = 0x16ae90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x16ae94: 0xdc8401a0  ld          $a0, 0x1A0($a0)
    ctx->pc = 0x16ae94u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 416)));
    // 0x16ae98: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16ae98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16ae9c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x16AE9Cu;
    {
        const bool branch_taken_0x16ae9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE9Cu;
        // 0x16aea0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae9c) {
            ctx->pc = 0x16AEE4u;
            goto label_16aee4;
        }
    }
    ctx->pc = 0x16AEA4u;
    // 0x16aea4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x16aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x16aea8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x16aea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x16aeac: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x16AEACu;
    {
        const bool branch_taken_0x16aeac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AEACu;
        // 0x16aeb0: 0x264374a0  addiu       $v1, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aeac) {
            ctx->pc = 0x16AEE8u;
            goto label_16aee8;
        }
    }
    ctx->pc = 0x16AEB4u;
    // 0x16aeb4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x16aeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x16aeb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16aeb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aebc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16aebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16aec0: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x16aec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x16aec4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16aec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16aec8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16aec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16aecc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16aeccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aed0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16AED0u;
    SET_GPR_U32(ctx, 31, 0x16AED8u);
    ctx->pc = 0x16AED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AED0u;
    // 0x16aed4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16AED0u, 0x16AED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AED8u;
label_16aed8:
    // 0x16aed8: 0x920301b4  lbu         $v1, 0x1B4($s0)
    ctx->pc = 0x16aed8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x16aedc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16aedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16aee0: 0xa20301b4  sb          $v1, 0x1B4($s0)
    ctx->pc = 0x16aee0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 436), (uint8_t)GPR_U32(ctx, 3));
label_16aee4:
    // 0x16aee4: 0x264374a0  addiu       $v1, $s2, 0x74A0
    ctx->pc = 0x16aee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
label_16aee8:
    // 0x16aee8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x16aee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16aeec: 0x215f8  dsll        $v0, $v0, 23
    ctx->pc = 0x16aeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
    // 0x16aef0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x16aef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x16aef4: 0x21338  dsll        $v0, $v0, 12
    ctx->pc = 0x16aef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 12);
    // 0x16aef8: 0xdc6301a0  ld          $v1, 0x1A0($v1)
    ctx->pc = 0x16aef8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 416)));
    // 0x16aefc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16aefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16af00: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16AF00u;
    {
        const bool branch_taken_0x16af00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF00u;
        // 0x16af04: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af00) {
            ctx->pc = 0x16AF44u;
            goto label_16af44;
        }
    }
    ctx->pc = 0x16AF08u;
    // 0x16af08: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16af08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16af0c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x16AF0Cu;
    {
        const bool branch_taken_0x16af0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF0Cu;
        // 0x16af10: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af0c) {
            ctx->pc = 0x16AF48u;
            goto label_16af48;
        }
    }
    ctx->pc = 0x16AF14u;
    // 0x16af14: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x16af14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x16af18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16af18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af1c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16af1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16af20: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x16af20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x16af24: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16af24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16af28: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16af28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16af2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16af2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af30: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16AF30u;
    SET_GPR_U32(ctx, 31, 0x16AF38u);
    ctx->pc = 0x16AF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AF30u;
    // 0x16af34: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16AF30u, 0x16AF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AF38u;
label_16af38:
    // 0x16af38: 0x920301b4  lbu         $v1, 0x1B4($s0)
    ctx->pc = 0x16af38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x16af3c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16af3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16af40: 0xa20301b4  sb          $v1, 0x1B4($s0)
    ctx->pc = 0x16af40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 436), (uint8_t)GPR_U32(ctx, 3));
label_16af44:
    // 0x16af44: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x16af44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_16af48:
    // 0x16af48: 0x8c62d930  lw          $v0, -0x26D0($v1)
    ctx->pc = 0x16af48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957360)));
    // 0x16af4c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x16af4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af50: 0x80430edd  lb          $v1, 0xEDD($v0)
    ctx->pc = 0x16af50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3805)));
    // 0x16af54: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16AF54u;
    {
        const bool branch_taken_0x16af54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF54u;
        // 0x16af58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af54) {
            ctx->pc = 0x16AF6Cu;
            goto label_16af6c;
        }
    }
    ctx->pc = 0x16AF5Cu;
    // 0x16af5c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16AF5Cu;
    {
        const bool branch_taken_0x16af5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF5Cu;
        // 0x16af60: 0x264274a0  addiu       $v0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af5c) {
            ctx->pc = 0x16AF88u;
            goto label_16af88;
        }
    }
    ctx->pc = 0x16AF64u;
    // 0x16af64: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x16AF64u;
    {
        const bool branch_taken_0x16af64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF64u;
        // 0x16af68: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af64) {
            ctx->pc = 0x16AFB8u;
            goto label_16afb8;
        }
    }
    ctx->pc = 0x16AF6Cu;
label_16af6c:
    // 0x16af6c: 0x820201b4  lb          $v0, 0x1B4($s0)
    ctx->pc = 0x16af6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x16af70: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16AF70u;
    {
        const bool branch_taken_0x16af70 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x16AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF70u;
        // 0x16af74: 0x920401b4  lbu         $a0, 0x1B4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af70) {
            ctx->pc = 0x16AF80u;
            goto label_16af80;
        }
    }
    ctx->pc = 0x16AF78u;
    // 0x16af78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16AF78u;
    {
        const bool branch_taken_0x16af78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF78u;
        // 0x16af7c: 0x28420004  slti        $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af78) {
            ctx->pc = 0x16AF98u;
            goto label_16af98;
        }
    }
    ctx->pc = 0x16AF80u;
label_16af80:
    // 0x16af80: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16AF80u;
    {
        const bool branch_taken_0x16af80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF80u;
        // 0x16af84: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af80) {
            ctx->pc = 0x16AFACu;
            goto label_16afac;
        }
    }
    ctx->pc = 0x16AF88u;
label_16af88:
    // 0x16af88: 0x820201b4  lb          $v0, 0x1B4($s0)
    ctx->pc = 0x16af88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x16af8c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16AF8Cu;
    {
        const bool branch_taken_0x16af8c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x16AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF8Cu;
        // 0x16af90: 0x920401b4  lbu         $a0, 0x1B4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af8c) {
            ctx->pc = 0x16AFA8u;
            goto label_16afa8;
        }
    }
    ctx->pc = 0x16AF94u;
    // 0x16af94: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x16af94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_16af98:
    // 0x16af98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AF98u;
    {
        const bool branch_taken_0x16af98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF98u;
        // 0x16af9c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af98) {
            ctx->pc = 0x16AFACu;
            goto label_16afac;
        }
    }
    ctx->pc = 0x16AFA0u;
    // 0x16afa0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16AFA0u;
    {
        const bool branch_taken_0x16afa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFA0u;
        // 0x16afa4: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16afa0) {
            ctx->pc = 0x16AFACu;
            goto label_16afac;
        }
    }
    ctx->pc = 0x16AFA8u;
label_16afa8:
    // 0x16afa8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16afa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16afac:
    // 0x16afac: 0xa20301b4  sb          $v1, 0x1B4($s0)
    ctx->pc = 0x16afacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 436), (uint8_t)GPR_U32(ctx, 3));
    // 0x16afb0: 0x264274a0  addiu       $v0, $s2, 0x74A0
    ctx->pc = 0x16afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
    // 0x16afb4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x16afb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_16afb8:
    // 0x16afb8: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x16afb8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x16afbc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16afbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x16afc0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x16AFC0u;
    {
        const bool branch_taken_0x16afc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFC0u;
        // 0x16afc4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16afc0) {
            ctx->pc = 0x16B038u;
            goto label_16b038;
        }
    }
    ctx->pc = 0x16AFC8u;
    // 0x16afc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16afc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16afcc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16afccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16afd0: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x16afd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x16afd4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16afd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16afd8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16afd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16afdc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16afdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16afe0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16AFE0u;
    SET_GPR_U32(ctx, 31, 0x16AFE8u);
    ctx->pc = 0x16AFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AFE0u;
    // 0x16afe4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16AFE0u, 0x16AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AFE8u;
label_16afe8:
    // 0x16afe8: 0x8e23d930  lw          $v1, -0x26D0($s1)
    ctx->pc = 0x16afe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294957360)));
    // 0x16afec: 0x80640edd  lb          $a0, 0xEDD($v1)
    ctx->pc = 0x16afecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 3805)));
    // 0x16aff0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16AFF0u;
    {
        const bool branch_taken_0x16aff0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFF0u;
        // 0x16aff4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aff0) {
            ctx->pc = 0x16B00Cu;
            goto label_16b00c;
        }
    }
    ctx->pc = 0x16AFF8u;
    // 0x16aff8: 0x820301b4  lb          $v1, 0x1B4($s0)
    ctx->pc = 0x16aff8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x16affc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16affcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b000: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16B000u;
    {
        const bool branch_taken_0x16b000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B000u;
        // 0x16b004: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b000) {
            ctx->pc = 0x16B024u;
            goto label_16b024;
        }
    }
    ctx->pc = 0x16B008u;
    // 0x16b008: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16b008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16b00c:
    // 0x16b00c: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16B00Cu;
    {
        const bool branch_taken_0x16b00c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x16B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B00Cu;
        // 0x16b010: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b00c) {
            ctx->pc = 0x16B034u;
            goto label_16b034;
        }
    }
    ctx->pc = 0x16B014u;
    // 0x16b014: 0x820201b4  lb          $v0, 0x1B4($s0)
    ctx->pc = 0x16b014u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x16b018: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16B018u;
    {
        const bool branch_taken_0x16b018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B018u;
        // 0x16b01c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b018) {
            ctx->pc = 0x16B034u;
            goto label_16b034;
        }
    }
    ctx->pc = 0x16B020u;
    // 0x16b020: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16b020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16b024:
    // 0x16b024: 0xa60001d2  sh          $zero, 0x1D2($s0)
    ctx->pc = 0x16b024u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 466), (uint16_t)GPR_U32(ctx, 0));
    // 0x16b028: 0xa202005a  sb          $v0, 0x5A($s0)
    ctx->pc = 0x16b028u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 2));
    // 0x16b02c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16B02Cu;
    {
        const bool branch_taken_0x16b02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B02Cu;
        // 0x16b030: 0xa60001d0  sh          $zero, 0x1D0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 464), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b02c) {
            ctx->pc = 0x16B038u;
            goto label_16b038;
        }
    }
    ctx->pc = 0x16B034u;
label_16b034:
    // 0x16b034: 0xa202005a  sb          $v0, 0x5A($s0)
    ctx->pc = 0x16b034u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 2));
label_16b038:
    // 0x16b038: 0x264274a0  addiu       $v0, $s2, 0x74A0
    ctx->pc = 0x16b038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
    // 0x16b03c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x16b03cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x16b040: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x16b040u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x16b044: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16b044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x16b048: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x16B048u;
    {
        const bool branch_taken_0x16b048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B048u;
        // 0x16b04c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b048) {
            ctx->pc = 0x16B1A0u;
            goto label_16b1a0;
        }
    }
    ctx->pc = 0x16B050u;
    // 0x16b050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b054: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16b054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16b058: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x16b058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x16b05c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16b05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b060: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16b060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b064: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16b064u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b068: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16B068u;
    SET_GPR_U32(ctx, 31, 0x16B070u);
    ctx->pc = 0x16B06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B068u;
    // 0x16b06c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16B068u, 0x16B070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B070u;
label_16b070:
    // 0x16b070: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x16b070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16b074: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x16B074u;
    {
        const bool branch_taken_0x16b074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B074u;
        // 0x16b078: 0xa203005a  sb          $v1, 0x5A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b074) {
            ctx->pc = 0x16B19Cu;
            goto label_16b19c;
        }
    }
    ctx->pc = 0x16B07Cu;
label_16b07c:
    // 0x16b07c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b080: 0xc05af1e  jal         func_16BC78
    ctx->pc = 0x16B080u;
    SET_GPR_U32(ctx, 31, 0x16B088u);
    ctx->pc = 0x16B084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B080u;
    // 0x16b084: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BC78u, 0x16B080u, 0x16B088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B088u;
label_16b088:
    // 0x16b088: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x16B088u;
    {
        const bool branch_taken_0x16b088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B088u;
        // 0x16b08c: 0x264274a0  addiu       $v0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b088) {
            ctx->pc = 0x16B1A0u;
            goto label_16b1a0;
        }
    }
    ctx->pc = 0x16B090u;
label_16b090:
    // 0x16b090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b094: 0xc05af28  jal         func_16BCA0
    ctx->pc = 0x16B094u;
    SET_GPR_U32(ctx, 31, 0x16B09Cu);
    ctx->pc = 0x16B098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B094u;
    // 0x16b098: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BCA0u, 0x16B094u, 0x16B09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B09Cu;
label_16b09c:
    // 0x16b09c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x16B09Cu;
    {
        const bool branch_taken_0x16b09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B09Cu;
        // 0x16b0a0: 0x264274a0  addiu       $v0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b09c) {
            ctx->pc = 0x16B1A0u;
            goto label_16b1a0;
        }
    }
    ctx->pc = 0x16B0A4u;
label_16b0a4:
    // 0x16b0a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b0a8: 0xc05af30  jal         func_16BCC0
    ctx->pc = 0x16B0A8u;
    SET_GPR_U32(ctx, 31, 0x16B0B0u);
    ctx->pc = 0x16B0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B0A8u;
    // 0x16b0ac: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BCC0u, 0x16B0A8u, 0x16B0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B0B0u;
label_16b0b0:
    // 0x16b0b0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x16B0B0u;
    {
        const bool branch_taken_0x16b0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B0B0u;
        // 0x16b0b4: 0x264274a0  addiu       $v0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b0b0) {
            ctx->pc = 0x16B1A0u;
            goto label_16b1a0;
        }
    }
    ctx->pc = 0x16B0B8u;
label_16b0b8:
    // 0x16b0b8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x16b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x16b0bc: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x16b0bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16b0c0: 0x42678  dsll        $a0, $a0, 25
    ctx->pc = 0x16b0c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 25);
    // 0x16b0c4: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x16b0c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x16b0c8: 0x422f8  dsll        $a0, $a0, 11
    ctx->pc = 0x16b0c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 11);
    // 0x16b0cc: 0x245174a0  addiu       $s1, $v0, 0x74A0
    ctx->pc = 0x16b0ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x16b0d0: 0xde2301b0  ld          $v1, 0x1B0($s1)
    ctx->pc = 0x16b0d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x16b0d4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16b0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x16b0d8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x16B0D8u;
    {
        const bool branch_taken_0x16b0d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B0D8u;
        // 0x16b0dc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b0d8) {
            ctx->pc = 0x16B110u;
            goto label_16b110;
        }
    }
    ctx->pc = 0x16B0E0u;
    // 0x16b0e0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x16b0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x16b0e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b0e8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16b0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16b0ec: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x16b0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x16b0f0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16b0f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b0f4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16b0f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b0f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16b0f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b0fc: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16B0FCu;
    SET_GPR_U32(ctx, 31, 0x16B104u);
    ctx->pc = 0x16B100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B0FCu;
    // 0x16b100: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16B0FCu, 0x16B104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B104u;
label_16b104:
    // 0x16b104: 0x920301d4  lbu         $v1, 0x1D4($s0)
    ctx->pc = 0x16b104u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x16b108: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x16b108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x16b10c: 0xa20301d4  sb          $v1, 0x1D4($s0)
    ctx->pc = 0x16b10cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 468), (uint8_t)GPR_U32(ctx, 3));
label_16b110:
    // 0x16b110: 0xde2201b0  ld          $v0, 0x1B0($s1)
    ctx->pc = 0x16b110u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x16b114: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x16b114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16b118: 0x31df8  dsll        $v1, $v1, 23
    ctx->pc = 0x16b118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 23);
    // 0x16b11c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x16b11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x16b120: 0x31b38  dsll        $v1, $v1, 12
    ctx->pc = 0x16b120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 12);
    // 0x16b124: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16b124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x16b128: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16B128u;
    {
        const bool branch_taken_0x16b128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B128u;
        // 0x16b12c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b128) {
            ctx->pc = 0x16B15Cu;
            goto label_16b15c;
        }
    }
    ctx->pc = 0x16B130u;
    // 0x16b130: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b134: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16b134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16b138: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x16b138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x16b13c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16b13cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b140: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16b140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b144: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16b144u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b148: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16B148u;
    SET_GPR_U32(ctx, 31, 0x16B150u);
    ctx->pc = 0x16B14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B148u;
    // 0x16b14c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16B148u, 0x16B150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B150u;
label_16b150:
    // 0x16b150: 0x920301d4  lbu         $v1, 0x1D4($s0)
    ctx->pc = 0x16b150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x16b154: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x16b154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x16b158: 0xa20301d4  sb          $v1, 0x1D4($s0)
    ctx->pc = 0x16b158u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 468), (uint8_t)GPR_U32(ctx, 3));
label_16b15c:
    // 0x16b15c: 0xde2201a0  ld          $v0, 0x1A0($s1)
    ctx->pc = 0x16b15cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x16b160: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x16b160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x16b164: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16b164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x16b168: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16B168u;
    {
        const bool branch_taken_0x16b168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B168u;
        // 0x16b16c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b168) {
            ctx->pc = 0x16B19Cu;
            goto label_16b19c;
        }
    }
    ctx->pc = 0x16B170u;
    // 0x16b170: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b174: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16b174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16b178: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x16b178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x16b17c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16b17cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b180: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16b180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b184: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16b184u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b188: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16B188u;
    SET_GPR_U32(ctx, 31, 0x16B190u);
    ctx->pc = 0x16B18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B188u;
    // 0x16b18c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16B188u, 0x16B190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B190u;
label_16b190:
    // 0x16b190: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x16b190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16b194: 0xa200005a  sb          $zero, 0x5A($s0)
    ctx->pc = 0x16b194u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x16b198: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x16b198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_16b19c:
    // 0x16b19c: 0x264274a0  addiu       $v0, $s2, 0x74A0
    ctx->pc = 0x16b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
label_16b1a0:
    // 0x16b1a0: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x16b1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x16b1a4: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x16b1a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x16b1a8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16b1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x16b1ac: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x16B1ACu;
    {
        const bool branch_taken_0x16b1ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B1ACu;
        // 0x16b1b0: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b1ac) {
            ctx->pc = 0x16B1DCu;
            goto label_16b1dc;
        }
    }
    ctx->pc = 0x16B1B4u;
    // 0x16b1b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1b8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16b1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16b1bc: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x16b1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x16b1c0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16b1c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b1c4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16b1c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b1c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16b1c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1cc: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16B1CCu;
    SET_GPR_U32(ctx, 31, 0x16B1D4u);
    ctx->pc = 0x16B1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B1CCu;
    // 0x16b1d0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16B1CCu, 0x16B1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B1D4u;
label_16b1d4:
    // 0x16b1d4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x16b1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16b1d8: 0xa203005a  sb          $v1, 0x5A($s0)
    ctx->pc = 0x16b1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 3));
label_16b1dc:
    // 0x16b1dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16b1dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b1e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16b1e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b1e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16b1e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b1e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x16B1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B1ECu;
        // 0x16b1f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B1F4u;
    // 0x16b1f4: 0x0  nop
    ctx->pc = 0x16b1f4u;
    // NOP
    ctx->pc = 0x16b1f8u;
}
