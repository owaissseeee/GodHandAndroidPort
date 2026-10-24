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

// Function: cEvent_updateStart
// Address: 0x2965f0 - 0x296738
void cEvent_updateStart_0x2965f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEvent_updateStart_0x2965f0");
#endif

    switch (ctx->pc) {
        case 0x29662cu: goto label_29662c;
        case 0x296640u: goto label_296640;
        case 0x29666cu: goto label_29666c;
        case 0x296674u: goto label_296674;
        case 0x296694u: goto label_296694;
        case 0x2966f4u: goto label_2966f4;
        case 0x296700u: goto label_296700;
        default: break;
    }

    ctx->pc = 0x2965f0u;

    // 0x2965f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2965f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2965f4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2965f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2965f8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2965f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2965fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2965fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296600: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x296600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x296604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296608: 0x82430005  lb          $v1, 0x5($s2)
    ctx->pc = 0x296608u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x29660c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29660Cu;
    {
        const bool branch_taken_0x29660c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x296610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29660Cu;
        // 0x296610: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29660c) {
            ctx->pc = 0x296624u;
            goto label_296624;
        }
    }
    ctx->pc = 0x296614u;
    // 0x296614: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x296614u;
    {
        const bool branch_taken_0x296614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x296618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296614u;
        // 0x296618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296614) {
            ctx->pc = 0x296638u;
            goto label_296638;
        }
    }
    ctx->pc = 0x29661Cu;
    // 0x29661c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x29661Cu;
    {
        const bool branch_taken_0x29661c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29661Cu;
        // 0x296620: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29661c) {
            ctx->pc = 0x296720u;
            goto label_296720;
        }
    }
    ctx->pc = 0x296624u;
label_296624:
    // 0x296624: 0xc0a59ce  jal         func_296738
    ctx->pc = 0x296624u;
    SET_GPR_U32(ctx, 31, 0x29662Cu);
    ctx->pc = 0x296628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296624u;
    // 0x296628: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296738u, 0x296624u, 0x29662Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29662Cu;
label_29662c:
    // 0x29662c: 0x92420005  lbu         $v0, 0x5($s2)
    ctx->pc = 0x29662cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x296630: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x296630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x296634: 0xa2420005  sb          $v0, 0x5($s2)
    ctx->pc = 0x296634u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 2));
label_296638:
    // 0x296638: 0xc0a59ec  jal         func_2967B0
    ctx->pc = 0x296638u;
    SET_GPR_U32(ctx, 31, 0x296640u);
    ctx->pc = 0x29663Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296638u;
    // 0x29663c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2967B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2967B0u, 0x296638u, 0x296640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296640u;
label_296640:
    // 0x296640: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x296640u;
    {
        const bool branch_taken_0x296640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296640u;
        // 0x296644: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296640) {
            ctx->pc = 0x296718u;
            goto label_296718;
        }
    }
    ctx->pc = 0x296648u;
    // 0x296648: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x296648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x29664c: 0x8c627a80  lw          $v0, 0x7A80($v1)
    ctx->pc = 0x29664cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31360)));
    // 0x296650: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x296650u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    // 0x296654: 0x26107b20  addiu       $s0, $s0, 0x7B20
    ctx->pc = 0x296654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31520));
    // 0x296658: 0x24717a80  addiu       $s1, $v1, 0x7A80
    ctx->pc = 0x296658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 31360));
    // 0x29665c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x29665cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x296660: 0xac627a80  sw          $v0, 0x7A80($v1)
    ctx->pc = 0x296660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31360), GPR_U32(ctx, 2));
    // 0x296664: 0xc0c228e  jal         func_308A38
    ctx->pc = 0x296664u;
    SET_GPR_U32(ctx, 31, 0x29666Cu);
    ctx->pc = 0x296668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296664u;
    // 0x296668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308A38u, 0x296664u, 0x29666Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29666Cu;
