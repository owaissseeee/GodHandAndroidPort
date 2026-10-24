#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r005_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r005
{
// Function: func_00799310
// Address: 0x799310 - 0x799898
void func_00799310_0x799310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799310_0x799310");
#endif

    switch (ctx->pc) {
        case 0x799384u: goto label_799384;
        case 0x79940cu: goto label_79940c;
        case 0x799474u: goto label_799474;
        case 0x7994ccu: goto label_7994cc;
        case 0x799534u: goto label_799534;
        case 0x79958cu: goto label_79958c;
        case 0x79964cu: goto label_79964c;
        case 0x799670u: goto label_799670;
        case 0x7996a0u: goto label_7996a0;
        case 0x7996c8u: goto label_7996c8;
        case 0x7996f8u: goto label_7996f8;
        case 0x799720u: goto label_799720;
        case 0x799750u: goto label_799750;
        case 0x799778u: goto label_799778;
        case 0x7997a8u: goto label_7997a8;
        case 0x7997d8u: goto label_7997d8;
        default: break;
    }

    ctx->pc = 0x799310u;

    // 0x799310: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799314: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x799314u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x799318: 0x24639c20  addiu       $v1, $v1, -0x63E0
    ctx->pc = 0x799318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941728));
    // 0x79931c: 0x7fb001f0  sq          $s0, 0x1F0($sp)
    ctx->pc = 0x79931cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 16));
    // 0x799320: 0x7fb101e0  sq          $s1, 0x1E0($sp)
    ctx->pc = 0x799320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 17));
    // 0x799324: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x799324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799328: 0x7fb201d0  sq          $s2, 0x1D0($sp)
    ctx->pc = 0x799328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 18));
    // 0x79932c: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x79932cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x799330: 0x7fb301c0  sq          $s3, 0x1C0($sp)
    ctx->pc = 0x799330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 19));
    // 0x799334: 0x7fb401b0  sq          $s4, 0x1B0($sp)
    ctx->pc = 0x799334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 20));
    // 0x799338: 0x7fb501a0  sq          $s5, 0x1A0($sp)
    ctx->pc = 0x799338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 21));
    // 0x79933c: 0x7fb60190  sq          $s6, 0x190($sp)
    ctx->pc = 0x79933cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 22));
    // 0x799340: 0x7fb70180  sq          $s7, 0x180($sp)
    ctx->pc = 0x799340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 23));
    // 0x799344: 0x7fbe0170  sq          $fp, 0x170($sp)
    ctx->pc = 0x799344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 30));
    // 0x799348: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x799348u;
    {
        const bool branch_taken_0x799348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799348u;
        // 0x79934c: 0xffbf0160  sd          $ra, 0x160($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799348) {
            ctx->pc = 0x7993D8u;
            goto label_7993d8;
        }
    }
    ctx->pc = 0x799350u;
    // 0x799350: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x799350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x799354: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799358: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x799358u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x79935c: 0x3c08007a  lui         $t0, 0x7A
    ctx->pc = 0x79935cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)122 << 16));
    // 0x799360: 0x27b200d0  addiu       $s2, $sp, 0xD0
    ctx->pc = 0x799360u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x799364: 0x3c09007a  lui         $t1, 0x7A
    ctx->pc = 0x799364u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)122 << 16));
    // 0x799368: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x799368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x79936c: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79936cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799370: 0x3c160075  lui         $s6, 0x75
    ctx->pc = 0x799370u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)117 << 16));
    // 0x799374: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x799374u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x799378: 0x3c14007a  lui         $s4, 0x7A
    ctx->pc = 0x799378u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
    // 0x79937c: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x79937cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
    // 0x799380: 0x3c1e007a  lui         $fp, 0x7A
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
label_799384:
    // 0x799384: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x799384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x799388: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x799388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x79938c: 0x686a000f  ldl         $t2, 0xF($v1)
    ctx->pc = 0x79938cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x799390: 0x6c6a0008  ldr         $t2, 0x8($v1)
    ctx->pc = 0x799390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x799394: 0x686b0017  ldl         $t3, 0x17($v1)
    ctx->pc = 0x799394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x799398: 0x6c6b0010  ldr         $t3, 0x10($v1)
    ctx->pc = 0x799398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x79939c: 0x686c001f  ldl         $t4, 0x1F($v1)
    ctx->pc = 0x79939cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x7993a0: 0x6c6c0018  ldr         $t4, 0x18($v1)
    ctx->pc = 0x7993a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x7993a4: 0xb0c70007  sdl         $a3, 0x7($a2)
    ctx->pc = 0x7993a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7993a8: 0xb4c70000  sdr         $a3, 0x0($a2)
    ctx->pc = 0x7993a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7993ac: 0xb0ca000f  sdl         $t2, 0xF($a2)
    ctx->pc = 0x7993acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7993b0: 0xb4ca0008  sdr         $t2, 0x8($a2)
    ctx->pc = 0x7993b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7993b4: 0xb0cb0017  sdl         $t3, 0x17($a2)
    ctx->pc = 0x7993b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7993b8: 0xb4cb0010  sdr         $t3, 0x10($a2)
    ctx->pc = 0x7993b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7993bc: 0xb0cc001f  sdl         $t4, 0x1F($a2)
    ctx->pc = 0x7993bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7993c0: 0xb4cc0018  sdr         $t4, 0x18($a2)
    ctx->pc = 0x7993c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7993c4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x7993c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x7993c8: 0x1464ffee  bne         $v1, $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x7993C8u;
    {
        const bool branch_taken_0x7993c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x7993CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C8u;
        // 0x7993cc: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993c8) {
            ctx->pc = 0x799384u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799384;
        }
    }
    ctx->pc = 0x7993D0u;
    // 0x7993d0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x7993D0u;
    {
        const bool branch_taken_0x7993d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993D0u;
        // 0x7993d4: 0x24479c78  addiu       $a3, $v0, -0x6388 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993d0) {
            ctx->pc = 0x79943Cu;
            goto label_79943c;
        }
    }
    ctx->pc = 0x7993D8u;
