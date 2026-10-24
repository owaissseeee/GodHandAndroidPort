#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: readChoise__7cMcLoad
// Address: 0x7c2510 - 0x7c2780
void readChoise__7cMcLoad_0x7c2510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("readChoise__7cMcLoad_0x7c2510");
#endif

    switch (ctx->pc) {
        case 0x7c2558u: goto label_7c2558;
        case 0x7c257cu: goto label_7c257c;
        case 0x7c258cu: goto label_7c258c;
        case 0x7c25acu: goto label_7c25ac;
        case 0x7c25c8u: goto label_7c25c8;
        case 0x7c25f0u: goto label_7c25f0;
        case 0x7c261cu: goto label_7c261c;
        case 0x7c2644u: goto label_7c2644;
        case 0x7c26a8u: goto label_7c26a8;
        case 0x7c26fcu: goto label_7c26fc;
        case 0x7c2724u: goto label_7c2724;
        case 0x7c2760u: goto label_7c2760;
        default: break;
    }

    ctx->pc = 0x7c2510u;

    // 0x7c2510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7c2510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7c2514: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7c2514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7c2518: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7c2518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7c251c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c251cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2520: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c2520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c2524: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x7c2524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x7c2528: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x7c2528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x7c252c: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x7C252Cu;
    {
        const bool branch_taken_0x7c252c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C252Cu;
        // 0x7c2530: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c252c) {
            ctx->pc = 0x7C266Cu;
            goto label_7c266c;
        }
    }
    ctx->pc = 0x7C2534u;
    // 0x7c2534: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c2534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c2538: 0x24420a70  addiu       $v0, $v0, 0xA70
    ctx->pc = 0x7c2538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2672));
    // 0x7c253c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7c253cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7c2540: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7c2540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c2544: 0x800008  jr          $a0
    ctx->pc = 0x7C2544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x7C2548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2544u;
        // 0x7c2548: 0x3c10007d  lui         $s0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7C254Cu: goto label_7c254c;
            case 0x7C256Cu: goto label_7c256c;
            case 0x7C25A0u: goto label_7c25a0;
            case 0x7C25E0u: goto label_7c25e0;
            case 0x7C260Cu: goto label_7c260c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C2544u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7C254Cu;
label_7c254c:
    // 0x7c254c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c254cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2550: 0xc1f1eb8  jal         func_7C7AE0
    ctx->pc = 0x7C2550u;
    SET_GPR_U32(ctx, 31, 0x7C2558u);
    ctx->pc = 0x7C2554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2550u;
    // 0x7c2554: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C2550u, 0x7C2558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2558u;
label_7c2558:
    // 0x7c2558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c2558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c255c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7c255cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c2560: 0xae300078  sw          $s0, 0x78($s1)
    ctx->pc = 0x7c2560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
    // 0x7c2564: 0xa222000c  sb          $v0, 0xC($s1)
    ctx->pc = 0x7c2564u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x7c2568: 0xae2300f4  sw          $v1, 0xF4($s1)
    ctx->pc = 0x7c2568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
label_7c256c:
    // 0x7c256c: 0x3c10007d  lui         $s0, 0x7D
    ctx->pc = 0x7c256cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
    // 0x7c2570: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c2570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2574: 0xc1f0e34  jal         func_7C38D0
    ctx->pc = 0x7C2574u;
    SET_GPR_U32(ctx, 31, 0x7C257Cu);
    ctx->pc = 0x7C2578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2574u;
    // 0x7c2578: 0x26041740  addiu       $a0, $s0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C38D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C38D0u, 0x7C2574u, 0x7C257Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C257Cu;
label_7c257c:
    // 0x7c257c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c257cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2580: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7c2580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x7c2584: 0xc1f0b7a  jal         func_7C2DE8
    ctx->pc = 0x7C2584u;
    SET_GPR_U32(ctx, 31, 0x7C258Cu);
    ctx->pc = 0x7C2588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2584u;
    // 0x7c2588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C2DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C2DE8u, 0x7C2584u, 0x7C258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C258Cu;
