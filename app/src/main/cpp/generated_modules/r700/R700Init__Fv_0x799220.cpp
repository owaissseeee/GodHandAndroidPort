#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r700_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r700
{
// Function: R700Init__Fv
// Address: 0x799220 - 0x7999d0
void R700Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R700Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799278u: goto label_799278;
        case 0x7992b8u: goto label_7992b8;
        case 0x7992d8u: goto label_7992d8;
        case 0x799308u: goto label_799308;
        case 0x799350u: goto label_799350;
        case 0x799364u: goto label_799364;
        case 0x799378u: goto label_799378;
        case 0x799398u: goto label_799398;
        case 0x7993b8u: goto label_7993b8;
        case 0x7993d8u: goto label_7993d8;
        case 0x7993e4u: goto label_7993e4;
        case 0x7993f0u: goto label_7993f0;
        case 0x799400u: goto label_799400;
        case 0x79940cu: goto label_79940c;
        case 0x79941cu: goto label_79941c;
        case 0x799420u: goto label_799420;
        case 0x799430u: goto label_799430;
        case 0x799450u: goto label_799450;
        case 0x79945cu: goto label_79945c;
        case 0x799470u: goto label_799470;
        case 0x7994a8u: goto label_7994a8;
        case 0x7994c8u: goto label_7994c8;
        case 0x7994d0u: goto label_7994d0;
        case 0x7994f8u: goto label_7994f8;
        case 0x799538u: goto label_799538;
        case 0x799548u: goto label_799548;
        case 0x799574u: goto label_799574;
        case 0x799590u: goto label_799590;
        case 0x799598u: goto label_799598;
        case 0x7995b0u: goto label_7995b0;
        case 0x799608u: goto label_799608;
        case 0x79963cu: goto label_79963c;
        case 0x79964cu: goto label_79964c;
        case 0x799668u: goto label_799668;
        case 0x799684u: goto label_799684;
        case 0x799690u: goto label_799690;
        case 0x7996b8u: goto label_7996b8;
        case 0x7996d8u: goto label_7996d8;
        case 0x799708u: goto label_799708;
        case 0x799718u: goto label_799718;
        case 0x799748u: goto label_799748;
        case 0x799760u: goto label_799760;
        case 0x799774u: goto label_799774;
        case 0x7997b0u: goto label_7997b0;
        case 0x7997d8u: goto label_7997d8;
        case 0x799808u: goto label_799808;
        case 0x799878u: goto label_799878;
        case 0x7998f0u: goto label_7998f0;
        case 0x799910u: goto label_799910;
        case 0x799928u: goto label_799928;
        case 0x799950u: goto label_799950;
        case 0x799980u: goto label_799980;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x799224: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799228: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x79922c: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x79922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x799230: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799230u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799234: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x799234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x799238: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x799238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x79923c: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x79923cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
    // 0x799240: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x799240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x799244: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x799244u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799248: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x799248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x79924c: 0x3c14005d  lui         $s4, 0x5D
    ctx->pc = 0x79924cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)93 << 16));
    // 0x799250: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x799250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x799254: 0x3c15005f  lui         $s5, 0x5F
    ctx->pc = 0x799254u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)95 << 16));
    // 0x799258: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x799258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x79925c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x79925cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x799260: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x799260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x799264: 0xe7b70128  swc1        $f23, 0x128($sp)
    ctx->pc = 0x799264u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x799268: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x799268u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x79926c: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x79926cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x799270: 0xc1e6460  jal         func_799180
    ctx->pc = 0x799270u;
    SET_GPR_U32(ctx, 31, 0x799278u);
    ctx->pc = 0x799274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799270u;
    // 0x799274: 0xe7b40110  swc1        $f20, 0x110($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799270u, 0x799278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799278u;
label_799278:
    // 0x799278: 0xae02c550  sw          $v0, -0x3AB0($s0)
    ctx->pc = 0x799278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952272), GPR_U32(ctx, 2));
    // 0x79927c: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79927cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799280: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x799280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x799284: 0x2467c1e8  addiu       $a3, $v1, -0x3E18
    ctx->pc = 0x799284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951400));
    // 0x799288: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x799288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x79928c: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x79928cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x799290: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x799290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x799294: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x799294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x799298: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x799298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79929c: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x79929cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7992a0: 0xb3a5001f  sdl         $a1, 0x1F($sp)
    ctx->pc = 0x7992a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7992a4: 0xb7a50018  sdr         $a1, 0x18($sp)
    ctx->pc = 0x7992a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7992a8: 0x24564c38  addiu       $s6, $v0, 0x4C38
    ctx->pc = 0x7992a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 19512));
    // 0x7992ac: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x7992acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992b0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x7992b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7992b4: 0x0  nop
    ctx->pc = 0x7992b4u;
    // NOP
label_7992b8:
    // 0x7992b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x7992b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7992bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7992bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992c0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x7992c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7992c4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7992C4u;
    {
        const bool branch_taken_0x7992c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992C4u;
        // 0x7992c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992c4) {
            ctx->pc = 0x799300u;
            goto label_799300;
        }
    }
    ctx->pc = 0x7992CCu;
    // 0x7992cc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7992ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992d0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7992d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7992d4: 0x0  nop
    ctx->pc = 0x7992d4u;
    // NOP