label_7993d8:
    // 0x7993d8: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x7993d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x7993dc: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7993dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x7993e0: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x7993e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x7993e4: 0x3c08007a  lui         $t0, 0x7A
    ctx->pc = 0x7993e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)122 << 16));
    // 0x7993e8: 0x27b200d0  addiu       $s2, $sp, 0xD0
    ctx->pc = 0x7993e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x7993ec: 0x3c09007a  lui         $t1, 0x7A
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)122 << 16));
    // 0x7993f0: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x7993f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x7993f4: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x7993f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x7993f8: 0x3c160075  lui         $s6, 0x75
    ctx->pc = 0x7993f8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)117 << 16));
    // 0x7993fc: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x7993fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x799400: 0x3c14007a  lui         $s4, 0x7A
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
    // 0x799404: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x799404u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
    // 0x799408: 0x3c1e007a  lui         $fp, 0x7A
    ctx->pc = 0x799408u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
label_79940c:
    // 0x79940c: 0xdc6d0000  ld          $t5, 0x0($v1)
    ctx->pc = 0x79940cu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799410: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x799410u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x799414: 0xdc6a0010  ld          $t2, 0x10($v1)
    ctx->pc = 0x799414u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x799418: 0xdc6b0018  ld          $t3, 0x18($v1)
    ctx->pc = 0x799418u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x79941c: 0xfccd0000  sd          $t5, 0x0($a2)
    ctx->pc = 0x79941cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 13));
    // 0x799420: 0xfcc70008  sd          $a3, 0x8($a2)
    ctx->pc = 0x799420u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 7));
    // 0x799424: 0xfcca0010  sd          $t2, 0x10($a2)
    ctx->pc = 0x799424u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 10));
    // 0x799428: 0xfccb0018  sd          $t3, 0x18($a2)
    ctx->pc = 0x799428u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 11));
    // 0x79942c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x79942cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x799430: 0x1464fff6  bne         $v1, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x799430u;
    {
        const bool branch_taken_0x799430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x799434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799430u;
        // 0x799434: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799430) {
            ctx->pc = 0x79940Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79940c;
        }
    }
    ctx->pc = 0x799438u;
    // 0x799438: 0x24479c78  addiu       $a3, $v0, -0x6388
    ctx->pc = 0x799438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941816));
