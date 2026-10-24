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

// Function: UpdatePartsScrollAndRetire
// Address: 0x19b1a8 - 0x19b458
void UpdatePartsScrollAndRetire_0x19b1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdatePartsScrollAndRetire_0x19b1a8");
#endif

    switch (ctx->pc) {
        case 0x19b1a8u: goto label_19b1a8;
        case 0x19b1acu: goto label_19b1ac;
        case 0x19b1b0u: goto label_19b1b0;
        case 0x19b1b4u: goto label_19b1b4;
        case 0x19b1b8u: goto label_19b1b8;
        case 0x19b1bcu: goto label_19b1bc;
        case 0x19b1c0u: goto label_19b1c0;
        case 0x19b1c4u: goto label_19b1c4;
        case 0x19b1c8u: goto label_19b1c8;
        case 0x19b1ccu: goto label_19b1cc;
        case 0x19b1d0u: goto label_19b1d0;
        case 0x19b1d4u: goto label_19b1d4;
        case 0x19b1d8u: goto label_19b1d8;
        case 0x19b1dcu: goto label_19b1dc;
        case 0x19b1e0u: goto label_19b1e0;
        case 0x19b1e4u: goto label_19b1e4;
        case 0x19b1e8u: goto label_19b1e8;
        case 0x19b1ecu: goto label_19b1ec;
        case 0x19b1f0u: goto label_19b1f0;
        case 0x19b1f4u: goto label_19b1f4;
        case 0x19b1f8u: goto label_19b1f8;
        case 0x19b1fcu: goto label_19b1fc;
        case 0x19b200u: goto label_19b200;
        case 0x19b204u: goto label_19b204;
        case 0x19b208u: goto label_19b208;
        case 0x19b20cu: goto label_19b20c;
        case 0x19b210u: goto label_19b210;
        case 0x19b214u: goto label_19b214;
        case 0x19b218u: goto label_19b218;
        case 0x19b21cu: goto label_19b21c;
        case 0x19b220u: goto label_19b220;
        case 0x19b224u: goto label_19b224;
        case 0x19b228u: goto label_19b228;
        case 0x19b22cu: goto label_19b22c;
        case 0x19b230u: goto label_19b230;
        case 0x19b234u: goto label_19b234;
        case 0x19b238u: goto label_19b238;
        case 0x19b23cu: goto label_19b23c;
        case 0x19b240u: goto label_19b240;
        case 0x19b244u: goto label_19b244;
        case 0x19b248u: goto label_19b248;
        case 0x19b24cu: goto label_19b24c;
        case 0x19b250u: goto label_19b250;
        case 0x19b254u: goto label_19b254;
        case 0x19b258u: goto label_19b258;
        case 0x19b25cu: goto label_19b25c;
        case 0x19b260u: goto label_19b260;
        case 0x19b264u: goto label_19b264;
        case 0x19b268u: goto label_19b268;
        case 0x19b26cu: goto label_19b26c;
        case 0x19b270u: goto label_19b270;
        case 0x19b274u: goto label_19b274;
        case 0x19b278u: goto label_19b278;
        case 0x19b27cu: goto label_19b27c;
        case 0x19b280u: goto label_19b280;
        case 0x19b284u: goto label_19b284;
        case 0x19b288u: goto label_19b288;
        case 0x19b28cu: goto label_19b28c;
        case 0x19b290u: goto label_19b290;
        case 0x19b294u: goto label_19b294;
        case 0x19b298u: goto label_19b298;
        case 0x19b29cu: goto label_19b29c;
        case 0x19b2a0u: goto label_19b2a0;
        case 0x19b2a4u: goto label_19b2a4;
        case 0x19b2a8u: goto label_19b2a8;
        case 0x19b2acu: goto label_19b2ac;
        case 0x19b2b0u: goto label_19b2b0;
        case 0x19b2b4u: goto label_19b2b4;
        case 0x19b2b8u: goto label_19b2b8;
        case 0x19b2bcu: goto label_19b2bc;
        case 0x19b2c0u: goto label_19b2c0;
        case 0x19b2c4u: goto label_19b2c4;
        case 0x19b2c8u: goto label_19b2c8;
        case 0x19b2ccu: goto label_19b2cc;
        case 0x19b2d0u: goto label_19b2d0;
        case 0x19b2d4u: goto label_19b2d4;
        case 0x19b2d8u: goto label_19b2d8;
        case 0x19b2dcu: goto label_19b2dc;
        case 0x19b2e0u: goto label_19b2e0;
        case 0x19b2e4u: goto label_19b2e4;
        case 0x19b2e8u: goto label_19b2e8;
        case 0x19b2ecu: goto label_19b2ec;
        case 0x19b2f0u: goto label_19b2f0;
        case 0x19b2f4u: goto label_19b2f4;
        case 0x19b2f8u: goto label_19b2f8;
        case 0x19b2fcu: goto label_19b2fc;
        case 0x19b300u: goto label_19b300;
        case 0x19b304u: goto label_19b304;
        case 0x19b308u: goto label_19b308;
        case 0x19b30cu: goto label_19b30c;
        case 0x19b310u: goto label_19b310;
        case 0x19b314u: goto label_19b314;
        case 0x19b318u: goto label_19b318;
        case 0x19b31cu: goto label_19b31c;
        case 0x19b320u: goto label_19b320;
        case 0x19b324u: goto label_19b324;
        case 0x19b328u: goto label_19b328;
        case 0x19b32cu: goto label_19b32c;
        case 0x19b330u: goto label_19b330;
        case 0x19b334u: goto label_19b334;
        case 0x19b338u: goto label_19b338;
        case 0x19b33cu: goto label_19b33c;
        case 0x19b340u: goto label_19b340;
        case 0x19b344u: goto label_19b344;
        case 0x19b348u: goto label_19b348;
        case 0x19b34cu: goto label_19b34c;
        case 0x19b350u: goto label_19b350;
        case 0x19b354u: goto label_19b354;
        case 0x19b358u: goto label_19b358;
        case 0x19b35cu: goto label_19b35c;
        case 0x19b360u: goto label_19b360;
        case 0x19b364u: goto label_19b364;
        case 0x19b368u: goto label_19b368;
        case 0x19b36cu: goto label_19b36c;
        case 0x19b370u: goto label_19b370;
        case 0x19b374u: goto label_19b374;
        case 0x19b378u: goto label_19b378;
        case 0x19b37cu: goto label_19b37c;
        case 0x19b380u: goto label_19b380;
        case 0x19b384u: goto label_19b384;
        case 0x19b388u: goto label_19b388;
        case 0x19b38cu: goto label_19b38c;
        case 0x19b390u: goto label_19b390;
        case 0x19b394u: goto label_19b394;
        case 0x19b398u: goto label_19b398;
        case 0x19b39cu: goto label_19b39c;
        case 0x19b3a0u: goto label_19b3a0;
        case 0x19b3a4u: goto label_19b3a4;
        case 0x19b3a8u: goto label_19b3a8;
        case 0x19b3acu: goto label_19b3ac;
        case 0x19b3b0u: goto label_19b3b0;
        case 0x19b3b4u: goto label_19b3b4;
        case 0x19b3b8u: goto label_19b3b8;
        case 0x19b3bcu: goto label_19b3bc;
        case 0x19b3c0u: goto label_19b3c0;
        case 0x19b3c4u: goto label_19b3c4;
        case 0x19b3c8u: goto label_19b3c8;
        case 0x19b3ccu: goto label_19b3cc;
        case 0x19b3d0u: goto label_19b3d0;
        case 0x19b3d4u: goto label_19b3d4;
        case 0x19b3d8u: goto label_19b3d8;
        case 0x19b3dcu: goto label_19b3dc;
        case 0x19b3e0u: goto label_19b3e0;
        case 0x19b3e4u: goto label_19b3e4;
        case 0x19b3e8u: goto label_19b3e8;
        case 0x19b3ecu: goto label_19b3ec;
        case 0x19b3f0u: goto label_19b3f0;
        case 0x19b3f4u: goto label_19b3f4;
        case 0x19b3f8u: goto label_19b3f8;
        case 0x19b3fcu: goto label_19b3fc;
        case 0x19b400u: goto label_19b400;
        case 0x19b404u: goto label_19b404;
        case 0x19b408u: goto label_19b408;
        case 0x19b40cu: goto label_19b40c;
        case 0x19b410u: goto label_19b410;
        case 0x19b414u: goto label_19b414;
        case 0x19b418u: goto label_19b418;
        case 0x19b41cu: goto label_19b41c;
        case 0x19b420u: goto label_19b420;
        case 0x19b424u: goto label_19b424;
        case 0x19b428u: goto label_19b428;
        case 0x19b42cu: goto label_19b42c;
        case 0x19b430u: goto label_19b430;
        case 0x19b434u: goto label_19b434;
        case 0x19b438u: goto label_19b438;
        case 0x19b43cu: goto label_19b43c;
        case 0x19b440u: goto label_19b440;
        case 0x19b444u: goto label_19b444;
        case 0x19b448u: goto label_19b448;
        case 0x19b44cu: goto label_19b44c;
        case 0x19b450u: goto label_19b450;
        case 0x19b454u: goto label_19b454;
        default: break;
    }

    ctx->pc = 0x19b1a8u;

