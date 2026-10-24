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

// Function: func_002C90A0
// Address: 0x2c90a0 - 0x2c97c8
void func_002C90A0_0x2c90a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C90A0_0x2c90a0");
#endif

    switch (ctx->pc) {
        case 0x2c90dcu: goto label_2c90dc;
        case 0x2c90f8u: goto label_2c90f8;
        case 0x2c9148u: goto label_2c9148;
        case 0x2c9194u: goto label_2c9194;
        case 0x2c91b0u: goto label_2c91b0;
        case 0x2c91bcu: goto label_2c91bc;
        case 0x2c91fcu: goto label_2c91fc;
        case 0x2c920cu: goto label_2c920c;
        case 0x2c9250u: goto label_2c9250;
        case 0x2c9290u: goto label_2c9290;
        case 0x2c92acu: goto label_2c92ac;
        case 0x2c92b8u: goto label_2c92b8;
        case 0x2c92f0u: goto label_2c92f0;
        case 0x2c930cu: goto label_2c930c;
        case 0x2c9320u: goto label_2c9320;
        case 0x2c9360u: goto label_2c9360;
        case 0x2c937cu: goto label_2c937c;
        case 0x2c9388u: goto label_2c9388;
        case 0x2c93b8u: goto label_2c93b8;
        case 0x2c93dcu: goto label_2c93dc;
        case 0x2c93f0u: goto label_2c93f0;
        case 0x2c9410u: goto label_2c9410;
        case 0x2c941cu: goto label_2c941c;
        case 0x2c946cu: goto label_2c946c;
        case 0x2c9488u: goto label_2c9488;
        case 0x2c9498u: goto label_2c9498;
        case 0x2c94b4u: goto label_2c94b4;
        case 0x2c94e8u: goto label_2c94e8;
        case 0x2c95a8u: goto label_2c95a8;
        case 0x2c95c8u: goto label_2c95c8;
        case 0x2c9618u: goto label_2c9618;
        case 0x2c966cu: goto label_2c966c;
        case 0x2c96ecu: goto label_2c96ec;
        case 0x2c9740u: goto label_2c9740;
        default: break;
    }

    ctx->pc = 0x2c90a0u;

    // 0x2c90a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c90a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c90a4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2c90a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2c90a8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2c90a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2c90ac: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2c90acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2c90b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c90b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c90b4: 0x30b400ff  andi        $s4, $a1, 0xFF
    ctx->pc = 0x2c90b4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c90b8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2c90b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2c90bc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2c90bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2c90c0: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x2c90c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x2c90c4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2c90c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2c90c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c90c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c90cc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2c90ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2c90d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c90d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c90d4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2C90D4u;
    SET_GPR_U32(ctx, 31, 0x2C90DCu);
    ctx->pc = 0x2C90D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C90D4u;
    // 0x2c90d8: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2C90D4u, 0x2C90DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C90DCu;
label_2c90dc:
    // 0x2c90dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c90dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c90e0: 0x106001b1  beqz        $v1, . + 4 + (0x1B1 << 2)
    ctx->pc = 0x2C90E0u;
    {
        const bool branch_taken_0x2c90e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C90E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C90E0u;
        // 0x2c90e4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c90e0) {
            ctx->pc = 0x2C97A8u;
            goto label_2c97a8;
        }
    }
    ctx->pc = 0x2C90E8u;
    // 0x2c90e8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2c90e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2c90ec: 0x1040013b  beqz        $v0, . + 4 + (0x13B << 2)
    ctx->pc = 0x2C90ECu;
    {
        const bool branch_taken_0x2c90ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C90F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C90ECu;
        // 0x2c90f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c90ec) {
            ctx->pc = 0x2C95DCu;
            goto label_2c95dc;
        }
    }
    ctx->pc = 0x2C90F4u;
    // 0x2c90f4: 0x2e820011  sltiu       $v0, $s4, 0x11
    ctx->pc = 0x2c90f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_2c90f8:
    // 0x2c90f8: 0x10400133  beqz        $v0, . + 4 + (0x133 << 2)
    ctx->pc = 0x2C90F8u;
    {
        const bool branch_taken_0x2c90f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C90FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C90F8u;
        // 0x2c90fc: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c90f8) {
            ctx->pc = 0x2C95C8u;
            goto label_2c95c8;
        }
    }
    ctx->pc = 0x2C9100u;
    // 0x2c9100: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x2c9100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2c9104: 0x2442cc50  addiu       $v0, $v0, -0x33B0
    ctx->pc = 0x2c9104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954064));
    // 0x2c9108: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c9108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c910c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c910cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c9110: 0x800008  jr          $a0
    ctx->pc = 0x2C9110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C9118u: goto label_2c9118;
            case 0x2C9164u: goto label_2c9164;
            case 0x2C9260u: goto label_2c9260;
            case 0x2C9330u: goto label_2c9330;
            case 0x2C943Cu: goto label_2c943c;
            case 0x2C94BCu: goto label_2c94bc;
            case 0x2C94D0u: goto label_2c94d0;
            case 0x2C94F0u: goto label_2c94f0;
            case 0x2C9504u: goto label_2c9504;
            case 0x2C9518u: goto label_2c9518;
            case 0x2C952Cu: goto label_2c952c;
            case 0x2C9540u: goto label_2c9540;
            case 0x2C9554u: goto label_2c9554;
            case 0x2C9568u: goto label_2c9568;
            case 0x2C957Cu: goto label_2c957c;
            case 0x2C9590u: goto label_2c9590;
            case 0x2C95B0u: goto label_2c95b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9110u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C9118u;
