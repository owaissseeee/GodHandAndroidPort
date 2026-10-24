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

// Function: func_00111750
// Address: 0x111750 - 0x111a20
void func_00111750_0x111750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00111750_0x111750");
#endif

    switch (ctx->pc) {
        case 0x111790u: goto label_111790;
        case 0x111798u: goto label_111798;
        case 0x1117a4u: goto label_1117a4;
        case 0x1117d0u: goto label_1117d0;
        case 0x1117e8u: goto label_1117e8;
        case 0x11180cu: goto label_11180c;
        case 0x111830u: goto label_111830;
        case 0x11184cu: goto label_11184c;
        case 0x111880u: goto label_111880;
        case 0x111888u: goto label_111888;
        case 0x11189cu: goto label_11189c;
        case 0x1118b0u: goto label_1118b0;
        case 0x1118ccu: goto label_1118cc;
        case 0x1118ecu: goto label_1118ec;
        case 0x1118f4u: goto label_1118f4;
        case 0x111904u: goto label_111904;
        case 0x111914u: goto label_111914;
        case 0x111938u: goto label_111938;
        case 0x111944u: goto label_111944;
        case 0x11194cu: goto label_11194c;
        case 0x111970u: goto label_111970;
        case 0x111990u: goto label_111990;
        case 0x1119c0u: goto label_1119c0;
        case 0x1119d0u: goto label_1119d0;
        case 0x1119e0u: goto label_1119e0;
        default: break;
    }

    ctx->pc = 0x111750u;

    // 0x111750: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x111750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x111754: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x111754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x111758: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11175c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11175cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x111760: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111764: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x111764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x111768: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x111768u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x11176c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11176cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x111770: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x111770u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111774: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x111774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11177c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x11177cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x111780: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x111780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x111784: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x111784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x111788: 0xc0a480c  jal         func_292030
    ctx->pc = 0x111788u;
    SET_GPR_U32(ctx, 31, 0x111790u);
    ctx->pc = 0x11178Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111788u;
    // 0x11178c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x111788u, 0x111790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111790u;
label_111790:
    // 0x111790: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x111790u;
    SET_GPR_U32(ctx, 31, 0x111798u);
    ctx->pc = 0x111794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111790u;
    // 0x111794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x111790u, 0x111798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111798u;
label_111798:
    // 0x111798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11179c: 0xc0a4bbc  jal         func_292EF0
    ctx->pc = 0x11179Cu;
    SET_GPR_U32(ctx, 31, 0x1117A4u);
    ctx->pc = 0x1117A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11179Cu;
    // 0x1117a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292EF0u, 0x11179Cu, 0x1117A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1117A4u;
label_1117a4:
    // 0x1117a4: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x1117a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x1117a8: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1117a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1117ac: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x1117acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x1117b0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1117B0u;
    {
        const bool branch_taken_0x1117b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1117B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117B0u;
        // 0x1117b4: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117b0) {
            ctx->pc = 0x1117E8u;
            goto label_1117e8;
        }
    }
    ctx->pc = 0x1117B8u;
    // 0x1117b8: 0x92220649  lbu         $v0, 0x649($s1)
    ctx->pc = 0x1117b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1609)));
    // 0x1117bc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1117BCu;
    {
        const bool branch_taken_0x1117bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1117bc) {
            ctx->pc = 0x1117C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1117BCu;
            // 0x1117c0: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1117ECu;
            goto label_1117ec;
        }
    }
    ctx->pc = 0x1117C4u;
    // 0x1117c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1117c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1117c8: 0xc042cba  jal         func_10B2E8
    ctx->pc = 0x1117C8u;
    SET_GPR_U32(ctx, 31, 0x1117D0u);
    ctx->pc = 0x1117CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1117C8u;
    // 0x1117cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B2E8u, 0x1117C8u, 0x1117D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1117D0u;
