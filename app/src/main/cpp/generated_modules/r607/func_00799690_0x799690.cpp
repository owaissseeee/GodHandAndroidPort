#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r607_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r607
{
// Function: func_00799690
// Address: 0x799690 - 0x799b90
void func_00799690_0x799690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799690_0x799690");
#endif

    switch (ctx->pc) {
        case 0x7996e8u: goto label_7996e8;
        case 0x799708u: goto label_799708;
        case 0x799710u: goto label_799710;
        case 0x799718u: goto label_799718;
        case 0x799724u: goto label_799724;
        case 0x79972cu: goto label_79972c;
        case 0x799740u: goto label_799740;
        case 0x799754u: goto label_799754;
        case 0x7997e4u: goto label_7997e4;
        case 0x7997f4u: goto label_7997f4;
        case 0x799844u: goto label_799844;
        case 0x799888u: goto label_799888;
        case 0x79989cu: goto label_79989c;
        case 0x7998a8u: goto label_7998a8;
        case 0x7998c4u: goto label_7998c4;
        case 0x7998d4u: goto label_7998d4;
        case 0x7998f8u: goto label_7998f8;
        case 0x799938u: goto label_799938;
        case 0x799940u: goto label_799940;
        case 0x799968u: goto label_799968;
        case 0x79998cu: goto label_79998c;
        case 0x79999cu: goto label_79999c;
        case 0x7999c0u: goto label_7999c0;
        case 0x7999d8u: goto label_7999d8;
        case 0x7999e4u: goto label_7999e4;
        case 0x799a60u: goto label_799a60;
        case 0x799a84u: goto label_799a84;
        case 0x799a98u: goto label_799a98;
        case 0x799aa4u: goto label_799aa4;
        case 0x799ab4u: goto label_799ab4;
        case 0x799ad0u: goto label_799ad0;
        case 0x799b0cu: goto label_799b0c;
        case 0x799b24u: goto label_799b24;
        case 0x799b30u: goto label_799b30;
        case 0x799b3cu: goto label_799b3c;
        case 0x799b48u: goto label_799b48;
        case 0x799b58u: goto label_799b58;
        default: break;
    }

    ctx->pc = 0x799690u;

    // 0x799690: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x799690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x799694: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799698: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x799698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x79969c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x79969cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x7996a0: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x7996a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x7996a4: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x7996a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x7996a8: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x7996a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x7996ac: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x7996acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x7996b0: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x7996b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x7996b4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x7996b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x7996b8: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x7996b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x7996bc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x7996bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x7996c0: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x7996c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x7996c4: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x7996c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x7996c8: 0x2446b620  addiu       $a2, $v0, -0x49E0
    ctx->pc = 0x7996c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948384));
    // 0x7996cc: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x7996ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x7996d0: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x7996d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x7996d4: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x7996d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79B628u));
    // 0x7996d8: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x7996d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7996dc: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x7996dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7996e0: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x7996e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x7996e4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x7996e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_7996e8:
    // 0x7996e8: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x7996e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
    // 0x7996ec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7996ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7996f0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x7996f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x7996f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7996f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7996f8: 0x14400106  bnez        $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x7996F8u;
    {
        const bool branch_taken_0x7996f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7996FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996F8u;
        // 0x7996fc: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996f8) {
            ctx->pc = 0x799B14u;
            goto label_799b14;
        }
    }
    ctx->pc = 0x799700u;
    // 0x799700: 0xc1e64ea  jal         func_7993A8
    ctx->pc = 0x799700u;
    SET_GPR_U32(ctx, 31, 0x799708u);
    ctx->pc = 0x799704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799700u;
    // 0x799704: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7993A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7993A8u, 0x799700u, 0x799708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799708u;
label_799708:
    // 0x799708: 0xc1e6522  jal         func_799488
    ctx->pc = 0x799708u;
    SET_GPR_U32(ctx, 31, 0x799710u);
    ctx->pc = 0x799488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799488u, 0x799708u, 0x799710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799710u;
