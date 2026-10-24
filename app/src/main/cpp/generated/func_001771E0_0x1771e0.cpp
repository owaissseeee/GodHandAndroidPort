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

// Function: func_001771E0
// Address: 0x1771e0 - 0x177488
void func_001771E0_0x1771e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001771E0_0x1771e0");
#endif

    switch (ctx->pc) {
        case 0x1771e0u: goto label_1771e0;
        case 0x1771e4u: goto label_1771e4;
        case 0x1771e8u: goto label_1771e8;
        case 0x1771ecu: goto label_1771ec;
        case 0x1771f0u: goto label_1771f0;
        case 0x1771f4u: goto label_1771f4;
        case 0x1771f8u: goto label_1771f8;
        case 0x1771fcu: goto label_1771fc;
        case 0x177200u: goto label_177200;
        case 0x177204u: goto label_177204;
        case 0x177208u: goto label_177208;
        case 0x17720cu: goto label_17720c;
        case 0x177210u: goto label_177210;
        case 0x177214u: goto label_177214;
        case 0x177218u: goto label_177218;
        case 0x17721cu: goto label_17721c;
        case 0x177220u: goto label_177220;
        case 0x177224u: goto label_177224;
        case 0x177228u: goto label_177228;
        case 0x17722cu: goto label_17722c;
        case 0x177230u: goto label_177230;
        case 0x177234u: goto label_177234;
        case 0x177238u: goto label_177238;
        case 0x17723cu: goto label_17723c;
        case 0x177240u: goto label_177240;
        case 0x177244u: goto label_177244;
        case 0x177248u: goto label_177248;
        case 0x17724cu: goto label_17724c;
        case 0x177250u: goto label_177250;
        case 0x177254u: goto label_177254;
        case 0x177258u: goto label_177258;
        case 0x17725cu: goto label_17725c;
        case 0x177260u: goto label_177260;
        case 0x177264u: goto label_177264;
        case 0x177268u: goto label_177268;
        case 0x17726cu: goto label_17726c;
        case 0x177270u: goto label_177270;
        case 0x177274u: goto label_177274;
        case 0x177278u: goto label_177278;
        case 0x17727cu: goto label_17727c;
        case 0x177280u: goto label_177280;
        case 0x177284u: goto label_177284;
        case 0x177288u: goto label_177288;
        case 0x17728cu: goto label_17728c;
        case 0x177290u: goto label_177290;
        case 0x177294u: goto label_177294;
        case 0x177298u: goto label_177298;
        case 0x17729cu: goto label_17729c;
        case 0x1772a0u: goto label_1772a0;
        case 0x1772a4u: goto label_1772a4;
        case 0x1772a8u: goto label_1772a8;
        case 0x1772acu: goto label_1772ac;
        case 0x1772b0u: goto label_1772b0;
        case 0x1772b4u: goto label_1772b4;
        case 0x1772b8u: goto label_1772b8;
        case 0x1772bcu: goto label_1772bc;
        case 0x1772c0u: goto label_1772c0;
        case 0x1772c4u: goto label_1772c4;
        case 0x1772c8u: goto label_1772c8;
        case 0x1772ccu: goto label_1772cc;
        case 0x1772d0u: goto label_1772d0;
        case 0x1772d4u: goto label_1772d4;
        case 0x1772d8u: goto label_1772d8;
        case 0x1772dcu: goto label_1772dc;
        case 0x1772e0u: goto label_1772e0;
        case 0x1772e4u: goto label_1772e4;
        case 0x1772e8u: goto label_1772e8;
        case 0x1772ecu: goto label_1772ec;
        case 0x1772f0u: goto label_1772f0;
        case 0x1772f4u: goto label_1772f4;
        case 0x1772f8u: goto label_1772f8;
        case 0x1772fcu: goto label_1772fc;
        case 0x177300u: goto label_177300;
        case 0x177304u: goto label_177304;
        case 0x177308u: goto label_177308;
        case 0x17730cu: goto label_17730c;
        case 0x177310u: goto label_177310;
        case 0x177314u: goto label_177314;
        case 0x177318u: goto label_177318;
        case 0x17731cu: goto label_17731c;
        case 0x177320u: goto label_177320;
        case 0x177324u: goto label_177324;
        case 0x177328u: goto label_177328;
        case 0x17732cu: goto label_17732c;
        case 0x177330u: goto label_177330;
        case 0x177334u: goto label_177334;
        case 0x177338u: goto label_177338;
        case 0x17733cu: goto label_17733c;
        case 0x177340u: goto label_177340;
        case 0x177344u: goto label_177344;
        case 0x177348u: goto label_177348;
        case 0x17734cu: goto label_17734c;
        case 0x177350u: goto label_177350;
        case 0x177354u: goto label_177354;
        case 0x177358u: goto label_177358;
        case 0x17735cu: goto label_17735c;
        case 0x177360u: goto label_177360;
        case 0x177364u: goto label_177364;
        case 0x177368u: goto label_177368;
        case 0x17736cu: goto label_17736c;
        case 0x177370u: goto label_177370;
        case 0x177374u: goto label_177374;
        case 0x177378u: goto label_177378;
        case 0x17737cu: goto label_17737c;
        case 0x177380u: goto label_177380;
        case 0x177384u: goto label_177384;
        case 0x177388u: goto label_177388;
        case 0x17738cu: goto label_17738c;
        case 0x177390u: goto label_177390;
        case 0x177394u: goto label_177394;
        case 0x177398u: goto label_177398;
        case 0x17739cu: goto label_17739c;
        case 0x1773a0u: goto label_1773a0;
        case 0x1773a4u: goto label_1773a4;
        case 0x1773a8u: goto label_1773a8;
        case 0x1773acu: goto label_1773ac;
        case 0x1773b0u: goto label_1773b0;
        case 0x1773b4u: goto label_1773b4;
        case 0x1773b8u: goto label_1773b8;
        case 0x1773bcu: goto label_1773bc;
        case 0x1773c0u: goto label_1773c0;
        case 0x1773c4u: goto label_1773c4;
        case 0x1773c8u: goto label_1773c8;
        case 0x1773ccu: goto label_1773cc;
        case 0x1773d0u: goto label_1773d0;
        case 0x1773d4u: goto label_1773d4;
        case 0x1773d8u: goto label_1773d8;
        case 0x1773dcu: goto label_1773dc;
        case 0x1773e0u: goto label_1773e0;
        case 0x1773e4u: goto label_1773e4;
        case 0x1773e8u: goto label_1773e8;
        case 0x1773ecu: goto label_1773ec;
        case 0x1773f0u: goto label_1773f0;
        case 0x1773f4u: goto label_1773f4;
        case 0x1773f8u: goto label_1773f8;
        case 0x1773fcu: goto label_1773fc;
        case 0x177400u: goto label_177400;
        case 0x177404u: goto label_177404;
        case 0x177408u: goto label_177408;
        case 0x17740cu: goto label_17740c;
        case 0x177410u: goto label_177410;
        case 0x177414u: goto label_177414;
        case 0x177418u: goto label_177418;
        case 0x17741cu: goto label_17741c;
        case 0x177420u: goto label_177420;
        case 0x177424u: goto label_177424;
        case 0x177428u: goto label_177428;
        case 0x17742cu: goto label_17742c;
        case 0x177430u: goto label_177430;
        case 0x177434u: goto label_177434;
        case 0x177438u: goto label_177438;
        case 0x17743cu: goto label_17743c;
        case 0x177440u: goto label_177440;
        case 0x177444u: goto label_177444;
        case 0x177448u: goto label_177448;
        case 0x17744cu: goto label_17744c;
        case 0x177450u: goto label_177450;
        case 0x177454u: goto label_177454;
        case 0x177458u: goto label_177458;
        case 0x17745cu: goto label_17745c;
        case 0x177460u: goto label_177460;
        case 0x177464u: goto label_177464;
        case 0x177468u: goto label_177468;
        case 0x17746cu: goto label_17746c;
        case 0x177470u: goto label_177470;
        case 0x177474u: goto label_177474;
        case 0x177478u: goto label_177478;
        case 0x17747cu: goto label_17747c;
        case 0x177480u: goto label_177480;
        case 0x177484u: goto label_177484;
        default: break;
    }

    ctx->pc = 0x1771e0u;

