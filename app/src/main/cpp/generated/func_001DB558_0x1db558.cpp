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

// Function: func_001DB558
// Address: 0x1db558 - 0x1db9b8
void func_001DB558_0x1db558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DB558_0x1db558");
#endif

    switch (ctx->pc) {
        case 0x1db600u: goto label_1db600;
        case 0x1db60cu: goto label_1db60c;
        case 0x1db618u: goto label_1db618;
        case 0x1db69cu: goto label_1db69c;
        case 0x1db6b0u: goto label_1db6b0;
        case 0x1db6e4u: goto label_1db6e4;
        case 0x1db728u: goto label_1db728;
        case 0x1db778u: goto label_1db778;
        case 0x1db784u: goto label_1db784;
        case 0x1db7a8u: goto label_1db7a8;
        case 0x1db804u: goto label_1db804;
        case 0x1db82cu: goto label_1db82c;
        case 0x1db900u: goto label_1db900;
        case 0x1db910u: goto label_1db910;
        case 0x1db924u: goto label_1db924;
        case 0x1db954u: goto label_1db954;
        case 0x1db96cu: goto label_1db96c;
        default: break;
    }

    ctx->pc = 0x1db558u;

    // 0x1db558: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1db558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1db55c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1db55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1db560: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1db560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1db564: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1db564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db56c: 0x92233025  lbu         $v1, 0x3025($s1)
    ctx->pc = 0x1db56cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1db570: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x1db570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1db574: 0x1040010b  beqz        $v0, . + 4 + (0x10B << 2)
    ctx->pc = 0x1DB574u;
    {
        const bool branch_taken_0x1db574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB574u;
        // 0x1db578: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db574) {
            ctx->pc = 0x1DB9A4u;
            goto label_1db9a4;
        }
    }
    ctx->pc = 0x1DB57Cu;
    // 0x1db57c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1db57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1db580: 0x2442b3d0  addiu       $v0, $v0, -0x4C30
    ctx->pc = 0x1db580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947792));
    // 0x1db584: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1db584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1db588: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1db588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1db58c: 0x800008  jr          $a0
    ctx->pc = 0x1DB58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB594u: goto label_1db594;
            case 0x1DB5C8u: goto label_1db5c8;
            case 0x1DB624u: goto label_1db624;
            case 0x1DB654u: goto label_1db654;
            case 0x1DB7B0u: goto label_1db7b0;
            case 0x1DB844u: goto label_1db844;
            case 0x1DB8BCu: goto label_1db8bc;
            case 0x1DB924u: goto label_1db924;
            case 0x1DB974u: goto label_1db974;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB58Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1DB594u;
label_1db594:
    // 0x1db594: 0x8e223028  lw          $v0, 0x3028($s1)
    ctx->pc = 0x1db594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12328)));
    // 0x1db598: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB598u;
    {
        const bool branch_taken_0x1db598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB598u;
        // 0x1db59c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db598) {
            ctx->pc = 0x1DB5A8u;
            goto label_1db5a8;
        }
    }
    ctx->pc = 0x1DB5A0u;
    // 0x1db5a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB5A0u;
    {
        const bool branch_taken_0x1db5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5A0u;
        // 0x1db5a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db5a0) {
            ctx->pc = 0x1DB5B0u;
            goto label_1db5b0;
        }
    }
    ctx->pc = 0x1DB5A8u;
label_1db5a8:
    // 0x1db5a8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1db5a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db5ac: 0xae223028  sw          $v0, 0x3028($s1)
    ctx->pc = 0x1db5acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 2));
label_1db5b0:
    // 0x1db5b0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1db5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1db5b4: 0x104000fb  beqz        $v0, . + 4 + (0xFB << 2)
    ctx->pc = 0x1DB5B4u;
    {
        const bool branch_taken_0x1db5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5B4u;
        // 0x1db5b8: 0x262425b0  addiu       $a0, $s1, 0x25B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db5b4) {
            ctx->pc = 0x1DB9A4u;
            goto label_1db9a4;
        }
    }
    ctx->pc = 0x1DB5BCu;
    // 0x1db5bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1db5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1db5c0: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x1DB5C0u;
    {
        const bool branch_taken_0x1db5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5C0u;
        // 0x1db5c4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db5c0) {
            ctx->pc = 0x1DB91Cu;
            goto label_1db91c;
        }
    }
    ctx->pc = 0x1DB5C8u;