label_79943c:
    // 0x79943c: 0x686c0007  ldl         $t4, 0x7($v1)
    ctx->pc = 0x79943cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x799440: 0x6c6c0000  ldr         $t4, 0x0($v1)
    ctx->pc = 0x799440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x799444: 0x686d000f  ldl         $t5, 0xF($v1)
    ctx->pc = 0x799444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x799448: 0x6c6d0008  ldr         $t5, 0x8($v1)
    ctx->pc = 0x799448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x79944c: 0x8c6a0010  lw          $t2, 0x10($v1)
    ctx->pc = 0x79944cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x799450: 0xb0cc0007  sdl         $t4, 0x7($a2)
    ctx->pc = 0x799450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799454: 0xb4cc0000  sdr         $t4, 0x0($a2)
    ctx->pc = 0x799454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799458: 0xb0cd000f  sdl         $t5, 0xF($a2)
    ctx->pc = 0x799458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79945c: 0xb4cd0008  sdr         $t5, 0x8($a2)
    ctx->pc = 0x79945cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799460: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799464: 0x30e20007  andi        $v0, $a3, 0x7
    ctx->pc = 0x799464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x799468: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x799468u;
    {
        const bool branch_taken_0x799468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799468u;
        // 0x79946c: 0xacca0010  sw          $t2, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799468) {
            ctx->pc = 0x7994C8u;
            goto label_7994c8;
        }
    }
    ctx->pc = 0x799470u;
    // 0x799470: 0x24e20040  addiu       $v0, $a3, 0x40
    ctx->pc = 0x799470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
label_799474:
    // 0x799474: 0x68ec0007  ldl         $t4, 0x7($a3)
    ctx->pc = 0x799474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x799478: 0x6cec0000  ldr         $t4, 0x0($a3)
    ctx->pc = 0x799478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x79947c: 0x68ed000f  ldl         $t5, 0xF($a3)
    ctx->pc = 0x79947cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x799480: 0x6ced0008  ldr         $t5, 0x8($a3)
    ctx->pc = 0x799480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x799484: 0x68e30017  ldl         $v1, 0x17($a3)
    ctx->pc = 0x799484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x799488: 0x6ce30010  ldr         $v1, 0x10($a3)
    ctx->pc = 0x799488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x79948c: 0x68e6001f  ldl         $a2, 0x1F($a3)
    ctx->pc = 0x79948cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x799490: 0x6ce60018  ldr         $a2, 0x18($a3)
    ctx->pc = 0x799490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x799494: 0xb08c0007  sdl         $t4, 0x7($a0)
    ctx->pc = 0x799494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799498: 0xb48c0000  sdr         $t4, 0x0($a0)
    ctx->pc = 0x799498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79949c: 0xb08d000f  sdl         $t5, 0xF($a0)
    ctx->pc = 0x79949cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7994a0: 0xb48d0008  sdr         $t5, 0x8($a0)
    ctx->pc = 0x7994a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7994a4: 0xb0830017  sdl         $v1, 0x17($a0)
    ctx->pc = 0x7994a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7994a8: 0xb4830010  sdr         $v1, 0x10($a0)
    ctx->pc = 0x7994a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7994ac: 0xb086001f  sdl         $a2, 0x1F($a0)
    ctx->pc = 0x7994acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7994b0: 0xb4860018  sdr         $a2, 0x18($a0)
    ctx->pc = 0x7994b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7994b4: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x7994b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x7994b8: 0x14e2ffee  bne         $a3, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x7994B8u;
    {
        const bool branch_taken_0x7994b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x7994BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994B8u;
        // 0x7994bc: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994b8) {
            ctx->pc = 0x799474u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799474;
        }
    }
    ctx->pc = 0x7994C0u;
    // 0x7994c0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x7994C0u;
    {
        const bool branch_taken_0x7994c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994C0u;
        // 0x7994c4: 0x25069cd0  addiu       $a2, $t0, -0x6330 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994c0) {
            ctx->pc = 0x7994FCu;
            goto label_7994fc;
        }
    }
    ctx->pc = 0x7994C8u;
label_7994c8:
    // 0x7994c8: 0x24e20040  addiu       $v0, $a3, 0x40
    ctx->pc = 0x7994c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
label_7994cc:
    // 0x7994cc: 0xdcea0000  ld          $t2, 0x0($a3)
    ctx->pc = 0x7994ccu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x7994d0: 0xdceb0008  ld          $t3, 0x8($a3)
    ctx->pc = 0x7994d0u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x7994d4: 0xdcec0010  ld          $t4, 0x10($a3)
    ctx->pc = 0x7994d4u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x7994d8: 0xdced0018  ld          $t5, 0x18($a3)
    ctx->pc = 0x7994d8u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x7994dc: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x7994dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x7994e0: 0xfc8b0008  sd          $t3, 0x8($a0)
    ctx->pc = 0x7994e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 11));
    // 0x7994e4: 0xfc8c0010  sd          $t4, 0x10($a0)
    ctx->pc = 0x7994e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 12));
    // 0x7994e8: 0xfc8d0018  sd          $t5, 0x18($a0)
    ctx->pc = 0x7994e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 13));
    // 0x7994ec: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x7994ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x7994f0: 0x14e2fff6  bne         $a3, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x7994F0u;
    {
        const bool branch_taken_0x7994f0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x7994F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994F0u;
        // 0x7994f4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994f0) {
            ctx->pc = 0x7994CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994cc;
        }
    }
    ctx->pc = 0x7994F8u;
    // 0x7994f8: 0x25069cd0  addiu       $a2, $t0, -0x6330
    ctx->pc = 0x7994f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941904));