label_1771e0:
    // 0x1771e0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1771e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1771e4:
    // 0x1771e4: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1771e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_1771e8:
    // 0x1771e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1771e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1771ec:
    // 0x1771ec: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1771ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_1771f0:
    // 0x1771f0: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1771f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_1771f4:
    // 0x1771f4: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x1771f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_1771f8:
    // 0x1771f8: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x1771f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_1771fc:
    // 0x1771fc: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x1771fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_177200:
    // 0x177200: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x177200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_177204:
    // 0x177204: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x177204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_177208:
    // 0x177208: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x177208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_17720c:
    // 0x17720c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x17720cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_177210:
    // 0x177210: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x177210u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_177214:
    // 0x177214: 0xc06ddac  jal         func_1B76B0
label_177218:
    if (ctx->pc == 0x177218u) {
        ctx->pc = 0x177218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177214u;
        // 0x177218: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17721Cu;
        goto label_17721c;
    }
    ctx->pc = 0x177214u;
    SET_GPR_U32(ctx, 31, 0x17721Cu);
    ctx->pc = 0x177218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177214u;
    // 0x177218: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x177214u, 0x17721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17721Cu;
label_17721c:
    // 0x17721c: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_177220:
    if (ctx->pc == 0x177220u) {
        ctx->pc = 0x177220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17721Cu;
        // 0x177220: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177224u;
        goto label_177224;
    }
    ctx->pc = 0x17721Cu;
    {
        const bool branch_taken_0x17721c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17721Cu;
        // 0x177220: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17721c) {
            ctx->pc = 0x17744Cu;
            goto label_17744c;
        }
    }
    ctx->pc = 0x177224u;