label_7c258c:
    // 0x7c258c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C258Cu;
    {
        const bool branch_taken_0x7c258c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C2590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C258Cu;
        // 0x7c2590: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c258c) {
            ctx->pc = 0x7C259Cu;
            goto label_7c259c;
        }
    }
    ctx->pc = 0x7C2594u;
    // 0x7c2594: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x7C2594u;
    {
        const bool branch_taken_0x7c2594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2594u;
        // 0x7c2598: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2594) {
            ctx->pc = 0x7C265Cu;
            goto label_7c265c;
        }
    }
    ctx->pc = 0x7C259Cu;
label_7c259c:
    // 0x7c259c: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x7c259cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_7c25a0:
    // 0x7c25a0: 0x26041740  addiu       $a0, $s0, 0x1740
    ctx->pc = 0x7c25a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
    // 0x7c25a4: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C25A4u;
    SET_GPR_U32(ctx, 31, 0x7C25ACu);
    ctx->pc = 0x7C25A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C25A4u;
    // 0x7c25a8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C25A4u, 0x7C25ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C25ACu;
label_7c25ac:
    // 0x7c25ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7c25acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c25b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c25b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c25b4: 0x1602002e  bne         $s0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x7C25B4u;
    {
        const bool branch_taken_0x7c25b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C25B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C25B4u;
        // 0x7c25b8: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c25b4) {
            ctx->pc = 0x7C2670u;
            goto label_7c2670;
        }
    }
    ctx->pc = 0x7C25BCu;
    // 0x7c25bc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c25bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c25c0: 0xc1f0b90  jal         func_7C2E40
    ctx->pc = 0x7C25C0u;
    SET_GPR_U32(ctx, 31, 0x7C25C8u);
    ctx->pc = 0x7C25C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C25C0u;
    // 0x7c25c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C2E40u, 0x7C25C0u, 0x7C25C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C25C8u;
label_7c25c8:
    // 0x7c25c8: 0x54500003  bnel        $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C25C8u;
    {
        const bool branch_taken_0x7c25c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x7c25c8) {
            ctx->pc = 0x7C25CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C25C8u;
            // 0x7c25cc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C25D8u;
            goto label_7c25d8;
        }
    }
    ctx->pc = 0x7C25D0u;
    // 0x7c25d0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x7C25D0u;
    {
        const bool branch_taken_0x7c25d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C25D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C25D0u;
        // 0x7c25d4: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c25d0) {
            ctx->pc = 0x7C266Cu;
            goto label_7c266c;
        }
    }
    ctx->pc = 0x7C25D8u;
label_7c25d8:
    // 0x7c25d8: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x7C25D8u;
    {
        const bool branch_taken_0x7c25d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C25DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C25D8u;
        // 0x7c25dc: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c25d8) {
            ctx->pc = 0x7C276Cu;
            goto label_7c276c;
        }
    }
    ctx->pc = 0x7C25E0u;
label_7c25e0:
    // 0x7c25e0: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c25e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c25e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c25e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c25e8: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C25E8u;
    SET_GPR_U32(ctx, 31, 0x7C25F0u);
    ctx->pc = 0x7C25ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C25E8u;
    // 0x7c25ec: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C25E8u, 0x7C25F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C25F0u;
label_7c25f0:
    // 0x7c25f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7c25f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c25f4: 0x1443005e  bne         $v0, $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x7C25F4u;
    {
        const bool branch_taken_0x7c25f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x7C25F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C25F4u;
        // 0x7c25f8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c25f4) {
            ctx->pc = 0x7C2770u;
            goto label_7c2770;
        }
    }
    ctx->pc = 0x7C25FCu;
    // 0x7c25fc: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c25fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c2600: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x7c2600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
    // 0x7c2604: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x7C2604u;
    {
        const bool branch_taken_0x7c2604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2604u;
        // 0x7c2608: 0xae2000f4  sw          $zero, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2604) {
            ctx->pc = 0x7C2770u;
            goto label_7c2770;
        }
    }
    ctx->pc = 0x7C260Cu;
