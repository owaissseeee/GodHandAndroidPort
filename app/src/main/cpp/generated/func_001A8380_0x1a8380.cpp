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

// Function: func_001A8380
// Address: 0x1a8380 - 0x1a83e0
void func_001A8380_0x1a8380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A8380_0x1a8380");
#endif

    switch (ctx->pc) {
        case 0x1a83bcu: goto label_1a83bc;
        case 0x1a83ccu: goto label_1a83cc;
        default: break;
    }

    ctx->pc = 0x1a8380u;

    // 0x1a8380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a8380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a8384: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a8384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a8388: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a8388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a838c: 0x244277b8  addiu       $v0, $v0, 0x77B8
    ctx->pc = 0x1a838cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30648));
    // 0x1a8390: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a8390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a8394: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a8394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a839c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1a839cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1a83a0: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x1a83a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1a83a4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A83A4u;
    {
        const bool branch_taken_0x1a83a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A83A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A83A4u;
        // 0x1a83a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a83a4) {
            ctx->pc = 0x1A83C0u;
            goto label_1a83c0;
        }
    }
    ctx->pc = 0x1A83ACu;
    // 0x1a83ac: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1a83acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1a83b0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a83b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a83b4: 0xc04bb16  jal         func_12EC58
    ctx->pc = 0x1A83B4u;
    SET_GPR_U32(ctx, 31, 0x1A83BCu);
    ctx->pc = 0x1A83B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A83B4u;
    // 0x1a83b8: 0x2484ae50  addiu       $a0, $a0, -0x51B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC58u, 0x1A83B4u, 0x1A83BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A83BCu;
label_1a83bc:
    // 0x1a83bc: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1a83bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_1a83c0:
    // 0x1a83c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a83c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a83c4: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1A83C4u;
    SET_GPR_U32(ctx, 31, 0x1A83CCu);
    ctx->pc = 0x1A83C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A83C4u;
    // 0x1a83c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1A83C4u, 0x1A83CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A83CCu;
label_1a83cc:
    // 0x1a83cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a83ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a83d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a83d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a83d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a83d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a83d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A83D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A83DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A83D8u;
        // 0x1a83dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A83D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A83E0u;
}