label_2c9118:
    // 0x2c9118: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2c9118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2c911c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c911cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c9120: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x2c9120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c9124: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c9124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c9128: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2c9128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2c912c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c912cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c9130: 0x104000b7  beqz        $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x2C9130u;
    {
        const bool branch_taken_0x2c9130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9130u;
        // 0x2c9134: 0x3c150057  lui         $s5, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9130) {
            ctx->pc = 0x2C9410u;
            goto label_2c9410;
        }
    }
    ctx->pc = 0x2C9138u;
    // 0x2c9138: 0x26b29b70  addiu       $s2, $s5, -0x6490
    ctx->pc = 0x2c9138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
    // 0x2c913c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c913cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9140: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x2C9140u;
    SET_GPR_U32(ctx, 31, 0x2C9148u);
    ctx->pc = 0x2C9144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9140u;
    // 0x2c9144: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x2C9140u, 0x2C9148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9148u;
label_2c9148:
    // 0x2c9148: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c9148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c914c: 0x144300b1  bne         $v0, $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x2C914Cu;
    {
        const bool branch_taken_0x2c914c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C9150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C914Cu;
        // 0x2c9150: 0x26a49b70  addiu       $a0, $s5, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c914c) {
            ctx->pc = 0x2C9414u;
            goto label_2c9414;
        }
    }
    ctx->pc = 0x2C9154u;
    // 0x2c9154: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c9154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9158: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c9158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c915c: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x2C915Cu;
    {
        const bool branch_taken_0x2c915c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C915Cu;
        // 0x2c9160: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c915c) {
            ctx->pc = 0x2C9408u;
            goto label_2c9408;
        }
    }
    ctx->pc = 0x2C9164u;
label_2c9164:
    // 0x2c9164: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2c9164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2c9168: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c9168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c916c: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x2c916cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c9170: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c9170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c9174: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2c9174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2c9178: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c9178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c917c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C917Cu;
    {
        const bool branch_taken_0x2c917c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C917Cu;
        // 0x2c9180: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c917c) {
            ctx->pc = 0x2C91B0u;
            goto label_2c91b0;
        }
    }
    ctx->pc = 0x2C9184u;
    // 0x2c9184: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c9184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9188: 0x24529b70  addiu       $s2, $v0, -0x6490
    ctx->pc = 0x2c9188u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x2c918c: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x2C918Cu;
    SET_GPR_U32(ctx, 31, 0x2C9194u);
    ctx->pc = 0x2C9190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C918Cu;
    // 0x2c9190: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x2C918Cu, 0x2C9194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9194u;
label_2c9194:
    // 0x2c9194: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c9194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c9198: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9198u;
    {
        const bool branch_taken_0x2c9198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9198u;
        // 0x2c919c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9198) {
            ctx->pc = 0x2C91B4u;
            goto label_2c91b4;
        }
    }
    ctx->pc = 0x2C91A0u;
    // 0x2c91a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c91a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c91a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c91a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c91a8: 0xc07ebc8  jal         func_1FAF20
    ctx->pc = 0x2C91A8u;
    SET_GPR_U32(ctx, 31, 0x2C91B0u);
    ctx->pc = 0x2C91ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C91A8u;
    // 0x2c91ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF20u, 0x2C91A8u, 0x2C91B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C91B0u;
label_2c91b0:
    // 0x2c91b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c91b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c91b4:
    // 0x2c91b4: 0xc0b25f2  jal         func_2C97C8
    ctx->pc = 0x2C91B4u;
    SET_GPR_U32(ctx, 31, 0x2C91BCu);
    ctx->pc = 0x2C91B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C91B4u;
    // 0x2c91b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C97C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C97C8u, 0x2C91B4u, 0x2C91BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C91BCu;
label_2c91bc:
    // 0x2c91bc: 0x54400103  bnel        $v0, $zero, . + 4 + (0x103 << 2)
    ctx->pc = 0x2C91BCu;
    {
        const bool branch_taken_0x2c91bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c91bc) {
            ctx->pc = 0x2C91C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C91BCu;
            // 0x2c91c0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C95CCu;
            goto label_2c95cc;
        }
    }
    ctx->pc = 0x2C91C4u;
    // 0x2c91c4: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2c91c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2c91c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c91c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c91cc: 0x2029818  mult        $s3, $s0, $v0
    ctx->pc = 0x2c91ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x2c91d0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x2c91d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2c91d4: 0x9062000c  lbu         $v0, 0xC($v1)
    ctx->pc = 0x2c91d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2c91d8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c91d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c91dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c91dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c91e0: 0x104000f9  beqz        $v0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x2C91E0u;
    {
        const bool branch_taken_0x2c91e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C91E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C91E0u;
        // 0x2c91e4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c91e0) {
            ctx->pc = 0x2C95C8u;
            goto label_2c95c8;
        }
    }
    ctx->pc = 0x2C91E8u;
    // 0x2c91e8: 0x94650012  lhu         $a1, 0x12($v1)
    ctx->pc = 0x2c91e8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x2c91ec: 0x24529b70  addiu       $s2, $v0, -0x6490
    ctx->pc = 0x2c91ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x2c91f0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c91f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c91f4: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x2C91F4u;
    SET_GPR_U32(ctx, 31, 0x2C91FCu);
    ctx->pc = 0x2C91F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C91F4u;
    // 0x2c91f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x2C91F4u, 0x2C91FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C91FCu;
label_2c91fc:
    // 0x2c91fc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C91FCu;
    {
        const bool branch_taken_0x2c91fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C91FCu;
        // 0x2c9200: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c91fc) {
            ctx->pc = 0x2C922Cu;
            goto label_2c922c;
        }
    }
    ctx->pc = 0x2C9204u;
    // 0x2c9204: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x2C9204u;
    SET_GPR_U32(ctx, 31, 0x2C920Cu);
    ctx->pc = 0x2C9208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9204u;
    // 0x2c9208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x2C9204u, 0x2C920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C920Cu;
