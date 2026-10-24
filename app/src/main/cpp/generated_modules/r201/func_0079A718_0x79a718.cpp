#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r201_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r201
{
// Function: func_0079A718
// Address: 0x79a718 - 0x79a9c0
void func_0079A718_0x79a718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A718_0x79a718");
#endif

    switch (ctx->pc) {
        case 0x79a770u: goto label_79a770;
        case 0x79a780u: goto label_79a780;
        case 0x79a788u: goto label_79a788;
        case 0x79a7c8u: goto label_79a7c8;
        case 0x79a7d4u: goto label_79a7d4;
        case 0x79a7e0u: goto label_79a7e0;
        case 0x79a7e8u: goto label_79a7e8;
        case 0x79a7f8u: goto label_79a7f8;
        case 0x79a824u: goto label_79a824;
        case 0x79a82cu: goto label_79a82c;
        case 0x79a834u: goto label_79a834;
        case 0x79a84cu: goto label_79a84c;
        case 0x79a860u: goto label_79a860;
        case 0x79a874u: goto label_79a874;
        case 0x79a8d8u: goto label_79a8d8;
        case 0x79a92cu: goto label_79a92c;
        case 0x79a934u: goto label_79a934;
        case 0x79a95cu: goto label_79a95c;
        case 0x79a988u: goto label_79a988;
        default: break;
    }

    ctx->pc = 0x79a718u;

    // 0x79a718: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x79a718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x79a71c: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x79a71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x79a720: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x79a720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x79a724: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x79a724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79a728: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x79a728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x79a72c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x79a72cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79a730: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x79a730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x79a734: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x79a734u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x79a738: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x79a738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x79a73c: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x79a73cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x79a740: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x79a740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x79a744: 0x3c14007a  lui         $s4, 0x7A
    ctx->pc = 0x79a744u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
    // 0x79a748: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x79a748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x79a74c: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x79a74cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x79a750: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x79a750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x79a754: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x79a754u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79a758: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x79a758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x79a75c: 0x3c17005f  lui         $s7, 0x5F
    ctx->pc = 0x79a75cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)95 << 16));
    // 0x79a760: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x79a760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x79a764: 0x27be0050  addiu       $fp, $sp, 0x50
    ctx->pc = 0x79a764u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x79a768: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79A768u;
    {
        const bool branch_taken_0x79a768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A768u;
        // 0x79a76c: 0xe7b40110  swc1        $f20, 0x110($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a768) {
            ctx->pc = 0x79A780u;
            goto label_79a780;
        }
    }
    ctx->pc = 0x79A770u;
label_79a770:
    // 0x79a770: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79a770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a774: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a778: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A778u;
    SET_GPR_U32(ctx, 31, 0x79A780u);
    ctx->pc = 0x79A77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A778u;
    // 0x79a77c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A778u, 0x79A780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A780u;
label_79a780:
    // 0x79a780: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x79A780u;
    SET_GPR_U32(ctx, 31, 0x79A788u);
    ctx->pc = 0x79A784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A780u;
    // 0x79a784: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x79A780u, 0x79A788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A788u;
label_79a788:
    // 0x79a788: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79A788u;
    {
        const bool branch_taken_0x79a788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A788u;
        // 0x79a78c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a788) {
            ctx->pc = 0x79A770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a770;
        }
    }
    ctx->pc = 0x79A790u;
    // 0x79a790: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79a790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a794: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79a794u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a798: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x79a798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x79a79c: 0xafb10034  sw          $s1, 0x34($sp)
    ctx->pc = 0x79a79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 17));
    // 0x79a7a0: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x79a7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a7a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79a7a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7a8: 0xafbd0030  sw          $sp, 0x30($sp)
    ctx->pc = 0x79a7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 29));
    // 0x79a7ac: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a7b0: 0x6ba30037  ldl         $v1, 0x37($sp)
    ctx->pc = 0x79a7b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x79a7b4: 0x6fa30030  ldr         $v1, 0x30($sp)
    ctx->pc = 0x79a7b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x79a7b8: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x79a7b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a7bc: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x79a7bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a7c0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A7C0u;
    SET_GPR_U32(ctx, 31, 0x79A7C8u);
    ctx->pc = 0x79A7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7C0u;
    // 0x79a7c4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A7C0u, 0x79A7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7C8u;
