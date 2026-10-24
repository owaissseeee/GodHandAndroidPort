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

// Function: cOmBase_tickPhaseTable194558
// Address: 0x1946e0 - 0x1947c8
void cOmBase_tickPhaseTable194558_0x1946e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_tickPhaseTable194558_0x1946e0");
#endif

    switch (ctx->pc) {
        case 0x1946e0u: goto label_1946e0;
        case 0x1946e4u: goto label_1946e4;
        case 0x1946e8u: goto label_1946e8;
        case 0x1946ecu: goto label_1946ec;
        case 0x1946f0u: goto label_1946f0;
        case 0x1946f4u: goto label_1946f4;
        case 0x1946f8u: goto label_1946f8;
        case 0x1946fcu: goto label_1946fc;
        case 0x194700u: goto label_194700;
        case 0x194704u: goto label_194704;
        case 0x194708u: goto label_194708;
        case 0x19470cu: goto label_19470c;
        case 0x194710u: goto label_194710;
        case 0x194714u: goto label_194714;
        case 0x194718u: goto label_194718;
        case 0x19471cu: goto label_19471c;
        case 0x194720u: goto label_194720;
        case 0x194724u: goto label_194724;
        case 0x194728u: goto label_194728;
        case 0x19472cu: goto label_19472c;
        case 0x194730u: goto label_194730;
        case 0x194734u: goto label_194734;
        case 0x194738u: goto label_194738;
        case 0x19473cu: goto label_19473c;
        case 0x194740u: goto label_194740;
        case 0x194744u: goto label_194744;
        case 0x194748u: goto label_194748;
        case 0x19474cu: goto label_19474c;
        case 0x194750u: goto label_194750;
        case 0x194754u: goto label_194754;
        case 0x194758u: goto label_194758;
        case 0x19475cu: goto label_19475c;
        case 0x194760u: goto label_194760;
        case 0x194764u: goto label_194764;
        case 0x194768u: goto label_194768;
        case 0x19476cu: goto label_19476c;
        case 0x194770u: goto label_194770;
        case 0x194774u: goto label_194774;
        case 0x194778u: goto label_194778;
        case 0x19477cu: goto label_19477c;
        case 0x194780u: goto label_194780;
        case 0x194784u: goto label_194784;
        case 0x194788u: goto label_194788;
        case 0x19478cu: goto label_19478c;
        case 0x194790u: goto label_194790;
        case 0x194794u: goto label_194794;
        case 0x194798u: goto label_194798;
        case 0x19479cu: goto label_19479c;
        case 0x1947a0u: goto label_1947a0;
        case 0x1947a4u: goto label_1947a4;
        case 0x1947a8u: goto label_1947a8;
        case 0x1947acu: goto label_1947ac;
        case 0x1947b0u: goto label_1947b0;
        case 0x1947b4u: goto label_1947b4;
        case 0x1947b8u: goto label_1947b8;
        case 0x1947bcu: goto label_1947bc;
        case 0x1947c0u: goto label_1947c0;
        case 0x1947c4u: goto label_1947c4;
        default: break;
    }

    ctx->pc = 0x1946e0u;

label_1946e0:
    // 0x1946e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1946e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1946e4:
    // 0x1946e4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1946e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_1946e8:
    // 0x1946e8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1946e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1946ec:
    // 0x1946ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1946ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1946f0:
    // 0x1946f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1946f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1946f4:
    // 0x1946f4: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x1946f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_1946f8:
    // 0x1946f8: 0x24484b30  addiu       $t0, $v0, 0x4B30
    ctx->pc = 0x1946f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19248));
label_1946fc:
    // 0x1946fc: 0x69040007  ldl         $a0, 0x7($t0)
    ctx->pc = 0x1946fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_194700:
    // 0x194700: 0x6d040000  ldr         $a0, 0x0($t0)
    ctx->pc = 0x194700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_194704:
    // 0x194704: 0x6905000f  ldl         $a1, 0xF($t0)
    ctx->pc = 0x194704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_194708:
    // 0x194708: 0x6d050008  ldr         $a1, 0x8($t0)
    ctx->pc = 0x194708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_19470c:
    // 0x19470c: 0x69060017  ldl         $a2, 0x17($t0)
    ctx->pc = 0x19470cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_194710:
    // 0x194710: 0x6d060010  ldr         $a2, 0x10($t0)
    ctx->pc = 0x194710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_194714:
    // 0x194714: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x194714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_194718:
    // 0x194718: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x194718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19471c:
    // 0x19471c: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x19471cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_194720:
    // 0x194720: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x194720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_194724:
    // 0x194724: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x194724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_194728:
    // 0x194728: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x194728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19472c:
    // 0x19472c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19472cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_194730:
    // 0x194730: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x194730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_194734:
    // 0x194734: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x194734u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_194738:
    // 0x194738: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x194738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_19473c:
    // 0x19473c: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x19473cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_194740:
    // 0x194740: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_194744:
    if (ctx->pc == 0x194744u) {
        ctx->pc = 0x194744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194740u;
        // 0x194744: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194748u;
        goto label_194748;
    }
    ctx->pc = 0x194740u;
    {
        const bool branch_taken_0x194740 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x194744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194740u;
        // 0x194744: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194740) {
            ctx->pc = 0x194774u;
            goto label_194774;
        }
    }
    ctx->pc = 0x194748u;
