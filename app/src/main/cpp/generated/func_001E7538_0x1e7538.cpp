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

// Function: func_001E7538
// Address: 0x1e7538 - 0x1e7600
void func_001E7538_0x1e7538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E7538_0x1e7538");
#endif

    switch (ctx->pc) {
        case 0x1e7568u: goto label_1e7568;
        case 0x1e7574u: goto label_1e7574;
        case 0x1e759cu: goto label_1e759c;
        case 0x1e75b8u: goto label_1e75b8;
        case 0x1e75c4u: goto label_1e75c4;
        case 0x1e75ecu: goto label_1e75ec;
        default: break;
    }

    ctx->pc = 0x1e7538u;

    // 0x1e7538: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e753c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1e753cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7540: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e7540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e7544: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1e7544u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e754c: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E754Cu;
    {
        const bool branch_taken_0x1e754c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E754Cu;
        // 0x1e7550: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e754c) {
            ctx->pc = 0x1E75A4u;
            goto label_1e75a4;
        }
    }
    ctx->pc = 0x1E7554u;
    // 0x1e7554: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e7554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e7558: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E7558u;
    {
        const bool branch_taken_0x1e7558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7558u;
        // 0x1e755c: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7558) {
            ctx->pc = 0x1E7588u;
            goto label_1e7588;
        }
    }
    ctx->pc = 0x1E7560u;
    // 0x1e7560: 0x24f00580  addiu       $s0, $a3, 0x580
    ctx->pc = 0x1e7560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 1408));
    // 0x1e7564: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1e7564u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e7568:
    // 0x1e7568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e756c: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1E756Cu;
    SET_GPR_U32(ctx, 31, 0x1E7574u);
    ctx->pc = 0x1E7570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E756Cu;
    // 0x1e7570: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1E756Cu, 0x1E7574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7574u;
label_1e7574:
    // 0x1e7574: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e7574u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e7578: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E7578u;
    {
        const bool branch_taken_0x1e7578 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1E757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7578u;
        // 0x1e757c: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7578) {
            ctx->pc = 0x1E7568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7568;
        }
    }
    ctx->pc = 0x1E7580u;
    // 0x1e7580: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1E7580u;
    {
        const bool branch_taken_0x1e7580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7580u;
        // 0x1e7584: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7580) {
            ctx->pc = 0x1E75F0u;
            goto label_1e75f0;
        }
    }
    ctx->pc = 0x1E7588u;
label_1e7588:
    // 0x1e7588: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e7588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e758c: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x1e758cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e7590: 0x24840580  addiu       $a0, $a0, 0x580
    ctx->pc = 0x1e7590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1408));
    // 0x1e7594: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1E7594u;
    SET_GPR_U32(ctx, 31, 0x1E759Cu);
    ctx->pc = 0x1E7598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7594u;
    // 0x1e7598: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1E7594u, 0x1E759Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E759Cu;
label_1e759c:
    // 0x1e759c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E759Cu;
    {
        const bool branch_taken_0x1e759c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E75A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E759Cu;
        // 0x1e75a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e759c) {
            ctx->pc = 0x1E75F0u;
            goto label_1e75f0;
        }
    }
    ctx->pc = 0x1E75A4u;
label_1e75a4:
    // 0x1e75a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e75a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e75a8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E75A8u;
    {
        const bool branch_taken_0x1e75a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E75ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E75A8u;
        // 0x1e75ac: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e75a8) {
            ctx->pc = 0x1E75D8u;
            goto label_1e75d8;
        }
    }
    ctx->pc = 0x1E75B0u;
    // 0x1e75b0: 0x24f00580  addiu       $s0, $a3, 0x580
    ctx->pc = 0x1e75b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 1408));
    // 0x1e75b4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1e75b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e75b8:
    // 0x1e75b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e75b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e75bc: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1E75BCu;
    SET_GPR_U32(ctx, 31, 0x1E75C4u);
    ctx->pc = 0x1E75C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E75BCu;
    // 0x1e75c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1E75BCu, 0x1E75C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E75C4u;
label_1e75c4:
    // 0x1e75c4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e75c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e75c8: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E75C8u;
    {
        const bool branch_taken_0x1e75c8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1E75CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E75C8u;
        // 0x1e75cc: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e75c8) {
            ctx->pc = 0x1E75B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e75b8;
        }
    }
    ctx->pc = 0x1E75D0u;
    // 0x1e75d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E75D0u;
    {
        const bool branch_taken_0x1e75d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E75D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E75D0u;
        // 0x1e75d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e75d0) {
            ctx->pc = 0x1E75F0u;
            goto label_1e75f0;
        }
    }
    ctx->pc = 0x1E75D8u;
label_1e75d8:
    // 0x1e75d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e75d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e75dc: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x1e75dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e75e0: 0x24840580  addiu       $a0, $a0, 0x580
    ctx->pc = 0x1e75e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1408));
    // 0x1e75e4: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1E75E4u;
    SET_GPR_U32(ctx, 31, 0x1E75ECu);
    ctx->pc = 0x1E75E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E75E4u;
    // 0x1e75e8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1E75E4u, 0x1E75ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E75ECu;
label_1e75ec:
    // 0x1e75ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e75ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e75f0:
    // 0x1e75f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e75f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e75f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e75f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e75f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E75F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E75FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E75F8u;
        // 0x1e75fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E75F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7600u;
}
