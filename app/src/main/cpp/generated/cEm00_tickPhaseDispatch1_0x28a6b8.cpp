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

// Function: cEm00_tickPhaseDispatch1
// Address: 0x28a6b8 - 0x28a780
void cEm00_tickPhaseDispatch1_0x28a6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_tickPhaseDispatch1_0x28a6b8");
#endif

    switch (ctx->pc) {
        case 0x28a6b8u: goto label_28a6b8;
        case 0x28a6bcu: goto label_28a6bc;
        case 0x28a6c0u: goto label_28a6c0;
        case 0x28a6c4u: goto label_28a6c4;
        case 0x28a6c8u: goto label_28a6c8;
        case 0x28a6ccu: goto label_28a6cc;
        case 0x28a6d0u: goto label_28a6d0;
        case 0x28a6d4u: goto label_28a6d4;
        case 0x28a6d8u: goto label_28a6d8;
        case 0x28a6dcu: goto label_28a6dc;
        case 0x28a6e0u: goto label_28a6e0;
        case 0x28a6e4u: goto label_28a6e4;
        case 0x28a6e8u: goto label_28a6e8;
        case 0x28a6ecu: goto label_28a6ec;
        case 0x28a6f0u: goto label_28a6f0;
        case 0x28a6f4u: goto label_28a6f4;
        case 0x28a6f8u: goto label_28a6f8;
        case 0x28a6fcu: goto label_28a6fc;
        case 0x28a700u: goto label_28a700;
        case 0x28a704u: goto label_28a704;
        case 0x28a708u: goto label_28a708;
        case 0x28a70cu: goto label_28a70c;
        case 0x28a710u: goto label_28a710;
        case 0x28a714u: goto label_28a714;
        case 0x28a718u: goto label_28a718;
        case 0x28a71cu: goto label_28a71c;
        case 0x28a720u: goto label_28a720;
        case 0x28a724u: goto label_28a724;
        case 0x28a728u: goto label_28a728;
        case 0x28a72cu: goto label_28a72c;
        case 0x28a730u: goto label_28a730;
        case 0x28a734u: goto label_28a734;
        case 0x28a738u: goto label_28a738;
        case 0x28a73cu: goto label_28a73c;
        case 0x28a740u: goto label_28a740;
        case 0x28a744u: goto label_28a744;
        case 0x28a748u: goto label_28a748;
        case 0x28a74cu: goto label_28a74c;
        case 0x28a750u: goto label_28a750;
        case 0x28a754u: goto label_28a754;
        case 0x28a758u: goto label_28a758;
        case 0x28a75cu: goto label_28a75c;
        case 0x28a760u: goto label_28a760;
        case 0x28a764u: goto label_28a764;
        case 0x28a768u: goto label_28a768;
        case 0x28a76cu: goto label_28a76c;
        case 0x28a770u: goto label_28a770;
        case 0x28a774u: goto label_28a774;
        case 0x28a778u: goto label_28a778;
        case 0x28a77cu: goto label_28a77c;
        default: break;
    }

    ctx->pc = 0x28a6b8u;

label_28a6b8:
    // 0x28a6b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28a6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_28a6bc:
    // 0x28a6bc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x28a6bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28a6c0:
    // 0x28a6c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28a6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_28a6c4:
    // 0x28a6c4: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x28a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_28a6c8:
    // 0x28a6c8: 0x90c302f5  lbu         $v1, 0x2F5($a2)
    ctx->pc = 0x28a6c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_28a6cc:
    // 0x28a6cc: 0x24498df8  addiu       $t1, $v0, -0x7208
    ctx->pc = 0x28a6ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938104));
label_28a6d0:
    // 0x28a6d0: 0x69240007  ldl         $a0, 0x7($t1)
    ctx->pc = 0x28a6d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_28a6d4:
    // 0x28a6d4: 0x6d240000  ldr         $a0, 0x0($t1)
    ctx->pc = 0x28a6d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_28a6d8:
    // 0x28a6d8: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x28a6d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28a6dc:
    // 0x28a6dc: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x28a6dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28a6e0:
    // 0x28a6e0: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
label_28a6e4:
    if (ctx->pc == 0x28A6E4u) {
        ctx->pc = 0x28A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A6E0u;
        // 0x28a6e4: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A6E8u;
        goto label_28a6e8;
    }
    ctx->pc = 0x28A6E0u;
    {
        const bool branch_taken_0x28a6e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a6e0) {
            ctx->pc = 0x28A6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A6E0u;
            // 0x28a6e4: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A6E8u;
            goto label_28a6e8;
        }
    }
    ctx->pc = 0x28A6E8u;
