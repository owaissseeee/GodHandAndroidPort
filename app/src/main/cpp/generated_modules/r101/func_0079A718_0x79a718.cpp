#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r101_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r101
{
// Function: func_0079A718
// Address: 0x79a718 - 0x79a888
void func_0079A718_0x79a718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A718_0x79a718");
#endif

    switch (ctx->pc) {
        case 0x79a74cu: goto label_79a74c;
        case 0x79a768u: goto label_79a768;
        case 0x79a774u: goto label_79a774;
        case 0x79a784u: goto label_79a784;
        case 0x79a804u: goto label_79a804;
        case 0x79a828u: goto label_79a828;
        case 0x79a840u: goto label_79a840;
        case 0x79a864u: goto label_79a864;
        default: break;
    }

    ctx->pc = 0x79a718u;

    // 0x79a718: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x79a718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x79a71c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a720: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x79a720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x79a724: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79a724u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79a728: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x79a728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x79a72c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x79a72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x79a730: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x79a730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x79a734: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x79a734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x79a738: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x79a738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x79a73c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x79a73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x79a740: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a740u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a744: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A744u;
    SET_GPR_U32(ctx, 31, 0x79A74Cu);
    ctx->pc = 0x79A748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A744u;
    // 0x79a748: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A744u, 0x79A74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A74Cu;
label_79a74c:
    // 0x79a74c: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x79a74cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a750: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x79a750u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x79a754: 0x3c12005f  lui         $s2, 0x5F
    ctx->pc = 0x79a754u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)95 << 16));
    // 0x79a758: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79a758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79a75c: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x79a75cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79a760: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79A760u;
    {
        const bool branch_taken_0x79a760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A760u;
        // 0x79a764: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a760) {
            ctx->pc = 0x79A774u;
            goto label_79a774;
        }
    }
    ctx->pc = 0x79A768u;
label_79a768:
    // 0x79a768: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a76c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A76Cu;
    SET_GPR_U32(ctx, 31, 0x79A774u);
    ctx->pc = 0x79A770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A76Cu;
    // 0x79a770: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A76Cu, 0x79A774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A774u;
label_79a774:
    // 0x79a774: 0x2624ea60  addiu       $a0, $s1, -0x15A0
    ctx->pc = 0x79a774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
    // 0x79a778: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a77c: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79A77Cu;
    SET_GPR_U32(ctx, 31, 0x79A784u);
    ctx->pc = 0x79A780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A77Cu;
    // 0x79a780: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79A77Cu, 0x79A784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A784u;
label_79a784:
    // 0x79a784: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79a784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a788: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A788u;
    {
        const bool branch_taken_0x79a788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x79A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A788u;
        // 0x79a78c: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a788) {
            ctx->pc = 0x79A768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a768;
        }
    }
    ctx->pc = 0x79A790u;
    // 0x79a790: 0x8e438658  lw          $v1, -0x79A8($s2)
    ctx->pc = 0x79a790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
    // 0x79a794: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x79a794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x79a798: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x79a798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x79a79c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x79a79cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x79a7a0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79a7a4: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x79a7a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x79a7a8: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x79a7a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x79a7ac: 0x26448658  addiu       $a0, $s2, -0x79A8
    ctx->pc = 0x79a7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936152));
    // 0x79a7b0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x79a7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x79a7b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79a7b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7b8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79a7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x79a7bc: 0xa3a80000  sb          $t0, 0x0($sp)
    ctx->pc = 0x79a7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x79a7c0: 0xa3a90010  sb          $t1, 0x10($sp)
    ctx->pc = 0x79a7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 9));
    // 0x79a7c4: 0xa3a60020  sb          $a2, 0x20($sp)
    ctx->pc = 0x79a7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 6));
    // 0x79a7c8: 0xa3a70030  sb          $a3, 0x30($sp)
    ctx->pc = 0x79a7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 7));
    // 0x79a7cc: 0xafb00054  sw          $s0, 0x54($sp)
    ctx->pc = 0x79a7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 16));
    // 0x79a7d0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x79a7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x79a7d4: 0xafb4005c  sw          $s4, 0x5C($sp)
    ctx->pc = 0x79a7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 20));
    // 0x79a7d8: 0xafbd0050  sw          $sp, 0x50($sp)
    ctx->pc = 0x79a7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 29));
    // 0x79a7dc: 0x6ba20057  ldl         $v0, 0x57($sp)
    ctx->pc = 0x79a7dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x79a7e0: 0x6fa20050  ldr         $v0, 0x50($sp)
    ctx->pc = 0x79a7e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x79a7e4: 0x6ba3005f  ldl         $v1, 0x5F($sp)
    ctx->pc = 0x79a7e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x79a7e8: 0x6fa30058  ldr         $v1, 0x58($sp)
    ctx->pc = 0x79a7e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x79a7ec: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x79a7ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a7f0: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x79a7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a7f4: 0xb3a3004f  sdl         $v1, 0x4F($sp)
    ctx->pc = 0x79a7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a7f8: 0xb7a30048  sdr         $v1, 0x48($sp)
    ctx->pc = 0x79a7f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a7fc: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A7FCu;
    SET_GPR_U32(ctx, 31, 0x79A804u);
    ctx->pc = 0x79A800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7FCu;
    // 0x79a800: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A7FCu, 0x79A804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A804u;
label_79a804:
    // 0x79a804: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x79a804u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a808: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x79a808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a80c: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x79a80cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x79a810: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x79a810u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x79a814: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x79A814u;
    {
        const bool branch_taken_0x79a814 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A814u;
        // 0x79a818: 0x3c140058  lui         $s4, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a814) {
            ctx->pc = 0x79A858u;
            goto label_79a858;
        }
    }
    ctx->pc = 0x79A81Cu;
    // 0x79a81c: 0x3c13007a  lui         $s3, 0x7A
    ctx->pc = 0x79a81cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
    // 0x79a820: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x79a820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79a824: 0x0  nop
    ctx->pc = 0x79a824u;
    // NOP
label_79a828:
    // 0x79a828: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79a828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a82c: 0x26846ab0  addiu       $a0, $s4, 0x6AB0
    ctx->pc = 0x79a82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 27312));
    // 0x79a830: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x79a830u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x79a834: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x79a834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x79a838: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79A838u;
    SET_GPR_U32(ctx, 31, 0x79A840u);
    ctx->pc = 0x79A83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A838u;
    // 0x79a83c: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A838u, 0x79A840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A840u;
label_79a840:
    // 0x79a840: 0x8e63ad80  lw          $v1, -0x5280($s3)
    ctx->pc = 0x79a840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294946176)));
    // 0x79a844: 0x251202b  sltu        $a0, $s2, $s1
    ctx->pc = 0x79a844u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x79a848: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a84c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a850: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x79A850u;
    {
        const bool branch_taken_0x79a850 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A850u;
        // 0x79a854: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a850) {
            ctx->pc = 0x79A828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a828;
        }
    }
    ctx->pc = 0x79A858u;
label_79a858:
    // 0x79a858: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x79a858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x79a85c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A85Cu;
    SET_GPR_U32(ctx, 31, 0x79A864u);
    ctx->pc = 0x79A860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A85Cu;
    // 0x79a860: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A85Cu, 0x79A864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A864u;
label_79a864:
    // 0x79a864: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x79a864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79a868: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x79a868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79a86c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x79a86cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79a870: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x79a870u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79a874: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x79a874u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79a878: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x79a878u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a87c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x79a87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a880: 0x3e00008  jr          $ra
    ctx->pc = 0x79A880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A880u;
        // 0x79a884: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A888u;
}
} // namespace gh_r101
