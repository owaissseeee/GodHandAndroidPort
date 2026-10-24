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

// Function: func_001721D0
// Address: 0x1721d0 - 0x172490
void func_001721D0_0x1721d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001721D0_0x1721d0");
#endif

    switch (ctx->pc) {
        case 0x1721d0u: goto label_1721d0;
        case 0x1721d4u: goto label_1721d4;
        case 0x1721d8u: goto label_1721d8;
        case 0x1721dcu: goto label_1721dc;
        case 0x1721e0u: goto label_1721e0;
        case 0x1721e4u: goto label_1721e4;
        case 0x1721e8u: goto label_1721e8;
        case 0x1721ecu: goto label_1721ec;
        case 0x1721f0u: goto label_1721f0;
        case 0x1721f4u: goto label_1721f4;
        case 0x1721f8u: goto label_1721f8;
        case 0x1721fcu: goto label_1721fc;
        case 0x172200u: goto label_172200;
        case 0x172204u: goto label_172204;
        case 0x172208u: goto label_172208;
        case 0x17220cu: goto label_17220c;
        case 0x172210u: goto label_172210;
        case 0x172214u: goto label_172214;
        case 0x172218u: goto label_172218;
        case 0x17221cu: goto label_17221c;
        case 0x172220u: goto label_172220;
        case 0x172224u: goto label_172224;
        case 0x172228u: goto label_172228;
        case 0x17222cu: goto label_17222c;
        case 0x172230u: goto label_172230;
        case 0x172234u: goto label_172234;
        case 0x172238u: goto label_172238;
        case 0x17223cu: goto label_17223c;
        case 0x172240u: goto label_172240;
        case 0x172244u: goto label_172244;
        case 0x172248u: goto label_172248;
        case 0x17224cu: goto label_17224c;
        case 0x172250u: goto label_172250;
        case 0x172254u: goto label_172254;
        case 0x172258u: goto label_172258;
        case 0x17225cu: goto label_17225c;
        case 0x172260u: goto label_172260;
        case 0x172264u: goto label_172264;
        case 0x172268u: goto label_172268;
        case 0x17226cu: goto label_17226c;
        case 0x172270u: goto label_172270;
        case 0x172274u: goto label_172274;
        case 0x172278u: goto label_172278;
        case 0x17227cu: goto label_17227c;
        case 0x172280u: goto label_172280;
        case 0x172284u: goto label_172284;
        case 0x172288u: goto label_172288;
        case 0x17228cu: goto label_17228c;
        case 0x172290u: goto label_172290;
        case 0x172294u: goto label_172294;
        case 0x172298u: goto label_172298;
        case 0x17229cu: goto label_17229c;
        case 0x1722a0u: goto label_1722a0;
        case 0x1722a4u: goto label_1722a4;
        case 0x1722a8u: goto label_1722a8;
        case 0x1722acu: goto label_1722ac;
        case 0x1722b0u: goto label_1722b0;
        case 0x1722b4u: goto label_1722b4;
        case 0x1722b8u: goto label_1722b8;
        case 0x1722bcu: goto label_1722bc;
        case 0x1722c0u: goto label_1722c0;
        case 0x1722c4u: goto label_1722c4;
        case 0x1722c8u: goto label_1722c8;
        case 0x1722ccu: goto label_1722cc;
        case 0x1722d0u: goto label_1722d0;
        case 0x1722d4u: goto label_1722d4;
        case 0x1722d8u: goto label_1722d8;
        case 0x1722dcu: goto label_1722dc;
        case 0x1722e0u: goto label_1722e0;
        case 0x1722e4u: goto label_1722e4;
        case 0x1722e8u: goto label_1722e8;
        case 0x1722ecu: goto label_1722ec;
        case 0x1722f0u: goto label_1722f0;
        case 0x1722f4u: goto label_1722f4;
        case 0x1722f8u: goto label_1722f8;
        case 0x1722fcu: goto label_1722fc;
        case 0x172300u: goto label_172300;
        case 0x172304u: goto label_172304;
        case 0x172308u: goto label_172308;
        case 0x17230cu: goto label_17230c;
        case 0x172310u: goto label_172310;
        case 0x172314u: goto label_172314;
        case 0x172318u: goto label_172318;
        case 0x17231cu: goto label_17231c;
        case 0x172320u: goto label_172320;
        case 0x172324u: goto label_172324;
        case 0x172328u: goto label_172328;
        case 0x17232cu: goto label_17232c;
        case 0x172330u: goto label_172330;
        case 0x172334u: goto label_172334;
        case 0x172338u: goto label_172338;
        case 0x17233cu: goto label_17233c;
        case 0x172340u: goto label_172340;
        case 0x172344u: goto label_172344;
        case 0x172348u: goto label_172348;
        case 0x17234cu: goto label_17234c;
        case 0x172350u: goto label_172350;
        case 0x172354u: goto label_172354;
        case 0x172358u: goto label_172358;
        case 0x17235cu: goto label_17235c;
        case 0x172360u: goto label_172360;
        case 0x172364u: goto label_172364;
        case 0x172368u: goto label_172368;
        case 0x17236cu: goto label_17236c;
        case 0x172370u: goto label_172370;
        case 0x172374u: goto label_172374;
        case 0x172378u: goto label_172378;
        case 0x17237cu: goto label_17237c;
        case 0x172380u: goto label_172380;
        case 0x172384u: goto label_172384;
        case 0x172388u: goto label_172388;
        case 0x17238cu: goto label_17238c;
        case 0x172390u: goto label_172390;
        case 0x172394u: goto label_172394;
        case 0x172398u: goto label_172398;
        case 0x17239cu: goto label_17239c;
        case 0x1723a0u: goto label_1723a0;
        case 0x1723a4u: goto label_1723a4;
        case 0x1723a8u: goto label_1723a8;
        case 0x1723acu: goto label_1723ac;
        case 0x1723b0u: goto label_1723b0;
        case 0x1723b4u: goto label_1723b4;
        case 0x1723b8u: goto label_1723b8;
        case 0x1723bcu: goto label_1723bc;
        case 0x1723c0u: goto label_1723c0;
        case 0x1723c4u: goto label_1723c4;
        case 0x1723c8u: goto label_1723c8;
        case 0x1723ccu: goto label_1723cc;
        case 0x1723d0u: goto label_1723d0;
        case 0x1723d4u: goto label_1723d4;
        case 0x1723d8u: goto label_1723d8;
        case 0x1723dcu: goto label_1723dc;
        case 0x1723e0u: goto label_1723e0;
        case 0x1723e4u: goto label_1723e4;
        case 0x1723e8u: goto label_1723e8;
        case 0x1723ecu: goto label_1723ec;
        case 0x1723f0u: goto label_1723f0;
        case 0x1723f4u: goto label_1723f4;
        case 0x1723f8u: goto label_1723f8;
        case 0x1723fcu: goto label_1723fc;
        case 0x172400u: goto label_172400;
        case 0x172404u: goto label_172404;
        case 0x172408u: goto label_172408;
        case 0x17240cu: goto label_17240c;
        case 0x172410u: goto label_172410;
        case 0x172414u: goto label_172414;
        case 0x172418u: goto label_172418;
        case 0x17241cu: goto label_17241c;
        case 0x172420u: goto label_172420;
        case 0x172424u: goto label_172424;
        case 0x172428u: goto label_172428;
        case 0x17242cu: goto label_17242c;
        case 0x172430u: goto label_172430;
        case 0x172434u: goto label_172434;
        case 0x172438u: goto label_172438;
        case 0x17243cu: goto label_17243c;
        case 0x172440u: goto label_172440;
        case 0x172444u: goto label_172444;
        case 0x172448u: goto label_172448;
        case 0x17244cu: goto label_17244c;
        case 0x172450u: goto label_172450;
        case 0x172454u: goto label_172454;
        case 0x172458u: goto label_172458;
        case 0x17245cu: goto label_17245c;
        case 0x172460u: goto label_172460;
        case 0x172464u: goto label_172464;
        case 0x172468u: goto label_172468;
        case 0x17246cu: goto label_17246c;
        case 0x172470u: goto label_172470;
        case 0x172474u: goto label_172474;
        case 0x172478u: goto label_172478;
        case 0x17247cu: goto label_17247c;
        case 0x172480u: goto label_172480;
        case 0x172484u: goto label_172484;
        case 0x172488u: goto label_172488;
        case 0x17248cu: goto label_17248c;
        default: break;
    }

    ctx->pc = 0x1721d0u;

