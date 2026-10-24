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

// Function: cCollisionSolidManage_ReleaseUnit
// Address: 0x1347e8 - 0x134880
void cCollisionSolidManage_ReleaseUnit_0x1347e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCollisionSolidManage_ReleaseUnit_0x1347e8");
#endif

    switch (ctx->pc) {
        case 0x134810u: goto label_134810;
        case 0x13484cu: goto label_13484c;
        case 0x13485cu: goto label_13485c;
        default: break;
    }

    ctx->pc = 0x1347e8u;

    // 0x1347e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1347e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1347ec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1347ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1347f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1347f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1347f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1347f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1347f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1347f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1347fc: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1347FCu;
    {
        const bool branch_taken_0x1347fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x134800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347FCu;
        // 0x134800: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347fc) {
            ctx->pc = 0x134868u;
            goto label_134868;
        }
    }
    ctx->pc = 0x134804u;
    // 0x134804: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x134804u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x134808: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x134808u;
    {
        const bool branch_taken_0x134808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134808u;
        // 0x13480c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134808) {
            ctx->pc = 0x134814u;
            goto label_134814;
        }
    }
    ctx->pc = 0x134810u;
label_134810:
    // 0x134810: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x134810u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_134814:
    // 0x134814: 0x52000015  beql        $s0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x134814u;
    {
        const bool branch_taken_0x134814 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x134814) {
            ctx->pc = 0x134818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134814u;
            // 0x134818: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13486Cu;
            goto label_13486c;
        }
    }
    ctx->pc = 0x13481Cu;
    // 0x13481c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13481cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x134820: 0x5445fffb  bnel        $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x134820u;
    {
        const bool branch_taken_0x134820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x134820) {
            ctx->pc = 0x134824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134820u;
            // 0x134824: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134810;
        }
    }
    ctx->pc = 0x134828u;
    // 0x134828: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x134828u;
    {
        const bool branch_taken_0x134828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x134828) {
            ctx->pc = 0x13482Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134828u;
            // 0x13482c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13486Cu;
            goto label_13486c;
        }
    }
    ctx->pc = 0x134830u;
    // 0x134830: 0x12040003  beq         $s0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x134830u;
    {
        const bool branch_taken_0x134830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x134834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134830u;
        // 0x134834: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134830) {
            ctx->pc = 0x134840u;
            goto label_134840;
        }
    }
    ctx->pc = 0x134838u;
    // 0x134838: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x134838u;
    {
        const bool branch_taken_0x134838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134838u;
        // 0x13483c: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134838) {
            ctx->pc = 0x134844u;
            goto label_134844;
        }
    }
    ctx->pc = 0x134840u;
label_134840:
    // 0x134840: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x134840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_134844:
    // 0x134844: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x134844u;
    SET_GPR_U32(ctx, 31, 0x13484Cu);
    ctx->pc = 0x134848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134844u;
    // 0x134848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1344A0u, 0x134844u, 0x13484Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13484Cu;
label_13484c:
    // 0x13484c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13484Cu;
    {
        const bool branch_taken_0x13484c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x134850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13484Cu;
        // 0x134850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13484c) {
            ctx->pc = 0x13485Cu;
            goto label_13485c;
        }
    }
    ctx->pc = 0x134854u;
    // 0x134854: 0xc04d116  jal         func_134458
    ctx->pc = 0x134854u;
    SET_GPR_U32(ctx, 31, 0x13485Cu);
    ctx->pc = 0x134858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134854u;
    // 0x134858: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134458u, 0x134854u, 0x13485Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13485Cu;
label_13485c:
    // 0x13485c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13485cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x134860: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x134860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x134864: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x134864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_134868:
    // 0x134868: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x134868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13486c:
    // 0x13486c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13486cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x134870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134874: 0x3e00008  jr          $ra
    ctx->pc = 0x134874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134874u;
        // 0x134878: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13487Cu;
    // 0x13487c: 0x0  nop
    ctx->pc = 0x13487cu;
    // NOP
    ctx->pc = 0x134880u;
}
