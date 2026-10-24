#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r702_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r702
{
// Function: func_00799860
// Address: 0x799860 - 0x799c00
void func_00799860_0x799860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799860_0x799860");
#endif

    switch (ctx->pc) {
        case 0x799890u: goto label_799890;
        case 0x7999c0u: goto label_7999c0;
        case 0x7999f8u: goto label_7999f8;
        case 0x799a08u: goto label_799a08;
        case 0x799a14u: goto label_799a14;
        case 0x799a20u: goto label_799a20;
        case 0x799a30u: goto label_799a30;
        case 0x799a70u: goto label_799a70;
        case 0x799aa0u: goto label_799aa0;
        case 0x799ab0u: goto label_799ab0;
        case 0x799abcu: goto label_799abc;
        case 0x799ac8u: goto label_799ac8;
        case 0x799ad8u: goto label_799ad8;
        case 0x799b18u: goto label_799b18;
        case 0x799b50u: goto label_799b50;
        case 0x799b60u: goto label_799b60;
        case 0x799b6cu: goto label_799b6c;
        case 0x799b78u: goto label_799b78;
        case 0x799b88u: goto label_799b88;
        case 0x799bc8u: goto label_799bc8;
        default: break;
    }

    ctx->pc = 0x799860u;

    // 0x799860: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x799860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x799864: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x799864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x799868: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x799868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x79986c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79986cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799870: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x799870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x799874: 0x24848658  addiu       $a0, $a0, -0x79A8
    ctx->pc = 0x799874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    // 0x799878: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x799878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x79987c: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x79987cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x799880: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x799880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x799884: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x799884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x799888: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799888u;
    SET_GPR_U32(ctx, 31, 0x799890u);
    ctx->pc = 0x79988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799888u;
    // 0x79988c: 0xe7b40180  swc1        $f20, 0x180($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799888u, 0x799890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799890u;
label_799890:
    // 0x799890: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x799890u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799894: 0x2e620003  sltiu       $v0, $s3, 0x3
    ctx->pc = 0x799894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x799898: 0x104000cf  beqz        $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x799898u;
    {
        const bool branch_taken_0x799898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799898u;
        // 0x79989c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799898) {
            ctx->pc = 0x799BD8u;
            goto label_799bd8;
        }
    }
    ctx->pc = 0x7998A0u;
    // 0x7998a0: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x7998a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x7998a4: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x7998a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x7998a8: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x7998a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7998ac: 0x27aa0010  addiu       $t2, $sp, 0x10
    ctx->pc = 0x7998acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7998b0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x7998b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x7998b4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x7998b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7998b8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x7998b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7998bc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x7998bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7998c0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x7998c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x7998c4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x7998c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x7998c8: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x7998c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7998cc: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x7998ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7998d0: 0xa3a30040  sb          $v1, 0x40($sp)
    ctx->pc = 0x7998d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x7998d4: 0xa3a40050  sb          $a0, 0x50($sp)
    ctx->pc = 0x7998d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 4));
    // 0x7998d8: 0x27ad0050  addiu       $t5, $sp, 0x50
    ctx->pc = 0x7998d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x7998dc: 0xa3a50060  sb          $a1, 0x60($sp)
    ctx->pc = 0x7998dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 5));
    // 0x7998e0: 0x27af0030  addiu       $t7, $sp, 0x30
    ctx->pc = 0x7998e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x7998e4: 0xa3a60070  sb          $a2, 0x70($sp)
    ctx->pc = 0x7998e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 6));
    // 0x7998e8: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x7998e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x7998ec: 0xa3a70080  sb          $a3, 0x80($sp)
    ctx->pc = 0x7998ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 7));
    // 0x7998f0: 0x27ac0080  addiu       $t4, $sp, 0x80
    ctx->pc = 0x7998f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x7998f4: 0xa3a80090  sb          $t0, 0x90($sp)
    ctx->pc = 0x7998f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 8));
    // 0x7998f8: 0x27ab0090  addiu       $t3, $sp, 0x90
    ctx->pc = 0x7998f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x7998fc: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x7998fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x799900: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x799900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x799904: 0xafaa00c4  sw          $t2, 0xC4($sp)
    ctx->pc = 0x799904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 10));
    // 0x799908: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x799908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x79990c: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x79990cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x799910: 0x27ae0070  addiu       $t6, $sp, 0x70
    ctx->pc = 0x799910u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x799914: 0xa3b20010  sb          $s2, 0x10($sp)
    ctx->pc = 0x799914u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 18));
    // 0x799918: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79991c: 0xa3b40020  sb          $s4, 0x20($sp)
    ctx->pc = 0x79991cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 20));
    // 0x799920: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799924: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x799924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x799928: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79992c: 0xafbd00c0  sw          $sp, 0xC0($sp)
    ctx->pc = 0x79992cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 29));
    // 0x799930: 0x24060104  addiu       $a2, $zero, 0x104
    ctx->pc = 0x799930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x799934: 0x6ba200c7  ldl         $v0, 0xC7($sp)
    ctx->pc = 0x799934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x799938: 0x6fa200c0  ldr         $v0, 0xC0($sp)
    ctx->pc = 0x799938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x79993c: 0x8fa800c8  lw          $t0, 0xC8($sp)
    ctx->pc = 0x79993cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x799940: 0xb3a200b7  sdl         $v0, 0xB7($sp)
    ctx->pc = 0x799940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799944: 0xb7a200b0  sdr         $v0, 0xB0($sp)
    ctx->pc = 0x799944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799948: 0xafa800b8  sw          $t0, 0xB8($sp)
    ctx->pc = 0x799948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 8));
    // 0x79994c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79994cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799950: 0xafaf00d0  sw          $t7, 0xD0($sp)
    ctx->pc = 0x799950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 15));
    // 0x799954: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799954u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799958: 0xafb000d4  sw          $s0, 0xD4($sp)
    ctx->pc = 0x799958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 16));
    // 0x79995c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79995cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799960: 0xafad00d8  sw          $t5, 0xD8($sp)
    ctx->pc = 0x799960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 13));
    // 0x799964: 0x6bad00d7  ldl         $t5, 0xD7($sp)
    ctx->pc = 0x799964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x799968: 0x6fad00d0  ldr         $t5, 0xD0($sp)
    ctx->pc = 0x799968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x79996c: 0x8faf00d8  lw          $t7, 0xD8($sp)
    ctx->pc = 0x79996cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x799970: 0xb3ad00c7  sdl         $t5, 0xC7($sp)
    ctx->pc = 0x799970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799974: 0xb7ad00c0  sdr         $t5, 0xC0($sp)
    ctx->pc = 0x799974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799978: 0xafaf00c8  sw          $t7, 0xC8($sp)
    ctx->pc = 0x799978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 15));
    // 0x79997c: 0xafb10100  sw          $s1, 0x100($sp)
    ctx->pc = 0x79997cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 17));
    // 0x799980: 0xafae0104  sw          $t6, 0x104($sp)
    ctx->pc = 0x799980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 14));
    // 0x799984: 0xafac0108  sw          $t4, 0x108($sp)
    ctx->pc = 0x799984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 12));
    // 0x799988: 0xafab010c  sw          $t3, 0x10C($sp)
    ctx->pc = 0x799988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 11));
    // 0x79998c: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x79998cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
    // 0x799990: 0x6ba30107  ldl         $v1, 0x107($sp)
    ctx->pc = 0x799990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x799994: 0x6fa30100  ldr         $v1, 0x100($sp)
    ctx->pc = 0x799994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x799998: 0x6bab010f  ldl         $t3, 0x10F($sp)
    ctx->pc = 0x799998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x79999c: 0x6fab0108  ldr         $t3, 0x108($sp)
    ctx->pc = 0x79999cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x7999a0: 0x8fac0110  lw          $t4, 0x110($sp)
    ctx->pc = 0x7999a0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x7999a4: 0xb3a300e7  sdl         $v1, 0xE7($sp)
    ctx->pc = 0x7999a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7999a8: 0xb7a300e0  sdr         $v1, 0xE0($sp)
    ctx->pc = 0x7999a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7999ac: 0xb3ab00ef  sdl         $t3, 0xEF($sp)
    ctx->pc = 0x7999acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 239); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7999b0: 0xb7ab00e8  sdr         $t3, 0xE8($sp)
    ctx->pc = 0x7999b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 232); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7999b4: 0xafac00f0  sw          $t4, 0xF0($sp)
    ctx->pc = 0x7999b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 12));
    // 0x7999b8: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7999B8u;
    SET_GPR_U32(ctx, 31, 0x7999C0u);
    ctx->pc = 0x7999BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999B8u;
    // 0x7999bc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7999B8u, 0x7999C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999C0u;
