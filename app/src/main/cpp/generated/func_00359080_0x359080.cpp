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

// Function: func_00359080
// Address: 0x359080 - 0x359168
void func_00359080_0x359080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00359080_0x359080");
#endif

    switch (ctx->pc) {
        case 0x359080u: goto label_359080;
        case 0x359084u: goto label_359084;
        case 0x359088u: goto label_359088;
        case 0x35908cu: goto label_35908c;
        case 0x359090u: goto label_359090;
        case 0x359094u: goto label_359094;
        case 0x359098u: goto label_359098;
        case 0x35909cu: goto label_35909c;
        case 0x3590a0u: goto label_3590a0;
        case 0x3590a4u: goto label_3590a4;
        case 0x3590a8u: goto label_3590a8;
        case 0x3590acu: goto label_3590ac;
        case 0x3590b0u: goto label_3590b0;
        case 0x3590b4u: goto label_3590b4;
        case 0x3590b8u: goto label_3590b8;
        case 0x3590bcu: goto label_3590bc;
        case 0x3590c0u: goto label_3590c0;
        case 0x3590c4u: goto label_3590c4;
        case 0x3590c8u: goto label_3590c8;
        case 0x3590ccu: goto label_3590cc;
        case 0x3590d0u: goto label_3590d0;
        case 0x3590d4u: goto label_3590d4;
        case 0x3590d8u: goto label_3590d8;
        case 0x3590dcu: goto label_3590dc;
        case 0x3590e0u: goto label_3590e0;
        case 0x3590e4u: goto label_3590e4;
        case 0x3590e8u: goto label_3590e8;
        case 0x3590ecu: goto label_3590ec;
        case 0x3590f0u: goto label_3590f0;
        case 0x3590f4u: goto label_3590f4;
        case 0x3590f8u: goto label_3590f8;
        case 0x3590fcu: goto label_3590fc;
        case 0x359100u: goto label_359100;
        case 0x359104u: goto label_359104;
        case 0x359108u: goto label_359108;
        case 0x35910cu: goto label_35910c;
        case 0x359110u: goto label_359110;
        case 0x359114u: goto label_359114;
        case 0x359118u: goto label_359118;
        case 0x35911cu: goto label_35911c;
        case 0x359120u: goto label_359120;
        case 0x359124u: goto label_359124;
        case 0x359128u: goto label_359128;
        case 0x35912cu: goto label_35912c;
        case 0x359130u: goto label_359130;
        case 0x359134u: goto label_359134;
        case 0x359138u: goto label_359138;
        case 0x35913cu: goto label_35913c;
        case 0x359140u: goto label_359140;
        case 0x359144u: goto label_359144;
        case 0x359148u: goto label_359148;
        case 0x35914cu: goto label_35914c;
        case 0x359150u: goto label_359150;
        case 0x359154u: goto label_359154;
        case 0x359158u: goto label_359158;
        case 0x35915cu: goto label_35915c;
        case 0x359160u: goto label_359160;
        case 0x359164u: goto label_359164;
        default: break;
    }

    ctx->pc = 0x359080u;

label_359080:
    // 0x359080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_359084:
    // 0x359084: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x359084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_359088:
    // 0x359088: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x359088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_35908c:
    // 0x35908c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x35908cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_359090:
    // 0x359090: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x359090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_359094:
    // 0x359094: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x359094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_359098:
    // 0x359098: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_35909c:
    // 0x35909c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35909cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3590a0:
    // 0x3590a0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3590a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3590a4:
    // 0x3590a4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3590a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3590a8:
    // 0x3590a8: 0xc0d37b2  jal         func_34DEC8
label_3590ac:
    if (ctx->pc == 0x3590ACu) {
        ctx->pc = 0x3590ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3590A8u;
        // 0x3590ac: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3590B0u;
        goto label_3590b0;
    }
    ctx->pc = 0x3590A8u;
    SET_GPR_U32(ctx, 31, 0x3590B0u);
    ctx->pc = 0x3590ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3590A8u;
    // 0x3590ac: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x3590A8u, 0x3590B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3590B0u;
