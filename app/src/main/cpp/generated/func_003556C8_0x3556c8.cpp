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

// Function: func_003556C8
// Address: 0x3556c8 - 0x355790
void func_003556C8_0x3556c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003556C8_0x3556c8");
#endif

    switch (ctx->pc) {
        case 0x3556f8u: goto label_3556f8;
        case 0x355718u: goto label_355718;
        case 0x355744u: goto label_355744;
        case 0x35575cu: goto label_35575c;
        default: break;
    }

    ctx->pc = 0x3556c8u;

    // 0x3556c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3556c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3556cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3556ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3556d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3556d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3556d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3556d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3556d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3556d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3556dc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3556dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3556e0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3556e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3556e4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3556e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x3556e8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x3556e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x3556ec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3556ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3556f0: 0xc0d37da  jal         func_34DF68
    ctx->pc = 0x3556F0u;
    SET_GPR_U32(ctx, 31, 0x3556F8u);
    ctx->pc = 0x3556F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3556F0u;
    // 0x3556f4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF68u, 0x3556F0u, 0x3556F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3556F8u;
label_3556f8:
    // 0x3556f8: 0x8e021fc0  lw          $v0, 0x1FC0($s0)
    ctx->pc = 0x3556f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8128)));
    // 0x3556fc: 0x8c430178  lw          $v1, 0x178($v0)
    ctx->pc = 0x3556fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x355700: 0x18600014  blez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x355700u;
    {
        const bool branch_taken_0x355700 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x355704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355700u;
        // 0x355704: 0x24500180  addiu       $s0, $v0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355700) {
            ctx->pc = 0x355754u;
            goto label_355754;
        }
    }
    ctx->pc = 0x355708u;
    // 0x355708: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x355708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35570c: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x35570cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x355710: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x355710u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x355714: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x355714u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_355718:
    // 0x355718: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x355718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35571c: 0x50550004  beql        $v0, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x35571Cu;
    {
        const bool branch_taken_0x35571c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x35571c) {
            ctx->pc = 0x355720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35571Cu;
            // 0x355720: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355730u;
            goto label_355730;
        }
    }
    ctx->pc = 0x355724u;
    // 0x355724: 0x54540009  bnel        $v0, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x355724u;
    {
        const bool branch_taken_0x355724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x355724) {
            ctx->pc = 0x355728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355724u;
            // 0x355728: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35574Cu;
            goto label_35574c;
        }
    }
    ctx->pc = 0x35572Cu;
    // 0x35572c: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x35572cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_355730:
    // 0x355730: 0x54530006  bnel        $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x355730u;
    {
        const bool branch_taken_0x355730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x355730) {
            ctx->pc = 0x355734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355730u;
            // 0x355734: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35574Cu;
            goto label_35574c;
        }
    }
    ctx->pc = 0x355738u;
    // 0x355738: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x355738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35573c: 0xc0d55e4  jal         func_355790
    ctx->pc = 0x35573Cu;
    SET_GPR_U32(ctx, 31, 0x355744u);
    ctx->pc = 0x355740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35573Cu;
    // 0x355740: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355790u, 0x35573Cu, 0x355744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355744u;
label_355744:
    // 0x355744: 0x202900b  movn        $s2, $s0, $v0
    ctx->pc = 0x355744u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
    // 0x355748: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x355748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_35574c:
    // 0x35574c: 0x1620fff2  bnez        $s1, . + 4 + (-0xE << 2)
    ctx->pc = 0x35574Cu;
    {
        const bool branch_taken_0x35574c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x355750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35574Cu;
        // 0x355750: 0x261000f0  addiu       $s0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35574c) {
            ctx->pc = 0x355718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355718;
        }
    }
    ctx->pc = 0x355754u;
label_355754:
    // 0x355754: 0xc0d37e0  jal         func_34DF80
    ctx->pc = 0x355754u;
    SET_GPR_U32(ctx, 31, 0x35575Cu);
    ctx->pc = 0x355758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355754u;
    // 0x355758: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF80u, 0x355754u, 0x35575Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35575Cu;
label_35575c:
    // 0x35575c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x35575cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355760: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x355760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355764: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x355764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355768: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x355768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35576c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x35576cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355770: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x355770u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x355774: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x355774u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x355778: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x355778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35577c: 0x3e00008  jr          $ra
    ctx->pc = 0x35577Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35577Cu;
        // 0x355780: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35577Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355784u;
    // 0x355784: 0x0  nop
    ctx->pc = 0x355784u;
    // NOP
    // 0x355788: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x355788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35578c: 0x0  nop
    ctx->pc = 0x35578cu;
    // NOP
    ctx->pc = 0x355790u;
}