label_2c920c:
    // 0x2c920c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C920Cu;
    {
        const bool branch_taken_0x2c920c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C920Cu;
        // 0x2c9210: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c920c) {
            ctx->pc = 0x2C922Cu;
            goto label_2c922c;
        }
    }
    ctx->pc = 0x2C9214u;
    // 0x2c9214: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c9214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c9218: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2c9218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2c921c: 0x94430012  lhu         $v1, 0x12($v0)
    ctx->pc = 0x2c921cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x2c9220: 0x546000ea  bnel        $v1, $zero, . + 4 + (0xEA << 2)
    ctx->pc = 0x2C9220u;
    {
        const bool branch_taken_0x2c9220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9220) {
            ctx->pc = 0x2C9224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9220u;
            // 0x2c9224: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C95CCu;
            goto label_2c95cc;
        }
    }
    ctx->pc = 0x2C9228u;
    // 0x2c9228: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2c9228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_2c922c:
    // 0x2c922c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c922cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c9230: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x2c9230u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c9234: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2c9234u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c9238: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c9238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c923c: 0x8445001a  lh          $a1, 0x1A($v0)
    ctx->pc = 0x2c923cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x2c9240: 0x10b20079  beq         $a1, $s2, . + 4 + (0x79 << 2)
    ctx->pc = 0x2C9240u;
    {
        const bool branch_taken_0x2c9240 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 18));
        ctx->pc = 0x2C9244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9240u;
        // 0x2c9244: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9240) {
            ctx->pc = 0x2C9428u;
            goto label_2c9428;
        }
    }
    ctx->pc = 0x2C9248u;
    // 0x2c9248: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x2C9248u;
    SET_GPR_U32(ctx, 31, 0x2C9250u);
    ctx->pc = 0x2C924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9248u;
    // 0x2c924c: 0x26a49b70  addiu       $a0, $s5, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x2C9248u, 0x2C9250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9250u;
label_2c9250:
    // 0x2c9250: 0x105200dd  beq         $v0, $s2, . + 4 + (0xDD << 2)
    ctx->pc = 0x2C9250u;
    {
        const bool branch_taken_0x2c9250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2C9254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9250u;
        // 0x2c9254: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9250) {
            ctx->pc = 0x2C95C8u;
            goto label_2c95c8;
        }
    }
    ctx->pc = 0x2C9258u;
    // 0x2c9258: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2C9258u;
    {
        const bool branch_taken_0x2c9258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9258u;
        // 0x2c925c: 0x24430001  addiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9258) {
            ctx->pc = 0x2C942Cu;
            goto label_2c942c;
        }
    }
    ctx->pc = 0x2C9260u;
label_2c9260:
    // 0x2c9260: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2c9260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2c9264: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c9264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c9268: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x2c9268u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c926c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c926cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c9270: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2c9270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2c9274: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c9274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c9278: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C9278u;
    {
        const bool branch_taken_0x2c9278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9278u;
        // 0x2c927c: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9278) {
            ctx->pc = 0x2C92ACu;
            goto label_2c92ac;
        }
    }
    ctx->pc = 0x2C9280u;
    // 0x2c9280: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c9280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9284: 0x24529b70  addiu       $s2, $v0, -0x6490
    ctx->pc = 0x2c9284u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x2c9288: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x2C9288u;
    SET_GPR_U32(ctx, 31, 0x2C9290u);
    ctx->pc = 0x2C928Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9288u;
    // 0x2c928c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x2C9288u, 0x2C9290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9290u;
label_2c9290:
    // 0x2c9290: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c9290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c9294: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9294u;
    {
        const bool branch_taken_0x2c9294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9294u;
        // 0x2c9298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9294) {
            ctx->pc = 0x2C92B0u;
            goto label_2c92b0;
        }
    }
    ctx->pc = 0x2C929Cu;
    // 0x2c929c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c929cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c92a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c92a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c92a4: 0xc07ebc8  jal         func_1FAF20
    ctx->pc = 0x2C92A4u;
    SET_GPR_U32(ctx, 31, 0x2C92ACu);
    ctx->pc = 0x2C92A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C92A4u;
    // 0x2c92a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF20u, 0x2C92A4u, 0x2C92ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C92ACu;
label_2c92ac:
    // 0x2c92ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c92acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c92b0:
    // 0x2c92b0: 0xc0b25f2  jal         func_2C97C8
    ctx->pc = 0x2C92B0u;
    SET_GPR_U32(ctx, 31, 0x2C92B8u);
    ctx->pc = 0x2C92B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C92B0u;
    // 0x2c92b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C97C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C97C8u, 0x2C92B0u, 0x2C92B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C92B8u;
label_2c92b8:
    // 0x2c92b8: 0x544000c4  bnel        $v0, $zero, . + 4 + (0xC4 << 2)
    ctx->pc = 0x2C92B8u;
    {
        const bool branch_taken_0x2c92b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c92b8) {
            ctx->pc = 0x2C92BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C92B8u;
            // 0x2c92bc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C95CCu;
            goto label_2c95cc;
        }
    }
    ctx->pc = 0x2C92C0u;
    // 0x2c92c0: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2c92c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2c92c4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c92c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c92c8: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x2c92c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c92cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c92ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c92d0: 0x9062000c  lbu         $v0, 0xC($v1)
    ctx->pc = 0x2c92d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2c92d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c92d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c92d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c92d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c92dc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C92DCu;
    {
        const bool branch_taken_0x2c92dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C92E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C92DCu;
        // 0x2c92e0: 0x3c150057  lui         $s5, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c92dc) {
            ctx->pc = 0x2C92FCu;
            goto label_2c92fc;
        }
    }
    ctx->pc = 0x2C92E4u;
    // 0x2c92e4: 0x26a49b70  addiu       $a0, $s5, -0x6490
    ctx->pc = 0x2c92e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
    // 0x2c92e8: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x2C92E8u;
    SET_GPR_U32(ctx, 31, 0x2C92F0u);
    ctx->pc = 0x2C92ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C92E8u;
    // 0x2c92ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x2C92E8u, 0x2C92F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C92F0u;