label_7992d8:
    // 0x7992d8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7992dc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7992e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7992e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7992e4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7992e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x7992e8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7992e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7992ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7992ECu;
    {
        const bool branch_taken_0x7992ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992ECu;
        // 0x7992f0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992ec) {
            ctx->pc = 0x799300u;
            goto label_799300;
        }
    }
    ctx->pc = 0x7992F4u;
    // 0x7992f4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7992f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7992f8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7992F8u;
    {
        const bool branch_taken_0x7992f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7992f8) {
            ctx->pc = 0x7992FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7992F8u;
            // 0x7992fc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7992D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7992d8;
        }
    }
    ctx->pc = 0x799300u;
label_799300:
    // 0x799300: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x799300u;
    SET_GPR_U32(ctx, 31, 0x799308u);
    ctx->pc = 0x799304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799300u;
    // 0x799304: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799300u, 0x799308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799308u;
label_799308:
    // 0x799308: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x799308u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79930c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79930Cu;
    {
        const bool branch_taken_0x79930c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79930Cu;
        // 0x799310: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79930c) {
            ctx->pc = 0x799320u;
            goto label_799320;
        }
    }
    ctx->pc = 0x799314u;
    // 0x799314: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x799314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x799318: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x799318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x79931c: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x79931cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
label_799320:
    // 0x799320: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x799320u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x799324: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x799324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x799328: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x799328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x79932c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x79932Cu;
    {
        const bool branch_taken_0x79932c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79932Cu;
        // 0x799330: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79932c) {
            ctx->pc = 0x7992B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7992b8;
        }
    }
    ctx->pc = 0x799334u;
    // 0x799334: 0x26b08658  addiu       $s0, $s5, -0x79A8
    ctx->pc = 0x799334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936152));
    // 0x799338: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x799338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x79933c: 0x2451ea60  addiu       $s1, $v0, -0x15A0
    ctx->pc = 0x79933cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
    // 0x799340: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x799340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x799344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799348: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799348u;
    SET_GPR_U32(ctx, 31, 0x799350u);
    ctx->pc = 0x79934Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799348u;
    // 0x79934c: 0x2692ae50  addiu       $s2, $s4, -0x51B0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799348u, 0x799350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799350u;
label_799350:
    // 0x799350: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x799350u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799358: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x799358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79935c: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79935Cu;
    SET_GPR_U32(ctx, 31, 0x799364u);
    ctx->pc = 0x799360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79935Cu;
    // 0x799360: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79935Cu, 0x799364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799364u;
label_799364:
    // 0x799364: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x799364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x799368: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79936c: 0x8c64d6e8  lw          $a0, -0x2918($v1)
    ctx->pc = 0x79936cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x799370: 0xc04fccc  jal         func_13F330
    ctx->pc = 0x799370u;
    SET_GPR_U32(ctx, 31, 0x799378u);
    ctx->pc = 0x799374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799370u;
    // 0x799374: 0x24841e90  addiu       $a0, $a0, 0x1E90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F330u, 0x799370u, 0x799378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799378u;
label_799378:
    // 0x799378: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799378u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x79937c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79937cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799380: 0x24e7b158  addiu       $a3, $a3, -0x4EA8
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947160));
    // 0x799384: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x799384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x799388: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79938c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79938cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799390: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x799390u;
    SET_GPR_U32(ctx, 31, 0x799398u);
    ctx->pc = 0x799394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799390u;
    // 0x799394: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799390u, 0x799398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799398u;
label_799398:
    // 0x799398: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799398u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x79939c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79939cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993a0: 0x24e7b540  addiu       $a3, $a3, -0x4AC0
    ctx->pc = 0x7993a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948160));
    // 0x7993a4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x7993a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x7993a8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7993a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7993ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7993acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993b0: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x7993B0u;
    SET_GPR_U32(ctx, 31, 0x7993B8u);
    ctx->pc = 0x7993B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993B0u;
    // 0x7993b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x7993B0u, 0x7993B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993B8u;
label_7993b8:
    // 0x7993b8: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x7993b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x7993bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7993bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993c0: 0x24e7b4f0  addiu       $a3, $a3, -0x4B10
    ctx->pc = 0x7993c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948080));
    // 0x7993c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7993c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993c8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7993c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7993cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7993ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993d0: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x7993D0u;
    SET_GPR_U32(ctx, 31, 0x7993D8u);
    ctx->pc = 0x7993D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993D0u;
    // 0x7993d4: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x7993D0u, 0x7993D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993D8u;
label_7993d8:
    // 0x7993d8: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x7993d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x7993dc: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x7993DCu;
    SET_GPR_U32(ctx, 31, 0x7993E4u);
    ctx->pc = 0x7993E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993DCu;
    // 0x7993e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7993DCu, 0x7993E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993E4u;
