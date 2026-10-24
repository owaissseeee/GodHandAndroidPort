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

// Function: func_0036C6C8
// Address: 0x36c6c8 - 0x36c790
void func_0036C6C8_0x36c6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036C6C8_0x36c6c8");
#endif

    switch (ctx->pc) {
        case 0x36c6ecu: goto label_36c6ec;
        case 0x36c700u: goto label_36c700;
        case 0x36c71cu: goto label_36c71c;
        case 0x36c738u: goto label_36c738;
        case 0x36c744u: goto label_36c744;
        case 0x36c75cu: goto label_36c75c;
        case 0x36c764u: goto label_36c764;
        default: break;
    }

    ctx->pc = 0x36c6c8u;

    // 0x36c6c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36c6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36c6cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36c6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36c6d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36c6d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c6d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x36c6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x36c6d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c6dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36c6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36c6e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36c6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36c6e4: 0xc0db32a  jal         func_36CCA8
    ctx->pc = 0x36C6E4u;
    SET_GPR_U32(ctx, 31, 0x36C6ECu);
    ctx->pc = 0x36C6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C6E4u;
    // 0x36c6e8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CCA8u, 0x36C6E4u, 0x36C6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C6ECu;
label_36c6ec:
    // 0x36c6ec: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x36C6ECu;
    {
        const bool branch_taken_0x36c6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C6ECu;
        // 0x36c6f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c6ec) {
            ctx->pc = 0x36C770u;
            goto label_36c770;
        }
    }
    ctx->pc = 0x36C6F4u;
    // 0x36c6f4: 0x263003bc  addiu       $s0, $s1, 0x3BC
    ctx->pc = 0x36c6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 956));
    // 0x36c6f8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x36c6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36c6fc: 0x0  nop
    ctx->pc = 0x36c6fcu;
    // NOP
label_36c700:
    // 0x36c700: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x36c700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c704: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x36c704u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x36c708: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x36c708u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x36c70c: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x36c70cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x36c710: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x36c710u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x36c714: 0xc0db370  jal         func_36CDC0
    ctx->pc = 0x36C714u;
    SET_GPR_U32(ctx, 31, 0x36C71Cu);
    ctx->pc = 0x36C718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C714u;
    // 0x36c718: 0x8e2403b4  lw          $a0, 0x3B4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 948)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CDC0u, 0x36C714u, 0x36C71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C71Cu;
label_36c71c:
    // 0x36c71c: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x36c71cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x36c720: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x36C720u;
    {
        const bool branch_taken_0x36c720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36c720) {
            ctx->pc = 0x36C724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36C720u;
            // 0x36c724: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36C700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c700;
        }
    }
    ctx->pc = 0x36C728u;
    // 0x36c728: 0x8e2403b4  lw          $a0, 0x3B4($s1)
    ctx->pc = 0x36c728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 948)));
    // 0x36c72c: 0x8e2503ec  lw          $a1, 0x3EC($s1)
    ctx->pc = 0x36c72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1004)));
    // 0x36c730: 0xc0db37a  jal         func_36CDE8
    ctx->pc = 0x36C730u;
    SET_GPR_U32(ctx, 31, 0x36C738u);
    ctx->pc = 0x36C734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C730u;
    // 0x36c734: 0x8e2603f0  lw          $a2, 0x3F0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CDE8u, 0x36C730u, 0x36C738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C738u;
label_36c738:
    // 0x36c738: 0x8e2403b4  lw          $a0, 0x3B4($s1)
    ctx->pc = 0x36c738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 948)));
    // 0x36c73c: 0xc0db38e  jal         func_36CE38
    ctx->pc = 0x36C73Cu;
    SET_GPR_U32(ctx, 31, 0x36C744u);
    ctx->pc = 0x36C740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C73Cu;
    // 0x36c740: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CE38u, 0x36C73Cu, 0x36C744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C744u;
label_36c744:
    // 0x36c744: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x36C744u;
    {
        const bool branch_taken_0x36c744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C744u;
        // 0x36c748: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c744) {
            ctx->pc = 0x36C774u;
            goto label_36c774;
        }
    }
    ctx->pc = 0x36C74Cu;
    // 0x36c74c: 0x8e2403b4  lw          $a0, 0x3B4($s1)
    ctx->pc = 0x36c74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 948)));
    // 0x36c750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36c750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c754: 0xc0db384  jal         func_36CE10
    ctx->pc = 0x36C754u;
    SET_GPR_U32(ctx, 31, 0x36C75Cu);
    ctx->pc = 0x36C758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C754u;
    // 0x36c758: 0x262603f4  addiu       $a2, $s1, 0x3F4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1012));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CE10u, 0x36C754u, 0x36C75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C75Cu;
label_36c75c:
    // 0x36c75c: 0xc0db1e4  jal         func_36C790
    ctx->pc = 0x36C75Cu;
    SET_GPR_U32(ctx, 31, 0x36C764u);
    ctx->pc = 0x36C760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C75Cu;
    // 0x36c760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C790u, 0x36C75Cu, 0x36C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C764u;
label_36c764:
    // 0x36c764: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x36C764u;
    {
        const bool branch_taken_0x36c764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C764u;
        // 0x36c768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c764) {
            ctx->pc = 0x36C774u;
            goto label_36c774;
        }
    }
    ctx->pc = 0x36C76Cu;
    // 0x36c76c: 0x0  nop
    ctx->pc = 0x36c76cu;
    // NOP
label_36c770:
    // 0x36c770: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x36c770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_36c774:
    // 0x36c774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c778: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36c778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c77c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36c77cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c780: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x36c780u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36c784: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36c784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36c788: 0x3e00008  jr          $ra
    ctx->pc = 0x36C788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C788u;
        // 0x36c78c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C790u;
}
