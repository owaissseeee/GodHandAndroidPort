#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r802_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r802
{
// Function: checkBattle2ndArea__5cR802
// Address: 0x799d48 - 0x79a5d0
void checkBattle2ndArea__5cR802_0x799d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkBattle2ndArea__5cR802_0x799d48");
#endif

    switch (ctx->pc) {
        case 0x799db8u: goto label_799db8;
        case 0x799dc8u: goto label_799dc8;
        case 0x799e1cu: goto label_799e1c;
        case 0x799e28u: goto label_799e28;
        case 0x799e40u: goto label_799e40;
        case 0x799e70u: goto label_799e70;
        case 0x799e80u: goto label_799e80;
        case 0x799e88u: goto label_799e88;
        case 0x799e98u: goto label_799e98;
        case 0x799ea0u: goto label_799ea0;
        case 0x799eb0u: goto label_799eb0;
        case 0x799eb8u: goto label_799eb8;
        case 0x799ec0u: goto label_799ec0;
        case 0x799ec8u: goto label_799ec8;
        case 0x799ed0u: goto label_799ed0;
        case 0x799ee4u: goto label_799ee4;
        case 0x799ef4u: goto label_799ef4;
        case 0x799f14u: goto label_799f14;
        case 0x799f28u: goto label_799f28;
        case 0x799f34u: goto label_799f34;
        case 0x799f3cu: goto label_799f3c;
        case 0x799f4cu: goto label_799f4c;
        case 0x799f60u: goto label_799f60;
        case 0x799f84u: goto label_799f84;
        case 0x799f94u: goto label_799f94;
        case 0x799fb4u: goto label_799fb4;
        case 0x799fd8u: goto label_799fd8;
        case 0x79a008u: goto label_79a008;
        case 0x79a030u: goto label_79a030;
        case 0x79a060u: goto label_79a060;
        case 0x79a088u: goto label_79a088;
        case 0x79a0b8u: goto label_79a0b8;
        case 0x79a0e0u: goto label_79a0e0;
        case 0x79a110u: goto label_79a110;
        case 0x79a208u: goto label_79a208;
        case 0x79a298u: goto label_79a298;
        case 0x79a328u: goto label_79a328;
        case 0x79a3b8u: goto label_79a3b8;
        case 0x79a404u: goto label_79a404;
        case 0x79a430u: goto label_79a430;
        case 0x79a45cu: goto label_79a45c;
        case 0x79a480u: goto label_79a480;
        case 0x79a49cu: goto label_79a49c;
        case 0x79a4b8u: goto label_79a4b8;
        case 0x79a4d4u: goto label_79a4d4;
        case 0x79a4f0u: goto label_79a4f0;
        case 0x79a4f8u: goto label_79a4f8;
        case 0x79a504u: goto label_79a504;
        case 0x79a50cu: goto label_79a50c;
        case 0x79a518u: goto label_79a518;
        case 0x79a524u: goto label_79a524;
        case 0x79a530u: goto label_79a530;
        case 0x79a558u: goto label_79a558;
        case 0x79a560u: goto label_79a560;
        case 0x79a574u: goto label_79a574;
        case 0x79a584u: goto label_79a584;
        case 0x79a590u: goto label_79a590;
        default: break;
    }

    ctx->pc = 0x799d48u;

    // 0x799d48: 0x27bdf970  addiu       $sp, $sp, -0x690
    ctx->pc = 0x799d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965616));
    // 0x799d4c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x799d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x799d50: 0x7fb00660  sq          $s0, 0x660($sp)
    ctx->pc = 0x799d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1632), GPR_VEC(ctx, 16));
    // 0x799d54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799d58: 0x7fb10650  sq          $s1, 0x650($sp)
    ctx->pc = 0x799d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1616), GPR_VEC(ctx, 17));
    // 0x799d5c: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x799d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x799d60: 0x7fb20640  sq          $s2, 0x640($sp)
    ctx->pc = 0x799d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1600), GPR_VEC(ctx, 18));
    // 0x799d64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799d68: 0x7fb30630  sq          $s3, 0x630($sp)
    ctx->pc = 0x799d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1584), GPR_VEC(ctx, 19));
    // 0x799d6c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x799d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x799d70: 0x7fb40620  sq          $s4, 0x620($sp)
    ctx->pc = 0x799d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1568), GPR_VEC(ctx, 20));
    // 0x799d74: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x799d74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d78: 0x7fb50610  sq          $s5, 0x610($sp)
    ctx->pc = 0x799d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1552), GPR_VEC(ctx, 21));
    // 0x799d7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799d7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d80: 0x7fb60600  sq          $s6, 0x600($sp)
    ctx->pc = 0x799d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1536), GPR_VEC(ctx, 22));
    // 0x799d84: 0x3c15007a  lui         $s5, 0x7A
    ctx->pc = 0x799d84u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
    // 0x799d88: 0x7fb705f0  sq          $s7, 0x5F0($sp)
    ctx->pc = 0x799d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1520), GPR_VEC(ctx, 23));
    // 0x799d8c: 0x3c140075  lui         $s4, 0x75
    ctx->pc = 0x799d8cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)117 << 16));
    // 0x799d90: 0x7fbe05e0  sq          $fp, 0x5E0($sp)
    ctx->pc = 0x799d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1504), GPR_VEC(ctx, 30));
    // 0x799d94: 0x3c170060  lui         $s7, 0x60
    ctx->pc = 0x799d94u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
    // 0x799d98: 0xffbf05d0  sd          $ra, 0x5D0($sp)
    ctx->pc = 0x799d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1488), GPR_U64(ctx, 31));
    // 0x799d9c: 0x3c16007a  lui         $s6, 0x7A
    ctx->pc = 0x799d9cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
    // 0x799da0: 0xe7b70688  swc1        $f23, 0x688($sp)
    ctx->pc = 0x799da0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1672), bits); }
    // 0x799da4: 0x3c1e007a  lui         $fp, 0x7A
    ctx->pc = 0x799da4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
    // 0x799da8: 0xe7b60680  swc1        $f22, 0x680($sp)
    ctx->pc = 0x799da8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1664), bits); }
    // 0x799dac: 0xe7b50678  swc1        $f21, 0x678($sp)
    ctx->pc = 0x799dacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1656), bits); }
    // 0x799db0: 0xc04cccc  jal         func_133330
    ctx->pc = 0x799DB0u;
    SET_GPR_U32(ctx, 31, 0x799DB8u);
    ctx->pc = 0x799DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DB0u;
    // 0x799db4: 0xe7b40670  swc1        $f20, 0x670($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1648), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x799DB0u, 0x799DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DB8u;
