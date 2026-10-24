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

// Function: func_001114B0
// Address: 0x1114b0 - 0x111750
void func_001114B0_0x1114b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001114B0_0x1114b0");
#endif

    switch (ctx->pc) {
        case 0x1114f0u: goto label_1114f0;
        case 0x1114f8u: goto label_1114f8;
        case 0x111504u: goto label_111504;
        case 0x111530u: goto label_111530;
        case 0x11154cu: goto label_11154c;
        case 0x111554u: goto label_111554;
        case 0x111578u: goto label_111578;
        case 0x11159cu: goto label_11159c;
        case 0x1115b8u: goto label_1115b8;
        case 0x1115ecu: goto label_1115ec;
        case 0x1115f4u: goto label_1115f4;
        case 0x111608u: goto label_111608;
        case 0x11161cu: goto label_11161c;
        case 0x111624u: goto label_111624;
        case 0x111634u: goto label_111634;
        case 0x111644u: goto label_111644;
        case 0x111668u: goto label_111668;
        case 0x111674u: goto label_111674;
        case 0x11167cu: goto label_11167c;
        case 0x1116a0u: goto label_1116a0;
        case 0x1116c0u: goto label_1116c0;
        case 0x1116f0u: goto label_1116f0;
        case 0x111700u: goto label_111700;
        case 0x111710u: goto label_111710;
        default: break;
    }

    ctx->pc = 0x1114b0u;

    // 0x1114b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1114b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1114b4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1114b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1114b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1114b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1114bc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1114bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1114c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1114c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1114c4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1114c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1114c8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x1114c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x1114cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1114ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1114d0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1114d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1114d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1114d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1114dc: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1114dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1114e0: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x1114e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x1114e4: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x1114e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x1114e8: 0xc0a480c  jal         func_292030
    ctx->pc = 0x1114E8u;
    SET_GPR_U32(ctx, 31, 0x1114F0u);
    ctx->pc = 0x1114ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114E8u;
    // 0x1114ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x1114E8u, 0x1114F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1114F0u;
label_1114f0:
    // 0x1114f0: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x1114F0u;
    SET_GPR_U32(ctx, 31, 0x1114F8u);
    ctx->pc = 0x1114F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114F0u;
    // 0x1114f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x1114F0u, 0x1114F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1114F8u;
label_1114f8:
    // 0x1114f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1114f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114fc: 0xc0a4bbc  jal         func_292EF0
    ctx->pc = 0x1114FCu;
    SET_GPR_U32(ctx, 31, 0x111504u);
    ctx->pc = 0x111500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114FCu;
    // 0x111500: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292EF0u, 0x1114FCu, 0x111504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111504u;
label_111504:
    // 0x111504: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x111504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x111508: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x111508u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11150c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x11150cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x111510: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x111510u;
    {
        const bool branch_taken_0x111510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111510u;
        // 0x111514: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111510) {
            ctx->pc = 0x111554u;
            goto label_111554;
        }
    }
    ctx->pc = 0x111518u;
    // 0x111518: 0x92220649  lbu         $v0, 0x649($s1)
    ctx->pc = 0x111518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1609)));
    // 0x11151c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x11151Cu;
    {
        const bool branch_taken_0x11151c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11151c) {
            ctx->pc = 0x111520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11151Cu;
            // 0x111520: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111558u;
            goto label_111558;
        }
    }
    ctx->pc = 0x111524u;
    // 0x111524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111528: 0xc042cba  jal         func_10B2E8
    ctx->pc = 0x111528u;
    SET_GPR_U32(ctx, 31, 0x111530u);
    ctx->pc = 0x11152Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111528u;
    // 0x11152c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B2E8u, 0x111528u, 0x111530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111530u;
label_111530:
    // 0x111530: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x111530u;
    {
        const bool branch_taken_0x111530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111530u;
        // 0x111534: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111530) {
            ctx->pc = 0x111554u;
            goto label_111554;
        }
    }
    ctx->pc = 0x111538u;
    // 0x111538: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x111538u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x11153c: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x11153cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x111540: 0xa2220649  sb          $v0, 0x649($s1)
    ctx->pc = 0x111540u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1609), (uint8_t)GPR_U32(ctx, 2));
    // 0x111544: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x111544u;
    SET_GPR_U32(ctx, 31, 0x11154Cu);
    ctx->pc = 0x111548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111544u;
    // 0x111548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x111544u, 0x11154Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11154Cu;
label_11154c:
    // 0x11154c: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x11154Cu;
    SET_GPR_U32(ctx, 31, 0x111554u);
    ctx->pc = 0x111550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11154Cu;
    // 0x111550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x11154Cu, 0x111554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111554u;
