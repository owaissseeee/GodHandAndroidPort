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

// Function: func_001645E0
// Address: 0x1645e0 - 0x1646b0
void func_001645E0_0x1645e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001645E0_0x1645e0");
#endif

    switch (ctx->pc) {
        case 0x164608u: goto label_164608;
        case 0x164620u: goto label_164620;
        default: break;
    }

    ctx->pc = 0x1645e0u;

    // 0x1645e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1645e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1645e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1645e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1645e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1645e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1645ec: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1645ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1645f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1645f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1645f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1645f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1645f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1645fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1645FCu;
    {
        const bool branch_taken_0x1645fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645FCu;
        // 0x164600: 0x3c120057  lui         $s2, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645fc) {
            ctx->pc = 0x16460Cu;
            goto label_16460c;
        }
    }
    ctx->pc = 0x164604u;
    // 0x164604: 0x0  nop
    ctx->pc = 0x164604u;
    // NOP
label_164608:
    // 0x164608: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x164608u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_16460c:
    // 0x16460c: 0x2e020009  sltiu       $v0, $s0, 0x9
    ctx->pc = 0x16460cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x164610: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x164610u;
    {
        const bool branch_taken_0x164610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164610u;
        // 0x164614: 0x26449b70  addiu       $a0, $s2, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164610) {
            ctx->pc = 0x164628u;
            goto label_164628;
        }
    }
    ctx->pc = 0x164618u;
    // 0x164618: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x164618u;
    SET_GPR_U32(ctx, 31, 0x164620u);
    ctx->pc = 0x16461Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164618u;
    // 0x16461c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x164618u, 0x164620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164620u;
label_164620:
    // 0x164620: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x164620u;
    {
        const bool branch_taken_0x164620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164620u;
        // 0x164624: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164620) {
            ctx->pc = 0x164608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164608;
        }
    }
    ctx->pc = 0x164628u;
label_164628:
    // 0x164628: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x164628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x16462c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x16462cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164630: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x164630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x164634: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x164634u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x164638: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x164638u;
    {
        const bool branch_taken_0x164638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164638u;
        // 0x16463c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164638) {
            ctx->pc = 0x164698u;
            goto label_164698;
        }
    }
    ctx->pc = 0x164640u;
    // 0x164640: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x164640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x164644: 0x2442f5c0  addiu       $v0, $v0, -0xA40
    ctx->pc = 0x164644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964672));
    // 0x164648: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x164648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16464c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16464cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164650: 0x800008  jr          $a0
    ctx->pc = 0x164650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164658u: goto label_164658;
            case 0x164660u: goto label_164660;
            case 0x164668u: goto label_164668;
            case 0x164670u: goto label_164670;
            case 0x164678u: goto label_164678;
            case 0x164680u: goto label_164680;
            case 0x164688u: goto label_164688;
            case 0x164690u: goto label_164690;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164650u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x164658u;
label_164658:
    // 0x164658: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x164658u;
    {
        const bool branch_taken_0x164658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164658u;
        // 0x16465c: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164658) {
            ctx->pc = 0x164694u;
            goto label_164694;
        }
    }
    ctx->pc = 0x164660u;
label_164660:
    // 0x164660: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x164660u;
    {
        const bool branch_taken_0x164660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164660u;
        // 0x164664: 0x24020300  addiu       $v0, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164660) {
            ctx->pc = 0x164694u;
            goto label_164694;
        }
    }
    ctx->pc = 0x164668u;
label_164668:
    // 0x164668: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x164668u;
    {
        const bool branch_taken_0x164668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164668u;
        // 0x16466c: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164668) {
            ctx->pc = 0x164694u;
            goto label_164694;
        }
    }
    ctx->pc = 0x164670u;
label_164670:
    // 0x164670: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x164670u;
    {
        const bool branch_taken_0x164670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164670u;
        // 0x164674: 0x24020500  addiu       $v0, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164670) {
            ctx->pc = 0x164694u;
            goto label_164694;
        }
    }
    ctx->pc = 0x164678u;
label_164678:
    // 0x164678: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x164678u;
    {
        const bool branch_taken_0x164678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164678u;
        // 0x16467c: 0x24020600  addiu       $v0, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164678) {
            ctx->pc = 0x164694u;
            goto label_164694;
        }
    }
    ctx->pc = 0x164680u;
label_164680:
    // 0x164680: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x164680u;
    {
        const bool branch_taken_0x164680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164680u;
        // 0x164684: 0x24020700  addiu       $v0, $zero, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164680) {
            ctx->pc = 0x164694u;
            goto label_164694;
        }
    }
    ctx->pc = 0x164688u;
label_164688:
    // 0x164688: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x164688u;
    {
        const bool branch_taken_0x164688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164688u;
        // 0x16468c: 0x24020802  addiu       $v0, $zero, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164688) {
            ctx->pc = 0x164694u;
            goto label_164694;
        }
    }
    ctx->pc = 0x164690u;
label_164690:
    // 0x164690: 0x24020806  addiu       $v0, $zero, 0x806
    ctx->pc = 0x164690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
label_164694:
    // 0x164694: 0xa6220134  sh          $v0, 0x134($s1)
    ctx->pc = 0x164694u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 308), (uint16_t)GPR_U32(ctx, 2));
label_164698:
    // 0x164698: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x164698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16469c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16469cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1646a0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1646a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1646a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1646a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1646a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1646A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1646ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646A8u;
        // 0x1646ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1646A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1646B0u;
}