label_7999c0:
    // 0x7999c0: 0x12720031  beq         $s3, $s2, . + 4 + (0x31 << 2)
    ctx->pc = 0x7999C0u;
    {
        const bool branch_taken_0x7999c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 18));
        ctx->pc = 0x7999C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999C0u;
        // 0x7999c4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999c0) {
            ctx->pc = 0x799A88u;
            goto label_799a88;
        }
    }
    ctx->pc = 0x7999C8u;
    // 0x7999c8: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7999C8u;
    {
        const bool branch_taken_0x7999c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x7999c8) {
            ctx->pc = 0x7999CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7999C8u;
            // 0x7999cc: 0x3c140058  lui         $s4, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7999E0u;
            goto label_7999e0;
        }
    }
    ctx->pc = 0x7999D0u;
    // 0x7999d0: 0x12740057  beq         $s3, $s4, . + 4 + (0x57 << 2)
    ctx->pc = 0x7999D0u;
    {
        const bool branch_taken_0x7999d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        ctx->pc = 0x7999D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999D0u;
        // 0x7999d4: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999d0) {
            ctx->pc = 0x799B30u;
            goto label_799b30;
        }
    }
    ctx->pc = 0x7999D8u;
    // 0x7999d8: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x7999D8u;
    {
        const bool branch_taken_0x7999d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999D8u;
        // 0x7999dc: 0x7bb10160  lq          $s1, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999d8) {
            ctx->pc = 0x799BE0u;
            goto label_799be0;
        }
    }
    ctx->pc = 0x7999E0u;
