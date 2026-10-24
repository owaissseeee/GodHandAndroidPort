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

// Function: func_00330268
// Address: 0x330268 - 0x3302b0
void func_00330268_0x330268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00330268_0x330268");
#endif

    switch (ctx->pc) {
        case 0x330288u: goto label_330288;
        case 0x330290u: goto label_330290;
        default: break;
    }

    ctx->pc = 0x330268u;

    // 0x330268: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x330268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33026c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x33026cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x330270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x330270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x330274: 0x24501e70  addiu       $s0, $v0, 0x1E70
    ctx->pc = 0x330274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7792));
    // 0x330278: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x330278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33027c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33027cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x330280: 0x26116590  addiu       $s1, $s0, 0x6590
    ctx->pc = 0x330280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 26000));
    // 0x330284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x330284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_330288:
    // 0x330288: 0xc0cc060  jal         func_330180
    ctx->pc = 0x330288u;
    SET_GPR_U32(ctx, 31, 0x330290u);
    ctx->pc = 0x33028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330288u;
    // 0x33028c: 0x26101964  addiu       $s0, $s0, 0x1964 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330180u, 0x330288u, 0x330290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330290u;
label_330290:
    // 0x330290: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x330290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x330294: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x330294u;
    {
        const bool branch_taken_0x330294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330294u;
        // 0x330298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330294) {
            ctx->pc = 0x330288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330288;
        }
    }
    ctx->pc = 0x33029Cu;
    // 0x33029c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33029cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3302a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3302a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3302a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3302a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3302a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3302A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3302ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3302A8u;
        // 0x3302ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3302A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3302B0u;
}