label_1db5c8:
    // 0x1db5c8: 0x8e223028  lw          $v0, 0x3028($s1)
    ctx->pc = 0x1db5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12328)));
    // 0x1db5cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB5CCu;
    {
        const bool branch_taken_0x1db5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5CCu;
        // 0x1db5d0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db5cc) {
            ctx->pc = 0x1DB5DCu;
            goto label_1db5dc;
        }
    }
    ctx->pc = 0x1DB5D4u;
    // 0x1db5d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB5D4u;
    {
        const bool branch_taken_0x1db5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5D4u;
        // 0x1db5d8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db5d4) {
            ctx->pc = 0x1DB5E4u;
            goto label_1db5e4;
        }
    }
    ctx->pc = 0x1DB5DCu;
label_1db5dc:
    // 0x1db5dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1db5dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db5e0: 0xae223028  sw          $v0, 0x3028($s1)
    ctx->pc = 0x1db5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 2));
label_1db5e4:
    // 0x1db5e4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1db5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1db5e8: 0x104000ee  beqz        $v0, . + 4 + (0xEE << 2)
    ctx->pc = 0x1DB5E8u;
    {
        const bool branch_taken_0x1db5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5E8u;
        // 0x1db5ec: 0x263025b0  addiu       $s0, $s1, 0x25B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db5e8) {
            ctx->pc = 0x1DB9A4u;
            goto label_1db9a4;
        }
    }
    ctx->pc = 0x1DB5F0u;
    // 0x1db5f0: 0xae203040  sw          $zero, 0x3040($s1)
    ctx->pc = 0x1db5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12352), GPR_U32(ctx, 0));
    // 0x1db5f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db5f8: 0xc077dd6  jal         func_1DF758
    ctx->pc = 0x1DB5F8u;
    SET_GPR_U32(ctx, 31, 0x1DB600u);
    ctx->pc = 0x1DB5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB5F8u;
    // 0x1db5fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF758u, 0x1DB5F8u, 0x1DB600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB600u;
label_1db600:
    // 0x1db600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db604: 0xc077df4  jal         func_1DF7D0
    ctx->pc = 0x1DB604u;
    SET_GPR_U32(ctx, 31, 0x1DB60Cu);
    ctx->pc = 0x1DB608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB604u;
    // 0x1db608: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF7D0u, 0x1DB604u, 0x1DB60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB60Cu;
label_1db60c:
    // 0x1db60c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db610: 0xc077e08  jal         func_1DF820
    ctx->pc = 0x1DB610u;
    SET_GPR_U32(ctx, 31, 0x1DB618u);
    ctx->pc = 0x1DB614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB610u;
    // 0x1db614: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF820u, 0x1DB610u, 0x1DB618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB618u;
label_1db618:
    // 0x1db618: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1db618u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1db61c: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x1DB61Cu;
    {
        const bool branch_taken_0x1db61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB61Cu;
        // 0x1db620: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db61c) {
            ctx->pc = 0x1DB92Cu;
            goto label_1db92c;
        }
    }
    ctx->pc = 0x1DB624u;
label_1db624:
    // 0x1db624: 0x8e223028  lw          $v0, 0x3028($s1)
    ctx->pc = 0x1db624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12328)));
    // 0x1db628: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB628u;
    {
        const bool branch_taken_0x1db628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB628u;
        // 0x1db62c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db628) {
            ctx->pc = 0x1DB638u;
            goto label_1db638;
        }
    }
    ctx->pc = 0x1DB630u;
    // 0x1db630: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB630u;
    {
        const bool branch_taken_0x1db630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB630u;
        // 0x1db634: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db630) {
            ctx->pc = 0x1DB640u;
            goto label_1db640;
        }
    }
    ctx->pc = 0x1DB638u;
label_1db638:
    // 0x1db638: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1db638u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db63c: 0xae223028  sw          $v0, 0x3028($s1)
    ctx->pc = 0x1db63cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 2));
