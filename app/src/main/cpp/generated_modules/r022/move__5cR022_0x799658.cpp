#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: move__5cR022
// Address: 0x799658 - 0x799960
void move__5cR022_0x799658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("move__5cR022_0x799658");
#endif

    switch (ctx->pc) {
        case 0x7996b4u: goto label_7996b4;
        case 0x7996ccu: goto label_7996cc;
        case 0x7996dcu: goto label_7996dc;
        case 0x7996ecu: goto label_7996ec;
        case 0x7996fcu: goto label_7996fc;
        case 0x79970cu: goto label_79970c;
        case 0x79971cu: goto label_79971c;
        case 0x799748u: goto label_799748;
        case 0x799778u: goto label_799778;
        case 0x79978cu: goto label_79978c;
        case 0x79979cu: goto label_79979c;
        case 0x7997b8u: goto label_7997b8;
        case 0x7997d4u: goto label_7997d4;
        case 0x7997f0u: goto label_7997f0;
        case 0x799810u: goto label_799810;
        case 0x799880u: goto label_799880;
        case 0x799898u: goto label_799898;
        case 0x7998ccu: goto label_7998cc;
        case 0x79993cu: goto label_79993c;
        default: break;
    }

    ctx->pc = 0x799658u;

    // 0x799658: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x799658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79965c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79965cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x799660: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x799660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x799664: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x799664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799668: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x799668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x79966c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x79966cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x799670: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x799670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x799674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799678: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x799678u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79967c: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x79967cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x799680: 0x104000a9  beqz        $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x799680u;
    {
        const bool branch_taken_0x799680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799680u;
        // 0x799684: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799680) {
            ctx->pc = 0x799928u;
            goto label_799928;
        }
    }
    ctx->pc = 0x799688u;
    // 0x799688: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x799688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79968c: 0x2442cc30  addiu       $v0, $v0, -0x33D0
    ctx->pc = 0x79968cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954032));
    // 0x799690: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x799690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x799694: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x799694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799698: 0x800008  jr          $a0
    ctx->pc = 0x799698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7996A0u: goto label_7996a0;
            case 0x7996C4u: goto label_7996c4;
            case 0x7996D4u: goto label_7996d4;
            case 0x7996E4u: goto label_7996e4;
            case 0x7996F4u: goto label_7996f4;
            case 0x799704u: goto label_799704;
            case 0x799714u: goto label_799714;
            case 0x799724u: goto label_799724;
            case 0x799754u: goto label_799754;
            case 0x799878u: goto label_799878;
            case 0x7998A4u: goto label_7998a4;
            case 0x7998D4u: goto label_7998d4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799698u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7996A0u;
label_7996a0:
    // 0x7996a0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x7996a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x7996a4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x7996a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x7996a8: 0x8c45a994  lw          $a1, -0x566C($v0)
    ctx->pc = 0x7996a8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x61A994u));
    // 0x7996ac: 0xc07f18c  jal         func_1FC630
    ctx->pc = 0x7996ACu;
    SET_GPR_U32(ctx, 31, 0x7996B4u);
    ctx->pc = 0x7996B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996ACu;
    // 0x7996b0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC630u, 0x7996ACu, 0x7996B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996B4u;
label_7996b4:
    // 0x7996b4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x7996b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7996b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7996b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7996bc: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x7996BCu;
    {
        const bool branch_taken_0x7996bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996BCu;
        // 0x7996c0: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996bc) {
            ctx->pc = 0x799928u;
            goto label_799928;
        }
    }
    ctx->pc = 0x7996C4u;
label_7996c4:
    // 0x7996c4: 0xc1e66b4  jal         func_799AD0
    ctx->pc = 0x7996C4u;
    SET_GPR_U32(ctx, 31, 0x7996CCu);
    ctx->pc = 0x7996C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996C4u;
    // 0x7996c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799AD0u, 0x7996C4u, 0x7996CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996CCu;
label_7996cc:
    // 0x7996cc: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x7996CCu;
    {
        const bool branch_taken_0x7996cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996CCu;
        // 0x7996d0: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996cc) {
            ctx->pc = 0x79992Cu;
            goto label_79992c;
        }
    }
    ctx->pc = 0x7996D4u;
label_7996d4:
    // 0x7996d4: 0xc1e68de  jal         func_79A378
    ctx->pc = 0x7996D4u;
    SET_GPR_U32(ctx, 31, 0x7996DCu);
    ctx->pc = 0x7996D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996D4u;
    // 0x7996d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A378u, 0x7996D4u, 0x7996DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996DCu;