label_7994fc:
    // 0x7994fc: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x7994fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799500: 0x68e80007  ldl         $t0, 0x7($a3)
    ctx->pc = 0x799500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x799504: 0x6ce80000  ldr         $t0, 0x0($a3)
    ctx->pc = 0x799504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x799508: 0x68ea000f  ldl         $t2, 0xF($a3)
    ctx->pc = 0x799508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x79950c: 0x6cea0008  ldr         $t2, 0x8($a3)
    ctx->pc = 0x79950cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x799510: 0x8ceb0010  lw          $t3, 0x10($a3)
    ctx->pc = 0x799510u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x799514: 0xb0880007  sdl         $t0, 0x7($a0)
    ctx->pc = 0x799514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799518: 0xb4880000  sdr         $t0, 0x0($a0)
    ctx->pc = 0x799518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79951c: 0xb08a000f  sdl         $t2, 0xF($a0)
    ctx->pc = 0x79951cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799520: 0xb48a0008  sdr         $t2, 0x8($a0)
    ctx->pc = 0x799520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799524: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x799524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x799528: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x799528u;
    {
        const bool branch_taken_0x799528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799528u;
        // 0x79952c: 0xac8b0010  sw          $t3, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799528) {
            ctx->pc = 0x799588u;
            goto label_799588;
        }
    }
    ctx->pc = 0x799530u;
    // 0x799530: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x799530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_799534:
    // 0x799534: 0x68cd0007  ldl         $t5, 0x7($a2)
    ctx->pc = 0x799534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x799538: 0x6ccd0000  ldr         $t5, 0x0($a2)
    ctx->pc = 0x799538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x79953c: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x79953cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x799540: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x799540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x799544: 0x68c70017  ldl         $a3, 0x17($a2)
    ctx->pc = 0x799544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x799548: 0x6cc70010  ldr         $a3, 0x10($a2)
    ctx->pc = 0x799548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x79954c: 0x68c8001f  ldl         $t0, 0x1F($a2)
    ctx->pc = 0x79954cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x799550: 0x6cc80018  ldr         $t0, 0x18($a2)
    ctx->pc = 0x799550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x799554: 0xb06d0007  sdl         $t5, 0x7($v1)
    ctx->pc = 0x799554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799558: 0xb46d0000  sdr         $t5, 0x0($v1)
    ctx->pc = 0x799558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79955c: 0xb064000f  sdl         $a0, 0xF($v1)
    ctx->pc = 0x79955cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799560: 0xb4640008  sdr         $a0, 0x8($v1)
    ctx->pc = 0x799560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799564: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x799564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799568: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x799568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79956c: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x79956cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799570: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x799570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799574: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x799574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x799578: 0x14c2ffee  bne         $a2, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x799578u;
    {
        const bool branch_taken_0x799578 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x79957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799578u;
        // 0x79957c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799578) {
            ctx->pc = 0x799534u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799534;
        }
    }
    ctx->pc = 0x799580u;
    // 0x799580: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x799580u;
    {
        const bool branch_taken_0x799580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799580) {
            ctx->pc = 0x7995B8u;
            goto label_7995b8;
        }
    }
    ctx->pc = 0x799588u;
label_799588:
    // 0x799588: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x799588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_79958c:
    // 0x79958c: 0xdcca0000  ld          $t2, 0x0($a2)
    ctx->pc = 0x79958cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799590: 0xdccb0008  ld          $t3, 0x8($a2)
    ctx->pc = 0x799590u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x799594: 0xdccc0010  ld          $t4, 0x10($a2)
    ctx->pc = 0x799594u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x799598: 0xdccd0018  ld          $t5, 0x18($a2)
    ctx->pc = 0x799598u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x79959c: 0xfc6a0000  sd          $t2, 0x0($v1)
    ctx->pc = 0x79959cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 10));
    // 0x7995a0: 0xfc6b0008  sd          $t3, 0x8($v1)
    ctx->pc = 0x7995a0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 11));
    // 0x7995a4: 0xfc6c0010  sd          $t4, 0x10($v1)
    ctx->pc = 0x7995a4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 12));
    // 0x7995a8: 0xfc6d0018  sd          $t5, 0x18($v1)
    ctx->pc = 0x7995a8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 13));
    // 0x7995ac: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x7995acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x7995b0: 0x14c2fff6  bne         $a2, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x7995B0u;
    {
        const bool branch_taken_0x7995b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x7995B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995B0u;
        // 0x7995b4: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995b0) {
            ctx->pc = 0x79958Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79958c;
        }
    }
    ctx->pc = 0x7995B8u;
