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

// Function: cSndSeVoice_Play
// Address: 0x2ce588 - 0x2cea00
void cSndSeVoice_Play_0x2ce588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndSeVoice_Play_0x2ce588");
#endif

    switch (ctx->pc) {
        case 0x2ce610u: goto label_2ce610;
        case 0x2ce64cu: goto label_2ce64c;
        case 0x2ce694u: goto label_2ce694;
        case 0x2ce6a0u: goto label_2ce6a0;
        case 0x2ce6b0u: goto label_2ce6b0;
        case 0x2ce848u: goto label_2ce848;
        case 0x2ce9e4u: goto label_2ce9e4;
        default: break;
    }

    ctx->pc = 0x2ce588u;

    // 0x2ce588: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ce588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2ce58c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2ce58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2ce590: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2ce590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2ce594: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2ce594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2ce598: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ce598u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce59c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ce59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ce5a0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2ce5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2ce5a4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CE5A4u;
    {
        const bool branch_taken_0x2ce5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE5A4u;
        // 0x2ce5a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce5a4) {
            ctx->pc = 0x2CE5D0u;
            goto label_2ce5d0;
        }
    }
    ctx->pc = 0x2CE5ACu;
    // 0x2ce5ac: 0x86420028  lh          $v0, 0x28($s2)
    ctx->pc = 0x2ce5acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2ce5b0: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE5B0u;
    {
        const bool branch_taken_0x2ce5b0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2CE5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE5B0u;
        // 0x2ce5b4: 0x96430028  lhu         $v1, 0x28($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce5b0) {
            ctx->pc = 0x2CE5C0u;
            goto label_2ce5c0;
        }
    }
    ctx->pc = 0x2CE5B8u;
    // 0x2ce5b8: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x2ce5b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ce5bc: 0xa6230012  sh          $v1, 0x12($s1)
    ctx->pc = 0x2ce5bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 3));
label_2ce5c0:
    // 0x2ce5c0: 0x8642002a  lh          $v0, 0x2A($s2)
    ctx->pc = 0x2ce5c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
    // 0x2ce5c4: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CE5C4u;
    {
        const bool branch_taken_0x2ce5c4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2CE5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE5C4u;
        // 0x2ce5c8: 0x9643002a  lhu         $v1, 0x2A($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce5c4) {
            ctx->pc = 0x2CE5D0u;
            goto label_2ce5d0;
        }
    }
    ctx->pc = 0x2CE5CCu;
    // 0x2ce5cc: 0xa6230014  sh          $v1, 0x14($s1)
    ctx->pc = 0x2ce5ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 3));
label_2ce5d0:
    // 0x2ce5d0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x2ce5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2ce5d4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2ce5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2ce5d8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2CE5D8u;
    {
        const bool branch_taken_0x2ce5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE5D8u;
        // 0x2ce5dc: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce5d8) {
            ctx->pc = 0x2CE618u;
            goto label_2ce618;
        }
    }
    ctx->pc = 0x2CE5E0u;
    // 0x2ce5e0: 0x26430040  addiu       $v1, $s2, 0x40
    ctx->pc = 0x2ce5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2ce5e4: 0x24847b20  addiu       $a0, $a0, 0x7B20
    ctx->pc = 0x2ce5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31520));
    // 0x2ce5e8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2ce5e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ce5ec: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2ce5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ce5f0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2ce5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2ce5f4: 0x2442ee00  addiu       $v0, $v0, -0x1200
    ctx->pc = 0x2ce5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x2ce5f8: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2ce5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2ce5fc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ce5fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x5FEEC0u));
    // 0x2ce600: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2ce600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ce604: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ce604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce608: 0xc0c236a  jal         func_308DA8
    ctx->pc = 0x2CE608u;
    SET_GPR_U32(ctx, 31, 0x2CE610u);
    ctx->pc = 0x2CE60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE608u;
    // 0x2ce60c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308DA8u, 0x2CE608u, 0x2CE610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE610u;
label_2ce610:
    // 0x2ce610: 0x144000f5  bnez        $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x2CE610u;
    {
        const bool branch_taken_0x2ce610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE610u;
        // 0x2ce614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce610) {
            ctx->pc = 0x2CE9E8u;
            goto label_2ce9e8;
        }
    }
    ctx->pc = 0x2CE618u;
