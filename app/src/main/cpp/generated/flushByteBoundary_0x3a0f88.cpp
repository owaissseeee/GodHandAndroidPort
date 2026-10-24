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

// Function: flushByteBoundary
// Address: 0x3a0f88 - 0x3a0fd8
void flushByteBoundary_0x3a0f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("flushByteBoundary_0x3a0f88");
#endif

    switch (ctx->pc) {
        case 0x3a0f9cu: goto label_3a0f9c;
        default: break;
    }

    ctx->pc = 0x3a0f88u;

    // 0x3a0f88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a0f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a0f8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a0f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a0f90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a0f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a0f94: 0xc0e837a  jal         func_3A0DE8
    ctx->pc = 0x3A0F94u;
    SET_GPR_U32(ctx, 31, 0x3A0F9Cu);
    ctx->pc = 0x3A0F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0F94u;
    // 0x3a0f98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0DE8u, 0x3A0F94u, 0x3A0F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0F9Cu;
label_3a0f9c:
    // 0x3a0f9c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3a0f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3a0fa0: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x3a0fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x3a0fa4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a0fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u));
    // 0x3a0fa8: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x3a0fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3a0fac: 0x31823  negu        $v1, $v1
    ctx->pc = 0x3a0facu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x3a0fb0: 0x30650007  andi        $a1, $v1, 0x7
    ctx->pc = 0x3a0fb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3a0fb4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A0FB4u;
    {
        const bool branch_taken_0x3a0fb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0FB4u;
        // 0x3a0fb8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0fb4) {
            ctx->pc = 0x3A0FCCu;
            goto label_3a0fcc;
        }
    }
    ctx->pc = 0x3A0FBCu;
    // 0x3a0fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0fc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a0fc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0fc4: 0x80e8388  j           func_3A0E20
    ctx->pc = 0x3A0FC4u;
    ctx->pc = 0x3A0FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0FC4u;
    // 0x3a0fc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0E20u, 0x3A0FC4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3A0FCCu;
label_3a0fcc:
    // 0x3a0fcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a0fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0FD0u;
        // 0x3a0fd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0FD8u;
}
