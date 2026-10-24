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
// Function: killFade__10cEventFade
// Address: 0x7af078 - 0x7af0b8
void killFade__10cEventFade_0x7af078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("killFade__10cEventFade_0x7af078");
#endif

    switch (ctx->pc) {
        case 0x7af0a0u: goto label_7af0a0;
        default: break;
    }

    ctx->pc = 0x7af078u;

    // 0x7af078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7af078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7af07c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7af07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7af080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7af080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7af084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7af084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7af088: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x7af088u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x7af08c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x7AF08Cu;
    {
        const bool branch_taken_0x7af08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7af08c) {
            ctx->pc = 0x7AF090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AF08Cu;
            // 0x7af090: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AF0A8u;
            goto label_7af0a8;
        }
    }
    ctx->pc = 0x7AF094u;
    // 0x7af094: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x7af094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x7af098: 0xc0c1db8  jal         func_3076E0
    ctx->pc = 0x7AF098u;
    SET_GPR_U32(ctx, 31, 0x7AF0A0u);
    ctx->pc = 0x7AF09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF098u;
    // 0x7af09c: 0x24847470  addiu       $a0, $a0, 0x7470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3076E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3076E0u, 0x7AF098u, 0x7AF0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AF0A0u;
label_7af0a0:
    // 0x7af0a0: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x7af0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x7af0a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7af0a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7af0a8:
    // 0x7af0a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7af0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7af0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x7AF0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AF0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF0ACu;
        // 0x7af0b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AF0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AF0B4u;
    // 0x7af0b4: 0x0  nop
    ctx->pc = 0x7af0b4u;
    // NOP
    ctx->pc = 0x7af0b8u;
}
} // namespace gh_event
