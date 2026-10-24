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

// Function: func_001125A0
// Address: 0x1125a0 - 0x1127f8
void func_001125A0_0x1125a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001125A0_0x1125a0");
#endif

    switch (ctx->pc) {
        case 0x1125e0u: goto label_1125e0;
        case 0x1125e8u: goto label_1125e8;
        case 0x1125f4u: goto label_1125f4;
        case 0x112620u: goto label_112620;
        case 0x11263cu: goto label_11263c;
        case 0x112644u: goto label_112644;
        case 0x112668u: goto label_112668;
        case 0x11268cu: goto label_11268c;
        case 0x1126a8u: goto label_1126a8;
        case 0x1126b8u: goto label_1126b8;
        case 0x1126e4u: goto label_1126e4;
        case 0x1126f8u: goto label_1126f8;
        case 0x11270cu: goto label_11270c;
        case 0x112714u: goto label_112714;
        case 0x112724u: goto label_112724;
        case 0x112734u: goto label_112734;
        case 0x112758u: goto label_112758;
        case 0x112764u: goto label_112764;
        case 0x11276cu: goto label_11276c;
        case 0x112790u: goto label_112790;
        case 0x11279cu: goto label_11279c;
        case 0x1127acu: goto label_1127ac;
        case 0x1127bcu: goto label_1127bc;
        default: break;
    }

    ctx->pc = 0x1125a0u;

    // 0x1125a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1125a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1125a4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1125a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1125a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1125a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1125ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1125acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1125b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1125b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1125b4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1125b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1125b8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x1125b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x1125bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1125bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1125c0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1125c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1125c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1125c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1125c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1125c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1125cc: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1125ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1125d0: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x1125d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x1125d4: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x1125d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x1125d8: 0xc0a480c  jal         func_292030
    ctx->pc = 0x1125D8u;
    SET_GPR_U32(ctx, 31, 0x1125E0u);
    ctx->pc = 0x1125DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1125D8u;
    // 0x1125dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x1125D8u, 0x1125E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1125E0u;
label_1125e0:
    // 0x1125e0: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x1125E0u;
    SET_GPR_U32(ctx, 31, 0x1125E8u);
    ctx->pc = 0x1125E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1125E0u;
    // 0x1125e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x1125E0u, 0x1125E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1125E8u;
label_1125e8:
    // 0x1125e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1125e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1125ec: 0xc0a4bbc  jal         func_292EF0
    ctx->pc = 0x1125ECu;
    SET_GPR_U32(ctx, 31, 0x1125F4u);
    ctx->pc = 0x1125F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1125ECu;
    // 0x1125f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292EF0u, 0x1125ECu, 0x1125F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1125F4u;
label_1125f4:
    // 0x1125f4: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x1125f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x1125f8: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1125f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1125fc: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x1125fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x112600: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x112600u;
    {
        const bool branch_taken_0x112600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x112604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112600u;
        // 0x112604: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112600) {
            ctx->pc = 0x112644u;
            goto label_112644;
        }
    }
    ctx->pc = 0x112608u;
    // 0x112608: 0x92220649  lbu         $v0, 0x649($s1)
    ctx->pc = 0x112608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1609)));
    // 0x11260c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x11260Cu;
    {
        const bool branch_taken_0x11260c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11260c) {
            ctx->pc = 0x112610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11260Cu;
            // 0x112610: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112648u;
            goto label_112648;
        }
    }
    ctx->pc = 0x112614u;
    // 0x112614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112618: 0xc042cba  jal         func_10B2E8
    ctx->pc = 0x112618u;
    SET_GPR_U32(ctx, 31, 0x112620u);
    ctx->pc = 0x11261Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112618u;
    // 0x11261c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B2E8u, 0x112618u, 0x112620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112620u;
label_112620:
    // 0x112620: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x112620u;
    {
        const bool branch_taken_0x112620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112620u;
        // 0x112624: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112620) {
            ctx->pc = 0x112644u;
            goto label_112644;
        }
    }
    ctx->pc = 0x112628u;
    // 0x112628: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x112628u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x11262c: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x11262cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x112630: 0xa2220649  sb          $v0, 0x649($s1)
    ctx->pc = 0x112630u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1609), (uint8_t)GPR_U32(ctx, 2));
    // 0x112634: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x112634u;
    SET_GPR_U32(ctx, 31, 0x11263Cu);
    ctx->pc = 0x112638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112634u;
    // 0x112638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x112634u, 0x11263Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11263Cu;
