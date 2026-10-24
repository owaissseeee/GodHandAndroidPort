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

// Function: func_001DD0D8
// Address: 0x1dd0d8 - 0x1dd180
void func_001DD0D8_0x1dd0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DD0D8_0x1dd0d8");
#endif

    switch (ctx->pc) {
        case 0x1dd10cu: goto label_1dd10c;
        case 0x1dd118u: goto label_1dd118;
        case 0x1dd124u: goto label_1dd124;
        case 0x1dd134u: goto label_1dd134;
        case 0x1dd14cu: goto label_1dd14c;
        case 0x1dd158u: goto label_1dd158;
        case 0x1dd164u: goto label_1dd164;
        default: break;
    }

    ctx->pc = 0x1dd0d8u;

    // 0x1dd0d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1dd0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1dd0dc: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1dd0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1dd0e0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1dd0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1dd0e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dd0e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd0e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1dd0e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd0ec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1dd0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1dd0f0: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x1dd0f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1dd0f4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1dd0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1dd0f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dd0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dd0fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd104: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x1DD104u;
    SET_GPR_U32(ctx, 31, 0x1DD10Cu);
    ctx->pc = 0x1DD108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD104u;
    // 0x1dd108: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x1DD104u, 0x1DD10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD10Cu;
label_1dd10c:
    // 0x1dd10c: 0x26710060  addiu       $s1, $s3, 0x60
    ctx->pc = 0x1dd10cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x1dd110: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x1DD110u;
    SET_GPR_U32(ctx, 31, 0x1DD118u);
    ctx->pc = 0x1DD114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD110u;
    // 0x1dd114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x1DD110u, 0x1DD118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD118u;
label_1dd118:
    // 0x1dd118: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1dd118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd11c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1DD11Cu;
    SET_GPR_U32(ctx, 31, 0x1DD124u);
    ctx->pc = 0x1DD120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD11Cu;
    // 0x1dd120: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1DD11Cu, 0x1DD124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD124u;
label_1dd124:
    // 0x1dd124: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1dd124u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1dd128: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dd128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd12c: 0xc0b576a  jal         func_2D5DA8
    ctx->pc = 0x1DD12Cu;
    SET_GPR_U32(ctx, 31, 0x1DD134u);
    ctx->pc = 0x1DD130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD12Cu;
    // 0x1dd130: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5DA8u, 0x1DD12Cu, 0x1DD134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD134u;
label_1dd134:
    // 0x1dd134: 0x2a42004d  slti        $v0, $s2, 0x4D
    ctx->pc = 0x1dd134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)77) ? 1 : 0);
    // 0x1dd138: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DD138u;
    {
        const bool branch_taken_0x1dd138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD138u;
        // 0x1dd13c: 0x2631007c  addiu       $s1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd138) {
            ctx->pc = 0x1DD118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd118;
        }
    }
    ctx->pc = 0x1DD140u;
    // 0x1dd140: 0x26640060  addiu       $a0, $s3, 0x60
    ctx->pc = 0x1dd140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x1dd144: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1DD144u;
    SET_GPR_U32(ctx, 31, 0x1DD14Cu);
    ctx->pc = 0x1DD148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD144u;
    // 0x1dd148: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1DD144u, 0x1DD14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD14Cu;
label_1dd14c:
    // 0x1dd14c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dd14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd150: 0xc077486  jal         func_1DD218
    ctx->pc = 0x1DD150u;
    SET_GPR_U32(ctx, 31, 0x1DD158u);
    ctx->pc = 0x1DD154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD150u;
    // 0x1dd154: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD218u, 0x1DD150u, 0x1DD158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD158u;
label_1dd158:
    // 0x1dd158: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dd158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd15c: 0xc07748e  jal         func_1DD238
    ctx->pc = 0x1DD15Cu;
    SET_GPR_U32(ctx, 31, 0x1DD164u);
    ctx->pc = 0x1DD160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD15Cu;
    // 0x1dd160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD238u, 0x1DD15Cu, 0x1DD164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD164u;
label_1dd164:
    // 0x1dd164: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1dd164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dd168: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1dd168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd16c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dd16cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd170: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1dd170u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd178: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD178u;
        // 0x1dd17c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD180u;
}