label_799db8:
    // 0x799db8: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799dbc: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x799dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x799dc0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799DC0u;
    SET_GPR_U32(ctx, 31, 0x799DC8u);
    ctx->pc = 0x799DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DC0u;
    // 0x799dc4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799DC0u, 0x799DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DC8u;
label_799dc8:
    // 0x799dc8: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799dcc: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799dd0: 0x2448ae70  addiu       $t0, $v0, -0x5190
    ctx->pc = 0x799dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946416));
    // 0x799dd4: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x799dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x799dd8: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x799dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x799ddc: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x799ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x799de0: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x799de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x799de4: 0x69070017  ldl         $a3, 0x17($t0)
    ctx->pc = 0x799de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x799de8: 0x6d070010  ldr         $a3, 0x10($t0)
    ctx->pc = 0x799de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x799dec: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x799decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799df0: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x799df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799df4: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x799df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799df8: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x799df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799dfc: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x799dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799e00: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x799e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799e04: 0x6903001f  ldl         $v1, 0x1F($t0)
    ctx->pc = 0x799e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x799e08: 0x6d030018  ldr         $v1, 0x18($t0)
    ctx->pc = 0x799e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x799e0c: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x799e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799e10: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x799e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799e14: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799E14u;
    SET_GPR_U32(ctx, 31, 0x799E1Cu);
    ctx->pc = 0x799E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E14u;
    // 0x799e18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799E14u, 0x799E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E1Cu;
label_799e1c:
    // 0x799e1c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x799e1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x799e20: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x799e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e24: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x799e24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_799e28:
    // 0x799e28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x799e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799e34: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x799e34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x799e38: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799E38u;
    SET_GPR_U32(ctx, 31, 0x799E40u);
    ctx->pc = 0x799E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E38u;
    // 0x799e3c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799E38u, 0x799E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E40u;
label_799e40:
    // 0x799e40: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x799e40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x799e44: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x799E44u;
    {
        const bool branch_taken_0x799e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799e44) {
            ctx->pc = 0x799E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799E44u;
            // 0x799e48: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e28;
        }
    }
    ctx->pc = 0x799E4Cu;
    // 0x799e4c: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x799e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x799e50: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799e54: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799e54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799e58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799e58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e5c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799e5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e60: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799e64: 0x26e4ee00  addiu       $a0, $s7, -0x1200
    ctx->pc = 0x799e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962688));
    // 0x799e68: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799E68u;
    SET_GPR_U32(ctx, 31, 0x799E70u);
    ctx->pc = 0x799E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E68u;
    // 0x799e6c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799E68u, 0x799E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E70u;
label_799e70:
    // 0x799e70: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799e74: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799e78: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799E78u;
    SET_GPR_U32(ctx, 31, 0x799E80u);
    ctx->pc = 0x799E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E78u;
    // 0x799e7c: 0x24a5ae90  addiu       $a1, $a1, -0x5170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799E78u, 0x799E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E80u;
label_799e80:
    // 0x799e80: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799E80u;
    SET_GPR_U32(ctx, 31, 0x799E88u);
    ctx->pc = 0x799E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E80u;
    // 0x799e84: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799E80u, 0x799E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E88u;
label_799e88:
    // 0x799e88: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799e8c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799e90: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799E90u;
    SET_GPR_U32(ctx, 31, 0x799E98u);
    ctx->pc = 0x799E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E90u;
    // 0x799e94: 0x24a5ae98  addiu       $a1, $a1, -0x5168 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799E90u, 0x799E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E98u;
label_799e98:
    // 0x799e98: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799E98u;
    SET_GPR_U32(ctx, 31, 0x799EA0u);
    ctx->pc = 0x799E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E98u;
    // 0x799e9c: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799E98u, 0x799EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EA0u;
label_799ea0:
    // 0x799ea0: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799ea4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799ea8: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799EA8u;
    SET_GPR_U32(ctx, 31, 0x799EB0u);
    ctx->pc = 0x799EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EA8u;
    // 0x799eac: 0x24a5aea0  addiu       $a1, $a1, -0x5160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799EA8u, 0x799EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EB0u;
label_799eb0:
    // 0x799eb0: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799EB0u;
    SET_GPR_U32(ctx, 31, 0x799EB8u);
    ctx->pc = 0x799EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EB0u;
    // 0x799eb4: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799EB0u, 0x799EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EB8u;
label_799eb8:
    // 0x799eb8: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799EB8u;
    SET_GPR_U32(ctx, 31, 0x799EC0u);
    ctx->pc = 0x799EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EB8u;
    // 0x799ebc: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799EB8u, 0x799EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EC0u;
label_799ec0:
    // 0x799ec0: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x799ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ec4: 0x0  nop
    ctx->pc = 0x799ec4u;
    // NOP
label_799ec8:
    // 0x799ec8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x799EC8u;
    SET_GPR_U32(ctx, 31, 0x799ED0u);
    ctx->pc = 0x799ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EC8u;
    // 0x799ecc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x799EC8u, 0x799ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ED0u;
label_799ed0:
    // 0x799ed0: 0x8e632f84  lw          $v1, 0x2F84($s3)
    ctx->pc = 0x799ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799ed4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x799ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x799ed8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x799ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799edc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799EDCu;
    SET_GPR_U32(ctx, 31, 0x799EE4u);
    ctx->pc = 0x799EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EDCu;
    // 0x799ee0: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799EDCu, 0x799EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EE4u;
label_799ee4:
    // 0x799ee4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x799ee4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799ee8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x799ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x799eec: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799EECu;
    SET_GPR_U32(ctx, 31, 0x799EF4u);
    ctx->pc = 0x799EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EECu;
    // 0x799ef0: 0xa3a20020  sb          $v0, 0x20($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799EECu, 0x799EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EF4u;
label_799ef4:
    // 0x799ef4: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x799ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799ef8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799efc: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x799f00: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799f00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x799f04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799f08: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799f0c: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799F0Cu;
    SET_GPR_U32(ctx, 31, 0x799F14u);
    ctx->pc = 0x799F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F0Cu;
    // 0x799f10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799F0Cu, 0x799F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F14u;
label_799f14:
    // 0x799f14: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x799f14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x799f18: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x799F18u;
    {
        const bool branch_taken_0x799f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799f18) {
            ctx->pc = 0x799EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799ec8;
        }
    }
    ctx->pc = 0x799F20u;
    // 0x799f20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x799F20u;
    {
        const bool branch_taken_0x799f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F20u;
        // 0x799f24: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f20) {
            ctx->pc = 0x799F34u;
            goto label_799f34;
        }
    }
    ctx->pc = 0x799F28u;
