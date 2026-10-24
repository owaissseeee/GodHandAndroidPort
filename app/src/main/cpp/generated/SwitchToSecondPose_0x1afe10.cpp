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

// Function: SwitchToSecondPose
// Address: 0x1afe10 - 0x1b0078
void SwitchToSecondPose_0x1afe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SwitchToSecondPose_0x1afe10");
#endif

    switch (ctx->pc) {
        case 0x1afe3cu: goto label_1afe3c;
        case 0x1afe50u: goto label_1afe50;
        case 0x1afe60u: goto label_1afe60;
        case 0x1afe70u: goto label_1afe70;
        case 0x1afe80u: goto label_1afe80;
        case 0x1afe90u: goto label_1afe90;
        case 0x1afea0u: goto label_1afea0;
        case 0x1afeb0u: goto label_1afeb0;
        case 0x1afec0u: goto label_1afec0;
        case 0x1afed0u: goto label_1afed0;
        case 0x1afee0u: goto label_1afee0;
        case 0x1aff18u: goto label_1aff18;
        case 0x1affc8u: goto label_1affc8;
        case 0x1b0030u: goto label_1b0030;
        case 0x1b0040u: goto label_1b0040;
        default: break;
    }

    ctx->pc = 0x1afe10u;

    // 0x1afe10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1afe10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1afe14: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1afe14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1afe18: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1afe18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1afe1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1afe1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe20: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1afe20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1afe24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1afe24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1afe28: 0x8e040600  lw          $a0, 0x600($s0)
    ctx->pc = 0x1afe28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1afe2c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFE2Cu;
    {
        const bool branch_taken_0x1afe2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afe2c) {
            ctx->pc = 0x1AFE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFE2Cu;
            // 0x1afe30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFE40u;
            goto label_1afe40;
        }
    }
    ctx->pc = 0x1AFE34u;
    // 0x1afe34: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1AFE34u;
    SET_GPR_U32(ctx, 31, 0x1AFE3Cu);
    ctx->pc = 0x1AFE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE34u;
    // 0x1afe38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1AFE34u, 0x1AFE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFE3Cu;
label_1afe3c:
    // 0x1afe3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afe3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1afe40:
    // 0x1afe40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1afe40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1afe44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe48: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AFE48u;
    SET_GPR_U32(ctx, 31, 0x1AFE50u);
    ctx->pc = 0x1AFE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE48u;
    // 0x1afe4c: 0x261105c0  addiu       $s1, $s0, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AFE48u, 0x1AFE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFE50u;
label_1afe50:
    // 0x1afe50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afe50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1afe54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1afe58: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AFE58u;
    SET_GPR_U32(ctx, 31, 0x1AFE60u);
    ctx->pc = 0x1AFE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE58u;
    // 0x1afe5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AFE58u, 0x1AFE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFE60u;
label_1afe60:
    // 0x1afe60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afe60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1afe64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1afe68: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AFE68u;
    SET_GPR_U32(ctx, 31, 0x1AFE70u);
    ctx->pc = 0x1AFE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE68u;
    // 0x1afe6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AFE68u, 0x1AFE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFE70u;
label_1afe70:
    // 0x1afe70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afe70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe74: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1afe74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1afe78: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AFE78u;
    SET_GPR_U32(ctx, 31, 0x1AFE80u);
    ctx->pc = 0x1AFE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE78u;
    // 0x1afe7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AFE78u, 0x1AFE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFE80u;
label_1afe80:
    // 0x1afe80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afe80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe84: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1afe84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1afe88: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AFE88u;
    SET_GPR_U32(ctx, 31, 0x1AFE90u);
    ctx->pc = 0x1AFE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE88u;
    // 0x1afe8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AFE88u, 0x1AFE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFE90u;
label_1afe90:
    // 0x1afe90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afe90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1afe94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe98: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x1AFE98u;
    SET_GPR_U32(ctx, 31, 0x1AFEA0u);
    ctx->pc = 0x1AFE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE98u;
    // 0x1afe9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1AFE98u, 0x1AFEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFEA0u;