label_2ce618:
    // 0x2ce618: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x2ce618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2ce61c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ce61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ce620: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CE620u;
    {
        const bool branch_taken_0x2ce620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE620u;
        // 0x2ce624: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce620) {
            ctx->pc = 0x2CE678u;
            goto label_2ce678;
        }
    }
    ctx->pc = 0x2CE628u;
    // 0x2ce628: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x2ce628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x2ce62c: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2ce62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
    // 0x2ce630: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2ce630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2ce634: 0x54600011  bnel        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CE634u;
    {
        const bool branch_taken_0x2ce634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce634) {
            ctx->pc = 0x2CE638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE634u;
            // 0x2ce638: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE67Cu;
            goto label_2ce67c;
        }
    }
    ctx->pc = 0x2CE63Cu;
    // 0x2ce63c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2ce63cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2ce640: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x2ce640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2ce644: 0xc0b2b84  jal         func_2CAE10
    ctx->pc = 0x2CE644u;
    SET_GPR_U32(ctx, 31, 0x2CE64Cu);
    ctx->pc = 0x2CE648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE644u;
    // 0x2ce648: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAE10u, 0x2CE644u, 0x2CE64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE64Cu;
label_2ce64c:
    // 0x2ce64c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ce64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce650: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2CE650u;
    {
        const bool branch_taken_0x2ce650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ce650) {
            ctx->pc = 0x2CE654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE650u;
            // 0x2ce654: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE67Cu;
            goto label_2ce67c;
        }
    }
    ctx->pc = 0x2CE658u;
    // 0x2ce658: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x2ce658u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2ce65c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ce65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ce660: 0x96240028  lhu         $a0, 0x28($s1)
    ctx->pc = 0x2ce660u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2ce664: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2ce664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2ce668: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE668u;
    {
        const bool branch_taken_0x2ce668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CE66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE668u;
        // 0x2ce66c: 0xa622000c  sh          $v0, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce668) {
            ctx->pc = 0x2CE678u;
            goto label_2ce678;
        }
    }
    ctx->pc = 0x2CE670u;
    // 0x2ce670: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2ce670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ce674: 0xa6220028  sh          $v0, 0x28($s1)
    ctx->pc = 0x2ce674u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 2));
label_2ce678:
    // 0x2ce678: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2ce678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2ce67c:
    // 0x2ce67c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CE67Cu;
    {
        const bool branch_taken_0x2ce67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE67Cu;
        // 0x2ce680: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce67c) {
            ctx->pc = 0x2CE6CCu;
            goto label_2ce6cc;
        }
    }
    ctx->pc = 0x2CE684u;
    // 0x2ce684: 0x27a70022  addiu       $a3, $sp, 0x22
    ctx->pc = 0x2ce684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 34));
    // 0x2ce688: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ce688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce68c: 0xc0b3c16  jal         func_2CF058
    ctx->pc = 0x2CE68Cu;
    SET_GPR_U32(ctx, 31, 0x2CE694u);
    ctx->pc = 0x2CE690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE68Cu;
    // 0x2ce690: 0x26450040  addiu       $a1, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF058u, 0x2CE68Cu, 0x2CE694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE694u;
label_2ce694:
    // 0x2ce694: 0x87a50020  lh          $a1, 0x20($sp)
    ctx->pc = 0x2ce694u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce698: 0xc0dd46e  jal         func_3751B8
    ctx->pc = 0x2CE698u;
    SET_GPR_U32(ctx, 31, 0x2CE6A0u);
    ctx->pc = 0x2CE69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE698u;
    // 0x2ce69c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3751B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3751B8u, 0x2CE698u, 0x2CE6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE6A0u;
label_2ce6a0:
    // 0x2ce6a0: 0x87a50022  lh          $a1, 0x22($sp)
    ctx->pc = 0x2ce6a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 34)));
    // 0x2ce6a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ce6a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce6a8: 0xc0dd4a8  jal         func_3752A0
    ctx->pc = 0x2CE6A8u;
    SET_GPR_U32(ctx, 31, 0x2CE6B0u);
    ctx->pc = 0x2CE6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE6A8u;
    // 0x2ce6ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3752A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3752A0u, 0x2CE6A8u, 0x2CE6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE6B0u;