label_7996dc:
    // 0x7996dc: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x7996DCu;
    {
        const bool branch_taken_0x7996dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996DCu;
        // 0x7996e0: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996dc) {
            ctx->pc = 0x79992Cu;
            goto label_79992c;
        }
    }
    ctx->pc = 0x7996E4u;
label_7996e4:
    // 0x7996e4: 0xc1e694c  jal         func_79A530
    ctx->pc = 0x7996E4u;
    SET_GPR_U32(ctx, 31, 0x7996ECu);
    ctx->pc = 0x7996E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996E4u;
    // 0x7996e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A530u, 0x7996E4u, 0x7996ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996ECu;
label_7996ec:
    // 0x7996ec: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x7996ECu;
    {
        const bool branch_taken_0x7996ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996ECu;
        // 0x7996f0: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996ec) {
            ctx->pc = 0x79992Cu;
            goto label_79992c;
        }
    }
    ctx->pc = 0x7996F4u;
label_7996f4:
    // 0x7996f4: 0xc1e6748  jal         func_799D20
    ctx->pc = 0x7996F4u;
    SET_GPR_U32(ctx, 31, 0x7996FCu);
    ctx->pc = 0x7996F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996F4u;
    // 0x7996f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799D20u, 0x7996F4u, 0x7996FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996FCu;
label_7996fc:
    // 0x7996fc: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x7996FCu;
    {
        const bool branch_taken_0x7996fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996FCu;
        // 0x799700: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996fc) {
            ctx->pc = 0x79992Cu;
            goto label_79992c;
        }
    }
    ctx->pc = 0x799704u;
label_799704:
    // 0x799704: 0xc1e666c  jal         func_7999B0
    ctx->pc = 0x799704u;
    SET_GPR_U32(ctx, 31, 0x79970Cu);
    ctx->pc = 0x799708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799704u;
    // 0x799708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7999B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7999B0u, 0x799704u, 0x79970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79970Cu;
label_79970c:
    // 0x79970c: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x79970Cu;
    {
        const bool branch_taken_0x79970c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79970Cu;
        // 0x799710: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79970c) {
            ctx->pc = 0x79992Cu;
            goto label_79992c;
        }
    }
    ctx->pc = 0x799714u;
label_799714:
    // 0x799714: 0xc1e6b8a  jal         func_79AE28
    ctx->pc = 0x799714u;
    SET_GPR_U32(ctx, 31, 0x79971Cu);
    ctx->pc = 0x799718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799714u;
    // 0x799718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AE28u, 0x799714u, 0x79971Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79971Cu;
label_79971c:
    // 0x79971c: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x79971Cu;
    {
        const bool branch_taken_0x79971c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79971Cu;
        // 0x799720: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79971c) {
            ctx->pc = 0x79992Cu;
            goto label_79992c;
        }
    }
    ctx->pc = 0x799724u;
label_799724:
    // 0x799724: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x799724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x799728: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79972c: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x79972cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x799730: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x799730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799734: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799738: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799738u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79973c: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x79973cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x799740: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x799740u;
    SET_GPR_U32(ctx, 31, 0x799748u);
    ctx->pc = 0x799744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799740u;
    // 0x799744: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x799740u, 0x799748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799748u;
label_799748:
    // 0x799748: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x799748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x79974c: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x79974Cu;
    {
        const bool branch_taken_0x79974c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79974Cu;
        // 0x799750: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79974c) {
            ctx->pc = 0x799928u;
            goto label_799928;
        }
    }
    ctx->pc = 0x799754u;
label_799754:
    // 0x799754: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x799754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x799758: 0x9062748c  lbu         $v0, 0x748C($v1)
    ctx->pc = 0x799758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x79975c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x79975cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x799760: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x799760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x799764: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x799764u;
    {
        const bool branch_taken_0x799764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799764u;
        // 0x799768: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799764) {
            ctx->pc = 0x79992Cu;
            goto label_79992c;
        }
    }
    ctx->pc = 0x79976Cu;
    // 0x79976c: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x79976cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
    // 0x799770: 0xc1e6660  jal         func_799980
    ctx->pc = 0x799770u;
    SET_GPR_U32(ctx, 31, 0x799778u);
    ctx->pc = 0x799774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799770u;
    // 0x799774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799980u, 0x799770u, 0x799778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799778u;
label_799778:
    // 0x799778: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x799778u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79977c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x79977cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x799780: 0x24529b70  addiu       $s2, $v0, -0x6490
    ctx->pc = 0x799780u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x799784: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x799784u;
    SET_GPR_U32(ctx, 31, 0x79978Cu);
    ctx->pc = 0x799788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799784u;
    // 0x799788: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x799784u, 0x79978Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79978Cu;
