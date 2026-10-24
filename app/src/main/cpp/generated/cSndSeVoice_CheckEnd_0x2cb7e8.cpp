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

// Function: cSndSeVoice_CheckEnd
// Address: 0x2cb7e8 - 0x2cb830
void cSndSeVoice_CheckEnd_0x2cb7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndSeVoice_CheckEnd_0x2cb7e8");
#endif

    switch (ctx->pc) {
        case 0x2cb808u: goto label_2cb808;
        case 0x2cb814u: goto label_2cb814;
        case 0x2cb81cu: goto label_2cb81c;
        default: break;
    }

    ctx->pc = 0x2cb7e8u;

    // 0x2cb7e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb7ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2cb7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb7f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2cb7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2cb7f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cb7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cb7f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cb7f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb7fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb800: 0xc0b2f9a  jal         func_2CBE68
    ctx->pc = 0x2CB800u;
    SET_GPR_U32(ctx, 31, 0x2CB808u);
    ctx->pc = 0x2CB804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB800u;
    // 0x2cb804: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBE68u, 0x2CB800u, 0x2CB808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB808u;
label_2cb808:
    // 0x2cb808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cb808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb80c: 0xc0b312e  jal         func_2CC4B8
    ctx->pc = 0x2CB80Cu;
    SET_GPR_U32(ctx, 31, 0x2CB814u);
    ctx->pc = 0x2CB810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB80Cu;
    // 0x2cb810: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4B8u, 0x2CB80Cu, 0x2CB814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB814u;
label_2cb814:
    // 0x2cb814: 0xc0b3f26  jal         func_2CFC98
    ctx->pc = 0x2CB814u;
    SET_GPR_U32(ctx, 31, 0x2CB81Cu);
    ctx->pc = 0x2CB818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB814u;
    // 0x2cb818: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC98u, 0x2CB814u, 0x2CB81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB81Cu;
label_2cb81c:
    // 0x2cb81c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2cb81cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb820: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cb820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb828: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB828u;
        // 0x2cb82c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB830u;
}
