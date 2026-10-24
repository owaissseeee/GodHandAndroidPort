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

// Function: func_0033FD70
// Address: 0x33fd70 - 0x33fdc0
void func_0033FD70_0x33fd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033FD70_0x33fd70");
#endif

    switch (ctx->pc) {
        case 0x33fd98u: goto label_33fd98;
        default: break;
    }

    ctx->pc = 0x33fd70u;

    // 0x33fd70: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x33fd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x33fd74: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33fd74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33fd78: 0x8c4388fc  lw          $v1, -0x7704($v0)
    ctx->pc = 0x33fd78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7588FCu));
    // 0x33fd7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33fd80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33fd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33fd84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33fd84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fd88: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x33FD88u;
    {
        const bool branch_taken_0x33fd88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FD88u;
        // 0x33fd8c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fd88) {
            ctx->pc = 0x33FDB0u;
            goto label_33fdb0;
        }
    }
    ctx->pc = 0x33FD90u;
    // 0x33fd90: 0xc0cff34  jal         func_33FCD0
    ctx->pc = 0x33FD90u;
    SET_GPR_U32(ctx, 31, 0x33FD98u);
    ctx->pc = 0x33FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCD0u, 0x33FD90u, 0x33FD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FD98u;
label_33fd98:
    // 0x33fd98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x33fd98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fd9c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33FD9Cu;
    {
        const bool branch_taken_0x33fd9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FD9Cu;
        // 0x33fda0: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fd9c) {
            ctx->pc = 0x33FDB0u;
            goto label_33fdb0;
        }
    }
    ctx->pc = 0x33FDA4u;
    // 0x33fda4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x33fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x33fda8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33fda8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fdac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x33fdacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_33fdb0:
    // 0x33fdb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33fdb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33fdb4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33fdb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33fdb8: 0x3e00008  jr          $ra
    ctx->pc = 0x33FDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33FDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FDB8u;
        // 0x33fdbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FDB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33FDC0u;
}
