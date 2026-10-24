#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: isStreamShotable__C9cEventEnv
// Address: 0x7ae9a8 - 0x7ae9f8
void isStreamShotable__C9cEventEnv_0x7ae9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isStreamShotable__C9cEventEnv_0x7ae9a8");
#endif

    switch (ctx->pc) {
        case 0x7ae9bcu: goto label_7ae9bc;
        case 0x7ae9d0u: goto label_7ae9d0;
        default: break;
    }

    ctx->pc = 0x7ae9a8u;

    // 0x7ae9a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7ae9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7ae9ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7ae9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7ae9b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ae9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ae9b4: 0xc1ebafa  jal         func_7AEBE8
    ctx->pc = 0x7AE9B4u;
    SET_GPR_U32(ctx, 31, 0x7AE9BCu);
    ctx->pc = 0x7AE9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE9B4u;
    // 0x7ae9b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AEBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AEBE8u, 0x7AE9B4u, 0x7AE9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE9BCu;
label_7ae9bc:
    // 0x7ae9bc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x7AE9BCu;
    {
        const bool branch_taken_0x7ae9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ae9bc) {
            ctx->pc = 0x7AE9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AE9BCu;
            // 0x7ae9c0: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AE9D8u;
            goto label_7ae9d8;
        }
    }
    ctx->pc = 0x7AE9C4u;
    // 0x7ae9c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7ae9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae9c8: 0xc1ed280  jal         func_7B4A00
    ctx->pc = 0x7AE9C8u;
    SET_GPR_U32(ctx, 31, 0x7AE9D0u);
    ctx->pc = 0x7AE9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE9C8u;
    // 0x7ae9cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B4A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B4A00u, 0x7AE9C8u, 0x7AE9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE9D0u;
label_7ae9d0:
    // 0x7ae9d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7AE9D0u;
    {
        const bool branch_taken_0x7ae9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE9D0u;
        // 0x7ae9d4: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae9d0) {
            ctx->pc = 0x7AE9E4u;
            goto label_7ae9e4;
        }
    }
    ctx->pc = 0x7AE9D8u;
label_7ae9d8:
    // 0x7ae9d8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x7ae9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x7ae9dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7ae9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7ae9e0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x7ae9e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_7ae9e4:
    // 0x7ae9e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7ae9e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ae9e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ae9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ae9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x7AE9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AE9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE9ECu;
        // 0x7ae9f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AE9ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AE9F4u;
    // 0x7ae9f4: 0x0  nop
    ctx->pc = 0x7ae9f4u;
    // NOP
    ctx->pc = 0x7ae9f8u;
}
} // namespace gh_event