label_2c92f0:
    // 0x2c92f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c92f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c92f4: 0x544300b5  bnel        $v0, $v1, . + 4 + (0xB5 << 2)
    ctx->pc = 0x2C92F4u;
    {
        const bool branch_taken_0x2c92f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c92f4) {
            ctx->pc = 0x2C92F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C92F4u;
            // 0x2c92f8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C95CCu;
            goto label_2c95cc;
        }
    }
    ctx->pc = 0x2C92FCu;
label_2c92fc:
    // 0x2c92fc: 0x26b29b70  addiu       $s2, $s5, -0x6490
    ctx->pc = 0x2c92fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
    // 0x2c9300: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c9300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9304: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x2C9304u;
    SET_GPR_U32(ctx, 31, 0x2C930Cu);
    ctx->pc = 0x2C9308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9304u;
    // 0x2c9308: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x2C9304u, 0x2C930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C930Cu;
label_2c930c:
    // 0x2c930c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c930cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9310: 0x10430044  beq         $v0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2C9310u;
    {
        const bool branch_taken_0x2c9310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C9314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9310u;
        // 0x2c9314: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9310) {
            ctx->pc = 0x2C9424u;
            goto label_2c9424;
        }
    }
    ctx->pc = 0x2C9318u;
    // 0x2c9318: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x2C9318u;
    SET_GPR_U32(ctx, 31, 0x2C9320u);
    ctx->pc = 0x2C931Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9318u;
    // 0x2c931c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x2C9318u, 0x2C9320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9320u;
label_2c9320:
    // 0x2c9320: 0x544000aa  bnel        $v0, $zero, . + 4 + (0xAA << 2)
    ctx->pc = 0x2C9320u;
    {
        const bool branch_taken_0x2c9320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9320) {
            ctx->pc = 0x2C9324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9320u;
            // 0x2c9324: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C95CCu;
            goto label_2c95cc;
        }
    }
    ctx->pc = 0x2C9328u;
    // 0x2c9328: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2C9328u;
    {
        const bool branch_taken_0x2c9328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9328u;
        // 0x2c932c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9328) {
            ctx->pc = 0x2C9428u;
            goto label_2c9428;
        }
    }
    ctx->pc = 0x2C9330u;
label_2c9330:
    // 0x2c9330: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2c9330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2c9334: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c9334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c9338: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x2c9338u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c933c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c933cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c9340: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2c9340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2c9344: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c9344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c9348: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C9348u;
    {
        const bool branch_taken_0x2c9348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9348u;
        // 0x2c934c: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9348) {
            ctx->pc = 0x2C937Cu;
            goto label_2c937c;
        }
    }
    ctx->pc = 0x2C9350u;
    // 0x2c9350: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c9350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9354: 0x24529b70  addiu       $s2, $v0, -0x6490
    ctx->pc = 0x2c9354u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x2c9358: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x2C9358u;
    SET_GPR_U32(ctx, 31, 0x2C9360u);
    ctx->pc = 0x2C935Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9358u;
    // 0x2c935c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x2C9358u, 0x2C9360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9360u;
label_2c9360:
    // 0x2c9360: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c9360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c9364: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9364u;
    {
        const bool branch_taken_0x2c9364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C9368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9364u;
        // 0x2c9368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9364) {
            ctx->pc = 0x2C9380u;
            goto label_2c9380;
        }
    }
    ctx->pc = 0x2C936Cu;
    // 0x2c936c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c936cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9370: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c9370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9374: 0xc07ebc8  jal         func_1FAF20
    ctx->pc = 0x2C9374u;
    SET_GPR_U32(ctx, 31, 0x2C937Cu);
    ctx->pc = 0x2C9378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9374u;
    // 0x2c9378: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF20u, 0x2C9374u, 0x2C937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C937Cu;
label_2c937c:
    // 0x2c937c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c937cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c9380:
    // 0x2c9380: 0xc0b25f2  jal         func_2C97C8
    ctx->pc = 0x2C9380u;
    SET_GPR_U32(ctx, 31, 0x2C9388u);
    ctx->pc = 0x2C9384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9380u;
    // 0x2c9384: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C97C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C97C8u, 0x2C9380u, 0x2C9388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9388u;
label_2c9388:
    // 0x2c9388: 0x54400090  bnel        $v0, $zero, . + 4 + (0x90 << 2)
    ctx->pc = 0x2C9388u;
    {
        const bool branch_taken_0x2c9388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9388) {
            ctx->pc = 0x2C938Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9388u;
            // 0x2c938c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C95CCu;
            goto label_2c95cc;
        }
    }
    ctx->pc = 0x2C9390u;
    // 0x2c9390: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2c9390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2c9394: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2c9394u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c9398: 0x2039018  mult        $s2, $s0, $v1
    ctx->pc = 0x2c9398u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x2c939c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2c939cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2c93a0: 0x24539b70  addiu       $s3, $v0, -0x6490
    ctx->pc = 0x2c93a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x2c93a4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c93a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c93a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c93a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c93ac: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x2c93acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x2c93b0: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x2C93B0u;
    SET_GPR_U32(ctx, 31, 0x2C93B8u);
    ctx->pc = 0x2C93B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C93B0u;
    // 0x2c93b4: 0x94c50012  lhu         $a1, 0x12($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x2C93B0u, 0x2C93B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C93B8u;
