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

// Function: cSndMemHeap_CloseAll
// Address: 0x2cd9a0 - 0x2cd9e8
void cSndMemHeap_CloseAll_0x2cd9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndMemHeap_CloseAll_0x2cd9a0");
#endif

    switch (ctx->pc) {
        case 0x2cd9c4u: goto label_2cd9c4;
        case 0x2cd9d0u: goto label_2cd9d0;
        case 0x2cd9dcu: goto label_2cd9dc;
        default: break;
    }

    ctx->pc = 0x2cd9a0u;

    // 0x2cd9a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cd9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cd9a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2cd9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2cd9a8: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CD9A8u;
    {
        const bool branch_taken_0x2cd9a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CD9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9A8u;
        // 0x2cd9ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd9a8) {
            ctx->pc = 0x2CD9DCu;
            goto label_2cd9dc;
        }
    }
    ctx->pc = 0x2CD9B0u;
    // 0x2cd9b0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CD9B0u;
    {
        const bool branch_taken_0x2cd9b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9B0u;
        // 0x2cd9b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd9b0) {
            ctx->pc = 0x2CD9E0u;
            goto label_2cd9e0;
        }
    }
    ctx->pc = 0x2CD9B8u;
    // 0x2cd9b8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2cd9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2cd9bc: 0xc0b35e0  jal         func_2CD780
    ctx->pc = 0x2CD9BCu;
    SET_GPR_U32(ctx, 31, 0x2CD9C4u);
    ctx->pc = 0x2CD9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD9BCu;
    // 0x2cd9c0: 0x24842f80  addiu       $a0, $a0, 0x2F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD780u, 0x2CD9BCu, 0x2CD9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD9C4u;
label_2cd9c4:
    // 0x2cd9c4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2cd9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2cd9c8: 0xc0b35e0  jal         func_2CD780
    ctx->pc = 0x2CD9C8u;
    SET_GPR_U32(ctx, 31, 0x2CD9D0u);
    ctx->pc = 0x2CD9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD9C8u;
    // 0x2cd9cc: 0x24843310  addiu       $a0, $a0, 0x3310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD780u, 0x2CD9C8u, 0x2CD9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD9D0u;
label_2cd9d0:
    // 0x2cd9d0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2cd9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2cd9d4: 0xc0b35e0  jal         func_2CD780
    ctx->pc = 0x2CD9D4u;
    SET_GPR_U32(ctx, 31, 0x2CD9DCu);
    ctx->pc = 0x2CD9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD9D4u;
    // 0x2cd9d8: 0x248436a0  addiu       $a0, $a0, 0x36A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD780u, 0x2CD9D4u, 0x2CD9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD9DCu;
label_2cd9dc:
    // 0x2cd9dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cd9e0:
    // 0x2cd9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9E0u;
        // 0x2cd9e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD9E8u;
}
