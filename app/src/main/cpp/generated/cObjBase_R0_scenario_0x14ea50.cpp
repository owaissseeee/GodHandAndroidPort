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

// Function: cObjBase_R0_scenario
// Address: 0x14ea50 - 0x14ead8
void cObjBase_R0_scenario_0x14ea50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObjBase_R0_scenario_0x14ea50");
#endif

    switch (ctx->pc) {
        case 0x14ea8cu: goto label_14ea8c;
        case 0x14ea9cu: goto label_14ea9c;
        case 0x14eaacu: goto label_14eaac;
        case 0x14eabcu: goto label_14eabc;
        case 0x14eaccu: goto label_14eacc;
        default: break;
    }

    ctx->pc = 0x14ea50u;

    // 0x14ea50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14ea50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14ea54: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x14ea54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ea58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ea5c: 0x90a302f5  lbu         $v1, 0x2F5($a1)
    ctx->pc = 0x14ea5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 757)));
    // 0x14ea60: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x14ea60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x14ea64: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x14EA64u;
    {
        const bool branch_taken_0x14ea64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA64u;
        // 0x14ea68: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ea64) {
            ctx->pc = 0x14EACCu;
            goto label_14eacc;
        }
    }
    ctx->pc = 0x14EA6Cu;
    // 0x14ea6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14ea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14ea70: 0x2442eb90  addiu       $v0, $v0, -0x1470
    ctx->pc = 0x14ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962064));
    // 0x14ea74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14ea78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14ea78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ea7c: 0x800008  jr          $a0
    ctx->pc = 0x14EA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14EA84u: goto label_14ea84;
            case 0x14EA94u: goto label_14ea94;
            case 0x14EAA4u: goto label_14eaa4;
            case 0x14EAB4u: goto label_14eab4;
            case 0x14EAC4u: goto label_14eac4;
            case 0x14EACCu: goto label_14eacc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EA7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14EA84u;
label_14ea84:
    // 0x14ea84: 0xc053ab6  jal         func_14EAD8
    ctx->pc = 0x14EA84u;
    SET_GPR_U32(ctx, 31, 0x14EA8Cu);
    ctx->pc = 0x14EA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EA84u;
    // 0x14ea88: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EAD8u, 0x14EA84u, 0x14EA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA8Cu;
label_14ea8c:
    // 0x14ea8c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x14EA8Cu;
    {
        const bool branch_taken_0x14ea8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA8Cu;
        // 0x14ea90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ea8c) {
            ctx->pc = 0x14EAD0u;
            goto label_14ead0;
        }
    }
    ctx->pc = 0x14EA94u;
label_14ea94:
    // 0x14ea94: 0xc053ae4  jal         func_14EB90
    ctx->pc = 0x14EA94u;
    SET_GPR_U32(ctx, 31, 0x14EA9Cu);
    ctx->pc = 0x14EA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EA94u;
    // 0x14ea98: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EB90u, 0x14EA94u, 0x14EA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA9Cu;
label_14ea9c:
    // 0x14ea9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14EA9Cu;
    {
        const bool branch_taken_0x14ea9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA9Cu;
        // 0x14eaa0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ea9c) {
            ctx->pc = 0x14EAD0u;
            goto label_14ead0;
        }
    }
    ctx->pc = 0x14EAA4u;
label_14eaa4:
    // 0x14eaa4: 0xc053b22  jal         func_14EC88
    ctx->pc = 0x14EAA4u;
    SET_GPR_U32(ctx, 31, 0x14EAACu);
    ctx->pc = 0x14EAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EAA4u;
    // 0x14eaa8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC88u, 0x14EAA4u, 0x14EAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EAACu;
label_14eaac:
    // 0x14eaac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14EAACu;
    {
        const bool branch_taken_0x14eaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EAACu;
        // 0x14eab0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eaac) {
            ctx->pc = 0x14EAD0u;
            goto label_14ead0;
        }
    }
    ctx->pc = 0x14EAB4u;
label_14eab4:
    // 0x14eab4: 0xc053b58  jal         func_14ED60
    ctx->pc = 0x14EAB4u;
    SET_GPR_U32(ctx, 31, 0x14EABCu);
    ctx->pc = 0x14EAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EAB4u;
    // 0x14eab8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ED60u, 0x14EAB4u, 0x14EABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EABCu;
label_14eabc:
    // 0x14eabc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14EABCu;
    {
        const bool branch_taken_0x14eabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EABCu;
        // 0x14eac0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eabc) {
            ctx->pc = 0x14EAD0u;
            goto label_14ead0;
        }
    }
    ctx->pc = 0x14EAC4u;
label_14eac4:
    // 0x14eac4: 0xc053b98  jal         func_14EE60
    ctx->pc = 0x14EAC4u;
    SET_GPR_U32(ctx, 31, 0x14EACCu);
    ctx->pc = 0x14EAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EAC4u;
    // 0x14eac8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE60u, 0x14EAC4u, 0x14EACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EACCu;
label_14eacc:
    // 0x14eacc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14eaccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14ead0:
    // 0x14ead0: 0x3e00008  jr          $ra
    ctx->pc = 0x14EAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EAD0u;
        // 0x14ead4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EAD8u;
}