label_2ce6b0:
    // 0x2ce6b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2ce6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ce6b4: 0x520300cc  beql        $s0, $v1, . + 4 + (0xCC << 2)
    ctx->pc = 0x2CE6B4u;
    {
        const bool branch_taken_0x2ce6b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ce6b4) {
            ctx->pc = 0x2CE6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE6B4u;
            // 0x2ce6b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE9E8u;
            goto label_2ce9e8;
        }
    }
    ctx->pc = 0x2CE6BCu;
    // 0x2ce6bc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE6BCu;
    {
        const bool branch_taken_0x2ce6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CE6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6BCu;
        // 0x2ce6c0: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce6bc) {
            ctx->pc = 0x2CE6D0u;
            goto label_2ce6d0;
        }
    }
    ctx->pc = 0x2CE6C4u;
    // 0x2ce6c4: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x2CE6C4u;
    {
        const bool branch_taken_0x2ce6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6C4u;
        // 0x2ce6c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce6c4) {
            ctx->pc = 0x2CE9E8u;
            goto label_2ce9e8;
        }
    }
    ctx->pc = 0x2CE6CCu;
label_2ce6cc:
    // 0x2ce6cc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2ce6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_2ce6d0:
    // 0x2ce6d0: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x2ce6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x2ce6d4: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2ce6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
    // 0x2ce6d8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2ce6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2ce6dc: 0x50600028  beql        $v1, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2CE6DCu;
    {
        const bool branch_taken_0x2ce6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce6dc) {
            ctx->pc = 0x2CE6E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE6DCu;
            // 0x2ce6e0: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE780u;
            goto label_2ce780;
        }
    }
    ctx->pc = 0x2CE6E4u;
    // 0x2ce6e4: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x2ce6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2ce6e8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2CE6E8u;
    {
        const bool branch_taken_0x2ce6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6E8u;
        // 0x2ce6ec: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce6e8) {
            ctx->pc = 0x2CE77Cu;
            goto label_2ce77c;
        }
    }
    ctx->pc = 0x2CE6F0u;
    // 0x2ce6f0: 0x86240010  lh          $a0, 0x10($s1)
    ctx->pc = 0x2ce6f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ce6f4: 0x2463ee00  addiu       $v1, $v1, -0x1200
    ctx->pc = 0x2ce6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
    // 0x2ce6f8: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x2ce6f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x2ce6fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ce6fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ce700: 0x0  nop
    ctx->pc = 0x2ce700u;
    // NOP
    // 0x2ce704: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ce704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ce708: 0xc4610068  lwc1        $f1, 0x68($v1)
    ctx->pc = 0x2ce708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce70c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2ce70cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ce710: 0x0  nop
    ctx->pc = 0x2ce710u;
    // NOP
    // 0x2ce714: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2ce714u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ce718: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ce718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ce71c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ce71cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ce720: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2ce720u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ce724: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x2ce724u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ce728: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2ce728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2ce72c: 0xc4600068  lwc1        $f0, 0x68($v1)
    ctx->pc = 0x2ce72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce730: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2ce730u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2ce734: 0x28420081  slti        $v0, $v0, 0x81
    ctx->pc = 0x2ce734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x2ce738: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2ce738u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ce73c: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ce73cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ce740: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2ce740u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ce744: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE744u;
    {
        const bool branch_taken_0x2ce744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE744u;
        // 0x2ce748: 0xa6230012  sh          $v1, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce744) {
            ctx->pc = 0x2CE754u;
            goto label_2ce754;
        }
    }
    ctx->pc = 0x2CE74Cu;
    // 0x2ce74c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2ce74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ce750: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x2ce750u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
