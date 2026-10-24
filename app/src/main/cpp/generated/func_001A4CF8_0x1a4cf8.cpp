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

// Function: func_001A4CF8
// Address: 0x1a4cf8 - 0x1a4d48
void func_001A4CF8_0x1a4cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A4CF8_0x1a4cf8");
#endif

    switch (ctx->pc) {
        case 0x1a4d18u: goto label_1a4d18;
        case 0x1a4d24u: goto label_1a4d24;
        default: break;
    }

    ctx->pc = 0x1a4cf8u;

    // 0x1a4cf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4cfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4d00: 0x90820763  lbu         $v0, 0x763($a0)
    ctx->pc = 0x1a4d00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1891)));
    // 0x1a4d04: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A4D04u;
    {
        const bool branch_taken_0x1a4d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D04u;
        // 0x1a4d08: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4d04) {
            ctx->pc = 0x1A4D3Cu;
            goto label_1a4d3c;
        }
    }
    ctx->pc = 0x1A4D0Cu;
    // 0x1a4d0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a4d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4d10: 0xc04e350  jal         func_138D40
    ctx->pc = 0x1A4D10u;
    SET_GPR_U32(ctx, 31, 0x1A4D18u);
    ctx->pc = 0x1A4D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4D10u;
    // 0x1a4d14: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138D40u, 0x1A4D10u, 0x1A4D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4D18u;
label_1a4d18:
    // 0x1a4d18: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1a4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1a4d1c: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x1A4D1Cu;
    SET_GPR_U32(ctx, 31, 0x1A4D24u);
    ctx->pc = 0x1A4D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4D1Cu;
    // 0x1a4d20: 0x8c442f84  lw          $a0, 0x2F84($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x1A4D1Cu, 0x1A4D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4D24u;
label_1a4d24:
    // 0x1a4d24: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x1a4d24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x1a4d28: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1a4d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1a4d2c: 0x8c837a78  lw          $v1, 0x7A78($a0)
    ctx->pc = 0x1a4d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x1a4d30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a4d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a4d34: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a4d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a4d38: 0xac837a78  sw          $v1, 0x7A78($a0)
    ctx->pc = 0x1a4d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 31352), GPR_U32(ctx, 3));
label_1a4d3c:
    // 0x1a4d3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4d40: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D40u;
        // 0x1a4d44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4D48u;
}
