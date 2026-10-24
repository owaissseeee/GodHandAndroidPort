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

// Function: cTaskManager_runAllMatching
// Address: 0x2d52a0 - 0x2d5358
void cTaskManager_runAllMatching_0x2d52a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cTaskManager_runAllMatching_0x2d52a0");
#endif

    switch (ctx->pc) {
        case 0x2d52c8u: goto label_2d52c8;
        case 0x2d5320u: goto label_2d5320;
        default: break;
    }

    ctx->pc = 0x2d52a0u;

    // 0x2d52a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d52a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d52a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d52a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d52a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d52a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d52ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d52acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d52b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d52b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2d52b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d52b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d52b8: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2d52b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d52bc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D52BCu;
    {
        const bool branch_taken_0x2d52bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D52C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D52BCu;
        // 0x2d52c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d52bc) {
            ctx->pc = 0x2D5334u;
            goto label_2d5334;
        }
    }
    ctx->pc = 0x2D52C4u;
    // 0x2d52c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d52c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d52c8:
    // 0x2d52c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d52c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d52cc: 0x9e03002c  lwu         $v1, 0x2C($s0)
    ctx->pc = 0x2d52ccu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2d52d0: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x2d52d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2d52d4: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x2d52d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x2d52d8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2d52d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d52dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D52DCu;
    {
        const bool branch_taken_0x2d52dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D52E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D52DCu;
        // 0x2d52e0: 0xae040004  sw          $a0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d52dc) {
            ctx->pc = 0x2D52F4u;
            goto label_2d52f4;
        }
    }
    ctx->pc = 0x2D52E4u;
    // 0x2d52e4: 0x90820050  lbu         $v0, 0x50($a0)
    ctx->pc = 0x2d52e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2d52e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d52e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d52ec: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2D52ECu;
    {
        const bool branch_taken_0x2d52ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d52ec) {
            ctx->pc = 0x2D52F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D52ECu;
            // 0x2d52f0: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5324u;
            goto label_2d5324;
        }
    }
    ctx->pc = 0x2D52F4u;
label_2d52f4:
    // 0x2d52f4: 0x3107b  dsra        $v0, $v1, 1
    ctx->pc = 0x2d52f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 1);
    // 0x2d52f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d52f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d52fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D52FCu;
    {
        const bool branch_taken_0x2d52fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d52fc) {
            ctx->pc = 0x2D5318u;
            goto label_2d5318;
        }
    }
    ctx->pc = 0x2D5304u;
    // 0x2d5304: 0x90820050  lbu         $v0, 0x50($a0)
    ctx->pc = 0x2d5304u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2d5308: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x2d5308u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x2d530c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d530cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d5310: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D5310u;
    {
        const bool branch_taken_0x2d5310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5310) {
            ctx->pc = 0x2D5314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5310u;
            // 0x2d5314: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5324u;
            goto label_2d5324;
        }
    }
    ctx->pc = 0x2D5318u;
label_2d5318:
    // 0x2d5318: 0xc0b55f2  jal         func_2D57C8
    ctx->pc = 0x2D5318u;
    SET_GPR_U32(ctx, 31, 0x2D5320u);
    ctx->pc = 0x2D57C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D57C8u, 0x2D5318u, 0x2D5320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5320u;
label_2d5320:
    // 0x2d5320: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2d5320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2d5324:
    // 0x2d5324: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d5324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d5328: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2d5328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d532c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2D532Cu;
    {
        const bool branch_taken_0x2d532c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D532Cu;
        // 0x2d5330: 0x26520058  addiu       $s2, $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d532c) {
            ctx->pc = 0x2D52C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d52c8;
        }
    }
    ctx->pc = 0x2D5334u;
label_2d5334:
    // 0x2d5334: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d5334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d5338: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2d5338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2d533c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2d533cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2d5340: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d5340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d5344: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d5344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5348: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d5348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d534c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d534cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5350: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5350u;
        // 0x2d5354: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5358u;
}