label_2ce754:
    // 0x2ce754: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x2ce754u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x2ce758: 0x28420081  slti        $v0, $v0, 0x81
    ctx->pc = 0x2ce758u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x2ce75c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE75Cu;
    {
        const bool branch_taken_0x2ce75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce75c) {
            ctx->pc = 0x2CE760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE75Cu;
            // 0x2ce760: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE770u;
            goto label_2ce770;
        }
    }
    ctx->pc = 0x2CE764u;
    // 0x2ce764: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2ce764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ce768: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x2ce768u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ce76c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x2ce76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2ce770:
    // 0x2ce770: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2ce770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x2ce774: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ce774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ce778: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x2ce778u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_2ce77c:
    // 0x2ce77c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x2ce77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2ce780:
    // 0x2ce780: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2ce780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2ce784: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2CE784u;
    {
        const bool branch_taken_0x2ce784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE784u;
        // 0x2ce788: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce784) {
            ctx->pc = 0x2CE808u;
            goto label_2ce808;
        }
    }
    ctx->pc = 0x2CE78Cu;
    // 0x2ce78c: 0x86240010  lh          $a0, 0x10($s1)
    ctx->pc = 0x2ce78cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ce790: 0x2463ee00  addiu       $v1, $v1, -0x1200
    ctx->pc = 0x2ce790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
    // 0x2ce794: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x2ce794u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x2ce798: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ce798u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ce79c: 0x0  nop
    ctx->pc = 0x2ce79cu;
    // NOP
    // 0x2ce7a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ce7a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ce7a4: 0xc4610060  lwc1        $f1, 0x60($v1)
    ctx->pc = 0x2ce7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce7a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2ce7a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ce7ac: 0x0  nop
    ctx->pc = 0x2ce7acu;
    // NOP
    // 0x2ce7b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2ce7b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ce7b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ce7b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ce7b8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ce7b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ce7bc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2ce7bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ce7c0: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x2ce7c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ce7c4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2ce7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2ce7c8: 0xc4600060  lwc1        $f0, 0x60($v1)
    ctx->pc = 0x2ce7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce7cc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2ce7ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2ce7d0: 0x28420081  slti        $v0, $v0, 0x81
    ctx->pc = 0x2ce7d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x2ce7d4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2ce7d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ce7d8: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ce7d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ce7dc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2ce7dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ce7e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE7E0u;
    {
        const bool branch_taken_0x2ce7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7E0u;
        // 0x2ce7e4: 0xa6230012  sh          $v1, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce7e0) {
            ctx->pc = 0x2CE7F0u;
            goto label_2ce7f0;
        }
    }
    ctx->pc = 0x2CE7E8u;
    // 0x2ce7e8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2ce7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ce7ec: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x2ce7ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
label_2ce7f0:
    // 0x2ce7f0: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x2ce7f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x2ce7f4: 0x28420081  slti        $v0, $v0, 0x81
    ctx->pc = 0x2ce7f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x2ce7f8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE7F8u;
    {
        const bool branch_taken_0x2ce7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce7f8) {
            ctx->pc = 0x2CE7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE7F8u;
            // 0x2ce7fc: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE80Cu;
            goto label_2ce80c;
        }
    }
    ctx->pc = 0x2CE800u;
    // 0x2ce800: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2ce800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ce804: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x2ce804u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
label_2ce808:
    // 0x2ce808: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x2ce808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2ce80c:
    // 0x2ce80c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2ce80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2ce810: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2CE810u;
    {
        const bool branch_taken_0x2ce810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE810u;
        // 0x2ce814: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce810) {
            ctx->pc = 0x2CE89Cu;
            goto label_2ce89c;
        }
    }
    ctx->pc = 0x2CE818u;
    // 0x2ce818: 0x26430040  addiu       $v1, $s2, 0x40
    ctx->pc = 0x2ce818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2ce81c: 0x24847b20  addiu       $a0, $a0, 0x7B20
    ctx->pc = 0x2ce81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31520));
    // 0x2ce820: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2ce820u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ce824: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2ce824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ce828: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2ce828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2ce82c: 0x2442ee00  addiu       $v0, $v0, -0x1200
    ctx->pc = 0x2ce82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x2ce830: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2ce830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2ce834: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ce834u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x5FEEC0u));
    // 0x2ce838: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2ce838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ce83c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ce83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce840: 0xc0c236a  jal         func_308DA8
    ctx->pc = 0x2CE840u;
    SET_GPR_U32(ctx, 31, 0x2CE848u);
    ctx->pc = 0x2CE844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE840u;
    // 0x2ce844: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308DA8u, 0x2CE840u, 0x2CE848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE848u;
