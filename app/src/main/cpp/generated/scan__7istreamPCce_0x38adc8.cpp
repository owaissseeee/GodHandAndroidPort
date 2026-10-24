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

// Function: scan__7istreamPCce
// Address: 0x38adc8 - 0x38ae80
void scan__7istreamPCce_0x38adc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scan__7istreamPCce_0x38adc8");
#endif

    switch (ctx->pc) {
        case 0x38ae28u: goto label_38ae28;
        case 0x38ae4cu: goto label_38ae4c;
        case 0x38ae68u: goto label_38ae68;
        default: break;
    }

    ctx->pc = 0x38adc8u;

    // 0x38adc8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x38adc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x38adcc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38adccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38add0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38add0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38add4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38add4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38add8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38add8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38addc: 0xffa60070  sd          $a2, 0x70($sp)
    ctx->pc = 0x38addcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 6));
    // 0x38ade0: 0xffa70078  sd          $a3, 0x78($sp)
    ctx->pc = 0x38ade0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 7));
    // 0x38ade4: 0xffa80080  sd          $t0, 0x80($sp)
    ctx->pc = 0x38ade4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 8));
    // 0x38ade8: 0xffa90088  sd          $t1, 0x88($sp)
    ctx->pc = 0x38ade8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 9));
    // 0x38adec: 0xffaa0090  sd          $t2, 0x90($sp)
    ctx->pc = 0x38adecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 10));
    // 0x38adf0: 0xffab0098  sd          $t3, 0x98($sp)
    ctx->pc = 0x38adf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 11));
    // 0x38adf4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38adf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38adf8: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x38adf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x38adfc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38ADFCu;
    {
        const bool branch_taken_0x38adfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADFCu;
        // 0x38ae00: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38adfc) {
            ctx->pc = 0x38AE14u;
            goto label_38ae14;
        }
    }
    ctx->pc = 0x38AE04u;
    // 0x38ae04: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x38ae04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x38ae08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x38ae08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ae0c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x38AE0Cu;
    {
        const bool branch_taken_0x38ae0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE0Cu;
        // 0x38ae10: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ae0c) {
            ctx->pc = 0x38AE50u;
            goto label_38ae50;
        }
    }
    ctx->pc = 0x38AE14u;
label_38ae14:
    // 0x38ae14: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x38ae14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x38ae18: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x38AE18u;
    {
        const bool branch_taken_0x38ae18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ae18) {
            ctx->pc = 0x38AE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38AE18u;
            // 0x38ae1c: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38AE30u;
            goto label_38ae30;
        }
    }
    ctx->pc = 0x38AE20u;
    // 0x38ae20: 0xc0e249a  jal         func_389268
    ctx->pc = 0x38AE20u;
    SET_GPR_U32(ctx, 31, 0x38AE28u);
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x38AE20u, 0x38AE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AE28u;
label_38ae28:
    // 0x38ae28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38ae28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38ae2c: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x38ae2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_38ae30:
    // 0x38ae30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38ae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x38ae34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x38ae34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x38ae38: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38ae38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x38ae3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38AE3Cu;
    {
        const bool branch_taken_0x38ae3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE3Cu;
        // 0x38ae40: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ae3c) {
            ctx->pc = 0x38AE50u;
            goto label_38ae50;
        }
    }
    ctx->pc = 0x38AE44u;
    // 0x38ae44: 0xc0e24e6  jal         func_389398
    ctx->pc = 0x38AE44u;
    SET_GPR_U32(ctx, 31, 0x38AE4Cu);
    ctx->pc = 0x38AE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AE44u;
    // 0x38ae48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389398u, 0x38AE44u, 0x38AE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AE4Cu;
label_38ae4c:
    // 0x38ae4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38ae4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38ae50:
    // 0x38ae50: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38AE50u;
    {
        const bool branch_taken_0x38ae50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE50u;
        // 0x38ae54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ae50) {
            ctx->pc = 0x38AE68u;
            goto label_38ae68;
        }
    }
    ctx->pc = 0x38AE58u;
    // 0x38ae58: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x38ae58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38ae5c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x38ae5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x38ae60: 0xc0e2bcc  jal         func_38AF30
    ctx->pc = 0x38AE60u;
    SET_GPR_U32(ctx, 31, 0x38AE68u);
    ctx->pc = 0x38AE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AE60u;
    // 0x38ae64: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AF30u, 0x38AE60u, 0x38AE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AE68u;
label_38ae68:
    // 0x38ae68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38ae68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ae6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38ae6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38ae70: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38ae70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38ae74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38ae74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ae78: 0x3e00008  jr          $ra
    ctx->pc = 0x38AE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE78u;
        // 0x38ae7c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38AE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38AE80u;
}
