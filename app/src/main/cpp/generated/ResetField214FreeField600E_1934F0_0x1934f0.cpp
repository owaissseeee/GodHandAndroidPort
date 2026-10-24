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

// Function: ResetField214FreeField600E_1934F0
// Address: 0x1934f0 - 0x193550
void ResetField214FreeField600E_1934F0_0x1934f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetField214FreeField600E_1934F0_0x1934f0");
#endif

    switch (ctx->pc) {
        case 0x19352cu: goto label_19352c;
        case 0x19353cu: goto label_19353c;
        default: break;
    }

    ctx->pc = 0x1934f0u;

    // 0x1934f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1934f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1934f4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1934f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1934f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1934f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1934fc: 0x24424790  addiu       $v0, $v0, 0x4790
    ctx->pc = 0x1934fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18320));
    // 0x193500: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x193504: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x193504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19350c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x19350cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x193510: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x193510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x193514: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x193514u;
    {
        const bool branch_taken_0x193514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x193518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193514u;
        // 0x193518: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193514) {
            ctx->pc = 0x193530u;
            goto label_193530;
        }
    }
    ctx->pc = 0x19351Cu;
    // 0x19351c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19351cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x193520: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x193520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193524: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x193524u;
    SET_GPR_U32(ctx, 31, 0x19352Cu);
    ctx->pc = 0x193528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193524u;
    // 0x193528: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x193524u, 0x19352Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19352Cu;
label_19352c:
    // 0x19352c: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x19352cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_193530:
    // 0x193530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193534: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x193534u;
    SET_GPR_U32(ctx, 31, 0x19353Cu);
    ctx->pc = 0x193538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193534u;
    // 0x193538: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x193534u, 0x19353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19353Cu;
label_19353c:
    // 0x19353c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19353cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193540: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x193540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193548: 0x3e00008  jr          $ra
    ctx->pc = 0x193548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193548u;
        // 0x19354c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193550u;
}