label_2ce848:
    // 0x2ce848: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CE848u;
    {
        const bool branch_taken_0x2ce848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE848u;
        // 0x2ce84c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce848) {
            ctx->pc = 0x2CE8A0u;
            goto label_2ce8a0;
        }
    }
    ctx->pc = 0x2CE850u;
    // 0x2ce850: 0x86220010  lh          $v0, 0x10($s1)
    ctx->pc = 0x2ce850u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ce854: 0x86230012  lh          $v1, 0x12($s1)
    ctx->pc = 0x2ce854u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x2ce858: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ce858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce85c: 0x0  nop
    ctx->pc = 0x2ce85cu;
    // NOP
    // 0x2ce860: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ce860u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ce864: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2ce864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2ce868: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2ce868u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2ce86c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ce86cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ce870: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ce870u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ce874: 0x0  nop
    ctx->pc = 0x2ce874u;
    // NOP
    // 0x2ce878: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ce878u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ce87c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2ce87cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ce880: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ce880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ce884: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ce884u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2ce888: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2ce888u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ce88c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ce88cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ce890: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2ce890u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ce894: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x2ce894u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ce898: 0xa6230012  sh          $v1, 0x12($s1)
    ctx->pc = 0x2ce898u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 3));
label_2ce89c:
    // 0x2ce89c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2ce89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_2ce8a0:
    // 0x2ce8a0: 0x8c437a2c  lw          $v1, 0x7A2C($v0)
    ctx->pc = 0x2ce8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31276)));
    // 0x2ce8a4: 0x4620045  bltzl       $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2CE8A4u;
    {
        const bool branch_taken_0x2ce8a4 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x2ce8a4) {
            ctx->pc = 0x2CE8A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE8A4u;
            // 0x2ce8a8: 0x96230010  lhu         $v1, 0x10($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE9BCu;
            goto label_2ce9bc;
        }
    }
    ctx->pc = 0x2CE8ACu;
    // 0x2ce8ac: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x2ce8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2ce8b0: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CE8B0u;
    {
        const bool branch_taken_0x2ce8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce8b0) {
            ctx->pc = 0x2CE8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE8B0u;
            // 0x2ce8b4: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE8F8u;
            goto label_2ce8f8;
        }
    }
    ctx->pc = 0x2CE8B8u;
    // 0x2ce8b8: 0xc44105a8  lwc1        $f1, 0x5A8($v0)
    ctx->pc = 0x2ce8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce8bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ce8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce8c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ce8c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ce8c4: 0x0  nop
    ctx->pc = 0x2ce8c4u;
    // NOP
    // 0x2ce8c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ce8c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce8cc: 0x0  nop
    ctx->pc = 0x2ce8ccu;
    // NOP
    // 0x2ce8d0: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2CE8D0u;
    {
        const bool branch_taken_0x2ce8d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ce8d0) {
            ctx->pc = 0x2CE8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE8D0u;
            // 0x2ce8d4: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE8F8u;
            goto label_2ce8f8;
        }
    }
    ctx->pc = 0x2CE8D8u;
    // 0x2ce8d8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x2ce8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2ce8dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ce8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ce8e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE8E0u;
    {
        const bool branch_taken_0x2ce8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE8E0u;
        // 0x2ce8e4: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce8e0) {
            ctx->pc = 0x2CE8F4u;
            goto label_2ce8f4;
        }
    }
    ctx->pc = 0x2CE8E8u;
    // 0x2ce8e8: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x2ce8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2ce8ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ce8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ce8f0: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x2ce8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_2ce8f4:
    // 0x2ce8f4: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x2ce8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2ce8f8:
    // 0x2ce8f8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2ce8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2ce8fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ce8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ce900: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x2CE900u;
    {
        const bool branch_taken_0x2ce900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce900) {
            ctx->pc = 0x2CE904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE900u;
            // 0x2ce904: 0x96230010  lhu         $v1, 0x10($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE9BCu;
            goto label_2ce9bc;
        }
    }
    ctx->pc = 0x2CE908u;
    // 0x2ce908: 0x9622001c  lhu         $v0, 0x1C($s1)
    ctx->pc = 0x2ce908u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2ce90c: 0x2442f100  addiu       $v0, $v0, -0xF00
    ctx->pc = 0x2ce90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963456));
    // 0x2ce910: 0xa622001c  sh          $v0, 0x1C($s1)
    ctx->pc = 0x2ce910u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ce914: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x2ce914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2ce918: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2ce918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2ce91c: 0x50600021  beql        $v1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2CE91Cu;
    {
        const bool branch_taken_0x2ce91c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce91c) {
            ctx->pc = 0x2CE920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE91Cu;
            // 0x2ce920: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE9A4u;
            goto label_2ce9a4;
        }
    }
    ctx->pc = 0x2CE924u;
    // 0x2ce924: 0x86220010  lh          $v0, 0x10($s1)
    ctx->pc = 0x2ce924u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ce928: 0x86230012  lh          $v1, 0x12($s1)
    ctx->pc = 0x2ce928u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x2ce92c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ce92cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce930: 0x0  nop
    ctx->pc = 0x2ce930u;
    // NOP
    // 0x2ce934: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ce934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ce938: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x2ce938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
    // 0x2ce93c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2ce93cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x2ce940: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ce940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ce944: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ce944u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ce948: 0x0  nop
    ctx->pc = 0x2ce948u;
    // NOP
    // 0x2ce94c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ce94cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ce950: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2ce950u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ce954: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ce954u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ce958: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ce958u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2ce95c: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x2ce95cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ce960: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ce960u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ce964: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2ce964u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ce968: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x2ce968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2ce96c: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x2ce96cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ce970: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2ce970u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2ce974: 0x28420081  slti        $v0, $v0, 0x81
    ctx->pc = 0x2ce974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x2ce978: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE978u;
    {
        const bool branch_taken_0x2ce978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE978u;
        // 0x2ce97c: 0xa6240012  sh          $a0, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce978) {
            ctx->pc = 0x2CE988u;
            goto label_2ce988;
        }
    }
    ctx->pc = 0x2CE980u;
    // 0x2ce980: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2ce980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ce984: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x2ce984u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