label_79a7c8:
    // 0x79a7c8: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79a7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a7cc: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79A7CCu;
    SET_GPR_U32(ctx, 31, 0x79A7D4u);
    ctx->pc = 0x79A7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7CCu;
    // 0x79a7d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79A7CCu, 0x79A7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7D4u;
label_79a7d4:
    // 0x79a7d4: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79a7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a7d8: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79A7D8u;
    SET_GPR_U32(ctx, 31, 0x79A7E0u);
    ctx->pc = 0x79A7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7D8u;
    // 0x79a7dc: 0x2685bcb8  addiu       $a1, $s4, -0x4348 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79A7D8u, 0x79A7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7E0u;
label_79a7e0:
    // 0x79a7e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79a7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a7e4: 0x0  nop
    ctx->pc = 0x79a7e4u;
    // NOP
label_79a7e8:
    // 0x79a7e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a7e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7ec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x79a7ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x79a7f0: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79A7F0u;
    SET_GPR_U32(ctx, 31, 0x79A7F8u);
    ctx->pc = 0x79A7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7F0u;
    // 0x79a7f4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79A7F0u, 0x79A7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7F8u;
label_79a7f8:
    // 0x79a7f8: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x79a7f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79a7fc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79A7FCu;
    {
        const bool branch_taken_0x79a7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a7fc) {
            ctx->pc = 0x79A800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A7FCu;
            // 0x79a800: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a7e8;
        }
    }
    ctx->pc = 0x79A804u;
    // 0x79a804: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a808: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x79a808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x79a80c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a80cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a810: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a810u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a814: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a814u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a818: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79a818u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a81c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A81Cu;
    SET_GPR_U32(ctx, 31, 0x79A824u);
    ctx->pc = 0x79A820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A81Cu;
    // 0x79a820: 0x26a4ee00  addiu       $a0, $s5, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A81Cu, 0x79A824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A824u;
label_79a824:
    // 0x79a824: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x79A824u;
    SET_GPR_U32(ctx, 31, 0x79A82Cu);
    ctx->pc = 0x79A828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A824u;
    // 0x79a828: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79A824u, 0x79A82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A82Cu;
label_79a82c:
    // 0x79a82c: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79A82Cu;
    SET_GPR_U32(ctx, 31, 0x79A834u);
    ctx->pc = 0x79A830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A82Cu;
    // 0x79a830: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A82Cu, 0x79A834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A834u;
label_79a834:
    // 0x79a834: 0x8ee48658  lw          $a0, -0x79A8($s7)
    ctx->pc = 0x79a834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294936152)));
    // 0x79a838: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x79a838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x79a83c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79a840: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79a840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79a844: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79A844u;
    SET_GPR_U32(ctx, 31, 0x79A84Cu);
    ctx->pc = 0x79A848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A844u;
    // 0x79a848: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A844u, 0x79A84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A84Cu;