label_1afea0:
    // 0x1afea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afea4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1afea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1afea8: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x1AFEA8u;
    SET_GPR_U32(ctx, 31, 0x1AFEB0u);
    ctx->pc = 0x1AFEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFEA8u;
    // 0x1afeac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1AFEA8u, 0x1AFEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFEB0u;
label_1afeb0:
    // 0x1afeb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afeb4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1afeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1afeb8: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x1AFEB8u;
    SET_GPR_U32(ctx, 31, 0x1AFEC0u);
    ctx->pc = 0x1AFEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFEB8u;
    // 0x1afebc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1AFEB8u, 0x1AFEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFEC0u;
label_1afec0:
    // 0x1afec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afec4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1afec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1afec8: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x1AFEC8u;
    SET_GPR_U32(ctx, 31, 0x1AFED0u);
    ctx->pc = 0x1AFECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFEC8u;
    // 0x1afecc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1AFEC8u, 0x1AFED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFED0u;
label_1afed0:
    // 0x1afed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afed4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1afed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1afed8: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x1AFED8u;
    SET_GPR_U32(ctx, 31, 0x1AFEE0u);
    ctx->pc = 0x1AFEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFED8u;
    // 0x1afedc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1AFED8u, 0x1AFEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFEE0u;
label_1afee0:
    // 0x1afee0: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x1afee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1afee4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1afee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1afee8: 0x920402b4  lbu         $a0, 0x2B4($s0)
    ctx->pc = 0x1afee8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1afeec: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1afeecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1afef0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1afef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1afef4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1afef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1afef8: 0x10850031  beq         $a0, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1AFEF8u;
    {
        const bool branch_taken_0x1afef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x1AFEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFEF8u;
        // 0x1afefc: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afef8) {
            ctx->pc = 0x1AFFC0u;
            goto label_1affc0;
        }
    }
    ctx->pc = 0x1AFF00u;
    // 0x1aff00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1aff00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff04: 0x240afff7  addiu       $t2, $zero, -0x9
    ctx->pc = 0x1aff04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1aff08: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x1aff08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x1aff0c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1aff0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aff10: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1aff10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1aff14: 0x0  nop
    ctx->pc = 0x1aff14u;
    // NOP
label_1aff18:
    // 0x1aff18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1aff18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff1c: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1aff1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1aff20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFF20u;
    {
        const bool branch_taken_0x1aff20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF20u;
        // 0x1aff24: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff20) {
            ctx->pc = 0x1AFF30u;
            goto label_1aff30;
        }
    }
    ctx->pc = 0x1AFF28u;
    // 0x1aff28: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1aff28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1aff2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1aff2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aff30:
    // 0x1aff30: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1aff30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1aff34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AFF34u;
    {
        const bool branch_taken_0x1aff34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF34u;
        // 0x1aff38: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff34) {
            ctx->pc = 0x1AFF4Cu;
            goto label_1aff4c;
        }
    }
    ctx->pc = 0x1AFF3Cu;
    // 0x1aff3c: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x1aff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1aff40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aff40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aff44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFF44u;
    {
        const bool branch_taken_0x1aff44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF44u;
        // 0x1aff48: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff44) {
            ctx->pc = 0x1AFF50u;
            goto label_1aff50;
        }
    }
    ctx->pc = 0x1AFF4Cu;
label_1aff4c:
    // 0x1aff4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1aff4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aff50:
    // 0x1aff50: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1aff50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1aff54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aff54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff58: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x1aff58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1aff5c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x1aff5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x1aff60: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1aff60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1aff64: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1aff64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1aff68: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFF68u;
    {
        const bool branch_taken_0x1aff68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF68u;
        // 0x1aff6c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff68) {
            ctx->pc = 0x1AFF78u;
            goto label_1aff78;
        }
    }
    ctx->pc = 0x1AFF70u;
    // 0x1aff70: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1aff70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1aff74: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1aff74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aff78:
    // 0x1aff78: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1aff78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1aff7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AFF7Cu;
    {
        const bool branch_taken_0x1aff7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF7Cu;
        // 0x1aff80: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff7c) {
            ctx->pc = 0x1AFF94u;
            goto label_1aff94;
        }
    }
    ctx->pc = 0x1AFF84u;
    // 0x1aff84: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x1aff84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1aff88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aff88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aff8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFF8Cu;
    {
        const bool branch_taken_0x1aff8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF8Cu;
        // 0x1aff90: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff8c) {
            ctx->pc = 0x1AFF98u;
            goto label_1aff98;
        }
    }
    ctx->pc = 0x1AFF94u;