label_1721d0:
    // 0x1721d0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1721d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1721d4:
    // 0x1721d4: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1721d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_1721d8:
    // 0x1721d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1721d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1721dc:
    // 0x1721dc: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1721dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_1721e0:
    // 0x1721e0: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1721e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_1721e4:
    // 0x1721e4: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x1721e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_1721e8:
    // 0x1721e8: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x1721e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_1721ec:
    // 0x1721ec: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x1721ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_1721f0:
    // 0x1721f0: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x1721f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_1721f4:
    // 0x1721f4: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1721f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_1721f8:
    // 0x1721f8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1721f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1721fc:
    // 0x1721fc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1721fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_172200:
    // 0x172200: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x172200u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_172204:
    // 0x172204: 0xc06ddac  jal         func_1B76B0
label_172208:
    if (ctx->pc == 0x172208u) {
        ctx->pc = 0x172208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172204u;
        // 0x172208: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17220Cu;
        goto label_17220c;
    }
    ctx->pc = 0x172204u;
    SET_GPR_U32(ctx, 31, 0x17220Cu);
    ctx->pc = 0x172208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172204u;
    // 0x172208: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x172204u, 0x17220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17220Cu;
label_17220c:
    // 0x17220c: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
label_172210:
    if (ctx->pc == 0x172210u) {
        ctx->pc = 0x172210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17220Cu;
        // 0x172210: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172214u;
        goto label_172214;
    }
    ctx->pc = 0x17220Cu;
    {
        const bool branch_taken_0x17220c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17220Cu;
        // 0x172210: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17220c) {
            ctx->pc = 0x172454u;
            goto label_172454;
        }
    }
    ctx->pc = 0x172214u;
