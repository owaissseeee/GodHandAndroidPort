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

// Function: DTX_CallUrpc
// Address: 0x332670 - 0x332778
void DTX_CallUrpc_0x332670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DTX_CallUrpc_0x332670");
#endif

    switch (ctx->pc) {
        case 0x3326a8u: goto label_3326a8;
        case 0x3326b8u: goto label_3326b8;
        case 0x332718u: goto label_332718;
        case 0x332728u: goto label_332728;
        case 0x332750u: goto label_332750;
        default: break;
    }

    ctx->pc = 0x332670u;

    // 0x332670: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x332670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x332674: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x332674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x332678: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x332678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33267c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x33267cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x332680: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x332680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332684: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x332684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x332688: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x332688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33268c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x33268cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x332690: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x332690u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332694: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x332694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x332698: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x332698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x33269c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x33269cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3326a0: 0xc0ced96  jal         func_33B658
    ctx->pc = 0x3326A0u;
    SET_GPR_U32(ctx, 31, 0x3326A8u);
    ctx->pc = 0x3326A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3326A0u;
    // 0x3326a4: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B658u, 0x3326A0u, 0x3326A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3326A8u;
label_3326a8:
    // 0x3326a8: 0x1a00000d  blez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x3326A8u;
    {
        const bool branch_taken_0x3326a8 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x3326ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3326A8u;
        // 0x3326ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3326a8) {
            ctx->pc = 0x3326E0u;
            goto label_3326e0;
        }
    }
    ctx->pc = 0x3326B0u;
    // 0x3326b0: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x3326b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
    // 0x3326b4: 0x24e861c0  addiu       $t0, $a3, 0x61C0
    ctx->pc = 0x3326b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 25024));
label_3326b8:
    // 0x3326b8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3326b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3326bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3326bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3326c0: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x3326c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3326c4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3326c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3326c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3326c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3326cc: 0xd0282a  slt         $a1, $a2, $s0
    ctx->pc = 0x3326ccu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3326d0: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3326D0u;
    {
        const bool branch_taken_0x3326d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3326D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3326D0u;
        // 0x3326d4: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3326d0) {
            ctx->pc = 0x3326B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3326b8;
        }
    }
    ctx->pc = 0x3326D8u;
    // 0x3326d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3326D8u;
    {
        const bool branch_taken_0x3326d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3326DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3326D8u;
        // 0x3326dc: 0x3c150075  lui         $s5, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3326d8) {
            ctx->pc = 0x3326E8u;
            goto label_3326e8;
        }
    }
    ctx->pc = 0x3326E0u;
label_3326e0:
    // 0x3326e0: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x3326e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
    // 0x3326e4: 0x3c150075  lui         $s5, 0x75
    ctx->pc = 0x3326e4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)117 << 16));
label_3326e8:
    // 0x3326e8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x3326e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x3326ec: 0x26b262c0  addiu       $s2, $s5, 0x62C0
    ctx->pc = 0x3326ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 25280));
    // 0x3326f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3326f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3326f4: 0x24848d40  addiu       $a0, $a0, -0x72C0
    ctx->pc = 0x3326f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937920));
    // 0x3326f8: 0x26650400  addiu       $a1, $s3, 0x400
    ctx->pc = 0x3326f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1024));
    // 0x3326fc: 0x24e761c0  addiu       $a3, $a3, 0x61C0
    ctx->pc = 0x3326fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25024));
    // 0x332700: 0x104080  sll         $t0, $s0, 2
    ctx->pc = 0x332700u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x332704: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x332704u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332708: 0x115080  sll         $t2, $s1, 2
    ctx->pc = 0x332708u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x33270c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x33270cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332710: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x332710u;
    SET_GPR_U32(ctx, 31, 0x332718u);
    ctx->pc = 0x332714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332710u;
    // 0x332714: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x332710u, 0x332718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332718u;
label_332718:
    // 0x332718: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x332718u;
    {
        const bool branch_taken_0x332718 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x33271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332718u;
        // 0x33271c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332718) {
            ctx->pc = 0x332748u;
            goto label_332748;
        }
    }
    ctx->pc = 0x332720u;
    // 0x332720: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x332720u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332724: 0x0  nop
    ctx->pc = 0x332724u;
    // NOP
label_332728:
    // 0x332728: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x332728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x33272c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x33272cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x332730: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x332730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x332734: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x332734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x332738: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x332738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33273c: 0xd1282a  slt         $a1, $a2, $s1
    ctx->pc = 0x33273cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x332740: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x332740u;
    {
        const bool branch_taken_0x332740 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x332744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332740u;
        // 0x332744: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332740) {
            ctx->pc = 0x332728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332728;
        }
    }
    ctx->pc = 0x332748u;
label_332748:
    // 0x332748: 0xc0ced9c  jal         func_33B670
    ctx->pc = 0x332748u;
    SET_GPR_U32(ctx, 31, 0x332750u);
    ctx->pc = 0x33B670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B670u, 0x332748u, 0x332750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332750u;
label_332750:
    // 0x332750: 0x8ea262c0  lw          $v0, 0x62C0($s5)
    ctx->pc = 0x332750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 25280)));
    // 0x332754: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x332754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332758: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x332758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33275c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x33275cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x332760: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x332760u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x332764: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x332764u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x332768: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x332768u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33276c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33276cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x332770: 0x3e00008  jr          $ra
    ctx->pc = 0x332770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332770u;
        // 0x332774: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332778u;
}