label_19b1a8:
    // 0x19b1a8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x19b1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_19b1ac:
    // 0x19b1ac: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x19b1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_19b1b0:
    // 0x19b1b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19b1b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19b1b4:
    // 0x19b1b4: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x19b1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_19b1b8:
    // 0x19b1b8: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x19b1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_19b1bc:
    // 0x19b1bc: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x19b1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_19b1c0:
    // 0x19b1c0: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x19b1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_19b1c4:
    // 0x19b1c4: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x19b1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_19b1c8:
    // 0x19b1c8: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x19b1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_19b1cc:
    // 0x19b1cc: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x19b1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_19b1d0:
    // 0x19b1d0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x19b1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_19b1d4:
    // 0x19b1d4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x19b1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_19b1d8:
    // 0x19b1d8: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x19b1d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_19b1dc:
    // 0x19b1dc: 0xc06ddac  jal         func_1B76B0
label_19b1e0:
    if (ctx->pc == 0x19B1E0u) {
        ctx->pc = 0x19B1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B1DCu;
        // 0x19b1e0: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B1E4u;
        goto label_19b1e4;
    }
    ctx->pc = 0x19B1DCu;
    SET_GPR_U32(ctx, 31, 0x19B1E4u);
    ctx->pc = 0x19B1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B1DCu;
    // 0x19b1e0: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x19B1DCu, 0x19B1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B1E4u;