label_7993e4:
    // 0x7993e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7993e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7993e8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x7993E8u;
    SET_GPR_U32(ctx, 31, 0x7993F0u);
    ctx->pc = 0x7993ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993E8u;
    // 0x7993ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7993E8u, 0x7993F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993F0u;
label_7993f0:
    // 0x7993f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7993f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7993f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7993f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993f8: 0xc04cccc  jal         func_133330
    ctx->pc = 0x7993F8u;
    SET_GPR_U32(ctx, 31, 0x799400u);
    ctx->pc = 0x7993FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993F8u;
    // 0x7993fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x7993F8u, 0x799400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799400u;
label_799400:
    // 0x799400: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799404: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799404u;
    SET_GPR_U32(ctx, 31, 0x79940Cu);
    ctx->pc = 0x799408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799404u;
    // 0x799408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799404u, 0x79940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79940Cu;
label_79940c:
    // 0x79940c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79940cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799410: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799414: 0xc04cccc  jal         func_133330
    ctx->pc = 0x799414u;
    SET_GPR_U32(ctx, 31, 0x79941Cu);
    ctx->pc = 0x799418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799414u;
    // 0x799418: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x799414u, 0x79941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79941Cu;
label_79941c:
    // 0x79941c: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x79941cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_799420:
    // 0x799420: 0x3265ffff  andi        $a1, $s3, 0xFFFF
    ctx->pc = 0x799420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x799424: 0x24c4ea60  addiu       $a0, $a2, -0x15A0
    ctx->pc = 0x799424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
    // 0x799428: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x799428u;
    SET_GPR_U32(ctx, 31, 0x799430u);
    ctx->pc = 0x79942Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799428u;
    // 0x79942c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x799428u, 0x799430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799430u;
label_799430:
    // 0x799430: 0x2a62000f  slti        $v0, $s3, 0xF
    ctx->pc = 0x799430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x799434: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x799434u;
    {
        const bool branch_taken_0x799434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799434u;
        // 0x799438: 0x3c060060  lui         $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799434) {
            ctx->pc = 0x799420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799420;
        }
    }
    ctx->pc = 0x79943Cu;
    // 0x79943c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79943cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799440: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x799440u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799444: 0x2450c100  addiu       $s0, $v0, -0x3F00
    ctx->pc = 0x799444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951168));
    // 0x799448: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x799448u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79C100u));
    // 0x79944c: 0x0  nop
    ctx->pc = 0x79944cu;
    // NOP
label_799450:
    // 0x799450: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799454: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799454u;
    SET_GPR_U32(ctx, 31, 0x79945Cu);
    ctx->pc = 0x799458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799454u;
    // 0x799458: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799454u, 0x79945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79945Cu;
label_79945c:
    // 0x79945c: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x79945cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799460: 0x2684ae50  addiu       $a0, $s4, -0x51B0
    ctx->pc = 0x799460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946384));
    // 0x799464: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799468: 0xc04cccc  jal         func_133330
    ctx->pc = 0x799468u;
    SET_GPR_U32(ctx, 31, 0x799470u);
    ctx->pc = 0x79946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799468u;
    // 0x79946c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x799468u, 0x799470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799470u;
label_799470:
    // 0x799470: 0x663fff7  bgezl       $s3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799470u;
    {
        const bool branch_taken_0x799470 = (GPR_S64(ctx, 19) >= 0);
        if (branch_taken_0x799470) {
            ctx->pc = 0x799474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799470u;
            // 0x799474: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799450;
        }
    }
    ctx->pc = 0x799478u;
    // 0x799478: 0x8ea38658  lw          $v1, -0x79A8($s5)
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936152)));
    // 0x79947c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x79947cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x799480: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x799480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799484: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x799484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x799488: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x799488u;
    {
        const bool branch_taken_0x799488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799488u;
        // 0x79948c: 0x26a48658  addiu       $a0, $s5, -0x79A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799488) {
            ctx->pc = 0x799698u;
            goto label_799698;
        }
    }
    ctx->pc = 0x799490u;
    // 0x799490: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x799490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x799494: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x799494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x799498: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x799498u;
    {
        const bool branch_taken_0x799498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799498u;
        // 0x79949c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799498) {
            ctx->pc = 0x799568u;
            goto label_799568;
        }
    }
    ctx->pc = 0x7994A0u;
    // 0x7994a0: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x7994A0u;
    SET_GPR_U32(ctx, 31, 0x7994A8u);
    ctx->pc = 0x7994A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994A0u;
    // 0x7994a4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x7994A0u, 0x7994A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994A8u;
label_7994a8:
    // 0x7994a8: 0x24140005  addiu       $s4, $zero, 0x5
    ctx->pc = 0x7994a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7994ac: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x7994acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x7994b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x7994b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x7994b4: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x7994b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7994b8: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x7994b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7994bc: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x7994bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7994c0: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x7994c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994c4: 0x0  nop
    ctx->pc = 0x7994c4u;
    // NOP
label_7994c8:
    // 0x7994c8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x7994C8u;
    SET_GPR_U32(ctx, 31, 0x7994D0u);
    ctx->pc = 0x7994CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994C8u;
    // 0x7994cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x7994C8u, 0x7994D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994D0u;