label_79a84c:
    // 0x79a84c: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x79a84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79a850: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x79a850u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a854: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x79a854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a858: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79A858u;
    SET_GPR_U32(ctx, 31, 0x79A860u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A858u, 0x79A860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A860u;
label_79a860:
    // 0x79a860: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x79a860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x79a864: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79a864u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a868: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x79a868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a86c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79A86Cu;
    SET_GPR_U32(ctx, 31, 0x79A874u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A86Cu, 0x79A874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A874u;
label_79a874:
    // 0x79a874: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a878: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79a878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79a87c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x79a87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x79a880: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x79a880u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x79a884: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a888: 0x3c014022  lui         $at, 0x4022
    ctx->pc = 0x79a888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16418 << 16));
    // 0x79a88c: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x79a88cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x79a890: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a894: 0x3c014328  lui         $at, 0x4328
    ctx->pc = 0x79a894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17192 << 16));
    // 0x79a898: 0x3421428f  ori         $at, $at, 0x428F
    ctx->pc = 0x79a898u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17039);
    // 0x79a89c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a89cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a8a0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x79a8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x79a8a4: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x79a8a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x79a8a8: 0xe6420008  swc1        $f2, 0x8($s2)
    ctx->pc = 0x79a8a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x79a8ac: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x79a8acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x79a8b0: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x79a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79a8b4: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A8B4u;
    {
        const bool branch_taken_0x79a8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x79A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8B4u;
        // 0x79a8b8: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8b4) {
            ctx->pc = 0x79A8D0u;
            goto label_79a8d0;
        }
    }
    ctx->pc = 0x79A8BCu;
    // 0x79a8bc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x79a8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79a8c0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x79a8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a8c4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79a8c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79a8c8: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x79a8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a8cc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79a8d0:
    // 0x79a8d0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79A8D0u;
    SET_GPR_U32(ctx, 31, 0x79A8D8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A8D0u, 0x79A8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8D8u;
label_79a8d8:
    // 0x79a8d8: 0x3c01c045  lui         $at, 0xC045
    ctx->pc = 0x79a8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49221 << 16));
    // 0x79a8dc: 0x3421b5fd  ori         $at, $at, 0xB5FD
    ctx->pc = 0x79a8dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46589);
    // 0x79a8e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a8e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a8e4: 0x24430100  addiu       $v1, $v0, 0x100
    ctx->pc = 0x79a8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x79a8e8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x79a8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x79a8ec: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x79a8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x79a8f0: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x79a8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x79a8f4: 0x10720007  beq         $v1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A8F4u;
    {
        const bool branch_taken_0x79a8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x79A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8F4u;
        // 0x79a8f8: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8f4) {
            ctx->pc = 0x79A914u;
            goto label_79a914;
        }
    }
    ctx->pc = 0x79A8FCu;
    // 0x79a8fc: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x79a8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a900: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x79a900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x79a904: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x79a904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a908: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x79a908u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x79a90c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x79a90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a910: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x79a910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_79a914:
    // 0x79a914: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79a918: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a91c: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x79a91cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C264Cu));
    // 0x79a920: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a924: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x79A924u;
    SET_GPR_U32(ctx, 31, 0x79A92Cu);
    ctx->pc = 0x79A928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A924u;
    // 0x79a928: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x79A924u, 0x79A92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A92Cu;
label_79a92c:
    // 0x79a92c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79A92Cu;
    SET_GPR_U32(ctx, 31, 0x79A934u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A92Cu, 0x79A934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A934u;
label_79a934:
    // 0x79a934: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x79a934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79a938: 0x10560006  beq         $v0, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A938u;
    {
        const bool branch_taken_0x79a938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x79A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A938u;
        // 0x79a93c: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a938) {
            ctx->pc = 0x79A954u;
            goto label_79a954;
        }
    }
    ctx->pc = 0x79A940u;
    // 0x79a940: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x79a940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79a944: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x79a944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a948: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79a948u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79a94c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x79a94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a950: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79a954:
    // 0x79a954: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79A954u;
    SET_GPR_U32(ctx, 31, 0x79A95Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A954u, 0x79A95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A95Cu;
label_79a95c:
    // 0x79a95c: 0x24430100  addiu       $v1, $v0, 0x100
    ctx->pc = 0x79a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x79a960: 0x107e0006  beq         $v1, $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A960u;
    {
        const bool branch_taken_0x79a960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        ctx->pc = 0x79A964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A960u;
        // 0x79a964: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a960) {
            ctx->pc = 0x79A97Cu;
            goto label_79a97c;
        }
    }
    ctx->pc = 0x79A968u;
    // 0x79a968: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x79a968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x79a96c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x79a96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a970: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x79a970u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x79a974: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x79a974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a978: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x79a978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_79a97c:
    // 0x79a97c: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a980: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A980u;
    SET_GPR_U32(ctx, 31, 0x79A988u);
    ctx->pc = 0x79A984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A980u;
    // 0x79a984: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A980u, 0x79A988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A988u;
label_79a988:
    // 0x79a988: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x79a988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x79a98c: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x79a98cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x79a990: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x79a990u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79a994: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x79a994u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79a998: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x79a998u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79a99c: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x79a99cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79a9a0: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x79a9a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79a9a4: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x79a9a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79a9a8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x79a9a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79a9ac: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x79a9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a9b0: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x79a9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79a9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x79A9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9B4u;
        // 0x79a9b8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A9BCu;
    // 0x79a9bc: 0x0  nop
    ctx->pc = 0x79a9bcu;
    // NOP
    ctx->pc = 0x79a9c0u;
}
} // namespace gh_r201