label_2c93b8:
    // 0x2c93b8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2C93B8u;
    {
        const bool branch_taken_0x2c93b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c93b8) {
            ctx->pc = 0x2C93BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C93B8u;
            // 0x2c93bc: 0x26b29b70  addiu       $s2, $s5, -0x6490 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C93E4u;
            goto label_2c93e4;
        }
    }
    ctx->pc = 0x2C93C0u;
    // 0x2c93c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c93c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c93c4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2c93c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2c93c8: 0x94430012  lhu         $v1, 0x12($v0)
    ctx->pc = 0x2c93c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x2c93cc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C93CCu;
    {
        const bool branch_taken_0x2c93cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C93D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C93CCu;
        // 0x2c93d0: 0x26b29b70  addiu       $s2, $s5, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c93cc) {
            ctx->pc = 0x2C93E4u;
            goto label_2c93e4;
        }
    }
    ctx->pc = 0x2C93D4u;
    // 0x2c93d4: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x2C93D4u;
    SET_GPR_U32(ctx, 31, 0x2C93DCu);
    ctx->pc = 0x2C93D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C93D4u;
    // 0x2c93d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x2C93D4u, 0x2C93DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C93DCu;
label_2c93dc:
    // 0x2c93dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C93DCu;
    {
        const bool branch_taken_0x2c93dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C93E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C93DCu;
        // 0x2c93e0: 0x26b29b70  addiu       $s2, $s5, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c93dc) {
            ctx->pc = 0x2C9410u;
            goto label_2c9410;
        }
    }
    ctx->pc = 0x2C93E4u;
label_2c93e4:
    // 0x2c93e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c93e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c93e8: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x2C93E8u;
    SET_GPR_U32(ctx, 31, 0x2C93F0u);
    ctx->pc = 0x2C93ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C93E8u;
    // 0x2c93ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x2C93E8u, 0x2C93F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C93F0u;
label_2c93f0:
    // 0x2c93f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c93f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c93f4: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C93F4u;
    {
        const bool branch_taken_0x2c93f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C93F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C93F4u;
        // 0x2c93f8: 0x26a49b70  addiu       $a0, $s5, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c93f4) {
            ctx->pc = 0x2C9414u;
            goto label_2c9414;
        }
    }
    ctx->pc = 0x2C93FCu;
    // 0x2c93fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c93fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9400: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c9400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9404: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c9404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c9408:
    // 0x2c9408: 0xc07ebc8  jal         func_1FAF20
    ctx->pc = 0x2C9408u;
    SET_GPR_U32(ctx, 31, 0x2C9410u);
    ctx->pc = 0x1FAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF20u, 0x2C9408u, 0x2C9410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9410u;
label_2c9410:
    // 0x2c9410: 0x26a49b70  addiu       $a0, $s5, -0x6490
    ctx->pc = 0x2c9410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
label_2c9414:
    // 0x2c9414: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x2C9414u;
    SET_GPR_U32(ctx, 31, 0x2C941Cu);
    ctx->pc = 0x2C9418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9414u;
    // 0x2c9418: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x2C9414u, 0x2C941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C941Cu;
label_2c941c:
    // 0x2c941c: 0x442006b  bltzl       $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2C941Cu;
    {
        const bool branch_taken_0x2c941c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2c941c) {
            ctx->pc = 0x2C9420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C941Cu;
            // 0x2c9420: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C95CCu;
            goto label_2c95cc;
        }
    }
    ctx->pc = 0x2C9424u;
label_2c9424:
    // 0x2c9424: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2c9424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c9428:
    // 0x2c9428: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x2c9428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2c942c:
    // 0x2c942c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2c942cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c9430: 0xa0500014  sb          $s0, 0x14($v0)
    ctx->pc = 0x2c9430u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 16));
    // 0x2c9434: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2C9434u;
    {
        const bool branch_taken_0x2c9434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9434u;
        // 0x2c9438: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9434) {
            ctx->pc = 0x2C95C8u;
            goto label_2c95c8;
        }
    }
    ctx->pc = 0x2C943Cu;
label_2c943c:
    // 0x2c943c: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2c943cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2c9440: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c9440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c9444: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x2c9444u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c9448: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c9448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c944c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2c944cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2c9450: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c9450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c9454: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C9454u;
    {
        const bool branch_taken_0x2c9454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9454u;
        // 0x2c9458: 0x3c150057  lui         $s5, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9454) {
            ctx->pc = 0x2C9488u;
            goto label_2c9488;
        }
    }
    ctx->pc = 0x2C945Cu;
    // 0x2c945c: 0x26b29b70  addiu       $s2, $s5, -0x6490
    ctx->pc = 0x2c945cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
    // 0x2c9460: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c9460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9464: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x2C9464u;
    SET_GPR_U32(ctx, 31, 0x2C946Cu);
    ctx->pc = 0x2C9468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9464u;
    // 0x2c9468: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x2C9464u, 0x2C946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C946Cu;
label_2c946c:
    // 0x2c946c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c946cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c9470: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9470u;
    {
        const bool branch_taken_0x2c9470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c9470) {
            ctx->pc = 0x2C9474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9470u;
            // 0x2c9474: 0x26b29b70  addiu       $s2, $s5, -0x6490 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C948Cu;
            goto label_2c948c;
        }
    }
    ctx->pc = 0x2C9478u;
    // 0x2c9478: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c9478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c947c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c947cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9480: 0xc07ebc8  jal         func_1FAF20
    ctx->pc = 0x2C9480u;
    SET_GPR_U32(ctx, 31, 0x2C9488u);
    ctx->pc = 0x2C9484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9480u;
    // 0x2c9484: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF20u, 0x2C9480u, 0x2C9488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9488u;
label_2c9488:
    // 0x2c9488: 0x26b29b70  addiu       $s2, $s5, -0x6490
    ctx->pc = 0x2c9488u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