label_7994d0:
    // 0x7994d0: 0x54001b  divu        $zero, $v0, $s4
    ctx->pc = 0x7994d0u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x7994d4: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7994D4u;
    {
        const bool branch_taken_0x7994d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x7994d4) {
            ctx->pc = 0x7994D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7994D4u;
            // 0x7994d8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7994DCu;
            goto label_7994dc;
        }
    }
    ctx->pc = 0x7994DCu;
label_7994dc:
    // 0x7994dc: 0x1810  mfhi        $v1
    ctx->pc = 0x7994dcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x7994e0: 0x1a60000b  blez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x7994E0u;
    {
        const bool branch_taken_0x7994e0 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x7994E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994E0u;
        // 0x7994e4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994e0) {
            ctx->pc = 0x799510u;
            goto label_799510;
        }
    }
    ctx->pc = 0x7994E8u;
    // 0x7994e8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x7994e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x7994ec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7994ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7994f0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x7994f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x7994f4: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x7994f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_7994f8:
    // 0x7994f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x7994f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7994fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x7994fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x799500: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x799504: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x799504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x799508: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799508u;
    {
        const bool branch_taken_0x799508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799508u;
        // 0x79950c: 0xc2800a  movz        $s0, $a2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799508) {
            ctx->pc = 0x7994F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994f8;
        }
    }
    ctx->pc = 0x799510u;
label_799510:
    // 0x799510: 0x121effed  beq         $s0, $fp, . + 4 + (-0x13 << 2)
    ctx->pc = 0x799510u;
    {
        const bool branch_taken_0x799510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 30));
        if (branch_taken_0x799510) {
            ctx->pc = 0x7994C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994c8;
        }
    }
    ctx->pc = 0x799518u;
    // 0x799518: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x799518u;
    {
        const bool branch_taken_0x799518 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x79951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799518u;
        // 0x79951c: 0x26a48658  addiu       $a0, $s5, -0x79A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799518) {
            ctx->pc = 0x799530u;
            goto label_799530;
        }
    }
    ctx->pc = 0x799520u;
    // 0x799520: 0x12770007  beq         $s3, $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x799520u;
    {
        const bool branch_taken_0x799520 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 23));
        if (branch_taken_0x799520) {
            ctx->pc = 0x799540u;
            goto label_799540;
        }
    }
    ctx->pc = 0x799528u;
    // 0x799528: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x799528u;
    {
        const bool branch_taken_0x799528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799528u;
        // 0x79952c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799528) {
            ctx->pc = 0x799554u;
            goto label_799554;
        }
    }
    ctx->pc = 0x799530u;
label_799530:
    // 0x799530: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799530u;
    SET_GPR_U32(ctx, 31, 0x799538u);
    ctx->pc = 0x799534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799530u;
    // 0x799534: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799530u, 0x799538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799538u;
label_799538:
    // 0x799538: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x799538u;
    {
        const bool branch_taken_0x799538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799538u;
        // 0x79953c: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799538) {
            ctx->pc = 0x79954Cu;
            goto label_79954c;
        }
    }
    ctx->pc = 0x799540u;
label_799540:
    // 0x799540: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799540u;
    SET_GPR_U32(ctx, 31, 0x799548u);
    ctx->pc = 0x799544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799540u;
    // 0x799544: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799540u, 0x799548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799548u;
label_799548:
    // 0x799548: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x799548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_79954c:
    // 0x79954c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x79954cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x799550: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x799550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_799554:
    // 0x799554: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x799554u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x799558: 0x1676ffdb  bne         $s3, $s6, . + 4 + (-0x25 << 2)
    ctx->pc = 0x799558u;
    {
        const bool branch_taken_0x799558 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 22));
        ctx->pc = 0x79955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799558u;
        // 0x79955c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799558) {
            ctx->pc = 0x7994C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994c8;
        }
    }
    ctx->pc = 0x799560u;
    // 0x799560: 0x26a48658  addiu       $a0, $s5, -0x79A8
    ctx->pc = 0x799560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936152));
    // 0x799564: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799568:
    // 0x799568: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x799568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79956c: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79956Cu;
    SET_GPR_U32(ctx, 31, 0x799574u);
    ctx->pc = 0x799570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79956Cu;
    // 0x799570: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79956Cu, 0x799574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799574u;
label_799574:
    // 0x799574: 0x3c168000  lui         $s6, 0x8000
    ctx->pc = 0x799574u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32768 << 16));
    // 0x799578: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79957c: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x79957cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x799580: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799584: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x799584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x799588: 0x2454c118  addiu       $s4, $v0, -0x3EE8
    ctx->pc = 0x799588u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951192));
    // 0x79958c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79958cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799590:
    // 0x799590: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799590u;
    SET_GPR_U32(ctx, 31, 0x799598u);
    ctx->pc = 0x799594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799590u;
    // 0x799594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799590u, 0x799598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799598u;
