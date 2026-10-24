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

// Function: cCoreSave_snapshot
// Address: 0x1f9b88 - 0x1f9c30
void cCoreSave_snapshot_0x1f9b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_snapshot_0x1f9b88");
#endif

    switch (ctx->pc) {
        case 0x1f9ba4u: goto label_1f9ba4;
        case 0x1f9bb4u: goto label_1f9bb4;
        case 0x1f9bbcu: goto label_1f9bbc;
        case 0x1f9bc4u: goto label_1f9bc4;
        case 0x1f9bccu: goto label_1f9bcc;
        case 0x1f9bd4u: goto label_1f9bd4;
        case 0x1f9bdcu: goto label_1f9bdc;
        case 0x1f9be4u: goto label_1f9be4;
        case 0x1f9becu: goto label_1f9bec;
        case 0x1f9c00u: goto label_1f9c00;
        case 0x1f9c0cu: goto label_1f9c0c;
        case 0x1f9c1cu: goto label_1f9c1c;
        default: break;
    }

    ctx->pc = 0x1f9b88u;

    // 0x1f9b88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f9b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f9b8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f9b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f9b90: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f9b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f9b94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f9b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f9b9c: 0xc07e722  jal         func_1F9C88
    ctx->pc = 0x1F9B9Cu;
    SET_GPR_U32(ctx, 31, 0x1F9BA4u);
    ctx->pc = 0x1F9BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9B9Cu;
    // 0x1f9ba0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9C88u, 0x1F9B9Cu, 0x1F9BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9BA4u;
label_1f9ba4:
    // 0x1f9ba4: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F9BA4u;
    {
        const bool branch_taken_0x1f9ba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9ba4) {
            ctx->pc = 0x1F9BDCu;
            goto label_1f9bdc;
        }
    }
    ctx->pc = 0x1F9BACu;
    // 0x1f9bac: 0xc07e7b4  jal         func_1F9ED0
    ctx->pc = 0x1F9BACu;
    SET_GPR_U32(ctx, 31, 0x1F9BB4u);
    ctx->pc = 0x1F9BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9BACu;
    // 0x1f9bb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9ED0u, 0x1F9BACu, 0x1F9BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9BB4u;
label_1f9bb4:
    // 0x1f9bb4: 0xc07e70c  jal         func_1F9C30
    ctx->pc = 0x1F9BB4u;
    SET_GPR_U32(ctx, 31, 0x1F9BBCu);
    ctx->pc = 0x1F9BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9BB4u;
    // 0x1f9bb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9C30u, 0x1F9BB4u, 0x1F9BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9BBCu;
label_1f9bbc:
    // 0x1f9bbc: 0xc07e716  jal         func_1F9C58
    ctx->pc = 0x1F9BBCu;
    SET_GPR_U32(ctx, 31, 0x1F9BC4u);
    ctx->pc = 0x1F9BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9BBCu;
    // 0x1f9bc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9C58u, 0x1F9BBCu, 0x1F9BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9BC4u;
label_1f9bc4:
    // 0x1f9bc4: 0xc07e774  jal         func_1F9DD0
    ctx->pc = 0x1F9BC4u;
    SET_GPR_U32(ctx, 31, 0x1F9BCCu);
    ctx->pc = 0x1F9BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9BC4u;
    // 0x1f9bc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9DD0u, 0x1F9BC4u, 0x1F9BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9BCCu;
label_1f9bcc:
    // 0x1f9bcc: 0xc07e78a  jal         func_1F9E28
    ctx->pc = 0x1F9BCCu;
    SET_GPR_U32(ctx, 31, 0x1F9BD4u);
    ctx->pc = 0x1F9BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9BCCu;
    // 0x1f9bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9E28u, 0x1F9BCCu, 0x1F9BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9BD4u;
label_1f9bd4:
    // 0x1f9bd4: 0xc07e7a4  jal         func_1F9E90
    ctx->pc = 0x1F9BD4u;
    SET_GPR_U32(ctx, 31, 0x1F9BDCu);
    ctx->pc = 0x1F9BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9BD4u;
    // 0x1f9bd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9E90u, 0x1F9BD4u, 0x1F9BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9BDCu;
label_1f9bdc:
    // 0x1f9bdc: 0xc07eb2c  jal         func_1FACB0
    ctx->pc = 0x1F9BDCu;
    SET_GPR_U32(ctx, 31, 0x1F9BE4u);
    ctx->pc = 0x1F9BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9BDCu;
    // 0x1f9be0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FACB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FACB0u, 0x1F9BDCu, 0x1F9BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9BE4u;
label_1f9be4:
    // 0x1f9be4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1F9BE4u;
    SET_GPR_U32(ctx, 31, 0x1F9BECu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1F9BE4u, 0x1F9BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9BECu;
label_1f9bec:
    // 0x1f9bec: 0x8443054a  lh          $v1, 0x54A($v0)
    ctx->pc = 0x1f9becu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
    // 0x1f9bf0: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9BF0u;
    {
        const bool branch_taken_0x1f9bf0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1F9BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9BF0u;
        // 0x1f9bf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9bf0) {
            ctx->pc = 0x1F9C14u;
            goto label_1f9c14;
        }
    }
    ctx->pc = 0x1F9BF8u;
    // 0x1f9bf8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1F9BF8u;
    SET_GPR_U32(ctx, 31, 0x1F9C00u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1F9BF8u, 0x1F9C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9C00u;
label_1f9c00:
    // 0x1f9c00: 0x8445054a  lh          $a1, 0x54A($v0)
    ctx->pc = 0x1f9c00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
    // 0x1f9c04: 0xc07eb26  jal         func_1FAC98
    ctx->pc = 0x1F9C04u;
    SET_GPR_U32(ctx, 31, 0x1F9C0Cu);
    ctx->pc = 0x1F9C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9C04u;
    // 0x1f9c08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC98u, 0x1F9C04u, 0x1F9C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9C0Cu;
label_1f9c0c:
    // 0x1f9c0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9C0Cu;
    {
        const bool branch_taken_0x1f9c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C0Cu;
        // 0x1f9c10: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9c0c) {
            ctx->pc = 0x1F9C20u;
            goto label_1f9c20;
        }
    }
    ctx->pc = 0x1F9C14u;
label_1f9c14:
    // 0x1f9c14: 0xc07eb26  jal         func_1FAC98
    ctx->pc = 0x1F9C14u;
    SET_GPR_U32(ctx, 31, 0x1F9C1Cu);
    ctx->pc = 0x1F9C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9C14u;
    // 0x1f9c18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC98u, 0x1F9C14u, 0x1F9C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9C1Cu;
label_1f9c1c:
    // 0x1f9c1c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f9c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f9c20:
    // 0x1f9c20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f9c20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9c24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9c28: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C28u;
        // 0x1f9c2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9C30u;
}