label_3590b0:
    // 0x3590b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3590b4:
    if (ctx->pc == 0x3590B4u) {
        ctx->pc = 0x3590B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3590B0u;
        // 0x3590b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3590B8u;
        goto label_3590b8;
    }
    ctx->pc = 0x3590B0u;
    {
        const bool branch_taken_0x3590b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3590B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3590B0u;
        // 0x3590b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3590b0) {
            ctx->pc = 0x3590D0u;
            goto label_3590d0;
        }
    }
    ctx->pc = 0x3590B8u;
label_3590b8:
    // 0x3590b8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x3590b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_3590bc:
    // 0x3590bc: 0xc0d375c  jal         func_34DD70
label_3590c0:
    if (ctx->pc == 0x3590C0u) {
        ctx->pc = 0x3590C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3590BCu;
        // 0x3590c0: 0x34a5013a  ori         $a1, $a1, 0x13A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)314);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3590C4u;
        goto label_3590c4;
    }
    ctx->pc = 0x3590BCu;
    SET_GPR_U32(ctx, 31, 0x3590C4u);
    ctx->pc = 0x3590C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3590BCu;
    // 0x3590c0: 0x34a5013a  ori         $a1, $a1, 0x13A (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)314);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x3590BCu, 0x3590C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3590C4u;
label_3590c4:
    // 0x3590c4: 0x10000021  b           . + 4 + (0x21 << 2)
label_3590c8:
    if (ctx->pc == 0x3590C8u) {
        ctx->pc = 0x3590C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3590C4u;
        // 0x3590c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3590CCu;
        goto label_3590cc;
    }
    ctx->pc = 0x3590C4u;
    {
        const bool branch_taken_0x3590c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3590C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3590C4u;
        // 0x3590c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3590c4) {
            ctx->pc = 0x35914Cu;
            goto label_35914c;
        }
    }
    ctx->pc = 0x3590CCu;
label_3590cc:
    // 0x3590cc: 0x0  nop
    ctx->pc = 0x3590ccu;
    // NOP
label_3590d0:
    // 0x3590d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3590d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3590d4:
    // 0x3590d4: 0xc0d6486  jal         func_359218
label_3590d8:
    if (ctx->pc == 0x3590D8u) {
        ctx->pc = 0x3590D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3590D4u;
        // 0x3590d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3590DCu;
        goto label_3590dc;
    }
    ctx->pc = 0x3590D4u;
    SET_GPR_U32(ctx, 31, 0x3590DCu);
    ctx->pc = 0x3590D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3590D4u;
    // 0x3590d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359218u, 0x3590D4u, 0x3590DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3590DCu;
label_3590dc:
    // 0x3590dc: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_3590e0:
    if (ctx->pc == 0x3590E0u) {
        ctx->pc = 0x3590E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3590DCu;
        // 0x3590e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3590E4u;
        goto label_3590e4;
    }
    ctx->pc = 0x3590DCu;
    {
        const bool branch_taken_0x3590dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3590E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3590DCu;
        // 0x3590e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3590dc) {
            ctx->pc = 0x35914Cu;
            goto label_35914c;
        }
    }
    ctx->pc = 0x3590E4u;
label_3590e4:
    // 0x3590e4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3590e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3590e8:
    // 0x3590e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3590e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3590ec:
    // 0x3590ec: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3590ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3590f0:
    // 0x3590f0: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x3590f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3590f4:
    // 0x3590f4: 0xc0d70b4  jal         func_35C2D0
label_3590f8:
    if (ctx->pc == 0x3590F8u) {
        ctx->pc = 0x3590F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3590F4u;
        // 0x3590f8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3590FCu;
        goto label_3590fc;
    }
    ctx->pc = 0x3590F4u;
    SET_GPR_U32(ctx, 31, 0x3590FCu);
    ctx->pc = 0x3590F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3590F4u;
    // 0x3590f8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C2D0u, 0x3590F4u, 0x3590FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3590FCu;
