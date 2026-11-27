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

// Function: func_001FE370
// Address: 0x1fe370 - 0x1fe428
void func_001FE370_0x1fe370(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FE370_0x1fe370");
#endif

    if (__builtin_expect(ctx->pc != 0x1fe370u, 0)) {
        switch (ctx->pc) {
            case 0x1fe3a0u: goto label_1fe3a0;
            case 0x1fe3c0u: goto label_1fe3c0;
            case 0x1fe3d8u: goto label_1fe3d8;
            case 0x1fe3fcu: goto label_1fe3fc;
            default: break;
        }
    }


    // 0x1fe370: 0x27bdffb0  addiu       $sp, $sp, -0x50
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fe374: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1fe374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1fe378: 0x80882d  daddu       $s1, $a0, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe37c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1fe37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1fe380: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fe380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fe384: 0x220802d  daddu       $s0, $s1, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe388: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1fe388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1fe38c: 0x26323c00  addiu       $s2, $s1, 0x3C00
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 15360));
    // 0x1fe390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe394: 0xa0982d  daddu       $s3, $a1, $zero
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe398: 0x9202004a  lbu         $v0, 0x4A($s0)
    ctx->pc = 0x1fe398u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x1fe39c: 0x0  nop
    // NOP
label_1fe3a0:
    // 0x1fe3a0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FE3A0u;
    {
        const bool branch_taken_0x1fe3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe3a0) {
            ctx->pc = 0x1FE3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE3A0u;
            // 0x1fe3a4: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE3C4u;
            goto label_1fe3c4;
        }
    }
    // 0x1fe3a8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1fe3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1fe3ac: 0x54530005  bnel        $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE3ACu;
    {
        const bool branch_taken_0x1fe3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1fe3ac) {
            ctx->pc = 0x1FE3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE3ACu;
            // 0x1fe3b0: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE3C4u;
            goto label_1fe3c4;
        }
    }
    // 0x1fe3b4: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe3b8: 0xc07f852  jal         func_1FE148
    SET_GPR_U32(ctx, 31, 0x1FE3C0u);
    ctx->pc = 0x1FE3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE3B8u;
    // 0x1fe3bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cDamageManage_ReleaseDamageGive_0x1fe148, 0x1fe148u, 0x1fe3c0u)) {
        return;
    }
label_1fe3c0:
    // 0x1fe3c0: 0x26100060  addiu       $s0, $s0, 0x60
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1fe3c4:
    // 0x1fe3c4: 0x212102b  sltu        $v0, $s0, $s2
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1fe3c8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x1FE3C8u;
    {
        const bool branch_taken_0x1fe3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe3c8) {
            ctx->pc = 0x1FE3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE3C8u;
            // 0x1fe3cc: 0x9202004a  lbu         $v0, 0x4A($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe3a0;
        }
    }
    // 0x1fe3d0: 0x902d  daddu       $s2, $zero, $zero
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe3d4: 0x26303c00  addiu       $s0, $s1, 0x3C00
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 15360));
label_1fe3d8:
    // 0x1fe3d8: 0x9202004a  lbu         $v0, 0x4A($s0)
    ctx->pc = 0x1fe3d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x1fe3dc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FE3DCu;
    {
        const bool branch_taken_0x1fe3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe3dc) {
            ctx->pc = 0x1FE3E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE3DCu;
            // 0x1fe3e0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE400u;
            goto label_1fe400;
        }
    }
    // 0x1fe3e4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1fe3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1fe3e8: 0x54530005  bnel        $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE3E8u;
    {
        const bool branch_taken_0x1fe3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1fe3e8) {
            ctx->pc = 0x1FE3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE3E8u;
            // 0x1fe3ec: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE400u;
            goto label_1fe400;
        }
    }
    // 0x1fe3f0: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe3f4: 0xc07f89e  jal         func_1FE278
    SET_GPR_U32(ctx, 31, 0x1FE3FCu);
    ctx->pc = 0x1FE3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE3F4u;
    // 0x1fe3f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &ClearAndResetFields_1FE278_0x1fe278, 0x1fe278u, 0x1fe3fcu)) {
        return;
    }
label_1fe3fc:
    // 0x1fe3fc: 0x26520001  addiu       $s2, $s2, 0x1
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1fe400:
    // 0x1fe400: 0x2e420100  sltiu       $v0, $s2, 0x100
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1fe404: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1FE404u;
    {
        const bool branch_taken_0x1fe404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE404u;
        // 0x1fe408: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe404) {
            ctx->pc = 0x1FE3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe3d8;
        }
    }
    // 0x1fe40c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1fe40cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fe410: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1fe410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe414: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fe414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe418: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1fe418u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe41c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe420: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE420u;
        // 0x1fe424: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE428u;
}