label_799710:
    // 0x799710: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x799710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x799714: 0x0  nop
    ctx->pc = 0x799714u;
    // NOP
label_799718:
    // 0x799718: 0x24a4ea60  addiu       $a0, $a1, -0x15A0
    ctx->pc = 0x799718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
    // 0x79971c: 0xc0b0c46  jal         func_2C3118
    ctx->pc = 0x79971Cu;
    SET_GPR_U32(ctx, 31, 0x799724u);
    ctx->pc = 0x799720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79971Cu;
    // 0x799720: 0x26850002  addiu       $a1, $s4, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3118u, 0x79971Cu, 0x799724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799724u;
label_799724:
    // 0x799724: 0xc1e68e6  jal         func_79A398
    ctx->pc = 0x799724u;
    SET_GPR_U32(ctx, 31, 0x79972Cu);
    ctx->pc = 0x799728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799724u;
    // 0x799728: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A398u, 0x799724u, 0x79972Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79972Cu;
label_79972c:
    // 0x79972c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79972Cu;
    {
        const bool branch_taken_0x79972c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79972Cu;
        // 0x799730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79972c) {
            ctx->pc = 0x799748u;
            goto label_799748;
        }
    }
    ctx->pc = 0x799734u;
    // 0x799734: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x799734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x799738: 0xc0b0376  jal         func_2C0DD8
    ctx->pc = 0x799738u;
    SET_GPR_U32(ctx, 31, 0x799740u);
    ctx->pc = 0x79973Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799738u;
    // 0x79973c: 0x24060031  addiu       $a2, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DD8u, 0x799738u, 0x799740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799740u;
label_799740:
    // 0x799740: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799740u;
    {
        const bool branch_taken_0x799740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799740u;
        // 0x799744: 0x2a850020  slti        $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799740) {
            ctx->pc = 0x799758u;
            goto label_799758;
        }
    }
    ctx->pc = 0x799748u;
label_799748:
    // 0x799748: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79974c: 0xc0b0376  jal         func_2C0DD8
    ctx->pc = 0x79974Cu;
    SET_GPR_U32(ctx, 31, 0x799754u);
    ctx->pc = 0x799750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79974Cu;
    // 0x799750: 0x24060031  addiu       $a2, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DD8u, 0x79974Cu, 0x799754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799754u;
label_799754:
    // 0x799754: 0x2a850020  slti        $a1, $s4, 0x20
    ctx->pc = 0x799754u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)32) ? 1 : 0);
label_799758:
    // 0x799758: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x799758u;
    {
        const bool branch_taken_0x799758 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799758u;
        // 0x79975c: 0x3c06005f  lui         $a2, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799758) {
            ctx->pc = 0x79978Cu;
            goto label_79978c;
        }
    }
    ctx->pc = 0x799760u;
    // 0x799760: 0x141142  srl         $v0, $s4, 5
    ctx->pc = 0x799760u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 5));
    // 0x799764: 0x8cc48658  lw          $a0, -0x79A8($a2)
    ctx->pc = 0x799764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294936152)));
    // 0x799768: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x799768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x79976c: 0x3283001f  andi        $v1, $s4, 0x1F
    ctx->pc = 0x79976cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)31);
    // 0x799770: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x799770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x799774: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x799774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x799778: 0x621806  srlv        $v1, $v0, $v1
    ctx->pc = 0x799778u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x79977c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79977cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x799780: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x799784: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x799784u;
    {
        const bool branch_taken_0x799784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799784u;
        // 0x799788: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799784) {
            ctx->pc = 0x799790u;
            goto label_799790;
        }
    }
    ctx->pc = 0x79978Cu;
