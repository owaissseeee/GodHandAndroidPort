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

// Function: ForwardGlobalIfFlagSet_149550
// Address: 0x149550 - 0x149580
void ForwardGlobalIfFlagSet_149550_0x149550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardGlobalIfFlagSet_149550_0x149550");
#endif

    switch (ctx->pc) {
        case 0x149574u: goto label_149574;
        default: break;
    }

    ctx->pc = 0x149550u;

    // 0x149550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x149550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x149554: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x149554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x149558: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x149558u;
    {
        const bool branch_taken_0x149558 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x14955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149558u;
        // 0x14955c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149558) {
            ctx->pc = 0x149574u;
            goto label_149574;
        }
    }
    ctx->pc = 0x149560u;
    // 0x149560: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x149560u;
    {
        const bool branch_taken_0x149560 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x149564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149560u;
        // 0x149564: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149560) {
            ctx->pc = 0x149578u;
            goto label_149578;
        }
    }
    ctx->pc = 0x149568u;
    // 0x149568: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x149568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x14956c: 0xc0aa5e4  jal         func_2A9790
    ctx->pc = 0x14956Cu;
    SET_GPR_U32(ctx, 31, 0x149574u);
    ctx->pc = 0x149570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14956Cu;
    // 0x149570: 0x24846448  addiu       $a0, $a0, 0x6448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9790u, 0x14956Cu, 0x149574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149574u;
label_149574:
    // 0x149574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_149578:
    // 0x149578: 0x3e00008  jr          $ra
    ctx->pc = 0x149578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149578u;
        // 0x14957c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149580u;
}