label_799598:
    // 0x799598: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79959c: 0x1263002b  beq         $s3, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x79959Cu;
    {
        const bool branch_taken_0x79959c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x7995A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79959Cu;
        // 0x7995a0: 0x26720001  addiu       $s2, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79959c) {
            ctx->pc = 0x79964Cu;
            goto label_79964c;
        }
    }
    ctx->pc = 0x7995A4u;
    // 0x7995a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7995a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995a8: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x7995A8u;
    SET_GPR_U32(ctx, 31, 0x7995B0u);
    ctx->pc = 0x7995ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995A8u;
    // 0x7995ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x7995A8u, 0x7995B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995B0u;
label_7995b0:
    // 0x7995b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7995b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7995b4: 0x12630025  beq         $s3, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x7995B4u;
    {
        const bool branch_taken_0x7995b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x7995B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995B4u;
        // 0x7995b8: 0x132142  srl         $a0, $s3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995b4) {
            ctx->pc = 0x79964Cu;
            goto label_79964c;
        }
    }
    ctx->pc = 0x7995BCu;
    // 0x7995bc: 0x3265001f  andi        $a1, $s3, 0x1F
    ctx->pc = 0x7995bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)31);
    // 0x7995c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x7995c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x7995c4: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x7995c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x7995c8: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x7995c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x7995cc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x7995ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x7995d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x7995d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7995d4: 0xb62806  srlv        $a1, $s6, $a1
    ctx->pc = 0x7995d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 22), GPR_U32(ctx, 5) & 0x1F));
    // 0x7995d8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x7995d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7995dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7995dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995e0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x7995e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x7995e4: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x7995e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x7995e8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x7995e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x7995ec: 0x24494c58  addiu       $t1, $v0, 0x4C58
    ctx->pc = 0x7995ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x7995f0: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x7995f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x7995f4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7995F4u;
    {
        const bool branch_taken_0x7995f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F4u;
        // 0x7995f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995f4) {
            ctx->pc = 0x799630u;
            goto label_799630;
        }
    }
    ctx->pc = 0x7995FCu;
    // 0x7995fc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x7995fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799600: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x799600u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x799604: 0x0  nop
    ctx->pc = 0x799604u;
    // NOP
label_799608:
    // 0x799608: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x799608u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x79960c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79960cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799610: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x799610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x799614: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799618: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x799618u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79961c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79961Cu;
    {
        const bool branch_taken_0x79961c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79961Cu;
        // 0x799620: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79961c) {
            ctx->pc = 0x799630u;
            goto label_799630;
        }
    }
    ctx->pc = 0x799624u;
    // 0x799624: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x799624u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x799628: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799628u;
    {
        const bool branch_taken_0x799628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799628) {
            ctx->pc = 0x79962Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799628u;
            // 0x79962c: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799608;
        }
    }
    ctx->pc = 0x799630u;
label_799630:
    // 0x799630: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x799630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799634: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799634u;
    SET_GPR_U32(ctx, 31, 0x79963Cu);
    ctx->pc = 0x799638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799634u;
    // 0x799638: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799634u, 0x79963Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79963Cu;
label_79963c:
    // 0x79963c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79963Cu;
    {
        const bool branch_taken_0x79963c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79963Cu;
        // 0x799640: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79963c) {
            ctx->pc = 0x79964Cu;
            goto label_79964c;
        }
    }
    ctx->pc = 0x799644u;
    // 0x799644: 0xc05ce08  jal         func_173820
    ctx->pc = 0x799644u;
    SET_GPR_U32(ctx, 31, 0x79964Cu);
    ctx->pc = 0x799648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799644u;
    // 0x799648: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173820u, 0x799644u, 0x79964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79964Cu;
label_79964c:
    // 0x79964c: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x79964cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799650: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x799650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x799654: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x799654u;
    {
        const bool branch_taken_0x799654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799654u;
        // 0x799658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799654) {
            ctx->pc = 0x799590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799590;
        }
    }
    ctx->pc = 0x79965Cu;
    // 0x79965c: 0x26a48658  addiu       $a0, $s5, -0x79A8
    ctx->pc = 0x79965cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936152));
    // 0x799660: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799660u;
    SET_GPR_U32(ctx, 31, 0x799668u);
    ctx->pc = 0x799664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799660u;
    // 0x799664: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799660u, 0x799668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799668u;
label_799668:
    // 0x799668: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x799668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x79966c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x79966cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x799670: 0x2470ea60  addiu       $s0, $v1, -0x15A0
    ctx->pc = 0x799670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961760));
    // 0x799674: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x799674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79967c: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x79967Cu;
    SET_GPR_U32(ctx, 31, 0x799684u);
    ctx->pc = 0x799680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79967Cu;
    // 0x799680: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79967Cu, 0x799684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799684u;
label_799684:
    // 0x799684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799688: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x799688u;
    SET_GPR_U32(ctx, 31, 0x799690u);
    ctx->pc = 0x79968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799688u;
    // 0x79968c: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x799688u, 0x799690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799690u;
