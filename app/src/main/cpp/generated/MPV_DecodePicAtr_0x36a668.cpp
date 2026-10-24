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

// Function: MPV_DecodePicAtr
// Address: 0x36a668 - 0x36a708
void MPV_DecodePicAtr_0x36a668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MPV_DecodePicAtr_0x36a668");
#endif

    switch (ctx->pc) {
        case 0x36a668u: goto label_36a668;
        case 0x36a66cu: goto label_36a66c;
        case 0x36a670u: goto label_36a670;
        case 0x36a674u: goto label_36a674;
        case 0x36a678u: goto label_36a678;
        case 0x36a67cu: goto label_36a67c;
        case 0x36a680u: goto label_36a680;
        case 0x36a684u: goto label_36a684;
        case 0x36a688u: goto label_36a688;
        case 0x36a68cu: goto label_36a68c;
        case 0x36a690u: goto label_36a690;
        case 0x36a694u: goto label_36a694;
        case 0x36a698u: goto label_36a698;
        case 0x36a69cu: goto label_36a69c;
        case 0x36a6a0u: goto label_36a6a0;
        case 0x36a6a4u: goto label_36a6a4;
        case 0x36a6a8u: goto label_36a6a8;
        case 0x36a6acu: goto label_36a6ac;
        case 0x36a6b0u: goto label_36a6b0;
        case 0x36a6b4u: goto label_36a6b4;
        case 0x36a6b8u: goto label_36a6b8;
        case 0x36a6bcu: goto label_36a6bc;
        case 0x36a6c0u: goto label_36a6c0;
        case 0x36a6c4u: goto label_36a6c4;
        case 0x36a6c8u: goto label_36a6c8;
        case 0x36a6ccu: goto label_36a6cc;
        case 0x36a6d0u: goto label_36a6d0;
        case 0x36a6d4u: goto label_36a6d4;
        case 0x36a6d8u: goto label_36a6d8;
        case 0x36a6dcu: goto label_36a6dc;
        case 0x36a6e0u: goto label_36a6e0;
        case 0x36a6e4u: goto label_36a6e4;
        case 0x36a6e8u: goto label_36a6e8;
        case 0x36a6ecu: goto label_36a6ec;
        case 0x36a6f0u: goto label_36a6f0;
        case 0x36a6f4u: goto label_36a6f4;
        case 0x36a6f8u: goto label_36a6f8;
        case 0x36a6fcu: goto label_36a6fc;
        case 0x36a700u: goto label_36a700;
        case 0x36a704u: goto label_36a704;
        default: break;
    }

    ctx->pc = 0x36a668u;

label_36a668:
    // 0x36a668: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36a668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_36a66c:
    // 0x36a66c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36a66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_36a670:
    // 0x36a670: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36a670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36a674:
    // 0x36a674: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36a674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_36a678:
    // 0x36a678: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36a678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_36a67c:
    // 0x36a67c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x36a67cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36a680:
    // 0x36a680: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x36a680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_36a684:
    // 0x36a684: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x36a684u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_36a688:
    // 0x36a688: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36a688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_36a68c:
    // 0x36a68c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x36a68cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_36a690:
    // 0x36a690: 0xc0ce2e4  jal         func_338B90
label_36a694:
    if (ctx->pc == 0x36A694u) {
        ctx->pc = 0x36A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A690u;
        // 0x36a694: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A698u;
        goto label_36a698;
    }
    ctx->pc = 0x36A690u;
    SET_GPR_U32(ctx, 31, 0x36A698u);
    ctx->pc = 0x36A694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A690u;
    // 0x36a694: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338B90u, 0x36A690u, 0x36A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A698u;
label_36a698:
    // 0x36a698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36a698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36a69c:
    // 0x36a69c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36a69cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36a6a0:
    // 0x36a6a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x36a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_36a6a4:
    // 0x36a6a4: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_36a6a8:
    if (ctx->pc == 0x36A6A8u) {
        ctx->pc = 0x36A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A6A4u;
        // 0x36a6a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A6ACu;
        goto label_36a6ac;
    }
    ctx->pc = 0x36A6A4u;
    {
        const bool branch_taken_0x36a6a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A6A4u;
        // 0x36a6a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a6a4) {
            ctx->pc = 0x36A6ECu;
            goto label_36a6ec;
        }
    }
    ctx->pc = 0x36A6ACu;
label_36a6ac:
    // 0x36a6ac: 0xc0da8fa  jal         func_36A3E8
label_36a6b0:
    if (ctx->pc == 0x36A6B0u) {
        ctx->pc = 0x36A6B4u;
        goto label_36a6b4;
    }
    ctx->pc = 0x36A6ACu;
    SET_GPR_U32(ctx, 31, 0x36A6B4u);
    ctx->pc = 0x36A3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A3E8u, 0x36A6ACu, 0x36A6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A6B4u;
label_36a6b4:
    // 0x36a6b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x36a6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36a6b8:
    // 0x36a6b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36a6b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36a6bc:
    // 0x36a6bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36a6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36a6c0:
    // 0x36a6c0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x36a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_36a6c4:
    // 0x36a6c4: 0x40f809  jalr        $v0
label_36a6c8:
    if (ctx->pc == 0x36A6C8u) {
        ctx->pc = 0x36A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A6C4u;
        // 0x36a6c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A6CCu;
        goto label_36a6cc;
    }
    ctx->pc = 0x36A6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36A6CCu);
        ctx->pc = 0x36A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A6C4u;
        // 0x36a6c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A6C4u, 0x36A6CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36A6CCu;
label_36a6cc:
    // 0x36a6cc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x36a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_36a6d0:
    // 0x36a6d0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x36a6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36a6d4:
    // 0x36a6d4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x36a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_36a6d8:
    // 0x36a6d8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x36a6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_36a6dc:
    // 0x36a6dc: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x36a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_36a6e0:
    // 0x36a6e0: 0x40f809  jalr        $v0
label_36a6e4:
    if (ctx->pc == 0x36A6E4u) {
        ctx->pc = 0x36A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A6E0u;
        // 0x36a6e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A6E8u;
        goto label_36a6e8;
    }
    ctx->pc = 0x36A6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36A6E8u);
        ctx->pc = 0x36A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A6E0u;
        // 0x36a6e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A6E0u, 0x36A6E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36A6E8u;
label_36a6e8:
    // 0x36a6e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36a6e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36a6ec:
    // 0x36a6ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a6ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36a6f0:
    // 0x36a6f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36a6f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_36a6f4:
    // 0x36a6f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36a6f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36a6f8:
    // 0x36a6f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x36a6f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_36a6fc:
    // 0x36a6fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36a6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_36a700:
    // 0x36a700: 0x3e00008  jr          $ra
label_36a704:
    if (ctx->pc == 0x36A704u) {
        ctx->pc = 0x36A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A700u;
        // 0x36a704: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A708u;
        goto label_fallthrough_0x36a700;
    }
    ctx->pc = 0x36A700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A700u;
        // 0x36a704: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36a700:
    ctx->pc = 0x36A708u;
}
