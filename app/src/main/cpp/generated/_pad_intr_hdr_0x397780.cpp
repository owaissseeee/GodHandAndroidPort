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

// Function: _pad_intr_hdr
// Address: 0x397780 - 0x3977c8
void _pad_intr_hdr_0x397780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_pad_intr_hdr_0x397780");
#endif

    switch (ctx->pc) {
        case 0x397780u: goto label_397780;
        case 0x397784u: goto label_397784;
        case 0x397788u: goto label_397788;
        case 0x39778cu: goto label_39778c;
        case 0x397790u: goto label_397790;
        case 0x397794u: goto label_397794;
        case 0x397798u: goto label_397798;
        case 0x39779cu: goto label_39779c;
        case 0x3977a0u: goto label_3977a0;
        case 0x3977a4u: goto label_3977a4;
        case 0x3977a8u: goto label_3977a8;
        case 0x3977acu: goto label_3977ac;
        case 0x3977b0u: goto label_3977b0;
        case 0x3977b4u: goto label_3977b4;
        case 0x3977b8u: goto label_3977b8;
        case 0x3977bcu: goto label_3977bc;
        case 0x3977c0u: goto label_3977c0;
        case 0x3977c4u: goto label_3977c4;
        default: break;
    }

    ctx->pc = 0x397780u;

label_397780:
    // 0x397780: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x397780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_397784:
    // 0x397784: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x397784u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_397788:
    // 0x397788: 0x8c4385d0  lw          $v1, -0x7A30($v0)
    ctx->pc = 0x397788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936016)));
label_39778c:
    // 0x39778c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39778cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_397790:
    // 0x397790: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_397794:
    if (ctx->pc == 0x397794u) {
        ctx->pc = 0x397794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397790u;
        // 0x397794: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397798u;
        goto label_397798;
    }
    ctx->pc = 0x397790u;
    {
        const bool branch_taken_0x397790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x397794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397790u;
        // 0x397794: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397790) {
            ctx->pc = 0x3977B0u;
            goto label_3977b0;
        }
    }
    ctx->pc = 0x397798u;
label_397798:
    // 0x397798: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x397798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
label_39779c:
    // 0x39779c: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x39779cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_3977a0:
    // 0x3977a0: 0x8c5cc380  lw          $gp, -0x3C80($v0)
    ctx->pc = 0x3977a0u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951808)));
label_3977a4:
    // 0x3977a4: 0x60f809  jalr        $v1
label_3977a8:
    if (ctx->pc == 0x3977A8u) {
        ctx->pc = 0x3977A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3977A4u;
        // 0x3977a8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3977ACu;
        goto label_3977ac;
    }
    ctx->pc = 0x3977A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3977ACu);
        ctx->pc = 0x3977A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3977A4u;
        // 0x3977a8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3977A4u, 0x3977ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3977ACu;
label_3977ac:
    // 0x3977ac: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x3977acu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3977b0:
    // 0x3977b0: 0xf  sync
    ctx->pc = 0x3977b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3977b4:
    // 0x3977b4: 0x42000038  ei
    ctx->pc = 0x3977b4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_3977b8:
    // 0x3977b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3977b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3977bc:
    // 0x3977bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3977bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3977c0:
    // 0x3977c0: 0x3e00008  jr          $ra
label_3977c4:
    if (ctx->pc == 0x3977C4u) {
        ctx->pc = 0x3977C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3977C0u;
        // 0x3977c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3977C8u;
        goto label_fallthrough_0x3977c0;
    }
    ctx->pc = 0x3977C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3977C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3977C0u;
        // 0x3977c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3977C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3977c0:
    ctx->pc = 0x3977C8u;
}