label_799f28:
    // 0x799f28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799f2c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799F2Cu;
    SET_GPR_U32(ctx, 31, 0x799F34u);
    ctx->pc = 0x799F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F2Cu;
    // 0x799f30: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799F2Cu, 0x799F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F34u;
label_799f34:
    // 0x799f34: 0xc1e64be  jal         func_7992F8
    ctx->pc = 0x799F34u;
    SET_GPR_U32(ctx, 31, 0x799F3Cu);
    ctx->pc = 0x799F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F34u;
    // 0x799f38: 0x8ea4af80  lw          $a0, -0x5080($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7992F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7992F8u, 0x799F34u, 0x799F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F3Cu;
label_799f3c:
    // 0x799f3c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x799F3Cu;
    {
        const bool branch_taken_0x799f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F3Cu;
        // 0x799f40: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f3c) {
            ctx->pc = 0x799F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f28;
        }
    }
    ctx->pc = 0x799F44u;
    // 0x799f44: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x799F44u;
    SET_GPR_U32(ctx, 31, 0x799F4Cu);
    ctx->pc = 0x799F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F44u;
    // 0x799f48: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x799F44u, 0x799F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F4Cu;
label_799f4c:
    // 0x799f4c: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x799F4Cu;
    {
        const bool branch_taken_0x799f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x799F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F4Cu;
        // 0x799f50: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f4c) {
            ctx->pc = 0x799F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f28;
        }
    }
    ctx->pc = 0x799F54u;
    // 0x799f54: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x799f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x799f58: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799F58u;
    SET_GPR_U32(ctx, 31, 0x799F60u);
    ctx->pc = 0x799F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F58u;
    // 0x799f5c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799F58u, 0x799F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F60u;
label_799f60:
    // 0x799f60: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799f64: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x799f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x799f68: 0x8c448658  lw          $a0, -0x79A8($v0)
    ctx->pc = 0x799f68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799f6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f70: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x799f74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x799f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x799f78: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x799f78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x799f7c: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799F7Cu;
    SET_GPR_U32(ctx, 31, 0x799F84u);
    ctx->pc = 0x799F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F7Cu;
    // 0x799f80: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799F7Cu, 0x799F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F84u;
label_799f84:
    // 0x799f84: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799f88: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799f88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799f8c: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799F8Cu;
    SET_GPR_U32(ctx, 31, 0x799F94u);
    ctx->pc = 0x799F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F8Cu;
    // 0x799f90: 0x24a5aea8  addiu       $a1, $a1, -0x5158 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799F8Cu, 0x799F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F94u;
label_799f94:
    // 0x799f94: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799f98: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799f9c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799fa0: 0x26e4ee00  addiu       $a0, $s7, -0x1200
    ctx->pc = 0x799fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962688));
    // 0x799fa4: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x799fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x799fa8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799fa8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fac: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799FACu;
    SET_GPR_U32(ctx, 31, 0x799FB4u);
    ctx->pc = 0x799FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FACu;
    // 0x799fb0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799FACu, 0x799FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FB4u;
label_799fb4:
    // 0x799fb4: 0x82c2aeb0  lb          $v0, -0x5150($s6)
    ctx->pc = 0x799fb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 4294946480)));
    // 0x799fb8: 0x26884c38  addiu       $t0, $s4, 0x4C38
    ctx->pc = 0x799fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 19512));
    // 0x799fbc: 0x26c3aeb0  addiu       $v1, $s6, -0x5150
    ctx->pc = 0x799fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946480));
    // 0x799fc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fc4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799FC4u;
    {
        const bool branch_taken_0x799fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FC4u;
        // 0x799fc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fc4) {
            ctx->pc = 0x79A000u;
            goto label_79a000;
        }
    }
    ctx->pc = 0x799FCCu;
    // 0x799fcc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799fccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fd0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799fd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799fd4: 0x0  nop
    ctx->pc = 0x799fd4u;
    // NOP
label_799fd8:
    // 0x799fd8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799fdc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799fe0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799fe4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799fe8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799fe8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799fec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799FECu;
    {
        const bool branch_taken_0x799fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FECu;
        // 0x799ff0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fec) {
            ctx->pc = 0x79A000u;
            goto label_79a000;
        }
    }
    ctx->pc = 0x799FF4u;
    // 0x799ff4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799ff4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799ff8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799FF8u;
    {
        const bool branch_taken_0x799ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799ff8) {
            ctx->pc = 0x799FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799FF8u;
            // 0x799ffc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799fd8;
        }
    }
    ctx->pc = 0x79A000u;
label_79a000:
    // 0x79a000: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x79A000u;
    SET_GPR_U32(ctx, 31, 0x79A008u);
    ctx->pc = 0x79A004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A000u;
    // 0x79a004: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x79A000u, 0x79A008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A008u;
label_79a008:
    // 0x79a008: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x79a008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a00c: 0x26884c38  addiu       $t0, $s4, 0x4C38
    ctx->pc = 0x79a00cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 19512));
    // 0x79a010: 0x83c2aeb8  lb          $v0, -0x5148($fp)
    ctx->pc = 0x79a010u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294946488)));
    // 0x79a014: 0x27c3aeb8  addiu       $v1, $fp, -0x5148
    ctx->pc = 0x79a014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294946488));
    // 0x79a018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a01c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79A01Cu;
    {
        const bool branch_taken_0x79a01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A01Cu;
        // 0x79a020: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a01c) {
            ctx->pc = 0x79A058u;
            goto label_79a058;
        }
    }
    ctx->pc = 0x79A024u;
    // 0x79a024: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a028: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a028u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a02c: 0x0  nop
    ctx->pc = 0x79a02cu;
    // NOP
label_79a030:
    // 0x79a030: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a030u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a034: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a038: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a03c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a040: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a040u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a044: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A044u;
    {
        const bool branch_taken_0x79a044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A044u;
        // 0x79a048: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a044) {
            ctx->pc = 0x79A058u;
            goto label_79a058;
        }
    }
    ctx->pc = 0x79A04Cu;
    // 0x79a04c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a04cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a050: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A050u;
    {
        const bool branch_taken_0x79a050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a050) {
            ctx->pc = 0x79A054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A050u;
            // 0x79a054: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a030;
        }
    }
    ctx->pc = 0x79A058u;