label_79978c:
    // 0x79978c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x79978cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799790:
    // 0x799790: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x799790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x799794: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x799794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x799798: 0x104000d3  beqz        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x799798u;
    {
        const bool branch_taken_0x799798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799798u;
        // 0x79979c: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799798) {
            ctx->pc = 0x799AE8u;
            goto label_799ae8;
        }
    }
    ctx->pc = 0x7997A0u;
    // 0x7997a0: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7997a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x7997a4: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x7997a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x7997a8: 0x8c43b770  lw          $v1, -0x4890($v0)
    ctx->pc = 0x7997a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948720)));
    // 0x7997ac: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x7997acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997b0: 0x3c014528  lui         $at, 0x4528
    ctx->pc = 0x7997b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17704 << 16));
    // 0x7997b4: 0x3421c000  ori         $at, $at, 0xC000
    ctx->pc = 0x7997b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49152);
    // 0x7997b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7997b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7997bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x7997bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x7997c0: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x7997c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7997c4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x7997c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7997c8: 0x0  nop
    ctx->pc = 0x7997c8u;
    // NOP
    // 0x7997cc: 0x45000089  bc1f        . + 4 + (0x89 << 2)
    ctx->pc = 0x7997CCu;
    {
        const bool branch_taken_0x7997cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x7997D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997CCu;
        // 0x7997d0: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997cc) {
            ctx->pc = 0x7999F4u;
            goto label_7999f4;
        }
    }
    ctx->pc = 0x7997D4u;
    // 0x7997d4: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x7997d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x7997d8: 0x3c1e007a  lui         $fp, 0x7A
    ctx->pc = 0x7997d8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
    // 0x7997dc: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x7997DCu;
    SET_GPR_U32(ctx, 31, 0x7997E4u);
    ctx->pc = 0x7997E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997DCu;
    // 0x7997e0: 0x8ca42f84  lw          $a0, 0x2F84($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x7997DCu, 0x7997E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997E4u;
label_7997e4:
    // 0x7997e4: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x7997e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x7997e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7997e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997ec: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x7997ECu;
    SET_GPR_U32(ctx, 31, 0x7997F4u);
    ctx->pc = 0x7997F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997ECu;
    // 0x7997f0: 0x8cc42f84  lw          $a0, 0x2F84($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x7997ECu, 0x7997F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997F4u;
label_7997f4:
    // 0x7997f4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x7997f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x7997f8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x7997f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x7997fc: 0xa3a30018  sb          $v1, 0x18($sp)
    ctx->pc = 0x7997fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x799800: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x799800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799804: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x799804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799808: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x799808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x79980c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x79980cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x799810: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x799810u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x799814: 0xa3a40020  sb          $a0, 0x20($sp)
    ctx->pc = 0x799814u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 4));
    // 0x799818: 0xa3a50028  sb          $a1, 0x28($sp)
    ctx->pc = 0x799818u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 5));
    // 0x79981c: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x79981cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
    // 0x799820: 0xa3a70038  sb          $a3, 0x38($sp)
    ctx->pc = 0x799820u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 7));
    // 0x799824: 0x8ea3b770  lw          $v1, -0x4890($s5)
    ctx->pc = 0x799824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948720)));
    // 0x799828: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x799828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x79982c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x79982cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x799830: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x799830u;
    {
        const bool branch_taken_0x799830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799830u;
        // 0x799834: 0x27b70040  addiu       $s7, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799830) {
            ctx->pc = 0x7998B4u;
            goto label_7998b4;
        }
    }
    ctx->pc = 0x799838u;
    // 0x799838: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x799838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x79983c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x79983Cu;
    SET_GPR_U32(ctx, 31, 0x799844u);
    ctx->pc = 0x799840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79983Cu;
    // 0x799840: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x79983Cu, 0x799844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799844u;