label_177224:
    // 0x177224: 0x924302f4  lbu         $v1, 0x2F4($s2)
    ctx->pc = 0x177224u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
label_177228:
    // 0x177228: 0x244712b0  addiu       $a3, $v0, 0x12B0
    ctx->pc = 0x177228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
label_17722c:
    // 0x17722c: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x17722cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_177230:
    // 0x177230: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x177230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_177234:
    // 0x177234: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x177234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_177238:
    // 0x177238: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x177238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_17723c:
    // 0x17723c: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x17723cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_177240:
    // 0x177240: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x177240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_177244:
    // 0x177244: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x177244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_177248:
    // 0x177248: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x177248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17724c:
    // 0x17724c: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x17724cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_177250:
    // 0x177250: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x177250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_177254:
    // 0x177254: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x177254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_177258:
    // 0x177258: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x177258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17725c:
    // 0x17725c: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x17725cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_177260:
    // 0x177260: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x177260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_177264:
    // 0x177264: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x177264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_177268:
    // 0x177268: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x177268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17726c:
    // 0x17726c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17726cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_177270:
    // 0x177270: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x177270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_177274:
    // 0x177274: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x177274u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_177278:
    // 0x177278: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x177278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_17727c:
    // 0x17727c: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x17727cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_177280:
    // 0x177280: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_177284:
    if (ctx->pc == 0x177284u) {
        ctx->pc = 0x177284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177280u;
        // 0x177284: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177288u;
        goto label_177288;
    }
    ctx->pc = 0x177280u;
    {
        const bool branch_taken_0x177280 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x177284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177280u;
        // 0x177284: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177280) {
            ctx->pc = 0x1772B4u;
            goto label_1772b4;
        }
    }
    ctx->pc = 0x177288u;
