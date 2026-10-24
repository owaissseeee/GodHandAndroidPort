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

// Function: sfadxt_CreateEx
// Address: 0x34af70 - 0x34afe0
void sfadxt_CreateEx_0x34af70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfadxt_CreateEx_0x34af70");
#endif

    switch (ctx->pc) {
        case 0x34af84u: goto label_34af84;
        case 0x34afa0u: goto label_34afa0;
        case 0x34afb0u: goto label_34afb0;
        case 0x34afc8u: goto label_34afc8;
        default: break;
    }

    ctx->pc = 0x34af70u;

    // 0x34af70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34af70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34af74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34af74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34af78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34af78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34af7c: 0xc0d628e  jal         func_358A38
    ctx->pc = 0x34AF7Cu;
    SET_GPR_U32(ctx, 31, 0x34AF84u);
    ctx->pc = 0x34AF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AF7Cu;
    // 0x34af80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358A38u, 0x34AF7Cu, 0x34AF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AF84u;
label_34af84:
    // 0x34af84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34af84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34af88: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x34AF88u;
    {
        const bool branch_taken_0x34af88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x34af88) {
            ctx->pc = 0x34AFA8u;
            goto label_34afa8;
        }
    }
    ctx->pc = 0x34AF90u;
    // 0x34af90: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x34af90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x34af94: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x34af94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x34af98: 0xc0ca50e  jal         func_329438
    ctx->pc = 0x34AF98u;
    SET_GPR_U32(ctx, 31, 0x34AFA0u);
    ctx->pc = 0x34AF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AF98u;
    // 0x34af9c: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329438u, 0x34AF98u, 0x34AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AFA0u;
label_34afa0:
    // 0x34afa0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34AFA0u;
    {
        const bool branch_taken_0x34afa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AFA0u;
        // 0x34afa4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34afa0) {
            ctx->pc = 0x34AFB4u;
            goto label_34afb4;
        }
    }
    ctx->pc = 0x34AFA8u;
label_34afa8:
    // 0x34afa8: 0xc0d2bf8  jal         func_34AFE0
    ctx->pc = 0x34AFA8u;
    SET_GPR_U32(ctx, 31, 0x34AFB0u);
    ctx->pc = 0x34AFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AFE0u, 0x34AFA8u, 0x34AFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AFB0u;
label_34afb0:
    // 0x34afb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34afb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34afb4:
    // 0x34afb4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34AFB4u;
    {
        const bool branch_taken_0x34afb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AFB4u;
        // 0x34afb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34afb4) {
            ctx->pc = 0x34AFCCu;
            goto label_34afcc;
        }
    }
    ctx->pc = 0x34AFBCu;
    // 0x34afbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34afbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34afc0: 0xc0cabd0  jal         func_32AF40
    ctx->pc = 0x34AFC0u;
    SET_GPR_U32(ctx, 31, 0x34AFC8u);
    ctx->pc = 0x34AFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AFC0u;
    // 0x34afc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AF40u, 0x34AFC0u, 0x34AFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AFC8u;
label_34afc8:
    // 0x34afc8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34afc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34afcc:
    // 0x34afcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34afccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34afd0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34afd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34afd4: 0x3e00008  jr          $ra
    ctx->pc = 0x34AFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AFD4u;
        // 0x34afd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34AFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34AFDCu;
    // 0x34afdc: 0x0  nop
    ctx->pc = 0x34afdcu;
    // NOP
    ctx->pc = 0x34afe0u;
}