label_7995b8:
    // 0x7995b8: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x7995b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x7995bc: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x7995bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x7995c0: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x7995c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x7995c4: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x7995c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x7995c8: 0x8cc70010  lw          $a3, 0x10($a2)
    ctx->pc = 0x7995c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x7995cc: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x7995ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7995d0: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x7995d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7995d4: 0xb064000f  sdl         $a0, 0xF($v1)
    ctx->pc = 0x7995d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7995d8: 0xb4640008  sdr         $a0, 0x8($v1)
    ctx->pc = 0x7995d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7995dc: 0xac670010  sw          $a3, 0x10($v1)
    ctx->pc = 0x7995dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
    // 0x7995e0: 0x252d9d28  addiu       $t5, $t1, -0x62D8
    ctx->pc = 0x7995e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 4294941992));
    // 0x7995e4: 0x69aa0007  ldl         $t2, 0x7($t5)
    ctx->pc = 0x7995e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x7995e8: 0x6daa0000  ldr         $t2, 0x0($t5)
    ctx->pc = 0x7995e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x7995ec: 0x69ab000f  ldl         $t3, 0xF($t5)
    ctx->pc = 0x7995ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x7995f0: 0x6dab0008  ldr         $t3, 0x8($t5)
    ctx->pc = 0x7995f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x7995f4: 0x69ac0017  ldl         $t4, 0x17($t5)
    ctx->pc = 0x7995f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x7995f8: 0x6dac0010  ldr         $t4, 0x10($t5)
    ctx->pc = 0x7995f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x7995fc: 0xb3aa0137  sdl         $t2, 0x137($sp)
    ctx->pc = 0x7995fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799600: 0xb7aa0130  sdr         $t2, 0x130($sp)
    ctx->pc = 0x799600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799604: 0xb3ab013f  sdl         $t3, 0x13F($sp)
    ctx->pc = 0x799604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799608: 0xb7ab0138  sdr         $t3, 0x138($sp)
    ctx->pc = 0x799608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79960c: 0xb3ac0147  sdl         $t4, 0x147($sp)
    ctx->pc = 0x79960cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799610: 0xb7ac0140  sdr         $t4, 0x140($sp)
    ctx->pc = 0x799610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799614: 0x69aa001f  ldl         $t2, 0x1F($t5)
    ctx->pc = 0x799614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x799618: 0x6daa0018  ldr         $t2, 0x18($t5)
    ctx->pc = 0x799618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x79961c: 0x69ab0027  ldl         $t3, 0x27($t5)
    ctx->pc = 0x79961cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x799620: 0x6dab0020  ldr         $t3, 0x20($t5)
    ctx->pc = 0x799620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x799624: 0x69ac002f  ldl         $t4, 0x2F($t5)
    ctx->pc = 0x799624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x799628: 0x6dac0028  ldr         $t4, 0x28($t5)
    ctx->pc = 0x799628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x79962c: 0xb3aa014f  sdl         $t2, 0x14F($sp)
    ctx->pc = 0x79962cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799630: 0xb7aa0148  sdr         $t2, 0x148($sp)
    ctx->pc = 0x799630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799634: 0xb3ab0157  sdl         $t3, 0x157($sp)
    ctx->pc = 0x799634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799638: 0xb7ab0150  sdr         $t3, 0x150($sp)
    ctx->pc = 0x799638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79963c: 0xb3ac015f  sdl         $t4, 0x15F($sp)
    ctx->pc = 0x79963cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 351); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799640: 0xb7ac0158  sdr         $t4, 0x158($sp)
    ctx->pc = 0x799640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 344); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799644: 0xc0799e0  jal         func_1E6780
    ctx->pc = 0x799644u;
    SET_GPR_U32(ctx, 31, 0x79964Cu);
    ctx->pc = 0x799648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799644u;
    // 0x799648: 0x8e049e80  lw          $a0, -0x6180($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6780u, 0x799644u, 0x79964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79964Cu;
