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

// Function: func_0035E7E0
// Address: 0x35e7e0 - 0x35e868
void func_0035E7E0_0x35e7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035E7E0_0x35e7e0");
#endif

    switch (ctx->pc) {
        case 0x35e810u: goto label_35e810;
        case 0x35e828u: goto label_35e828;
        default: break;
    }

    ctx->pc = 0x35e7e0u;

    // 0x35e7e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35e7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35e7e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35e7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35e7e8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x35e7e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e7ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35e7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35e7f0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x35e7f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35e7f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35e7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35e7f8: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x35e7f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x35e7fc: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x35e7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
    // 0x35e800: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35e800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35e804: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35e804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35e808: 0xc0d783c  jal         func_35E0F0
    ctx->pc = 0x35E808u;
    SET_GPR_U32(ctx, 31, 0x35E810u);
    ctx->pc = 0x35E80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E808u;
    // 0x35e80c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E0F0u, 0x35E808u, 0x35E810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E810u;
label_35e810:
    // 0x35e810: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35e810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35e814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e818: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x35E818u;
    {
        const bool branch_taken_0x35e818 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E818u;
        // 0x35e81c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e818) {
            ctx->pc = 0x35E848u;
            goto label_35e848;
        }
    }
    ctx->pc = 0x35E820u;
    // 0x35e820: 0xc0d7a6a  jal         func_35E9A8
    ctx->pc = 0x35E820u;
    SET_GPR_U32(ctx, 31, 0x35E828u);
    ctx->pc = 0x35E9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E9A8u, 0x35E820u, 0x35E828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E828u;
label_35e828:
    // 0x35e828: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35E828u;
    {
        const bool branch_taken_0x35e828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E828u;
        // 0x35e82c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e828) {
            ctx->pc = 0x35E84Cu;
            goto label_35e84c;
        }
    }
    ctx->pc = 0x35E830u;
    // 0x35e830: 0x92220026  lbu         $v0, 0x26($s1)
    ctx->pc = 0x35e830u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x35e834: 0x28430040  slti        $v1, $v0, 0x40
    ctx->pc = 0x35e834u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x35e838: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x35E838u;
    {
        const bool branch_taken_0x35e838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35E83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E838u;
        // 0x35e83c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e838) {
            ctx->pc = 0x35E844u;
            goto label_35e844;
        }
    }
    ctx->pc = 0x35E840u;
    // 0x35e840: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x35e840u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
label_35e844:
    // 0x35e844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35e844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35e848:
    // 0x35e848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35e84c:
    // 0x35e84c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35e84cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e850: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35e850u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e854: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35e854u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35e858: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35e858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35e85c: 0x3e00008  jr          $ra
    ctx->pc = 0x35E85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E85Cu;
        // 0x35e860: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E864u;
    // 0x35e864: 0x0  nop
    ctx->pc = 0x35e864u;
    // NOP
    ctx->pc = 0x35e868u;
}