label_172214:
    // 0x172214: 0x924302f4  lbu         $v1, 0x2F4($s2)
    ctx->pc = 0x172214u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
label_172218:
    // 0x172218: 0x24470e90  addiu       $a3, $v0, 0xE90
    ctx->pc = 0x172218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 3728));
label_17221c:
    // 0x17221c: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x17221cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_172220:
    // 0x172220: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x172220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_172224:
    // 0x172224: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x172224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_172228:
    // 0x172228: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x172228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_17222c:
    // 0x17222c: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x17222cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_172230:
    // 0x172230: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x172230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_172234:
    // 0x172234: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x172234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_172238:
    // 0x172238: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x172238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17223c:
    // 0x17223c: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x17223cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_172240:
    // 0x172240: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x172240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_172244:
    // 0x172244: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x172244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_172248:
    // 0x172248: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x172248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17224c:
    // 0x17224c: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x17224cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_172250:
    // 0x172250: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x172250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_172254:
    // 0x172254: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x172254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_172258:
    // 0x172258: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x172258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17225c:
    // 0x17225c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17225cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_172260:
    // 0x172260: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x172260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_172264:
    // 0x172264: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x172264u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_172268:
    // 0x172268: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x172268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_17226c:
    // 0x17226c: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x17226cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_172270:
    // 0x172270: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_172274:
    if (ctx->pc == 0x172274u) {
        ctx->pc = 0x172274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172270u;
        // 0x172274: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172278u;
        goto label_172278;
    }
    ctx->pc = 0x172270u;
    {
        const bool branch_taken_0x172270 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x172274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172270u;
        // 0x172274: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172270) {
            ctx->pc = 0x1722A4u;
            goto label_1722a4;
        }
    }
    ctx->pc = 0x172278u;
