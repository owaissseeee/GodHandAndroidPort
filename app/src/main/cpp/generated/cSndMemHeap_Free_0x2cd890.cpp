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

// Function: cSndMemHeap_Free
// Address: 0x2cd890 - 0x2cd8f8
void cSndMemHeap_Free_0x2cd890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndMemHeap_Free_0x2cd890");
#endif

    switch (ctx->pc) {
        case 0x2cd8b0u: goto label_2cd8b0;
        default: break;
    }

    ctx->pc = 0x2cd890u;

    // 0x2cd890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cd890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cd894: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2CD894u;
    {
        const bool branch_taken_0x2cd894 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD894u;
        // 0x2cd898: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd894) {
            ctx->pc = 0x2CD8E8u;
            goto label_2cd8e8;
        }
    }
    ctx->pc = 0x2CD89Cu;
    // 0x2cd89c: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x2cd89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2cd8a0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CD8A0u;
    {
        const bool branch_taken_0x2cd8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD8A0u;
        // 0x2cd8a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd8a0) {
            ctx->pc = 0x2CD8ECu;
            goto label_2cd8ec;
        }
    }
    ctx->pc = 0x2CD8A8u;
    // 0x2cd8a8: 0xc0b363e  jal         func_2CD8F8
    ctx->pc = 0x2CD8A8u;
    SET_GPR_U32(ctx, 31, 0x2CD8B0u);
    ctx->pc = 0x2CD8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD8F8u, 0x2CD8A8u, 0x2CD8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD8B0u;
label_2cd8b0:
    // 0x2cd8b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cd8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd8b4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2cd8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd8b8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2cd8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2cd8bc: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x2cd8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2cd8c0: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x2cd8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x2cd8c4: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x2cd8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2cd8c8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2cd8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2cd8cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cd8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cd8d0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2cd8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cd8d4: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x2cd8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x2cd8d8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2cd8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2cd8dc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CD8DCu;
    {
        const bool branch_taken_0x2cd8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd8dc) {
            ctx->pc = 0x2CD8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD8DCu;
            // 0x2cd8e0: 0xac460004  sw          $a2, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD8E4u;
            goto label_2cd8e4;
        }
    }
    ctx->pc = 0x2CD8E4u;
label_2cd8e4:
    // 0x2cd8e4: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x2cd8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
label_2cd8e8:
    // 0x2cd8e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cd8ec:
    // 0x2cd8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD8ECu;
        // 0x2cd8f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD8F4u;
    // 0x2cd8f4: 0x0  nop
    ctx->pc = 0x2cd8f4u;
    // NOP
    ctx->pc = 0x2cd8f8u;
}
