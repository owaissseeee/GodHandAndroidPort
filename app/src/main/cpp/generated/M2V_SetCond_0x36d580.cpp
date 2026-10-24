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

// Function: M2V_SetCond
// Address: 0x36d580 - 0x36d630
void M2V_SetCond_0x36d580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("M2V_SetCond_0x36d580");
#endif

    switch (ctx->pc) {
        case 0x36d5c8u: goto label_36d5c8;
        case 0x36d5e0u: goto label_36d5e0;
        default: break;
    }

    ctx->pc = 0x36d580u;

    // 0x36d580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36d580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36d584: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x36d584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36d588: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36d588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36d58c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x36d58cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d590: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36d590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36d594: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36d594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d598: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36d598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36d59c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x36d59cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d5a0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x36d5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x36d5a4: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36D5A4u;
    {
        const bool branch_taken_0x36d5a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x36D5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D5A4u;
        // 0x36d5a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d5a4) {
            ctx->pc = 0x36D5B8u;
            goto label_36d5b8;
        }
    }
    ctx->pc = 0x36D5ACu;
    // 0x36d5ac: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x36D5ACu;
    {
        const bool branch_taken_0x36d5ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x36D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D5ACu;
        // 0x36d5b0: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d5ac) {
            ctx->pc = 0x36D5B8u;
            goto label_36d5b8;
        }
    }
    ctx->pc = 0x36D5B4u;
    // 0x36d5b4: 0x2451cd70  addiu       $s1, $v0, -0x3290
    ctx->pc = 0x36d5b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954352));
label_36d5b8:
    // 0x36d5b8: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36D5B8u;
    {
        const bool branch_taken_0x36d5b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x36d5b8) {
            ctx->pc = 0x36D5D8u;
            goto label_36d5d8;
        }
    }
    ctx->pc = 0x36D5C0u;
    // 0x36d5c0: 0xc0db58c  jal         func_36D630
    ctx->pc = 0x36D5C0u;
    SET_GPR_U32(ctx, 31, 0x36D5C8u);
    ctx->pc = 0x36D5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D5C0u;
    // 0x36d5c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D630u, 0x36D5C0u, 0x36D5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D5C8u;
label_36d5c8:
    // 0x36d5c8: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x36d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x36d5cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x36D5CCu;
    {
        const bool branch_taken_0x36d5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D5CCu;
        // 0x36d5d0: 0x2444a590  addiu       $a0, $v0, -0x5A70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d5cc) {
            ctx->pc = 0x36D60Cu;
            goto label_36d60c;
        }
    }
    ctx->pc = 0x36D5D4u;
    // 0x36d5d4: 0x0  nop
    ctx->pc = 0x36d5d4u;
    // NOP
label_36d5d8:
    // 0x36d5d8: 0xc0db5a2  jal         func_36D688
    ctx->pc = 0x36D5D8u;
    SET_GPR_U32(ctx, 31, 0x36D5E0u);
    ctx->pc = 0x36D5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D5D8u;
    // 0x36d5dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D688u, 0x36D5D8u, 0x36D5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D5E0u;
label_36d5e0:
    // 0x36d5e0: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x36d5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x36d5e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36D5E4u;
    {
        const bool branch_taken_0x36d5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D5E4u;
        // 0x36d5e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d5e4) {
            ctx->pc = 0x36D608u;
            goto label_36d608;
        }
    }
    ctx->pc = 0x36D5ECu;
    // 0x36d5ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36d5ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d5f0: 0x34a50202  ori         $a1, $a1, 0x202
    ctx->pc = 0x36d5f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)514);
    // 0x36d5f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36d5f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36d5f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36d5f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d5fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x36d5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d600: 0x80db63a  j           func_36D8E8
    ctx->pc = 0x36D600u;
    ctx->pc = 0x36D604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D600u;
    // 0x36d604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D8E8u, 0x36D600u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36D608u;
label_36d608:
    // 0x36d608: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x36d608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_36d60c:
    // 0x36d60c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x36d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x36d610: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36d610u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d614: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x36d614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x36d618: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36d618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d61c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x36d61cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x36d620: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x36d620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d624: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36d624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36d628: 0x3e00008  jr          $ra
    ctx->pc = 0x36D628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D628u;
        // 0x36d62c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D630u;
}