label_177288:
    // 0x177288: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x177288u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_17728c:
    // 0x17728c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x17728cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_177290:
    // 0x177290: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x177290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_177294:
    // 0x177294: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x177294u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_177298:
    // 0x177298: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x177298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_17729c:
    // 0x17729c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17729cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1772a0:
    // 0x1772a0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1772a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1772a4:
    // 0x1772a4: 0xdc90fff8  ld          $s0, -0x8($a0)
    ctx->pc = 0x1772a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_1772a8:
    // 0x1772a8: 0x10303f  dsra32      $a2, $s0, 0
    ctx->pc = 0x1772a8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 16) >> (32 + 0));
label_1772ac:
    // 0x1772ac: 0x10000004  b           . + 4 + (0x4 << 2)
label_1772b0:
    if (ctx->pc == 0x1772B0u) {
        ctx->pc = 0x1772B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772ACu;
        // 0x1772b0: 0x924202f4  lbu         $v0, 0x2F4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1772B4u;
        goto label_1772b4;
    }
    ctx->pc = 0x1772ACu;
    {
        const bool branch_taken_0x1772ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1772B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772ACu;
        // 0x1772b0: 0x924202f4  lbu         $v0, 0x2F4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1772ac) {
            ctx->pc = 0x1772C0u;
            goto label_1772c0;
        }
    }
    ctx->pc = 0x1772B4u;
label_1772b4:
    // 0x1772b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1772b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1772b8:
    // 0x1772b8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1772b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1772bc:
    // 0x1772bc: 0x924202f4  lbu         $v0, 0x2F4($s2)
    ctx->pc = 0x1772bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
label_1772c0:
    // 0x1772c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1772c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1772c4:
    // 0x1772c4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1772c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1772c8:
    // 0x1772c8: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1772cc:
    if (ctx->pc == 0x1772CCu) {
        ctx->pc = 0x1772CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772C8u;
        // 0x1772cc: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1772D0u;
        goto label_1772d0;
    }
    ctx->pc = 0x1772C8u;
    {
        const bool branch_taken_0x1772c8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1772CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772C8u;
        // 0x1772cc: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1772c8) {
            ctx->pc = 0x1772E4u;
            goto label_1772e4;
        }
    }
    ctx->pc = 0x1772D0u;
label_1772d0:
    // 0x1772d0: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x1772d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_1772d4:
    // 0x1772d4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1772d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1772d8:
    // 0x1772d8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1772d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1772dc:
    // 0x1772dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1772e0:
    if (ctx->pc == 0x1772E0u) {
        ctx->pc = 0x1772E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772DCu;
        // 0x1772e0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1772E4u;
        goto label_1772e4;
    }
    ctx->pc = 0x1772DCu;
    {
        const bool branch_taken_0x1772dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1772E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772DCu;
        // 0x1772e0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1772dc) {
            ctx->pc = 0x1772E8u;
            goto label_1772e8;
        }
    }
    ctx->pc = 0x1772E4u;
label_1772e4:
    // 0x1772e4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1772e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1772e8:
    // 0x1772e8: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1772e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1772ec:
    // 0x1772ec: 0xc0f809  jalr        $a2
label_1772f0:
    if (ctx->pc == 0x1772F0u) {
        ctx->pc = 0x1772F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772ECu;
        // 0x1772f0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1772F4u;
        goto label_1772f4;
    }
    ctx->pc = 0x1772ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1772F4u);
        ctx->pc = 0x1772F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772ECu;
        // 0x1772f0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1772ECu, 0x1772F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1772F4u;