label_29666c:
    // 0x29666c: 0xc0c2350  jal         func_308D40
    ctx->pc = 0x29666Cu;
    SET_GPR_U32(ctx, 31, 0x296674u);
    ctx->pc = 0x296670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29666Cu;
    // 0x296670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308D40u, 0x29666Cu, 0x296674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296674u;
label_296674:
    // 0x296674: 0x8e22fff8  lw          $v0, -0x8($s1)
    ctx->pc = 0x296674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
    // 0x296678: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x296678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x29667c: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x29667cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x296680: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x296680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296684: 0x8cc42f84  lw          $a0, 0x2F84($a2)
    ctx->pc = 0x296684u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x296688: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x296688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29668c: 0xc0b141a  jal         func_2C5068
    ctx->pc = 0x29668Cu;
    SET_GPR_U32(ctx, 31, 0x296694u);
    ctx->pc = 0x296690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29668Cu;
    // 0x296690: 0xae22fff8  sw          $v0, -0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5068u, 0x29668Cu, 0x296694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296694u;
label_296694:
    // 0x296694: 0x8e23fff8  lw          $v1, -0x8($s1)
    ctx->pc = 0x296694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
    // 0x296698: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x296698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x29669c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x29669cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2966a0: 0x3c05efff  lui         $a1, 0xEFFF
    ctx->pc = 0x2966a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61439 << 16));
    // 0x2966a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2966a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2966a8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2966a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2966ac: 0x3c04fbff  lui         $a0, 0xFBFF
    ctx->pc = 0x2966acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64511 << 16));
    // 0x2966b0: 0x8e2b0004  lw          $t3, 0x4($s1)
    ctx->pc = 0x2966b0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2966b4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2966b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2966b8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2966b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2966bc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2966bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2966c0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2966c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2966c4: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x2966c4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x2966c8: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2966c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x2966cc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2966ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2966d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2966d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2966d4: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x2966d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x2966d8: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x2966d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x2966dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2966dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2966e0: 0xae23fff8  sw          $v1, -0x8($s1)
    ctx->pc = 0x2966e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 3));
    // 0x2966e4: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x2966e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x2966e8: 0xae2b0004  sw          $t3, 0x4($s1)
    ctx->pc = 0x2966e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 11));
    // 0x2966ec: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x2966ECu;
    SET_GPR_U32(ctx, 31, 0x2966F4u);
    ctx->pc = 0x2966F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2966ECu;
    // 0x2966f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x2966ECu, 0x2966F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2966F4u;
label_2966f4:
    // 0x2966f4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2966f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2966f8: 0xc0ad96c  jal         func_2B65B0
    ctx->pc = 0x2966F8u;
    SET_GPR_U32(ctx, 31, 0x296700u);
    ctx->pc = 0x2966FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2966F8u;
    // 0x2966fc: 0x8c442558  lw          $a0, 0x2558($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9560)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B65B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B65B0u, 0x2966F8u, 0x296700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296700u;
label_296700:
    // 0x296700: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x296700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296704: 0xa2400007  sb          $zero, 0x7($s2)
    ctx->pc = 0x296704u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x296708: 0xa2420004  sb          $v0, 0x4($s2)
    ctx->pc = 0x296708u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x29670c: 0xa2400005  sb          $zero, 0x5($s2)
    ctx->pc = 0x29670cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x296710: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x296710u;
    {
        const bool branch_taken_0x296710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296710u;
        // 0x296714: 0xa2400006  sb          $zero, 0x6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296710) {
            ctx->pc = 0x29671Cu;
            goto label_29671c;
        }
    }
    ctx->pc = 0x296718u;
label_296718:
    // 0x296718: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x296718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29671c:
    // 0x29671c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x29671cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_296720:
    // 0x296720: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x296720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296724: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x296724u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29672c: 0x3e00008  jr          $ra
    ctx->pc = 0x29672Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29672Cu;
        // 0x296730: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29672Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296734u;
    // 0x296734: 0x0  nop
    ctx->pc = 0x296734u;
    // NOP
    ctx->pc = 0x296738u;
}
