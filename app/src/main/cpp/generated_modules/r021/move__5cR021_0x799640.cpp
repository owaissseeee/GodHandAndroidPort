#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r021_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r021
{
// Function: move__5cR021
// Address: 0x799640 - 0x799900
void move__5cR021_0x799640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("move__5cR021_0x799640");
#endif

    switch (ctx->pc) {
        case 0x79968cu: goto label_79968c;
        case 0x7996a8u: goto label_7996a8;
        case 0x7996b8u: goto label_7996b8;
        case 0x7996c8u: goto label_7996c8;
        case 0x7996d8u: goto label_7996d8;
        case 0x7996e8u: goto label_7996e8;
        case 0x799714u: goto label_799714;
        case 0x799744u: goto label_799744;
        case 0x799760u: goto label_799760;
        case 0x799768u: goto label_799768;
        case 0x799778u: goto label_799778;
        case 0x79978cu: goto label_79978c;
        case 0x799794u: goto label_799794;
        case 0x7997b8u: goto label_7997b8;
        case 0x7997d4u: goto label_7997d4;
        case 0x799890u: goto label_799890;
        case 0x7998a4u: goto label_7998a4;
        case 0x7998c8u: goto label_7998c8;
        case 0x7998d0u: goto label_7998d0;
        case 0x7998e4u: goto label_7998e4;
        default: break;
    }

    ctx->pc = 0x799640u;

    // 0x799640: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x799644: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x799644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x799648: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x799648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79964c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79964cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799650: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x799650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x799654: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799658: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x799658u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79965c: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x79965cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x799660: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x799660u;
    {
        const bool branch_taken_0x799660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799660u;
        // 0x799664: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799660) {
            ctx->pc = 0x7998D0u;
            goto label_7998d0;
        }
    }
    ctx->pc = 0x799668u;
    // 0x799668: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x799668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79966c: 0x2442bc30  addiu       $v0, $v0, -0x43D0
    ctx->pc = 0x79966cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949936));
    // 0x799670: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x799670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x799674: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x799674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799678: 0x800008  jr          $a0
    ctx->pc = 0x799678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x799680u: goto label_799680;
            case 0x7996A0u: goto label_7996a0;
            case 0x7996B0u: goto label_7996b0;
            case 0x7996C0u: goto label_7996c0;
            case 0x7996D0u: goto label_7996d0;
            case 0x7996E0u: goto label_7996e0;
            case 0x7996F0u: goto label_7996f0;
            case 0x799714u: goto label_799714;
            case 0x799724u: goto label_799724;
            case 0x799770u: goto label_799770;
            case 0x7997E0u: goto label_7997e0;
            case 0x799810u: goto label_799810;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799678u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x799680u;
label_799680:
    // 0x799680: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x799680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x799684: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x799684u;
    SET_GPR_U32(ctx, 31, 0x79968Cu);
    ctx->pc = 0x799688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799684u;
    // 0x799688: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x799684u, 0x79968Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79968Cu;
label_79968c:
    // 0x79968c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x79968Cu;
    {
        const bool branch_taken_0x79968c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79968Cu;
        // 0x799690: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79968c) {
            ctx->pc = 0x799698u;
            goto label_799698;
        }
    }
    ctx->pc = 0x799694u;
    // 0x799694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799698:
    // 0x799698: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x799698u;
    {
        const bool branch_taken_0x799698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799698u;
        // 0x79969c: 0xa622012a  sh          $v0, 0x12A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 298), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799698) {
            ctx->pc = 0x799714u;
            goto label_799714;
        }
    }
    ctx->pc = 0x7996A0u;
label_7996a0:
    // 0x7996a0: 0xc1e66e8  jal         func_799BA0
    ctx->pc = 0x7996A0u;
    SET_GPR_U32(ctx, 31, 0x7996A8u);
    ctx->pc = 0x7996A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996A0u;
    // 0x7996a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799BA0u, 0x7996A0u, 0x7996A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996A8u;
label_7996a8:
    // 0x7996a8: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x7996A8u;
    {
        const bool branch_taken_0x7996a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996A8u;
        // 0x7996ac: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996a8) {
            ctx->pc = 0x7998D4u;
            goto label_7998d4;
        }
    }
    ctx->pc = 0x7996B0u;
label_7996b0:
    // 0x7996b0: 0xc1e6950  jal         func_79A540
    ctx->pc = 0x7996B0u;
    SET_GPR_U32(ctx, 31, 0x7996B8u);
    ctx->pc = 0x7996B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996B0u;
    // 0x7996b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A540u, 0x7996B0u, 0x7996B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996B8u;
label_7996b8:
    // 0x7996b8: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x7996B8u;
    {
        const bool branch_taken_0x7996b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996B8u;
        // 0x7996bc: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996b8) {
            ctx->pc = 0x7998D4u;
            goto label_7998d4;
        }
    }
    ctx->pc = 0x7996C0u;
