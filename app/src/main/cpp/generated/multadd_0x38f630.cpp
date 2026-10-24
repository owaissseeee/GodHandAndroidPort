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

// Function: multadd
// Address: 0x38f630 - 0x38f700
void multadd_0x38f630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("multadd_0x38f630");
#endif

    switch (ctx->pc) {
        case 0x38f660u: goto label_38f660;
        case 0x38f6ccu: goto label_38f6cc;
        default: break;
    }

    ctx->pc = 0x38f630u;

    // 0x38f630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38f630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38f634: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x38f634u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f638: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38f638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38f63c: 0x250b0014  addiu       $t3, $t0, 0x14
    ctx->pc = 0x38f63cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x38f640: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38f640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38f644: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x38f644u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f648: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38f648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38f64c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x38f64cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f650: 0x8d100010  lw          $s0, 0x10($t0)
    ctx->pc = 0x38f650u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x38f654: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x38f654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f658: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x38f658u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f65c: 0x0  nop
    ctx->pc = 0x38f65cu;
    // NOP
label_38f660:
    // 0x38f660: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x38f660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x38f664: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x38f664u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x38f668: 0x150302a  slt         $a2, $t2, $s0
    ctx->pc = 0x38f668u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x38f66c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x38f66cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x38f670: 0x891018  mult        $v0, $a0, $t1
    ctx->pc = 0x38f670u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x38f674: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x38f674u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x38f678: 0x691818  mult        $v1, $v1, $t1
    ctx->pc = 0x38f678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x38f67c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x38f67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x38f680: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x38f680u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x38f684: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x38f684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x38f688: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x38f688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x38f68c: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x38f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x38f690: 0x38c02  srl         $s1, $v1, 16
    ctx->pc = 0x38f690u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x38f694: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x38f694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x38f698: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x38f698u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x38f69c: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x38F69Cu;
    {
        const bool branch_taken_0x38f69c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F69Cu;
        // 0x38f6a0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f69c) {
            ctx->pc = 0x38F660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38f660;
        }
    }
    ctx->pc = 0x38F6A4u;
    // 0x38f6a4: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x38F6A4u;
    {
        const bool branch_taken_0x38f6a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F6A4u;
        // 0x38f6a8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f6a4) {
            ctx->pc = 0x38F6ECu;
            goto label_38f6ec;
        }
    }
    ctx->pc = 0x38F6ACu;
    // 0x38f6ac: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x38f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x38f6b0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x38f6b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x38f6b4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x38F6B4u;
    {
        const bool branch_taken_0x38f6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F6B4u;
        // 0x38f6b8: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f6b4) {
            ctx->pc = 0x38F6D8u;
            goto label_38f6d8;
        }
    }
    ctx->pc = 0x38F6BCu;
    // 0x38f6bc: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x38f6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x38f6c0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x38f6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f6c4: 0xc0e3d6e  jal         func_38F5B8
    ctx->pc = 0x38F6C4u;
    SET_GPR_U32(ctx, 31, 0x38F6CCu);
    ctx->pc = 0x38F6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F6C4u;
    // 0x38f6c8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F5B8u, 0x38F6C4u, 0x38F6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F6CCu;
label_38f6cc:
    // 0x38f6cc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x38f6ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f6d0: 0x250b0014  addiu       $t3, $t0, 0x14
    ctx->pc = 0x38f6d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x38f6d4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x38f6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_38f6d8:
    // 0x38f6d8: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x38f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x38f6dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x38f6dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x38f6e0: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x38f6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x38f6e4: 0xad100010  sw          $s0, 0x10($t0)
    ctx->pc = 0x38f6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 16));
    // 0x38f6e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38f6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38f6ec:
    // 0x38f6ec: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x38f6ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f6f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38f6f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38f6f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38f6f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x38F6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F6F8u;
        // 0x38f6fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F700u;
}
