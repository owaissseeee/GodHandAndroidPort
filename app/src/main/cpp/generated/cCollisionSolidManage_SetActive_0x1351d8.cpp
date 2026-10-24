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

// Function: cCollisionSolidManage_SetActive
// Address: 0x1351d8 - 0x135210
void cCollisionSolidManage_SetActive_0x1351d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCollisionSolidManage_SetActive_0x1351d8");
#endif

    switch (ctx->pc) {
        case 0x1351ecu: goto label_1351ec;
        case 0x1351fcu: goto label_1351fc;
        default: break;
    }

    ctx->pc = 0x1351d8u;

    // 0x1351d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1351d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1351dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1351dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1351e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1351e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1351e4: 0xc04d1b2  jal         func_1346C8
    ctx->pc = 0x1351E4u;
    SET_GPR_U32(ctx, 31, 0x1351ECu);
    ctx->pc = 0x1351E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1351E4u;
    // 0x1351e8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1346C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1346C8u, 0x1351E4u, 0x1351ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1351ECu;
label_1351ec:
    // 0x1351ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1351ECu;
    {
        const bool branch_taken_0x1351ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1351F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351ECu;
        // 0x1351f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1351ec) {
            ctx->pc = 0x1351FCu;
            goto label_1351fc;
        }
    }
    ctx->pc = 0x1351F4u;
    // 0x1351f4: 0xc04d182  jal         func_134608
    ctx->pc = 0x1351F4u;
    SET_GPR_U32(ctx, 31, 0x1351FCu);
    ctx->pc = 0x1351F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1351F4u;
    // 0x1351f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134608u, 0x1351F4u, 0x1351FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1351FCu;
label_1351fc:
    // 0x1351fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1351fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x135200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135204: 0x3e00008  jr          $ra
    ctx->pc = 0x135204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135204u;
        // 0x135208: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13520Cu;
    // 0x13520c: 0x0  nop
    ctx->pc = 0x13520cu;
    // NOP
    ctx->pc = 0x135210u;
}