label_3590fc:
    // 0x3590fc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x3590fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_359100:
    // 0x359100: 0x8c62e304  lw          $v0, -0x1CFC($v1)
    ctx->pc = 0x359100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959876)));
label_359104:
    // 0x359104: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_359108:
    if (ctx->pc == 0x359108u) {
        ctx->pc = 0x359108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359104u;
        // 0x359108: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35910Cu;
        goto label_35910c;
    }
    ctx->pc = 0x359104u;
    {
        const bool branch_taken_0x359104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x359104) {
            ctx->pc = 0x359108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359104u;
            // 0x359108: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35911Cu;
            goto label_35911c;
        }
    }
    ctx->pc = 0x35910Cu;
label_35910c:
    // 0x35910c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x35910cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_359110:
    // 0x359110: 0x40f809  jalr        $v0
label_359114:
    if (ctx->pc == 0x359114u) {
        ctx->pc = 0x359114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359110u;
        // 0x359114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359118u;
        goto label_359118;
    }
    ctx->pc = 0x359110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x359118u);
        ctx->pc = 0x359114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359110u;
        // 0x359114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359110u, 0x359118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x359118u;
label_359118:
    // 0x359118: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x359118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_35911c:
    // 0x35911c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_359120:
    if (ctx->pc == 0x359120u) {
        ctx->pc = 0x359120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35911Cu;
        // 0x359120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359124u;
        goto label_359124;
    }
    ctx->pc = 0x35911Cu;
    {
        const bool branch_taken_0x35911c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x359120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35911Cu;
        // 0x359120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35911c) {
            ctx->pc = 0x35914Cu;
            goto label_35914c;
        }
    }
    ctx->pc = 0x359124u;
label_359124:
    // 0x359124: 0x8e030968  lw          $v1, 0x968($s0)
    ctx->pc = 0x359124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
label_359128:
    // 0x359128: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_35912c:
    if (ctx->pc == 0x35912Cu) {
        ctx->pc = 0x35912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359128u;
        // 0x35912c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359130u;
        goto label_359130;
    }
    ctx->pc = 0x359128u;
    {
        const bool branch_taken_0x359128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x359128) {
            ctx->pc = 0x35912Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359128u;
            // 0x35912c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359144u;
            goto label_359144;
        }
    }
    ctx->pc = 0x359130u;
label_359130:
    // 0x359130: 0xc0d6e96  jal         func_35BA58
label_359134:
    if (ctx->pc == 0x359134u) {
        ctx->pc = 0x359138u;
        goto label_359138;
    }
    ctx->pc = 0x359130u;
    SET_GPR_U32(ctx, 31, 0x359138u);
    ctx->pc = 0x35BA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BA58u, 0x359130u, 0x359138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359138u;
label_359138:
    // 0x359138: 0x8e030968  lw          $v1, 0x968($s0)
    ctx->pc = 0x359138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
label_35913c:
    // 0x35913c: 0xfe023780  sd          $v0, 0x3780($s0)
    ctx->pc = 0x35913cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 14208), GPR_U64(ctx, 2));
label_359140:
    // 0x359140: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x359140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_359144:
    // 0x359144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x359144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_359148:
    // 0x359148: 0xae030968  sw          $v1, 0x968($s0)
    ctx->pc = 0x359148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2408), GPR_U32(ctx, 3));
label_35914c:
    // 0x35914c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35914cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_359150:
    // 0x359150: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359150u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_359154:
    // 0x359154: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x359154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_359158:
    // 0x359158: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x359158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_35915c:
    // 0x35915c: 0x3e00008  jr          $ra
label_359160:
    if (ctx->pc == 0x359160u) {
        ctx->pc = 0x359160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35915Cu;
        // 0x359160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359164u;
        goto label_359164;
    }
    ctx->pc = 0x35915Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35915Cu;
        // 0x359160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35915Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359164u;
label_359164:
    // 0x359164: 0x0  nop
    ctx->pc = 0x359164u;
    // NOP
    ctx->pc = 0x359168u;
}