label_172278:
    // 0x172278: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x172278u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_17227c:
    // 0x17227c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x17227cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_172280:
    // 0x172280: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x172280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_172284:
    // 0x172284: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x172284u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_172288:
    // 0x172288: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x172288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_17228c:
    // 0x17228c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17228cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_172290:
    // 0x172290: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x172290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_172294:
    // 0x172294: 0xdc90fff8  ld          $s0, -0x8($a0)
    ctx->pc = 0x172294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_172298:
    // 0x172298: 0x10303f  dsra32      $a2, $s0, 0
    ctx->pc = 0x172298u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 16) >> (32 + 0));
label_17229c:
    // 0x17229c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1722a0:
    if (ctx->pc == 0x1722A0u) {
        ctx->pc = 0x1722A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17229Cu;
        // 0x1722a0: 0x924202f4  lbu         $v0, 0x2F4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1722A4u;
        goto label_1722a4;
    }
    ctx->pc = 0x17229Cu;
    {
        const bool branch_taken_0x17229c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1722A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17229Cu;
        // 0x1722a0: 0x924202f4  lbu         $v0, 0x2F4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17229c) {
            ctx->pc = 0x1722B0u;
            goto label_1722b0;
        }
    }
    ctx->pc = 0x1722A4u;
label_1722a4:
    // 0x1722a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1722a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1722a8:
    // 0x1722a8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1722a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1722ac:
    // 0x1722ac: 0x924202f4  lbu         $v0, 0x2F4($s2)
    ctx->pc = 0x1722acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
label_1722b0:
    // 0x1722b0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1722b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1722b4:
    // 0x1722b4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1722b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1722b8:
    // 0x1722b8: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1722bc:
    if (ctx->pc == 0x1722BCu) {
        ctx->pc = 0x1722BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1722B8u;
        // 0x1722bc: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1722C0u;
        goto label_1722c0;
    }
    ctx->pc = 0x1722B8u;
    {
        const bool branch_taken_0x1722b8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1722BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1722B8u;
        // 0x1722bc: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1722b8) {
            ctx->pc = 0x1722D4u;
            goto label_1722d4;
        }
    }
    ctx->pc = 0x1722C0u;
label_1722c0:
    // 0x1722c0: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x1722c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_1722c4:
    // 0x1722c4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1722c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1722c8:
    // 0x1722c8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1722c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1722cc:
    // 0x1722cc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1722d0:
    if (ctx->pc == 0x1722D0u) {
        ctx->pc = 0x1722D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1722CCu;
        // 0x1722d0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1722D4u;
        goto label_1722d4;
    }
    ctx->pc = 0x1722CCu;
    {
        const bool branch_taken_0x1722cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1722D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1722CCu;
        // 0x1722d0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1722cc) {
            ctx->pc = 0x1722D8u;
            goto label_1722d8;
        }
    }
    ctx->pc = 0x1722D4u;
label_1722d4:
    // 0x1722d4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1722d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1722d8:
    // 0x1722d8: 0xc0f809  jalr        $a2
label_1722dc:
    if (ctx->pc == 0x1722DCu) {
        ctx->pc = 0x1722DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1722D8u;
        // 0x1722dc: 0x2422021  addu        $a0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1722E0u;
        goto label_1722e0;
    }
    ctx->pc = 0x1722D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1722E0u);
        ctx->pc = 0x1722DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1722D8u;
        // 0x1722dc: 0x2422021  addu        $a0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1722D8u, 0x1722E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1722E0u;
label_1722e0:
    // 0x1722e0: 0x92420d9b  lbu         $v0, 0xD9B($s2)
    ctx->pc = 0x1722e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3483)));
label_1722e4:
    // 0x1722e4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1722e8:
    if (ctx->pc == 0x1722E8u) {
        ctx->pc = 0x1722E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1722E4u;
        // 0x1722e8: 0x924202b4  lbu         $v0, 0x2B4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1722ECu;
        goto label_1722ec;
    }
    ctx->pc = 0x1722E4u;
    {
        const bool branch_taken_0x1722e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1722e4) {
            ctx->pc = 0x1722E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1722E4u;
            // 0x1722e8: 0x924202b4  lbu         $v0, 0x2B4($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1722FCu;
            goto label_1722fc;
        }
    }
    ctx->pc = 0x1722ECu;
label_1722ec:
    // 0x1722ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1722ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1722f0:
    // 0x1722f0: 0xc0aa1fa  jal         func_2A87E8