label_28a6e8:
    // 0x28a6e8: 0x90c202f5  lbu         $v0, 0x2F5($a2)
    ctx->pc = 0x28a6e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_28a6ec:
    // 0x28a6ec: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x28a6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_28a6f0:
    // 0x28a6f0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x28a6f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28a6f4:
    // 0x28a6f4: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x28a6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_28a6f8:
    // 0x28a6f8: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x28a6f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_28a6fc:
    // 0x28a6fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_28a700:
    // 0x28a700: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x28a700u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_28a704:
    // 0x28a704: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_28a708:
    if (ctx->pc == 0x28A708u) {
        ctx->pc = 0x28A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A704u;
        // 0x28a708: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A70Cu;
        goto label_28a70c;
    }
    ctx->pc = 0x28A704u;
    {
        const bool branch_taken_0x28a704 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x28A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A704u;
        // 0x28a708: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a704) {
            ctx->pc = 0x28A738u;
            goto label_28a738;
        }
    }
    ctx->pc = 0x28A70Cu;
label_28a70c:
    // 0x28a70c: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x28a70cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_28a710:
    // 0x28a710: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x28a710u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_28a714:
    // 0x28a714: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28a714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_28a718:
    // 0x28a718: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x28a718u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_28a71c:
    // 0x28a71c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x28a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_28a720:
    // 0x28a720: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28a720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28a724:
    // 0x28a724: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x28a724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_28a728:
    // 0x28a728: 0xdc88fff8  ld          $t0, -0x8($a0)
    ctx->pc = 0x28a728u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_28a72c:
    // 0x28a72c: 0x8383f  dsra32      $a3, $t0, 0
    ctx->pc = 0x28a72cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 8) >> (32 + 0));
label_28a730:
    // 0x28a730: 0x10000004  b           . + 4 + (0x4 << 2)
label_28a734:
    if (ctx->pc == 0x28A734u) {
        ctx->pc = 0x28A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A730u;
        // 0x28a734: 0x910c0  sll         $v0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A738u;
        goto label_28a738;
    }
    ctx->pc = 0x28A730u;
    {
        const bool branch_taken_0x28a730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A730u;
        // 0x28a734: 0x910c0  sll         $v0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a730) {
            ctx->pc = 0x28A744u;
            goto label_28a744;
        }
    }
    ctx->pc = 0x28A738u;
label_28a738:
    // 0x28a738: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x28a738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_28a73c:
    // 0x28a73c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x28a73cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28a740:
    // 0x28a740: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x28a740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_28a744:
    // 0x28a744: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x28a744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_28a748:
    // 0x28a748: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_28a74c:
    if (ctx->pc == 0x28A74Cu) {
        ctx->pc = 0x28A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A748u;
        // 0x28a74c: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A750u;
        goto label_28a750;
    }
    ctx->pc = 0x28A748u;
    {
        const bool branch_taken_0x28a748 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x28A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A748u;
        // 0x28a74c: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a748) {
            ctx->pc = 0x28A764u;
            goto label_28a764;
        }
    }
    ctx->pc = 0x28A750u;
label_28a750:
    // 0x28a750: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x28a750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_28a754:
    // 0x28a754: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28a754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_28a758:
    // 0x28a758: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x28a758u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_28a75c:
    // 0x28a75c: 0x10000002  b           . + 4 + (0x2 << 2)
label_28a760:
    if (ctx->pc == 0x28A760u) {
        ctx->pc = 0x28A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A75Cu;
        // 0x28a760: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A764u;
        goto label_28a764;
    }
    ctx->pc = 0x28A75Cu;
    {
        const bool branch_taken_0x28a75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A75Cu;
        // 0x28a760: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a75c) {
            ctx->pc = 0x28A768u;
            goto label_28a768;
        }
    }
    ctx->pc = 0x28A764u;
label_28a764:
    // 0x28a764: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x28a764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28a768:
    // 0x28a768: 0xe0f809  jalr        $a3
label_28a76c:
    if (ctx->pc == 0x28A76Cu) {
        ctx->pc = 0x28A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A768u;
        // 0x28a76c: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A770u;
        goto label_28a770;
    }
    ctx->pc = 0x28A768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x28A770u);
        ctx->pc = 0x28A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A768u;
        // 0x28a76c: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A768u, 0x28A770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28A770u;
label_28a770:
    // 0x28a770: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28a770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28a774:
    // 0x28a774: 0x3e00008  jr          $ra
label_28a778:
    if (ctx->pc == 0x28A778u) {
        ctx->pc = 0x28A778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A774u;
        // 0x28a778: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A77Cu;
        goto label_28a77c;
    }
    ctx->pc = 0x28A774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A774u;
        // 0x28a778: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A77Cu;
label_28a77c:
    // 0x28a77c: 0x0  nop
    ctx->pc = 0x28a77cu;
    // NOP
    ctx->pc = 0x28a780u;
}
