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

// Function: cEm53_SetParent
// Address: 0x27a768 - 0x27a7f0
void cEm53_SetParent_0x27a768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm53_SetParent_0x27a768");
#endif

    ctx->pc = 0x27a768u;

    // 0x27a768: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x27A768u;
    {
        const bool branch_taken_0x27a768 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A768u;
        // 0x27a76c: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a768) {
            ctx->pc = 0x27A7E4u;
            goto label_27a7e4;
        }
    }
    ctx->pc = 0x27A770u;
    // 0x27a770: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x27a770u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x27a774: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A774u;
    {
        const bool branch_taken_0x27a774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A774u;
        // 0x27a778: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a774) {
            ctx->pc = 0x27A788u;
            goto label_27a788;
        }
    }
    ctx->pc = 0x27A77Cu;
    // 0x27a77c: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x27a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x27a780: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27A780u;
    {
        const bool branch_taken_0x27a780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A780u;
        // 0x27a784: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a780) {
            ctx->pc = 0x27A78Cu;
            goto label_27a78c;
        }
    }
    ctx->pc = 0x27A788u;
label_27a788:
    // 0x27a788: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27a788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a78c:
    // 0x27a78c: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x27A78Cu;
    {
        const bool branch_taken_0x27a78c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A78Cu;
        // 0x27a790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a78c) {
            ctx->pc = 0x27A7E4u;
            goto label_27a7e4;
        }
    }
    ctx->pc = 0x27A794u;
    // 0x27a794: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x27a794u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x27a798: 0x4c00002  bltz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x27A798u;
    {
        const bool branch_taken_0x27a798 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x27A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A798u;
        // 0x27a79c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a798) {
            ctx->pc = 0x27A7A4u;
            goto label_27a7a4;
        }
    }
    ctx->pc = 0x27A7A0u;
    // 0x27a7a0: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x27a7a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27a7a4:
    // 0x27a7a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27a7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27a7a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27A7A8u;
    {
        const bool branch_taken_0x27a7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A7A8u;
        // 0x27a7ac: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a7a8) {
            ctx->pc = 0x27A7C0u;
            goto label_27a7c0;
        }
    }
    ctx->pc = 0x27A7B0u;
    // 0x27a7b0: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x27a7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x27a7b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27a7b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27A7B8u;
    {
        const bool branch_taken_0x27a7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A7B8u;
        // 0x27a7bc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a7b8) {
            ctx->pc = 0x27A7C4u;
            goto label_27a7c4;
        }
    }
    ctx->pc = 0x27A7C0u;
label_27a7c0:
    // 0x27a7c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27a7c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a7c4:
    // 0x27a7c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27A7C4u;
    {
        const bool branch_taken_0x27a7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a7c4) {
            ctx->pc = 0x27A7E4u;
            goto label_27a7e4;
        }
    }
    ctx->pc = 0x27A7CCu;
    // 0x27a7cc: 0xace20148  sw          $v0, 0x148($a3)
    ctx->pc = 0x27a7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 328), GPR_U32(ctx, 2));
    // 0x27a7d0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x27a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x27a7d4: 0xac8621b4  sw          $a2, 0x21B4($a0)
    ctx->pc = 0x27a7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8628), GPR_U32(ctx, 6));
    // 0x27a7d8: 0xac822168  sw          $v0, 0x2168($a0)
    ctx->pc = 0x27a7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8552), GPR_U32(ctx, 2));
    // 0x27a7dc: 0xac852188  sw          $a1, 0x2188($a0)
    ctx->pc = 0x27a7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8584), GPR_U32(ctx, 5));
    // 0x27a7e0: 0xac8521b0  sw          $a1, 0x21B0($a0)
    ctx->pc = 0x27a7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8624), GPR_U32(ctx, 5));
label_27a7e4:
    // 0x27a7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x27A7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A7E4u;
        // 0x27a7e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A7ECu;
    // 0x27a7ec: 0x0  nop
    ctx->pc = 0x27a7ecu;
    // NOP
    ctx->pc = 0x27a7f0u;
}
