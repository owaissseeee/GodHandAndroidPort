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

// Function: func_0035A620
// Address: 0x35a620 - 0x35a6a8
void func_0035A620_0x35a620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035A620_0x35a620");
#endif

    switch (ctx->pc) {
        case 0x35a660u: goto label_35a660;
        case 0x35a66cu: goto label_35a66c;
        case 0x35a67cu: goto label_35a67c;
        default: break;
    }

    ctx->pc = 0x35a620u;

    // 0x35a620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35a620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35a624: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x35a624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x35a628: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35a628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35a62c: 0x2463e270  addiu       $v1, $v1, -0x1D90
    ctx->pc = 0x35a62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959728));
    // 0x35a630: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35a630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35a634: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x35a634u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x35a638: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35a638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35a63c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x35a63cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35a640: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a644: 0x24710054  addiu       $s1, $v1, 0x54
    ctx->pc = 0x35a644u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x35a648: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35a648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35a64c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EE270u));
    // 0x35a650: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35a650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35a654: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35a654u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EE270u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EE270u, _value); } while (0);
    // 0x35a658: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x35a658u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3EE2C4u));
    // 0x35a65c: 0x0  nop
    ctx->pc = 0x35a65cu;
    // NOP
label_35a660:
    // 0x35a660: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x35a660u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x35a664: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x35A664u;
    SET_GPR_U32(ctx, 31, 0x35A66Cu);
    ctx->pc = 0x35A668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A664u;
    // 0x35a668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x35A664u, 0x35A66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A66Cu;
label_35a66c:
    // 0x35a66c: 0x10530003  beq         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x35A66Cu;
    {
        const bool branch_taken_0x35a66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x35A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A66Cu;
        // 0x35a670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a66c) {
            ctx->pc = 0x35A67Cu;
            goto label_35a67c;
        }
    }
    ctx->pc = 0x35A674u;
    // 0x35a674: 0xc0d69aa  jal         func_35A6A8
    ctx->pc = 0x35A674u;
    SET_GPR_U32(ctx, 31, 0x35A67Cu);
    ctx->pc = 0x35A6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A6A8u, 0x35A674u, 0x35A67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A67Cu;
label_35a67c:
    // 0x35a67c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x35a67cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x35a680: 0x643fff7  bgezl       $s2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x35A680u;
    {
        const bool branch_taken_0x35a680 = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x35a680) {
            ctx->pc = 0x35A684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35A680u;
            // 0x35a684: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35A660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a660;
        }
    }
    ctx->pc = 0x35A688u;
    // 0x35a688: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a68c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a68cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a690: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35a690u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a694: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35a694u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35a698: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35a698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35a69c: 0x3e00008  jr          $ra
    ctx->pc = 0x35A69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A69Cu;
        // 0x35a6a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A6A4u;
    // 0x35a6a4: 0x0  nop
    ctx->pc = 0x35a6a4u;
    // NOP
    ctx->pc = 0x35a6a8u;
}
