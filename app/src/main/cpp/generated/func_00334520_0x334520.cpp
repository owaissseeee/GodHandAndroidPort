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

// Function: func_00334520
// Address: 0x334520 - 0x334698
void func_00334520_0x334520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00334520_0x334520");
#endif

    switch (ctx->pc) {
        case 0x334570u: goto label_334570;
        case 0x334590u: goto label_334590;
        case 0x3345a0u: goto label_3345a0;
        case 0x3345c0u: goto label_3345c0;
        case 0x3345d0u: goto label_3345d0;
        case 0x3345d8u: goto label_3345d8;
        case 0x3345f0u: goto label_3345f0;
        case 0x334600u: goto label_334600;
        case 0x33460cu: goto label_33460c;
        case 0x334628u: goto label_334628;
        case 0x334630u: goto label_334630;
        default: break;
    }

    ctx->pc = 0x334520u;

    // 0x334520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x334520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x334524: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x334524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x334528: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x334528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33452c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x33452cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x334530: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x334530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x334534: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x334534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x334538: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x334538u;
    {
        const bool branch_taken_0x334538 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x33453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334538u;
        // 0x33453c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334538) {
            ctx->pc = 0x334550u;
            goto label_334550;
        }
    }
    ctx->pc = 0x334540u;
    // 0x334540: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x334540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x334544: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x334544u;
    {
        const bool branch_taken_0x334544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334544u;
        // 0x334548: 0x24a54878  addiu       $a1, $a1, 0x4878 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334544) {
            ctx->pc = 0x334588u;
            goto label_334588;
        }
    }
    ctx->pc = 0x33454Cu;
    // 0x33454c: 0x0  nop
    ctx->pc = 0x33454cu;
    // NOP
label_334550:
    // 0x334550: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x334550u;
    {
        const bool branch_taken_0x334550 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x334554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334550u;
        // 0x334554: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334550) {
            ctx->pc = 0x334568u;
            goto label_334568;
        }
    }
    ctx->pc = 0x334558u;
    // 0x334558: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x334558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33455c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x33455Cu;
    {
        const bool branch_taken_0x33455c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33455Cu;
        // 0x334560: 0x24a548a0  addiu       $a1, $a1, 0x48A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33455c) {
            ctx->pc = 0x334588u;
            goto label_334588;
        }
    }
    ctx->pc = 0x334564u;
    // 0x334564: 0x0  nop
    ctx->pc = 0x334564u;
    // NOP
label_334568:
    // 0x334568: 0xc0cd132  jal         func_3344C8
    ctx->pc = 0x334568u;
    SET_GPR_U32(ctx, 31, 0x334570u);
    ctx->pc = 0x3344C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3344C8u, 0x334568u, 0x334570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334570u;
label_334570:
    // 0x334570: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x334570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334574: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x334574u;
    {
        const bool branch_taken_0x334574 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x334578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334574u;
        // 0x334578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334574) {
            ctx->pc = 0x334598u;
            goto label_334598;
        }
    }
    ctx->pc = 0x33457Cu;
    // 0x33457c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x33457cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x334580: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x334580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334584: 0x24a548c8  addiu       $a1, $a1, 0x48C8
    ctx->pc = 0x334584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18632));
label_334588:
    // 0x334588: 0xc0cd002  jal         func_334008
    ctx->pc = 0x334588u;
    SET_GPR_U32(ctx, 31, 0x334590u);
    ctx->pc = 0x334008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334008u, 0x334588u, 0x334590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334590u;
label_334590:
    // 0x334590: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x334590u;
    {
        const bool branch_taken_0x334590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334590u;
        // 0x334594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334590) {
            ctx->pc = 0x334680u;
            goto label_334680;
        }
    }
    ctx->pc = 0x334598u;
label_334598:
    // 0x334598: 0xc0cd470  jal         func_3351C0
    ctx->pc = 0x334598u;
    SET_GPR_U32(ctx, 31, 0x3345A0u);
    ctx->pc = 0x33459Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334598u;
    // 0x33459c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3351C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3351C0u, 0x334598u, 0x3345A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3345A0u;
label_3345a0:
    // 0x3345a0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3345a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3345a4: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3345A4u;
    {
        const bool branch_taken_0x3345a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3345A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3345A4u;
        // 0x3345a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3345a4) {
            ctx->pc = 0x334638u;
            goto label_334638;
        }
    }
    ctx->pc = 0x3345ACu;
    // 0x3345ac: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3345acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x3345b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3345b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3345b4: 0x2452a250  addiu       $s2, $v0, -0x5DB0
    ctx->pc = 0x3345b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x3345b8: 0xc0cd35a  jal         func_334D68
    ctx->pc = 0x3345B8u;
    SET_GPR_U32(ctx, 31, 0x3345C0u);
    ctx->pc = 0x3345BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3345B8u;
    // 0x3345bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334D68u, 0x3345B8u, 0x3345C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3345C0u;