label_1aff94:
    // 0x1aff94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1aff94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aff98:
    // 0x1aff98: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1aff98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1aff9c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aff9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1affa0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1affa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1affa4: 0x28a30009  slti        $v1, $a1, 0x9
    ctx->pc = 0x1affa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1affa8: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x1affa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x1affac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFFACu;
    {
        const bool branch_taken_0x1affac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFFACu;
        // 0x1affb0: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1affac) {
            ctx->pc = 0x1AFFC0u;
            goto label_1affc0;
        }
    }
    ctx->pc = 0x1AFFB4u;
    // 0x1affb4: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1affb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1affb8: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1AFFB8u;
    {
        const bool branch_taken_0x1affb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1affb8) {
            ctx->pc = 0x1AFFBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFFB8u;
            // 0x1affbc: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aff18;
        }
    }
    ctx->pc = 0x1AFFC0u;
label_1affc0:
    // 0x1affc0: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1AFFC0u;
    SET_GPR_U32(ctx, 31, 0x1AFFC8u);
    ctx->pc = 0x1AFFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFFC0u;
    // 0x1affc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1AFFC0u, 0x1AFFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFFC8u;
label_1affc8:
    // 0x1affc8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1affc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1affcc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1affccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1affd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1affd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1affd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1affd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1affd8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1affd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1affdc: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1affdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1affe0: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1affe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1affe4: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x1affe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1affe8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1affe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1affec: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1affecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1afff0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1afff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1afff4: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1afff4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afff8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1afff8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1afffc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1afffcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b0000: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b0000u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b0004: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1b0004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b0008: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1b0008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b000c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1b000cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b0010: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1b0010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1b0014: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x1b0014u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x1b0018: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b0018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b001c: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1b001cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1b0020: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b0020u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b0024: 0x1051000d  beq         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1B0024u;
    {
        const bool branch_taken_0x1b0024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1B0028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0024u;
        // 0x1b0028: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0024) {
            ctx->pc = 0x1B005Cu;
            goto label_1b005c;
        }
    }
    ctx->pc = 0x1B002Cu;
    // 0x1b002c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b002cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b0030:
    // 0x1b0030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0034: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1b0034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b0038: 0xc06bef4  jal         func_1AFBD0
    ctx->pc = 0x1B0038u;
    SET_GPR_U32(ctx, 31, 0x1B0040u);
    ctx->pc = 0x1B003Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0038u;
    // 0x1b003c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFBD0u, 0x1B0038u, 0x1B0040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0040u;
label_1b0040:
    // 0x1b0040: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b0040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b0044: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x1b0044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1b0048: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0048u;
    {
        const bool branch_taken_0x1b0048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0048) {
            ctx->pc = 0x1B004Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0048u;
            // 0x1b004c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0060u;
            goto label_1b0060;
        }
    }
    ctx->pc = 0x1B0050u;
    // 0x1b0050: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1b0050u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1b0054: 0x1451fff6  bne         $v0, $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B0054u;
    {
        const bool branch_taken_0x1b0054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1B0058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0054u;
        // 0x1b0058: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0054) {
            ctx->pc = 0x1B0030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0030;
        }
    }
    ctx->pc = 0x1B005Cu;
label_1b005c:
    // 0x1b005c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1b005cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b0060:
    // 0x1b0060: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1b0060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b0064: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b0064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b0068: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b0068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b006c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B006Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B006Cu;
        // 0x1b0070: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B006Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0074u;
    // 0x1b0074: 0x0  nop
    ctx->pc = 0x1b0074u;
    // NOP
    ctx->pc = 0x1b0078u;
}