label_7996c0:
    // 0x7996c0: 0xc1e6a1e  jal         func_79A878
    ctx->pc = 0x7996C0u;
    SET_GPR_U32(ctx, 31, 0x7996C8u);
    ctx->pc = 0x7996C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996C0u;
    // 0x7996c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A878u, 0x7996C0u, 0x7996C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996C8u;
label_7996c8:
    // 0x7996c8: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x7996C8u;
    {
        const bool branch_taken_0x7996c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996C8u;
        // 0x7996cc: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996c8) {
            ctx->pc = 0x7998D4u;
            goto label_7998d4;
        }
    }
    ctx->pc = 0x7996D0u;
label_7996d0:
    // 0x7996d0: 0xc1e67d8  jal         func_799F60
    ctx->pc = 0x7996D0u;
    SET_GPR_U32(ctx, 31, 0x7996D8u);
    ctx->pc = 0x7996D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996D0u;
    // 0x7996d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799F60u, 0x7996D0u, 0x7996D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996D8u;
label_7996d8:
    // 0x7996d8: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x7996D8u;
    {
        const bool branch_taken_0x7996d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996D8u;
        // 0x7996dc: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996d8) {
            ctx->pc = 0x7998D4u;
            goto label_7998d4;
        }
    }
    ctx->pc = 0x7996E0u;
label_7996e0:
    // 0x7996e0: 0xc1e6662  jal         func_799988
    ctx->pc = 0x7996E0u;
    SET_GPR_U32(ctx, 31, 0x7996E8u);
    ctx->pc = 0x7996E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996E0u;
    // 0x7996e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799988u, 0x7996E0u, 0x7996E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996E8u;
label_7996e8:
    // 0x7996e8: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x7996E8u;
    {
        const bool branch_taken_0x7996e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996E8u;
        // 0x7996ec: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996e8) {
            ctx->pc = 0x7998D4u;
            goto label_7998d4;
        }
    }
    ctx->pc = 0x7996F0u;
label_7996f0:
    // 0x7996f0: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x7996f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x7996f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7996f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996f8: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x7996f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x7996fc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x7996fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799700: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799700u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799704: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799704u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799708: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x799708u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x79970c: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x79970Cu;
    SET_GPR_U32(ctx, 31, 0x799714u);
    ctx->pc = 0x799710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79970Cu;
    // 0x799710: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79970Cu, 0x799714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799714u;
label_799714:
    // 0x799714: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x799714u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799718: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79971c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x79971Cu;
    {
        const bool branch_taken_0x79971c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79971Cu;
        // 0x799720: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79971c) {
            ctx->pc = 0x7998D0u;
            goto label_7998d0;
        }
    }
    ctx->pc = 0x799724u;
label_799724:
    // 0x799724: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x799724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x799728: 0x9062748c  lbu         $v0, 0x748C($v1)
    ctx->pc = 0x799728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x79972c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x79972cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x799730: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x799730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x799734: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x799734u;
    {
        const bool branch_taken_0x799734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799734u;
        // 0x799738: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799734) {
            ctx->pc = 0x7998D0u;
            goto label_7998d0;
        }
    }
    ctx->pc = 0x79973Cu;
    // 0x79973c: 0xc0afe32  jal         func_2BF8C8
    ctx->pc = 0x79973Cu;
    SET_GPR_U32(ctx, 31, 0x799744u);
    ctx->pc = 0x799740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79973Cu;
    // 0x799740: 0x8c44264c  lw          $a0, 0x264C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF8C8u, 0x79973Cu, 0x799744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799744u;
label_799744:
    // 0x799744: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x799744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x799748: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79974c: 0x8c659b70  lw          $a1, -0x6490($v1)
    ctx->pc = 0x79974cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x569B70u));
    // 0x799750: 0x8ca20b8c  lw          $v0, 0xB8C($a1)
    ctx->pc = 0x799750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2956)));
    // 0x799754: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x799754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x799758: 0xc1e6648  jal         func_799920
    ctx->pc = 0x799758u;
    SET_GPR_U32(ctx, 31, 0x799760u);
    ctx->pc = 0x79975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799758u;
    // 0x79975c: 0xaca20b8c  sw          $v0, 0xB8C($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 2956), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799920u, 0x799758u, 0x799760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799760u;
label_799760:
    // 0x799760: 0xc1e6b64  jal         func_79AD90
    ctx->pc = 0x799760u;
    SET_GPR_U32(ctx, 31, 0x799768u);
    ctx->pc = 0x799764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799760u;
    // 0x799764: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD90u, 0x799760u, 0x799768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799768u;