label_799844:
    // 0x799844: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x799844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x799848: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x799848u;
    {
        const bool branch_taken_0x799848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799848u;
        // 0x79984c: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799848) {
            ctx->pc = 0x799874u;
            goto label_799874;
        }
    }
    ctx->pc = 0x799850u;
    // 0x799850: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x799850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x799854: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x799854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x799858: 0x8c648658  lw          $a0, -0x79A8($v1)
    ctx->pc = 0x799858u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79985c: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x79985cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x799860: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x799860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x799864: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x799868: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x799868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79986c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x79986cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x799870: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x799870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_799874:
    // 0x799874: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x799874u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799878: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79987c: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x79987cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
    // 0x799880: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x799880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799884: 0x0  nop
    ctx->pc = 0x799884u;
    // NOP
label_799888:
    // 0x799888: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x799888u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79988c: 0x26646ab0  addiu       $a0, $s3, 0x6AB0
    ctx->pc = 0x79988cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 27312));
    // 0x799890: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x799890u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x799894: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799894u;
    SET_GPR_U32(ctx, 31, 0x79989Cu);
    ctx->pc = 0x799898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799894u;
    // 0x799898: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799894u, 0x79989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79989Cu;
label_79989c:
    // 0x79989c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79989cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998a0: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x7998A0u;
    SET_GPR_U32(ctx, 31, 0x7998A8u);
    ctx->pc = 0x7998A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998A0u;
    // 0x7998a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x7998A0u, 0x7998A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998A8u;
label_7998a8:
    // 0x7998a8: 0x2e420006  sltiu       $v0, $s2, 0x6
    ctx->pc = 0x7998a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x7998ac: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x7998ACu;
    {
        const bool branch_taken_0x7998ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7998B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998ACu;
        // 0x7998b0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998ac) {
            ctx->pc = 0x799888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799888;
        }
    }
    ctx->pc = 0x7998B4u;
label_7998b4:
    // 0x7998b4: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x7998b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x7998b8: 0x8ca42f84  lw          $a0, 0x2F84($a1)
    ctx->pc = 0x7998b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x7998bc: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x7998BCu;
    SET_GPR_U32(ctx, 31, 0x7998C4u);
    ctx->pc = 0x7998C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998BCu;
    // 0x7998c0: 0x27c5b630  addiu       $a1, $fp, -0x49D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294948400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x7998BCu, 0x7998C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998C4u;
label_7998c4:
    // 0x7998c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7998c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7998c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x7998c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998cc: 0xc1e69fc  jal         func_79A7F0
    ctx->pc = 0x7998CCu;
    SET_GPR_U32(ctx, 31, 0x7998D4u);
    ctx->pc = 0x7998D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998CCu;
    // 0x7998d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A7F0u, 0x7998CCu, 0x7998D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998D4u;
label_7998d4:
    // 0x7998d4: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x7998d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x7998d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7998d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7998dc: 0x24c4ee00  addiu       $a0, $a2, -0x1200
    ctx->pc = 0x7998dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962688));
    // 0x7998e0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7998e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7998e4: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x7998e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x7998e8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7998e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7998ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7998ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998f0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7998F0u;
    SET_GPR_U32(ctx, 31, 0x7998F8u);
    ctx->pc = 0x7998F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998F0u;
    // 0x7998f4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7998F0u, 0x7998F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998F8u;
label_7998f8:
    // 0x7998f8: 0x8ea3b770  lw          $v1, -0x4890($s5)
    ctx->pc = 0x7998f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948720)));
    // 0x7998fc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x7998fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x799900: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x799900u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x799904: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x799904u;
    {
        const bool branch_taken_0x799904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799904u;
        // 0x799908: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799904) {
            ctx->pc = 0x7999D0u;
            goto label_7999d0;
        }
    }
    ctx->pc = 0x79990Cu;
    // 0x79990c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79990cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x799910: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x799910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799914: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x799914u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799918: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x799918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79991c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x79991cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x799920: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x799924: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x799924u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799928: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79992c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79992cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799930: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799930u;
    SET_GPR_U32(ctx, 31, 0x799938u);
    ctx->pc = 0x799934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799930u;
    // 0x799934: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799930u, 0x799938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799938u;