label_19b1e4:
    // 0x19b1e4: 0x1040008e  beqz        $v0, . + 4 + (0x8E << 2)
label_19b1e8:
    if (ctx->pc == 0x19B1E8u) {
        ctx->pc = 0x19B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B1E4u;
        // 0x19b1e8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B1ECu;
        goto label_19b1ec;
    }
    ctx->pc = 0x19B1E4u;
    {
        const bool branch_taken_0x19b1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B1E4u;
        // 0x19b1e8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b1e4) {
            ctx->pc = 0x19B420u;
            goto label_19b420;
        }
    }
    ctx->pc = 0x19B1ECu;
label_19b1ec:
    // 0x19b1ec: 0x924302f4  lbu         $v1, 0x2F4($s2)
    ctx->pc = 0x19b1ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
label_19b1f0:
    // 0x19b1f0: 0x24475800  addiu       $a3, $v0, 0x5800
    ctx->pc = 0x19b1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 22528));
label_19b1f4:
    // 0x19b1f4: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x19b1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_19b1f8:
    // 0x19b1f8: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x19b1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_19b1fc:
    // 0x19b1fc: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x19b1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_19b200:
    // 0x19b200: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x19b200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_19b204:
    // 0x19b204: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x19b204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_19b208:
    // 0x19b208: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x19b208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_19b20c:
    // 0x19b20c: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x19b20cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19b210:
    // 0x19b210: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x19b210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19b214:
    // 0x19b214: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x19b214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19b218:
    // 0x19b218: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x19b218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19b21c:
    // 0x19b21c: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x19b21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19b220:
    // 0x19b220: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x19b220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19b224:
    // 0x19b224: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x19b224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_19b228:
    // 0x19b228: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x19b228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_19b22c:
    // 0x19b22c: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x19b22cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19b230:
    // 0x19b230: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x19b230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19b234:
    // 0x19b234: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19b234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_19b238:
    // 0x19b238: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x19b238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_19b23c:
    // 0x19b23c: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x19b23cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_19b240:
    // 0x19b240: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x19b240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_19b244:
    // 0x19b244: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x19b244u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_19b248:
    // 0x19b248: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_19b24c:
    if (ctx->pc == 0x19B24Cu) {
        ctx->pc = 0x19B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B248u;
        // 0x19b24c: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B250u;
        goto label_19b250;
    }
    ctx->pc = 0x19B248u;
    {
        const bool branch_taken_0x19b248 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x19B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B248u;
        // 0x19b24c: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b248) {
            ctx->pc = 0x19B27Cu;
            goto label_19b27c;
        }
    }
    ctx->pc = 0x19B250u;