label_1772f4:
    // 0x1772f4: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1772f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_1772f8:
    // 0x1772f8: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_1772fc:
    if (ctx->pc == 0x1772FCu) {
        ctx->pc = 0x1772FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772F8u;
        // 0x1772fc: 0x27be0030  addiu       $fp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177300u;
        goto label_177300;
    }
    ctx->pc = 0x1772F8u;
    {
        const bool branch_taken_0x1772f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1772FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772F8u;
        // 0x1772fc: 0x27be0030  addiu       $fp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1772f8) {
            ctx->pc = 0x177444u;
            goto label_177444;
        }
    }
    ctx->pc = 0x177300u;
label_177300:
    // 0x177300: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x177300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_177304:
    // 0x177304: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x177304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_177308:
    // 0x177308: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x177308u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_17730c:
    // 0x17730c: 0x26550650  addiu       $s5, $s2, 0x650
    ctx->pc = 0x17730cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1616));
label_177310:
    // 0x177310: 0x26500620  addiu       $s0, $s2, 0x620
    ctx->pc = 0x177310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1568));
label_177314:
    // 0x177314: 0x26540640  addiu       $s4, $s2, 0x640
    ctx->pc = 0x177314u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1600));
label_177318:
    // 0x177318: 0x26530630  addiu       $s3, $s2, 0x630
    ctx->pc = 0x177318u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1584));
label_17731c:
    // 0x17731c: 0x26510610  addiu       $s1, $s2, 0x610
    ctx->pc = 0x17731cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1552));
label_177320:
    // 0x177320: 0xc05ce40  jal         func_173900
label_177324:
    if (ctx->pc == 0x177324u) {
        ctx->pc = 0x177324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177320u;
        // 0x177324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177328u;
        goto label_177328;
    }
    ctx->pc = 0x177320u;
    SET_GPR_U32(ctx, 31, 0x177328u);
    ctx->pc = 0x177324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177320u;
    // 0x177324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x177320u, 0x177328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177328u;
label_177328:
    // 0x177328: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x177328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17732c:
    // 0x17732c: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_177330:
    if (ctx->pc == 0x177330u) {
        ctx->pc = 0x177330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17732Cu;
        // 0x177330: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177334u;
        goto label_177334;
    }
    ctx->pc = 0x17732Cu;
    {
        const bool branch_taken_0x17732c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17732c) {
            ctx->pc = 0x177330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17732Cu;
            // 0x177330: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17741Cu;
            goto label_17741c;
        }
    }
    ctx->pc = 0x177334u;
label_177334:
    // 0x177334: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x177334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_177338:
    // 0x177338: 0xc0a4bd4  jal         func_292F50
label_17733c:
    if (ctx->pc == 0x17733Cu) {
        ctx->pc = 0x17733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177338u;
        // 0x17733c: 0x24a464f0  addiu       $a0, $a1, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177340u;
        goto label_177340;
    }
    ctx->pc = 0x177338u;
    SET_GPR_U32(ctx, 31, 0x177340u);
    ctx->pc = 0x17733Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177338u;
    // 0x17733c: 0x24a464f0  addiu       $a0, $a1, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x177338u, 0x177340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177340u;
label_177340:
    // 0x177340: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x177340u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_177344:
    // 0x177344: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x177344u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_177348:
    // 0x177348: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x177348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_17734c:
    // 0x17734c: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x17734cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_177350:
    // 0x177350: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x177350u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_177354:
    // 0x177354: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x177354u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_177358:
    // 0x177358: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x177358u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_17735c:
    // 0x17735c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x17735cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_177360:
    // 0x177360: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x177360u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_177364:
    // 0x177364: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x177364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_177368:
    // 0x177368: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x177368u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_17736c:
    // 0x17736c: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x17736cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_177370:
    // 0x177370: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x177370u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_177374:
    // 0x177374: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x177374u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_177378:
    // 0x177378: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x177378u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_17737c:
    // 0x17737c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x17737cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_177380:
    // 0x177380: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x177380u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_177384:
    // 0x177384: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x177384u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_177388:
    // 0x177388: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x177388u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_17738c:
    // 0x17738c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x17738cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_177390:
    // 0x177390: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x177390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_177394:
    // 0x177394: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x177394u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_177398:
    // 0x177398: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x177398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_17739c:
    // 0x17739c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x17739cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1773a0:
    // 0x1773a0: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1773a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1773a4:
    // 0x1773a4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1773a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1773a8:
    // 0x1773a8: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1773a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1773ac:
    // 0x1773ac: 0xc07df68  jal         func_1F7DA0