label_799938:
    // 0x799938: 0xc1e6830  jal         func_79A0C0
    ctx->pc = 0x799938u;
    SET_GPR_U32(ctx, 31, 0x799940u);
    ctx->pc = 0x79993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799938u;
    // 0x79993c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A0C0u, 0x799938u, 0x799940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799940u;
label_799940:
    // 0x799940: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x799940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x799944: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x799944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x799948: 0x8c838658  lw          $v1, -0x79A8($a0)
    ctx->pc = 0x799948u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79994c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79994cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799950: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x799950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799954: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799958: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x799958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x79995c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79995cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x799960: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x799960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x799964: 0x0  nop
    ctx->pc = 0x799964u;
    // NOP
label_799968:
    // 0x799968: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x799968u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
    // 0x79996c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x79996cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x799970: 0x24c464f0  addiu       $a0, $a2, 0x64F0
    ctx->pc = 0x799970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 25840));
    // 0x799974: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x799974u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x799978: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x799978u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x79997c: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x79997cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x799980: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x799980u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799984: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799984u;
    SET_GPR_U32(ctx, 31, 0x79998Cu);
    ctx->pc = 0x799988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799984u;
    // 0x799988: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799984u, 0x79998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79998Cu;
label_79998c:
    // 0x79998c: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x79998cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x799990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799994: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x799994u;
    SET_GPR_U32(ctx, 31, 0x79999Cu);
    ctx->pc = 0x799998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799994u;
    // 0x799998: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x799994u, 0x79999Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79999Cu;
label_79999c:
    // 0x79999c: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79999cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x7999a0: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x7999a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x7999a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x7999a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7999a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7999a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7999acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999b0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x7999b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7999b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7999b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999b8: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x7999B8u;
    SET_GPR_U32(ctx, 31, 0x7999C0u);
    ctx->pc = 0x7999BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999B8u;
    // 0x7999bc: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x7999B8u, 0x7999C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999C0u;
label_7999c0:
    // 0x7999c0: 0x2e620006  sltiu       $v0, $s3, 0x6
    ctx->pc = 0x7999c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x7999c4: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x7999C4u;
    {
        const bool branch_taken_0x7999c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7999c4) {
            ctx->pc = 0x7999C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7999C4u;
            // 0x7999c8: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799968;
        }
    }
    ctx->pc = 0x7999CCu;
    // 0x7999cc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7999ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_7999d0:
    // 0x7999d0: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x7999D0u;
    SET_GPR_U32(ctx, 31, 0x7999D8u);
    ctx->pc = 0x7999D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999D0u;
    // 0x7999d4: 0x8c442f84  lw          $a0, 0x2F84($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x7999D0u, 0x7999D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999D8u;
label_7999d8:
    // 0x7999d8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x7999d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x7999dc: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x7999DCu;
    SET_GPR_U32(ctx, 31, 0x7999E4u);
    ctx->pc = 0x7999E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999DCu;
    // 0x7999e0: 0x8c642f84  lw          $a0, 0x2F84($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x7999DCu, 0x7999E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999E4u;
label_7999e4:
    // 0x7999e4: 0x8ea2b770  lw          $v0, -0x4890($s5)
    ctx->pc = 0x7999e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948720)));
    // 0x7999e8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x7999e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x7999ec: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x7999ECu;
    {
        const bool branch_taken_0x7999ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999ECu;
        // 0x7999f0: 0xa0400028  sb          $zero, 0x28($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999ec) {
            ctx->pc = 0x799AC4u;
            goto label_799ac4;
        }
    }
    ctx->pc = 0x7999F4u;