label_19b250:
    // 0x19b250: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x19b250u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_19b254:
    // 0x19b254: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x19b254u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_19b258:
    // 0x19b258: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x19b258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_19b25c:
    // 0x19b25c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x19b25cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_19b260:
    // 0x19b260: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x19b260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_19b264:
    // 0x19b264: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19b264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19b268:
    // 0x19b268: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x19b268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_19b26c:
    // 0x19b26c: 0xdc90fff8  ld          $s0, -0x8($a0)
    ctx->pc = 0x19b26cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_19b270:
    // 0x19b270: 0x10303f  dsra32      $a2, $s0, 0
    ctx->pc = 0x19b270u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 16) >> (32 + 0));
label_19b274:
    // 0x19b274: 0x10000004  b           . + 4 + (0x4 << 2)
label_19b278:
    if (ctx->pc == 0x19B278u) {
        ctx->pc = 0x19B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B274u;
        // 0x19b278: 0x924202f4  lbu         $v0, 0x2F4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B27Cu;
        goto label_19b27c;
    }
    ctx->pc = 0x19B274u;
    {
        const bool branch_taken_0x19b274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B274u;
        // 0x19b278: 0x924202f4  lbu         $v0, 0x2F4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b274) {
            ctx->pc = 0x19B288u;
            goto label_19b288;
        }
    }
    ctx->pc = 0x19B27Cu;
label_19b27c:
    // 0x19b27c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19b280:
    // 0x19b280: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x19b280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19b284:
    // 0x19b284: 0x924202f4  lbu         $v0, 0x2F4($s2)
    ctx->pc = 0x19b284u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
label_19b288:
    // 0x19b288: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19b288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_19b28c:
    // 0x19b28c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x19b28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_19b290:
    // 0x19b290: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_19b294:
    if (ctx->pc == 0x19B294u) {
        ctx->pc = 0x19B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B290u;
        // 0x19b294: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B298u;
        goto label_19b298;
    }
    ctx->pc = 0x19B290u;
    {
        const bool branch_taken_0x19b290 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x19B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B290u;
        // 0x19b294: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b290) {
            ctx->pc = 0x19B2ACu;
            goto label_19b2ac;
        }
    }
    ctx->pc = 0x19B298u;
label_19b298:
    // 0x19b298: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x19b298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_19b29c:
    // 0x19b29c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x19b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_19b2a0:
    // 0x19b2a0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x19b2a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_19b2a4:
    // 0x19b2a4: 0x10000002  b           . + 4 + (0x2 << 2)
label_19b2a8:
    if (ctx->pc == 0x19B2A8u) {
        ctx->pc = 0x19B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2A4u;
        // 0x19b2a8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B2ACu;
        goto label_19b2ac;
    }
    ctx->pc = 0x19B2A4u;
    {
        const bool branch_taken_0x19b2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2A4u;
        // 0x19b2a8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b2a4) {
            ctx->pc = 0x19B2B0u;
            goto label_19b2b0;
        }
    }
    ctx->pc = 0x19B2ACu;
label_19b2ac:
    // 0x19b2ac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x19b2acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19b2b0:
    // 0x19b2b0: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x19b2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_19b2b4:
    // 0x19b2b4: 0xc0f809  jalr        $a2
label_19b2b8:
    if (ctx->pc == 0x19B2B8u) {
        ctx->pc = 0x19B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2B4u;
        // 0x19b2b8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B2BCu;
        goto label_19b2bc;
    }
    ctx->pc = 0x19B2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x19B2BCu);
        ctx->pc = 0x19B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2B4u;
        // 0x19b2b8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B2B4u, 0x19B2BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B2BCu;