label_1722f4:
    if (ctx->pc == 0x1722F4u) {
        ctx->pc = 0x1722F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1722F0u;
        // 0x1722f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1722F8u;
        goto label_1722f8;
    }
    ctx->pc = 0x1722F0u;
    SET_GPR_U32(ctx, 31, 0x1722F8u);
    ctx->pc = 0x1722F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1722F0u;
    // 0x1722f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x1722F0u, 0x1722F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1722F8u;
label_1722f8:
    // 0x1722f8: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1722f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_1722fc:
    // 0x1722fc: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_172300:
    if (ctx->pc == 0x172300u) {
        ctx->pc = 0x172300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1722FCu;
        // 0x172300: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172304u;
        goto label_172304;
    }
    ctx->pc = 0x1722FCu;
    {
        const bool branch_taken_0x1722fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1722FCu;
        // 0x172300: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1722fc) {
            ctx->pc = 0x17244Cu;
            goto label_17244c;
        }
    }
    ctx->pc = 0x172304u;
label_172304:
    // 0x172304: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x172304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_172308:
    // 0x172308: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x172308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_17230c:
    // 0x17230c: 0x27be0030  addiu       $fp, $sp, 0x30
    ctx->pc = 0x17230cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_172310:
    // 0x172310: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x172310u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_172314:
    // 0x172314: 0x26550650  addiu       $s5, $s2, 0x650
    ctx->pc = 0x172314u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1616));
label_172318:
    // 0x172318: 0x26500620  addiu       $s0, $s2, 0x620
    ctx->pc = 0x172318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1568));
label_17231c:
    // 0x17231c: 0x26540640  addiu       $s4, $s2, 0x640
    ctx->pc = 0x17231cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1600));
label_172320:
    // 0x172320: 0x26530630  addiu       $s3, $s2, 0x630
    ctx->pc = 0x172320u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1584));
label_172324:
    // 0x172324: 0x26510610  addiu       $s1, $s2, 0x610
    ctx->pc = 0x172324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1552));
label_172328:
    // 0x172328: 0xc05ce40  jal         func_173900
label_17232c:
    if (ctx->pc == 0x17232Cu) {
        ctx->pc = 0x17232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172328u;
        // 0x17232c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172330u;
        goto label_172330;
    }
    ctx->pc = 0x172328u;
    SET_GPR_U32(ctx, 31, 0x172330u);
    ctx->pc = 0x17232Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172328u;
    // 0x17232c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x172328u, 0x172330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172330u;
label_172330:
    // 0x172330: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x172330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172334:
    // 0x172334: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_172338:
    if (ctx->pc == 0x172338u) {
        ctx->pc = 0x172338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172334u;
        // 0x172338: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17233Cu;
        goto label_17233c;
    }
    ctx->pc = 0x172334u;
    {
        const bool branch_taken_0x172334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x172334) {
            ctx->pc = 0x172338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172334u;
            // 0x172338: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172424u;
            goto label_172424;
        }
    }
    ctx->pc = 0x17233Cu;
label_17233c:
    // 0x17233c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x17233cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_172340:
    // 0x172340: 0xc0a4bd4  jal         func_292F50
label_172344:
    if (ctx->pc == 0x172344u) {
        ctx->pc = 0x172344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172340u;
        // 0x172344: 0x24a464f0  addiu       $a0, $a1, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172348u;
        goto label_172348;
    }
    ctx->pc = 0x172340u;
    SET_GPR_U32(ctx, 31, 0x172348u);
    ctx->pc = 0x172344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172340u;
    // 0x172344: 0x24a464f0  addiu       $a0, $a1, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x172340u, 0x172348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172348u;