label_79964c:
    // 0x79964c: 0x82229d58  lb          $v0, -0x62A8($s1)
    ctx->pc = 0x79964cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294942040)));
    // 0x799650: 0x26c84c38  addiu       $t0, $s6, 0x4C38
    ctx->pc = 0x799650u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 19512));
    // 0x799654: 0x26239d58  addiu       $v1, $s1, -0x62A8
    ctx->pc = 0x799654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942040));
    // 0x799658: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79965c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79965Cu;
    {
        const bool branch_taken_0x79965c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79965Cu;
        // 0x799660: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79965c) {
            ctx->pc = 0x799698u;
            goto label_799698;
        }
    }
    ctx->pc = 0x799664u;
    // 0x799664: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799668: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799668u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79966c: 0x0  nop
    ctx->pc = 0x79966cu;
    // NOP
label_799670:
    // 0x799670: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799670u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799674: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799678: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79967c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79967cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799680: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799680u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799684: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799684u;
    {
        const bool branch_taken_0x799684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799684u;
        // 0x799688: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799684) {
            ctx->pc = 0x799698u;
            goto label_799698;
        }
    }
    ctx->pc = 0x79968Cu;
    // 0x79968c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79968cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799690: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799690u;
    {
        const bool branch_taken_0x799690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799690) {
            ctx->pc = 0x799694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799690u;
            // 0x799694: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799670;
        }
    }
    ctx->pc = 0x799698u;
label_799698:
    // 0x799698: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x799698u;
    SET_GPR_U32(ctx, 31, 0x7996A0u);
    ctx->pc = 0x79969Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799698u;
    // 0x79969c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799698u, 0x7996A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996A0u;
label_7996a0:
    // 0x7996a0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x7996a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996a4: 0x26c84c38  addiu       $t0, $s6, 0x4C38
    ctx->pc = 0x7996a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 19512));
    // 0x7996a8: 0x82829d60  lb          $v0, -0x62A0($s4)
    ctx->pc = 0x7996a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294942048)));
    // 0x7996ac: 0x26839d60  addiu       $v1, $s4, -0x62A0
    ctx->pc = 0x7996acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294942048));
    // 0x7996b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7996b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7996B4u;
    {
        const bool branch_taken_0x7996b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996B4u;
        // 0x7996b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996b4) {
            ctx->pc = 0x7996F0u;
            goto label_7996f0;
        }
    }
    ctx->pc = 0x7996BCu;
    // 0x7996bc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7996bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996c0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7996c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7996c4: 0x0  nop
    ctx->pc = 0x7996c4u;
    // NOP
label_7996c8:
    // 0x7996c8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7996c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7996cc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7996ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7996d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7996d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7996d4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7996d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x7996d8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7996d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7996dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7996DCu;
    {
        const bool branch_taken_0x7996dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996DCu;
        // 0x7996e0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996dc) {
            ctx->pc = 0x7996F0u;
            goto label_7996f0;
        }
    }
    ctx->pc = 0x7996E4u;
    // 0x7996e4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7996e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7996e8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7996E8u;
    {
        const bool branch_taken_0x7996e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7996e8) {
            ctx->pc = 0x7996ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7996E8u;
            // 0x7996ec: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7996C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7996c8;
        }
    }
    ctx->pc = 0x7996F0u;
label_7996f0:
    // 0x7996f0: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x7996F0u;
    SET_GPR_U32(ctx, 31, 0x7996F8u);
    ctx->pc = 0x7996F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996F0u;
    // 0x7996f4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x7996F0u, 0x7996F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996F8u;
label_7996f8:
    // 0x7996f8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x7996f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996fc: 0x26c84c38  addiu       $t0, $s6, 0x4C38
    ctx->pc = 0x7996fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 19512));
    // 0x799700: 0x82e29d68  lb          $v0, -0x6298($s7)
    ctx->pc = 0x799700u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 4294942056)));
    // 0x799704: 0x26e39d68  addiu       $v1, $s7, -0x6298
    ctx->pc = 0x799704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294942056));
    // 0x799708: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79970c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79970Cu;
    {
        const bool branch_taken_0x79970c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79970Cu;
        // 0x799710: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79970c) {
            ctx->pc = 0x799748u;
            goto label_799748;
        }
    }
    ctx->pc = 0x799714u;
    // 0x799714: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799718: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799718u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79971c: 0x0  nop
    ctx->pc = 0x79971cu;
    // NOP
label_799720:
    // 0x799720: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799720u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799724: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799728: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79972c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79972cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799730: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799730u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799734: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799734u;
    {
        const bool branch_taken_0x799734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799734u;
        // 0x799738: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799734) {
            ctx->pc = 0x799748u;
            goto label_799748;
        }
    }
    ctx->pc = 0x79973Cu;
    // 0x79973c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79973cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799740: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799740u;
    {
        const bool branch_taken_0x799740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799740) {
            ctx->pc = 0x799744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799740u;
            // 0x799744: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799720;
        }
    }
    ctx->pc = 0x799748u;
