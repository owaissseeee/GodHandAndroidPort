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

// Function: cEmManage_ReleaseEmAll
// Address: 0x2908c0 - 0x290958
void cEmManage_ReleaseEmAll_0x2908c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_ReleaseEmAll_0x2908c0");
#endif

    switch (ctx->pc) {
        case 0x2908e8u: goto label_2908e8;
        case 0x2908f4u: goto label_2908f4;
        case 0x290918u: goto label_290918;
        case 0x29092cu: goto label_29092c;
        default: break;
    }

    ctx->pc = 0x2908c0u;

    // 0x2908c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2908c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2908c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2908c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2908c8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2908c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2908cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2908ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2908d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2908d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2908d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2908d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2908d8: 0x8e300500  lw          $s0, 0x500($s1)
    ctx->pc = 0x2908d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1280)));
    // 0x2908dc: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2908DCu;
    {
        const bool branch_taken_0x2908dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2908E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908DCu;
        // 0x2908e0: 0x3c120075  lui         $s2, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908dc) {
            ctx->pc = 0x290900u;
            goto label_290900;
        }
    }
    ctx->pc = 0x2908E4u;
    // 0x2908e4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2908e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2908e8:
    // 0x2908e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2908e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2908ec: 0xc0a41dc  jal         func_290770
    ctx->pc = 0x2908ECu;
    SET_GPR_U32(ctx, 31, 0x2908F4u);
    ctx->pc = 0x2908F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2908ECu;
    // 0x2908f0: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290770u, 0x2908ECu, 0x2908F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2908F4u;
label_2908f4:
    // 0x2908f4: 0x0  nop
    ctx->pc = 0x2908f4u;
    // NOP
    // 0x2908f8: 0x5600fffb  bnel        $s0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2908F8u;
    {
        const bool branch_taken_0x2908f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2908f8) {
            ctx->pc = 0x2908FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2908F8u;
            // 0x2908fc: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2908E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2908e8;
        }
    }
    ctx->pc = 0x290900u;
label_290900:
    // 0x290900: 0x8e424c58  lw          $v0, 0x4C58($s2)
    ctx->pc = 0x290900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19544)));
    // 0x290904: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x290904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x290908: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x290908u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29090c: 0x1203000c  beq         $s0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x29090Cu;
    {
        const bool branch_taken_0x29090c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x290910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29090Cu;
        // 0x290910: 0x24110364  addiu       $s1, $zero, 0x364 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 868));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29090c) {
            ctx->pc = 0x290940u;
            goto label_290940;
        }
    }
    ctx->pc = 0x290914u;
    // 0x290914: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x290914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_290918:
    // 0x290918: 0x948202fe  lhu         $v0, 0x2FE($a0)
    ctx->pc = 0x290918u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x29091c: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29091Cu;
    {
        const bool branch_taken_0x29091c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x290920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29091Cu;
        // 0x290920: 0x8e434c58  lw          $v1, 0x4C58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29091c) {
            ctx->pc = 0x290930u;
            goto label_290930;
        }
    }
    ctx->pc = 0x290924u;
    // 0x290924: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x290924u;
    SET_GPR_U32(ctx, 31, 0x29092Cu);
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x290924u, 0x29092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29092Cu;
label_29092c:
    // 0x29092c: 0x8e434c58  lw          $v1, 0x4C58($s2)
    ctx->pc = 0x29092cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19544)));
label_290930:
    // 0x290930: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x290930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x290934: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x290934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x290938: 0x5602fff7  bnel        $s0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x290938u;
    {
        const bool branch_taken_0x290938 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x290938) {
            ctx->pc = 0x29093Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290938u;
            // 0x29093c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290918;
        }
    }
    ctx->pc = 0x290940u;
label_290940:
    // 0x290940: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x290940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290944: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x290944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290948: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x290948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29094c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29094cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290950: 0x3e00008  jr          $ra
    ctx->pc = 0x290950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290950u;
        // 0x290954: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290958u;
}
