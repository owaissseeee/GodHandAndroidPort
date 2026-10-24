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

// Function: initLibWork
// Address: 0x35d758 - 0x35d7a8
void initLibWork_0x35d758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("initLibWork_0x35d758");
#endif

    switch (ctx->pc) {
        case 0x35d780u: goto label_35d780;
        case 0x35d78cu: goto label_35d78c;
        default: break;
    }

    ctx->pc = 0x35d758u;

    // 0x35d758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35d758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35d75c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x35d75cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d760: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35d760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35d764: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x35d764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d768: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35d768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35d76c: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35D76Cu;
    {
        const bool branch_taken_0x35d76c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x35D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D76Cu;
        // 0x35d770: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d76c) {
            ctx->pc = 0x35D794u;
            goto label_35d794;
        }
    }
    ctx->pc = 0x35D774u;
    // 0x35d774: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35d774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d778: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35d778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d77c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35d77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35d780:
    // 0x35d780: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x35d780u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x35d784: 0xc0d75ca  jal         func_35D728
    ctx->pc = 0x35D784u;
    SET_GPR_U32(ctx, 31, 0x35D78Cu);
    ctx->pc = 0x35D788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D784u;
    // 0x35d788: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D728u, 0x35D784u, 0x35D78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D78Cu;
label_35d78c:
    // 0x35d78c: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x35D78Cu;
    {
        const bool branch_taken_0x35d78c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D78Cu;
        // 0x35d790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d78c) {
            ctx->pc = 0x35D780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d780;
        }
    }
    ctx->pc = 0x35D794u;
label_35d794:
    // 0x35d794: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d798: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35d798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d79c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35d79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x35D7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D7A0u;
        // 0x35d7a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D7A8u;
}