label_1db640:
    // 0x1db640: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1db640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1db644: 0x104000d8  beqz        $v0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x1DB644u;
    {
        const bool branch_taken_0x1db644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB644u;
        // 0x1db648: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db644) {
            ctx->pc = 0x1DB9A8u;
            goto label_1db9a8;
        }
    }
    ctx->pc = 0x1DB64Cu;
    // 0x1db64c: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x1DB64Cu;
    {
        const bool branch_taken_0x1db64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB64Cu;
        // 0x1db650: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db64c) {
            ctx->pc = 0x1DB930u;
            goto label_1db930;
        }
    }
    ctx->pc = 0x1DB654u;
label_1db654:
    // 0x1db654: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1db654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1db658: 0x3404cc00  ori         $a0, $zero, 0xCC00
    ctx->pc = 0x1db658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x1db65c: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1db65cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x1db660: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x1db660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
    // 0x1db664: 0x42338  dsll        $a0, $a0, 12
    ctx->pc = 0x1db664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 12);
    // 0x1db668: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x1db668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1db66c: 0xdc4301b0  ld          $v1, 0x1B0($v0)
    ctx->pc = 0x1db66cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x1db670: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1db670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1db674: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DB674u;
    {
        const bool branch_taken_0x1db674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db674) {
            ctx->pc = 0x1DB678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB674u;
            // 0x1db678: 0xdc4301a0  ld          $v1, 0x1A0($v0) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB6C4u;
            goto label_1db6c4;
        }
    }
    ctx->pc = 0x1DB67Cu;
    // 0x1db67c: 0x8e223040  lw          $v0, 0x3040($s1)
    ctx->pc = 0x1db67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12352)));
    // 0x1db680: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB680u;
    {
        const bool branch_taken_0x1db680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db680) {
            ctx->pc = 0x1DB684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB680u;
            // 0x1db684: 0xae203040  sw          $zero, 0x3040($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12352), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB6A4u;
            goto label_1db6a4;
        }
    }
    ctx->pc = 0x1DB688u;
    // 0x1db688: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db68c: 0x262425b0  addiu       $a0, $s1, 0x25B0
    ctx->pc = 0x1db68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
    // 0x1db690: 0xae223040  sw          $v0, 0x3040($s1)
    ctx->pc = 0x1db690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12352), GPR_U32(ctx, 2));
    // 0x1db694: 0xc077df4  jal         func_1DF7D0
    ctx->pc = 0x1DB694u;
    SET_GPR_U32(ctx, 31, 0x1DB69Cu);
    ctx->pc = 0x1DB698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB694u;
    // 0x1db698: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF7D0u, 0x1DB694u, 0x1DB69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB69Cu;
label_1db69c:
    // 0x1db69c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB69Cu;
    {
        const bool branch_taken_0x1db69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB69Cu;
        // 0x1db6a0: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db69c) {
            ctx->pc = 0x1DB6B4u;
            goto label_1db6b4;
        }
    }
    ctx->pc = 0x1DB6A4u;
label_1db6a4:
    // 0x1db6a4: 0x262425b0  addiu       $a0, $s1, 0x25B0
    ctx->pc = 0x1db6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
    // 0x1db6a8: 0xc077df4  jal         func_1DF7D0
    ctx->pc = 0x1DB6A8u;
    SET_GPR_U32(ctx, 31, 0x1DB6B0u);
    ctx->pc = 0x1DB6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB6A8u;
    // 0x1db6ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF7D0u, 0x1DB6A8u, 0x1DB6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB6B0u;
label_1db6b0:
    // 0x1db6b0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1db6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1db6b4:
    // 0x1db6b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db6b8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1db6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1db6bc: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1DB6BCu;
    {
        const bool branch_taken_0x1db6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6BCu;
        // 0x1db6c0: 0x2406015f  addiu       $a2, $zero, 0x15F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db6bc) {
            ctx->pc = 0x1DB794u;
            goto label_1db794;
        }
    }
    ctx->pc = 0x1DB6C4u;