label_2c948c:
    // 0x2c948c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c948cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9490: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x2C9490u;
    SET_GPR_U32(ctx, 31, 0x2C9498u);
    ctx->pc = 0x2C9494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9490u;
    // 0x2c9494: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x2C9490u, 0x2C9498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9498u;
label_2c9498:
    // 0x2c9498: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c9498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c949c: 0x5443004b  bnel        $v0, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x2C949Cu;
    {
        const bool branch_taken_0x2c949c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c949c) {
            ctx->pc = 0x2C94A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C949Cu;
            // 0x2c94a0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C95CCu;
            goto label_2c95cc;
        }
    }
    ctx->pc = 0x2C94A4u;
    // 0x2c94a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c94a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c94a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c94a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c94ac: 0xc07ebc8  jal         func_1FAF20
    ctx->pc = 0x2C94ACu;
    SET_GPR_U32(ctx, 31, 0x2C94B4u);
    ctx->pc = 0x2C94B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C94ACu;
    // 0x2c94b0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF20u, 0x2C94ACu, 0x2C94B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C94B4u;
label_2c94b4:
    // 0x2c94b4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2C94B4u;
    {
        const bool branch_taken_0x2c94b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C94B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C94B4u;
        // 0x2c94b8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c94b4) {
            ctx->pc = 0x2C95CCu;
            goto label_2c95cc;
        }
    }
    ctx->pc = 0x2C94BCu;
label_2c94bc:
    // 0x2c94bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c94bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c94c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c94c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c94c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c94c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c94c8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2C94C8u;
    {
        const bool branch_taken_0x2c94c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C94CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C94C8u;
        // 0x2c94cc: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c94c8) {
            ctx->pc = 0x2C95A0u;
            goto label_2c95a0;
        }
    }
    ctx->pc = 0x2C94D0u;
label_2c94d0:
    // 0x2c94d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c94d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c94d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c94d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c94d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c94d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c94dc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2c94dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c94e0: 0xc0b2606  jal         func_2C9818
    ctx->pc = 0x2C94E0u;
    SET_GPR_U32(ctx, 31, 0x2C94E8u);
    ctx->pc = 0x2C94E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C94E0u;
    // 0x2c94e4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9818u, 0x2C94E0u, 0x2C94E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C94E8u;
label_2c94e8:
    // 0x2c94e8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2C94E8u;
    {
        const bool branch_taken_0x2c94e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C94ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C94E8u;
        // 0x2c94ec: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c94e8) {
            ctx->pc = 0x2C95CCu;
            goto label_2c95cc;
        }
    }
    ctx->pc = 0x2C94F0u;
label_2c94f0:
    // 0x2c94f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c94f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c94f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c94f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c94f8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c94f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c94fc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2C94FCu;
    {
        const bool branch_taken_0x2c94fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C94FCu;
        // 0x2c9500: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c94fc) {
            ctx->pc = 0x2C95A0u;
            goto label_2c95a0;
        }
    }
    ctx->pc = 0x2C9504u;
label_2c9504:
    // 0x2c9504: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c9504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9508: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c9508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c950c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c950cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9510: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2C9510u;
    {
        const bool branch_taken_0x2c9510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9510u;
        // 0x2c9514: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9510) {
            ctx->pc = 0x2C95A0u;
            goto label_2c95a0;
        }
    }
    ctx->pc = 0x2C9518u;
label_2c9518:
    // 0x2c9518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c9518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c951c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c951cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9520: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c9520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9524: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2C9524u;
    {
        const bool branch_taken_0x2c9524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9524u;
        // 0x2c9528: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9524) {
            ctx->pc = 0x2C95A0u;
            goto label_2c95a0;
        }
    }
    ctx->pc = 0x2C952Cu;
label_2c952c:
    // 0x2c952c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c952cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9530: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c9530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9534: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c9534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9538: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2C9538u;
    {
        const bool branch_taken_0x2c9538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9538u;
        // 0x2c953c: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9538) {
            ctx->pc = 0x2C95A0u;
            goto label_2c95a0;
        }
    }
    ctx->pc = 0x2C9540u;
label_2c9540:
    // 0x2c9540: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c9540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9544: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c9544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9548: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c9548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c954c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2C954Cu;
    {
        const bool branch_taken_0x2c954c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C954Cu;
        // 0x2c9550: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c954c) {
            ctx->pc = 0x2C95A0u;
            goto label_2c95a0;
        }
    }
    ctx->pc = 0x2C9554u;
label_2c9554:
    // 0x2c9554: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c9554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9558: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c9558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c955c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c955cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9560: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2C9560u;
    {
        const bool branch_taken_0x2c9560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9560u;
        // 0x2c9564: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9560) {
            ctx->pc = 0x2C95A0u;
            goto label_2c95a0;
        }
    }
    ctx->pc = 0x2C9568u;
label_2c9568:
    // 0x2c9568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c9568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c956c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c956cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9570: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c9570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9574: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C9574u;
    {
        const bool branch_taken_0x2c9574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9574u;
        // 0x2c9578: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9574) {
            ctx->pc = 0x2C95A0u;
            goto label_2c95a0;
        }
    }
    ctx->pc = 0x2C957Cu;
label_2c957c:
    // 0x2c957c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c957cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9580: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c9580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9584: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c9584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9588: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9588u;
    {
        const bool branch_taken_0x2c9588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9588u;
        // 0x2c958c: 0x24070400  addiu       $a3, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9588) {
            ctx->pc = 0x2C95A0u;
            goto label_2c95a0;
        }
    }
    ctx->pc = 0x2C9590u;
label_2c9590:
    // 0x2c9590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c9590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9594: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c9594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9598: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c9598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c959c: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x2c959cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2c95a0:
    // 0x2c95a0: 0xc0b2606  jal         func_2C9818
    ctx->pc = 0x2C95A0u;
    SET_GPR_U32(ctx, 31, 0x2C95A8u);
    ctx->pc = 0x2C95A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C95A0u;
    // 0x2c95a4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9818u, 0x2C95A0u, 0x2C95A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C95A8u;