label_79a058:
    // 0x79a058: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x79A058u;
    SET_GPR_U32(ctx, 31, 0x79A060u);
    ctx->pc = 0x79A05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A058u;
    // 0x79a05c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x79A058u, 0x79A060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A060u;
label_79a060:
    // 0x79a060: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x79a060u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a064: 0x26884c38  addiu       $t0, $s4, 0x4C38
    ctx->pc = 0x79a064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 19512));
    // 0x79a068: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a06c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a070: 0x2443aec0  addiu       $v1, $v0, -0x5140
    ctx->pc = 0x79a070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946496));
    // 0x79a074: 0x8042aec0  lb          $v0, -0x5140($v0)
    ctx->pc = 0x79a074u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x79AEC0u));
    // 0x79a078: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A078u;
    {
        const bool branch_taken_0x79a078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A078u;
        // 0x79a07c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a078) {
            ctx->pc = 0x79A0B0u;
            goto label_79a0b0;
        }
    }
    ctx->pc = 0x79A080u;
    // 0x79a080: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a084: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a084u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a088:
    // 0x79a088: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a088u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a08c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a08cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a090: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a094: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a098: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a098u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a09c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A09Cu;
    {
        const bool branch_taken_0x79a09c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A09Cu;
        // 0x79a0a0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a09c) {
            ctx->pc = 0x79A0B0u;
            goto label_79a0b0;
        }
    }
    ctx->pc = 0x79A0A4u;
    // 0x79a0a4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a0a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a0a8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A0A8u;
    {
        const bool branch_taken_0x79a0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a0a8) {
            ctx->pc = 0x79A0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A0A8u;
            // 0x79a0ac: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a088;
        }
    }
    ctx->pc = 0x79A0B0u;
label_79a0b0:
    // 0x79a0b0: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x79A0B0u;
    SET_GPR_U32(ctx, 31, 0x79A0B8u);
    ctx->pc = 0x79A0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0B0u;
    // 0x79a0b4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x79A0B0u, 0x79A0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0B8u;
label_79a0b8:
    // 0x79a0b8: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
    // 0x79a0bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79a0bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0c0: 0x8082aec8  lb          $v0, -0x5138($a0)
    ctx->pc = 0x79a0c0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x79AEC8u));
    // 0x79a0c4: 0x26884c38  addiu       $t0, $s4, 0x4C38
    ctx->pc = 0x79a0c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 19512));
    // 0x79a0c8: 0x2483aec8  addiu       $v1, $a0, -0x5138
    ctx->pc = 0x79a0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946504));
    // 0x79a0cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A0D0u;
    {
        const bool branch_taken_0x79a0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0D0u;
        // 0x79a0d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0d0) {
            ctx->pc = 0x79A108u;
            goto label_79a108;
        }
    }
    ctx->pc = 0x79A0D8u;
    // 0x79a0d8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a0d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0dc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a0dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a0e0:
    // 0x79a0e0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a0e4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a0e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a0e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a0ec: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a0f0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a0f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a0f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A0F4u;
    {
        const bool branch_taken_0x79a0f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0F4u;
        // 0x79a0f8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0f4) {
            ctx->pc = 0x79A108u;
            goto label_79a108;
        }
    }
    ctx->pc = 0x79A0FCu;
    // 0x79a0fc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a0fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a100: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A100u;
    {
        const bool branch_taken_0x79a100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a100) {
            ctx->pc = 0x79A104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A100u;
            // 0x79a104: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a0e0;
        }
    }
    ctx->pc = 0x79A108u;
label_79a108:
    // 0x79a108: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x79A108u;
    SET_GPR_U32(ctx, 31, 0x79A110u);
    ctx->pc = 0x79A10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A108u;
    // 0x79a10c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x79A108u, 0x79A110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A110u;
label_79a110:
    // 0x79a110: 0x1240010f  beqz        $s2, . + 4 + (0x10F << 2)
    ctx->pc = 0x79A110u;
    {
        const bool branch_taken_0x79a110 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A110u;
        // 0x79a114: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a110) {
            ctx->pc = 0x79A550u;
            goto label_79a550;
        }
    }
    ctx->pc = 0x79A118u;
    // 0x79a118: 0x1220010d  beqz        $s1, . + 4 + (0x10D << 2)
    ctx->pc = 0x79A118u;
    {
        const bool branch_taken_0x79a118 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a118) {
            ctx->pc = 0x79A550u;
            goto label_79a550;
        }
    }
    ctx->pc = 0x79A120u;
    // 0x79a120: 0x13c0010b  beqz        $fp, . + 4 + (0x10B << 2)
    ctx->pc = 0x79A120u;
    {
        const bool branch_taken_0x79a120 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a120) {
            ctx->pc = 0x79A550u;
            goto label_79a550;
        }
    }
    ctx->pc = 0x79A128u;
    // 0x79a128: 0x12000109  beqz        $s0, . + 4 + (0x109 << 2)
    ctx->pc = 0x79A128u;
    {
        const bool branch_taken_0x79a128 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A128u;
        // 0x79a12c: 0x27a30030  addiu       $v1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a128) {
            ctx->pc = 0x79A550u;
            goto label_79a550;
        }
    }
    ctx->pc = 0x79A130u;
    // 0x79a130: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x79a130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x79a134: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x79a134u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x79a138: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a13c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x79a13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x79a140: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x79a140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79a144: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x79a144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x79a148: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a14c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a14cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a150: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x79a150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x79a154: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x79a154u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x79a158: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x79a158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x79a15c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x79a15cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x79a160: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a164: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x79a164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x79a168: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79a168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79a16c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x79a16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x79a170: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79a170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79a174: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x79a174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a178: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x79a178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a17c: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x79a17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a180: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x79a180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a184: 0xfba000e0  sqc2        $vf0, 0xE0($sp)
    ctx->pc = 0x79a184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a188: 0xfba000f0  sqc2        $vf0, 0xF0($sp)
    ctx->pc = 0x79a188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a18c: 0xfba00100  sqc2        $vf0, 0x100($sp)
    ctx->pc = 0x79a18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a190: 0xfba00110  sqc2        $vf0, 0x110($sp)
    ctx->pc = 0x79a190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a194: 0xfba00120  sqc2        $vf0, 0x120($sp)
    ctx->pc = 0x79a194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a198: 0xfba00130  sqc2        $vf0, 0x130($sp)
    ctx->pc = 0x79a198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a19c: 0xfba00140  sqc2        $vf0, 0x140($sp)
    ctx->pc = 0x79a19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a1a0: 0xfba00150  sqc2        $vf0, 0x150($sp)
    ctx->pc = 0x79a1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a1a4: 0xfba00160  sqc2        $vf0, 0x160($sp)
    ctx->pc = 0x79a1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a1a8: 0xfba00170  sqc2        $vf0, 0x170($sp)
    ctx->pc = 0x79a1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a1ac: 0xa3a00050  sb          $zero, 0x50($sp)
    ctx->pc = 0x79a1acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a1b0: 0x27a501bc  addiu       $a1, $sp, 0x1BC
    ctx->pc = 0x79a1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    // 0x79a1b4: 0xa3a00051  sb          $zero, 0x51($sp)
    ctx->pc = 0x79a1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 81), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a1b8: 0x27a6031c  addiu       $a2, $sp, 0x31C
    ctx->pc = 0x79a1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 796));
    // 0x79a1bc: 0xa3a00052  sb          $zero, 0x52($sp)
    ctx->pc = 0x79a1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 82), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a1c0: 0x27a7047c  addiu       $a3, $sp, 0x47C
    ctx->pc = 0x79a1c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1148));
    // 0x79a1c4: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x79a1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x79a1c8: 0x27b70050  addiu       $s7, $sp, 0x50
    ctx->pc = 0x79a1c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x79a1cc: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x79a1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x79a1d0: 0x27b601b0  addiu       $s6, $sp, 0x1B0
    ctx->pc = 0x79a1d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x79a1d4: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x79a1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x79a1d8: 0x27b50310  addiu       $s5, $sp, 0x310
    ctx->pc = 0x79a1d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x79a1dc: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x79a1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x79a1e0: 0x27b40470  addiu       $s4, $sp, 0x470
    ctx->pc = 0x79a1e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
    // 0x79a1e4: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x79a1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x79a1e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x79a1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1ec: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x79a1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x79a1f0: 0x27a3005c  addiu       $v1, $sp, 0x5C
    ctx->pc = 0x79a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x79a1f4: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x79a1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
    // 0x79a1f8: 0xafa00184  sw          $zero, 0x184($sp)
    ctx->pc = 0x79a1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 0));
    // 0x79a1fc: 0xafa00188  sw          $zero, 0x188($sp)
    ctx->pc = 0x79a1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
    // 0x79a200: 0xafa0018c  sw          $zero, 0x18C($sp)
    ctx->pc = 0x79a200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
    // 0x79a204: 0x0  nop
    ctx->pc = 0x79a204u;
    // NOP