label_799748:
    // 0x799748: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x799748u;
    SET_GPR_U32(ctx, 31, 0x799750u);
    ctx->pc = 0x79974Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799748u;
    // 0x79974c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799748u, 0x799750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799750u;
label_799750:
    // 0x799750: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x799750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799754: 0x26c84c38  addiu       $t0, $s6, 0x4C38
    ctx->pc = 0x799754u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 19512));
    // 0x799758: 0x83c29d70  lb          $v0, -0x6290($fp)
    ctx->pc = 0x799758u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294942064)));
    // 0x79975c: 0x27c39d70  addiu       $v1, $fp, -0x6290
    ctx->pc = 0x79975cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294942064));
    // 0x799760: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799764: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799764u;
    {
        const bool branch_taken_0x799764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799764u;
        // 0x799768: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799764) {
            ctx->pc = 0x7997A0u;
            goto label_7997a0;
        }
    }
    ctx->pc = 0x79976Cu;
    // 0x79976c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79976cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799770: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799770u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799774: 0x0  nop
    ctx->pc = 0x799774u;
    // NOP
label_799778:
    // 0x799778: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799778u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79977c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79977cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799780: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799784: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799788: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799788u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79978c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79978Cu;
    {
        const bool branch_taken_0x79978c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79978Cu;
        // 0x799790: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79978c) {
            ctx->pc = 0x7997A0u;
            goto label_7997a0;
        }
    }
    ctx->pc = 0x799794u;
    // 0x799794: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799794u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799798: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799798u;
    {
        const bool branch_taken_0x799798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799798) {
            ctx->pc = 0x79979Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799798u;
            // 0x79979c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799778;
        }
    }
    ctx->pc = 0x7997A0u;
label_7997a0:
    // 0x7997a0: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x7997A0u;
    SET_GPR_U32(ctx, 31, 0x7997A8u);
    ctx->pc = 0x7997A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997A0u;
    // 0x7997a4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x7997A0u, 0x7997A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997A8u;
label_7997a8:
    // 0x7997a8: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x7997a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x7997ac: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x7997acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x7997b0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x7997b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x7997b4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x7997b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997b8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x7997b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997bc: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x7997bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997c0: 0x8e049e80  lw          $a0, -0x6180($s0)
    ctx->pc = 0x7997c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942336)));
    // 0x7997c4: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x7997c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997c8: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x7997c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997cc: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x7997ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7997d0: 0xc0791f0  jal         func_1E47C0
    ctx->pc = 0x7997D0u;
    SET_GPR_U32(ctx, 31, 0x7997D8u);
    ctx->pc = 0x7997D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997D0u;
    // 0x7997d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E47C0u, 0x7997D0u, 0x7997D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997D8u;
