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

// Function: SFH_Create
// Address: 0x35d610 - 0x35d6d8
void SFH_Create_0x35d610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFH_Create_0x35d610");
#endif

    switch (ctx->pc) {
        case 0x35d668u: goto label_35d668;
        case 0x35d684u: goto label_35d684;
        case 0x35d69cu: goto label_35d69c;
        default: break;
    }

    ctx->pc = 0x35d610u;

    // 0x35d610: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35d610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35d614: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35d614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d618: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35d618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35d61c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x35d61cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d620: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x35d620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x35d624: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x35d624u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d628: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x35d628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x35d62c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x35d62cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d630: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x35d630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x35d634: 0x3c160076  lui         $s6, 0x76
    ctx->pc = 0x35d634u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)118 << 16));
    // 0x35d638: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35d638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35d63c: 0x26c46c90  addiu       $a0, $s6, 0x6C90
    ctx->pc = 0x35d63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 27792));
    // 0x35d640: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35d640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35d644: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35d644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35d648: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x35d648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x35d64c: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x35d64cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x766C90u));
    // 0x35d650: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x35d650u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x766C94u));
    // 0x35d654: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x35d654u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x35d658: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x35D658u;
    {
        const bool branch_taken_0x35d658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D658u;
        // 0x35d65c: 0x8c930008  lw          $s3, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d658) {
            ctx->pc = 0x35D6B0u;
            goto label_35d6b0;
        }
    }
    ctx->pc = 0x35D660u;
    // 0x35d660: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35d660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d664: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x35d664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_35d668:
    // 0x35d668: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x35D668u;
    {
        const bool branch_taken_0x35d668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d668) {
            ctx->pc = 0x35D66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35D668u;
            // 0x35d66c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35D690u;
            goto label_35d690;
        }
    }
    ctx->pc = 0x35D670u;
    // 0x35d670: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x35d670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x35d674: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35d674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35d678: 0x2629021  addu        $s2, $s3, $v0
    ctx->pc = 0x35d678u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x35d67c: 0xc0d75ea  jal         func_35D7A8
    ctx->pc = 0x35D67Cu;
    SET_GPR_U32(ctx, 31, 0x35D684u);
    ctx->pc = 0x35D680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D67Cu;
    // 0x35d680: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D7A8u, 0x35D67Cu, 0x35D684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D684u;
label_35d684:
    // 0x35d684: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x35D684u;
    {
        const bool branch_taken_0x35d684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D684u;
        // 0x35d688: 0x211102a  slt         $v0, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d684) {
            ctx->pc = 0x35D668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d668;
        }
    }
    ctx->pc = 0x35D68Cu;
    // 0x35d68c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35d68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35d690:
    // 0x35d690: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x35d690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d694: 0xc0d75d0  jal         func_35D740
    ctx->pc = 0x35D694u;
    SET_GPR_U32(ctx, 31, 0x35D69Cu);
    ctx->pc = 0x35D698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D694u;
    // 0x35d698: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D740u, 0x35D694u, 0x35D69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D69Cu;
label_35d69c:
    // 0x35d69c: 0x26c46c90  addiu       $a0, $s6, 0x6C90
    ctx->pc = 0x35d69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 27792));
    // 0x35d6a0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x35d6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35d6a4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x35d6a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d6a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35d6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35d6ac: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x35d6acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_35d6b0:
    // 0x35d6b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d6b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d6b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35d6b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d6b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35d6b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d6bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35d6bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35d6c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35d6c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d6c4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x35d6c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35d6c8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x35d6c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35d6cc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x35d6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35d6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x35D6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D6D0u;
        // 0x35d6d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D6D8u;
}
