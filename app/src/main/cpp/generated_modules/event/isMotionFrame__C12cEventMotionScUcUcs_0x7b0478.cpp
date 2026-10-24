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
// Function: isMotionFrame__C12cEventMotionScUcUcs
// Address: 0x7b0478 - 0x7b04e8
void isMotionFrame__C12cEventMotionScUcUcs_0x7b0478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isMotionFrame__C12cEventMotionScUcUcs_0x7b0478");
#endif

    switch (ctx->pc) {
        case 0x7b04b4u: goto label_7b04b4;
        case 0x7b04d8u: goto label_7b04d8;
        default: break;
    }

    ctx->pc = 0x7b0478u;

    // 0x7b0478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7b0478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7b047c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x7b047cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x7b0480: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x7b0480u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x7b0484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b0484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b0488: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x7b0488u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x7b048c: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x7b048cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x7b0490: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x7b0490u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x7b0494: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x7B0494u;
    {
        const bool branch_taken_0x7b0494 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x7B0498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0494u;
        // 0x7b0498: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b0494) {
            ctx->pc = 0x7B04BCu;
            goto label_7b04bc;
        }
    }
    ctx->pc = 0x7B049Cu;
    // 0x7b049c: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x7b049cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b04a0: 0x0  nop
    ctx->pc = 0x7b04a0u;
    // NOP
    // 0x7b04a4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b04a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b04a8: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7b04a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7b04ac: 0xc1ea5c8  jal         func_7A9720
    ctx->pc = 0x7B04ACu;
    SET_GPR_U32(ctx, 31, 0x7B04B4u);
    ctx->pc = 0x7B04B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B04ACu;
    // 0x7b04b0: 0x24844f80  addiu       $a0, $a0, 0x4F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A9720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A9720u, 0x7B04ACu, 0x7B04B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B04B4u;
label_7b04b4:
    // 0x7b04b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x7B04B4u;
    {
        const bool branch_taken_0x7b04b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B04B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B04B4u;
        // 0x7b04b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b04b4) {
            ctx->pc = 0x7B04DCu;
            goto label_7b04dc;
        }
    }
    ctx->pc = 0x7B04BCu;
label_7b04bc:
    // 0x7b04bc: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x7b04bcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b04c0: 0x0  nop
    ctx->pc = 0x7b04c0u;
    // NOP
    // 0x7b04c4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b04c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b04c8: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7b04c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7b04cc: 0x24845248  addiu       $a0, $a0, 0x5248
    ctx->pc = 0x7b04ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21064));
    // 0x7b04d0: 0xc1eb3d4  jal         func_7ACF50
    ctx->pc = 0x7B04D0u;
    SET_GPR_U32(ctx, 31, 0x7B04D8u);
    ctx->pc = 0x7B04D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B04D0u;
    // 0x7b04d4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACF50u, 0x7B04D0u, 0x7B04D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B04D8u;
label_7b04d8:
    // 0x7b04d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b04d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7b04dc:
    // 0x7b04dc: 0x3e00008  jr          $ra
    ctx->pc = 0x7B04DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B04E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B04DCu;
        // 0x7b04e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B04DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B04E4u;
    // 0x7b04e4: 0x0  nop
    ctx->pc = 0x7b04e4u;
    // NOP
    ctx->pc = 0x7b04e8u;
}
} // namespace gh_event
