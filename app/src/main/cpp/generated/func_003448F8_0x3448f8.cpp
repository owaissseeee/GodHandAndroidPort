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

// Function: func_003448F8
// Address: 0x3448f8 - 0x344948
void func_003448F8_0x3448f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003448F8_0x3448f8");
#endif

    switch (ctx->pc) {
        case 0x34492cu: goto label_34492c;
        default: break;
    }

    ctx->pc = 0x3448f8u;

    // 0x3448f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3448f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3448fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3448fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x344900: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344904: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x344904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x344908: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x344908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34490c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34490cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x344910: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x344910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x344914: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x344914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x344918: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x344918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x34491c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x34491Cu;
    {
        const bool branch_taken_0x34491c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34491c) {
            ctx->pc = 0x344920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34491Cu;
            // 0x344920: 0xae030190  sw          $v1, 0x190($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344934u;
            goto label_344934;
        }
    }
    ctx->pc = 0x344924u;
    // 0x344924: 0xc0d1d14  jal         func_347450
    ctx->pc = 0x344924u;
    SET_GPR_U32(ctx, 31, 0x34492Cu);
    ctx->pc = 0x347450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347450u, 0x344924u, 0x34492Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34492Cu;
label_34492c:
    // 0x34492c: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x34492cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x344930: 0xae030190  sw          $v1, 0x190($s0)
    ctx->pc = 0x344930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 3));
label_344934:
    // 0x344934: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x344934u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34493c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34493cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344940: 0x3e00008  jr          $ra
    ctx->pc = 0x344940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344940u;
        // 0x344944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344948u;
}