label_79978c:
    // 0x79978c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79978cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799790: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799794: 0xc07e9a4  jal         func_1FA690
    ctx->pc = 0x799794u;
    SET_GPR_U32(ctx, 31, 0x79979Cu);
    ctx->pc = 0x799798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799794u;
    // 0x799798: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA690u, 0x799794u, 0x79979Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79979Cu;
label_79979c:
    // 0x79979c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79979cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x7997a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7997a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997a4: 0x24717a24  addiu       $s1, $v1, 0x7A24
    ctx->pc = 0x7997a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 31268));
    // 0x7997a8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x7997a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A28u));
    // 0x7997ac: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x7997acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x7997b0: 0xc07f054  jal         func_1FC150
    ctx->pc = 0x7997B0u;
    SET_GPR_U32(ctx, 31, 0x7997B8u);
    ctx->pc = 0x7997B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997B0u;
    // 0x7997b4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC150u, 0x7997B0u, 0x7997B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997B8u;
label_7997b8:
    // 0x7997b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7997B8u;
    {
        const bool branch_taken_0x7997b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997B8u;
        // 0x7997bc: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997b8) {
            ctx->pc = 0x7997CCu;
            goto label_7997cc;
        }
    }
    ctx->pc = 0x7997C0u;
    // 0x7997c0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x7997c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7997c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7997c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7997c8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x7997c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_7997cc:
    // 0x7997cc: 0xc07e99e  jal         func_1FA678
    ctx->pc = 0x7997CCu;
    SET_GPR_U32(ctx, 31, 0x7997D4u);
    ctx->pc = 0x7997D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997CCu;
    // 0x7997d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA678u, 0x7997CCu, 0x7997D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997D4u;
label_7997d4:
    // 0x7997d4: 0x14530004  bne         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x7997D4u;
    {
        const bool branch_taken_0x7997d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x7997D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997D4u;
        // 0x7997d8: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997d4) {
            ctx->pc = 0x7997E8u;
            goto label_7997e8;
        }
    }
    ctx->pc = 0x7997DCu;
    // 0x7997dc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x7997dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7997e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7997e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7997e4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x7997e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_7997e8:
    // 0x7997e8: 0xc07e99e  jal         func_1FA678
    ctx->pc = 0x7997E8u;
    SET_GPR_U32(ctx, 31, 0x7997F0u);
    ctx->pc = 0x7997ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997E8u;
    // 0x7997ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA678u, 0x7997E8u, 0x7997F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997F0u;
label_7997f0:
    // 0x7997f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x7997f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7997f4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7997F4u;
    {
        const bool branch_taken_0x7997f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x7997F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997F4u;
        // 0x7997f8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997f4) {
            ctx->pc = 0x799808u;
            goto label_799808;
        }
    }
    ctx->pc = 0x7997FCu;
    // 0x7997fc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x7997fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x799800: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x799800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x799804: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x799804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_799808:
    // 0x799808: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x799808u;
    SET_GPR_U32(ctx, 31, 0x799810u);
    ctx->pc = 0x79980Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799808u;
    // 0x79980c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x799808u, 0x799810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799810u;
label_799810:
    // 0x799810: 0x2c420063  sltiu       $v0, $v0, 0x63
    ctx->pc = 0x799810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x799814: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x799814u;
    {
        const bool branch_taken_0x799814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799814u;
        // 0x799818: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799814) {
            ctx->pc = 0x799870u;
            goto label_799870;
        }
    }
    ctx->pc = 0x79981Cu;
    // 0x79981c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x79981cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x799820: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x799820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x799824: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x799824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x799828: 0x3c070020  lui         $a3, 0x20
    ctx->pc = 0x799828u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32 << 16));
    // 0x79982c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x79982cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x799830: 0x3c080800  lui         $t0, 0x800
    ctx->pc = 0x799830u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2048 << 16));
    // 0x799834: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x799834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x799838: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x799838u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x79983c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x79983cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x799840: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x799840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x799844: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x799844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x799848: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x799848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x79984c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x79984cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x799850: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x799850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x799854: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x799854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x799858: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x799858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79985c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x79985cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x799860: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x799860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x799864: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x799864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x799868: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x799868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x79986c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x79986cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_799870:
    // 0x799870: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x799870u;
    {
        const bool branch_taken_0x799870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799870u;
        // 0x799874: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799870) {
            ctx->pc = 0x799928u;
            goto label_799928;
        }
    }
    ctx->pc = 0x799878u;
label_799878:
    // 0x799878: 0xc1e6b56  jal         func_79AD58
    ctx->pc = 0x799878u;
    SET_GPR_U32(ctx, 31, 0x799880u);
    ctx->pc = 0x79987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799878u;
    // 0x79987c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD58u, 0x799878u, 0x799880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799880u;
