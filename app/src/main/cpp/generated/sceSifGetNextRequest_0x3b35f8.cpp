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

// Function: sceSifGetNextRequest
// Address: 0x3b35f8 - 0x3b3650
void sceSifGetNextRequest_0x3b35f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifGetNextRequest_0x3b35f8");
#endif

    switch (ctx->pc) {
        case 0x3b3610u: goto label_3b3610;
        case 0x3b3638u: goto label_3b3638;
        default: break;
    }

    ctx->pc = 0x3b35f8u;

    // 0x3b35f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b35f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b35fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b35fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b3600: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b3600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b3604: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b3604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b3608: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B3608u;
    SET_GPR_U32(ctx, 31, 0x3B3610u);
    ctx->pc = 0x3B360Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3608u;
    // 0x3b360c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B3608u, 0x3B3610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3610u;
label_3b3610:
    // 0x3b3610: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x3b3610u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3b3614: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B3614u;
    {
        const bool branch_taken_0x3b3614 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b3614) {
            ctx->pc = 0x3B3618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B3614u;
            // 0x3b3618: 0x8e23003c  lw          $v1, 0x3C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B3624u;
            goto label_3b3624;
        }
    }
    ctx->pc = 0x3B361Cu;
    // 0x3b361c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B361Cu;
    {
        const bool branch_taken_0x3b361c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B361Cu;
        // 0x3b3620: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b361c) {
            ctx->pc = 0x3B3630u;
            goto label_3b3630;
        }
    }
    ctx->pc = 0x3B3624u;
label_3b3624:
    // 0x3b3624: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b3624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b3628: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3b3628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3b362c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x3b362cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_3b3630:
    // 0x3b3630: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B3630u;
    SET_GPR_U32(ctx, 31, 0x3B3638u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B3630u, 0x3B3638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3638u;
label_3b3638:
    // 0x3b3638: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b3638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b363c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b363cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b3640: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b3640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b3644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b3644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b3648: 0x3e00008  jr          $ra
    ctx->pc = 0x3B3648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3648u;
        // 0x3b364c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B3650u;
}
