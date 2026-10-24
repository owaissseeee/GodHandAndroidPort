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

// Function: cmd_sem_init
// Address: 0x398638 - 0x398720
void cmd_sem_init_0x398638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cmd_sem_init_0x398638");
#endif

    switch (ctx->pc) {
        case 0x3986a8u: goto label_3986a8;
        case 0x3986c0u: goto label_3986c0;
        case 0x3986d8u: goto label_3986d8;
        case 0x3986f4u: goto label_3986f4;
        default: break;
    }

    ctx->pc = 0x398638u;

    // 0x398638: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x398638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x39863c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x39863cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x398640: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x398640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x398644: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x398644u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x398648: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x398648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x39864c: 0x8e228668  lw          $v0, -0x7998($s1)
    ctx->pc = 0x39864cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F8668u));
    // 0x398650: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x398650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x398654: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x398654u;
    {
        const bool branch_taken_0x398654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x398658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398654u;
        // 0x398658: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398654) {
            ctx->pc = 0x398680u;
            goto label_398680;
        }
    }
    ctx->pc = 0x39865Cu;
    // 0x39865c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x39865cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x398660: 0x8e02866c  lw          $v0, -0x7994($s0)
    ctx->pc = 0x398660u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F866Cu));
    // 0x398664: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x398664u;
    {
        const bool branch_taken_0x398664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x398668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398664u;
        // 0x398668: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398664) {
            ctx->pc = 0x398684u;
            goto label_398684;
        }
    }
    ctx->pc = 0x39866Cu;
    // 0x39866c: 0x8e428670  lw          $v0, -0x7990($s2)
    ctx->pc = 0x39866cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936176)));
    // 0x398670: 0x14430025  bne         $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x398670u;
    {
        const bool branch_taken_0x398670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x398674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398670u;
        // 0x398674: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398670) {
            ctx->pc = 0x398708u;
            goto label_398708;
        }
    }
    ctx->pc = 0x398678u;
    // 0x398678: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x398678u;
    {
        const bool branch_taken_0x398678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398678u;
        // 0x39867c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398678) {
            ctx->pc = 0x39868Cu;
            goto label_39868c;
        }
    }
    ctx->pc = 0x398680u;
label_398680:
    // 0x398680: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x398680u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_398684:
    // 0x398684: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x398684u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x398688: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x398688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_39868c:
    // 0x39868c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39868cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398690: 0x2442e1a8  addiu       $v0, $v0, -0x1E58
    ctx->pc = 0x398690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959528));
    // 0x398694: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x398694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x398698: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x398698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x39869c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x39869cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3986a0: 0xc0ebf28  jal         func_3AFCA0
    ctx->pc = 0x3986A0u;
    SET_GPR_U32(ctx, 31, 0x3986A8u);
    ctx->pc = 0x3986A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3986A0u;
    // 0x3986a4: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCA0u, 0x3986A0u, 0x3986A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3986A8u;
label_3986a8:
    // 0x3986a8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3986a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3986ac: 0xae228668  sw          $v0, -0x7998($s1)
    ctx->pc = 0x3986acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294936168), GPR_U32(ctx, 2));
    // 0x3986b0: 0x2463e1b8  addiu       $v1, $v1, -0x1E48
    ctx->pc = 0x3986b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959544));
    // 0x3986b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3986b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3986b8: 0xc0ebf28  jal         func_3AFCA0
    ctx->pc = 0x3986B8u;
    SET_GPR_U32(ctx, 31, 0x3986C0u);
    ctx->pc = 0x3986BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3986B8u;
    // 0x3986bc: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCA0u, 0x3986B8u, 0x3986C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3986C0u;
label_3986c0:
    // 0x3986c0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3986c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3986c4: 0xae02866c  sw          $v0, -0x7994($s0)
    ctx->pc = 0x3986c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294936172), GPR_U32(ctx, 2));
    // 0x3986c8: 0x2463e1c8  addiu       $v1, $v1, -0x1E38
    ctx->pc = 0x3986c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959560));
    // 0x3986cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3986ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3986d0: 0xc0ebf28  jal         func_3AFCA0
    ctx->pc = 0x3986D0u;
    SET_GPR_U32(ctx, 31, 0x3986D8u);
    ctx->pc = 0x3986D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3986D0u;
    // 0x3986d4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCA0u, 0x3986D0u, 0x3986D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3986D8u;
label_3986d8:
    // 0x3986d8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3986d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3986dc: 0xae428670  sw          $v0, -0x7990($s2)
    ctx->pc = 0x3986dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294936176), GPR_U32(ctx, 2));
    // 0x3986e0: 0x2463e1d8  addiu       $v1, $v1, -0x1E28
    ctx->pc = 0x3986e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959576));
    // 0x3986e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3986e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3986e8: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x3986e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x3986ec: 0xc0ebf28  jal         func_3AFCA0
    ctx->pc = 0x3986ECu;
    SET_GPR_U32(ctx, 31, 0x3986F4u);
    ctx->pc = 0x3986F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3986ECu;
    // 0x3986f0: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCA0u, 0x3986ECu, 0x3986F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3986F4u;
label_3986f4:
    // 0x3986f4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3986f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3986f8: 0xac628660  sw          $v0, -0x79A0($v1)
    ctx->pc = 0x3986f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F8660u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8660u, _value); } while (0);
    // 0x3986fc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3986fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x398700: 0xac408674  sw          $zero, -0x798C($v0)
    ctx->pc = 0x398700u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F8674u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8674u, _value); } while (0);
    // 0x398704: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x398704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_398708:
    // 0x398708: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x398708u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39870c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x39870cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x398710: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x398710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x398714: 0x3e00008  jr          $ra
    ctx->pc = 0x398714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398714u;
        // 0x398718: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39871Cu;
    // 0x39871c: 0x0  nop
    ctx->pc = 0x39871cu;
    // NOP
    ctx->pc = 0x398720u;
}
