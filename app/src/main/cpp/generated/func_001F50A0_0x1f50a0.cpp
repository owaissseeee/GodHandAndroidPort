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

// Function: func_001F50A0
// Address: 0x1f50a0 - 0x1f5210
void func_001F50A0_0x1f50a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F50A0_0x1f50a0");
#endif

    switch (ctx->pc) {
        case 0x1f5108u: goto label_1f5108;
        case 0x1f511cu: goto label_1f511c;
        case 0x1f512cu: goto label_1f512c;
        case 0x1f513cu: goto label_1f513c;
        case 0x1f5170u: goto label_1f5170;
        case 0x1f5180u: goto label_1f5180;
        case 0x1f5190u: goto label_1f5190;
        case 0x1f51a0u: goto label_1f51a0;
        case 0x1f51b0u: goto label_1f51b0;
        case 0x1f51d0u: goto label_1f51d0;
        case 0x1f51e0u: goto label_1f51e0;
        default: break;
    }

    ctx->pc = 0x1f50a0u;

    // 0x1f50a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1f50a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1f50a4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1f50a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1f50a8: 0x30b3ffff  andi        $s3, $a1, 0xFFFF
    ctx->pc = 0x1f50a8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1f50ac: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1f50acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1f50b0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1f50b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1f50b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f50b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f50b8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1f50b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1f50bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f50bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f50c0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1f50c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1f50c4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1f50c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f50c8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1f50c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1f50cc: 0x260f02d  daddu       $fp, $s3, $zero
    ctx->pc = 0x1f50ccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f50d0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1f50d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1f50d4: 0x2e620007  sltiu       $v0, $s3, 0x7
    ctx->pc = 0x1f50d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1f50d8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1f50d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1f50dc: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1f50dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1f50e0: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1F50E0u;
    {
        const bool branch_taken_0x1f50e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F50E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F50E0u;
        // 0x1f50e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f50e0) {
            ctx->pc = 0x1F51E0u;
            goto label_1f51e0;
        }
    }
    ctx->pc = 0x1F50E8u;
    // 0x1f50e8: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1f50e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1f50ec: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1f50ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f50f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f50f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f50f4: 0x2455002d  addiu       $s5, $v0, 0x2D
    ctx->pc = 0x1f50f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
    // 0x1f50f8: 0x2457002f  addiu       $s7, $v0, 0x2F
    ctx->pc = 0x1f50f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 47));
    // 0x1f50fc: 0x2456002e  addiu       $s6, $v0, 0x2E
    ctx->pc = 0x1f50fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 46));
    // 0x1f5100: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F5100u;
    SET_GPR_U32(ctx, 31, 0x1F5108u);
    ctx->pc = 0x1F5104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5100u;
    // 0x1f5104: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F5100u, 0x1F5108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5108u;
label_1f5108:
    // 0x1f5108: 0x26700068  addiu       $s0, $s3, 0x68
    ctx->pc = 0x1f5108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 104));
    // 0x1f510c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f510cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5110: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f5110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5114: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F5114u;
    SET_GPR_U32(ctx, 31, 0x1F511Cu);
    ctx->pc = 0x1F5118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5114u;
    // 0x1f5118: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F5114u, 0x1F511Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F511Cu;
label_1f511c:
    // 0x1f511c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f511cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5120: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1f5120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5124: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F5124u;
    SET_GPR_U32(ctx, 31, 0x1F512Cu);
    ctx->pc = 0x1F5128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5124u;
    // 0x1f5128: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F5124u, 0x1F512Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F512Cu;
label_1f512c:
    // 0x1f512c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f512cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5130: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f5130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5134: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F5134u;
    SET_GPR_U32(ctx, 31, 0x1F513Cu);
    ctx->pc = 0x1F5138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5134u;
    // 0x1f5138: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F5134u, 0x1F513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F513Cu;
label_1f513c:
    // 0x1f513c: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F513Cu;
    {
        const bool branch_taken_0x1f513c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F513Cu;
        // 0x1f5140: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f513c) {
            ctx->pc = 0x1F51B8u;
            goto label_1f51b8;
        }
    }
    ctx->pc = 0x1F5144u;
    // 0x1f5144: 0x24100174  addiu       $s0, $zero, 0x174
    ctx->pc = 0x1f5144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
    // 0x1f5148: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x1f5148u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f514c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F514Cu;
    {
        const bool branch_taken_0x1f514c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f514c) {
            ctx->pc = 0x1F5150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F514Cu;
            // 0x1f5150: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5154u;
            goto label_1f5154;
        }
    }
    ctx->pc = 0x1F5154u;
