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
// Function: callExtraPlayInit__9cEventEnv
// Address: 0x7aeb10 - 0x7aeb58
void callExtraPlayInit__9cEventEnv_0x7aeb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("callExtraPlayInit__9cEventEnv_0x7aeb10");
#endif

    switch (ctx->pc) {
        case 0x7aeb10u: goto label_7aeb10;
        case 0x7aeb14u: goto label_7aeb14;
        case 0x7aeb18u: goto label_7aeb18;
        case 0x7aeb1cu: goto label_7aeb1c;
        case 0x7aeb20u: goto label_7aeb20;
        case 0x7aeb24u: goto label_7aeb24;
        case 0x7aeb28u: goto label_7aeb28;
        case 0x7aeb2cu: goto label_7aeb2c;
        case 0x7aeb30u: goto label_7aeb30;
        case 0x7aeb34u: goto label_7aeb34;
        case 0x7aeb38u: goto label_7aeb38;
        case 0x7aeb3cu: goto label_7aeb3c;
        case 0x7aeb40u: goto label_7aeb40;
        case 0x7aeb44u: goto label_7aeb44;
        case 0x7aeb48u: goto label_7aeb48;
        case 0x7aeb4cu: goto label_7aeb4c;
        case 0x7aeb50u: goto label_7aeb50;
        case 0x7aeb54u: goto label_7aeb54;
        default: break;
    }

    ctx->pc = 0x7aeb10u;

label_7aeb10:
    // 0x7aeb10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7aeb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_7aeb14:
    // 0x7aeb14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7aeb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_7aeb18:
    // 0x7aeb18: 0xc1ed280  jal         func_7B4A00
label_7aeb1c:
    if (ctx->pc == 0x7AEB1Cu) {
        ctx->pc = 0x7AEB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEB18u;
        // 0x7aeb1c: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AEB20u;
        goto label_7aeb20;
    }
    ctx->pc = 0x7AEB18u;
    SET_GPR_U32(ctx, 31, 0x7AEB20u);
    ctx->pc = 0x7AEB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AEB18u;
    // 0x7aeb1c: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B4A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B4A00u, 0x7AEB18u, 0x7AEB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AEB20u;
label_7aeb20:
    // 0x7aeb20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x7aeb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_7aeb24:
    // 0x7aeb24: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_7aeb28:
    if (ctx->pc == 0x7AEB28u) {
        ctx->pc = 0x7AEB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEB24u;
        // 0x7aeb28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AEB2Cu;
        goto label_7aeb2c;
    }
    ctx->pc = 0x7AEB24u;
    {
        const bool branch_taken_0x7aeb24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AEB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEB24u;
        // 0x7aeb28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aeb24) {
            ctx->pc = 0x7AEB4Cu;
            goto label_7aeb4c;
        }
    }
    ctx->pc = 0x7AEB2Cu;
label_7aeb2c:
    // 0x7aeb2c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x7aeb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_7aeb30:
    // 0x7aeb30: 0x8c436b30  lw          $v1, 0x6B30($v0)
    ctx->pc = 0x7aeb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27440)));
label_7aeb34:
    // 0x7aeb34: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x7aeb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_7aeb38:
    // 0x7aeb38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_7aeb3c:
    if (ctx->pc == 0x7AEB3Cu) {
        ctx->pc = 0x7AEB40u;
        goto label_7aeb40;
    }
    ctx->pc = 0x7AEB38u;
    {
        const bool branch_taken_0x7aeb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7aeb38) {
            ctx->pc = 0x7AEB4Cu;
            goto label_7aeb4c;
        }
    }
    ctx->pc = 0x7AEB40u;
label_7aeb40:
    // 0x7aeb40: 0x40f809  jalr        $v0
label_7aeb44:
    if (ctx->pc == 0x7AEB44u) {
        ctx->pc = 0x7AEB48u;
        goto label_7aeb48;
    }
    ctx->pc = 0x7AEB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7AEB48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AEB40u, 0x7AEB48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7AEB48u;
label_7aeb48:
    // 0x7aeb48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7aeb48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7aeb4c:
    // 0x7aeb4c: 0x3e00008  jr          $ra
label_7aeb50:
    if (ctx->pc == 0x7AEB50u) {
        ctx->pc = 0x7AEB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEB4Cu;
        // 0x7aeb50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AEB54u;
        goto label_7aeb54;
    }
    ctx->pc = 0x7AEB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AEB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEB4Cu;
        // 0x7aeb50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AEB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AEB54u;
label_7aeb54:
    // 0x7aeb54: 0x0  nop
    ctx->pc = 0x7aeb54u;
    // NOP
    ctx->pc = 0x7aeb58u;
}
} // namespace gh_event
