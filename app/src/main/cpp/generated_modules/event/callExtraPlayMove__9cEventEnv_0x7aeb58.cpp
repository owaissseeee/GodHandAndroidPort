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
// Function: callExtraPlayMove__9cEventEnv
// Address: 0x7aeb58 - 0x7aeb88
void callExtraPlayMove__9cEventEnv_0x7aeb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("callExtraPlayMove__9cEventEnv_0x7aeb58");
#endif

    switch (ctx->pc) {
        case 0x7aeb58u: goto label_7aeb58;
        case 0x7aeb5cu: goto label_7aeb5c;
        case 0x7aeb60u: goto label_7aeb60;
        case 0x7aeb64u: goto label_7aeb64;
        case 0x7aeb68u: goto label_7aeb68;
        case 0x7aeb6cu: goto label_7aeb6c;
        case 0x7aeb70u: goto label_7aeb70;
        case 0x7aeb74u: goto label_7aeb74;
        case 0x7aeb78u: goto label_7aeb78;
        case 0x7aeb7cu: goto label_7aeb7c;
        case 0x7aeb80u: goto label_7aeb80;
        case 0x7aeb84u: goto label_7aeb84;
        default: break;
    }

    ctx->pc = 0x7aeb58u;

label_7aeb58:
    // 0x7aeb58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7aeb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_7aeb5c:
    // 0x7aeb5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7aeb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_7aeb60:
    // 0x7aeb60: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x7aeb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_7aeb64:
    // 0x7aeb64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_7aeb68:
    if (ctx->pc == 0x7AEB68u) {
        ctx->pc = 0x7AEB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEB64u;
        // 0x7aeb68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AEB6Cu;
        goto label_7aeb6c;
    }
    ctx->pc = 0x7AEB64u;
    {
        const bool branch_taken_0x7aeb64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AEB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEB64u;
        // 0x7aeb68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aeb64) {
            ctx->pc = 0x7AEB7Cu;
            goto label_7aeb7c;
        }
    }
    ctx->pc = 0x7AEB6Cu;
label_7aeb6c:
    // 0x7aeb6c: 0xc48c0014  lwc1        $f12, 0x14($a0)
    ctx->pc = 0x7aeb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_7aeb70:
    // 0x7aeb70: 0x40f809  jalr        $v0
label_7aeb74:
    if (ctx->pc == 0x7AEB74u) {
        ctx->pc = 0x7AEB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEB70u;
        // 0x7aeb74: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AEB78u;
        goto label_7aeb78;
    }
    ctx->pc = 0x7AEB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7AEB78u);
        ctx->pc = 0x7AEB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEB70u;
        // 0x7aeb74: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AEB70u, 0x7AEB78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7AEB78u;
label_7aeb78:
    // 0x7aeb78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7aeb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7aeb7c:
    // 0x7aeb7c: 0x3e00008  jr          $ra
label_7aeb80:
    if (ctx->pc == 0x7AEB80u) {
        ctx->pc = 0x7AEB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEB7Cu;
        // 0x7aeb80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AEB84u;
        goto label_7aeb84;
    }
    ctx->pc = 0x7AEB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AEB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEB7Cu;
        // 0x7aeb80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AEB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AEB84u;
label_7aeb84:
    // 0x7aeb84: 0x0  nop
    ctx->pc = 0x7aeb84u;
    // NOP
    ctx->pc = 0x7aeb88u;
}
} // namespace gh_event