label_7999e0:
    // 0x7999e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7999e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7999e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x7999e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x7999e8: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x7999e8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
    // 0x7999ec: 0x27b20100  addiu       $s2, $sp, 0x100
    ctx->pc = 0x7999ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x7999f0: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x7999f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x7999f4: 0x0  nop
    ctx->pc = 0x7999f4u;
    // NOP
label_7999f8:
    // 0x7999f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x7999f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7999fc: 0x26846ab0  addiu       $a0, $s4, 0x6AB0
    ctx->pc = 0x7999fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 27312));
    // 0x799a00: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799A00u;
    SET_GPR_U32(ctx, 31, 0x799A08u);
    ctx->pc = 0x799A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A00u;
    // 0x799a04: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799A00u, 0x799A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A08u;
label_799a08:
    // 0x799a08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x799a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799a0c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799A0Cu;
    SET_GPR_U32(ctx, 31, 0x799A14u);
    ctx->pc = 0x799A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A0Cu;
    // 0x799a10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799A0Cu, 0x799A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A14u;
label_799a14:
    // 0x799a14: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x799a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799a18: 0xc0a588c  jal         func_296230
    ctx->pc = 0x799A18u;
    SET_GPR_U32(ctx, 31, 0x799A20u);
    ctx->pc = 0x799A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A18u;
    // 0x799a1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296230u, 0x799A18u, 0x799A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A20u;
label_799a20:
    // 0x799a20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799a24: 0x266464f0  addiu       $a0, $s3, 0x64F0
    ctx->pc = 0x799a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25840));
    // 0x799a28: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799A28u;
    SET_GPR_U32(ctx, 31, 0x799A30u);
    ctx->pc = 0x799A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A28u;
    // 0x799a2c: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799A28u, 0x799A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A30u;
