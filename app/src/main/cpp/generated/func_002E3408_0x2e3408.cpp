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

// Function: func_002E3408
// Address: 0x2e3408 - 0x2e3458
void func_002E3408_0x2e3408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E3408_0x2e3408");
#endif

    switch (ctx->pc) {
        case 0x2e342cu: goto label_2e342c;
        case 0x2e3444u: goto label_2e3444;
        default: break;
    }

    ctx->pc = 0x2e3408u;

    // 0x2e3408: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e3408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e340c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2e340cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2e3410: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e3410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e3414: 0x8c6263d8  lw          $v0, 0x63D8($v1)
    ctx->pc = 0x2e3414u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7863D8u));
    // 0x2e3418: 0x247063d8  addiu       $s0, $v1, 0x63D8
    ctx->pc = 0x2e3418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25560));
    // 0x2e341c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E341Cu;
    {
        const bool branch_taken_0x2e341c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E341Cu;
        // 0x2e3420: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e341c) {
            ctx->pc = 0x2E3444u;
            goto label_2e3444;
        }
    }
    ctx->pc = 0x2E3424u;
    // 0x2e3424: 0xc0c0052  jal         func_300148
    ctx->pc = 0x2E3424u;
    SET_GPR_U32(ctx, 31, 0x2E342Cu);
    ctx->pc = 0x300148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300148u, 0x2E3424u, 0x2E342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E342Cu;
label_2e342c:
    // 0x2e342c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e342cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2e3430: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2e3430u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2e3434: 0x24a5e2c8  addiu       $a1, $a1, -0x1D38
    ctx->pc = 0x2e3434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959816));
    // 0x2e3438: 0x24c663c8  addiu       $a2, $a2, 0x63C8
    ctx->pc = 0x2e3438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25544));
    // 0x2e343c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2E343Cu;
    SET_GPR_U32(ctx, 31, 0x2E3444u);
    ctx->pc = 0x2E3440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E343Cu;
    // 0x2e3440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2E343Cu, 0x2E3444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3444u;
label_2e3444:
    // 0x2e3444: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e3444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e344c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e344cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3450: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3450u;
        // 0x2e3454: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3458u;
}