label_1db6c4:
    // 0x1db6c4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1db6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1db6c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1db6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1db6cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DB6CCu;
    {
        const bool branch_taken_0x1db6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6CCu;
        // 0x1db6d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db6cc) {
            ctx->pc = 0x1DB6F8u;
            goto label_1db6f8;
        }
    }
    ctx->pc = 0x1DB6D4u;
    // 0x1db6d4: 0x262425b0  addiu       $a0, $s1, 0x25B0
    ctx->pc = 0x1db6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
    // 0x1db6d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db6dc: 0xc077df4  jal         func_1DF7D0
    ctx->pc = 0x1DB6DCu;
    SET_GPR_U32(ctx, 31, 0x1DB6E4u);
    ctx->pc = 0x1DB6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB6DCu;
    // 0x1db6e0: 0xae223040  sw          $v0, 0x3040($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF7D0u, 0x1DB6DCu, 0x1DB6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB6E4u;
label_1db6e4:
    // 0x1db6e4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1db6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1db6e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db6ec: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1db6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1db6f0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1DB6F0u;
    {
        const bool branch_taken_0x1db6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6F0u;
        // 0x1db6f4: 0x24060161  addiu       $a2, $zero, 0x161 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db6f0) {
            ctx->pc = 0x1DB794u;
            goto label_1db794;
        }
    }
    ctx->pc = 0x1DB6F8u;
label_1db6f8:
    // 0x1db6f8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1db6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1db6fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1db6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1db700: 0x104000a9  beqz        $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x1DB700u;
    {
        const bool branch_taken_0x1db700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB700u;
        // 0x1db704: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db700) {
            ctx->pc = 0x1DB9A8u;
            goto label_1db9a8;
        }
    }
    ctx->pc = 0x1DB708u;
    // 0x1db708: 0x8e223040  lw          $v0, 0x3040($s1)
    ctx->pc = 0x1db708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12352)));
    // 0x1db70c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1DB70Cu;
    {
        const bool branch_taken_0x1db70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db70c) {
            ctx->pc = 0x1DB710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB70Cu;
            // 0x1db710: 0x8e223034  lw          $v0, 0x3034($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB740u;
            goto label_1db740;
        }
    }
    ctx->pc = 0x1DB714u;
    // 0x1db714: 0x263025b0  addiu       $s0, $s1, 0x25B0
    ctx->pc = 0x1db714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
    // 0x1db718: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1db718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1db71c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db720: 0xc077d4a  jal         func_1DF528
    ctx->pc = 0x1DB720u;
    SET_GPR_U32(ctx, 31, 0x1DB728u);
    ctx->pc = 0x1DB724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB720u;
    // 0x1db724: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF528u, 0x1DB720u, 0x1DB728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB728u;
label_1db728:
    // 0x1db728: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1db728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1db72c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1db72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1db730: 0xae233028  sw          $v1, 0x3028($s1)
    ctx->pc = 0x1db730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 3));
    // 0x1db734: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1db734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1db738: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DB738u;
    {
        const bool branch_taken_0x1db738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB738u;
        // 0x1db73c: 0xa2223025  sb          $v0, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db738) {
            ctx->pc = 0x1DB76Cu;
            goto label_1db76c;
        }
    }
    ctx->pc = 0x1DB740u;
label_1db740:
    // 0x1db740: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1db740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1db744: 0x263025b0  addiu       $s0, $s1, 0x25B0
    ctx->pc = 0x1db744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
    // 0x1db748: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1db748u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1db74c: 0xae223038  sw          $v0, 0x3038($s1)
    ctx->pc = 0x1db74cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12344), GPR_U32(ctx, 2));
    // 0x1db750: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DB750u;
    {
        const bool branch_taken_0x1db750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db750) {
            ctx->pc = 0x1DB754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB750u;
            // 0x1db754: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB758u;
            goto label_1db758;
        }
    }
    ctx->pc = 0x1DB758u;
label_1db758:
    // 0x1db758: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1db758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1db75c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1db75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1db760: 0xa2223025  sb          $v0, 0x3025($s1)
    ctx->pc = 0x1db760u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 2));
    // 0x1db764: 0x2012  mflo        $a0
    ctx->pc = 0x1db764u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1db768: 0xae24302c  sw          $a0, 0x302C($s1)
    ctx->pc = 0x1db768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 4));
label_1db76c:
    // 0x1db76c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db770: 0xc077dd6  jal         func_1DF758
    ctx->pc = 0x1DB770u;
    SET_GPR_U32(ctx, 31, 0x1DB778u);
    ctx->pc = 0x1DB774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB770u;
    // 0x1db774: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF758u, 0x1DB770u, 0x1DB778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB778u;
