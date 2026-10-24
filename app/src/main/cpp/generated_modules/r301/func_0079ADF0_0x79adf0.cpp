#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: func_0079ADF0
// Address: 0x79adf0 - 0x79af10
void func_0079ADF0_0x79adf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079ADF0_0x79adf0");
#endif

    switch (ctx->pc) {
        case 0x79ae48u: goto label_79ae48;
        case 0x79ae78u: goto label_79ae78;
        case 0x79ae8cu: goto label_79ae8c;
        case 0x79aebcu: goto label_79aebc;
        case 0x79aef0u: goto label_79aef0;
        case 0x79aef8u: goto label_79aef8;
        default: break;
    }

    ctx->pc = 0x79adf0u;

    // 0x79adf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79adf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79adf4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x79adf8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79adf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79adfc: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x79adfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x79ae00: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x79ae00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x79ae04: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79ae04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79ae08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x79ae08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79ae0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79ae10: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x79ae10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79ae14: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79ae18: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x79ae18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x79ae1c: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x79AE1Cu;
    {
        const bool branch_taken_0x79ae1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE1Cu;
        // 0x79ae20: 0x3c11007a  lui         $s1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae1c) {
            ctx->pc = 0x79AEF0u;
            goto label_79aef0;
        }
    }
    ctx->pc = 0x79AE24u;
    // 0x79ae24: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79ae28: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79ae28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79ae2c: 0x8044dd20  lb          $a0, -0x22E0($v0)
    ctx->pc = 0x79ae2cu;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79DD20u));
    // 0x79ae30: 0x2446dd20  addiu       $a2, $v0, -0x22E0
    ctx->pc = 0x79ae30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958368));
    // 0x79ae34: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x79ae34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79ae38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79ae38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae3c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x79AE3Cu;
    {
        const bool branch_taken_0x79ae3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE3Cu;
        // 0x79ae40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae3c) {
            ctx->pc = 0x79AE70u;
            goto label_79ae70;
        }
    }
    ctx->pc = 0x79AE44u;
    // 0x79ae44: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79ae44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79ae48:
    // 0x79ae48: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79ae48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79ae4c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79ae4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79ae50: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79ae50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79ae54: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79ae54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79ae58: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79ae58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79ae5c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AE5Cu;
    {
        const bool branch_taken_0x79ae5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE5Cu;
        // 0x79ae60: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae5c) {
            ctx->pc = 0x79AE70u;
            goto label_79ae70;
        }
    }
    ctx->pc = 0x79AE64u;
    // 0x79ae64: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79ae64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79ae68: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79AE68u;
    {
        const bool branch_taken_0x79ae68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ae68) {
            ctx->pc = 0x79AE6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AE68u;
            // 0x79ae6c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ae48;
        }
    }
    ctx->pc = 0x79AE70u;
label_79ae70:
    // 0x79ae70: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79AE70u;
    SET_GPR_U32(ctx, 31, 0x79AE78u);
    ctx->pc = 0x79AE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE70u;
    // 0x79ae74: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79AE70u, 0x79AE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE78u;
label_79ae78:
    // 0x79ae78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79ae78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae7c: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x79AE7Cu;
    {
        const bool branch_taken_0x79ae7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ae7c) {
            ctx->pc = 0x79AEF0u;
            goto label_79aef0;
        }
    }
    ctx->pc = 0x79AE84u;
    // 0x79ae84: 0xc0693c4  jal         func_1A4F10
    ctx->pc = 0x79AE84u;
    SET_GPR_U32(ctx, 31, 0x79AE8Cu);
    ctx->pc = 0x79AE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE84u;
    // 0x79ae88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F10u, 0x79AE84u, 0x79AE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE8Cu;
label_79ae8c:
    // 0x79ae8c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x79AE8Cu;
    {
        const bool branch_taken_0x79ae8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE8Cu;
        // 0x79ae90: 0x8e438658  lw          $v1, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae8c) {
            ctx->pc = 0x79AEF0u;
            goto label_79aef0;
        }
    }
    ctx->pc = 0x79AE94u;
    // 0x79ae94: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x79ae94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x79ae98: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x79ae98u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x79ae9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79ae9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aea0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79aea4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79aea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aea8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79aea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aeac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x79aeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x79aeb0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79aeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x79aeb4: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x79AEB4u;
    SET_GPR_U32(ctx, 31, 0x79AEBCu);
    ctx->pc = 0x79AEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEB4u;
    // 0x79aeb8: 0x8d04264c  lw          $a0, 0x264C($t0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x79AEB4u, 0x79AEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEBCu;
label_79aebc:
    // 0x79aebc: 0x8e448658  lw          $a0, -0x79A8($s2)
    ctx->pc = 0x79aebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
    // 0x79aec0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x79aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x79aec4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79aec8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79aec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79aecc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x79aeccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x79aed0: 0x8e23e010  lw          $v1, -0x1FF0($s1)
    ctx->pc = 0x79aed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294959120)));
    // 0x79aed4: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x79aed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x79aed8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AED8u;
    {
        const bool branch_taken_0x79aed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AED8u;
        // 0x79aedc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aed8) {
            ctx->pc = 0x79AEE8u;
            goto label_79aee8;
        }
    }
    ctx->pc = 0x79AEE0u;
    // 0x79aee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79aee4: 0xac620094  sw          $v0, 0x94($v1)
    ctx->pc = 0x79aee4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 2));
label_79aee8:
    // 0x79aee8: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x79AEE8u;
    SET_GPR_U32(ctx, 31, 0x79AEF0u);
    ctx->pc = 0x79AEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEE8u;
    // 0x79aeec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x79AEE8u, 0x79AEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEF0u;
label_79aef0:
    // 0x79aef0: 0xc1e6ebc  jal         func_79BAF0
    ctx->pc = 0x79AEF0u;
    SET_GPR_U32(ctx, 31, 0x79AEF8u);
    ctx->pc = 0x79AEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEF0u;
    // 0x79aef4: 0x8e24e010  lw          $a0, -0x1FF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294959120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BAF0u, 0x79AEF0u, 0x79AEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEF8u;
label_79aef8:
    // 0x79aef8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79aef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79aefc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79aefcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79af00: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x79af00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79af04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79af04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79af08: 0x3e00008  jr          $ra
    ctx->pc = 0x79AF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF08u;
        // 0x79af0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AF10u;
}
} // namespace gh_r301
