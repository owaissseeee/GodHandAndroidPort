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

// Function: cEm57_SetParent
// Address: 0x27b260 - 0x27b2e8
void cEm57_SetParent_0x27b260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm57_SetParent_0x27b260");
#endif

    ctx->pc = 0x27b260u;

    // 0x27b260: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x27B260u;
    {
        const bool branch_taken_0x27b260 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B260u;
        // 0x27b264: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b260) {
            ctx->pc = 0x27B2DCu;
            goto label_27b2dc;
        }
    }
    ctx->pc = 0x27B268u;
    // 0x27b268: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x27b268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x27b26c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27B26Cu;
    {
        const bool branch_taken_0x27b26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B26Cu;
        // 0x27b270: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b26c) {
            ctx->pc = 0x27B280u;
            goto label_27b280;
        }
    }
    ctx->pc = 0x27B274u;
    // 0x27b274: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x27b274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x27b278: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27B278u;
    {
        const bool branch_taken_0x27b278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B278u;
        // 0x27b27c: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b278) {
            ctx->pc = 0x27B284u;
            goto label_27b284;
        }
    }
    ctx->pc = 0x27B280u;
label_27b280:
    // 0x27b280: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27b280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b284:
    // 0x27b284: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x27B284u;
    {
        const bool branch_taken_0x27b284 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B284u;
        // 0x27b288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b284) {
            ctx->pc = 0x27B2DCu;
            goto label_27b2dc;
        }
    }
    ctx->pc = 0x27B28Cu;
    // 0x27b28c: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x27b28cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x27b290: 0x4c00002  bltz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x27B290u;
    {
        const bool branch_taken_0x27b290 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x27B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B290u;
        // 0x27b294: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b290) {
            ctx->pc = 0x27B29Cu;
            goto label_27b29c;
        }
    }
    ctx->pc = 0x27B298u;
    // 0x27b298: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x27b298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27b29c:
    // 0x27b29c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27b29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27b2a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27B2A0u;
    {
        const bool branch_taken_0x27b2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B2A0u;
        // 0x27b2a4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b2a0) {
            ctx->pc = 0x27B2B8u;
            goto label_27b2b8;
        }
    }
    ctx->pc = 0x27B2A8u;
    // 0x27b2a8: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x27b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x27b2ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b2b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27B2B0u;
    {
        const bool branch_taken_0x27b2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B2B0u;
        // 0x27b2b4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b2b0) {
            ctx->pc = 0x27B2BCu;
            goto label_27b2bc;
        }
    }
    ctx->pc = 0x27B2B8u;
label_27b2b8:
    // 0x27b2b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27b2b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b2bc:
    // 0x27b2bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27B2BCu;
    {
        const bool branch_taken_0x27b2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b2bc) {
            ctx->pc = 0x27B2DCu;
            goto label_27b2dc;
        }
    }
    ctx->pc = 0x27B2C4u;
    // 0x27b2c4: 0xace20148  sw          $v0, 0x148($a3)
    ctx->pc = 0x27b2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 328), GPR_U32(ctx, 2));
    // 0x27b2c8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x27b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x27b2cc: 0xac8621b4  sw          $a2, 0x21B4($a0)
    ctx->pc = 0x27b2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8628), GPR_U32(ctx, 6));
    // 0x27b2d0: 0xac822168  sw          $v0, 0x2168($a0)
    ctx->pc = 0x27b2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8552), GPR_U32(ctx, 2));
    // 0x27b2d4: 0xac852188  sw          $a1, 0x2188($a0)
    ctx->pc = 0x27b2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8584), GPR_U32(ctx, 5));
    // 0x27b2d8: 0xac8521b0  sw          $a1, 0x21B0($a0)
    ctx->pc = 0x27b2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8624), GPR_U32(ctx, 5));
label_27b2dc:
    // 0x27b2dc: 0x3e00008  jr          $ra
    ctx->pc = 0x27B2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B2DCu;
        // 0x27b2e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B2E4u;
    // 0x27b2e4: 0x0  nop
    ctx->pc = 0x27b2e4u;
    // NOP
    ctx->pc = 0x27b2e8u;
}
