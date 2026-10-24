#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r700_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r700
{
// Function: func_0079AD90
// Address: 0x79ad90 - 0x79af58
void func_0079AD90_0x79ad90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079AD90_0x79ad90");
#endif

    switch (ctx->pc) {
        case 0x79ade0u: goto label_79ade0;
        case 0x79ae08u: goto label_79ae08;
        case 0x79ae38u: goto label_79ae38;
        case 0x79ae70u: goto label_79ae70;
        case 0x79ae84u: goto label_79ae84;
        case 0x79ae94u: goto label_79ae94;
        case 0x79aeacu: goto label_79aeac;
        case 0x79aec4u: goto label_79aec4;
        case 0x79aed8u: goto label_79aed8;
        case 0x79aeecu: goto label_79aeec;
        case 0x79aefcu: goto label_79aefc;
        case 0x79af00u: goto label_79af00;
        case 0x79af20u: goto label_79af20;
        default: break;
    }

    ctx->pc = 0x79ad90u;

    // 0x79ad90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x79ad90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x79ad94: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79ad94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79ad98: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x79ad98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x79ad9c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79ada0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x79ada0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x79ada4: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x79ada4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x79ada8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x79ada8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x79adac: 0x24724c58  addiu       $s2, $v1, 0x4C58
    ctx->pc = 0x79adacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79adb0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x79adb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x79adb4: 0x2453c118  addiu       $s3, $v0, -0x3EE8
    ctx->pc = 0x79adb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951192));
    // 0x79adb8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x79adb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x79adbc: 0x4b880  sll         $s7, $a0, 2
    ctx->pc = 0x79adbcu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x79adc0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x79adc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x79adc4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x79adc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79adc8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x79adc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x79adcc: 0x3631fffd  ori         $s1, $s1, 0xFFFD
    ctx->pc = 0x79adccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65533);
    // 0x79add0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x79add0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x79add4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79add4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79add8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x79add8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79addc: 0x0  nop
    ctx->pc = 0x79addcu;
    // NOP
label_79ade0:
    // 0x79ade0: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x79ade0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79ade4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x79ade4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x79ade8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79ade8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79adec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79adecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79adf0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x79adf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79adf4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79ADF4u;
    {
        const bool branch_taken_0x79adf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADF4u;
        // 0x79adf8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79adf4) {
            ctx->pc = 0x79AE30u;
            goto label_79ae30;
        }
    }
    ctx->pc = 0x79ADFCu;
    // 0x79adfc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79adfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae00: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79ae00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79ae04: 0x0  nop
    ctx->pc = 0x79ae04u;
    // NOP
label_79ae08:
    // 0x79ae08: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79ae08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79ae0c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79ae0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79ae10: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79ae10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79ae14: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79ae14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79ae18: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79ae18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79ae1c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AE1Cu;
    {
        const bool branch_taken_0x79ae1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE1Cu;
        // 0x79ae20: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae1c) {
            ctx->pc = 0x79AE30u;
            goto label_79ae30;
        }
    }
    ctx->pc = 0x79AE24u;
    // 0x79ae24: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79ae24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79ae28: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79AE28u;
    {
        const bool branch_taken_0x79ae28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ae28) {
            ctx->pc = 0x79AE2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AE28u;
            // 0x79ae2c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ae08;
        }
    }
    ctx->pc = 0x79AE30u;
label_79ae30:
    // 0x79ae30: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79AE30u;
    SET_GPR_U32(ctx, 31, 0x79AE38u);
    ctx->pc = 0x79AE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE30u;
    // 0x79ae34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79AE30u, 0x79AE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE38u;
label_79ae38:
    // 0x79ae38: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x79ae38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae3c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79AE3Cu;
    {
        const bool branch_taken_0x79ae3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ae3c) {
            ctx->pc = 0x79AE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AE3Cu;
            // 0x79ae40: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AE54u;
            goto label_79ae54;
        }
    }
    ctx->pc = 0x79AE44u;
    // 0x79ae44: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x79ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x79ae48: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x79ae48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x79ae4c: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x79ae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
    // 0x79ae50: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x79ae50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79ae54:
    // 0x79ae54: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x79ae54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x79ae58: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x79AE58u;
    {
        const bool branch_taken_0x79ae58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE58u;
        // 0x79ae5c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae58) {
            ctx->pc = 0x79ADE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ade0;
        }
    }
    ctx->pc = 0x79AE60u;
    // 0x79ae60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79ae60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ae64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79ae64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ae68: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79AE68u;
    SET_GPR_U32(ctx, 31, 0x79AE70u);
    ctx->pc = 0x79AE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE68u;
    // 0x79ae6c: 0x3c11005d  lui         $s1, 0x5D (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79AE68u, 0x79AE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE70u;
label_79ae70:
    // 0x79ae70: 0x2631ae50  addiu       $s1, $s1, -0x51B0
    ctx->pc = 0x79ae70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946384));
    // 0x79ae74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79ae74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ae78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79ae78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae7c: 0xc04cccc  jal         func_133330
    ctx->pc = 0x79AE7Cu;
    SET_GPR_U32(ctx, 31, 0x79AE84u);
    ctx->pc = 0x79AE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE7Cu;
    // 0x79ae80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x79AE7Cu, 0x79AE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE84u;