label_11263c:
    // 0x11263c: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x11263Cu;
    SET_GPR_U32(ctx, 31, 0x112644u);
    ctx->pc = 0x112640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11263Cu;
    // 0x112640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x11263Cu, 0x112644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112644u;
label_112644:
    // 0x112644: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x112644u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_112648:
    // 0x112648: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x112648u;
    {
        const bool branch_taken_0x112648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112648u;
        // 0x11264c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112648) {
            ctx->pc = 0x112660u;
            goto label_112660;
        }
    }
    ctx->pc = 0x112650u;
    // 0x112650: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x112650u;
    {
        const bool branch_taken_0x112650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x112650) {
            ctx->pc = 0x112704u;
            goto label_112704;
        }
    }
    ctx->pc = 0x112658u;
    // 0x112658: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x112658u;
    {
        const bool branch_taken_0x112658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112658) {
            ctx->pc = 0x112764u;
            goto label_112764;
        }
    }
    ctx->pc = 0x112660u;
label_112660:
    // 0x112660: 0xc049396  jal         func_124E58
    ctx->pc = 0x112660u;
    SET_GPR_U32(ctx, 31, 0x112668u);
    ctx->pc = 0x112664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112660u;
    // 0x112664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x112660u, 0x112668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112668u;
label_112668:
    // 0x112668: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x112668u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x11266c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11266cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112670: 0xa62005e2  sh          $zero, 0x5E2($s1)
    ctx->pc = 0x112670u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
    // 0x112674: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x112674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x112678: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x112678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x11267c: 0x24070023  addiu       $a3, $zero, 0x23
    ctx->pc = 0x11267cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x112680: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x112680u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112684: 0xc042902  jal         func_10A408
    ctx->pc = 0x112684u;
    SET_GPR_U32(ctx, 31, 0x11268Cu);
    ctx->pc = 0x112688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112684u;
    // 0x112688: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x112684u, 0x11268Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11268Cu;
label_11268c:
    // 0x11268c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x11268cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x112690: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x112690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x112694: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x112694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x112698: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x112698u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11269c: 0x24090123  addiu       $t1, $zero, 0x123
    ctx->pc = 0x11269cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    // 0x1126a0: 0xc042908  jal         func_10A420
    ctx->pc = 0x1126A0u;
    SET_GPR_U32(ctx, 31, 0x1126A8u);
    ctx->pc = 0x1126A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1126A0u;
    // 0x1126a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1126A0u, 0x1126A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1126A8u;
label_1126a8:
    // 0x1126a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1126a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1126ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1126acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1126b0: 0xc04a55e  jal         func_129578
    ctx->pc = 0x1126B0u;
    SET_GPR_U32(ctx, 31, 0x1126B8u);
    ctx->pc = 0x1126B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1126B0u;
    // 0x1126b4: 0xa2221684  sb          $v0, 0x1684($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129578u, 0x1126B0u, 0x1126B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1126B8u;
label_1126b8:
    // 0x1126b8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x1126b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x1126bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1126bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1126c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1126c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1126c4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1126c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1126c8: 0x8c4502c0  lw          $a1, 0x2C0($v0)
    ctx->pc = 0x1126c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 704)));
    // 0x1126cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1126ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1126d0: 0x8c4602c4  lw          $a2, 0x2C4($v0)
    ctx->pc = 0x1126d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 708)));
    // 0x1126d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1126d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1126d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1126d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1126dc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1126DCu;
    SET_GPR_U32(ctx, 31, 0x1126E4u);
    ctx->pc = 0x1126E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1126DCu;
    // 0x1126e0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1126DCu, 0x1126E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1126E4u;
label_1126e4:
    // 0x1126e4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1126e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1126e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1126e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1126ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1126ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1126f0: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x1126F0u;
    SET_GPR_U32(ctx, 31, 0x1126F8u);
    ctx->pc = 0x1126F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1126F0u;
    // 0x1126f4: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x1126F0u, 0x1126F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1126F8u;
label_1126f8:
    // 0x1126f8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1126f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1126fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1126fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x112700: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x112700u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_112704:
    // 0x112704: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x112704u;
    SET_GPR_U32(ctx, 31, 0x11270Cu);
    ctx->pc = 0x112708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112704u;
    // 0x112708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x112704u, 0x11270Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11270Cu;
label_11270c:
    // 0x11270c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11270Cu;
    SET_GPR_U32(ctx, 31, 0x112714u);
    ctx->pc = 0x112710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11270Cu;
    // 0x112710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11270Cu, 0x112714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112714u;
