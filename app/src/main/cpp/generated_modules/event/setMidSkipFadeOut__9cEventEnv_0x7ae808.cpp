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
// Function: setMidSkipFadeOut__9cEventEnv
// Address: 0x7ae808 - 0x7ae868
void setMidSkipFadeOut__9cEventEnv_0x7ae808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setMidSkipFadeOut__9cEventEnv_0x7ae808");
#endif

    switch (ctx->pc) {
        case 0x7ae84cu: goto label_7ae84c;
        default: break;
    }

    ctx->pc = 0x7ae808u;

    // 0x7ae808: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7ae808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7ae80c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7ae80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7ae810: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ae810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ae814: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7ae814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae818: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x7ae818u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x7ae81c: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x7ae81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x7ae820: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x7AE820u;
    {
        const bool branch_taken_0x7ae820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ae820) {
            ctx->pc = 0x7AE824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AE820u;
            // 0x7ae824: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AE85Cu;
            goto label_7ae85c;
        }
    }
    ctx->pc = 0x7AE828u;
    // 0x7ae828: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x7ae828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x7ae82c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7ae82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae830: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x7ae830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x7ae834: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x7ae834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7ae838: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7ae838u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae83c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7ae83cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae840: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x7ae840u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x7ae844: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x7AE844u;
    SET_GPR_U32(ctx, 31, 0x7AE84Cu);
    ctx->pc = 0x7AE848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE844u;
    // 0x7ae848: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x7AE844u, 0x7AE84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE84Cu;
label_7ae84c:
    // 0x7ae84c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x7ae84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x7ae850: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x7ae850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x7ae854: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x7ae854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x7ae858: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7ae858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7ae85c:
    // 0x7ae85c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ae85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ae860: 0x3e00008  jr          $ra
    ctx->pc = 0x7AE860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AE864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE860u;
        // 0x7ae864: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AE860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AE868u;
}
} // namespace gh_event
