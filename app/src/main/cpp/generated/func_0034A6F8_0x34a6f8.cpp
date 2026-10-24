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

// Function: func_0034A6F8
// Address: 0x34a6f8 - 0x34a748
void func_0034A6F8_0x34a6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034A6F8_0x34a6f8");
#endif

    switch (ctx->pc) {
        case 0x34a714u: goto label_34a714;
        default: break;
    }

    ctx->pc = 0x34a6f8u;

    // 0x34a6f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34a6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34a6fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34a6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34a700: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x34a700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a704: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34a704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34a708: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34a708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34a70c: 0xc0d2d86  jal         func_34B618
    ctx->pc = 0x34A70Cu;
    SET_GPR_U32(ctx, 31, 0x34A714u);
    ctx->pc = 0x34A710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A70Cu;
    // 0x34a710: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B618u, 0x34A70Cu, 0x34A714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A714u;
label_34a714:
    // 0x34a714: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x34a714u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a718: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34A718u;
    {
        const bool branch_taken_0x34a718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A718u;
        // 0x34a71c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a718) {
            ctx->pc = 0x34A734u;
            goto label_34a734;
        }
    }
    ctx->pc = 0x34A720u;
    // 0x34a720: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x34a720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34a724: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34a724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a728: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x34a728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x34a72c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x34a72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x34a730: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x34a730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_34a734:
    // 0x34a734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34a734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a738: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34a738u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34a73c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34a73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a740: 0x3e00008  jr          $ra
    ctx->pc = 0x34A740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A740u;
        // 0x34a744: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A748u;
}