label_7997d8:
    // 0x7997d8: 0x8e039e80  lw          $v1, -0x6180($s0)
    ctx->pc = 0x7997d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942336)));
    // 0x7997dc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x7997dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x7997e0: 0x24062710  addiu       $a2, $zero, 0x2710
    ctx->pc = 0x7997e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x7997e4: 0x24071388  addiu       $a3, $zero, 0x1388
    ctx->pc = 0x7997e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    // 0x7997e8: 0xac620368  sw          $v0, 0x368($v1)
    ctx->pc = 0x7997e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 872), GPR_U32(ctx, 2));
    // 0x7997ec: 0x240402bc  addiu       $a0, $zero, 0x2BC
    ctx->pc = 0x7997ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
    // 0x7997f0: 0x2409003c  addiu       $t1, $zero, 0x3C
    ctx->pc = 0x7997f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x7997f4: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x7997f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x7997f8: 0x8e039e80  lw          $v1, -0x6180($s0)
    ctx->pc = 0x7997f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942336)));
    // 0x7997fc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x7997fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799800: 0x7bb101e0  lq          $s1, 0x1E0($sp)
    ctx->pc = 0x799800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x799804: 0xac66036c  sw          $a2, 0x36C($v1)
    ctx->pc = 0x799804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 876), GPR_U32(ctx, 6));
    // 0x799808: 0x7bb201d0  lq          $s2, 0x1D0($sp)
    ctx->pc = 0x799808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x79980c: 0x8e029e80  lw          $v0, -0x6180($s0)
    ctx->pc = 0x79980cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942336)));
    // 0x799810: 0x7bb301c0  lq          $s3, 0x1C0($sp)
    ctx->pc = 0x799810u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x799814: 0xac470370  sw          $a3, 0x370($v0)
    ctx->pc = 0x799814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 7));
    // 0x799818: 0x7bb401b0  lq          $s4, 0x1B0($sp)
    ctx->pc = 0x799818u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x79981c: 0x8e039e80  lw          $v1, -0x6180($s0)
    ctx->pc = 0x79981cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942336)));
    // 0x799820: 0x7bb501a0  lq          $s5, 0x1A0($sp)
    ctx->pc = 0x799820u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x799824: 0xac640374  sw          $a0, 0x374($v1)
    ctx->pc = 0x799824u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 884), GPR_U32(ctx, 4));
    // 0x799828: 0x7bb60190  lq          $s6, 0x190($sp)
    ctx->pc = 0x799828u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x79982c: 0x8e029e80  lw          $v0, -0x6180($s0)
    ctx->pc = 0x79982cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942336)));
    // 0x799830: 0x7bb70180  lq          $s7, 0x180($sp)
    ctx->pc = 0x799830u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x799834: 0xac440378  sw          $a0, 0x378($v0)
    ctx->pc = 0x799834u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 888), GPR_U32(ctx, 4));
    // 0x799838: 0x7bbe0170  lq          $fp, 0x170($sp)
    ctx->pc = 0x799838u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x79983c: 0x8e039e80  lw          $v1, -0x6180($s0)
    ctx->pc = 0x79983cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942336)));
    // 0x799840: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x799840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x799844: 0xac64037c  sw          $a0, 0x37C($v1)
    ctx->pc = 0x799844u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 892), GPR_U32(ctx, 4));
    // 0x799848: 0x8e029e80  lw          $v0, -0x6180($s0)
    ctx->pc = 0x799848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942336)));
    // 0x79984c: 0xac440380  sw          $a0, 0x380($v0)
    ctx->pc = 0x79984cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 4));
    // 0x799850: 0x8e039e80  lw          $v1, -0x6180($s0)
    ctx->pc = 0x799850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942336)));
    // 0x799854: 0xac690384  sw          $t1, 0x384($v1)
    ctx->pc = 0x799854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 900), GPR_U32(ctx, 9));
    // 0x799858: 0x8e029e80  lw          $v0, -0x6180($s0)
    ctx->pc = 0x799858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942336)));
    // 0x79985c: 0xac480388  sw          $t0, 0x388($v0)
    ctx->pc = 0x79985cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 904), GPR_U32(ctx, 8));
    // 0x799860: 0x8e039e80  lw          $v1, -0x6180($s0)
    ctx->pc = 0x799860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942336)));
    // 0x799864: 0xac68038c  sw          $t0, 0x38C($v1)
    ctx->pc = 0x799864u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 908), GPR_U32(ctx, 8));
    // 0x799868: 0x8e029e80  lw          $v0, -0x6180($s0)
    ctx->pc = 0x799868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942336)));
    // 0x79986c: 0xac450390  sw          $a1, 0x390($v0)
    ctx->pc = 0x79986cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 912), GPR_U32(ctx, 5));
    // 0x799870: 0x8e039e80  lw          $v1, -0x6180($s0)
    ctx->pc = 0x799870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942336)));
    // 0x799874: 0xac650394  sw          $a1, 0x394($v1)
    ctx->pc = 0x799874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 916), GPR_U32(ctx, 5));
    // 0x799878: 0x8e029e80  lw          $v0, -0x6180($s0)
    ctx->pc = 0x799878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942336)));
    // 0x79987c: 0xac450398  sw          $a1, 0x398($v0)
    ctx->pc = 0x79987cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 920), GPR_U32(ctx, 5));
    // 0x799880: 0x8e039e80  lw          $v1, -0x6180($s0)
    ctx->pc = 0x799880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942336)));
    // 0x799884: 0x7bb001f0  lq          $s0, 0x1F0($sp)
    ctx->pc = 0x799884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x799888: 0xac65039c  sw          $a1, 0x39C($v1)
    ctx->pc = 0x799888u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 924), GPR_U32(ctx, 5));
    // 0x79988c: 0x3e00008  jr          $ra
    ctx->pc = 0x79988Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79988Cu;
        // 0x799890: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79988Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799894u;
    // 0x799894: 0x0  nop
    ctx->pc = 0x799894u;
    // NOP
    ctx->pc = 0x799898u;
}
} // namespace gh_r005