label_2ce988:
    // 0x2ce988: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x2ce988u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x2ce98c: 0x28420081  slti        $v0, $v0, 0x81
    ctx->pc = 0x2ce98cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x2ce990: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE990u;
    {
        const bool branch_taken_0x2ce990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce990) {
            ctx->pc = 0x2CE994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE990u;
            // 0x2ce994: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE9A4u;
            goto label_2ce9a4;
        }
    }
    ctx->pc = 0x2CE998u;
    // 0x2ce998: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2ce998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ce99c: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x2ce99cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ce9a0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x2ce9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2ce9a4:
    // 0x2ce9a4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2ce9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2ce9a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE9A8u;
    {
        const bool branch_taken_0x2ce9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce9a8) {
            ctx->pc = 0x2CE9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE9A8u;
            // 0x2ce9ac: 0x96230010  lhu         $v1, 0x10($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE9BCu;
            goto label_2ce9bc;
        }
    }
    ctx->pc = 0x2CE9B0u;
    // 0x2ce9b0: 0xa6200010  sh          $zero, 0x10($s1)
    ctx->pc = 0x2ce9b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ce9b4: 0xa6200012  sh          $zero, 0x12($s1)
    ctx->pc = 0x2ce9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ce9b8: 0x96230010  lhu         $v1, 0x10($s1)
    ctx->pc = 0x2ce9b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
label_2ce9bc:
    // 0x2ce9bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ce9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce9c0: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x2ce9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2ce9c4: 0xa643002c  sh          $v1, 0x2C($s2)
    ctx->pc = 0x2ce9c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ce9c8: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x2ce9c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x2ce9cc: 0xa642002e  sh          $v0, 0x2E($s2)
    ctx->pc = 0x2ce9ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ce9d0: 0x96230014  lhu         $v1, 0x14($s1)
    ctx->pc = 0x2ce9d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2ce9d4: 0xa6430030  sh          $v1, 0x30($s2)
    ctx->pc = 0x2ce9d4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ce9d8: 0x96220016  lhu         $v0, 0x16($s1)
    ctx->pc = 0x2ce9d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x2ce9dc: 0xc0dd37e  jal         func_374DF8
    ctx->pc = 0x2CE9DCu;
    SET_GPR_U32(ctx, 31, 0x2CE9E4u);
    ctx->pc = 0x2CE9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE9DCu;
    // 0x2ce9e0: 0xa6420032  sh          $v0, 0x32($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 50), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374DF8u, 0x2CE9DCu, 0x2CE9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE9E4u;
label_2ce9e4:
    // 0x2ce9e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce9e8:
    // 0x2ce9e8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2ce9e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ce9ec: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2ce9ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ce9f0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2ce9f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ce9f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ce9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ce9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE9F8u;
        // 0x2ce9fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CEA00u;
}
