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

// Function: func_001DA4E8
// Address: 0x1da4e8 - 0x1da670
void func_001DA4E8_0x1da4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DA4E8_0x1da4e8");
#endif

    switch (ctx->pc) {
        case 0x1da580u: goto label_1da580;
        case 0x1da58cu: goto label_1da58c;
        case 0x1da598u: goto label_1da598;
        case 0x1da5a4u: goto label_1da5a4;
        case 0x1da5b0u: goto label_1da5b0;
        case 0x1da5bcu: goto label_1da5bc;
        case 0x1da5c8u: goto label_1da5c8;
        case 0x1da614u: goto label_1da614;
        case 0x1da620u: goto label_1da620;
        case 0x1da62cu: goto label_1da62c;
        case 0x1da640u: goto label_1da640;
        case 0x1da64cu: goto label_1da64c;
        default: break;
    }

    ctx->pc = 0x1da4e8u;

    // 0x1da4e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1da4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1da4ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1da4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da4f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1da4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1da4f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1da4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1da4f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1da4f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da500: 0x92233025  lbu         $v1, 0x3025($s1)
    ctx->pc = 0x1da500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1da504: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DA504u;
    {
        const bool branch_taken_0x1da504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DA508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA504u;
        // 0x1da508: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da504) {
            ctx->pc = 0x1DA550u;
            goto label_1da550;
        }
    }
    ctx->pc = 0x1DA50Cu;
    // 0x1da50c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA50Cu;
    {
        const bool branch_taken_0x1da50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da50c) {
            ctx->pc = 0x1DA510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA50Cu;
            // 0x1da510: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA524u;
            goto label_1da524;
        }
    }
    ctx->pc = 0x1DA514u;
    // 0x1da514: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA514u;
    {
        const bool branch_taken_0x1da514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA514u;
        // 0x1da518: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da514) {
            ctx->pc = 0x1DA534u;
            goto label_1da534;
        }
    }
    ctx->pc = 0x1DA51Cu;
    // 0x1da51c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1DA51Cu;
    {
        const bool branch_taken_0x1da51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA51Cu;
        // 0x1da520: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da51c) {
            ctx->pc = 0x1DA660u;
            goto label_1da660;
        }
    }
    ctx->pc = 0x1DA524u;
label_1da524:
    // 0x1da524: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1DA524u;
    {
        const bool branch_taken_0x1da524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DA528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA524u;
        // 0x1da528: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da524) {
            ctx->pc = 0x1DA5E0u;
            goto label_1da5e0;
        }
    }
    ctx->pc = 0x1DA52Cu;
    // 0x1da52c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1DA52Cu;
    {
        const bool branch_taken_0x1da52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA52Cu;
        // 0x1da530: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da52c) {
            ctx->pc = 0x1DA660u;
            goto label_1da660;
        }
    }
    ctx->pc = 0x1DA534u;
label_1da534:
    // 0x1da534: 0x92233025  lbu         $v1, 0x3025($s1)
    ctx->pc = 0x1da534u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1da538: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1da538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1da53c: 0xae223028  sw          $v0, 0x3028($s1)
    ctx->pc = 0x1da53cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 2));
    // 0x1da540: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1da540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1da544: 0xa2203045  sb          $zero, 0x3045($s1)
    ctx->pc = 0x1da544u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12357), (uint8_t)GPR_U32(ctx, 0));
    // 0x1da548: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1DA548u;
    {
        const bool branch_taken_0x1da548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA548u;
        // 0x1da54c: 0xa2233025  sb          $v1, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da548) {
            ctx->pc = 0x1DA658u;
            goto label_1da658;
        }
    }
    ctx->pc = 0x1DA550u;