label_194748:
    // 0x194748: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x194748u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_19474c:
    // 0x19474c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x19474cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_194750:
    // 0x194750: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x194750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_194754:
    // 0x194754: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x194754u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_194758:
    // 0x194758: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x194758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19475c:
    // 0x19475c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19475cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_194760:
    // 0x194760: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x194760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_194764:
    // 0x194764: 0xdc87fff8  ld          $a3, -0x8($a0)
    ctx->pc = 0x194764u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_194768:
    // 0x194768: 0x7303f  dsra32      $a2, $a3, 0
    ctx->pc = 0x194768u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 7) >> (32 + 0));
label_19476c:
    // 0x19476c: 0x10000004  b           . + 4 + (0x4 << 2)
label_194770:
    if (ctx->pc == 0x194770u) {
        ctx->pc = 0x194770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19476Cu;
        // 0x194770: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194774u;
        goto label_194774;
    }
    ctx->pc = 0x19476Cu;
    {
        const bool branch_taken_0x19476c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19476Cu;
        // 0x194770: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19476c) {
            ctx->pc = 0x194780u;
            goto label_194780;
        }
    }
    ctx->pc = 0x194774u;
label_194774:
    // 0x194774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x194774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_194778:
    // 0x194778: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x194778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19477c:
    // 0x19477c: 0x920202f5  lbu         $v0, 0x2F5($s0)
    ctx->pc = 0x19477cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_194780:
    // 0x194780: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x194780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_194784:
    // 0x194784: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x194784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_194788:
    // 0x194788: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_19478c:
    if (ctx->pc == 0x19478Cu) {
        ctx->pc = 0x19478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194788u;
        // 0x19478c: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194790u;
        goto label_194790;
    }
    ctx->pc = 0x194788u;
    {
        const bool branch_taken_0x194788 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x19478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194788u;
        // 0x19478c: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194788) {
            ctx->pc = 0x1947A4u;
            goto label_1947a4;
        }
    }
    ctx->pc = 0x194790u;
label_194790:
    // 0x194790: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x194790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_194794:
    // 0x194794: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x194794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_194798:
    // 0x194798: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x194798u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_19479c:
    // 0x19479c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1947a0:
    if (ctx->pc == 0x1947A0u) {
        ctx->pc = 0x1947A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19479Cu;
        // 0x1947a0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1947A4u;
        goto label_1947a4;
    }
    ctx->pc = 0x19479Cu;
    {
        const bool branch_taken_0x19479c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1947A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19479Cu;
        // 0x1947a0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19479c) {
            ctx->pc = 0x1947A8u;
            goto label_1947a8;
        }
    }
    ctx->pc = 0x1947A4u;
label_1947a4:
    // 0x1947a4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1947a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1947a8:
    // 0x1947a8: 0xc0f809  jalr        $a2
label_1947ac:
    if (ctx->pc == 0x1947ACu) {
        ctx->pc = 0x1947ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947A8u;
        // 0x1947ac: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1947B0u;
        goto label_1947b0;
    }
    ctx->pc = 0x1947A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1947B0u);
        ctx->pc = 0x1947ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947A8u;
        // 0x1947ac: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1947A8u, 0x1947B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1947B0u;
label_1947b0:
    // 0x1947b0: 0xc065156  jal         func_194558
label_1947b4:
    if (ctx->pc == 0x1947B4u) {
        ctx->pc = 0x1947B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947B0u;
        // 0x1947b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1947B8u;
        goto label_1947b8;
    }
    ctx->pc = 0x1947B0u;
    SET_GPR_U32(ctx, 31, 0x1947B8u);
    ctx->pc = 0x1947B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1947B0u;
    // 0x1947b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194558u, 0x1947B0u, 0x1947B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1947B8u;
label_1947b8:
    // 0x1947b8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1947b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1947bc:
    // 0x1947bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1947bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1947c0:
    // 0x1947c0: 0x3e00008  jr          $ra
label_1947c4:
    if (ctx->pc == 0x1947C4u) {
        ctx->pc = 0x1947C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947C0u;
        // 0x1947c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1947C8u;
        goto label_fallthrough_0x1947c0;
    }
    ctx->pc = 0x1947C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1947C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947C0u;
        // 0x1947c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1947C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1947c0:
    ctx->pc = 0x1947C8u;
}