label_19b2bc:
    // 0x19b2bc: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x19b2bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_19b2c0:
    // 0x19b2c0: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_19b2c4:
    if (ctx->pc == 0x19B2C4u) {
        ctx->pc = 0x19B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2C0u;
        // 0x19b2c4: 0x27be0030  addiu       $fp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B2C8u;
        goto label_19b2c8;
    }
    ctx->pc = 0x19B2C0u;
    {
        const bool branch_taken_0x19b2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2C0u;
        // 0x19b2c4: 0x27be0030  addiu       $fp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b2c0) {
            ctx->pc = 0x19B40Cu;
            goto label_19b40c;
        }
    }
    ctx->pc = 0x19B2C8u;
label_19b2c8:
    // 0x19b2c8: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x19b2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_19b2cc:
    // 0x19b2cc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x19b2ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_19b2d0:
    // 0x19b2d0: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x19b2d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_19b2d4:
    // 0x19b2d4: 0x26550650  addiu       $s5, $s2, 0x650
    ctx->pc = 0x19b2d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1616));
label_19b2d8:
    // 0x19b2d8: 0x26500620  addiu       $s0, $s2, 0x620
    ctx->pc = 0x19b2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1568));
label_19b2dc:
    // 0x19b2dc: 0x26540640  addiu       $s4, $s2, 0x640
    ctx->pc = 0x19b2dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1600));
label_19b2e0:
    // 0x19b2e0: 0x26530630  addiu       $s3, $s2, 0x630
    ctx->pc = 0x19b2e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1584));
label_19b2e4:
    // 0x19b2e4: 0x26510610  addiu       $s1, $s2, 0x610
    ctx->pc = 0x19b2e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1552));
label_19b2e8:
    // 0x19b2e8: 0xc05ce40  jal         func_173900
label_19b2ec:
    if (ctx->pc == 0x19B2ECu) {
        ctx->pc = 0x19B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2E8u;
        // 0x19b2ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B2F0u;
        goto label_19b2f0;
    }
    ctx->pc = 0x19B2E8u;
    SET_GPR_U32(ctx, 31, 0x19B2F0u);
    ctx->pc = 0x19B2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B2E8u;
    // 0x19b2ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x19B2E8u, 0x19B2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B2F0u;
label_19b2f0:
    // 0x19b2f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19b2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19b2f4:
    // 0x19b2f4: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_19b2f8:
    if (ctx->pc == 0x19B2F8u) {
        ctx->pc = 0x19B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2F4u;
        // 0x19b2f8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B2FCu;
        goto label_19b2fc;
    }
    ctx->pc = 0x19B2F4u;
    {
        const bool branch_taken_0x19b2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19b2f4) {
            ctx->pc = 0x19B2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B2F4u;
            // 0x19b2f8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B3E4u;
            goto label_19b3e4;
        }
    }
    ctx->pc = 0x19B2FCu;
label_19b2fc:
    // 0x19b2fc: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x19b2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_19b300:
    // 0x19b300: 0xc0a4bd4  jal         func_292F50
label_19b304:
    if (ctx->pc == 0x19B304u) {
        ctx->pc = 0x19B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B300u;
        // 0x19b304: 0x24a464f0  addiu       $a0, $a1, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B308u;
        goto label_19b308;
    }
    ctx->pc = 0x19B300u;
    SET_GPR_U32(ctx, 31, 0x19B308u);
    ctx->pc = 0x19B304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B300u;
    // 0x19b304: 0x24a464f0  addiu       $a0, $a1, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x19B300u, 0x19B308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B308u;
label_19b308:
    // 0x19b308: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x19b308u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_19b30c:
    // 0x19b30c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x19b30cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_19b310:
    // 0x19b310: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x19b310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_19b314:
    // 0x19b314: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x19b314u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19b318:
    // 0x19b318: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x19b318u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_19b31c:
    // 0x19b31c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x19b31cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_19b320:
    // 0x19b320: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x19b320u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19b324:
    // 0x19b324: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x19b324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_19b328:
    // 0x19b328: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x19b328u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_19b32c:
    // 0x19b32c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x19b32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_19b330:
    // 0x19b330: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x19b330u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_19b334:
    // 0x19b334: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x19b334u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_19b338:
    // 0x19b338: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x19b338u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19b33c:
    // 0x19b33c: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x19b33cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_19b340:
    // 0x19b340: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x19b340u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_19b344:
    // 0x19b344: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x19b344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_19b348:
    // 0x19b348: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x19b348u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19b34c:
    // 0x19b34c: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x19b34cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_19b350:
    // 0x19b350: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x19b350u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_19b354:
    // 0x19b354: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x19b354u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19b358:
    // 0x19b358: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x19b358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_19b35c:
    // 0x19b35c: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x19b35cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_19b360:
    // 0x19b360: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x19b360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_19b364:
    // 0x19b364: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x19b364u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_19b368:
    // 0x19b368: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x19b368u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_19b36c:
    // 0x19b36c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x19b36cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19b370:
    // 0x19b370: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x19b370u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_19b374:
    // 0x19b374: 0xc07df68  jal         func_1F7DA0