label_172348:
    // 0x172348: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x172348u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_17234c:
    // 0x17234c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x17234cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_172350:
    // 0x172350: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x172350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_172354:
    // 0x172354: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x172354u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_172358:
    // 0x172358: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x172358u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_17235c:
    // 0x17235c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x17235cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_172360:
    // 0x172360: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x172360u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_172364:
    // 0x172364: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x172364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_172368:
    // 0x172368: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x172368u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_17236c:
    // 0x17236c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x17236cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_172370:
    // 0x172370: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x172370u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_172374:
    // 0x172374: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x172374u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_172378:
    // 0x172378: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x172378u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_17237c:
    // 0x17237c: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x17237cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_172380:
    // 0x172380: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x172380u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_172384:
    // 0x172384: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x172384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_172388:
    // 0x172388: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x172388u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17238c:
    // 0x17238c: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x17238cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_172390:
    // 0x172390: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x172390u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_172394:
    // 0x172394: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x172394u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_172398:
    // 0x172398: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x172398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_17239c:
    // 0x17239c: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x17239cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1723a0:
    // 0x1723a0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1723a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1723a4:
    // 0x1723a4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1723a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1723a8:
    // 0x1723a8: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1723a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1723ac:
    // 0x1723ac: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1723acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1723b0:
    // 0x1723b0: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1723b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1723b4:
    // 0x1723b4: 0xc07df68  jal         func_1F7DA0
label_1723b8:
    if (ctx->pc == 0x1723B8u) {
        ctx->pc = 0x1723B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1723B4u;
        // 0x1723b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1723BCu;
        goto label_1723bc;
    }
    ctx->pc = 0x1723B4u;
    SET_GPR_U32(ctx, 31, 0x1723BCu);
    ctx->pc = 0x1723B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1723B4u;
    // 0x1723b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x1723B4u, 0x1723BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1723BCu;
label_1723bc:
    // 0x1723bc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1723bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1723c0:
    // 0x1723c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1723c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1723c4:
    // 0x1723c4: 0xc051dca  jal         func_147728
label_1723c8:
    if (ctx->pc == 0x1723C8u) {
        ctx->pc = 0x1723C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1723C4u;
        // 0x1723c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1723CCu;
        goto label_1723cc;
    }
    ctx->pc = 0x1723C4u;
    SET_GPR_U32(ctx, 31, 0x1723CCu);
    ctx->pc = 0x1723C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1723C4u;
    // 0x1723c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x1723C4u, 0x1723CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1723CCu;
label_1723cc:
    // 0x1723cc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1723ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1723d0:
    // 0x1723d0: 0xc051f10  jal         func_147C40
label_1723d4:
    if (ctx->pc == 0x1723D4u) {
        ctx->pc = 0x1723D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1723D0u;
        // 0x1723d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1723D8u;
        goto label_1723d8;
    }
    ctx->pc = 0x1723D0u;
    SET_GPR_U32(ctx, 31, 0x1723D8u);
    ctx->pc = 0x1723D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1723D0u;
    // 0x1723d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x1723D0u, 0x1723D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1723D8u;
label_1723d8:
    // 0x1723d8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1723d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1723dc:
    // 0x1723dc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1723dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1723e0:
    // 0x1723e0: 0xc051efe  jal         func_147BF8
label_1723e4:
    if (ctx->pc == 0x1723E4u) {
        ctx->pc = 0x1723E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1723E0u;
        // 0x1723e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1723E8u;
        goto label_1723e8;
    }
    ctx->pc = 0x1723E0u;
    SET_GPR_U32(ctx, 31, 0x1723E8u);
    ctx->pc = 0x1723E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1723E0u;
    // 0x1723e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x1723E0u, 0x1723E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1723E8u;
label_1723e8:
    // 0x1723e8: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1723e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1723ec:
    // 0x1723ec: 0xc051d4a  jal         func_147528
label_1723f0:
    if (ctx->pc == 0x1723F0u) {
        ctx->pc = 0x1723F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1723ECu;
        // 0x1723f0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1723F4u;
        goto label_1723f4;
    }
    ctx->pc = 0x1723ECu;
    SET_GPR_U32(ctx, 31, 0x1723F4u);
    ctx->pc = 0x1723F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1723ECu;
    // 0x1723f0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x1723ECu, 0x1723F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1723F4u;
label_1723f4:
    // 0x1723f4: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x1723f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1723f8:
    // 0x1723f8: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1723f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1723fc:
    // 0x1723fc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1723fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_172400:
    // 0x172400: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x172400u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_172404:
    // 0x172404: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x172404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_172408:
    // 0x172408: 0x0  nop
    ctx->pc = 0x172408u;
    // NOP
