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

// Function: sceDmaSend
// Address: 0x3973e8 - 0x397450
void sceDmaSend_0x3973e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDmaSend_0x3973e8");
#endif

    switch (ctx->pc) {
        case 0x397404u: goto label_397404;
        case 0x397410u: goto label_397410;
        default: break;
    }

    ctx->pc = 0x3973e8u;

    // 0x3973e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3973e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3973ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3973ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3973f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3973f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3973f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3973f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3973f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3973f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3973fc: 0xc0e5c28  jal         func_3970A0
    ctx->pc = 0x3973FCu;
    SET_GPR_U32(ctx, 31, 0x397404u);
    ctx->pc = 0x397400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3973FCu;
    // 0x397400: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3970A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3970A0u, 0x3973FCu, 0x397404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397404u;
label_397404:
    // 0x397404: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x397404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397408: 0xc0e5c0a  jal         func_397028
    ctx->pc = 0x397408u;
    SET_GPR_U32(ctx, 31, 0x397410u);
    ctx->pc = 0x39740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397408u;
    // 0x39740c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397028u, 0x397408u, 0x397410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397410u;
label_397410:
    // 0x397410: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x397410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x397414: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x397414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x397418: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x397418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x39741c: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x39741Cu;
    {
        const bool branch_taken_0x39741c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39741c) {
            ctx->pc = 0x397420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39741Cu;
            // 0x397420: 0xae110030  sw          $s1, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397424u;
            goto label_397424;
        }
    }
    ctx->pc = 0x397424u;
label_397424:
    // 0x397424: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x397424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x397428: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x397428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x39742c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x39742cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x397430: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x397430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x397434: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x397434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x397438: 0x34420105  ori         $v0, $v0, 0x105
    ctx->pc = 0x397438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)261);
    // 0x39743c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x39743cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x397440: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x397440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x397444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x397444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397448: 0x3e00008  jr          $ra
    ctx->pc = 0x397448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397448u;
        // 0x39744c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397450u;
}
