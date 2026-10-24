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

// Function: cSnd_SeFadeOut
// Address: 0x2cbc20 - 0x2cbc58
void cSnd_SeFadeOut_0x2cbc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_SeFadeOut_0x2cbc20");
#endif

    switch (ctx->pc) {
        case 0x2cbc40u: goto label_2cbc40;
        default: break;
    }

    ctx->pc = 0x2cbc20u;

    // 0x2cbc20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cbc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cbc24: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2cbc24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2cbc28: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2cbc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbc2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cbc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cbc30: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CBC30u;
    {
        const bool branch_taken_0x2cbc30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC30u;
        // 0x2cbc34: 0x62c03  sra         $a1, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc30) {
            ctx->pc = 0x2CBC48u;
            goto label_2cbc48;
        }
    }
    ctx->pc = 0x2CBC38u;
    // 0x2cbc38: 0xc0dd414  jal         func_375050
    ctx->pc = 0x2CBC38u;
    SET_GPR_U32(ctx, 31, 0x2CBC40u);
    ctx->pc = 0x375050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375050u, 0x2CBC38u, 0x2CBC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBC40u;
label_2cbc40:
    // 0x2cbc40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CBC40u;
    {
        const bool branch_taken_0x2cbc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC40u;
        // 0x2cbc44: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc40) {
            ctx->pc = 0x2CBC50u;
            goto label_2cbc50;
        }
    }
    ctx->pc = 0x2CBC48u;
label_2cbc48:
    // 0x2cbc48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cbc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cbc4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cbc4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cbc50:
    // 0x2cbc50: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC50u;
        // 0x2cbc54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBC58u;
}
