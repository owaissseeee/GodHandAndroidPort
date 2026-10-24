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

// Function: sfply_IsPrepEnd
// Address: 0x357598 - 0x357648
void sfply_IsPrepEnd_0x357598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfply_IsPrepEnd_0x357598");
#endif

    switch (ctx->pc) {
        case 0x3575bcu: goto label_3575bc;
        case 0x3575d0u: goto label_3575d0;
        case 0x3575e0u: goto label_3575e0;
        case 0x3575f0u: goto label_3575f0;
        case 0x357608u: goto label_357608;
        case 0x357618u: goto label_357618;
        default: break;
    }

    ctx->pc = 0x357598u;

    // 0x357598: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35759c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x35759cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3575a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3575a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3575a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3575a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3575a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3575a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3575ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3575acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3575b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3575b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3575b4: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x3575B4u;
    SET_GPR_U32(ctx, 31, 0x3575BCu);
    ctx->pc = 0x3575B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3575B4u;
    // 0x3575b8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x3575B4u, 0x3575BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3575BCu;
label_3575bc:
    // 0x3575bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3575bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3575c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3575C0u;
    {
        const bool branch_taken_0x3575c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3575C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3575C0u;
        // 0x3575c4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3575c0) {
            ctx->pc = 0x3575E8u;
            goto label_3575e8;
        }
    }
    ctx->pc = 0x3575C8u;
    // 0x3575c8: 0xc0d70ce  jal         func_35C338
    ctx->pc = 0x3575C8u;
    SET_GPR_U32(ctx, 31, 0x3575D0u);
    ctx->pc = 0x35C338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C338u, 0x3575C8u, 0x3575D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3575D0u;
label_3575d0:
    // 0x3575d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3575d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3575d4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3575d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3575d8: 0xc0d70da  jal         func_35C368
    ctx->pc = 0x3575D8u;
    SET_GPR_U32(ctx, 31, 0x3575E0u);
    ctx->pc = 0x3575DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3575D8u;
    // 0x3575dc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C368u, 0x3575D8u, 0x3575E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3575E0u;
label_3575e0:
    // 0x3575e0: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3575e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3575e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3575e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3575e8:
    // 0x3575e8: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x3575E8u;
    SET_GPR_U32(ctx, 31, 0x3575F0u);
    ctx->pc = 0x3575ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3575E8u;
    // 0x3575ec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x3575E8u, 0x3575F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3575F0u;
label_3575f0:
    // 0x3575f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3575f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3575f4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3575f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3575f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3575F8u;
    {
        const bool branch_taken_0x3575f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3575FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3575F8u;
        // 0x3575fc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3575f8) {
            ctx->pc = 0x35761Cu;
            goto label_35761c;
        }
    }
    ctx->pc = 0x357600u;
    // 0x357600: 0xc0d70ce  jal         func_35C338
    ctx->pc = 0x357600u;
    SET_GPR_U32(ctx, 31, 0x357608u);
    ctx->pc = 0x35C338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C338u, 0x357600u, 0x357608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357608u;
label_357608:
    // 0x357608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35760c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x35760cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x357610: 0xc0d70da  jal         func_35C368
    ctx->pc = 0x357610u;
    SET_GPR_U32(ctx, 31, 0x357618u);
    ctx->pc = 0x357614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357610u;
    // 0x357614: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C368u, 0x357610u, 0x357618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357618u;
label_357618:
    // 0x357618: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x357618u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_35761c:
    // 0x35761c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x35761Cu;
    {
        const bool branch_taken_0x35761c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x357620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35761Cu;
        // 0x357620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35761c) {
            ctx->pc = 0x357630u;
            goto label_357630;
        }
    }
    ctx->pc = 0x357624u;
    // 0x357624: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x357624u;
    {
        const bool branch_taken_0x357624 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x357628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357624u;
        // 0x357628: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357624) {
            ctx->pc = 0x357630u;
            goto label_357630;
        }
    }
    ctx->pc = 0x35762Cu;
    // 0x35762c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35762cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357630:
    // 0x357630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x357630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357634: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x357634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357638: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x357638u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35763c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35763cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x357640: 0x3e00008  jr          $ra
    ctx->pc = 0x357640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357640u;
        // 0x357644: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357648u;
}