label_799768:
    // 0x799768: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x799768u;
    {
        const bool branch_taken_0x799768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799768u;
        // 0x79976c: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799768) {
            ctx->pc = 0x7998D4u;
            goto label_7998d4;
        }
    }
    ctx->pc = 0x799770u;
label_799770:
    // 0x799770: 0xc1e6b30  jal         func_79ACC0
    ctx->pc = 0x799770u;
    SET_GPR_U32(ctx, 31, 0x799778u);
    ctx->pc = 0x799774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799770u;
    // 0x799774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79ACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79ACC0u, 0x799770u, 0x799778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799778u;
label_799778:
    // 0x799778: 0x96250128  lhu         $a1, 0x128($s1)
    ctx->pc = 0x799778u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x79977c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79977cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799780: 0x24843ec0  addiu       $a0, $a0, 0x3EC0
    ctx->pc = 0x799780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16064));
    // 0x799784: 0xc08022e  jal         func_2008B8
    ctx->pc = 0x799784u;
    SET_GPR_U32(ctx, 31, 0x79978Cu);
    ctx->pc = 0x799788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799784u;
    // 0x799788: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2008B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2008B8u, 0x799784u, 0x79978Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79978Cu;
label_79978c:
    // 0x79978c: 0xc1e6c0c  jal         func_79B030
    ctx->pc = 0x79978Cu;
    SET_GPR_U32(ctx, 31, 0x799794u);
    ctx->pc = 0x799790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79978Cu;
    // 0x799790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B030u, 0x79978Cu, 0x799794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799794u;
label_799794:
    // 0x799794: 0x96230128  lhu         $v1, 0x128($s1)
    ctx->pc = 0x799794u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x799798: 0x24020806  addiu       $v0, $zero, 0x806
    ctx->pc = 0x799798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
    // 0x79979c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79979Cu;
    {
        const bool branch_taken_0x79979c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7997A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79979Cu;
        // 0x7997a0: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79979c) {
            ctx->pc = 0x7997C0u;
            goto label_7997c0;
        }
    }
    ctx->pc = 0x7997A4u;
    // 0x7997a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x7997a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7997a8: 0x8c44d930  lw          $a0, -0x26D0($v0)
    ctx->pc = 0x7997a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
    // 0x7997ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7997acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7997b0: 0xc058008  jal         func_160020
    ctx->pc = 0x7997B0u;
    SET_GPR_U32(ctx, 31, 0x7997B8u);
    ctx->pc = 0x7997B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997B0u;
    // 0x7997b4: 0x24070011  addiu       $a3, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160020u, 0x7997B0u, 0x7997B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997B8u;
label_7997b8:
    // 0x7997b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7997B8u;
    {
        const bool branch_taken_0x7997b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997B8u;
        // 0x7997bc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997b8) {
            ctx->pc = 0x7997D8u;
            goto label_7997d8;
        }
    }
    ctx->pc = 0x7997C0u;
label_7997c0:
    // 0x7997c0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x7997c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7997c4: 0x8c44d930  lw          $a0, -0x26D0($v0)
    ctx->pc = 0x7997c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
    // 0x7997c8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x7997c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7997cc: 0xc058008  jal         func_160020
    ctx->pc = 0x7997CCu;
    SET_GPR_U32(ctx, 31, 0x7997D4u);
    ctx->pc = 0x7997D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997CCu;
    // 0x7997d0: 0x24070011  addiu       $a3, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160020u, 0x7997CCu, 0x7997D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997D4u;
label_7997d4:
    // 0x7997d4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x7997d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_7997d8:
    // 0x7997d8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x7997D8u;
    {
        const bool branch_taken_0x7997d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997D8u;
        // 0x7997dc: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997d8) {
            ctx->pc = 0x7998D0u;
            goto label_7998d0;
        }
    }
    ctx->pc = 0x7997E0u;
label_7997e0:
    // 0x7997e0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7997e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7997e4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x7997e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x7997e8: 0x8c44d930  lw          $a0, -0x26D0($v0)
    ctx->pc = 0x7997e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD930u));
    // 0x7997ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x7997ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x7997f0: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x7997f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x7997f4: 0x14430037  bne         $v0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x7997F4u;
    {
        const bool branch_taken_0x7997f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x7997F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997F4u;
        // 0x7997f8: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997f4) {
            ctx->pc = 0x7998D4u;
            goto label_7998d4;
        }
    }
    ctx->pc = 0x7997FCu;
    // 0x7997fc: 0x94830864  lhu         $v1, 0x864($a0)
    ctx->pc = 0x7997fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2148)));
    // 0x799800: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x799800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x799804: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x799804u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x799808: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x799808u;
    {
        const bool branch_taken_0x799808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799808u;
        // 0x79980c: 0xa6230128  sh          $v1, 0x128($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 296), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799808) {
            ctx->pc = 0x7998D0u;
            goto label_7998d0;
        }
    }
    ctx->pc = 0x799810u;