label_1773b0:
    if (ctx->pc == 0x1773B0u) {
        ctx->pc = 0x1773B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1773ACu;
        // 0x1773b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1773B4u;
        goto label_1773b4;
    }
    ctx->pc = 0x1773ACu;
    SET_GPR_U32(ctx, 31, 0x1773B4u);
    ctx->pc = 0x1773B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1773ACu;
    // 0x1773b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x1773ACu, 0x1773B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1773B4u;
label_1773b4:
    // 0x1773b4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1773b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1773b8:
    // 0x1773b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1773b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1773bc:
    // 0x1773bc: 0xc051dca  jal         func_147728
label_1773c0:
    if (ctx->pc == 0x1773C0u) {
        ctx->pc = 0x1773C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1773BCu;
        // 0x1773c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1773C4u;
        goto label_1773c4;
    }
    ctx->pc = 0x1773BCu;
    SET_GPR_U32(ctx, 31, 0x1773C4u);
    ctx->pc = 0x1773C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1773BCu;
    // 0x1773c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x1773BCu, 0x1773C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1773C4u;
label_1773c4:
    // 0x1773c4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1773c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1773c8:
    // 0x1773c8: 0xc051f10  jal         func_147C40
label_1773cc:
    if (ctx->pc == 0x1773CCu) {
        ctx->pc = 0x1773CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1773C8u;
        // 0x1773cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1773D0u;
        goto label_1773d0;
    }
    ctx->pc = 0x1773C8u;
    SET_GPR_U32(ctx, 31, 0x1773D0u);
    ctx->pc = 0x1773CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1773C8u;
    // 0x1773cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x1773C8u, 0x1773D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1773D0u;
label_1773d0:
    // 0x1773d0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1773d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1773d4:
    // 0x1773d4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1773d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1773d8:
    // 0x1773d8: 0xc051efe  jal         func_147BF8
label_1773dc:
    if (ctx->pc == 0x1773DCu) {
        ctx->pc = 0x1773DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1773D8u;
        // 0x1773dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1773E0u;
        goto label_1773e0;
    }
    ctx->pc = 0x1773D8u;
    SET_GPR_U32(ctx, 31, 0x1773E0u);
    ctx->pc = 0x1773DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1773D8u;
    // 0x1773dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x1773D8u, 0x1773E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1773E0u;
label_1773e0:
    // 0x1773e0: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1773e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1773e4:
    // 0x1773e4: 0xc051d4a  jal         func_147528
label_1773e8:
    if (ctx->pc == 0x1773E8u) {
        ctx->pc = 0x1773E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1773E4u;
        // 0x1773e8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1773ECu;
        goto label_1773ec;
    }
    ctx->pc = 0x1773E4u;
    SET_GPR_U32(ctx, 31, 0x1773ECu);
    ctx->pc = 0x1773E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1773E4u;
    // 0x1773e8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x1773E4u, 0x1773ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1773ECu;
label_1773ec:
    // 0x1773ec: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x1773ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1773f0:
    // 0x1773f0: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1773f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1773f4:
    // 0x1773f4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1773f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1773f8:
    // 0x1773f8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1773f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1773fc:
    // 0x1773fc: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x1773fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_177400:
    // 0x177400: 0x0  nop
    ctx->pc = 0x177400u;
    // NOP