label_79a208:
    // 0x79a208: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x79a208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x79a20c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x79a20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x79a210: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x79a210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a214: 0x0  nop
    ctx->pc = 0x79a214u;
    // NOP
    // 0x79a218: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79A218u;
    {
        const bool branch_taken_0x79a218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A218u;
        // 0x79a21c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a218) {
            ctx->pc = 0x79A208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a208;
        }
    }
    ctx->pc = 0x79A220u;
    // 0x79a220: 0xfba00200  sqc2        $vf0, 0x200($sp)
    ctx->pc = 0x79a220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a224: 0xfba00210  sqc2        $vf0, 0x210($sp)
    ctx->pc = 0x79a224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a228: 0xfba00220  sqc2        $vf0, 0x220($sp)
    ctx->pc = 0x79a228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a22c: 0xfba00230  sqc2        $vf0, 0x230($sp)
    ctx->pc = 0x79a22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a230: 0xfba00240  sqc2        $vf0, 0x240($sp)
    ctx->pc = 0x79a230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a234: 0xfba00250  sqc2        $vf0, 0x250($sp)
    ctx->pc = 0x79a234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a238: 0xfba00260  sqc2        $vf0, 0x260($sp)
    ctx->pc = 0x79a238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a23c: 0xfba00270  sqc2        $vf0, 0x270($sp)
    ctx->pc = 0x79a23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a240: 0xfba00280  sqc2        $vf0, 0x280($sp)
    ctx->pc = 0x79a240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a244: 0xfba00290  sqc2        $vf0, 0x290($sp)
    ctx->pc = 0x79a244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a248: 0xfba002a0  sqc2        $vf0, 0x2A0($sp)
    ctx->pc = 0x79a248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a24c: 0xfba002b0  sqc2        $vf0, 0x2B0($sp)
    ctx->pc = 0x79a24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a250: 0xfba002c0  sqc2        $vf0, 0x2C0($sp)
    ctx->pc = 0x79a250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a254: 0xfba002d0  sqc2        $vf0, 0x2D0($sp)
    ctx->pc = 0x79a254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a258: 0xa3a001b0  sb          $zero, 0x1B0($sp)
    ctx->pc = 0x79a258u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 432), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a25c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x79a25cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a260: 0xa3a001b1  sb          $zero, 0x1B1($sp)
    ctx->pc = 0x79a260u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 433), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a264: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x79a264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a268: 0xa3a001b2  sb          $zero, 0x1B2($sp)
    ctx->pc = 0x79a268u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 434), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a26c: 0xafa001b4  sw          $zero, 0x1B4($sp)
    ctx->pc = 0x79a26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 0));
    // 0x79a270: 0xafa001b8  sw          $zero, 0x1B8($sp)
    ctx->pc = 0x79a270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 0));
    // 0x79a274: 0xafa001e0  sw          $zero, 0x1E0($sp)
    ctx->pc = 0x79a274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 0));
    // 0x79a278: 0xafa001e4  sw          $zero, 0x1E4($sp)
    ctx->pc = 0x79a278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 0));
    // 0x79a27c: 0xafa001e8  sw          $zero, 0x1E8($sp)
    ctx->pc = 0x79a27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 0));
    // 0x79a280: 0xafa001ec  sw          $zero, 0x1EC($sp)
    ctx->pc = 0x79a280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 0));
    // 0x79a284: 0xafa002e0  sw          $zero, 0x2E0($sp)
    ctx->pc = 0x79a284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 0));
    // 0x79a288: 0xafa002e4  sw          $zero, 0x2E4($sp)
    ctx->pc = 0x79a288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 0));
    // 0x79a28c: 0xafa002e8  sw          $zero, 0x2E8($sp)
    ctx->pc = 0x79a28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 0));
    // 0x79a290: 0xafa002ec  sw          $zero, 0x2EC($sp)
    ctx->pc = 0x79a290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 0));
    // 0x79a294: 0x0  nop
    ctx->pc = 0x79a294u;
    // NOP
