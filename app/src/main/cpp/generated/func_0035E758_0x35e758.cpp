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

// Function: func_0035E758
// Address: 0x35e758 - 0x35e7e0
void func_0035E758_0x35e758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035E758_0x35e758");
#endif

    switch (ctx->pc) {
        case 0x35e788u: goto label_35e788;
        case 0x35e7a0u: goto label_35e7a0;
        default: break;
    }

    ctx->pc = 0x35e758u;

    // 0x35e758: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35e758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35e75c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35e75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35e760: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x35e760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e764: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35e764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35e768: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x35e768u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35e76c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35e76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35e770: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x35e770u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x35e774: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x35e774u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
    // 0x35e778: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35e778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35e77c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35e77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35e780: 0xc0d783c  jal         func_35E0F0
    ctx->pc = 0x35E780u;
    SET_GPR_U32(ctx, 31, 0x35E788u);
    ctx->pc = 0x35E784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E780u;
    // 0x35e784: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E0F0u, 0x35E780u, 0x35E788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E788u;
label_35e788:
    // 0x35e788: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35e788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e78c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35e78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e790: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x35E790u;
    {
        const bool branch_taken_0x35e790 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E790u;
        // 0x35e794: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e790) {
            ctx->pc = 0x35E7C0u;
            goto label_35e7c0;
        }
    }
    ctx->pc = 0x35E798u;
    // 0x35e798: 0xc0d7a6a  jal         func_35E9A8
    ctx->pc = 0x35E798u;
    SET_GPR_U32(ctx, 31, 0x35E7A0u);
    ctx->pc = 0x35E9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E9A8u, 0x35E798u, 0x35E7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E7A0u;
label_35e7a0:
    // 0x35e7a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35E7A0u;
    {
        const bool branch_taken_0x35e7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E7A0u;
        // 0x35e7a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e7a0) {
            ctx->pc = 0x35E7C4u;
            goto label_35e7c4;
        }
    }
    ctx->pc = 0x35E7A8u;
    // 0x35e7a8: 0x92220025  lbu         $v0, 0x25($s1)
    ctx->pc = 0x35e7a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 37)));
    // 0x35e7ac: 0x28430040  slti        $v1, $v0, 0x40
    ctx->pc = 0x35e7acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x35e7b0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x35E7B0u;
    {
        const bool branch_taken_0x35e7b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E7B0u;
        // 0x35e7b4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e7b0) {
            ctx->pc = 0x35E7BCu;
            goto label_35e7bc;
        }
    }
    ctx->pc = 0x35E7B8u;
    // 0x35e7b8: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x35e7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
label_35e7bc:
    // 0x35e7bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35e7c0:
    // 0x35e7c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e7c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35e7c4:
    // 0x35e7c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35e7c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e7c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35e7c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e7cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35e7ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35e7d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35e7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35e7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x35E7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E7D4u;
        // 0x35e7d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E7DCu;
    // 0x35e7dc: 0x0  nop
    ctx->pc = 0x35e7dcu;
    // NOP
    ctx->pc = 0x35e7e0u;
}
