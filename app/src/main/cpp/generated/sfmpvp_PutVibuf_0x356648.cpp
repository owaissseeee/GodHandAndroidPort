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

// Function: sfmpvp_PutVibuf
// Address: 0x356648 - 0x3566e8
void sfmpvp_PutVibuf_0x356648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfmpvp_PutVibuf_0x356648");
#endif

    switch (ctx->pc) {
        case 0x35667cu: goto label_35667c;
        case 0x3566bcu: goto label_3566bc;
        case 0x3566ccu: goto label_3566cc;
        default: break;
    }

    ctx->pc = 0x356648u;

    // 0x356648: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x356648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35664c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35664cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x356650: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x356650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356654: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x356654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x356658: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x356658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35665c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x35665cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x356660: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x356660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x356664: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x356664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356668: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x356668u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x35666c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x35666cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x356670: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x356670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x356674: 0xc0d56b2  jal         func_355AC8
    ctx->pc = 0x356674u;
    SET_GPR_U32(ctx, 31, 0x35667Cu);
    ctx->pc = 0x356678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356674u;
    // 0x356678: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355AC8u, 0x356674u, 0x35667Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35667Cu;
label_35667c:
    // 0x35667c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x35667cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356680: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x356680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x356684: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x356684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x356688: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x356688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x35668c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x35668cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x356690: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x356690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x356694: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x356694u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x356698: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x356698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x35669c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x35669cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3566a0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3566a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3566a4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3566a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3566a8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3566a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3566ac: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3566acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3566b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3566b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3566b4: 0xc0d5a78  jal         func_3569E0
    ctx->pc = 0x3566B4u;
    SET_GPR_U32(ctx, 31, 0x3566BCu);
    ctx->pc = 0x3566B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3566B4u;
    // 0x3566b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3569E0u, 0x3566B4u, 0x3566BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3566BCu;
label_3566bc:
    // 0x3566bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3566bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3566c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3566c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3566c4: 0xc0d56ee  jal         func_355BB8
    ctx->pc = 0x3566C4u;
    SET_GPR_U32(ctx, 31, 0x3566CCu);
    ctx->pc = 0x3566C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3566C4u;
    // 0x3566c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355BB8u, 0x3566C4u, 0x3566CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3566CCu;
label_3566cc:
    // 0x3566cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3566ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3566d0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3566d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3566d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3566d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3566d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3566d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3566dc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3566dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3566e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3566E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3566E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3566E0u;
        // 0x3566e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3566E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3566E8u;
}