label_799810:
    // 0x799810: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x799810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799814: 0x96220128  lhu         $v0, 0x128($s1)
    ctx->pc = 0x799814u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x799818: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x799818u;
    {
        const bool branch_taken_0x799818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799818u;
        // 0x79981c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799818) {
            ctx->pc = 0x799878u;
            goto label_799878;
        }
    }
    ctx->pc = 0x799820u;
    // 0x799820: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799824: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x799824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x799828: 0x8c44d930  lw          $a0, -0x26D0($v0)
    ctx->pc = 0x799828u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD930u));
    // 0x79982c: 0x24633f00  addiu       $v1, $v1, 0x3F00
    ctx->pc = 0x79982cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16128));
    // 0x799830: 0x94840866  lhu         $a0, 0x866($a0)
    ctx->pc = 0x799830u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2150)));
    // 0x799834: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x799834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x799838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x799838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x79983c: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79983Cu;
    {
        const bool branch_taken_0x79983c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x799840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79983Cu;
        // 0x799840: 0x96320128  lhu         $s2, 0x128($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79983c) {
            ctx->pc = 0x79985Cu;
            goto label_79985c;
        }
    }
    ctx->pc = 0x799844u;
    // 0x799844: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x799844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799848: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x799848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79984c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x79984cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x799850: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x799850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x799854: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x799854u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x799858: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x799858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_79985c:
    // 0x79985c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79985cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799860: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x799860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x799864: 0x2442f198  addiu       $v0, $v0, -0xE68
    ctx->pc = 0x799864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963608));
    // 0x799868: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x799868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79986c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x79986cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799870: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x799870u;
    {
        const bool branch_taken_0x799870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799870u;
        // 0x799874: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799870) {
            ctx->pc = 0x7998A4u;
            goto label_7998a4;
        }
    }
    ctx->pc = 0x799878u;
label_799878:
    // 0x799878: 0x2630012c  addiu       $s0, $s1, 0x12C
    ctx->pc = 0x799878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 300));
    // 0x79987c: 0x8c457a44  lw          $a1, 0x7A44($v0)
    ctx->pc = 0x79987cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31300)));
    // 0x799880: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x799880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x799884: 0x94723eec  lhu         $s2, 0x3EEC($v1)
    ctx->pc = 0x799884u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)FAST_READ16(0x583EECu));
    // 0x799888: 0xc0afa64  jal         func_2BE990
    ctx->pc = 0x799888u;
    SET_GPR_U32(ctx, 31, 0x799890u);
    ctx->pc = 0x79988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799888u;
    // 0x79988c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE990u, 0x799888u, 0x799890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799890u;
label_799890:
    // 0x799890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799894: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x799894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799898: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79989c: 0xc0afa66  jal         func_2BE998
    ctx->pc = 0x79989Cu;
    SET_GPR_U32(ctx, 31, 0x7998A4u);
    ctx->pc = 0x7998A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79989Cu;
    // 0x7998a0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE998u, 0x79989Cu, 0x7998A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998A4u;
label_7998a4:
    // 0x7998a4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7998a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7998a8: 0xc7ac000c  lwc1        $f12, 0xC($sp)
    ctx->pc = 0x7998a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7998ac: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x7998acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x7998b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x7998b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x7998b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7998b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7998bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998c0: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x7998C0u;
    SET_GPR_U32(ctx, 31, 0x7998C8u);
    ctx->pc = 0x7998C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998C0u;
    // 0x7998c4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x7998C0u, 0x7998C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998C8u;
label_7998c8:
    // 0x7998c8: 0xc1e6648  jal         func_799920
    ctx->pc = 0x7998C8u;
    SET_GPR_U32(ctx, 31, 0x7998D0u);
    ctx->pc = 0x7998CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998C8u;
    // 0x7998cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799920u, 0x7998C8u, 0x7998D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998D0u;
label_7998d0:
    // 0x7998d0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x7998d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_7998d4:
    // 0x7998d4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x7998d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x7998d8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x7998d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x7998dc: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x7998DCu;
    SET_GPR_U32(ctx, 31, 0x7998E4u);
    ctx->pc = 0x7998E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998DCu;
    // 0x7998e0: 0xa462ae40  sh          $v0, -0x51C0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294946368), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x7998DCu, 0x7998E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998E4u;
label_7998e4:
    // 0x7998e4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7998e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7998e8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7998e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7998ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x7998ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7998f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7998f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7998f4: 0x3e00008  jr          $ra
    ctx->pc = 0x7998F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7998F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998F4u;
        // 0x7998f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7998FCu;
    // 0x7998fc: 0x0  nop
    ctx->pc = 0x7998fcu;
    // NOP
    ctx->pc = 0x799900u;
}
} // namespace gh_r021
