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

// Function: func_002A9300
// Address: 0x2a9300 - 0x2a9350
void func_002A9300_0x2a9300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A9300_0x2a9300");
#endif

    switch (ctx->pc) {
        case 0x2a9324u: goto label_2a9324;
        case 0x2a933cu: goto label_2a933c;
        default: break;
    }

    ctx->pc = 0x2a9300u;

    // 0x2a9300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a9300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a9304: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2a9304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2a9308: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a9308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a930c: 0x8c6254d8  lw          $v0, 0x54D8($v1)
    ctx->pc = 0x2a930cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7854D8u));
    // 0x2a9310: 0x247054d8  addiu       $s0, $v1, 0x54D8
    ctx->pc = 0x2a9310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21720));
    // 0x2a9314: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A9314u;
    {
        const bool branch_taken_0x2a9314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9314u;
        // 0x2a9318: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9314) {
            ctx->pc = 0x2A933Cu;
            goto label_2a933c;
        }
    }
    ctx->pc = 0x2A931Cu;
    // 0x2a931c: 0xc053f48  jal         func_14FD20
    ctx->pc = 0x2A931Cu;
    SET_GPR_U32(ctx, 31, 0x2A9324u);
    ctx->pc = 0x14FD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD20u, 0x2A931Cu, 0x2A9324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9324u;
label_2a9324:
    // 0x2a9324: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2a9324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2a9328: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2a9328u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2a932c: 0x24a5aec8  addiu       $a1, $a1, -0x5138
    ctx->pc = 0x2a932cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946504));
    // 0x2a9330: 0x24c654f8  addiu       $a2, $a2, 0x54F8
    ctx->pc = 0x2a9330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21752));
    // 0x2a9334: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2A9334u;
    SET_GPR_U32(ctx, 31, 0x2A933Cu);
    ctx->pc = 0x2A9338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9334u;
    // 0x2a9338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2A9334u, 0x2A933Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A933Cu;
label_2a933c:
    // 0x2a933c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a933cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9344: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a9344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9348: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9348u;
        // 0x2a934c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9350u;
}