label_79ae84:
    // 0x79ae84: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79ae84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79ae88: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x79ae88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79ae8c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79AE8Cu;
    SET_GPR_U32(ctx, 31, 0x79AE94u);
    ctx->pc = 0x79AE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE8Cu;
    // 0x79ae90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79AE8Cu, 0x79AE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE94u;
label_79ae94:
    // 0x79ae94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79ae94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79ae98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79ae9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79aea0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79aea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aea4: 0xc04cccc  jal         func_133330
    ctx->pc = 0x79AEA4u;
    SET_GPR_U32(ctx, 31, 0x79AEACu);
    ctx->pc = 0x79AEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEA4u;
    // 0x79aea8: 0x24160009  addiu       $s6, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x79AEA4u, 0x79AEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEACu;
label_79aeac:
    // 0x79aeac: 0x2415000d  addiu       $s5, $zero, 0xD
    ctx->pc = 0x79aeacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x79aeb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79aeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aeb4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x79aeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79aeb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79aeb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79aebc: 0xc04cccc  jal         func_133330
    ctx->pc = 0x79AEBCu;
    SET_GPR_U32(ctx, 31, 0x79AEC4u);
    ctx->pc = 0x79AEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEBCu;
    // 0x79aec0: 0x2414000e  addiu       $s4, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x79AEBCu, 0x79AEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEC4u;
label_79aec4:
    // 0x79aec4: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x79aec4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
    // 0x79aec8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79aec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79aecc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79aeccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aed0: 0xc04cccc  jal         func_133330
    ctx->pc = 0x79AED0u;
    SET_GPR_U32(ctx, 31, 0x79AED8u);
    ctx->pc = 0x79AED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AED0u;
    // 0x79aed4: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x79AED0u, 0x79AED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AED8u;
label_79aed8:
    // 0x79aed8: 0x2610c100  addiu       $s0, $s0, -0x3F00
    ctx->pc = 0x79aed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951168));
    // 0x79aedc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79aedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aee0: 0x2f08021  addu        $s0, $s7, $s0
    ctx->pc = 0x79aee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x79aee4: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79AEE4u;
    SET_GPR_U32(ctx, 31, 0x79AEECu);
    ctx->pc = 0x79AEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEE4u;
    // 0x79aee8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79AEE4u, 0x79AEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEECu;
label_79aeec:
    // 0x79aeec: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x79aeecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79aef0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79aef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aef4: 0xc04cccc  jal         func_133330
    ctx->pc = 0x79AEF4u;
    SET_GPR_U32(ctx, 31, 0x79AEFCu);
    ctx->pc = 0x79AEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEF4u;
    // 0x79aef8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x79AEF4u, 0x79AEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEFCu;
label_79aefc:
    // 0x79aefc: 0x0  nop
    ctx->pc = 0x79aefcu;
    // NOP
label_79af00:
    // 0x79af00: 0x52560008  beql        $s2, $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x79AF00u;
    {
        const bool branch_taken_0x79af00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 22));
        if (branch_taken_0x79af00) {
            ctx->pc = 0x79AF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AF00u;
            // 0x79af04: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AF24u;
            goto label_79af24;
        }
    }
    ctx->pc = 0x79AF08u;
    // 0x79af08: 0x12550005  beq         $s2, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x79AF08u;
    {
        const bool branch_taken_0x79af08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x79AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF08u;
        // 0x79af0c: 0x3245ffff  andi        $a1, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af08) {
            ctx->pc = 0x79AF20u;
            goto label_79af20;
        }
    }
    ctx->pc = 0x79AF10u;
    // 0x79af10: 0x12540003  beq         $s2, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AF10u;
    {
        const bool branch_taken_0x79af10 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        ctx->pc = 0x79AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF10u;
        // 0x79af14: 0x2664ea60  addiu       $a0, $s3, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af10) {
            ctx->pc = 0x79AF20u;
            goto label_79af20;
        }
    }
    ctx->pc = 0x79AF18u;
    // 0x79af18: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x79AF18u;
    SET_GPR_U32(ctx, 31, 0x79AF20u);
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x79AF18u, 0x79AF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF20u;
label_79af20:
    // 0x79af20: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x79af20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_79af24:
    // 0x79af24: 0x2a42000f  slti        $v0, $s2, 0xF
    ctx->pc = 0x79af24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x79af28: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x79AF28u;
    {
        const bool branch_taken_0x79af28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF28u;
        // 0x79af2c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af28) {
            ctx->pc = 0x79AF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79af00;
        }
    }
    ctx->pc = 0x79AF30u;
    // 0x79af30: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x79af30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79af34: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x79af34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79af38: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x79af38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79af3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x79af3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79af40: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x79af40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79af44: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x79af44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79af48: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x79af48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79af4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79af4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79af50: 0x3e00008  jr          $ra
    ctx->pc = 0x79AF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF50u;
        // 0x79af54: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AF58u;
}
} // namespace gh_r700