label_2c95a8:
    // 0x2c95a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C95A8u;
    {
        const bool branch_taken_0x2c95a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C95ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C95A8u;
        // 0x2c95ac: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c95a8) {
            ctx->pc = 0x2C95CCu;
            goto label_2c95cc;
        }
    }
    ctx->pc = 0x2C95B0u;
label_2c95b0:
    // 0x2c95b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c95b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c95b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c95b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c95b8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c95b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c95bc: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x2c95bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2c95c0: 0xc0b2606  jal         func_2C9818
    ctx->pc = 0x2C95C0u;
    SET_GPR_U32(ctx, 31, 0x2C95C8u);
    ctx->pc = 0x2C95C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C95C0u;
    // 0x2c95c4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9818u, 0x2C95C0u, 0x2C95C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C95C8u;
label_2c95c8:
    // 0x2c95c8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2c95c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2c95cc:
    // 0x2c95cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c95ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c95d0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2c95d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c95d4: 0x1440fec8  bnez        $v0, . + 4 + (-0x138 << 2)
    ctx->pc = 0x2C95D4u;
    {
        const bool branch_taken_0x2c95d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C95D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C95D4u;
        // 0x2c95d8: 0x2e820011  sltiu       $v0, $s4, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c95d4) {
            ctx->pc = 0x2C90F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c90f8;
        }
    }
    ctx->pc = 0x2C95DCu;
label_2c95dc:
    // 0x2c95dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c95dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c95e0: 0x12820005  beq         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C95E0u;
    {
        const bool branch_taken_0x2c95e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C95E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C95E0u;
        // 0x2c95e4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c95e0) {
            ctx->pc = 0x2C95F8u;
            goto label_2c95f8;
        }
    }
    ctx->pc = 0x2C95E8u;
    // 0x2c95e8: 0x12820038  beq         $s4, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2C95E8u;
    {
        const bool branch_taken_0x2c95e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C95ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C95E8u;
        // 0x2c95ec: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c95e8) {
            ctx->pc = 0x2C96CCu;
            goto label_2c96cc;
        }
    }
    ctx->pc = 0x2C95F0u;
    // 0x2c95f0: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2C95F0u;
    {
        const bool branch_taken_0x2c95f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C95F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C95F0u;
        // 0x2c95f4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c95f0) {
            ctx->pc = 0x2C97A4u;
            goto label_2c97a4;
        }
    }
    ctx->pc = 0x2C95F8u;
label_2c95f8:
    // 0x2c95f8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2c95f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2c95fc: 0x26240094  addiu       $a0, $s1, 0x94
    ctx->pc = 0x2c95fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
    // 0x2c9600: 0x8c459b70  lw          $a1, -0x6490($v0)
    ctx->pc = 0x2c9600u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x569B70u));
    // 0x2c9604: 0x24a301b0  addiu       $v1, $a1, 0x1B0
    ctx->pc = 0x2c9604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 432));
    // 0x2c9608: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x2c9608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2c960c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2c960cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c9610: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C9610u;
    {
        const bool branch_taken_0x2c9610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9610u;
        // 0x2c9614: 0x24a20270  addiu       $v0, $a1, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9610) {
            ctx->pc = 0x2C966Cu;
            goto label_2c966c;
        }
    }
    ctx->pc = 0x2C9618u;
label_2c9618:
    // 0x2c9618: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x2c9618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2c961c: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x2c961cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2c9620: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x2c9620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2c9624: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x2c9624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2c9628: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x2c9628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2c962c: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x2c962cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2c9630: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x2c9630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2c9634: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x2c9634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2c9638: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x2c9638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c963c: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x2c963cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9640: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x2c9640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9644: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x2c9644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9648: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x2c9648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c964c: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x2c964cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9650: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x2c9650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9654: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x2c9654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9658: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2c9658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2c965c: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2C965Cu;
    {
        const bool branch_taken_0x2c965c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C9660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C965Cu;
        // 0x2c9660: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c965c) {
            ctx->pc = 0x2C9618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9618;
        }
    }
    ctx->pc = 0x2C9664u;
    // 0x2c9664: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C9664u;
    {
        const bool branch_taken_0x2c9664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9664) {
            ctx->pc = 0x2C9698u;
            goto label_2c9698;
        }
    }
    ctx->pc = 0x2C966Cu;
label_2c966c:
    // 0x2c966c: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x2c966cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c9670: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x2c9670u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c9674: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x2c9674u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c9678: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x2c9678u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2c967c: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x2c967cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x2c9680: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x2c9680u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x2c9684: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x2c9684u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x2c9688: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x2c9688u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x2c968c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2c968cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2c9690: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2C9690u;
    {
        const bool branch_taken_0x2c9690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C9694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9690u;
        // 0x2c9694: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9690) {
            ctx->pc = 0x2C966Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c966c;
        }
    }
    ctx->pc = 0x2C9698u;
label_2c9698:
    // 0x2c9698: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x2c9698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2c969c: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x2c969cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2c96a0: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x2c96a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2c96a4: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x2c96a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2c96a8: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x2c96a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2c96ac: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x2c96acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2c96b0: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x2c96b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c96b4: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x2c96b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c96b8: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x2c96b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c96bc: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x2c96bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c96c0: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x2c96c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c96c4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2C96C4u;
    {
        const bool branch_taken_0x2c96c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C96C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C96C4u;
        // 0x2c96c8: 0xb4860010  sdr         $a2, 0x10($a0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c96c4) {
            ctx->pc = 0x2C979Cu;
            goto label_2c979c;
        }
    }
    ctx->pc = 0x2C96CCu;