label_1da550:
    // 0x1da550: 0x8e223028  lw          $v0, 0x3028($s1)
    ctx->pc = 0x1da550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12328)));
    // 0x1da554: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA554u;
    {
        const bool branch_taken_0x1da554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA554u;
        // 0x1da558: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da554) {
            ctx->pc = 0x1DA564u;
            goto label_1da564;
        }
    }
    ctx->pc = 0x1DA55Cu;
    // 0x1da55c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA55Cu;
    {
        const bool branch_taken_0x1da55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA55Cu;
        // 0x1da560: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da55c) {
            ctx->pc = 0x1DA56Cu;
            goto label_1da56c;
        }
    }
    ctx->pc = 0x1DA564u;
label_1da564:
    // 0x1da564: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1da564u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da568: 0xae223028  sw          $v0, 0x3028($s1)
    ctx->pc = 0x1da568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 2));
label_1da56c:
    // 0x1da56c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1da56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1da570: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1DA570u;
    {
        const bool branch_taken_0x1da570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA570u;
        // 0x1da574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da570) {
            ctx->pc = 0x1DA658u;
            goto label_1da658;
        }
    }
    ctx->pc = 0x1DA578u;
    // 0x1da578: 0xc0779f2  jal         func_1DE7C8
    ctx->pc = 0x1DA578u;
    SET_GPR_U32(ctx, 31, 0x1DA580u);
    ctx->pc = 0x1DA57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA578u;
    // 0x1da57c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE7C8u, 0x1DA578u, 0x1DA580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA580u;
label_1da580:
    // 0x1da580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1da580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da584: 0xc077822  jal         func_1DE088
    ctx->pc = 0x1DA584u;
    SET_GPR_U32(ctx, 31, 0x1DA58Cu);
    ctx->pc = 0x1DA588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA584u;
    // 0x1da588: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE088u, 0x1DA584u, 0x1DA58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA58Cu;
label_1da58c:
    // 0x1da58c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1da58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da590: 0xc07785c  jal         func_1DE170
    ctx->pc = 0x1DA590u;
    SET_GPR_U32(ctx, 31, 0x1DA598u);
    ctx->pc = 0x1DA594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA590u;
    // 0x1da594: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE170u, 0x1DA590u, 0x1DA598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA598u;
label_1da598:
    // 0x1da598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1da598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da59c: 0xc077896  jal         func_1DE258
    ctx->pc = 0x1DA59Cu;
    SET_GPR_U32(ctx, 31, 0x1DA5A4u);
    ctx->pc = 0x1DA5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA59Cu;
    // 0x1da5a0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE258u, 0x1DA59Cu, 0x1DA5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA5A4u;
label_1da5a4:
    // 0x1da5a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1da5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da5a8: 0xc0778d0  jal         func_1DE340
    ctx->pc = 0x1DA5A8u;
    SET_GPR_U32(ctx, 31, 0x1DA5B0u);
    ctx->pc = 0x1DA5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA5A8u;
    // 0x1da5ac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE340u, 0x1DA5A8u, 0x1DA5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA5B0u;
label_1da5b0:
    // 0x1da5b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1da5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da5b4: 0xc07790a  jal         func_1DE428
    ctx->pc = 0x1DA5B4u;
    SET_GPR_U32(ctx, 31, 0x1DA5BCu);
    ctx->pc = 0x1DA5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA5B4u;
    // 0x1da5b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE428u, 0x1DA5B4u, 0x1DA5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA5BCu;
label_1da5bc:
    // 0x1da5bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1da5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da5c0: 0xc07793e  jal         func_1DE4F8
    ctx->pc = 0x1DA5C0u;
    SET_GPR_U32(ctx, 31, 0x1DA5C8u);
    ctx->pc = 0x1DA5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA5C0u;
    // 0x1da5c4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE4F8u, 0x1DA5C0u, 0x1DA5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA5C8u;
label_1da5c8:
    // 0x1da5c8: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1da5c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1da5cc: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1da5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1da5d0: 0xae233028  sw          $v1, 0x3028($s1)
    ctx->pc = 0x1da5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 3));
    // 0x1da5d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1da5d8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1DA5D8u;
    {
        const bool branch_taken_0x1da5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA5D8u;
        // 0x1da5dc: 0xa2223025  sb          $v0, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da5d8) {
            ctx->pc = 0x1DA658u;
            goto label_1da658;
        }
    }
    ctx->pc = 0x1DA5E0u;