label_799a30:
    // 0x799a30: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x799A30u;
    {
        const bool branch_taken_0x799a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A30u;
        // 0x799a34: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a30) {
            ctx->pc = 0x799A70u;
            goto label_799a70;
        }
    }
    ctx->pc = 0x799A38u;
    // 0x799a38: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x799a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799a3c: 0xc44100b4  lwc1        $f1, 0xB4($v0)
    ctx->pc = 0x799a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799a40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x799a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a44: 0xc44200b8  lwc1        $f2, 0xB8($v0)
    ctx->pc = 0x799a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x799a48: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x799a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x799a4c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x799a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x799a50: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x799a50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a54: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x799a54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x799a58: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799a58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799a5c: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x799a5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x799a60: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x799a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x799a64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799a68: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x799A68u;
    SET_GPR_U32(ctx, 31, 0x799A70u);
    ctx->pc = 0x799A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A68u;
    // 0x799a6c: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x799A68u, 0x799A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A70u;
label_799a70:
    // 0x799a70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x799a70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799a74: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x799a74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x799a78: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x799A78u;
    {
        const bool branch_taken_0x799a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A78u;
        // 0x799a7c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a78) {
            ctx->pc = 0x7999F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7999f8;
        }
    }
    ctx->pc = 0x799A80u;
    // 0x799a80: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x799A80u;
    {
        const bool branch_taken_0x799a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A80u;
        // 0x799a84: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a80) {
            ctx->pc = 0x799BDCu;
            goto label_799bdc;
        }
    }
    ctx->pc = 0x799A88u;
label_799a88:
    // 0x799a88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799a8c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799a90: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x799a90u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
    // 0x799a94: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x799a94u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
    // 0x799a98: 0x27b20100  addiu       $s2, $sp, 0x100
    ctx->pc = 0x799a98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x799a9c: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x799a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_799aa0:
    // 0x799aa0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799aa4: 0x26846ab0  addiu       $a0, $s4, 0x6AB0
    ctx->pc = 0x799aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 27312));
    // 0x799aa8: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799AA8u;
    SET_GPR_U32(ctx, 31, 0x799AB0u);
    ctx->pc = 0x799AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AA8u;
    // 0x799aac: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799AA8u, 0x799AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AB0u;
label_799ab0:
    // 0x799ab0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x799ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799ab4: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799AB4u;
    SET_GPR_U32(ctx, 31, 0x799ABCu);
    ctx->pc = 0x799AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AB4u;
    // 0x799ab8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799AB4u, 0x799ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ABCu;
label_799abc:
    // 0x799abc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x799abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799ac0: 0xc0a588c  jal         func_296230
    ctx->pc = 0x799AC0u;
    SET_GPR_U32(ctx, 31, 0x799AC8u);
    ctx->pc = 0x799AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AC0u;
    // 0x799ac4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296230u, 0x799AC0u, 0x799AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AC8u;
label_799ac8:
    // 0x799ac8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799acc: 0x266464f0  addiu       $a0, $s3, 0x64F0
    ctx->pc = 0x799accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25840));
    // 0x799ad0: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799AD0u;
    SET_GPR_U32(ctx, 31, 0x799AD8u);
    ctx->pc = 0x799AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AD0u;
    // 0x799ad4: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799AD0u, 0x799AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AD8u;
label_799ad8:
    // 0x799ad8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x799AD8u;
    {
        const bool branch_taken_0x799ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AD8u;
        // 0x799adc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ad8) {
            ctx->pc = 0x799B18u;
            goto label_799b18;
        }
    }
    ctx->pc = 0x799AE0u;
    // 0x799ae0: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x799ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799ae4: 0xc44100b4  lwc1        $f1, 0xB4($v0)
    ctx->pc = 0x799ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799ae8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x799ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799aec: 0xc44200b8  lwc1        $f2, 0xB8($v0)
    ctx->pc = 0x799aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x799af0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x799af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x799af4: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x799af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x799af8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x799af8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799afc: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x799afcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x799b00: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799b00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799b04: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x799b04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x799b08: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x799b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x799b0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799b10: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x799B10u;
    SET_GPR_U32(ctx, 31, 0x799B18u);
    ctx->pc = 0x799B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B10u;
    // 0x799b14: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x799B10u, 0x799B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B18u;