label_111554:
    // 0x111554: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x111554u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_111558:
    // 0x111558: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x111558u;
    {
        const bool branch_taken_0x111558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111558u;
        // 0x11155c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111558) {
            ctx->pc = 0x111570u;
            goto label_111570;
        }
    }
    ctx->pc = 0x111560u;
    // 0x111560: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x111560u;
    {
        const bool branch_taken_0x111560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x111560) {
            ctx->pc = 0x111614u;
            goto label_111614;
        }
    }
    ctx->pc = 0x111568u;
    // 0x111568: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x111568u;
    {
        const bool branch_taken_0x111568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x111568) {
            ctx->pc = 0x111674u;
            goto label_111674;
        }
    }
    ctx->pc = 0x111570u;
label_111570:
    // 0x111570: 0xc049396  jal         func_124E58
    ctx->pc = 0x111570u;
    SET_GPR_U32(ctx, 31, 0x111578u);
    ctx->pc = 0x111574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111570u;
    // 0x111574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x111570u, 0x111578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111578u;
label_111578:
    // 0x111578: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x111578u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x11157c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11157cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111580: 0xa62005e2  sh          $zero, 0x5E2($s1)
    ctx->pc = 0x111580u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
    // 0x111584: 0x240502bc  addiu       $a1, $zero, 0x2BC
    ctx->pc = 0x111584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
    // 0x111588: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x111588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11158c: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x11158cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x111590: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x111590u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111594: 0xc042902  jal         func_10A408
    ctx->pc = 0x111594u;
    SET_GPR_U32(ctx, 31, 0x11159Cu);
    ctx->pc = 0x111598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111594u;
    // 0x111598: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x111594u, 0x11159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11159Cu;
label_11159c:
    // 0x11159c: 0x240502bc  addiu       $a1, $zero, 0x2BC
    ctx->pc = 0x11159cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
    // 0x1115a0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1115a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1115a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1115a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115a8: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x1115a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1115ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1115acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115b0: 0xc042908  jal         func_10A420
    ctx->pc = 0x1115B0u;
    SET_GPR_U32(ctx, 31, 0x1115B8u);
    ctx->pc = 0x1115B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1115B0u;
    // 0x1115b4: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1115B0u, 0x1115B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1115B8u;
label_1115b8:
    // 0x1115b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1115b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1115bc: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x1115bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x1115c0: 0xa2221684  sb          $v0, 0x1684($s1)
    ctx->pc = 0x1115c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 2));
    // 0x1115c4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1115c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1115c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1115c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1115cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1115ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115d0: 0x8c650614  lw          $a1, 0x614($v1)
    ctx->pc = 0x1115d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1556)));
    // 0x1115d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1115d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115d8: 0x8c660618  lw          $a2, 0x618($v1)
    ctx->pc = 0x1115d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1560)));
    // 0x1115dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1115dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115e0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1115e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1115e4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1115E4u;
    SET_GPR_U32(ctx, 31, 0x1115ECu);
    ctx->pc = 0x1115E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1115E4u;
    // 0x1115e8: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1115E4u, 0x1115ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1115ECu;
label_1115ec:
    // 0x1115ec: 0xc04a55e  jal         func_129578
    ctx->pc = 0x1115ECu;
    SET_GPR_U32(ctx, 31, 0x1115F4u);
    ctx->pc = 0x1115F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1115ECu;
    // 0x1115f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129578u, 0x1115ECu, 0x1115F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1115F4u;
label_1115f4:
    // 0x1115f4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1115f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1115f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1115f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1115fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1115fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x111600: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x111600u;
    SET_GPR_U32(ctx, 31, 0x111608u);
    ctx->pc = 0x111604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111600u;
    // 0x111604: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x111600u, 0x111608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111608u;
label_111608:
    // 0x111608: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x111608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11160c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11160cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x111610: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x111610u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_111614:
    // 0x111614: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x111614u;
    SET_GPR_U32(ctx, 31, 0x11161Cu);
    ctx->pc = 0x111618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111614u;
    // 0x111618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x111614u, 0x11161Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11161Cu;
label_11161c:
    // 0x11161c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11161Cu;
    SET_GPR_U32(ctx, 31, 0x111624u);
    ctx->pc = 0x111620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11161Cu;
    // 0x111620: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11161Cu, 0x111624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111624u;
label_111624:
    // 0x111624: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x111624u;
    {
        const bool branch_taken_0x111624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111624) {
            ctx->pc = 0x111654u;
            goto label_111654;
        }
    }
    ctx->pc = 0x11162Cu;
    // 0x11162c: 0xc04a58c  jal         func_129630
    ctx->pc = 0x11162Cu;
    SET_GPR_U32(ctx, 31, 0x111634u);
    ctx->pc = 0x111630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11162Cu;
    // 0x111630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x11162Cu, 0x111634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111634u;
label_111634:
    // 0x111634: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111638: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x111638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11163c: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11163Cu;
    SET_GPR_U32(ctx, 31, 0x111644u);
    ctx->pc = 0x111640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11163Cu;
    // 0x111640: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11163Cu, 0x111644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111644u;