label_799880:
    // 0x799880: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x799880u;
    {
        const bool branch_taken_0x799880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799880u;
        // 0x799884: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799880) {
            ctx->pc = 0x799928u;
            goto label_799928;
        }
    }
    ctx->pc = 0x799888u;
    // 0x799888: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79988c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79988cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799890: 0xc0c3970  jal         func_30E5C0
    ctx->pc = 0x799890u;
    SET_GPR_U32(ctx, 31, 0x799898u);
    ctx->pc = 0x799894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799890u;
    // 0x799894: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E5C0u, 0x799890u, 0x799898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799898u;
label_799898:
    // 0x799898: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x799898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x79989c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x79989Cu;
    {
        const bool branch_taken_0x79989c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79989Cu;
        // 0x7998a0: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79989c) {
            ctx->pc = 0x799928u;
            goto label_799928;
        }
    }
    ctx->pc = 0x7998A4u;
label_7998a4:
    // 0x7998a4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x7998a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x7998a8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x7998a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7998ac: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7998acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7998b0: 0x0  nop
    ctx->pc = 0x7998b0u;
    // NOP
    // 0x7998b4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7998b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7998b8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7998b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7998bc: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x7998bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x7998c0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7998c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7998c4: 0xc0b4526  jal         func_2D1498
    ctx->pc = 0x7998C4u;
    SET_GPR_U32(ctx, 31, 0x7998CCu);
    ctx->pc = 0x7998C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998C4u;
    // 0x7998c8: 0xae0300d4  sw          $v1, 0xD4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1498u, 0x7998C4u, 0x7998CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998CCu;
label_7998cc:
    // 0x7998cc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x7998CCu;
    {
        const bool branch_taken_0x7998cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998CCu;
        // 0x7998d0: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998cc) {
            ctx->pc = 0x79992Cu;
            goto label_79992c;
        }
    }
    ctx->pc = 0x7998D4u;
label_7998d4:
    // 0x7998d4: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x7998d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x7998d8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x7998d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x7998dc: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x7998dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x7998e0: 0xae0400d4  sw          $a0, 0xD4($s0)
    ctx->pc = 0x7998e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 4));
    // 0x7998e4: 0x9062748c  lbu         $v0, 0x748C($v1)
    ctx->pc = 0x7998e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x7998e8: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x7998e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x7998ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7998ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7998f0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7998F0u;
    {
        const bool branch_taken_0x7998f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998F0u;
        // 0x7998f4: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998f0) {
            ctx->pc = 0x79992Cu;
            goto label_79992c;
        }
    }
    ctx->pc = 0x7998F8u;
    // 0x7998f8: 0x481000d  bgez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x7998F8u;
    {
        const bool branch_taken_0x7998f8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x7998FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998F8u;
        // 0x7998fc: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998f8) {
            ctx->pc = 0x799930u;
            goto label_799930;
        }
    }
    ctx->pc = 0x799900u;
    // 0x799900: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x799900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x799904: 0x3c04fffb  lui         $a0, 0xFFFB
    ctx->pc = 0x799904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65531 << 16));
    // 0x799908: 0x8ca27a24  lw          $v0, 0x7A24($a1)
    ctx->pc = 0x799908u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x79990c: 0x24a67a24  addiu       $a2, $a1, 0x7A24
    ctx->pc = 0x79990cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 31268));
    // 0x799910: 0x8cc30060  lw          $v1, 0x60($a2)
    ctx->pc = 0x799910u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x799914: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x799914u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x799918: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x799918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x79991c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79991cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799920: 0xaca27a24  sw          $v0, 0x7A24($a1)
    ctx->pc = 0x799920u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 31268), GPR_U32(ctx, 2));
    // 0x799924: 0xacc30060  sw          $v1, 0x60($a2)
    ctx->pc = 0x799924u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 96), GPR_U32(ctx, 3));
label_799928:
    // 0x799928: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x799928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_79992c:
    // 0x79992c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x79992cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_799930:
    // 0x799930: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x799930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x799934: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x799934u;
    SET_GPR_U32(ctx, 31, 0x79993Cu);
    ctx->pc = 0x799938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799934u;
    // 0x799938: 0xa462ae40  sh          $v0, -0x51C0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294946368), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x799934u, 0x79993Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79993Cu;
label_79993c:
    // 0x79993c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79993cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799940: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x799940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799944: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x799944u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799948: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x799948u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79994c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x79994cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799954: 0x3e00008  jr          $ra
    ctx->pc = 0x799954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799954u;
        // 0x799958: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79995Cu;
    // 0x79995c: 0x0  nop
    ctx->pc = 0x79995cu;
    // NOP
    ctx->pc = 0x799960u;
}
} // namespace gh_r022