label_7999f4:
    // 0x7999f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x7999f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7999f8: 0x0  nop
    ctx->pc = 0x7999f8u;
    // NOP
    // 0x7999fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x7999fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799a00: 0x0  nop
    ctx->pc = 0x799a00u;
    // NOP
    // 0x799a04: 0x45000030  bc1f        . + 4 + (0x30 << 2)
    ctx->pc = 0x799A04u;
    {
        const bool branch_taken_0x799a04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A04u;
        // 0x799a08: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a04) {
            ctx->pc = 0x799AC8u;
            goto label_799ac8;
        }
    }
    ctx->pc = 0x799A0Cu;
    // 0x799a0c: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x799A0Cu;
    {
        const bool branch_taken_0x799a0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A0Cu;
        // 0x799a10: 0x3283001f  andi        $v1, $s4, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a0c) {
            ctx->pc = 0x799A44u;
            goto label_799a44;
        }
    }
    ctx->pc = 0x799A14u;
    // 0x799a14: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x799a14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x799a18: 0x8c828658  lw          $v0, -0x79A8($a0)
    ctx->pc = 0x799a18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799a1c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x799a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x799a20: 0x142142  srl         $a0, $s4, 5
    ctx->pc = 0x799a20u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 20), 5));
    // 0x799a24: 0x651806  srlv        $v1, $a1, $v1
    ctx->pc = 0x799a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x799a28: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x799a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x799a2c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x799a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x799a30: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x799a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x799a34: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x799a34u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x799a38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x799a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799a3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x799a40: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x799a40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_799a44:
    // 0x799a44: 0x8ea2b770  lw          $v0, -0x4890($s5)
    ctx->pc = 0x799a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948720)));
    // 0x799a48: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x799a48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x799a4c: 0x24c4ee00  addiu       $a0, $a2, -0x1200
    ctx->pc = 0x799a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962688));
    // 0x799a50: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x799a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x799a54: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x799a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799a58: 0xc0b2f08  jal         func_2CBC20
    ctx->pc = 0x799A58u;
    SET_GPR_U32(ctx, 31, 0x799A60u);
    ctx->pc = 0x799A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A58u;
    // 0x799a5c: 0x8c45002c  lw          $a1, 0x2C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBC20u, 0x799A58u, 0x799A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A60u;
label_799a60:
    // 0x799a60: 0x3b68021  addu        $s0, $sp, $s6
    ctx->pc = 0x799a60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 22)));
    // 0x799a64: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x799a64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x799a68: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x799a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799a6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799a6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a70: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799a70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799a74: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x799a74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x799a78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799a7c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x799A7Cu;
    SET_GPR_U32(ctx, 31, 0x799A84u);
    ctx->pc = 0x799A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A7Cu;
    // 0x799a80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x799A7Cu, 0x799A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A84u;
label_799a84:
    // 0x799a84: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x799a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799a88: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799a8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799a90: 0xc0c185a  jal         func_306168
    ctx->pc = 0x799A90u;
    SET_GPR_U32(ctx, 31, 0x799A98u);
    ctx->pc = 0x799A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A90u;
    // 0x799a94: 0x24a5fffd  addiu       $a1, $a1, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306168u, 0x799A90u, 0x799A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A98u;
label_799a98:
    // 0x799a98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x799a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a9c: 0xc1e6906  jal         func_79A418
    ctx->pc = 0x799A9Cu;
    SET_GPR_U32(ctx, 31, 0x799AA4u);
    ctx->pc = 0x799AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A9Cu;
    // 0x799aa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A418u, 0x799A9Cu, 0x799AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AA4u;
label_799aa4:
    // 0x799aa4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x799aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799aa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799aac: 0xc1e69fc  jal         func_79A7F0
    ctx->pc = 0x799AACu;
    SET_GPR_U32(ctx, 31, 0x799AB4u);
    ctx->pc = 0x799AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AACu;
    // 0x799ab0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A7F0u, 0x799AACu, 0x799AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AB4u;
