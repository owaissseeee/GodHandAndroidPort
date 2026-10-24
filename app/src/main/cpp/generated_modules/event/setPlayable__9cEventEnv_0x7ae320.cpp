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
// Function: setPlayable__9cEventEnv
// Address: 0x7ae320 - 0x7ae378
void setPlayable__9cEventEnv_0x7ae320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setPlayable__9cEventEnv_0x7ae320");
#endif

    switch (ctx->pc) {
        case 0x7ae330u: goto label_7ae330;
        default: break;
    }

    ctx->pc = 0x7ae320u;

    // 0x7ae320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7ae320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7ae324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ae324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ae328: 0xc1ebb0e  jal         func_7AEC38
    ctx->pc = 0x7AE328u;
    SET_GPR_U32(ctx, 31, 0x7AE330u);
    ctx->pc = 0x7AEC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AEC38u, 0x7AE328u, 0x7AE330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE330u;
label_7ae330:
    // 0x7ae330: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7AE330u;
    {
        const bool branch_taken_0x7ae330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE330u;
        // 0x7ae334: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae330) {
            ctx->pc = 0x7AE36Cu;
            goto label_7ae36c;
        }
    }
    ctx->pc = 0x7AE338u;
    // 0x7ae338: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x7ae338u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x7ae33c: 0x3c04fdff  lui         $a0, 0xFDFF
    ctx->pc = 0x7ae33cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65023 << 16));
    // 0x7ae340: 0x24c77a84  addiu       $a3, $a2, 0x7A84
    ctx->pc = 0x7ae340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 31364));
    // 0x7ae344: 0x8cc57a84  lw          $a1, 0x7A84($a2)
    ctx->pc = 0x7ae344u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x747A84u));
    // 0x7ae348: 0x8ce3fff4  lw          $v1, -0xC($a3)
    ctx->pc = 0x7ae348u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x7ae34c: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x7ae34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x7ae350: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x7ae350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x7ae354: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x7ae354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x7ae358: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7ae358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7ae35c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x7ae35cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x7ae360: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x7ae360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x7ae364: 0xacc57a84  sw          $a1, 0x7A84($a2)
    ctx->pc = 0x7ae364u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 31364), GPR_U32(ctx, 5));
    // 0x7ae368: 0xace3fff4  sw          $v1, -0xC($a3)
    ctx->pc = 0x7ae368u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967284), GPR_U32(ctx, 3));
label_7ae36c:
    // 0x7ae36c: 0x3e00008  jr          $ra
    ctx->pc = 0x7AE36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AE370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE36Cu;
        // 0x7ae370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AE36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AE374u;
    // 0x7ae374: 0x0  nop
    ctx->pc = 0x7ae374u;
    // NOP
    ctx->pc = 0x7ae378u;
}
} // namespace gh_event