label_112714:
    // 0x112714: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x112714u;
    {
        const bool branch_taken_0x112714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112714) {
            ctx->pc = 0x112744u;
            goto label_112744;
        }
    }
    ctx->pc = 0x11271Cu;
    // 0x11271c: 0xc04a58c  jal         func_129630
    ctx->pc = 0x11271Cu;
    SET_GPR_U32(ctx, 31, 0x112724u);
    ctx->pc = 0x112720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11271Cu;
    // 0x112720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x11271Cu, 0x112724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112724u;
label_112724:
    // 0x112724: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112728: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x112728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11272c: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11272Cu;
    SET_GPR_U32(ctx, 31, 0x112734u);
    ctx->pc = 0x112730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11272Cu;
    // 0x112730: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11272Cu, 0x112734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112734u;
label_112734:
    // 0x112734: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x112734u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x112738: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x112738u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11273c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11273cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x112740: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x112740u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_112744:
    // 0x112744: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x112744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x112748: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x112748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11274c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11274cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112750: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x112750u;
    SET_GPR_U32(ctx, 31, 0x112758u);
    ctx->pc = 0x112754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112750u;
    // 0x112754: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x112750u, 0x112758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112758u;
label_112758:
    // 0x112758: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x112758u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11275c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11275Cu;
    SET_GPR_U32(ctx, 31, 0x112764u);
    ctx->pc = 0x112760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11275Cu;
    // 0x112760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11275Cu, 0x112764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112764u;
label_112764:
    // 0x112764: 0xc04290e  jal         func_10A438
    ctx->pc = 0x112764u;
    SET_GPR_U32(ctx, 31, 0x11276Cu);
    ctx->pc = 0x112768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112764u;
    // 0x112768: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x112764u, 0x11276Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11276Cu;
label_11276c:
    // 0x11276c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x11276cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x112770: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x112770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x112774: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x112774u;
    {
        const bool branch_taken_0x112774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112774u;
        // 0x112778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112774) {
            ctx->pc = 0x112794u;
            goto label_112794;
        }
    }
    ctx->pc = 0x11277Cu;
    // 0x11277c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x11277cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x112780: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x112780u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x112784: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x112784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x112788: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x112788u;
    SET_GPR_U32(ctx, 31, 0x112790u);
    ctx->pc = 0x11278Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112788u;
    // 0x11278c: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x112788u, 0x112790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112790u;
label_112790:
    // 0x112790: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112794:
    // 0x112794: 0xc048e4e  jal         func_123938
    ctx->pc = 0x112794u;
    SET_GPR_U32(ctx, 31, 0x11279Cu);
    ctx->pc = 0x112798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112794u;
    // 0x112798: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x112794u, 0x11279Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11279Cu;
label_11279c:
    // 0x11279c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x11279Cu;
    {
        const bool branch_taken_0x11279c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11279c) {
            ctx->pc = 0x1127A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11279Cu;
            // 0x1127a0: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1127C4u;
            goto label_1127c4;
        }
    }
    ctx->pc = 0x1127A4u;
    // 0x1127a4: 0xc04a58c  jal         func_129630
    ctx->pc = 0x1127A4u;
    SET_GPR_U32(ctx, 31, 0x1127ACu);
    ctx->pc = 0x1127A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1127A4u;
    // 0x1127a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x1127A4u, 0x1127ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1127ACu;
label_1127ac:
    // 0x1127ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1127acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1127b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1127b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1127b4: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x1127B4u;
    SET_GPR_U32(ctx, 31, 0x1127BCu);
    ctx->pc = 0x1127B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1127B4u;
    // 0x1127b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x1127B4u, 0x1127BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1127BCu;
label_1127bc:
    // 0x1127bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1127BCu;
    {
        const bool branch_taken_0x1127bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1127C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1127BCu;
        // 0x1127c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1127bc) {
            ctx->pc = 0x1127E0u;
            goto label_1127e0;
        }
    }
    ctx->pc = 0x1127C4u;
label_1127c4:
    // 0x1127c4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1127c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1127c8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1127c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1127cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1127ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1127d0: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x1127d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x1127d4: 0xe6200674  swc1        $f0, 0x674($s1)
    ctx->pc = 0x1127d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
    // 0x1127d8: 0xa62203ac  sh          $v0, 0x3AC($s1)
    ctx->pc = 0x1127d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
    // 0x1127dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1127dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1127e0:
    // 0x1127e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1127e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1127e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1127e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1127e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1127e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1127ec: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1127ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1127f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1127F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1127F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1127F0u;
        // 0x1127f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1127F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1127F8u;
}
