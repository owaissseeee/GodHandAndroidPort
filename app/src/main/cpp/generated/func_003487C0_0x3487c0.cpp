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

// Function: func_003487C0
// Address: 0x3487c0 - 0x348870
void func_003487C0_0x3487c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003487C0_0x3487c0");
#endif

    switch (ctx->pc) {
        case 0x3487c0u: goto label_3487c0;
        case 0x3487c4u: goto label_3487c4;
        case 0x3487c8u: goto label_3487c8;
        case 0x3487ccu: goto label_3487cc;
        case 0x3487d0u: goto label_3487d0;
        case 0x3487d4u: goto label_3487d4;
        case 0x3487d8u: goto label_3487d8;
        case 0x3487dcu: goto label_3487dc;
        case 0x3487e0u: goto label_3487e0;
        case 0x3487e4u: goto label_3487e4;
        case 0x3487e8u: goto label_3487e8;
        case 0x3487ecu: goto label_3487ec;
        case 0x3487f0u: goto label_3487f0;
        case 0x3487f4u: goto label_3487f4;
        case 0x3487f8u: goto label_3487f8;
        case 0x3487fcu: goto label_3487fc;
        case 0x348800u: goto label_348800;
        case 0x348804u: goto label_348804;
        case 0x348808u: goto label_348808;
        case 0x34880cu: goto label_34880c;
        case 0x348810u: goto label_348810;
        case 0x348814u: goto label_348814;
        case 0x348818u: goto label_348818;
        case 0x34881cu: goto label_34881c;
        case 0x348820u: goto label_348820;
        case 0x348824u: goto label_348824;
        case 0x348828u: goto label_348828;
        case 0x34882cu: goto label_34882c;
        case 0x348830u: goto label_348830;
        case 0x348834u: goto label_348834;
        case 0x348838u: goto label_348838;
        case 0x34883cu: goto label_34883c;
        case 0x348840u: goto label_348840;
        case 0x348844u: goto label_348844;
        case 0x348848u: goto label_348848;
        case 0x34884cu: goto label_34884c;
        case 0x348850u: goto label_348850;
        case 0x348854u: goto label_348854;
        case 0x348858u: goto label_348858;
        case 0x34885cu: goto label_34885c;
        case 0x348860u: goto label_348860;
        case 0x348864u: goto label_348864;
        case 0x348868u: goto label_348868;
        case 0x34886cu: goto label_34886c;
        default: break;
    }

    ctx->pc = 0x3487c0u;

label_3487c0:
    // 0x3487c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3487c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3487c4:
    // 0x3487c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3487c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3487c8:
    // 0x3487c8: 0x58140  sll         $s0, $a1, 5
    ctx->pc = 0x3487c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_3487cc:
    // 0x3487cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3487ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3487d0:
    // 0x3487d0: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x3487d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_3487d4:
    // 0x3487d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3487d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3487d8:
    // 0x3487d8: 0x26100284  addiu       $s0, $s0, 0x284
    ctx->pc = 0x3487d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
label_3487dc:
    // 0x3487dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3487dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_3487e0:
    // 0x3487e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3487e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3487e4:
    // 0x3487e4: 0x8c93003c  lw          $s3, 0x3C($a0)
    ctx->pc = 0x3487e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_3487e8:
    // 0x3487e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3487e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3487ec:
    // 0x3487ec: 0x8e110014  lw          $s1, 0x14($s0)
    ctx->pc = 0x3487ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3487f0:
    // 0x3487f0: 0xc0d225a  jal         func_348968
label_3487f4:
    if (ctx->pc == 0x3487F4u) {
        ctx->pc = 0x3487F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3487F0u;
        // 0x3487f4: 0x8e120018  lw          $s2, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3487F8u;
        goto label_3487f8;
    }
    ctx->pc = 0x3487F0u;
    SET_GPR_U32(ctx, 31, 0x3487F8u);
    ctx->pc = 0x3487F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3487F0u;
    // 0x3487f4: 0x8e120018  lw          $s2, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348968u, 0x3487F0u, 0x3487F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3487F8u;
label_3487f8:
    // 0x3487f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3487f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3487fc:
    // 0x3487fc: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
label_348800:
    if (ctx->pc == 0x348800u) {
        ctx->pc = 0x348800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3487FCu;
        // 0x348800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348804u;
        goto label_348804;
    }
    ctx->pc = 0x3487FCu;
    {
        const bool branch_taken_0x3487fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x348800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3487FCu;
        // 0x348800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3487fc) {
            ctx->pc = 0x348850u;
            goto label_348850;
        }
    }
    ctx->pc = 0x348804u;
label_348804:
    // 0x348804: 0xc0d2126  jal         func_348498
label_348808:
    if (ctx->pc == 0x348808u) {
        ctx->pc = 0x34880Cu;
        goto label_34880c;
    }
    ctx->pc = 0x348804u;
    SET_GPR_U32(ctx, 31, 0x34880Cu);
    ctx->pc = 0x348498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348498u, 0x348804u, 0x34880Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34880Cu;
label_34880c:
    // 0x34880c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x34880cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_348810:
    // 0x348810: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x348810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_348814:
    // 0x348814: 0x40f809  jalr        $v0
label_348818:
    if (ctx->pc == 0x348818u) {
        ctx->pc = 0x348818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348814u;
        // 0x348818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34881Cu;
        goto label_34881c;
    }
    ctx->pc = 0x348814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34881Cu);
        ctx->pc = 0x348818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348814u;
        // 0x348818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348814u, 0x34881Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34881Cu;
label_34881c:
    // 0x34881c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34881cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_348820:
    // 0x348820: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x348820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_348824:
    // 0x348824: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x348824u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_348828:
    // 0x348828: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x348828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34882c:
    // 0x34882c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34882cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_348830:
    // 0x348830: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x348830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_348834:
    // 0x348834: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x348834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_348838:
    // 0x348838: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x348838u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34883c:
    // 0x34883c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34883cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_348840:
    // 0x348840: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x348840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_348844:
    // 0x348844: 0x80d3824  j           func_34E090
label_348848:
    if (ctx->pc == 0x348848u) {
        ctx->pc = 0x348848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348844u;
        // 0x348848: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34884Cu;
        goto label_34884c;
    }
    ctx->pc = 0x348844u;
    ctx->pc = 0x348848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348844u;
    // 0x348848: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E090u, 0x348844u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34884Cu;
label_34884c:
    // 0x34884c: 0x0  nop
    ctx->pc = 0x34884cu;
    // NOP
label_348850:
    // 0x348850: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x348850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_348854:
    // 0x348854: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x348854u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_348858:
    // 0x348858: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x348858u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34885c:
    // 0x34885c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34885cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_348860:
    // 0x348860: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x348860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_348864:
    // 0x348864: 0x3e00008  jr          $ra
label_348868:
    if (ctx->pc == 0x348868u) {
        ctx->pc = 0x348868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348864u;
        // 0x348868: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34886Cu;
        goto label_34886c;
    }
    ctx->pc = 0x348864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348864u;
        // 0x348868: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34886Cu;
label_34886c:
    // 0x34886c: 0x0  nop
    ctx->pc = 0x34886cu;
    // NOP
    ctx->pc = 0x348870u;
}