label_1f5154:
    // 0x1f5154: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1f5154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1f5158: 0x2812  mflo        $a1
    ctx->pc = 0x1f5158u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1f515c: 0x8810  mfhi        $s1
    ctx->pc = 0x1f515cu;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1f5160: 0x2708018  mult        $s0, $s3, $s0
    ctx->pc = 0x1f5160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1f5164: 0x2604162c  addiu       $a0, $s0, 0x162C
    ctx->pc = 0x1f5164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5676));
    // 0x1f5168: 0xc0b5952  jal         func_2D6548
    ctx->pc = 0x1F5168u;
    SET_GPR_U32(ctx, 31, 0x1F5170u);
    ctx->pc = 0x1F516Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5168u;
    // 0x1f516c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x1F5168u, 0x1F5170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5170u;
label_1f5170:
    // 0x1f5170: 0x261016a8  addiu       $s0, $s0, 0x16A8
    ctx->pc = 0x1f5170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5800));
    // 0x1f5174: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f5174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5178: 0xc0b5952  jal         func_2D6548
    ctx->pc = 0x1F5178u;
    SET_GPR_U32(ctx, 31, 0x1F5180u);
    ctx->pc = 0x1F517Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5178u;
    // 0x1f517c: 0x2502021  addu        $a0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x1F5178u, 0x1F5180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5180u;
label_1f5180:
    // 0x1f5180: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f5180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5184: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f5184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5188: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F5188u;
    SET_GPR_U32(ctx, 31, 0x1F5190u);
    ctx->pc = 0x1F518Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5188u;
    // 0x1f518c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F5188u, 0x1F5190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5190u;
label_1f5190:
    // 0x1f5190: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f5190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5194: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f5194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5198: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F5198u;
    SET_GPR_U32(ctx, 31, 0x1F51A0u);
    ctx->pc = 0x1F519Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5198u;
    // 0x1f519c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F5198u, 0x1F51A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F51A0u;
label_1f51a0:
    // 0x1f51a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f51a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51a4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1f51a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51a8: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F51A8u;
    SET_GPR_U32(ctx, 31, 0x1F51B0u);
    ctx->pc = 0x1F51ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F51A8u;
    // 0x1f51ac: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F51A8u, 0x1F51B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F51B0u;
label_1f51b0:
    // 0x1f51b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F51B0u;
    {
        const bool branch_taken_0x1f51b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F51B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F51B0u;
        // 0x1f51b4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f51b0) {
            ctx->pc = 0x1F51E4u;
            goto label_1f51e4;
        }
    }
    ctx->pc = 0x1F51B8u;
label_1f51b8:
    // 0x1f51b8: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x1f51b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1f51bc: 0x2405102b  addiu       $a1, $zero, 0x102B
    ctx->pc = 0x1f51bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4139));
    // 0x1f51c0: 0x3c42018  mult        $a0, $fp, $a0
    ctx->pc = 0x1f51c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f51c4: 0x248432c0  addiu       $a0, $a0, 0x32C0
    ctx->pc = 0x1f51c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12992));
    // 0x1f51c8: 0xc0b5958  jal         func_2D6560
    ctx->pc = 0x1F51C8u;
    SET_GPR_U32(ctx, 31, 0x1F51D0u);
    ctx->pc = 0x1F51CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F51C8u;
    // 0x1f51cc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6560u, 0x1F51C8u, 0x1F51D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F51D0u;
label_1f51d0:
    // 0x1f51d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f51d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f51d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51d8: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F51D8u;
    SET_GPR_U32(ctx, 31, 0x1F51E0u);
    ctx->pc = 0x1F51DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F51D8u;
    // 0x1f51dc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F51D8u, 0x1F51E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F51E0u;
label_1f51e0:
    // 0x1f51e0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1f51e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1f51e4:
    // 0x1f51e4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1f51e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f51e8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1f51e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f51ec: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1f51ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f51f0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1f51f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f51f4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1f51f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f51f8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1f51f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f51fc: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1f51fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5200: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1f5200u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5208: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5208u;
        // 0x1f520c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5210u;
}
