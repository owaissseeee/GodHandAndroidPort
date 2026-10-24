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

// Function: Obj0000_Call_Vtbl6_Vtbl8_Field_1_0034C680
// Address: 0x34c680 - 0x34c6d8
void Obj0000_Call_Vtbl6_Vtbl8_Field_1_0034C680_0x34c680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Call_Vtbl6_Vtbl8_Field_1_0034C680_0x34c680");
#endif

    switch (ctx->pc) {
        case 0x34c680u: goto label_34c680;
        case 0x34c684u: goto label_34c684;
        case 0x34c688u: goto label_34c688;
        case 0x34c68cu: goto label_34c68c;
        case 0x34c690u: goto label_34c690;
        case 0x34c694u: goto label_34c694;
        case 0x34c698u: goto label_34c698;
        case 0x34c69cu: goto label_34c69c;
        case 0x34c6a0u: goto label_34c6a0;
        case 0x34c6a4u: goto label_34c6a4;
        case 0x34c6a8u: goto label_34c6a8;
        case 0x34c6acu: goto label_34c6ac;
        case 0x34c6b0u: goto label_34c6b0;
        case 0x34c6b4u: goto label_34c6b4;
        case 0x34c6b8u: goto label_34c6b8;
        case 0x34c6bcu: goto label_34c6bc;
        case 0x34c6c0u: goto label_34c6c0;
        case 0x34c6c4u: goto label_34c6c4;
        case 0x34c6c8u: goto label_34c6c8;
        case 0x34c6ccu: goto label_34c6cc;
        case 0x34c6d0u: goto label_34c6d0;
        case 0x34c6d4u: goto label_34c6d4;
        default: break;
    }

    ctx->pc = 0x34c680u;

label_34c680:
    // 0x34c680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34c680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34c684:
    // 0x34c684: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34c684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_34c688:
    // 0x34c688: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34c688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34c68c:
    // 0x34c68c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34c68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_34c690:
    // 0x34c690: 0x2cb10001  sltiu       $s1, $a1, 0x1
    ctx->pc = 0x34c690u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_34c694:
    // 0x34c694: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34c694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_34c698:
    // 0x34c698: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34c698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34c69c:
    // 0x34c69c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x34c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_34c6a0:
    // 0x34c6a0: 0x40f809  jalr        $v0
label_34c6a4:
    if (ctx->pc == 0x34C6A4u) {
        ctx->pc = 0x34C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C6A0u;
        // 0x34c6a4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34C6A8u;
        goto label_34c6a8;
    }
    ctx->pc = 0x34C6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34C6A8u);
        ctx->pc = 0x34C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C6A0u;
        // 0x34c6a4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C6A0u, 0x34C6A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34C6A8u;
label_34c6a8:
    // 0x34c6a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34c6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34c6ac:
    // 0x34c6ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34c6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34c6b0:
    // 0x34c6b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34c6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34c6b4:
    // 0x34c6b4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x34c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_34c6b8:
    // 0x34c6b8: 0x40f809  jalr        $v0
label_34c6bc:
    if (ctx->pc == 0x34C6BCu) {
        ctx->pc = 0x34C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C6B8u;
        // 0x34c6bc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34C6C0u;
        goto label_34c6c0;
    }
    ctx->pc = 0x34C6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34C6C0u);
        ctx->pc = 0x34C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C6B8u;
        // 0x34c6bc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C6B8u, 0x34C6C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34C6C0u;
label_34c6c0:
    // 0x34c6c0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x34c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_34c6c4:
    // 0x34c6c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34c6c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34c6c8:
    // 0x34c6c8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34c6c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34c6cc:
    // 0x34c6cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34c6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34c6d0:
    // 0x34c6d0: 0x3e00008  jr          $ra
label_34c6d4:
    if (ctx->pc == 0x34C6D4u) {
        ctx->pc = 0x34C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C6D0u;
        // 0x34c6d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34C6D8u;
        goto label_fallthrough_0x34c6d0;
    }
    ctx->pc = 0x34C6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C6D0u;
        // 0x34c6d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34c6d0:
    ctx->pc = 0x34C6D8u;
}