label_7c260c:
    // 0x7c260c: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c260cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c2610: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c2610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2614: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C2614u;
    SET_GPR_U32(ctx, 31, 0x7C261Cu);
    ctx->pc = 0x7C2618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2614u;
    // 0x7c2618: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C2614u, 0x7C261Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C261Cu;
label_7c261c:
    // 0x7c261c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7c261cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c2620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c2624: 0x14620052  bne         $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x7C2624u;
    {
        const bool branch_taken_0x7c2624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C2628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2624u;
        // 0x7c2628: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2624) {
            ctx->pc = 0x7C2770u;
            goto label_7c2770;
        }
    }
    ctx->pc = 0x7C262Cu;
    // 0x7c262c: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x7c262cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x7c2630: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x7C2630u;
    {
        const bool branch_taken_0x7c2630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x7C2634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2630u;
        // 0x7c2634: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2630) {
            ctx->pc = 0x7C265Cu;
            goto label_7c265c;
        }
    }
    ctx->pc = 0x7C2638u;
    // 0x7c2638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c2638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c263c: 0xc1f1eb8  jal         func_7C7AE0
    ctx->pc = 0x7C263Cu;
    SET_GPR_U32(ctx, 31, 0x7C2644u);
    ctx->pc = 0x7C2640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C263Cu;
    // 0x7c2640: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C263Cu, 0x7C2644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2644u;
label_7c2644:
    // 0x7c2644: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x7c2644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7c2648: 0xae300078  sw          $s0, 0x78($s1)
    ctx->pc = 0x7c2648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
    // 0x7c264c: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x7c264cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x7c2650: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c2650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c2654: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x7C2654u;
    {
        const bool branch_taken_0x7c2654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2654u;
        // 0x7c2658: 0xae2000f4  sw          $zero, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2654) {
            ctx->pc = 0x7C276Cu;
            goto label_7c276c;
        }
    }
    ctx->pc = 0x7C265Cu;
label_7c265c:
    // 0x7c265c: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c265cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c2660: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x7c2660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x7c2664: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x7C2664u;
    {
        const bool branch_taken_0x7c2664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2664u;
        // 0x7c2668: 0xae2000f4  sw          $zero, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2664) {
            ctx->pc = 0x7C276Cu;
            goto label_7c276c;
        }
    }
    ctx->pc = 0x7C266Cu;
label_7c266c:
    // 0x7c266c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7c266cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_7c2670:
    // 0x7c2670: 0x3c040c00  lui         $a0, 0xC00
    ctx->pc = 0x7c2670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3072 << 16));
    // 0x7c2674: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x7c2674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x7c2678: 0xdc4301b0  ld          $v1, 0x1B0($v0)
    ctx->pc = 0x7c2678u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x7c267c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7c267cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7c2680: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x7C2680u;
    {
        const bool branch_taken_0x7c2680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2680u;
        // 0x7c2684: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2680) {
            ctx->pc = 0x7C26BCu;
            goto label_7c26bc;
        }
    }
    ctx->pc = 0x7C2688u;
    // 0x7c2688: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c2688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c268c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c268cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c2690: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x7c2690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x7c2694: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c2694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c2698: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c2698u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c269c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c269cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c26a0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C26A0u;
    SET_GPR_U32(ctx, 31, 0x7C26A8u);
    ctx->pc = 0x7C26A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C26A0u;
    // 0x7c26a4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C26A0u, 0x7C26A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C26A8u;