label_1117d0:
    // 0x1117d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1117D0u;
    {
        const bool branch_taken_0x1117d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1117D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117D0u;
        // 0x1117d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117d0) {
            ctx->pc = 0x1117E8u;
            goto label_1117e8;
        }
    }
    ctx->pc = 0x1117D8u;
    // 0x1117d8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1117d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1117dc: 0xa2220649  sb          $v0, 0x649($s1)
    ctx->pc = 0x1117dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1609), (uint8_t)GPR_U32(ctx, 2));
    // 0x1117e0: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x1117E0u;
    SET_GPR_U32(ctx, 31, 0x1117E8u);
    ctx->pc = 0x1117E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1117E0u;
    // 0x1117e4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x1117E0u, 0x1117E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1117E8u;
label_1117e8:
    // 0x1117e8: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1117e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_1117ec:
    // 0x1117ec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1117ECu;
    {
        const bool branch_taken_0x1117ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1117F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117ECu;
        // 0x1117f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117ec) {
            ctx->pc = 0x111804u;
            goto label_111804;
        }
    }
    ctx->pc = 0x1117F4u;
    // 0x1117f4: 0x10620033  beq         $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1117F4u;
    {
        const bool branch_taken_0x1117f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1117f4) {
            ctx->pc = 0x1118C4u;
            goto label_1118c4;
        }
    }
    ctx->pc = 0x1117FCu;
    // 0x1117fc: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1117FCu;
    {
        const bool branch_taken_0x1117fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1117fc) {
            ctx->pc = 0x111944u;
            goto label_111944;
        }
    }
    ctx->pc = 0x111804u;
label_111804:
    // 0x111804: 0xc049396  jal         func_124E58
    ctx->pc = 0x111804u;
    SET_GPR_U32(ctx, 31, 0x11180Cu);
    ctx->pc = 0x111808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111804u;
    // 0x111808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x111804u, 0x11180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11180Cu;
label_11180c:
    // 0x11180c: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x11180cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x111810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111814: 0xa62005e2  sh          $zero, 0x5E2($s1)
    ctx->pc = 0x111814u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
    // 0x111818: 0x24050082  addiu       $a1, $zero, 0x82
    ctx->pc = 0x111818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x11181c: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x11181cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x111820: 0x2407001f  addiu       $a3, $zero, 0x1F
    ctx->pc = 0x111820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x111824: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x111824u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111828: 0xc042902  jal         func_10A408
    ctx->pc = 0x111828u;
    SET_GPR_U32(ctx, 31, 0x111830u);
    ctx->pc = 0x11182Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111828u;
    // 0x11182c: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x111828u, 0x111830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111830u;
label_111830:
    // 0x111830: 0x24050082  addiu       $a1, $zero, 0x82
    ctx->pc = 0x111830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x111834: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x111834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x111838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11183c: 0x2407001f  addiu       $a3, $zero, 0x1F
    ctx->pc = 0x11183cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x111840: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x111840u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111844: 0xc042908  jal         func_10A420
    ctx->pc = 0x111844u;
    SET_GPR_U32(ctx, 31, 0x11184Cu);
    ctx->pc = 0x111848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111844u;
    // 0x111848: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x111844u, 0x11184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11184Cu;
label_11184c:
    // 0x11184c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11184cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111850: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x111850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x111854: 0xa2221684  sb          $v0, 0x1684($s1)
    ctx->pc = 0x111854u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 2));
    // 0x111858: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x111858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11185c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11185cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x111860: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x111860u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111864: 0x8c6501c0  lw          $a1, 0x1C0($v1)
    ctx->pc = 0x111864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 448)));
    // 0x111868: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x111868u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11186c: 0x8c6601c4  lw          $a2, 0x1C4($v1)
    ctx->pc = 0x11186cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 452)));
    // 0x111870: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111874: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x111874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x111878: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x111878u;
    SET_GPR_U32(ctx, 31, 0x111880u);
    ctx->pc = 0x11187Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111878u;
    // 0x11187c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x111878u, 0x111880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111880u;
label_111880:
    // 0x111880: 0xc04a55e  jal         func_129578
    ctx->pc = 0x111880u;
    SET_GPR_U32(ctx, 31, 0x111888u);
    ctx->pc = 0x111884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111880u;
    // 0x111884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129578u, 0x111880u, 0x111888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111888u;