label_799690:
    // 0x799690: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x799690u;
    {
        const bool branch_taken_0x799690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799690u;
        // 0x799694: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799690) {
            ctx->pc = 0x79987Cu;
            goto label_79987c;
        }
    }
    ctx->pc = 0x799698u;
label_799698:
    // 0x799698: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79969c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79969cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x7996a0: 0x24514c58  addiu       $s1, $v0, 0x4C58
    ctx->pc = 0x7996a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x7996a4: 0x2470c118  addiu       $s0, $v1, -0x3EE8
    ctx->pc = 0x7996a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951192));
    // 0x7996a8: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x7996a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x7996ac: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x7996acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x7996b0: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x7996b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7996b4: 0x0  nop
    ctx->pc = 0x7996b4u;
    // NOP
label_7996b8:
    // 0x7996b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x7996b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7996bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7996bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996c0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x7996c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7996c4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7996C4u;
    {
        const bool branch_taken_0x7996c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996C4u;
        // 0x7996c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996c4) {
            ctx->pc = 0x799700u;
            goto label_799700;
        }
    }
    ctx->pc = 0x7996CCu;
    // 0x7996cc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7996ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996d0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7996d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7996d4: 0x0  nop
    ctx->pc = 0x7996d4u;
    // NOP
label_7996d8:
    // 0x7996d8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7996d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7996dc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7996dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7996e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7996e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7996e4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7996e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x7996e8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7996e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7996ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7996ECu;
    {
        const bool branch_taken_0x7996ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996ECu;
        // 0x7996f0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996ec) {
            ctx->pc = 0x799700u;
            goto label_799700;
        }
    }
    ctx->pc = 0x7996F4u;
    // 0x7996f4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7996f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7996f8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7996F8u;
    {
        const bool branch_taken_0x7996f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7996f8) {
            ctx->pc = 0x7996FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7996F8u;
            // 0x7996fc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7996D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7996d8;
        }
    }
    ctx->pc = 0x799700u;
label_799700:
    // 0x799700: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799700u;
    SET_GPR_U32(ctx, 31, 0x799708u);
    ctx->pc = 0x799704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799700u;
    // 0x799704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799700u, 0x799708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799708u;
label_799708:
    // 0x799708: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799708u;
    {
        const bool branch_taken_0x799708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799708u;
        // 0x79970c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799708) {
            ctx->pc = 0x799718u;
            goto label_799718;
        }
    }
    ctx->pc = 0x799710u;
    // 0x799710: 0xc05ce08  jal         func_173820
    ctx->pc = 0x799710u;
    SET_GPR_U32(ctx, 31, 0x799718u);
    ctx->pc = 0x799714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799710u;
    // 0x799714: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173820u, 0x799710u, 0x799718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799718u;
label_799718:
    // 0x799718: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x799718u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x79971c: 0x661ffe6  bgez        $s3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x79971Cu;
    {
        const bool branch_taken_0x79971c = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x799720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79971Cu;
        // 0x799720: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79971c) {
            ctx->pc = 0x7996B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7996b8;
        }
    }
    ctx->pc = 0x799724u;
    // 0x799724: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799728: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x799728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x79972c: 0x2490ea60  addiu       $s0, $a0, -0x15A0
    ctx->pc = 0x79972cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x799730: 0x3c01c0e0  lui         $at, 0xC0E0
    ctx->pc = 0x799730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49376 << 16));
    // 0x799734: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x799734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x799738: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x799738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x79973c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x79973cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x799740: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x799740u;
    SET_GPR_U32(ctx, 31, 0x799748u);
    ctx->pc = 0x799744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799740u;
    // 0x799744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x799740u, 0x799748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799748u;
label_799748:
    // 0x799748: 0x3c014245  lui         $at, 0x4245
    ctx->pc = 0x799748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16965 << 16));
    // 0x79974c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x79974cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x799750: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x799754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799758: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799758u;
    SET_GPR_U32(ctx, 31, 0x799760u);
    ctx->pc = 0x79975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799758u;
    // 0x79975c: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799758u, 0x799760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799760u;
label_799760:
    // 0x799760: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799764: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799768: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79976c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79976Cu;
    SET_GPR_U32(ctx, 31, 0x799774u);
    ctx->pc = 0x799770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79976Cu;
    // 0x799770: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79976Cu, 0x799774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799774u;