label_799b18:
    // 0x799b18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x799b18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799b1c: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x799b1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x799b20: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x799B20u;
    {
        const bool branch_taken_0x799b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B20u;
        // 0x799b24: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b20) {
            ctx->pc = 0x799AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799aa0;
        }
    }
    ctx->pc = 0x799B28u;
    // 0x799b28: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x799B28u;
    {
        const bool branch_taken_0x799b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B28u;
        // 0x799b2c: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b28) {
            ctx->pc = 0x799BDCu;
            goto label_799bdc;
        }
    }
    ctx->pc = 0x799B30u;
label_799b30:
    // 0x799b30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799b34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799b38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799b38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b3c: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x799b3cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
    // 0x799b40: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x799b40u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
    // 0x799b44: 0x27b20100  addiu       $s2, $sp, 0x100
    ctx->pc = 0x799b44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x799b48: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x799b48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x799b4c: 0x0  nop
    ctx->pc = 0x799b4cu;
    // NOP
label_799b50:
    // 0x799b50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799b54: 0x26846ab0  addiu       $a0, $s4, 0x6AB0
    ctx->pc = 0x799b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 27312));
    // 0x799b58: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799B58u;
    SET_GPR_U32(ctx, 31, 0x799B60u);
    ctx->pc = 0x799B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B58u;
    // 0x799b5c: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799B58u, 0x799B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B60u;
label_799b60:
    // 0x799b60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x799b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799b64: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799B64u;
    SET_GPR_U32(ctx, 31, 0x799B6Cu);
    ctx->pc = 0x799B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B64u;
    // 0x799b68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799B64u, 0x799B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B6Cu;
label_799b6c:
    // 0x799b6c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x799b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799b70: 0xc0a588c  jal         func_296230
    ctx->pc = 0x799B70u;
    SET_GPR_U32(ctx, 31, 0x799B78u);
    ctx->pc = 0x799B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B70u;
    // 0x799b74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296230u, 0x799B70u, 0x799B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B78u;
label_799b78:
    // 0x799b78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799b7c: 0x266464f0  addiu       $a0, $s3, 0x64F0
    ctx->pc = 0x799b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25840));
    // 0x799b80: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799B80u;
    SET_GPR_U32(ctx, 31, 0x799B88u);
    ctx->pc = 0x799B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B80u;
    // 0x799b84: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799B80u, 0x799B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B88u;
label_799b88:
    // 0x799b88: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x799B88u;
    {
        const bool branch_taken_0x799b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B88u;
        // 0x799b8c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b88) {
            ctx->pc = 0x799BC8u;
            goto label_799bc8;
        }
    }
    ctx->pc = 0x799B90u;
    // 0x799b90: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x799b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799b94: 0xc44100b4  lwc1        $f1, 0xB4($v0)
    ctx->pc = 0x799b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799b98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x799b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b9c: 0xc44200b8  lwc1        $f2, 0xB8($v0)
    ctx->pc = 0x799b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x799ba0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x799ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x799ba4: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x799ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x799ba8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x799ba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bac: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x799bacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x799bb0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799bb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799bb4: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x799bb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x799bb8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x799bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x799bbc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799bc0: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x799BC0u;
    SET_GPR_U32(ctx, 31, 0x799BC8u);
    ctx->pc = 0x799BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BC0u;
    // 0x799bc4: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x799BC0u, 0x799BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BC8u;
label_799bc8:
    // 0x799bc8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x799bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799bcc: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x799bccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x799bd0: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x799BD0u;
    {
        const bool branch_taken_0x799bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BD0u;
        // 0x799bd4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bd0) {
            ctx->pc = 0x799B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b50;
        }
    }
    ctx->pc = 0x799BD8u;
label_799bd8:
    // 0x799bd8: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x799bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_799bdc:
    // 0x799bdc: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x799bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_799be0:
    // 0x799be0: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x799be0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x799be4: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x799be4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x799be8: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x799be8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x799bec: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x799becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x799bf0: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x799bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x799BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BF4u;
        // 0x799bf8: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799BFCu;
    // 0x799bfc: 0x0  nop
    ctx->pc = 0x799bfcu;
    // NOP
    ctx->pc = 0x799c00u;
}
} // namespace gh_r702