label_1db778:
    // 0x1db778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db77c: 0xc077e08  jal         func_1DF820
    ctx->pc = 0x1DB77Cu;
    SET_GPR_U32(ctx, 31, 0x1DB784u);
    ctx->pc = 0x1DB780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB77Cu;
    // 0x1db780: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF820u, 0x1DB77Cu, 0x1DB784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB784u;
label_1db784:
    // 0x1db784: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1db784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1db788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db78c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1db78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1db790: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x1db790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
label_1db794:
    // 0x1db794: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1db794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db798: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1db798u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db79c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1db79cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db7a0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1DB7A0u;
    SET_GPR_U32(ctx, 31, 0x1DB7A8u);
    ctx->pc = 0x1DB7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB7A0u;
    // 0x1db7a4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1DB7A0u, 0x1DB7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB7A8u;
label_1db7a8:
    // 0x1db7a8: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x1DB7A8u;
    {
        const bool branch_taken_0x1db7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB7A8u;
        // 0x1db7ac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db7a8) {
            ctx->pc = 0x1DB9A8u;
            goto label_1db9a8;
        }
    }
    ctx->pc = 0x1DB7B0u;
label_1db7b0:
    // 0x1db7b0: 0x8e223028  lw          $v0, 0x3028($s1)
    ctx->pc = 0x1db7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12328)));
    // 0x1db7b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB7B4u;
    {
        const bool branch_taken_0x1db7b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB7B4u;
        // 0x1db7b8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db7b4) {
            ctx->pc = 0x1DB7C4u;
            goto label_1db7c4;
        }
    }
    ctx->pc = 0x1DB7BCu;
    // 0x1db7bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB7BCu;
    {
        const bool branch_taken_0x1db7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB7BCu;
        // 0x1db7c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db7bc) {
            ctx->pc = 0x1DB7CCu;
            goto label_1db7cc;
        }
    }
    ctx->pc = 0x1DB7C4u;
label_1db7c4:
    // 0x1db7c4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1db7c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db7c8: 0xae223028  sw          $v0, 0x3028($s1)
    ctx->pc = 0x1db7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 2));
label_1db7cc:
    // 0x1db7cc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1db7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1db7d0: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x1DB7D0u;
    {
        const bool branch_taken_0x1db7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB7D0u;
        // 0x1db7d4: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db7d0) {
            ctx->pc = 0x1DB9A4u;
            goto label_1db9a4;
        }
    }
    ctx->pc = 0x1DB7D8u;
    // 0x1db7d8: 0x8e223004  lw          $v0, 0x3004($s1)
    ctx->pc = 0x1db7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12292)));
    // 0x1db7dc: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1db7dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1db7e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1db7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1db7e4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1db7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db7e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db7ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1db7ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db7f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db7f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db7f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1db7f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db7f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1db7f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db7fc: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1DB7FCu;
    SET_GPR_U32(ctx, 31, 0x1DB804u);
    ctx->pc = 0x1DB800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB7FCu;
    // 0x1db800: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1DB7FCu, 0x1DB804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB804u;
label_1db804:
    // 0x1db804: 0x8e233008  lw          $v1, 0x3008($s1)
    ctx->pc = 0x1db804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
    // 0x1db808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db80c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1db80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1db810: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1db810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db814: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1db814u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1db818: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db818u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db81c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1db81cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db820: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1db820u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db824: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1DB824u;
    SET_GPR_U32(ctx, 31, 0x1DB82Cu);
    ctx->pc = 0x1DB828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB824u;
    // 0x1db828: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1DB824u, 0x1DB82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB82Cu;
label_1db82c:
    // 0x1db82c: 0x92233025  lbu         $v1, 0x3025($s1)
    ctx->pc = 0x1db82cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1db830: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1db830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1db834: 0xae22302c  sw          $v0, 0x302C($s1)
    ctx->pc = 0x1db834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 2));
    // 0x1db838: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1db838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1db83c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1DB83Cu;
    {
        const bool branch_taken_0x1db83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB83Cu;
        // 0x1db840: 0xa2233025  sb          $v1, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db83c) {
            ctx->pc = 0x1DB9A4u;
            goto label_1db9a4;
        }
    }
    ctx->pc = 0x1DB844u;