label_79a298:
    // 0x79a298: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x79a298u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x79a29c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x79a29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x79a2a0: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x79a2a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a2a4: 0x0  nop
    ctx->pc = 0x79a2a4u;
    // NOP
    // 0x79a2a8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79A2A8u;
    {
        const bool branch_taken_0x79a2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2A8u;
        // 0x79a2ac: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2a8) {
            ctx->pc = 0x79A298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a298;
        }
    }
    ctx->pc = 0x79A2B0u;
    // 0x79a2b0: 0xfba00360  sqc2        $vf0, 0x360($sp)
    ctx->pc = 0x79a2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a2b4: 0xfba00370  sqc2        $vf0, 0x370($sp)
    ctx->pc = 0x79a2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a2b8: 0xfba00380  sqc2        $vf0, 0x380($sp)
    ctx->pc = 0x79a2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a2bc: 0xfba00390  sqc2        $vf0, 0x390($sp)
    ctx->pc = 0x79a2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a2c0: 0xfba003a0  sqc2        $vf0, 0x3A0($sp)
    ctx->pc = 0x79a2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a2c4: 0xfba003b0  sqc2        $vf0, 0x3B0($sp)
    ctx->pc = 0x79a2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a2c8: 0xfba003c0  sqc2        $vf0, 0x3C0($sp)
    ctx->pc = 0x79a2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a2cc: 0xfba003d0  sqc2        $vf0, 0x3D0($sp)
    ctx->pc = 0x79a2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a2d0: 0xfba003e0  sqc2        $vf0, 0x3E0($sp)
    ctx->pc = 0x79a2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a2d4: 0xfba003f0  sqc2        $vf0, 0x3F0($sp)
    ctx->pc = 0x79a2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a2d8: 0xfba00400  sqc2        $vf0, 0x400($sp)
    ctx->pc = 0x79a2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a2dc: 0xfba00410  sqc2        $vf0, 0x410($sp)
    ctx->pc = 0x79a2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a2e0: 0xfba00420  sqc2        $vf0, 0x420($sp)
    ctx->pc = 0x79a2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a2e4: 0xfba00430  sqc2        $vf0, 0x430($sp)
    ctx->pc = 0x79a2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a2e8: 0xa3a00310  sb          $zero, 0x310($sp)
    ctx->pc = 0x79a2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 784), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a2ec: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x79a2ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2f0: 0xa3a00311  sb          $zero, 0x311($sp)
    ctx->pc = 0x79a2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 785), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a2f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x79a2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2f8: 0xa3a00312  sb          $zero, 0x312($sp)
    ctx->pc = 0x79a2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 786), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a2fc: 0xafa00314  sw          $zero, 0x314($sp)
    ctx->pc = 0x79a2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 788), GPR_U32(ctx, 0));
    // 0x79a300: 0xafa00318  sw          $zero, 0x318($sp)
    ctx->pc = 0x79a300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 792), GPR_U32(ctx, 0));
    // 0x79a304: 0xafa00340  sw          $zero, 0x340($sp)
    ctx->pc = 0x79a304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 832), GPR_U32(ctx, 0));
    // 0x79a308: 0xafa00344  sw          $zero, 0x344($sp)
    ctx->pc = 0x79a308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 836), GPR_U32(ctx, 0));
    // 0x79a30c: 0xafa00348  sw          $zero, 0x348($sp)
    ctx->pc = 0x79a30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 840), GPR_U32(ctx, 0));
    // 0x79a310: 0xafa0034c  sw          $zero, 0x34C($sp)
    ctx->pc = 0x79a310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 0));
    // 0x79a314: 0xafa00440  sw          $zero, 0x440($sp)
    ctx->pc = 0x79a314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 0));
    // 0x79a318: 0xafa00444  sw          $zero, 0x444($sp)
    ctx->pc = 0x79a318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1092), GPR_U32(ctx, 0));
    // 0x79a31c: 0xafa00448  sw          $zero, 0x448($sp)
    ctx->pc = 0x79a31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1096), GPR_U32(ctx, 0));
    // 0x79a320: 0xafa0044c  sw          $zero, 0x44C($sp)
    ctx->pc = 0x79a320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1100), GPR_U32(ctx, 0));
    // 0x79a324: 0x0  nop
    ctx->pc = 0x79a324u;
    // NOP
label_79a328:
    // 0x79a328: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x79a328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x79a32c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x79a32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x79a330: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x79a330u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a334: 0x0  nop
    ctx->pc = 0x79a334u;
    // NOP
    // 0x79a338: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79A338u;
    {
        const bool branch_taken_0x79a338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A338u;
        // 0x79a33c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a338) {
            ctx->pc = 0x79A328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a328;
        }
    }
    ctx->pc = 0x79A340u;
    // 0x79a340: 0xfba004c0  sqc2        $vf0, 0x4C0($sp)
    ctx->pc = 0x79a340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a344: 0xfba004d0  sqc2        $vf0, 0x4D0($sp)
    ctx->pc = 0x79a344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a348: 0xfba004e0  sqc2        $vf0, 0x4E0($sp)
    ctx->pc = 0x79a348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a34c: 0xfba004f0  sqc2        $vf0, 0x4F0($sp)
    ctx->pc = 0x79a34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a350: 0xfba00500  sqc2        $vf0, 0x500($sp)
    ctx->pc = 0x79a350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a354: 0xfba00510  sqc2        $vf0, 0x510($sp)
    ctx->pc = 0x79a354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a358: 0xfba00520  sqc2        $vf0, 0x520($sp)
    ctx->pc = 0x79a358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a35c: 0xfba00530  sqc2        $vf0, 0x530($sp)
    ctx->pc = 0x79a35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a360: 0xfba00540  sqc2        $vf0, 0x540($sp)
    ctx->pc = 0x79a360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a364: 0xfba00550  sqc2        $vf0, 0x550($sp)
    ctx->pc = 0x79a364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a368: 0xfba00560  sqc2        $vf0, 0x560($sp)
    ctx->pc = 0x79a368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1376), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a36c: 0xfba00570  sqc2        $vf0, 0x570($sp)
    ctx->pc = 0x79a36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1392), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a370: 0xfba00580  sqc2        $vf0, 0x580($sp)
    ctx->pc = 0x79a370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1408), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a374: 0xfba00590  sqc2        $vf0, 0x590($sp)
    ctx->pc = 0x79a374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1424), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a378: 0xa3a00470  sb          $zero, 0x470($sp)
    ctx->pc = 0x79a378u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1136), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a37c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x79a37cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a380: 0xa3a00471  sb          $zero, 0x471($sp)
    ctx->pc = 0x79a380u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1137), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a384: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x79a384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a388: 0xa3a00472  sb          $zero, 0x472($sp)
    ctx->pc = 0x79a388u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1138), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a38c: 0xafa00474  sw          $zero, 0x474($sp)
    ctx->pc = 0x79a38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1140), GPR_U32(ctx, 0));
    // 0x79a390: 0xafa00478  sw          $zero, 0x478($sp)
    ctx->pc = 0x79a390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1144), GPR_U32(ctx, 0));
    // 0x79a394: 0xafa004a0  sw          $zero, 0x4A0($sp)
    ctx->pc = 0x79a394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 0));
    // 0x79a398: 0xafa004a4  sw          $zero, 0x4A4($sp)
    ctx->pc = 0x79a398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 0));
    // 0x79a39c: 0xafa004a8  sw          $zero, 0x4A8($sp)
    ctx->pc = 0x79a39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 0));
    // 0x79a3a0: 0xafa004ac  sw          $zero, 0x4AC($sp)
    ctx->pc = 0x79a3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1196), GPR_U32(ctx, 0));
    // 0x79a3a4: 0xafa005a0  sw          $zero, 0x5A0($sp)
    ctx->pc = 0x79a3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1440), GPR_U32(ctx, 0));
    // 0x79a3a8: 0xafa005a4  sw          $zero, 0x5A4($sp)
    ctx->pc = 0x79a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1444), GPR_U32(ctx, 0));
    // 0x79a3ac: 0xafa005a8  sw          $zero, 0x5A8($sp)
    ctx->pc = 0x79a3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1448), GPR_U32(ctx, 0));
    // 0x79a3b0: 0xafa005ac  sw          $zero, 0x5AC($sp)
    ctx->pc = 0x79a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1452), GPR_U32(ctx, 0));
    // 0x79a3b4: 0x0  nop
    ctx->pc = 0x79a3b4u;
    // NOP
