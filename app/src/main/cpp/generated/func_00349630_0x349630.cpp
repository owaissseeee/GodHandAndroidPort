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

// Function: func_00349630
// Address: 0x349630 - 0x3496f0
void func_00349630_0x349630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00349630_0x349630");
#endif

    switch (ctx->pc) {
        case 0x349654u: goto label_349654;
        case 0x349670u: goto label_349670;
        case 0x349684u: goto label_349684;
        case 0x34968cu: goto label_34968c;
        case 0x349698u: goto label_349698;
        case 0x3496b8u: goto label_3496b8;
        case 0x3496c4u: goto label_3496c4;
        case 0x3496ccu: goto label_3496cc;
        default: break;
    }

    ctx->pc = 0x349630u;

    // 0x349630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x349630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x349634: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x349634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349638: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x349638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34963c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34963cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349640: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x349640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x349644: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x349644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x349648: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x349648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x34964c: 0xc0d25c6  jal         func_349718
    ctx->pc = 0x34964Cu;
    SET_GPR_U32(ctx, 31, 0x349654u);
    ctx->pc = 0x349650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34964Cu;
    // 0x349650: 0x8e12003c  lw          $s2, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349718u, 0x34964Cu, 0x349654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349654u;
label_349654:
    // 0x349654: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x349654u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x349658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x349658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34965c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34965cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349660: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x349660u;
    {
        const bool branch_taken_0x349660 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x349664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349660u;
        // 0x349664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349660) {
            ctx->pc = 0x349678u;
            goto label_349678;
        }
    }
    ctx->pc = 0x349668u;
    // 0x349668: 0xc0d25c6  jal         func_349718
    ctx->pc = 0x349668u;
    SET_GPR_U32(ctx, 31, 0x349670u);
    ctx->pc = 0x34966Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349668u;
    // 0x34966c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349718u, 0x349668u, 0x349670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349670u;
label_349670:
    // 0x349670: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x349670u;
    {
        const bool branch_taken_0x349670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349670u;
        // 0x349674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349670) {
            ctx->pc = 0x3496D4u;
            goto label_3496d4;
        }
    }
    ctx->pc = 0x349678u;
label_349678:
    // 0x349678: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x349678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x34967c: 0xc0d25ca  jal         func_349728
    ctx->pc = 0x34967Cu;
    SET_GPR_U32(ctx, 31, 0x349684u);
    ctx->pc = 0x349680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34967Cu;
    // 0x349680: 0xac50e0a0  sw          $s0, -0x1F60($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294959264), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349728u, 0x34967Cu, 0x349684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349684u;
label_349684:
    // 0x349684: 0xc0d5cbe  jal         func_3572F8
    ctx->pc = 0x349684u;
    SET_GPR_U32(ctx, 31, 0x34968Cu);
    ctx->pc = 0x349688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349684u;
    // 0x349688: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3572F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3572F8u, 0x349684u, 0x34968Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34968Cu;
label_34968c:
    // 0x34968c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34968cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349690: 0xc0d25ca  jal         func_349728
    ctx->pc = 0x349690u;
    SET_GPR_U32(ctx, 31, 0x349698u);
    ctx->pc = 0x349694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349690u;
    // 0x349694: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349728u, 0x349690u, 0x349698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349698u;
label_349698:
    // 0x349698: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x349698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x34969c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34969Cu;
    {
        const bool branch_taken_0x34969c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3496A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34969Cu;
        // 0x3496a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34969c) {
            ctx->pc = 0x3496B0u;
            goto label_3496b0;
        }
    }
    ctx->pc = 0x3496A4u;
    // 0x3496a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3496A4u;
    {
        const bool branch_taken_0x3496a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3496A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3496A4u;
        // 0x3496a8: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3496a4) {
            ctx->pc = 0x3496BCu;
            goto label_3496bc;
        }
    }
    ctx->pc = 0x3496ACu;
    // 0x3496ac: 0x0  nop
    ctx->pc = 0x3496acu;
    // NOP
label_3496b0:
    // 0x3496b0: 0xc0d2456  jal         func_349158
    ctx->pc = 0x3496B0u;
    SET_GPR_U32(ctx, 31, 0x3496B8u);
    ctx->pc = 0x3496B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3496B0u;
    // 0x3496b4: 0xae110068  sw          $s1, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349158u, 0x3496B0u, 0x3496B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3496B8u;
label_3496b8:
    // 0x3496b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3496b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3496bc:
    // 0x3496bc: 0xc0d25c6  jal         func_349718
    ctx->pc = 0x3496BCu;
    SET_GPR_U32(ctx, 31, 0x3496C4u);
    ctx->pc = 0x3496C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3496BCu;
    // 0x3496c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349718u, 0x3496BCu, 0x3496C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3496C4u;
label_3496c4:
    // 0x3496c4: 0xc0d5c96  jal         func_357258
    ctx->pc = 0x3496C4u;
    SET_GPR_U32(ctx, 31, 0x3496CCu);
    ctx->pc = 0x3496C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3496C4u;
    // 0x3496c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357258u, 0x3496C4u, 0x3496CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3496CCu;
label_3496cc:
    // 0x3496cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3496ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3496d0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3496d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3496d4:
    // 0x3496d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3496d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3496d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3496d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3496dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3496dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3496e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3496e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3496e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3496E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3496E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3496E4u;
        // 0x3496e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3496E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3496ECu;
    // 0x3496ec: 0x0  nop
    ctx->pc = 0x3496ecu;
    // NOP
    ctx->pc = 0x3496f0u;
}