label_19b378:
    if (ctx->pc == 0x19B378u) {
        ctx->pc = 0x19B378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B374u;
        // 0x19b378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B37Cu;
        goto label_19b37c;
    }
    ctx->pc = 0x19B374u;
    SET_GPR_U32(ctx, 31, 0x19B37Cu);
    ctx->pc = 0x19B378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B374u;
    // 0x19b378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x19B374u, 0x19B37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B37Cu;
label_19b37c:
    // 0x19b37c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x19b37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_19b380:
    // 0x19b380: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19b380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b384:
    // 0x19b384: 0xc051dca  jal         func_147728
label_19b388:
    if (ctx->pc == 0x19B388u) {
        ctx->pc = 0x19B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B384u;
        // 0x19b388: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B38Cu;
        goto label_19b38c;
    }
    ctx->pc = 0x19B384u;
    SET_GPR_U32(ctx, 31, 0x19B38Cu);
    ctx->pc = 0x19B388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B384u;
    // 0x19b388: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x19B384u, 0x19B38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B38Cu;
label_19b38c:
    // 0x19b38c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x19b38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_19b390:
    // 0x19b390: 0xc051f10  jal         func_147C40
label_19b394:
    if (ctx->pc == 0x19B394u) {
        ctx->pc = 0x19B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B390u;
        // 0x19b394: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B398u;
        goto label_19b398;
    }
    ctx->pc = 0x19B390u;
    SET_GPR_U32(ctx, 31, 0x19B398u);
    ctx->pc = 0x19B394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B390u;
    // 0x19b394: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x19B390u, 0x19B398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B398u;
label_19b398:
    // 0x19b398: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x19b398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_19b39c:
    // 0x19b39c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x19b39cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19b3a0:
    // 0x19b3a0: 0xc051efe  jal         func_147BF8
label_19b3a4:
    if (ctx->pc == 0x19B3A4u) {
        ctx->pc = 0x19B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B3A0u;
        // 0x19b3a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B3A8u;
        goto label_19b3a8;
    }
    ctx->pc = 0x19B3A0u;
    SET_GPR_U32(ctx, 31, 0x19B3A8u);
    ctx->pc = 0x19B3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B3A0u;
    // 0x19b3a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x19B3A0u, 0x19B3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B3A8u;
label_19b3a8:
    // 0x19b3a8: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x19b3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_19b3ac:
    // 0x19b3ac: 0xc051d4a  jal         func_147528
label_19b3b0:
    if (ctx->pc == 0x19B3B0u) {
        ctx->pc = 0x19B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B3ACu;
        // 0x19b3b0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B3B4u;
        goto label_19b3b4;
    }
    ctx->pc = 0x19B3ACu;
    SET_GPR_U32(ctx, 31, 0x19B3B4u);
    ctx->pc = 0x19B3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B3ACu;
    // 0x19b3b0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x19B3ACu, 0x19B3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B3B4u;
label_19b3b4:
    // 0x19b3b4: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x19b3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19b3b8:
    // 0x19b3b8: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x19b3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19b3bc:
    // 0x19b3bc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x19b3bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_19b3c0:
    // 0x19b3c0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19b3c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19b3c4:
    // 0x19b3c4: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x19b3c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19b3c8:
    // 0x19b3c8: 0x0  nop
    ctx->pc = 0x19b3c8u;
    // NOP
label_19b3cc:
    // 0x19b3cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_19b3d0:
    if (ctx->pc == 0x19B3D0u) {
        ctx->pc = 0x19B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B3CCu;
        // 0x19b3d0: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B3D4u;
        goto label_19b3d4;
    }
    ctx->pc = 0x19B3CCu;
    {
        const bool branch_taken_0x19b3cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B3CCu;
        // 0x19b3d0: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b3cc) {
            ctx->pc = 0x19B3E0u;
            goto label_19b3e0;
        }
    }
    ctx->pc = 0x19B3D4u;