label_79a3b8:
    // 0x79a3b8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x79a3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x79a3bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x79a3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x79a3c0: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x79a3c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a3c4: 0x0  nop
    ctx->pc = 0x79a3c4u;
    // NOP
    // 0x79a3c8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79A3C8u;
    {
        const bool branch_taken_0x79a3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3C8u;
        // 0x79a3cc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3c8) {
            ctx->pc = 0x79A3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a3b8;
        }
    }
    ctx->pc = 0x79A3D0u;
    // 0x79a3d0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x79a3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x79a3d4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79a3d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79a3d8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x79a3d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x79a3dc: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x79a3dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79a3e0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x79a3e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x79a3e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x79a3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3e8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x79a3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3ec: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x79a3ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x79a3f0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x79a3f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x79a3f4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79a3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a3f8: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x79a3f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x79a3fc: 0xc071a62  jal         func_1C6988
    ctx->pc = 0x79A3FCu;
    SET_GPR_U32(ctx, 31, 0x79A404u);
    ctx->pc = 0x79A400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3FCu;
    // 0x79a400: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6988u, 0x79A3FCu, 0x79A404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A404u;
label_79a404:
    // 0x79a404: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a408: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79a408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79a40c: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x79a40cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79a410: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x79a410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a414: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x79a414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a418: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x79a418u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x79a41c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x79a41cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x79a420: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79a420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a424: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x79a424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x79a428: 0xc071a62  jal         func_1C6988
    ctx->pc = 0x79A428u;
    SET_GPR_U32(ctx, 31, 0x79A430u);
    ctx->pc = 0x79A42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A428u;
    // 0x79a42c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6988u, 0x79A428u, 0x79A430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A430u;
label_79a430:
    // 0x79a430: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x79a430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x79a434: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x79a434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x79a438: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x79a438u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79a43c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x79a43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a440: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x79a440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a444: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x79a444u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x79a448: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x79a448u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x79a44c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79a44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a450: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x79a450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x79a454: 0xc071a62  jal         func_1C6988
    ctx->pc = 0x79A454u;
    SET_GPR_U32(ctx, 31, 0x79A45Cu);
    ctx->pc = 0x79A458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A454u;
    // 0x79a458: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6988u, 0x79A454u, 0x79A45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A45Cu;
label_79a45c:
    // 0x79a45c: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x79a45cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79a460: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x79a460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x79a464: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a464u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a468: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79a468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a46c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x79a46cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x79a470: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x79a470u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x79a474: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a478: 0xc071a62  jal         func_1C6988
    ctx->pc = 0x79A478u;
    SET_GPR_U32(ctx, 31, 0x79A480u);
    ctx->pc = 0x79A47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A478u;
    // 0x79a47c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6988u, 0x79A478u, 0x79A480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A480u;
label_79a480:
    // 0x79a480: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x79a480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a484: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79a484u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79a488: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x79a488u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x79a48c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x79a48cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x79a490: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x79a490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79a494: 0xc071f54  jal         func_1C7D50
    ctx->pc = 0x79A494u;
    SET_GPR_U32(ctx, 31, 0x79A49Cu);
    ctx->pc = 0x79A498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A494u;
    // 0x79a498: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x79A494u, 0x79A49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A49Cu;
label_79a49c:
    // 0x79a49c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x79a49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79a4a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79a4a4: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x79a4a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x79a4a8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x79a4a8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x79a4ac: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x79a4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79a4b0: 0xc071f54  jal         func_1C7D50
    ctx->pc = 0x79A4B0u;
    SET_GPR_U32(ctx, 31, 0x79A4B8u);
    ctx->pc = 0x79A4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4B0u;
    // 0x79a4b4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x79A4B0u, 0x79A4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4B8u;
label_79a4b8:
    // 0x79a4b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x79a4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79a4bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79a4c0: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x79a4c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x79a4c4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x79a4c4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x79a4c8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x79a4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79a4cc: 0xc071f54  jal         func_1C7D50
    ctx->pc = 0x79A4CCu;
    SET_GPR_U32(ctx, 31, 0x79A4D4u);
    ctx->pc = 0x79A4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4CCu;
    // 0x79a4d0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x79A4CCu, 0x79A4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4D4u;
label_79a4d4:
    // 0x79a4d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79a4d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79a4d8: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x79a4d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x79a4dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4e0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x79a4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79a4e4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x79a4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79a4e8: 0xc071f54  jal         func_1C7D50
    ctx->pc = 0x79A4E8u;
    SET_GPR_U32(ctx, 31, 0x79A4F0u);
    ctx->pc = 0x79A4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4E8u;
    // 0x79a4ec: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x79A4E8u, 0x79A4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4F0u;
