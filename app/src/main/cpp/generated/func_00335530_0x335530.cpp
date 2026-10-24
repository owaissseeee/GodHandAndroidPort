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

// Function: func_00335530
// Address: 0x335530 - 0x335580
void func_00335530_0x335530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00335530_0x335530");
#endif

    switch (ctx->pc) {
        case 0x33554cu: goto label_33554c;
        default: break;
    }

    ctx->pc = 0x335530u;

    // 0x335530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x335534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335538: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x335538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33553c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x33553Cu;
    {
        const bool branch_taken_0x33553c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x335540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33553Cu;
        // 0x335540: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33553c) {
            ctx->pc = 0x335570u;
            goto label_335570;
        }
    }
    ctx->pc = 0x335544u;
    // 0x335544: 0xc0cd654  jal         func_335950
    ctx->pc = 0x335544u;
    SET_GPR_U32(ctx, 31, 0x33554Cu);
    ctx->pc = 0x335950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335950u, 0x335544u, 0x33554Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33554Cu;
label_33554c:
    // 0x33554c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33554cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335550: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x335550u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x335554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x335554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335558: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x335558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33555c: 0x24060238  addiu       $a2, $zero, 0x238
    ctx->pc = 0x33555cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 568));
    // 0x335560: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335564: 0x80e94bc  j           func_3A52F0
    ctx->pc = 0x335564u;
    ctx->pc = 0x335568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335564u;
    // 0x335568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x335564u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33556Cu;
    // 0x33556c: 0x0  nop
    ctx->pc = 0x33556cu;
    // NOP
label_335570:
    // 0x335570: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335574: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x335574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335578: 0x3e00008  jr          $ra
    ctx->pc = 0x335578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335578u;
        // 0x33557c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335580u;
}