label_19b3d4:
    // 0x19b3d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19b3d8:
    // 0x19b3d8: 0xc05bd90  jal         func_16F640
label_19b3dc:
    if (ctx->pc == 0x19B3DCu) {
        ctx->pc = 0x19B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B3D8u;
        // 0x19b3dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B3E0u;
        goto label_19b3e0;
    }
    ctx->pc = 0x19B3D8u;
    SET_GPR_U32(ctx, 31, 0x19B3E0u);
    ctx->pc = 0x19B3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B3D8u;
    // 0x19b3dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x19B3D8u, 0x19B3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B3E0u;
label_19b3e0:
    // 0x19b3e0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x19b3e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_19b3e4:
    // 0x19b3e4: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x19b3e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_19b3e8:
    // 0x19b3e8: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x19b3e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_19b3ec:
    // 0x19b3ec: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x19b3ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_19b3f0:
    // 0x19b3f0: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x19b3f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_19b3f4:
    // 0x19b3f4: 0x2ac2000c  slti        $v0, $s6, 0xC
    ctx->pc = 0x19b3f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)12) ? 1 : 0);
label_19b3f8:
    // 0x19b3f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19b3fc:
    if (ctx->pc == 0x19B3FCu) {
        ctx->pc = 0x19B3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B3F8u;
        // 0x19b3fc: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B400u;
        goto label_19b400;
    }
    ctx->pc = 0x19B3F8u;
    {
        const bool branch_taken_0x19b3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B3F8u;
        // 0x19b3fc: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b3f8) {
            ctx->pc = 0x19B40Cu;
            goto label_19b40c;
        }
    }
    ctx->pc = 0x19B400u;
label_19b400:
    // 0x19b400: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x19b400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_19b404:
    // 0x19b404: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_19b408:
    if (ctx->pc == 0x19B408u) {
        ctx->pc = 0x19B40Cu;
        goto label_19b40c;
    }
    ctx->pc = 0x19B404u;
    {
        const bool branch_taken_0x19b404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x19b404) {
            ctx->pc = 0x19B2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b2e8;
        }
    }
    ctx->pc = 0x19B40Cu;
label_19b40c:
    // 0x19b40c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19b40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19b410:
    // 0x19b410: 0xc0aa1fa  jal         func_2A87E8
label_19b414:
    if (ctx->pc == 0x19B414u) {
        ctx->pc = 0x19B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B410u;
        // 0x19b414: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B418u;
        goto label_19b418;
    }
    ctx->pc = 0x19B410u;
    SET_GPR_U32(ctx, 31, 0x19B418u);
    ctx->pc = 0x19B414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B410u;
    // 0x19b414: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x19B410u, 0x19B418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B418u;
label_19b418:
    // 0x19b418: 0xc06ddb6  jal         func_1B76D8
label_19b41c:
    if (ctx->pc == 0x19B41Cu) {
        ctx->pc = 0x19B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B418u;
        // 0x19b41c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B420u;
        goto label_19b420;
    }
    ctx->pc = 0x19B418u;
    SET_GPR_U32(ctx, 31, 0x19B420u);
    ctx->pc = 0x19B41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B418u;
    // 0x19b41c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x19B418u, 0x19B420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B420u;
label_19b420:
    // 0x19b420: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x19b420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_19b424:
    // 0x19b424: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x19b424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_19b428:
    // 0x19b428: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x19b428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_19b42c:
    // 0x19b42c: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x19b42cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_19b430:
    // 0x19b430: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x19b430u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_19b434:
    // 0x19b434: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x19b434u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_19b438:
    // 0x19b438: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x19b438u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_19b43c:
    // 0x19b43c: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x19b43cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_19b440:
    // 0x19b440: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x19b440u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_19b444:
    // 0x19b444: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x19b444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19b448:
    // 0x19b448: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x19b448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_19b44c:
    // 0x19b44c: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x19b44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19b450:
    // 0x19b450: 0x3e00008  jr          $ra
label_19b454:
    if (ctx->pc == 0x19B454u) {
        ctx->pc = 0x19B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B450u;
        // 0x19b454: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B458u;
        goto label_fallthrough_0x19b450;
    }
    ctx->pc = 0x19B450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B450u;
        // 0x19b454: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19b450:
    ctx->pc = 0x19B458u;
}