label_111888:
    // 0x111888: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x111888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x11188c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x11188cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x111890: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x111890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x111894: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x111894u;
    SET_GPR_U32(ctx, 31, 0x11189Cu);
    ctx->pc = 0x111898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111894u;
    // 0x111898: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x111894u, 0x11189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11189Cu;
label_11189c:
    // 0x11189c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x11189cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1118a0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1118a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1118a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1118a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1118a8: 0xc04939a  jal         func_124E68
    ctx->pc = 0x1118A8u;
    SET_GPR_U32(ctx, 31, 0x1118B0u);
    ctx->pc = 0x1118ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1118A8u;
    // 0x1118ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E68u, 0x1118A8u, 0x1118B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1118B0u;
label_1118b0:
    // 0x1118b0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1118b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1118b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1118b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1118b8: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x1118b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
    // 0x1118bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1118bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1118c0: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1118c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1118c4:
    // 0x1118c4: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x1118C4u;
    SET_GPR_U32(ctx, 31, 0x1118CCu);
    ctx->pc = 0x1118C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1118C4u;
    // 0x1118c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x1118C4u, 0x1118CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1118CCu;
label_1118cc:
    // 0x1118cc: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x1118ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x1118d0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1118d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1118d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1118D4u;
    {
        const bool branch_taken_0x1118d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1118D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118D4u;
        // 0x1118d8: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118d4) {
            ctx->pc = 0x1118ECu;
            goto label_1118ec;
        }
    }
    ctx->pc = 0x1118DCu;
    // 0x1118dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1118dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1118e0: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x1118e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x1118e4: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x1118E4u;
    SET_GPR_U32(ctx, 31, 0x1118ECu);
    ctx->pc = 0x1118E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1118E4u;
    // 0x1118e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x1118E4u, 0x1118ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1118ECu;
label_1118ec:
    // 0x1118ec: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1118ECu;
    SET_GPR_U32(ctx, 31, 0x1118F4u);
    ctx->pc = 0x1118F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1118ECu;
    // 0x1118f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1118ECu, 0x1118F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1118F4u;
label_1118f4:
    // 0x1118f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1118F4u;
    {
        const bool branch_taken_0x1118f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1118f4) {
            ctx->pc = 0x111924u;
            goto label_111924;
        }
    }
    ctx->pc = 0x1118FCu;
    // 0x1118fc: 0xc04a58c  jal         func_129630
    ctx->pc = 0x1118FCu;
    SET_GPR_U32(ctx, 31, 0x111904u);
    ctx->pc = 0x111900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1118FCu;
    // 0x111900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x1118FCu, 0x111904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111904u;
label_111904:
    // 0x111904: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111908: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x111908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11190c: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11190Cu;
    SET_GPR_U32(ctx, 31, 0x111914u);
    ctx->pc = 0x111910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11190Cu;
    // 0x111910: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11190Cu, 0x111914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111914u;
label_111914:
    // 0x111914: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x111914u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x111918: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x111918u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11191c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11191cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x111920: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x111920u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_111924:
    // 0x111924: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x111924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x111928: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x111928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11192c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11192cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111930: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x111930u;
    SET_GPR_U32(ctx, 31, 0x111938u);
    ctx->pc = 0x111934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111930u;
    // 0x111934: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x111930u, 0x111938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111938u;
label_111938:
    // 0x111938: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x111938u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11193c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11193Cu;
    SET_GPR_U32(ctx, 31, 0x111944u);
    ctx->pc = 0x111940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11193Cu;
    // 0x111940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11193Cu, 0x111944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111944u;
label_111944:
    // 0x111944: 0xc04290e  jal         func_10A438
    ctx->pc = 0x111944u;
    SET_GPR_U32(ctx, 31, 0x11194Cu);
    ctx->pc = 0x111948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111944u;
    // 0x111948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x111944u, 0x11194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11194Cu;