label_177404:
    // 0x177404: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_177408:
    if (ctx->pc == 0x177408u) {
        ctx->pc = 0x177408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177404u;
        // 0x177408: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17740Cu;
        goto label_17740c;
    }
    ctx->pc = 0x177404u;
    {
        const bool branch_taken_0x177404 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x177408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177404u;
        // 0x177408: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x177404) {
            ctx->pc = 0x177418u;
            goto label_177418;
        }
    }
    ctx->pc = 0x17740Cu;
label_17740c:
    // 0x17740c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17740cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_177410:
    // 0x177410: 0xc05bd90  jal         func_16F640
label_177414:
    if (ctx->pc == 0x177414u) {
        ctx->pc = 0x177414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177410u;
        // 0x177414: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177418u;
        goto label_177418;
    }
    ctx->pc = 0x177410u;
    SET_GPR_U32(ctx, 31, 0x177418u);
    ctx->pc = 0x177414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177410u;
    // 0x177414: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x177410u, 0x177418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177418u;
label_177418:
    // 0x177418: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x177418u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_17741c:
    // 0x17741c: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x17741cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_177420:
    // 0x177420: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x177420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_177424:
    // 0x177424: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x177424u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_177428:
    // 0x177428: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x177428u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_17742c:
    // 0x17742c: 0x2ac20013  slti        $v0, $s6, 0x13
    ctx->pc = 0x17742cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)19) ? 1 : 0);
label_177430:
    // 0x177430: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_177434:
    if (ctx->pc == 0x177434u) {
        ctx->pc = 0x177434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177430u;
        // 0x177434: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177438u;
        goto label_177438;
    }
    ctx->pc = 0x177430u;
    {
        const bool branch_taken_0x177430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177430u;
        // 0x177434: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177430) {
            ctx->pc = 0x177444u;
            goto label_177444;
        }
    }
    ctx->pc = 0x177438u;
label_177438:
    // 0x177438: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x177438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_17743c:
    // 0x17743c: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_177440:
    if (ctx->pc == 0x177440u) {
        ctx->pc = 0x177444u;
        goto label_177444;
    }
    ctx->pc = 0x17743Cu;
    {
        const bool branch_taken_0x17743c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x17743c) {
            ctx->pc = 0x177320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177320;
        }
    }
    ctx->pc = 0x177444u;
label_177444:
    // 0x177444: 0xc06ddb6  jal         func_1B76D8
label_177448:
    if (ctx->pc == 0x177448u) {
        ctx->pc = 0x177448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177444u;
        // 0x177448: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17744Cu;
        goto label_17744c;
    }
    ctx->pc = 0x177444u;
    SET_GPR_U32(ctx, 31, 0x17744Cu);
    ctx->pc = 0x177448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177444u;
    // 0x177448: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x177444u, 0x17744Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17744Cu;
label_17744c:
    // 0x17744c: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x17744cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_177450:
    // 0x177450: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x177450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_177454:
    // 0x177454: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x177454u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_177458:
    // 0x177458: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x177458u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_17745c:
    // 0x17745c: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x17745cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_177460:
    // 0x177460: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x177460u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_177464:
    // 0x177464: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x177464u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_177468:
    // 0x177468: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x177468u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_17746c:
    // 0x17746c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x17746cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_177470:
    // 0x177470: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x177470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_177474:
    // 0x177474: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x177474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_177478:
    // 0x177478: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x177478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17747c:
    // 0x17747c: 0x3e00008  jr          $ra
label_177480:
    if (ctx->pc == 0x177480u) {
        ctx->pc = 0x177480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17747Cu;
        // 0x177480: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177484u;
        goto label_177484;
    }
    ctx->pc = 0x17747Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17747Cu;
        // 0x177480: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17747Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177484u;
label_177484:
    // 0x177484: 0x0  nop
    ctx->pc = 0x177484u;
    // NOP
    ctx->pc = 0x177488u;
}
