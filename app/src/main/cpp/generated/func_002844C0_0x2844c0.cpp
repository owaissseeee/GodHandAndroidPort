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

// Function: func_002844C0
// Address: 0x2844c0 - 0x284548
void func_002844C0_0x2844c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002844C0_0x2844c0");
#endif

    ctx->pc = 0x2844c0u;

    // 0x2844c0: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2844C0u;
    {
        const bool branch_taken_0x2844c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2844C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2844C0u;
        // 0x2844c4: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2844c0) {
            ctx->pc = 0x28453Cu;
            goto label_28453c;
        }
    }
    ctx->pc = 0x2844C8u;
    // 0x2844c8: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x2844c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x2844cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2844CCu;
    {
        const bool branch_taken_0x2844cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2844D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2844CCu;
        // 0x2844d0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2844cc) {
            ctx->pc = 0x2844E0u;
            goto label_2844e0;
        }
    }
    ctx->pc = 0x2844D4u;
    // 0x2844d4: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x2844d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x2844d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2844D8u;
    {
        const bool branch_taken_0x2844d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2844DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2844D8u;
        // 0x2844dc: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2844d8) {
            ctx->pc = 0x2844E4u;
            goto label_2844e4;
        }
    }
    ctx->pc = 0x2844E0u;
label_2844e0:
    // 0x2844e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2844e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2844e4:
    // 0x2844e4: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x2844E4u;
    {
        const bool branch_taken_0x2844e4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2844E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2844E4u;
        // 0x2844e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2844e4) {
            ctx->pc = 0x28453Cu;
            goto label_28453c;
        }
    }
    ctx->pc = 0x2844ECu;
    // 0x2844ec: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x2844ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x2844f0: 0x4c00002  bltz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2844F0u;
    {
        const bool branch_taken_0x2844f0 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x2844F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2844F0u;
        // 0x2844f4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2844f0) {
            ctx->pc = 0x2844FCu;
            goto label_2844fc;
        }
    }
    ctx->pc = 0x2844F8u;
    // 0x2844f8: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2844f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2844fc:
    // 0x2844fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2844fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x284500: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x284500u;
    {
        const bool branch_taken_0x284500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284500u;
        // 0x284504: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284500) {
            ctx->pc = 0x284518u;
            goto label_284518;
        }
    }
    ctx->pc = 0x284508u;
    // 0x284508: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x284508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x28450c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28450cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x284510: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x284510u;
    {
        const bool branch_taken_0x284510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284510u;
        // 0x284514: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284510) {
            ctx->pc = 0x28451Cu;
            goto label_28451c;
        }
    }
    ctx->pc = 0x284518u;
label_284518:
    // 0x284518: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x284518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28451c:
    // 0x28451c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28451Cu;
    {
        const bool branch_taken_0x28451c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28451c) {
            ctx->pc = 0x28453Cu;
            goto label_28453c;
        }
    }
    ctx->pc = 0x284524u;
    // 0x284524: 0xace20148  sw          $v0, 0x148($a3)
    ctx->pc = 0x284524u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 328), GPR_U32(ctx, 2));
    // 0x284528: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x284528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x28452c: 0xac8621b4  sw          $a2, 0x21B4($a0)
    ctx->pc = 0x28452cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8628), GPR_U32(ctx, 6));
    // 0x284530: 0xac822168  sw          $v0, 0x2168($a0)
    ctx->pc = 0x284530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8552), GPR_U32(ctx, 2));
    // 0x284534: 0xac852188  sw          $a1, 0x2188($a0)
    ctx->pc = 0x284534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8584), GPR_U32(ctx, 5));
    // 0x284538: 0xac8521b0  sw          $a1, 0x21B0($a0)
    ctx->pc = 0x284538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8624), GPR_U32(ctx, 5));
label_28453c:
    // 0x28453c: 0x3e00008  jr          $ra
    ctx->pc = 0x28453Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28453Cu;
        // 0x284540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28453Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284544u;
    // 0x284544: 0x0  nop
    ctx->pc = 0x284544u;
    // NOP
    ctx->pc = 0x284548u;
}
