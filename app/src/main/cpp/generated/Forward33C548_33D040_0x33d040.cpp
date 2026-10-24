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

// Function: Forward33C548_33D040
// Address: 0x33d040 - 0x33d090
void Forward33C548_33D040_0x33d040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward33C548_33D040_0x33d040");
#endif

    switch (ctx->pc) {
        case 0x33d054u: goto label_33d054;
        default: break;
    }

    ctx->pc = 0x33d040u;

    // 0x33d040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33d040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33d044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33d044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33d048: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33d048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33d04c: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x33D04Cu;
    SET_GPR_U32(ctx, 31, 0x33D054u);
    ctx->pc = 0x33D050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D04Cu;
    // 0x33d050: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x33D04Cu, 0x33D054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D054u;
label_33d054:
    // 0x33d054: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33d054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33d058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33d058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d05c: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x33d05cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x33d060: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x33d060u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x33d064: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x33d064u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x33d068: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33d068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33d06c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33d06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d070: 0x24c69d54  addiu       $a2, $a2, -0x62AC
    ctx->pc = 0x33d070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942036));
    // 0x33d074: 0x24e79d56  addiu       $a3, $a3, -0x62AA
    ctx->pc = 0x33d074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942038));
    // 0x33d078: 0x25089d58  addiu       $t0, $t0, -0x62A8
    ctx->pc = 0x33d078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942040));
    // 0x33d07c: 0x80cf152  j           func_33C548
    ctx->pc = 0x33D07Cu;
    ctx->pc = 0x33D080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D07Cu;
    // 0x33d080: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C548u, 0x33D07Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33D084u;
    // 0x33d084: 0x0  nop
    ctx->pc = 0x33d084u;
    // NOP
    // 0x33d088: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x33d088u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x33d08c: 0x0  nop
    ctx->pc = 0x33d08cu;
    // NOP
    ctx->pc = 0x33d090u;
}