label_3345c0:
    // 0x3345c0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3345c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3345c4: 0x248448f8  addiu       $a0, $a0, 0x48F8
    ctx->pc = 0x3345c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18680));
    // 0x3345c8: 0xc0c9814  jal         func_326050
    ctx->pc = 0x3345C8u;
    SET_GPR_U32(ctx, 31, 0x3345D0u);
    ctx->pc = 0x3345CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3345C8u;
    // 0x3345cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326050u, 0x3345C8u, 0x3345D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3345D0u;
label_3345d0:
    // 0x3345d0: 0xc0cd0c4  jal         func_334310
    ctx->pc = 0x3345D0u;
    SET_GPR_U32(ctx, 31, 0x3345D8u);
    ctx->pc = 0x3345D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3345D0u;
    // 0x3345d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334310u, 0x3345D0u, 0x3345D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3345D8u;
label_3345d8:
    // 0x3345d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3345d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3345dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3345dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3345e0: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x3345E0u;
    {
        const bool branch_taken_0x3345e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3345E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3345E0u;
        // 0x3345e4: 0xfe030008  sd          $v1, 0x8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3345e0) {
            ctx->pc = 0x334680u;
            goto label_334680;
        }
    }
    ctx->pc = 0x3345E8u;
    // 0x3345e8: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x3345E8u;
    SET_GPR_U32(ctx, 31, 0x3345F0u);
    ctx->pc = 0x3345ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3345E8u;
    // 0x3345ec: 0x24044900  addiu       $a0, $zero, 0x4900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x3345E8u, 0x3345F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3345F0u;
label_3345f0:
    // 0x3345f0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3345f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x3345f4: 0x8c45a390  lw          $a1, -0x5C70($v0)
    ctx->pc = 0x3345f4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3DA390u));
    // 0x3345f8: 0xc0cc7ba  jal         func_331EE8
    ctx->pc = 0x3345F8u;
    SET_GPR_U32(ctx, 31, 0x334600u);
    ctx->pc = 0x3345FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3345F8u;
    // 0x3345fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331EE8u, 0x3345F8u, 0x334600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334600u;
label_334600:
    // 0x334600: 0x24044901  addiu       $a0, $zero, 0x4901
    ctx->pc = 0x334600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18689));
    // 0x334604: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x334604u;
    SET_GPR_U32(ctx, 31, 0x33460Cu);
    ctx->pc = 0x334608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334604u;
    // 0x334608: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x334604u, 0x33460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33460Cu;
label_33460c:
    // 0x33460c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x33460cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x334610: 0x443000e  bgezl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x334610u;
    {
        const bool branch_taken_0x334610 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x334610) {
            ctx->pc = 0x334614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334610u;
            // 0x334614: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33464Cu;
            goto label_33464c;
        }
    }
    ctx->pc = 0x334618u;
    // 0x334618: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x334618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x33461c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33461cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334620: 0xc0cd002  jal         func_334008
    ctx->pc = 0x334620u;
    SET_GPR_U32(ctx, 31, 0x334628u);
    ctx->pc = 0x334624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334620u;
    // 0x334624: 0x24a54920  addiu       $a1, $a1, 0x4920 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334008u, 0x334620u, 0x334628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334628u;
label_334628:
    // 0x334628: 0xc0cd140  jal         func_334500
    ctx->pc = 0x334628u;
    SET_GPR_U32(ctx, 31, 0x334630u);
    ctx->pc = 0x33462Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334628u;
    // 0x33462c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334500u, 0x334628u, 0x334630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334630u;
label_334630:
    // 0x334630: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x334630u;
    {
        const bool branch_taken_0x334630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334630u;
        // 0x334634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334630) {
            ctx->pc = 0x334680u;
            goto label_334680;
        }
    }
    ctx->pc = 0x334638u;
label_334638:
    // 0x334638: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x334638u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x33463c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x33463cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334640: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x334640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x334644: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x334644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x334648: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x334648u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
label_33464c:
    // 0x33464c: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x33464cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x334650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x334650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334654: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x334654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x334658: 0x646307ff  daddiu      $v1, $v1, 0x7FF
    ctx->pc = 0x334658u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)2047);
    // 0x33465c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x33465cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x334660: 0x31d78  dsll        $v1, $v1, 21
    ctx->pc = 0x334660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 21);
    // 0x334664: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x334664u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x334668: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x334668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x33466c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x33466cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x334670: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x334670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x334674: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x334674u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x334678: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x334678u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x33467c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33467cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_334680:
    // 0x334680: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x334680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334684: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x334684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x334688: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x334688u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33468c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x33468cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x334690: 0x3e00008  jr          $ra
    ctx->pc = 0x334690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334690u;
        // 0x334694: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334698u;
}