label_111644:
    // 0x111644: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x111644u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x111648: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x111648u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11164c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11164cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x111650: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x111650u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_111654:
    // 0x111654: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x111654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x111658: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x111658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11165c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11165cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111660: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x111660u;
    SET_GPR_U32(ctx, 31, 0x111668u);
    ctx->pc = 0x111664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111660u;
    // 0x111664: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x111660u, 0x111668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111668u;
label_111668:
    // 0x111668: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x111668u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11166c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11166Cu;
    SET_GPR_U32(ctx, 31, 0x111674u);
    ctx->pc = 0x111670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11166Cu;
    // 0x111670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11166Cu, 0x111674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111674u;
label_111674:
    // 0x111674: 0xc04290e  jal         func_10A438
    ctx->pc = 0x111674u;
    SET_GPR_U32(ctx, 31, 0x11167Cu);
    ctx->pc = 0x111678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111674u;
    // 0x111678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x111674u, 0x11167Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11167Cu;
label_11167c:
    // 0x11167c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x11167cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x111680: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x111680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x111684: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x111684u;
    {
        const bool branch_taken_0x111684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111684) {
            ctx->pc = 0x111688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111684u;
            // 0x111688: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1116A4u;
            goto label_1116a4;
        }
    }
    ctx->pc = 0x11168Cu;
    // 0x11168c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x11168cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x111690: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x111690u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x111694: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x111694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x111698: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x111698u;
    SET_GPR_U32(ctx, 31, 0x1116A0u);
    ctx->pc = 0x11169Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111698u;
    // 0x11169c: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x111698u, 0x1116A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1116A0u;
label_1116a0:
    // 0x1116a0: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x1116a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_1116a4:
    // 0x1116a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1116a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1116a8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1116A8u;
    {
        const bool branch_taken_0x1116a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1116ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1116A8u;
        // 0x1116ac: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1116a8) {
            ctx->pc = 0x1116E4u;
            goto label_1116e4;
        }
    }
    ctx->pc = 0x1116B0u;
    // 0x1116b0: 0x8e25161c  lw          $a1, 0x161C($s1)
    ctx->pc = 0x1116b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5660)));
    // 0x1116b4: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1116b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1116b8: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1116B8u;
    SET_GPR_U32(ctx, 31, 0x1116C0u);
    ctx->pc = 0x1116BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1116B8u;
    // 0x1116bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1116B8u, 0x1116C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1116C0u;
label_1116c0:
    // 0x1116c0: 0xae20161c  sw          $zero, 0x161C($s1)
    ctx->pc = 0x1116c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5660), GPR_U32(ctx, 0));
    // 0x1116c4: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x1116c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x1116c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1116c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1116cc: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x1116ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1116d0: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x1116d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x1116d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1116d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1116d8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1116d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1116dc: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x1116dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x1116e0: 0xae0400ac  sw          $a0, 0xAC($s0)
    ctx->pc = 0x1116e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 4));
label_1116e4:
    // 0x1116e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1116e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1116e8: 0xc048e4e  jal         func_123938
    ctx->pc = 0x1116E8u;
    SET_GPR_U32(ctx, 31, 0x1116F0u);
    ctx->pc = 0x1116ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1116E8u;
    // 0x1116ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x1116E8u, 0x1116F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1116F0u;
label_1116f0:
    // 0x1116f0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1116F0u;
    {
        const bool branch_taken_0x1116f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1116f0) {
            ctx->pc = 0x1116F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1116F0u;
            // 0x1116f4: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111718u;
            goto label_111718;
        }
    }
    ctx->pc = 0x1116F8u;
    // 0x1116f8: 0xc04a58c  jal         func_129630
    ctx->pc = 0x1116F8u;
    SET_GPR_U32(ctx, 31, 0x111700u);
    ctx->pc = 0x1116FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1116F8u;
    // 0x1116fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x1116F8u, 0x111700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111700u;
label_111700:
    // 0x111700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x111704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111708: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x111708u;
    SET_GPR_U32(ctx, 31, 0x111710u);
    ctx->pc = 0x11170Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111708u;
    // 0x11170c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x111708u, 0x111710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111710u;
label_111710:
    // 0x111710: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x111710u;
    {
        const bool branch_taken_0x111710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111710u;
        // 0x111714: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111710) {
            ctx->pc = 0x111734u;
            goto label_111734;
        }
    }
    ctx->pc = 0x111718u;
label_111718:
    // 0x111718: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x111718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x11171c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x11171cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x111720: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111724: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x111724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x111728: 0xe6200674  swc1        $f0, 0x674($s1)
    ctx->pc = 0x111728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
    // 0x11172c: 0xa62203ac  sh          $v0, 0x3AC($s1)
    ctx->pc = 0x11172cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
    // 0x111730: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x111730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_111734:
    // 0x111734: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x111734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111738: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x111738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11173c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11173cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111740: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x111740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x111744: 0x3e00008  jr          $ra
    ctx->pc = 0x111744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111744u;
        // 0x111748: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11174Cu;
    // 0x11174c: 0x0  nop
    ctx->pc = 0x11174cu;
    // NOP
    ctx->pc = 0x111750u;
}