label_1db844:
    // 0x1db844: 0xc620302c  lwc1        $f0, 0x302C($s1)
    ctx->pc = 0x1db844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db848: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1db848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1db84c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1db84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1db850: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1db850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1db854: 0x8e253004  lw          $a1, 0x3004($s1)
    ctx->pc = 0x1db854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12292)));
    // 0x1db858: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1db858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1db85c: 0xc48181c0  lwc1        $f1, -0x7E40($a0)
    ctx->pc = 0x1db85cu;
    { uint32_t bits = FAST_READ32(0x5681C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db860: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1db860u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1db864: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1db864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1db868: 0x248481c0  addiu       $a0, $a0, -0x7E40
    ctx->pc = 0x1db868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934976));
    // 0x1db86c: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x1db86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1db870: 0x0  nop
    ctx->pc = 0x1db870u;
    // NOP
    // 0x1db874: 0x0  nop
    ctx->pc = 0x1db874u;
    // NOP
    // 0x1db878: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1db878u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x1db87c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1db87cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1db880: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1db880u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1db884: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x1db884u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1db888: 0x8e223008  lw          $v0, 0x3008($s1)
    ctx->pc = 0x1db888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
    // 0x1db88c: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1db88cu;
    { uint32_t bits = FAST_READ32(0x5681D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db890: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1db890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db894: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1db894u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1db898: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x1db898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1db89c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1db89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1db8a0: 0x8e22302c  lw          $v0, 0x302C($s1)
    ctx->pc = 0x1db8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12332)));
    // 0x1db8a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB8A4u;
    {
        const bool branch_taken_0x1db8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8A4u;
        // 0x1db8a8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db8a4) {
            ctx->pc = 0x1DB8B4u;
            goto label_1db8b4;
        }
    }
    ctx->pc = 0x1DB8ACu;
    // 0x1db8ac: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1DB8ACu;
    {
        const bool branch_taken_0x1db8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8ACu;
        // 0x1db8b0: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db8ac) {
            ctx->pc = 0x1DB99Cu;
            goto label_1db99c;
        }
    }
    ctx->pc = 0x1DB8B4u;
label_1db8b4:
    // 0x1db8b4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1DB8B4u;
    {
        const bool branch_taken_0x1db8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8B4u;
        // 0x1db8b8: 0xae22302c  sw          $v0, 0x302C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db8b4) {
            ctx->pc = 0x1DB9A4u;
            goto label_1db9a4;
        }
    }
    ctx->pc = 0x1DB8BCu;
label_1db8bc:
    // 0x1db8bc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1db8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1db8c0: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1db8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1db8c4: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x1db8c4u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x747640u));
    // 0x1db8c8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1db8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1db8cc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB8CCu;
    {
        const bool branch_taken_0x1db8cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8CCu;
        // 0x1db8d0: 0x8e26302c  lw          $a2, 0x302C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db8cc) {
            ctx->pc = 0x1DB8E0u;
            goto label_1db8e0;
        }
    }
    ctx->pc = 0x1DB8D4u;
    // 0x1db8d4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1db8d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db8d8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DB8D8u;
    {
        const bool branch_taken_0x1db8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8D8u;
        // 0x1db8dc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db8d8) {
            ctx->pc = 0x1DB93Cu;
            goto label_1db93c;
        }
    }
    ctx->pc = 0x1DB8E0u;
label_1db8e0:
    // 0x1db8e0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1db8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1db8e4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1db8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1db8e8: 0xc50018  mult        $zero, $a2, $a1
    ctx->pc = 0x1db8e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1db8ec: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1db8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1db8f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1db8f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db8f4: 0x2812  mflo        $a1
    ctx->pc = 0x1db8f4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1db8f8: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1DB8F8u;
    SET_GPR_U32(ctx, 31, 0x1DB900u);
    ctx->pc = 0x1DB8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB8F8u;
    // 0x1db8fc: 0x263025b0  addiu       $s0, $s1, 0x25B0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1DB8F8u, 0x1DB900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB900u;