label_11194c:
    // 0x11194c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x11194cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x111950: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x111950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x111954: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x111954u;
    {
        const bool branch_taken_0x111954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111954) {
            ctx->pc = 0x111958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111954u;
            // 0x111958: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111974u;
            goto label_111974;
        }
    }
    ctx->pc = 0x11195Cu;
    // 0x11195c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x11195cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x111960: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x111960u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x111964: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x111964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x111968: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x111968u;
    SET_GPR_U32(ctx, 31, 0x111970u);
    ctx->pc = 0x11196Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111968u;
    // 0x11196c: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x111968u, 0x111970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111970u;
label_111970:
    // 0x111970: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x111970u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_111974:
    // 0x111974: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x111974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x111978: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x111978u;
    {
        const bool branch_taken_0x111978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111978u;
        // 0x11197c: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111978) {
            ctx->pc = 0x1119B4u;
            goto label_1119b4;
        }
    }
    ctx->pc = 0x111980u;
    // 0x111980: 0x8e25161c  lw          $a1, 0x161C($s1)
    ctx->pc = 0x111980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5660)));
    // 0x111984: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x111984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x111988: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x111988u;
    SET_GPR_U32(ctx, 31, 0x111990u);
    ctx->pc = 0x11198Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111988u;
    // 0x11198c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x111988u, 0x111990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111990u;
label_111990:
    // 0x111990: 0xae20161c  sw          $zero, 0x161C($s1)
    ctx->pc = 0x111990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5660), GPR_U32(ctx, 0));
    // 0x111994: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x111994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x111998: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x111998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11199c: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x11199cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1119a0: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x1119a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x1119a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1119a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1119a8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1119a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1119ac: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x1119acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x1119b0: 0xae0400ac  sw          $a0, 0xAC($s0)
    ctx->pc = 0x1119b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 4));
label_1119b4:
    // 0x1119b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1119b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119b8: 0xc048e4e  jal         func_123938
    ctx->pc = 0x1119B8u;
    SET_GPR_U32(ctx, 31, 0x1119C0u);
    ctx->pc = 0x1119BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1119B8u;
    // 0x1119bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x1119B8u, 0x1119C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1119C0u;
label_1119c0:
    // 0x1119c0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1119C0u;
    {
        const bool branch_taken_0x1119c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1119c0) {
            ctx->pc = 0x1119C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1119C0u;
            // 0x1119c4: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1119E8u;
            goto label_1119e8;
        }
    }
    ctx->pc = 0x1119C8u;
    // 0x1119c8: 0xc04a58c  jal         func_129630
    ctx->pc = 0x1119C8u;
    SET_GPR_U32(ctx, 31, 0x1119D0u);
    ctx->pc = 0x1119CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1119C8u;
    // 0x1119cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x1119C8u, 0x1119D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1119D0u;
label_1119d0:
    // 0x1119d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1119d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1119d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119d8: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x1119D8u;
    SET_GPR_U32(ctx, 31, 0x1119E0u);
    ctx->pc = 0x1119DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1119D8u;
    // 0x1119dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x1119D8u, 0x1119E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1119E0u;
label_1119e0:
    // 0x1119e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1119E0u;
    {
        const bool branch_taken_0x1119e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1119E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1119E0u;
        // 0x1119e4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1119e0) {
            ctx->pc = 0x111A04u;
            goto label_111a04;
        }
    }
    ctx->pc = 0x1119E8u;
label_1119e8:
    // 0x1119e8: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1119e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1119ec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1119ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1119f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1119f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1119f4: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x1119f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x1119f8: 0xe6200674  swc1        $f0, 0x674($s1)
    ctx->pc = 0x1119f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
    // 0x1119fc: 0xa62203ac  sh          $v0, 0x3AC($s1)
    ctx->pc = 0x1119fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
    // 0x111a00: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x111a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_111a04:
    // 0x111a04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x111a04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111a08: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x111a08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111a0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111a10: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x111a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x111a14: 0x3e00008  jr          $ra
    ctx->pc = 0x111A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A14u;
        // 0x111a18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111A1Cu;
    // 0x111a1c: 0x0  nop
    ctx->pc = 0x111a1cu;
    // NOP
    ctx->pc = 0x111a20u;
}
