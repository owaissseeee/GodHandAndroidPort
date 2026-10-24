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

// Function: func_0036C450
// Address: 0x36c450 - 0x36c518
void func_0036C450_0x36c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036C450_0x36c450");
#endif

    switch (ctx->pc) {
        case 0x36c498u: goto label_36c498;
        case 0x36c4b0u: goto label_36c4b0;
        case 0x36c4f8u: goto label_36c4f8;
        default: break;
    }

    ctx->pc = 0x36c450u;

    // 0x36c450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36c450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36c454: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x36c454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36c458: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36c458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36c45c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x36c45cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c460: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c464: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x36c464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c468: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36c468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36c46c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36c46cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c470: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x36c470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x36c474: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36C474u;
    {
        const bool branch_taken_0x36c474 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x36C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C474u;
        // 0x36c478: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c474) {
            ctx->pc = 0x36C488u;
            goto label_36c488;
        }
    }
    ctx->pc = 0x36C47Cu;
    // 0x36c47c: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x36C47Cu;
    {
        const bool branch_taken_0x36c47c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C47Cu;
        // 0x36c480: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c47c) {
            ctx->pc = 0x36C488u;
            goto label_36c488;
        }
    }
    ctx->pc = 0x36C484u;
    // 0x36c484: 0x2450c448  addiu       $s0, $v0, -0x3BB8
    ctx->pc = 0x36c484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952008));
label_36c488:
    // 0x36c488: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x36C488u;
    {
        const bool branch_taken_0x36c488 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x36c488) {
            ctx->pc = 0x36C4A8u;
            goto label_36c4a8;
        }
    }
    ctx->pc = 0x36C490u;
    // 0x36c490: 0xc0db146  jal         func_36C518
    ctx->pc = 0x36C490u;
    SET_GPR_U32(ctx, 31, 0x36C498u);
    ctx->pc = 0x36C494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C490u;
    // 0x36c494: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C518u, 0x36C490u, 0x36C498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C498u;
label_36c498:
    // 0x36c498: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x36c498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x36c49c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x36C49Cu;
    {
        const bool branch_taken_0x36c49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C49Cu;
        // 0x36c4a0: 0x24436ce8  addiu       $v1, $v0, 0x6CE8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c49c) {
            ctx->pc = 0x36C4DCu;
            goto label_36c4dc;
        }
    }
    ctx->pc = 0x36C4A4u;
    // 0x36c4a4: 0x0  nop
    ctx->pc = 0x36c4a4u;
    // NOP
label_36c4a8:
    // 0x36c4a8: 0xc0db17e  jal         func_36C5F8
    ctx->pc = 0x36C4A8u;
    SET_GPR_U32(ctx, 31, 0x36C4B0u);
    ctx->pc = 0x36C4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C4A8u;
    // 0x36c4ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5F8u, 0x36C4A8u, 0x36C4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C4B0u;
label_36c4b0:
    // 0x36c4b0: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x36c4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x36c4b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36C4B4u;
    {
        const bool branch_taken_0x36c4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C4B4u;
        // 0x36c4b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c4b4) {
            ctx->pc = 0x36C4D8u;
            goto label_36c4d8;
        }
    }
    ctx->pc = 0x36C4BCu;
    // 0x36c4bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c4bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c4c0: 0x34a50202  ori         $a1, $a1, 0x202
    ctx->pc = 0x36c4c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)514);
    // 0x36c4c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36c4c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c4c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36c4c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c4cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x36c4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36c4d0: 0x80da7c8  j           func_369F20
    ctx->pc = 0x36C4D0u;
    ctx->pc = 0x36C4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C4D0u;
    // 0x36c4d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369F20u, 0x36C4D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36C4D8u;
label_36c4d8:
    // 0x36c4d8: 0x26230190  addiu       $v1, $s1, 0x190
    ctx->pc = 0x36c4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
label_36c4dc:
    // 0x36c4dc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x36c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x36c4e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36c4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c4e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36c4e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x36c4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c4ec: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x36c4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x36c4f0: 0xc0db1a8  jal         func_36C6A0
    ctx->pc = 0x36C4F0u;
    SET_GPR_U32(ctx, 31, 0x36C4F8u);
    ctx->pc = 0x36C4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C4F0u;
    // 0x36c4f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C6A0u, 0x36C4F0u, 0x36C4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C4F8u;
label_36c4f8:
    // 0x36c4f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36c4f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c4fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c4fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c500: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36c500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c504: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36c504u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c508: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x36c508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36c50c: 0x3e00008  jr          $ra
    ctx->pc = 0x36C50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C50Cu;
        // 0x36c510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C514u;
    // 0x36c514: 0x0  nop
    ctx->pc = 0x36c514u;
    // NOP
    ctx->pc = 0x36c518u;
}
