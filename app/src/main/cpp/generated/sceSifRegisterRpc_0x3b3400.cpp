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

// Function: sceSifRegisterRpc
// Address: 0x3b3400 - 0x3b34d0
void sceSifRegisterRpc_0x3b3400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifRegisterRpc_0x3b3400");
#endif

    switch (ctx->pc) {
        case 0x3b3444u: goto label_3b3444;
        case 0x3b3488u: goto label_3b3488;
        default: break;
    }

    ctx->pc = 0x3b3400u;

    // 0x3b3400: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b3400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3b3404: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x3b3404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x3b3408: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x3b3408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x3b340c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x3b340cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3410: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3b3410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3b3414: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3b3414u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3418: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3b3418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3b341c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x3b341cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3420: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b3420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b3424: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x3b3424u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3428: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b3428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b342c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3b342cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3430: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b3430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b3434: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3b3434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3438: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3b3438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3b343c: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B343Cu;
    SET_GPR_U32(ctx, 31, 0x3B3444u);
    ctx->pc = 0x3B3440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B343Cu;
    // 0x3b3440: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B343Cu, 0x3B3444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3444u;
label_3b3444:
    // 0x3b3444: 0xaea0003c  sw          $zero, 0x3C($s5)
    ctx->pc = 0x3b3444u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 0));
    // 0x3b3448: 0xaea00038  sw          $zero, 0x38($s5)
    ctx->pc = 0x3b3448u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 0));
    // 0x3b344c: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x3b344cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x3b3450: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x3b3450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x3b3454: 0xaeb10004  sw          $s1, 0x4($s5)
    ctx->pc = 0x3b3454u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
    // 0x3b3458: 0xaeb20008  sw          $s2, 0x8($s5)
    ctx->pc = 0x3b3458u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 18));
    // 0x3b345c: 0xaeb30010  sw          $s3, 0x10($s5)
    ctx->pc = 0x3b345cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 19));
    // 0x3b3460: 0xaeb40014  sw          $s4, 0x14($s5)
    ctx->pc = 0x3b3460u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 20));
    // 0x3b3464: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B3464u;
    {
        const bool branch_taken_0x3b3464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3464u;
        // 0x3b3468: 0xaeb60040  sw          $s6, 0x40($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3464) {
            ctx->pc = 0x3B3474u;
            goto label_3b3474;
        }
    }
    ctx->pc = 0x3B346Cu;
    // 0x3b346c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3B346Cu;
    {
        const bool branch_taken_0x3b346c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B346Cu;
        // 0x3b3470: 0xaed50008  sw          $s5, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b346c) {
            ctx->pc = 0x3B34A8u;
            goto label_3b34a8;
        }
    }
    ctx->pc = 0x3B3474u;
label_3b3474:
    // 0x3b3474: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b3474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3478: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x3b3478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x3b347c: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3B347Cu;
    {
        const bool branch_taken_0x3b347c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b347c) {
            ctx->pc = 0x3B3480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B347Cu;
            // 0x3b3480: 0xac950038  sw          $s5, 0x38($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B34A8u;
            goto label_3b34a8;
        }
    }
    ctx->pc = 0x3B3484u;
    // 0x3b3484: 0x0  nop
    ctx->pc = 0x3b3484u;
    // NOP
label_3b3488:
    // 0x3b3488: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3b3488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b348c: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x3b348cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x3b3490: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3b3490u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3494: 0x0  nop
    ctx->pc = 0x3b3494u;
    // NOP
    // 0x3b3498: 0x0  nop
    ctx->pc = 0x3b3498u;
    // NOP
    // 0x3b349c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B349Cu;
    {
        const bool branch_taken_0x3b349c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b349c) {
            ctx->pc = 0x3B3488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3488;
        }
    }
    ctx->pc = 0x3B34A4u;
    // 0x3b34a4: 0xac950038  sw          $s5, 0x38($a0)
    ctx->pc = 0x3b34a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 21));
label_3b34a8:
    // 0x3b34a8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3b34a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b34ac: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x3b34acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b34b0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x3b34b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b34b4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3b34b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b34b8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3b34b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b34bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b34bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b34c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b34c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b34c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b34c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b34c8: 0x80ed8fc  j           func_3B63F0
    ctx->pc = 0x3B34C8u;
    ctx->pc = 0x3B34CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B34C8u;
    // 0x3b34cc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B34C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B34D0u;
}
