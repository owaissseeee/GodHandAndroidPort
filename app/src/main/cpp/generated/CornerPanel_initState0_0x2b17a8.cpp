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

// Function: CornerPanel_initState0
// Address: 0x2b17a8 - 0x2b17f8
void CornerPanel_initState0_0x2b17a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CornerPanel_initState0_0x2b17a8");
#endif

    switch (ctx->pc) {
        case 0x2b17e4u: goto label_2b17e4;
        default: break;
    }

    ctx->pc = 0x2b17a8u;

    // 0x2b17a8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b17a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b17ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b17acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b17b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b17b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b17b4: 0x24040088  addiu       $a0, $zero, 0x88
    ctx->pc = 0x2b17b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x2b17b8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2b17b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2b17bc: 0x24060182  addiu       $a2, $zero, 0x182
    ctx->pc = 0x2b17bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 386));
    // 0x2b17c0: 0x240301e0  addiu       $v1, $zero, 0x1E0
    ctx->pc = 0x2b17c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x2b17c4: 0xa44400ac  sh          $a0, 0xAC($v0)
    ctx->pc = 0x2b17c4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 172), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b17c8: 0xa44300aa  sh          $v1, 0xAA($v0)
    ctx->pc = 0x2b17c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 170), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b17cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b17ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b17d0: 0xa44500ae  sh          $a1, 0xAE($v0)
    ctx->pc = 0x2b17d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 174), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b17d4: 0xa44600b0  sh          $a2, 0xB0($v0)
    ctx->pc = 0x2b17d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 176), (uint16_t)GPR_U32(ctx, 6));
    // 0x2b17d8: 0xa44500a6  sh          $a1, 0xA6($v0)
    ctx->pc = 0x2b17d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 166), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b17dc: 0xc0ac720  jal         func_2B1C80
    ctx->pc = 0x2B17DCu;
    SET_GPR_U32(ctx, 31, 0x2B17E4u);
    ctx->pc = 0x2B17E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B17DCu;
    // 0x2b17e0: 0xa44600a8  sh          $a2, 0xA8($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 168), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1C80u, 0x2B17DCu, 0x2B17E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B17E4u;
label_2b17e4:
    // 0x2b17e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b17e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b17e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B17E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B17ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B17E8u;
        // 0x2b17ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B17E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B17F0u;
    // 0x2b17f0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2b17f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2b17f4: 0x0  nop
    ctx->pc = 0x2b17f4u;
    // NOP
    ctx->pc = 0x2b17f8u;
}