label_799774:
    // 0x799774: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x799774u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799778: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x799778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79977c: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79977cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799780: 0x24544c38  addiu       $s4, $v0, 0x4C38
    ctx->pc = 0x799780u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19512));
    // 0x799784: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x799784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x799788: 0x2462c218  addiu       $v0, $v1, -0x3DE8
    ctx->pc = 0x799788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951448));
    // 0x79978c: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x79978cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x799790: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x799790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x799794: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x799794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x799798: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x799798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x79979c: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x79979cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7997a0: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x7997a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7997a4: 0xb3a6003f  sdl         $a2, 0x3F($sp)
    ctx->pc = 0x7997a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7997a8: 0xb7a60038  sdr         $a2, 0x38($sp)
    ctx->pc = 0x7997a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7997ac: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x7997acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_7997b0:
    // 0x7997b0: 0x26720001  addiu       $s2, $s3, 0x1
    ctx->pc = 0x7997b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x7997b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7997b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7997b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997bc: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x7997bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x7997c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7997c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7997c4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x7997c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7997c8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7997C8u;
    {
        const bool branch_taken_0x7997c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997C8u;
        // 0x7997cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997c8) {
            ctx->pc = 0x799800u;
            goto label_799800;
        }
    }
    ctx->pc = 0x7997D0u;
    // 0x7997d0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7997d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997d4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7997d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7997d8:
    // 0x7997d8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7997d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7997dc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7997dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7997e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7997e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7997e4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7997e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x7997e8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7997e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7997ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7997ECu;
    {
        const bool branch_taken_0x7997ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997ECu;
        // 0x7997f0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997ec) {
            ctx->pc = 0x799800u;
            goto label_799800;
        }
    }
    ctx->pc = 0x7997F4u;
    // 0x7997f4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7997f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7997f8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7997F8u;
    {
        const bool branch_taken_0x7997f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7997f8) {
            ctx->pc = 0x7997FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7997F8u;
            // 0x7997fc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7997D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7997d8;
        }
    }
    ctx->pc = 0x799800u;
label_799800:
    // 0x799800: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x799800u;
    SET_GPR_U32(ctx, 31, 0x799808u);
    ctx->pc = 0x799804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799800u;
    // 0x799804: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799800u, 0x799808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799808u;
label_799808:
    // 0x799808: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x799808u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79980c: 0x2d11021  addu        $v0, $s6, $s1
    ctx->pc = 0x79980cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x799810: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x799810u;
    {
        const bool branch_taken_0x799810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799810u;
        // 0x799814: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799810) {
            ctx->pc = 0x799848u;
            goto label_799848;
        }
    }
    ctx->pc = 0x799818u;
    // 0x799818: 0xe7b70050  swc1        $f23, 0x50($sp)
    ctx->pc = 0x799818u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x79981c: 0xe6160004  swc1        $f22, 0x4($s0)
    ctx->pc = 0x79981cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x799820: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x799820u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x799824: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x799824u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x799828: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x799828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x79982c: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79982Cu;
    {
        const bool branch_taken_0x79982c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x799830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79982Cu;
        // 0x799830: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79982c) {
            ctx->pc = 0x799848u;
            goto label_799848;
        }
    }
    ctx->pc = 0x799834u;
    // 0x799834: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x799834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x799838: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x799838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79983c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79983cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x799840: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x799840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799844: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x799844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_799848:
    // 0x799848: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x799848u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79984c: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x79984cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x799850: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x799850u;
    {
        const bool branch_taken_0x799850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799850u;
        // 0x799854: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799850) {
            ctx->pc = 0x7997B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7997b0;
        }
    }
    ctx->pc = 0x799858u;
    // 0x799858: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x799858u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x79985c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79985cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799860: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799864: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799868: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79986c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79986cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799870: 0xc0c194a  jal         func_306528
    ctx->pc = 0x799870u;
    SET_GPR_U32(ctx, 31, 0x799878u);
    ctx->pc = 0x799874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799870u;
    // 0x799874: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x799870u, 0x799878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799878u;
label_799878:
    // 0x799878: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_79987c:
    // 0x79987c: 0x3c04efff  lui         $a0, 0xEFFF
    ctx->pc = 0x79987cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61439 << 16));
    // 0x799880: 0x8c66d6e8  lw          $a2, -0x2918($v1)
    ctx->pc = 0x799880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956776)));
    // 0x799884: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x799884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x799888: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x799888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x79988c: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x79988cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x799890: 0x8cc21f20  lw          $v0, 0x1F20($a2)
    ctx->pc = 0x799890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 7968)));
    // 0x799894: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x799894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x799898: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79989c: 0xacc21f20  sw          $v0, 0x1F20($a2)
    ctx->pc = 0x79989cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7968), GPR_U32(ctx, 2));
    // 0x7998a0: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x7998a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x7998a4: 0x8cc37a8c  lw          $v1, 0x7A8C($a2)
    ctx->pc = 0x7998a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A8Cu));
    // 0x7998a8: 0x8ea28658  lw          $v0, -0x79A8($s5)
    ctx->pc = 0x7998a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936152)));
    // 0x7998ac: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x7998acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7998b0: 0xacc47a8c  sw          $a0, 0x7A8C($a2)
    ctx->pc = 0x7998b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 31372), GPR_U32(ctx, 4));
    // 0x7998b4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x7998b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7998b8: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x7998b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x7998bc: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x7998BCu;
    {
        const bool branch_taken_0x7998bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998BCu;
        // 0x7998c0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998bc) {
            ctx->pc = 0x7998F8u;
            goto label_7998f8;
        }
    }
    ctx->pc = 0x7998C4u;
    // 0x7998c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7998c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7998c8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7998C8u;
    {
        const bool branch_taken_0x7998c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7998CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998C8u;
        // 0x7998cc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998c8) {
            ctx->pc = 0x7998FCu;
            goto label_7998fc;
        }
    }
    ctx->pc = 0x7998D0u;
    // 0x7998d0: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x7998d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x7998d4: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x7998d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x7998d8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7998d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7998dc: 0xacc27a8c  sw          $v0, 0x7A8C($a2)
    ctx->pc = 0x7998dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 31372), GPR_U32(ctx, 2));
    // 0x7998e0: 0x8ce42f84  lw          $a0, 0x2F84($a3)
    ctx->pc = 0x7998e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x7998e4: 0x24a59fa8  addiu       $a1, $a1, -0x6058
    ctx->pc = 0x7998e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942632));
    // 0x7998e8: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7998E8u;
    SET_GPR_U32(ctx, 31, 0x7998F0u);
    ctx->pc = 0x7998ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998E8u;
    // 0x7998ec: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7998E8u, 0x7998F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998F0u;