label_1da5e0:
    // 0x1da5e0: 0x8e223028  lw          $v0, 0x3028($s1)
    ctx->pc = 0x1da5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12328)));
    // 0x1da5e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA5E4u;
    {
        const bool branch_taken_0x1da5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA5E4u;
        // 0x1da5e8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da5e4) {
            ctx->pc = 0x1DA5F4u;
            goto label_1da5f4;
        }
    }
    ctx->pc = 0x1DA5ECu;
    // 0x1da5ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA5ECu;
    {
        const bool branch_taken_0x1da5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA5ECu;
        // 0x1da5f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da5ec) {
            ctx->pc = 0x1DA5FCu;
            goto label_1da5fc;
        }
    }
    ctx->pc = 0x1DA5F4u;
label_1da5f4:
    // 0x1da5f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1da5f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da5f8: 0xae223028  sw          $v0, 0x3028($s1)
    ctx->pc = 0x1da5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 2));
label_1da5fc:
    // 0x1da5fc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1da5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1da600: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DA600u;
    {
        const bool branch_taken_0x1da600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA600u;
        // 0x1da604: 0x263025b0  addiu       $s0, $s1, 0x25B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da600) {
            ctx->pc = 0x1DA658u;
            goto label_1da658;
        }
    }
    ctx->pc = 0x1DA608u;
    // 0x1da608: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1da608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1da60c: 0xc077cd6  jal         func_1DF358
    ctx->pc = 0x1DA60Cu;
    SET_GPR_U32(ctx, 31, 0x1DA614u);
    ctx->pc = 0x1DA610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA60Cu;
    // 0x1da610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF358u, 0x1DA60Cu, 0x1DA614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA614u;
label_1da614:
    // 0x1da614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da618: 0xc077c66  jal         func_1DF198
    ctx->pc = 0x1DA618u;
    SET_GPR_U32(ctx, 31, 0x1DA620u);
    ctx->pc = 0x1DA61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA618u;
    // 0x1da61c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF198u, 0x1DA618u, 0x1DA620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA620u;
label_1da620:
    // 0x1da620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da624: 0xc077c9e  jal         func_1DF278
    ctx->pc = 0x1DA624u;
    SET_GPR_U32(ctx, 31, 0x1DA62Cu);
    ctx->pc = 0x1DA628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA624u;
    // 0x1da628: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF278u, 0x1DA624u, 0x1DA62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA62Cu;
label_1da62c:
    // 0x1da62c: 0x8e223038  lw          $v0, 0x3038($s1)
    ctx->pc = 0x1da62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12344)));
    // 0x1da630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da634: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1da634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da638: 0xc077b90  jal         func_1DEE40
    ctx->pc = 0x1DA638u;
    SET_GPR_U32(ctx, 31, 0x1DA640u);
    ctx->pc = 0x1DA63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA638u;
    // 0x1da63c: 0xae223034  sw          $v0, 0x3034($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12340), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE40u, 0x1DA638u, 0x1DA640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA640u;
label_1da640:
    // 0x1da640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da644: 0xc077d0a  jal         func_1DF428
    ctx->pc = 0x1DA644u;
    SET_GPR_U32(ctx, 31, 0x1DA64Cu);
    ctx->pc = 0x1DA648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA644u;
    // 0x1da648: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF428u, 0x1DA644u, 0x1DA64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA64Cu;
label_1da64c:
    // 0x1da64c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1da64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1da650: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1da650u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1da654: 0xa2223024  sb          $v0, 0x3024($s1)
    ctx->pc = 0x1da654u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 2));
label_1da658:
    // 0x1da658: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1da658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da65c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1da65cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1da660:
    // 0x1da660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da664: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA664u;
        // 0x1da668: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA66Cu;
    // 0x1da66c: 0x0  nop
    ctx->pc = 0x1da66cu;
    // NOP
    ctx->pc = 0x1da670u;
}