label_7c26a8:
    // 0x7c26a8: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x7c26a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x7c26ac: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x7c26acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x7c26b0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x7c26b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x7c26b4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x7C26B4u;
    {
        const bool branch_taken_0x7c26b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C26B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C26B4u;
        // 0x7c26b8: 0xa223000c  sb          $v1, 0xC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c26b4) {
            ctx->pc = 0x7C276Cu;
            goto label_7c276c;
        }
    }
    ctx->pc = 0x7C26BCu;
label_7c26bc:
    // 0x7c26bc: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x7c26bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x7c26c0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x7c26c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x7c26c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x7c26c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x7c26c8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x7C26C8u;
    {
        const bool branch_taken_0x7c26c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C26C8u;
        // 0x7c26cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c26c8) {
            ctx->pc = 0x7C2730u;
            goto label_7c2730;
        }
    }
    ctx->pc = 0x7C26D0u;
    // 0x7c26d0: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x7c26d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x7c26d4: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7C26D4u;
    {
        const bool branch_taken_0x7c26d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C26D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C26D4u;
        // 0x7c26d8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c26d4) {
            ctx->pc = 0x7C2704u;
            goto label_7c2704;
        }
    }
    ctx->pc = 0x7C26DCu;
    // 0x7c26dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c26dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c26e0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c26e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c26e4: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x7c26e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x7c26e8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c26e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c26ec: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c26ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c26f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c26f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c26f4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C26F4u;
    SET_GPR_U32(ctx, 31, 0x7C26FCu);
    ctx->pc = 0x7C26F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C26F4u;
    // 0x7c26f8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C26F4u, 0x7C26FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C26FCu;
label_7c26fc:
    // 0x7c26fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x7C26FCu;
    {
        const bool branch_taken_0x7c26fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C26FCu;
        // 0x7c2700: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c26fc) {
            ctx->pc = 0x7C2728u;
            goto label_7c2728;
        }
    }
    ctx->pc = 0x7C2704u;
label_7c2704:
    // 0x7c2704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c2704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2708: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c2708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c270c: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x7c270cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x7c2710: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c2710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c2714: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c2714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c2718: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c2718u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c271c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C271Cu;
    SET_GPR_U32(ctx, 31, 0x7C2724u);
    ctx->pc = 0x7C2720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C271Cu;
    // 0x7c2720: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C271Cu, 0x7C2724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2724u;
label_7c2724:
    // 0x7c2724: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x7c2724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_7c2728:
    // 0x7c2728: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x7C2728u;
    {
        const bool branch_taken_0x7c2728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2728u;
        // 0x7c272c: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2728) {
            ctx->pc = 0x7C276Cu;
            goto label_7c276c;
        }
    }
    ctx->pc = 0x7C2730u;
label_7c2730:
    // 0x7c2730: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x7c2730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x7c2734: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x7c2734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x7c2738: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7C2738u;
    {
        const bool branch_taken_0x7c2738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2738u;
        // 0x7c273c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2738) {
            ctx->pc = 0x7C276Cu;
            goto label_7c276c;
        }
    }
    ctx->pc = 0x7C2740u;
    // 0x7c2740: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c2740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2744: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c2744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c2748: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x7c2748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x7c274c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c274cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c2750: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c2750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c2754: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c2754u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2758: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C2758u;
    SET_GPR_U32(ctx, 31, 0x7C2760u);
    ctx->pc = 0x7C275Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2758u;
    // 0x7c275c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C2758u, 0x7C2760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2760u;
label_7c2760:
    // 0x7c2760: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x7c2760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7c2764: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x7c2764u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x7c2768: 0xae2300f4  sw          $v1, 0xF4($s1)
    ctx->pc = 0x7c2768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
label_7c276c:
    // 0x7c276c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7c276cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_7c2770:
    // 0x7c2770: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7c2770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c2774: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c2774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c2778: 0x3e00008  jr          $ra
    ctx->pc = 0x7C2778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2778u;
        // 0x7c277c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C2778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C2780u;
}
} // namespace gh_mcport