label_79a4f0:
    // 0x79a4f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79A4F0u;
    {
        const bool branch_taken_0x79a4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a4f0) {
            ctx->pc = 0x79A504u;
            goto label_79a504;
        }
    }
    ctx->pc = 0x79A4F8u;
label_79a4f8:
    // 0x79a4f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a4fc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A4FCu;
    SET_GPR_U32(ctx, 31, 0x79A504u);
    ctx->pc = 0x79A500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4FCu;
    // 0x79a500: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A4FCu, 0x79A504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A504u;
label_79a504:
    // 0x79a504: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x79A504u;
    SET_GPR_U32(ctx, 31, 0x79A50Cu);
    ctx->pc = 0x79A508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A504u;
    // 0x79a508: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x79A504u, 0x79A50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A50Cu;
label_79a50c:
    // 0x79a50c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x79a50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a510: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x79A510u;
    SET_GPR_U32(ctx, 31, 0x79A518u);
    ctx->pc = 0x79A514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A510u;
    // 0x79a514: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x79A510u, 0x79A518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A518u;
label_79a518:
    // 0x79a518: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x79a518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a51c: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x79A51Cu;
    SET_GPR_U32(ctx, 31, 0x79A524u);
    ctx->pc = 0x79A520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A51Cu;
    // 0x79a520: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x79A51Cu, 0x79A524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A524u;
label_79a524:
    // 0x79a524: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79a524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a528: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x79A528u;
    SET_GPR_U32(ctx, 31, 0x79A530u);
    ctx->pc = 0x79A52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A528u;
    // 0x79a52c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x79A528u, 0x79A530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A530u;
label_79a530:
    // 0x79a530: 0x5600fff1  bnel        $s0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x79A530u;
    {
        const bool branch_taken_0x79a530 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a530) {
            ctx->pc = 0x79A534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A530u;
            // 0x79a534: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a4f8;
        }
    }
    ctx->pc = 0x79A538u;
    // 0x79a538: 0x5640ffef  bnel        $s2, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x79A538u;
    {
        const bool branch_taken_0x79a538 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a538) {
            ctx->pc = 0x79A53Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A538u;
            // 0x79a53c: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a4f8;
        }
    }
    ctx->pc = 0x79A540u;
    // 0x79a540: 0x5620ffed  bnel        $s1, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x79A540u;
    {
        const bool branch_taken_0x79a540 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a540) {
            ctx->pc = 0x79A544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A540u;
            // 0x79a544: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a4f8;
        }
    }
    ctx->pc = 0x79A548u;
    // 0x79a548: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x79A548u;
    {
        const bool branch_taken_0x79a548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A548u;
        // 0x79a54c: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a548) {
            ctx->pc = 0x79A4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a4f8;
        }
    }
    ctx->pc = 0x79A550u;
label_79a550:
    // 0x79a550: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x79A550u;
    SET_GPR_U32(ctx, 31, 0x79A558u);
    ctx->pc = 0x79A554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A550u;
    // 0x79a554: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79A550u, 0x79A558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A558u;
label_79a558:
    // 0x79a558: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79A558u;
    SET_GPR_U32(ctx, 31, 0x79A560u);
    ctx->pc = 0x79A55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A558u;
    // 0x79a55c: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A558u, 0x79A560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A560u;
label_79a560:
    // 0x79a560: 0x3c06005d  lui         $a2, 0x5D
    ctx->pc = 0x79a560u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)93 << 16));
    // 0x79a564: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a568: 0x24c4ae50  addiu       $a0, $a2, -0x51B0
    ctx->pc = 0x79a568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946384));
    // 0x79a56c: 0xc04cccc  jal         func_133330
    ctx->pc = 0x79A56Cu;
    SET_GPR_U32(ctx, 31, 0x79A574u);
    ctx->pc = 0x79A570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A56Cu;
    // 0x79a570: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x79A56Cu, 0x79A574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A574u;
label_79a574:
    // 0x79a574: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79a574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x79a578: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x79a578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x79a57c: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x79A57Cu;
    SET_GPR_U32(ctx, 31, 0x79A584u);
    ctx->pc = 0x79A580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A57Cu;
    // 0x79a580: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x79A57Cu, 0x79A584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A584u;
label_79a584:
    // 0x79a584: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79a584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a588: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A588u;
    SET_GPR_U32(ctx, 31, 0x79A590u);
    ctx->pc = 0x79A58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A588u;
    // 0x79a58c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A588u, 0x79A590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A590u;
label_79a590:
    // 0x79a590: 0x7bb00660  lq          $s0, 0x660($sp)
    ctx->pc = 0x79a590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1632)));
    // 0x79a594: 0x7bb10650  lq          $s1, 0x650($sp)
    ctx->pc = 0x79a594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1616)));
    // 0x79a598: 0x7bb20640  lq          $s2, 0x640($sp)
    ctx->pc = 0x79a598u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1600)));
    // 0x79a59c: 0x7bb30630  lq          $s3, 0x630($sp)
    ctx->pc = 0x79a59cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x79a5a0: 0x7bb40620  lq          $s4, 0x620($sp)
    ctx->pc = 0x79a5a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1568)));
    // 0x79a5a4: 0x7bb50610  lq          $s5, 0x610($sp)
    ctx->pc = 0x79a5a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1552)));
    // 0x79a5a8: 0x7bb60600  lq          $s6, 0x600($sp)
    ctx->pc = 0x79a5a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1536)));
    // 0x79a5ac: 0x7bb705f0  lq          $s7, 0x5F0($sp)
    ctx->pc = 0x79a5acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1520)));
    // 0x79a5b0: 0x7bbe05e0  lq          $fp, 0x5E0($sp)
    ctx->pc = 0x79a5b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1504)));
    // 0x79a5b4: 0xdfbf05d0  ld          $ra, 0x5D0($sp)
    ctx->pc = 0x79a5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1488)));
    // 0x79a5b8: 0xc7b70688  lwc1        $f23, 0x688($sp)
    ctx->pc = 0x79a5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x79a5bc: 0xc7b60680  lwc1        $f22, 0x680($sp)
    ctx->pc = 0x79a5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x79a5c0: 0xc7b50678  lwc1        $f21, 0x678($sp)
    ctx->pc = 0x79a5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79a5c4: 0xc7b40670  lwc1        $f20, 0x670($sp)
    ctx->pc = 0x79a5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79a5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5C8u;
        // 0x79a5cc: 0x27bd0690  addiu       $sp, $sp, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1680));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A5D0u;
}
} // namespace gh_r802