label_2c96cc:
    // 0x2c96cc: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2c96ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2c96d0: 0x26240094  addiu       $a0, $s1, 0x94
    ctx->pc = 0x2c96d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
    // 0x2c96d4: 0x8c439b70  lw          $v1, -0x6490($v0)
    ctx->pc = 0x2c96d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x569B70u));
    // 0x2c96d8: 0x246301b0  addiu       $v1, $v1, 0x1B0
    ctx->pc = 0x2c96d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
    // 0x2c96dc: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x2c96dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2c96e0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2c96e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c96e4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C96E4u;
    {
        const bool branch_taken_0x2c96e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C96E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C96E4u;
        // 0x2c96e8: 0x26220154  addiu       $v0, $s1, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c96e4) {
            ctx->pc = 0x2C9740u;
            goto label_2c9740;
        }
    }
    ctx->pc = 0x2C96ECu;
label_2c96ec:
    // 0x2c96ec: 0x68880007  ldl         $t0, 0x7($a0)
    ctx->pc = 0x2c96ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2c96f0: 0x6c880000  ldr         $t0, 0x0($a0)
    ctx->pc = 0x2c96f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2c96f4: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x2c96f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2c96f8: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x2c96f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2c96fc: 0x68860017  ldl         $a2, 0x17($a0)
    ctx->pc = 0x2c96fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2c9700: 0x6c860010  ldr         $a2, 0x10($a0)
    ctx->pc = 0x2c9700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2c9704: 0x6887001f  ldl         $a3, 0x1F($a0)
    ctx->pc = 0x2c9704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2c9708: 0x6c870018  ldr         $a3, 0x18($a0)
    ctx->pc = 0x2c9708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2c970c: 0xb0680007  sdl         $t0, 0x7($v1)
    ctx->pc = 0x2c970cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9710: 0xb4680000  sdr         $t0, 0x0($v1)
    ctx->pc = 0x2c9710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9714: 0xb065000f  sdl         $a1, 0xF($v1)
    ctx->pc = 0x2c9714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9718: 0xb4650008  sdr         $a1, 0x8($v1)
    ctx->pc = 0x2c9718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c971c: 0xb0660017  sdl         $a2, 0x17($v1)
    ctx->pc = 0x2c971cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9720: 0xb4660010  sdr         $a2, 0x10($v1)
    ctx->pc = 0x2c9720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9724: 0xb067001f  sdl         $a3, 0x1F($v1)
    ctx->pc = 0x2c9724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9728: 0xb4670018  sdr         $a3, 0x18($v1)
    ctx->pc = 0x2c9728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c972c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2c972cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2c9730: 0x1482ffee  bne         $a0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2C9730u;
    {
        const bool branch_taken_0x2c9730 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C9734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9730u;
        // 0x2c9734: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9730) {
            ctx->pc = 0x2C96ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c96ec;
        }
    }
    ctx->pc = 0x2C9738u;
    // 0x2c9738: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C9738u;
    {
        const bool branch_taken_0x2c9738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9738) {
            ctx->pc = 0x2C976Cu;
            goto label_2c976c;
        }
    }
    ctx->pc = 0x2C9740u;
label_2c9740:
    // 0x2c9740: 0xdc880000  ld          $t0, 0x0($a0)
    ctx->pc = 0x2c9740u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c9744: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x2c9744u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c9748: 0xdc860010  ld          $a2, 0x10($a0)
    ctx->pc = 0x2c9748u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c974c: 0xdc870018  ld          $a3, 0x18($a0)
    ctx->pc = 0x2c974cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2c9750: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x2c9750u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x2c9754: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x2c9754u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x2c9758: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x2c9758u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x2c975c: 0xfc670018  sd          $a3, 0x18($v1)
    ctx->pc = 0x2c975cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 7));
    // 0x2c9760: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2c9760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2c9764: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2C9764u;
    {
        const bool branch_taken_0x2c9764 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C9768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9764u;
        // 0x2c9768: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9764) {
            ctx->pc = 0x2C9740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9740;
        }
    }
    ctx->pc = 0x2C976Cu;
label_2c976c:
    // 0x2c976c: 0x68880007  ldl         $t0, 0x7($a0)
    ctx->pc = 0x2c976cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2c9770: 0x6c880000  ldr         $t0, 0x0($a0)
    ctx->pc = 0x2c9770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2c9774: 0x6882000f  ldl         $v0, 0xF($a0)
    ctx->pc = 0x2c9774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2c9778: 0x6c820008  ldr         $v0, 0x8($a0)
    ctx->pc = 0x2c9778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2c977c: 0x68850017  ldl         $a1, 0x17($a0)
    ctx->pc = 0x2c977cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2c9780: 0x6c850010  ldr         $a1, 0x10($a0)
    ctx->pc = 0x2c9780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2c9784: 0xb0680007  sdl         $t0, 0x7($v1)
    ctx->pc = 0x2c9784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9788: 0xb4680000  sdr         $t0, 0x0($v1)
    ctx->pc = 0x2c9788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c978c: 0xb062000f  sdl         $v0, 0xF($v1)
    ctx->pc = 0x2c978cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9790: 0xb4620008  sdr         $v0, 0x8($v1)
    ctx->pc = 0x2c9790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9794: 0xb0650017  sdl         $a1, 0x17($v1)
    ctx->pc = 0x2c9794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9798: 0xb4650010  sdr         $a1, 0x10($v1)
    ctx->pc = 0x2c9798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2c979c:
    // 0x2c979c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2c979cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c97a0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2c97a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2c97a4:
    // 0x2c97a4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2c97a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c97a8:
    // 0x2c97a8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2c97a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c97ac: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2c97acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c97b0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2c97b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c97b4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2c97b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c97b8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2c97b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c97bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c97bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c97c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C97C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C97C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97C0u;
        // 0x2c97c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C97C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C97C8u;
}
