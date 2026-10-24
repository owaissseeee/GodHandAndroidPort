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

// Function: func_0036C568
// Address: 0x36c568 - 0x36c5f8
void func_0036C568_0x36c568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036C568_0x36c568");
#endif

    switch (ctx->pc) {
        case 0x36c5a0u: goto label_36c5a0;
        default: break;
    }

    ctx->pc = 0x36c568u;

    // 0x36c568: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36c568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36c56c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c570: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36c570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c574: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36c574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36c578: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36c578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c57c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36c57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36c580: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x36c580u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c584: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36C584u;
    {
        const bool branch_taken_0x36c584 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C584u;
        // 0x36c588: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c584) {
            ctx->pc = 0x36C598u;
            goto label_36c598;
        }
    }
    ctx->pc = 0x36C58Cu;
    // 0x36c58c: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x36c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x36c590: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x36C590u;
    {
        const bool branch_taken_0x36c590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C590u;
        // 0x36c594: 0x24446ce8  addiu       $a0, $v0, 0x6CE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c590) {
            ctx->pc = 0x36C5CCu;
            goto label_36c5cc;
        }
    }
    ctx->pc = 0x36C598u;
label_36c598:
    // 0x36c598: 0xc0db17e  jal         func_36C5F8
    ctx->pc = 0x36C598u;
    SET_GPR_U32(ctx, 31, 0x36C5A0u);
    ctx->pc = 0x36C5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5F8u, 0x36C598u, 0x36C5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C5A0u;
label_36c5a0:
    // 0x36c5a0: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x36c5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x36c5a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36C5A4u;
    {
        const bool branch_taken_0x36c5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C5A4u;
        // 0x36c5a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c5a4) {
            ctx->pc = 0x36C5C8u;
            goto label_36c5c8;
        }
    }
    ctx->pc = 0x36C5ACu;
    // 0x36c5ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c5acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c5b0: 0x34a50210  ori         $a1, $a1, 0x210
    ctx->pc = 0x36c5b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)528);
    // 0x36c5b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36c5b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c5b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36c5b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c5bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x36c5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36c5c0: 0x80da7c8  j           func_369F20
    ctx->pc = 0x36C5C0u;
    ctx->pc = 0x36C5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C5C0u;
    // 0x36c5c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369F20u, 0x36C5C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36C5C8u;
label_36c5c8:
    // 0x36c5c8: 0x26040190  addiu       $a0, $s0, 0x190
    ctx->pc = 0x36c5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_36c5cc:
    // 0x36c5cc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x36c5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x36c5d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36c5d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c5d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x36c5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36c5d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c5d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c5dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x36c5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36c5e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36c5e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c5e4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x36c5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36c5e8: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x36c5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x36c5ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36c5ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x36C5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C5F0u;
        // 0x36c5f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C5F8u;
}