label_799ab4:
    // 0x799ab4: 0x8ea3b770  lw          $v1, -0x4890($s5)
    ctx->pc = 0x799ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948720)));
    // 0x799ab8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x799ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x799abc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x799abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x799ac0: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x799ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_799ac4:
    // 0x799ac4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x799ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_799ac8:
    // 0x799ac8: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x799AC8u;
    SET_GPR_U32(ctx, 31, 0x799AD0u);
    ctx->pc = 0x799ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AC8u;
    // 0x799acc: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x799AC8u, 0x799AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AD0u;
label_799ad0:
    // 0x799ad0: 0x8ea2b770  lw          $v0, -0x4890($s5)
    ctx->pc = 0x799ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948720)));
    // 0x799ad4: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x799ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x799ad8: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x799ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x799adc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x799adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799ae0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x799ae0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x799ae4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x799ae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_799ae8:
    // 0x799ae8: 0x8fb40050  lw          $s4, 0x50($sp)
    ctx->pc = 0x799ae8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799aec: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x799aecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x799af0: 0x1440ff09  bnez        $v0, . + 4 + (-0xF7 << 2)
    ctx->pc = 0x799AF0u;
    {
        const bool branch_taken_0x799af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AF0u;
        // 0x799af4: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799af0) {
            ctx->pc = 0x799718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799718;
        }
    }
    ctx->pc = 0x799AF8u;
    // 0x799af8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x799afc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799b00: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x799b00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799b04: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799B04u;
    SET_GPR_U32(ctx, 31, 0x799B0Cu);
    ctx->pc = 0x799B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B04u;
    // 0x799b08: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799B04u, 0x799B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B0Cu;
label_799b0c:
    // 0x799b0c: 0x1000fef6  b           . + 4 + (-0x10A << 2)
    ctx->pc = 0x799B0Cu;
    {
        const bool branch_taken_0x799b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B0Cu;
        // 0x799b10: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b0c) {
            ctx->pc = 0x7996E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7996e8;
        }
    }
    ctx->pc = 0x799B14u;
label_799b14:
    // 0x799b14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799b18: 0x2490ea60  addiu       $s0, $a0, -0x15A0
    ctx->pc = 0x799b18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x799b1c: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799B1Cu;
    SET_GPR_U32(ctx, 31, 0x799B24u);
    ctx->pc = 0x799B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B1Cu;
    // 0x799b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799B1Cu, 0x799B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B24u;
label_799b24:
    // 0x799b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b28: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799B28u;
    SET_GPR_U32(ctx, 31, 0x799B30u);
    ctx->pc = 0x799B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B28u;
    // 0x799b2c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799B28u, 0x799B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B30u;
label_799b30:
    // 0x799b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b34: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799B34u;
    SET_GPR_U32(ctx, 31, 0x799B3Cu);
    ctx->pc = 0x799B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B34u;
    // 0x799b38: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799B34u, 0x799B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B3Cu;
label_799b3c:
    // 0x799b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b40: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799B40u;
    SET_GPR_U32(ctx, 31, 0x799B48u);
    ctx->pc = 0x799B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B40u;
    // 0x799b44: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799B40u, 0x799B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B48u;
label_799b48:
    // 0x799b48: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x799b48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x799b4c: 0x8ca32f84  lw          $v1, 0x2F84($a1)
    ctx->pc = 0x799b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799b50: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799B50u;
    SET_GPR_U32(ctx, 31, 0x799B58u);
    ctx->pc = 0x799B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B50u;
    // 0x799b54: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799B50u, 0x799B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B58u;
label_799b58:
    // 0x799b58: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x799b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x799b5c: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x799b5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x799b60: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x799b60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x799b64: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x799b64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x799b68: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x799b68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799b6c: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x799b6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799b70: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x799b70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799b74: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x799b74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799b78: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x799b78u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799b7c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x799b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799b80: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x799b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x799b84: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x799b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799b88: 0x3e00008  jr          $ra
    ctx->pc = 0x799B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B88u;
        // 0x799b8c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799B90u;
}
} // namespace gh_r607