label_1db900:
    // 0x1db900: 0xae203034  sw          $zero, 0x3034($s1)
    ctx->pc = 0x1db900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12340), GPR_U32(ctx, 0));
    // 0x1db904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db908: 0xc077b90  jal         func_1DEE40
    ctx->pc = 0x1DB908u;
    SET_GPR_U32(ctx, 31, 0x1DB910u);
    ctx->pc = 0x1DB90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB908u;
    // 0x1db90c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE40u, 0x1DB908u, 0x1DB910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB910u;
label_1db910:
    // 0x1db910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db914: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1db914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1db918: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1db918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1db91c:
    // 0x1db91c: 0xc077d4a  jal         func_1DF528
    ctx->pc = 0x1DB91Cu;
    SET_GPR_U32(ctx, 31, 0x1DB924u);
    ctx->pc = 0x1DF528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF528u, 0x1DB91Cu, 0x1DB924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB924u;
label_1db924:
    // 0x1db924: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1db924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1db928: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1db928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1db92c:
    // 0x1db92c: 0xae233028  sw          $v1, 0x3028($s1)
    ctx->pc = 0x1db92cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 3));
label_1db930:
    // 0x1db930: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1db930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1db934: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1DB934u;
    {
        const bool branch_taken_0x1db934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB934u;
        // 0x1db938: 0xa2223025  sb          $v0, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db934) {
            ctx->pc = 0x1DB9A4u;
            goto label_1db9a4;
        }
    }
    ctx->pc = 0x1DB93Cu;
label_1db93c:
    // 0x1db93c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1db93cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1db940: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1db940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1db944: 0xae22302c  sw          $v0, 0x302C($s1)
    ctx->pc = 0x1db944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 2));
    // 0x1db948: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1db948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1db94c: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1DB94Cu;
    SET_GPR_U32(ctx, 31, 0x1DB954u);
    ctx->pc = 0x1DB950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB94Cu;
    // 0x1db950: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1DB94Cu, 0x1DB954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB954u;
label_1db954:
    // 0x1db954: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1db954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1db958: 0x262425b0  addiu       $a0, $s1, 0x25B0
    ctx->pc = 0x1db958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
    // 0x1db95c: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x1db95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x1db960: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1db960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db964: 0xc077b90  jal         func_1DEE40
    ctx->pc = 0x1DB964u;
    SET_GPR_U32(ctx, 31, 0x1DB96Cu);
    ctx->pc = 0x1DB968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB964u;
    // 0x1db968: 0xae223034  sw          $v0, 0x3034($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12340), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE40u, 0x1DB964u, 0x1DB96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB96Cu;
label_1db96c:
    // 0x1db96c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1DB96Cu;
    {
        const bool branch_taken_0x1db96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB96Cu;
        // 0x1db970: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db96c) {
            ctx->pc = 0x1DB9A8u;
            goto label_1db9a8;
        }
    }
    ctx->pc = 0x1DB974u;
label_1db974:
    // 0x1db974: 0x8e223028  lw          $v0, 0x3028($s1)
    ctx->pc = 0x1db974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12328)));
    // 0x1db978: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB978u;
    {
        const bool branch_taken_0x1db978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB978u;
        // 0x1db97c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db978) {
            ctx->pc = 0x1DB988u;
            goto label_1db988;
        }
    }
    ctx->pc = 0x1DB980u;
    // 0x1db980: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB980u;
    {
        const bool branch_taken_0x1db980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB980u;
        // 0x1db984: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db980) {
            ctx->pc = 0x1DB990u;
            goto label_1db990;
        }
    }
    ctx->pc = 0x1DB988u;
label_1db988:
    // 0x1db988: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1db988u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db98c: 0xae223028  sw          $v0, 0x3028($s1)
    ctx->pc = 0x1db98cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 2));
label_1db990:
    // 0x1db990: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1db990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1db994: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB994u;
    {
        const bool branch_taken_0x1db994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB994u;
        // 0x1db998: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db994) {
            ctx->pc = 0x1DB9A4u;
            goto label_1db9a4;
        }
    }
    ctx->pc = 0x1DB99Cu;
label_1db99c:
    // 0x1db99c: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1db99cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1db9a0: 0xa2223024  sb          $v0, 0x3024($s1)
    ctx->pc = 0x1db9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 2));
label_1db9a4:
    // 0x1db9a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1db9a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1db9a8:
    // 0x1db9a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1db9a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db9ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB9B0u;
        // 0x1db9b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB9B8u;
}