label_17240c:
    // 0x17240c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_172410:
    if (ctx->pc == 0x172410u) {
        ctx->pc = 0x172410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17240Cu;
        // 0x172410: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x172414u;
        goto label_172414;
    }
    ctx->pc = 0x17240Cu;
    {
        const bool branch_taken_0x17240c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x172410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17240Cu;
        // 0x172410: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17240c) {
            ctx->pc = 0x172420u;
            goto label_172420;
        }
    }
    ctx->pc = 0x172414u;
label_172414:
    // 0x172414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x172414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_172418:
    // 0x172418: 0xc05bd90  jal         func_16F640
label_17241c:
    if (ctx->pc == 0x17241Cu) {
        ctx->pc = 0x17241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172418u;
        // 0x17241c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172420u;
        goto label_172420;
    }
    ctx->pc = 0x172418u;
    SET_GPR_U32(ctx, 31, 0x172420u);
    ctx->pc = 0x17241Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172418u;
    // 0x17241c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x172418u, 0x172420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172420u;
label_172420:
    // 0x172420: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x172420u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_172424:
    // 0x172424: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x172424u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_172428:
    // 0x172428: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x172428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_17242c:
    // 0x17242c: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x17242cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_172430:
    // 0x172430: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x172430u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_172434:
    // 0x172434: 0x2ac20014  slti        $v0, $s6, 0x14
    ctx->pc = 0x172434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)20) ? 1 : 0);
label_172438:
    // 0x172438: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_17243c:
    if (ctx->pc == 0x17243Cu) {
        ctx->pc = 0x17243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172438u;
        // 0x17243c: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172440u;
        goto label_172440;
    }
    ctx->pc = 0x172438u;
    {
        const bool branch_taken_0x172438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172438u;
        // 0x17243c: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172438) {
            ctx->pc = 0x17244Cu;
            goto label_17244c;
        }
    }
    ctx->pc = 0x172440u;
label_172440:
    // 0x172440: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x172440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_172444:
    // 0x172444: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_172448:
    if (ctx->pc == 0x172448u) {
        ctx->pc = 0x17244Cu;
        goto label_17244c;
    }
    ctx->pc = 0x172444u;
    {
        const bool branch_taken_0x172444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x172444) {
            ctx->pc = 0x172328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172328;
        }
    }
    ctx->pc = 0x17244Cu;
label_17244c:
    // 0x17244c: 0xc06ddb6  jal         func_1B76D8
label_172450:
    if (ctx->pc == 0x172450u) {
        ctx->pc = 0x172450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17244Cu;
        // 0x172450: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172454u;
        goto label_172454;
    }
    ctx->pc = 0x17244Cu;
    SET_GPR_U32(ctx, 31, 0x172454u);
    ctx->pc = 0x172450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17244Cu;
    // 0x172450: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x17244Cu, 0x172454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172454u;
label_172454:
    // 0x172454: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x172454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_172458:
    // 0x172458: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x172458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_17245c:
    // 0x17245c: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x17245cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_172460:
    // 0x172460: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x172460u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_172464:
    // 0x172464: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x172464u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_172468:
    // 0x172468: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x172468u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_17246c:
    // 0x17246c: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x17246cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_172470:
    // 0x172470: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x172470u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_172474:
    // 0x172474: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x172474u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_172478:
    // 0x172478: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x172478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_17247c:
    // 0x17247c: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x17247cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_172480:
    // 0x172480: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x172480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_172484:
    // 0x172484: 0x3e00008  jr          $ra
label_172488:
    if (ctx->pc == 0x172488u) {
        ctx->pc = 0x172488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172484u;
        // 0x172488: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17248Cu;
        goto label_17248c;
    }
    ctx->pc = 0x172484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172484u;
        // 0x172488: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17248Cu;
label_17248c:
    // 0x17248c: 0x0  nop
    ctx->pc = 0x17248cu;
    // NOP
    ctx->pc = 0x172490u;
}