label_7998f0:
    // 0x7998f0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x7998F0u;
    {
        const bool branch_taken_0x7998f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998F0u;
        // 0x7998f4: 0x3c04007a  lui         $a0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998f0) {
            ctx->pc = 0x79992Cu;
            goto label_79992c;
        }
    }
    ctx->pc = 0x7998F8u;
label_7998f8:
    // 0x7998f8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7998f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_7998fc:
    // 0x7998fc: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7998fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799900: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x799904: 0x24a59a90  addiu       $a1, $a1, -0x6570
    ctx->pc = 0x799904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941328));
    // 0x799908: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799908u;
    SET_GPR_U32(ctx, 31, 0x799910u);
    ctx->pc = 0x79990Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799908u;
    // 0x79990c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799908u, 0x799910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799910u;
label_799910:
    // 0x799910: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x799914: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799918: 0x8c642f84  lw          $a0, 0x2F84($v1)
    ctx->pc = 0x799918u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79991c: 0x24a59ce8  addiu       $a1, $a1, -0x6318
    ctx->pc = 0x79991cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941928));
    // 0x799920: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799920u;
    SET_GPR_U32(ctx, 31, 0x799928u);
    ctx->pc = 0x799924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799920u;
    // 0x799924: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799920u, 0x799928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799928u;
label_799928:
    // 0x799928: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79992c:
    // 0x79992c: 0x3c050075  lui         $a1, 0x75
    ctx->pc = 0x79992cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)117 << 16));
    // 0x799930: 0x24a84c58  addiu       $t0, $a1, 0x4C58
    ctx->pc = 0x799930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 19544));
    // 0x799934: 0x8082c228  lb          $v0, -0x3DD8($a0)
    ctx->pc = 0x799934u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294951464)));
    // 0x799938: 0x2483c228  addiu       $v1, $a0, -0x3DD8
    ctx->pc = 0x799938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951464));
    // 0x79993c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79993cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799940: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799940u;
    {
        const bool branch_taken_0x799940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799940u;
        // 0x799944: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799940) {
            ctx->pc = 0x799978u;
            goto label_799978;
        }
    }
    ctx->pc = 0x799948u;
    // 0x799948: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79994c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79994cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799950:
    // 0x799950: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799950u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799954: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799958: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79995c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79995cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799960: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799960u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799964: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799964u;
    {
        const bool branch_taken_0x799964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799964u;
        // 0x799968: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799964) {
            ctx->pc = 0x799978u;
            goto label_799978;
        }
    }
    ctx->pc = 0x79996Cu;
    // 0x79996c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79996cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799970: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799970u;
    {
        const bool branch_taken_0x799970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799970) {
            ctx->pc = 0x799974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799970u;
            // 0x799974: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799950;
        }
    }
    ctx->pc = 0x799978u;
label_799978:
    // 0x799978: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799978u;
    SET_GPR_U32(ctx, 31, 0x799980u);
    ctx->pc = 0x79997Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799978u;
    // 0x79997c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799978u, 0x799980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799980u;
label_799980:
    // 0x799980: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x799980u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799984: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x799984u;
    {
        const bool branch_taken_0x799984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799984u;
        // 0x799988: 0x24020908  addiu       $v0, $zero, 0x908 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799984) {
            ctx->pc = 0x799990u;
            goto label_799990;
        }
    }
    ctx->pc = 0x79998Cu;
    // 0x79998c: 0xac620560  sw          $v0, 0x560($v1)
    ctx->pc = 0x79998cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1376), GPR_U32(ctx, 2));
label_799990:
    // 0x799990: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x799990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x799994: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x799994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x799998: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x799998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79999c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x79999cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x7999a0: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x7999a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x7999a4: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x7999a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x7999a8: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x7999a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x7999ac: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x7999acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7999b0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x7999b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7999b4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x7999b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7999b8: 0xc7b70128  lwc1        $f23, 0x128($sp)
    ctx->pc = 0x7999b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x7999bc: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x7999bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x7999c0: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x7999c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x7999c4: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x7999c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7999c8: 0x3e00008  jr          $ra
    ctx->pc = 0x7999C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7999CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999C8u;
        // 0x7999cc: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7999C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7999D0u;
}
} // namespace gh_r700
