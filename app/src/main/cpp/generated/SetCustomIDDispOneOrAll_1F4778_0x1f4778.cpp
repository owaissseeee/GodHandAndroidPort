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

// Function: SetCustomIDDispOneOrAll_1F4778
// Address: 0x1f4778 - 0x1f4840
void SetCustomIDDispOneOrAll_1F4778_0x1f4778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCustomIDDispOneOrAll_1F4778_0x1f4778");
#endif

    switch (ctx->pc) {
        case 0x1f47a8u: goto label_1f47a8;
        case 0x1f47b4u: goto label_1f47b4;
        case 0x1f47dcu: goto label_1f47dc;
        case 0x1f47f8u: goto label_1f47f8;
        case 0x1f4804u: goto label_1f4804;
        case 0x1f482cu: goto label_1f482c;
        default: break;
    }

    ctx->pc = 0x1f4778u;

    // 0x1f4778: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f4778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f477c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1f477cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4780: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f4780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f4784: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1f4784u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f4788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f478c: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F478Cu;
    {
        const bool branch_taken_0x1f478c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F478Cu;
        // 0x1f4790: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f478c) {
            ctx->pc = 0x1F47E4u;
            goto label_1f47e4;
        }
    }
    ctx->pc = 0x1F4794u;
    // 0x1f4794: 0x2402006f  addiu       $v0, $zero, 0x6F
    ctx->pc = 0x1f4794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x1f4798: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F4798u;
    {
        const bool branch_taken_0x1f4798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4798u;
        // 0x1f479c: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4798) {
            ctx->pc = 0x1F47C8u;
            goto label_1f47c8;
        }
    }
    ctx->pc = 0x1F47A0u;
    // 0x1f47a0: 0x24f00060  addiu       $s0, $a3, 0x60
    ctx->pc = 0x1f47a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x1f47a4: 0x2411006e  addiu       $s1, $zero, 0x6E
    ctx->pc = 0x1f47a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_1f47a8:
    // 0x1f47a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f47a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f47ac: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1F47ACu;
    SET_GPR_U32(ctx, 31, 0x1F47B4u);
    ctx->pc = 0x1F47B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F47ACu;
    // 0x1f47b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1F47ACu, 0x1F47B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F47B4u;
label_1f47b4:
    // 0x1f47b4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f47b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1f47b8: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F47B8u;
    {
        const bool branch_taken_0x1f47b8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1F47BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F47B8u;
        // 0x1f47bc: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f47b8) {
            ctx->pc = 0x1F47A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f47a8;
        }
    }
    ctx->pc = 0x1F47C0u;
    // 0x1f47c0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1F47C0u;
    {
        const bool branch_taken_0x1f47c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F47C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F47C0u;
        // 0x1f47c4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f47c0) {
            ctx->pc = 0x1F4830u;
            goto label_1f4830;
        }
    }
    ctx->pc = 0x1F47C8u;
label_1f47c8:
    // 0x1f47c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f47c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f47cc: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x1f47ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f47d0: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1f47d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1f47d4: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1F47D4u;
    SET_GPR_U32(ctx, 31, 0x1F47DCu);
    ctx->pc = 0x1F47D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F47D4u;
    // 0x1f47d8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1F47D4u, 0x1F47DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F47DCu;
label_1f47dc:
    // 0x1f47dc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1F47DCu;
    {
        const bool branch_taken_0x1f47dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F47E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F47DCu;
        // 0x1f47e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f47dc) {
            ctx->pc = 0x1F4830u;
            goto label_1f4830;
        }
    }
    ctx->pc = 0x1F47E4u;
label_1f47e4:
    // 0x1f47e4: 0x2402006f  addiu       $v0, $zero, 0x6F
    ctx->pc = 0x1f47e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x1f47e8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F47E8u;
    {
        const bool branch_taken_0x1f47e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F47ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F47E8u;
        // 0x1f47ec: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f47e8) {
            ctx->pc = 0x1F4818u;
            goto label_1f4818;
        }
    }
    ctx->pc = 0x1F47F0u;
    // 0x1f47f0: 0x24f00060  addiu       $s0, $a3, 0x60
    ctx->pc = 0x1f47f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x1f47f4: 0x2411006e  addiu       $s1, $zero, 0x6E
    ctx->pc = 0x1f47f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_1f47f8:
    // 0x1f47f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f47f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f47fc: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1F47FCu;
    SET_GPR_U32(ctx, 31, 0x1F4804u);
    ctx->pc = 0x1F4800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F47FCu;
    // 0x1f4800: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1F47FCu, 0x1F4804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4804u;
label_1f4804:
    // 0x1f4804: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f4804u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1f4808: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F4808u;
    {
        const bool branch_taken_0x1f4808 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1F480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4808u;
        // 0x1f480c: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4808) {
            ctx->pc = 0x1F47F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f47f8;
        }
    }
    ctx->pc = 0x1F4810u;
    // 0x1f4810: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F4810u;
    {
        const bool branch_taken_0x1f4810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4810u;
        // 0x1f4814: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4810) {
            ctx->pc = 0x1F4830u;
            goto label_1f4830;
        }
    }
    ctx->pc = 0x1F4818u;
label_1f4818:
    // 0x1f4818: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f4818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f481c: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x1f481cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f4820: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1f4820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1f4824: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1F4824u;
    SET_GPR_U32(ctx, 31, 0x1F482Cu);
    ctx->pc = 0x1F4828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4824u;
    // 0x1f4828: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1F4824u, 0x1F482Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F482Cu;
label_1f482c:
    // 0x1f482c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f482cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f4830:
    // 0x1f4830: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f4830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4838: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4838u;
        // 0x1f483c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4840u;
}
