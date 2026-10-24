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

// Function: func_001AB168
// Address: 0x1ab168 - 0x1ab730
void func_001AB168_0x1ab168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AB168_0x1ab168");
#endif

    switch (ctx->pc) {
        case 0x1ab2fcu: goto label_1ab2fc;
        case 0x1ab3f0u: goto label_1ab3f0;
        case 0x1ab454u: goto label_1ab454;
        case 0x1ab45cu: goto label_1ab45c;
        case 0x1ab46cu: goto label_1ab46c;
        case 0x1ab498u: goto label_1ab498;
        case 0x1ab4b4u: goto label_1ab4b4;
        case 0x1ab514u: goto label_1ab514;
        case 0x1ab524u: goto label_1ab524;
        case 0x1ab570u: goto label_1ab570;
        case 0x1ab58cu: goto label_1ab58c;
        case 0x1ab598u: goto label_1ab598;
        case 0x1ab5acu: goto label_1ab5ac;
        case 0x1ab5f8u: goto label_1ab5f8;
        case 0x1ab614u: goto label_1ab614;
        case 0x1ab620u: goto label_1ab620;
        case 0x1ab62cu: goto label_1ab62c;
        case 0x1ab670u: goto label_1ab670;
        case 0x1ab6a4u: goto label_1ab6a4;
        case 0x1ab6ccu: goto label_1ab6cc;
        case 0x1ab6e0u: goto label_1ab6e0;
        default: break;
    }

    ctx->pc = 0x1ab168u;

    // 0x1ab168: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1ab168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1ab16c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1ab16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x1ab170: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1ab170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x1ab174: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab178: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1ab178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1ab17c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1ab17cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1ab180: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x1ab180u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1ab184: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1ab184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1ab188: 0x8e050304  lw          $a1, 0x304($s0)
    ctx->pc = 0x1ab188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1ab18c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1ab18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1ab190: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ab190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ab194: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1ab194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1ab198: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x1ab198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1ab19c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ab19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ab1a0: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1ab1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1ab1a4: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x1ab1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1ab1a8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ab1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ab1ac: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1ab1acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1ab1b0: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1ab1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ab1b4: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1ab1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ab1b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1ab1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ab1bc: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1ab1bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab1c0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1ab1c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab1c4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1ab1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1ab1c8: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1ab1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1ab1cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ab1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ab1d0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1ab1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1ab1d4: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x1ab1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1ab1d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ab1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ab1dc: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1ab1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x1ab1e0: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x1ab1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1ab1e4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ab1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ab1e8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1ab1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x1ab1ec: 0x6ba80027  ldl         $t0, 0x27($sp)
    ctx->pc = 0x1ab1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1ab1f0: 0x6fa80020  ldr         $t0, 0x20($sp)
    ctx->pc = 0x1ab1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1ab1f4: 0x8fa90028  lw          $t1, 0x28($sp)
    ctx->pc = 0x1ab1f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ab1f8: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x1ab1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab1fc: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x1ab1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab200: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x1ab200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    // 0x1ab204: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1ab204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1ab208: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ab208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ab20c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1ab20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1ab210: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x1ab210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1ab214: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ab214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ab218: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x1ab218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x1ab21c: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x1ab21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1ab220: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ab220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ab224: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1ab224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x1ab228: 0x6ba30037  ldl         $v1, 0x37($sp)
    ctx->pc = 0x1ab228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ab22c: 0x6fa30030  ldr         $v1, 0x30($sp)
    ctx->pc = 0x1ab22cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ab230: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1ab230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ab234: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x1ab234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab238: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x1ab238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab23c: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x1ab23cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x1ab240: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x1ab240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x1ab244: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ab244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ab248: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1ab248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1ab24c: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x1ab24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x1ab250: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ab250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ab254: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1ab254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x1ab258: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x1ab258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x1ab25c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ab25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ab260: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1ab260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1ab264: 0x6ba90047  ldl         $t1, 0x47($sp)
    ctx->pc = 0x1ab264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1ab268: 0x6fa90040  ldr         $t1, 0x40($sp)
    ctx->pc = 0x1ab268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1ab26c: 0x8faa0048  lw          $t2, 0x48($sp)
    ctx->pc = 0x1ab26cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ab270: 0xb3a90037  sdl         $t1, 0x37($sp)
    ctx->pc = 0x1ab270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab274: 0xb7a90030  sdr         $t1, 0x30($sp)
    ctx->pc = 0x1ab274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab278: 0xafaa0038  sw          $t2, 0x38($sp)
    ctx->pc = 0x1ab278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 10));
    // 0x1ab27c: 0x8ca2005c  lw          $v0, 0x5C($a1)
    ctx->pc = 0x1ab27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x1ab280: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ab280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ab284: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1ab284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1ab288: 0x8ca30060  lw          $v1, 0x60($a1)
    ctx->pc = 0x1ab288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x1ab28c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ab28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ab290: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x1ab290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x1ab294: 0x8ca20064  lw          $v0, 0x64($a1)
    ctx->pc = 0x1ab294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x1ab298: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ab298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ab29c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1ab29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x1ab2a0: 0x6ba60057  ldl         $a2, 0x57($sp)
    ctx->pc = 0x1ab2a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1ab2a4: 0x6fa60050  ldr         $a2, 0x50($sp)
    ctx->pc = 0x1ab2a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1ab2a8: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x1ab2a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ab2ac: 0xb3a60047  sdl         $a2, 0x47($sp)
    ctx->pc = 0x1ab2acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab2b0: 0xb7a60040  sdr         $a2, 0x40($sp)
    ctx->pc = 0x1ab2b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab2b4: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x1ab2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
    // 0x1ab2b8: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x1ab2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x1ab2bc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ab2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ab2c0: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x1ab2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x1ab2c4: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x1ab2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x1ab2c8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ab2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ab2cc: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x1ab2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    // 0x1ab2d0: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x1ab2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1ab2d4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ab2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ab2d8: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1ab2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x1ab2dc: 0x6baa0067  ldl         $t2, 0x67($sp)
    ctx->pc = 0x1ab2dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1ab2e0: 0x6faa0060  ldr         $t2, 0x60($sp)
    ctx->pc = 0x1ab2e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1ab2e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ab2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ab2e8: 0xb3aa0057  sdl         $t2, 0x57($sp)
    ctx->pc = 0x1ab2e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab2ec: 0xb7aa0050  sdr         $t2, 0x50($sp)
    ctx->pc = 0x1ab2ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab2f0: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1ab2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x1ab2f4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x1AB2F4u;
    SET_GPR_U32(ctx, 31, 0x1AB2FCu);
    ctx->pc = 0x1AB2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB2F4u;
    // 0x1ab2f8: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x1AB2F4u, 0x1AB2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB2FCu;
label_1ab2fc:
    // 0x1ab2fc: 0x920602f6  lbu         $a2, 0x2F6($s0)
    ctx->pc = 0x1ab2fcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1ab300: 0x28430006  slti        $v1, $v0, 0x6
    ctx->pc = 0x1ab300u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1ab304: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x1ab304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x1ab308: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x1ab308u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x1ab30c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1ab30cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1ab310: 0x248a7c90  addiu       $t2, $a0, 0x7C90
    ctx->pc = 0x1ab310u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 31888));
    // 0x1ab314: 0x69470007  ldl         $a3, 0x7($t2)
    ctx->pc = 0x1ab314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1ab318: 0x6d470000  ldr         $a3, 0x0($t2)
    ctx->pc = 0x1ab318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1ab31c: 0x6948000f  ldl         $t0, 0xF($t2)
    ctx->pc = 0x1ab31cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1ab320: 0x6d480008  ldr         $t0, 0x8($t2)
    ctx->pc = 0x1ab320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1ab324: 0x69490017  ldl         $t1, 0x17($t2)
    ctx->pc = 0x1ab324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1ab328: 0x6d490010  ldr         $t1, 0x10($t2)
    ctx->pc = 0x1ab328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1ab32c: 0xb3a70077  sdl         $a3, 0x77($sp)
    ctx->pc = 0x1ab32cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab330: 0xb7a70070  sdr         $a3, 0x70($sp)
    ctx->pc = 0x1ab330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab334: 0xb3a8007f  sdl         $t0, 0x7F($sp)
    ctx->pc = 0x1ab334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab338: 0xb7a80078  sdr         $t0, 0x78($sp)
    ctx->pc = 0x1ab338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab33c: 0xb3a90087  sdl         $t1, 0x87($sp)
    ctx->pc = 0x1ab33cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab340: 0xb7a90080  sdr         $t1, 0x80($sp)
    ctx->pc = 0x1ab340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab344: 0x2cc20005  sltiu       $v0, $a2, 0x5
    ctx->pc = 0x1ab344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ab348: 0x24a87ca8  addiu       $t0, $a1, 0x7CA8
    ctx->pc = 0x1ab348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 31912));
    // 0x1ab34c: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x1ab34cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ab350: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x1ab350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ab354: 0x6904000f  ldl         $a0, 0xF($t0)
    ctx->pc = 0x1ab354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1ab358: 0x6d040008  ldr         $a0, 0x8($t0)
    ctx->pc = 0x1ab358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1ab35c: 0x69070017  ldl         $a3, 0x17($t0)
    ctx->pc = 0x1ab35cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1ab360: 0x6d070010  ldr         $a3, 0x10($t0)
    ctx->pc = 0x1ab360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1ab364: 0xb3a30097  sdl         $v1, 0x97($sp)
    ctx->pc = 0x1ab364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab368: 0xb7a30090  sdr         $v1, 0x90($sp)
    ctx->pc = 0x1ab368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab36c: 0xb3a4009f  sdl         $a0, 0x9F($sp)
    ctx->pc = 0x1ab36cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab370: 0xb7a40098  sdr         $a0, 0x98($sp)
    ctx->pc = 0x1ab370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab374: 0xb3a700a7  sdl         $a3, 0xA7($sp)
    ctx->pc = 0x1ab374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab378: 0xb7a700a0  sdr         $a3, 0xA0($sp)
    ctx->pc = 0x1ab378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab37c: 0x104000e6  beqz        $v0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x1AB37Cu;
    {
        const bool branch_taken_0x1ab37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB37Cu;
        // 0x1ab380: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab37c) {
            ctx->pc = 0x1AB718u;
            goto label_1ab718;
        }
    }
    ctx->pc = 0x1AB384u;
    // 0x1ab384: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1ab384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ab388: 0x24427cc0  addiu       $v0, $v0, 0x7CC0
    ctx->pc = 0x1ab388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31936));
    // 0x1ab38c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ab38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ab390: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ab390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ab394: 0x800008  jr          $a0
    ctx->pc = 0x1AB394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AB39Cu: goto label_1ab39c;
            case 0x1AB3FCu: goto label_1ab3fc;
            case 0x1AB5A0u: goto label_1ab5a0;
            case 0x1AB604u: goto label_1ab604;
            case 0x1AB680u: goto label_1ab680;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB394u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1AB39Cu;
label_1ab39c:
    // 0x1ab39c: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x1ab39cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x1ab3a0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1ab3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1ab3a4: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x1ab3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1ab3a8: 0x8e0809d0  lw          $t0, 0x9D0($s0)
    ctx->pc = 0x1ab3a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2512)));
    // 0x1ab3ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ab3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ab3b0: 0x8c890090  lw          $t1, 0x90($a0)
    ctx->pc = 0x1ab3b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x1ab3b4: 0x3a33821  addu        $a3, $sp, $v1
    ctx->pc = 0x1ab3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1ab3b8: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x1ab3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x1ab3bc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1ab3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab3c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ab3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ab3c4: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x1ab3c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1ab3c8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1ab3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ab3cc: 0x8ce60030  lw          $a2, 0x30($a3)
    ctx->pc = 0x1ab3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1ab3d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab3d4: 0xae0809d0  sw          $t0, 0x9D0($s0)
    ctx->pc = 0x1ab3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2512), GPR_U32(ctx, 8));
    // 0x1ab3d8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1ab3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ab3dc: 0xae0909dc  sw          $t1, 0x9DC($s0)
    ctx->pc = 0x1ab3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2524), GPR_U32(ctx, 9));
    // 0x1ab3e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ab3e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab3e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ab3e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ab3e8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1AB3E8u;
    SET_GPR_U32(ctx, 31, 0x1AB3F0u);
    ctx->pc = 0x1AB3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB3E8u;
    // 0x1ab3ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1AB3E8u, 0x1AB3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB3F0u;
label_1ab3f0:
    // 0x1ab3f0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1ab3f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1ab3f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ab3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ab3f8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1ab3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1ab3fc:
    // 0x1ab3fc: 0x8e0209dc  lw          $v0, 0x9DC($s0)
    ctx->pc = 0x1ab3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2524)));
    // 0x1ab400: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ab400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ab404: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AB404u;
    {
        const bool branch_taken_0x1ab404 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1AB408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB404u;
        // 0x1ab408: 0xae0209dc  sw          $v0, 0x9DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab404) {
            ctx->pc = 0x1AB420u;
            goto label_1ab420;
        }
    }
    ctx->pc = 0x1AB40Cu;
    // 0x1ab40c: 0x8e0209d0  lw          $v0, 0x9D0($s0)
    ctx->pc = 0x1ab40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2512)));
    // 0x1ab410: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1ab410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1ab414: 0xae0009dc  sw          $zero, 0x9DC($s0)
    ctx->pc = 0x1ab414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2524), GPR_U32(ctx, 0));
    // 0x1ab418: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ab418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ab41c: 0xae0209d0  sw          $v0, 0x9D0($s0)
    ctx->pc = 0x1ab41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2512), GPR_U32(ctx, 2));
label_1ab420:
    // 0x1ab420: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x1ab420u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x1ab424: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ab424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ab428: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AB428u;
    {
        const bool branch_taken_0x1ab428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab428) {
            ctx->pc = 0x1AB454u;
            goto label_1ab454;
        }
    }
    ctx->pc = 0x1AB430u;
    // 0x1ab430: 0x8e030608  lw          $v1, 0x608($s0)
    ctx->pc = 0x1ab430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    // 0x1ab434: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB434u;
    {
        const bool branch_taken_0x1ab434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB434u;
        // 0x1ab438: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab434) {
            ctx->pc = 0x1AB454u;
            goto label_1ab454;
        }
    }
    ctx->pc = 0x1AB43Cu;
    // 0x1ab43c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ab43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab440: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1ab440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1ab444: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ab444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab448: 0x8e040608  lw          $a0, 0x608($s0)
    ctx->pc = 0x1ab448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    // 0x1ab44c: 0xc07f5ae  jal         func_1FD6B8
    ctx->pc = 0x1AB44Cu;
    SET_GPR_U32(ctx, 31, 0x1AB454u);
    ctx->pc = 0x1AB450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB44Cu;
    // 0x1ab450: 0x8e05061c  lw          $a1, 0x61C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1564)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD6B8u, 0x1AB44Cu, 0x1AB454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB454u;
label_1ab454:
    // 0x1ab454: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1AB454u;
    SET_GPR_U32(ctx, 31, 0x1AB45Cu);
    ctx->pc = 0x1AB458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB454u;
    // 0x1ab458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1AB454u, 0x1AB45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB45Cu;
label_1ab45c:
    // 0x1ab45c: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1AB45Cu;
    {
        const bool branch_taken_0x1ab45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB45Cu;
        // 0x1ab460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab45c) {
            ctx->pc = 0x1AB578u;
            goto label_1ab578;
        }
    }
    ctx->pc = 0x1AB464u;
    // 0x1ab464: 0xc06aed6  jal         func_1ABB58
    ctx->pc = 0x1AB464u;
    SET_GPR_U32(ctx, 31, 0x1AB46Cu);
    ctx->pc = 0x1AB468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB464u;
    // 0x1ab468: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABB58u, 0x1AB464u, 0x1AB46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB46Cu;
label_1ab46c:
    // 0x1ab46c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB46Cu;
    {
        const bool branch_taken_0x1ab46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB46Cu;
        // 0x1ab470: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab46c) {
            ctx->pc = 0x1AB48Cu;
            goto label_1ab48c;
        }
    }
    ctx->pc = 0x1AB474u;
    // 0x1ab474: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1ab474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1ab478: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x1ab478u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ab47c: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x1ab47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1ab480: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x1ab480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x1ab484: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1AB484u;
    {
        const bool branch_taken_0x1ab484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB484u;
        // 0x1ab488: 0xae0209d8  sw          $v0, 0x9D8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab484) {
            ctx->pc = 0x1AB578u;
            goto label_1ab578;
        }
    }
    ctx->pc = 0x1AB48Cu;
label_1ab48c:
    // 0x1ab48c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab490: 0xc06aefa  jal         func_1ABBE8
    ctx->pc = 0x1AB490u;
    SET_GPR_U32(ctx, 31, 0x1AB498u);
    ctx->pc = 0x1AB494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB490u;
    // 0x1ab494: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABBE8u, 0x1AB490u, 0x1AB498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB498u;
label_1ab498:
    // 0x1ab498: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1AB498u;
    {
        const bool branch_taken_0x1ab498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab498) {
            ctx->pc = 0x1AB49Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB498u;
            // 0x1ab49c: 0x8e040604  lw          $a0, 0x604($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB51Cu;
            goto label_1ab51c;
        }
    }
    ctx->pc = 0x1AB4A0u;
    // 0x1ab4a0: 0x8e0409a0  lw          $a0, 0x9A0($s0)
    ctx->pc = 0x1ab4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2464)));
    // 0x1ab4a4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB4A4u;
    {
        const bool branch_taken_0x1ab4a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab4a4) {
            ctx->pc = 0x1AB4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB4A4u;
            // 0x1ab4a8: 0x920402f7  lbu         $a0, 0x2F7($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB4BCu;
            goto label_1ab4bc;
        }
    }
    ctx->pc = 0x1AB4ACu;
    // 0x1ab4ac: 0xc06b9c0  jal         func_1AE700
    ctx->pc = 0x1AB4ACu;
    SET_GPR_U32(ctx, 31, 0x1AB4B4u);
    ctx->pc = 0x1AE700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE700u, 0x1AB4ACu, 0x1AB4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB4B4u;
label_1ab4b4:
    // 0x1ab4b4: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x1ab4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ab4b8: 0x920402f7  lbu         $a0, 0x2F7($s0)
    ctx->pc = 0x1ab4b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
label_1ab4bc:
    // 0x1ab4bc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1ab4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1ab4c0: 0x8e0809d0  lw          $t0, 0x9D0($s0)
    ctx->pc = 0x1ab4c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2512)));
    // 0x1ab4c4: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x1ab4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1ab4c8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1ab4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ab4cc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ab4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ab4d0: 0x3a43821  addu        $a3, $sp, $a0
    ctx->pc = 0x1ab4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x1ab4d4: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1ab4d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1ab4d8: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x1ab4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x1ab4dc: 0x8ca90090  lw          $t1, 0x90($a1)
    ctx->pc = 0x1ab4dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x1ab4e0: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1ab4e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab4e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ab4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ab4e8: 0x8ce60030  lw          $a2, 0x30($a3)
    ctx->pc = 0x1ab4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1ab4ec: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x1ab4ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1ab4f0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1ab4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ab4f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab4f8: 0xae0809d0  sw          $t0, 0x9D0($s0)
    ctx->pc = 0x1ab4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2512), GPR_U32(ctx, 8));
    // 0x1ab4fc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1ab4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ab500: 0xae0909dc  sw          $t1, 0x9DC($s0)
    ctx->pc = 0x1ab500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2524), GPR_U32(ctx, 9));
    // 0x1ab504: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ab504u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab508: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ab508u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ab50c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1AB50Cu;
    SET_GPR_U32(ctx, 31, 0x1AB514u);
    ctx->pc = 0x1AB510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB50Cu;
    // 0x1ab510: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1AB50Cu, 0x1AB514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB514u;
label_1ab514:
    // 0x1ab514: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1AB514u;
    {
        const bool branch_taken_0x1ab514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab514) {
            ctx->pc = 0x1AB578u;
            goto label_1ab578;
        }
    }
    ctx->pc = 0x1AB51Cu;
label_1ab51c:
    // 0x1ab51c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1AB51Cu;
    SET_GPR_U32(ctx, 31, 0x1AB524u);
    ctx->pc = 0x1AB520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB51Cu;
    // 0x1ab520: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1AB51Cu, 0x1AB524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB524u;
label_1ab524:
    // 0x1ab524: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x1ab524u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x1ab528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab52c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ab52cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ab530: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1ab530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ab534: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ab534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ab538: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ab538u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab53c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ab53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ab540: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ab540u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab544: 0x8c65060c  lw          $a1, 0x60C($v1)
    ctx->pc = 0x1ab544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1548)));
    // 0x1ab548: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1ab548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ab54c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1ab54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1ab550: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1ab550u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1ab554: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x1ab554u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x1ab558: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ab558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ab55c: 0x3a35021  addu        $t2, $sp, $v1
    ctx->pc = 0x1ab55cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1ab560: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x1ab560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab564: 0x8d460050  lw          $a2, 0x50($t2)
    ctx->pc = 0x1ab564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 80)));
    // 0x1ab568: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1AB568u;
    SET_GPR_U32(ctx, 31, 0x1AB570u);
    ctx->pc = 0x1AB56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB568u;
    // 0x1ab56c: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1AB568u, 0x1AB570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB570u;
label_1ab570:
    // 0x1ab570: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ab570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ab574: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1ab574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1ab578:
    // 0x1ab578: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ab578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ab57c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ab57cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ab580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab584: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x1AB584u;
    SET_GPR_U32(ctx, 31, 0x1AB58Cu);
    ctx->pc = 0x1AB588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB584u;
    // 0x1ab588: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1AB584u, 0x1AB58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB58Cu;
label_1ab58c:
    // 0x1ab58c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab590: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1AB590u;
    SET_GPR_U32(ctx, 31, 0x1AB598u);
    ctx->pc = 0x1AB594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB590u;
    // 0x1ab594: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1AB590u, 0x1AB598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB598u;
label_1ab598:
    // 0x1ab598: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1AB598u;
    {
        const bool branch_taken_0x1ab598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB598u;
        // 0x1ab59c: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab598) {
            ctx->pc = 0x1AB71Cu;
            goto label_1ab71c;
        }
    }
    ctx->pc = 0x1AB5A0u;
label_1ab5a0:
    // 0x1ab5a0: 0x8e040604  lw          $a0, 0x604($s0)
    ctx->pc = 0x1ab5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x1ab5a4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1AB5A4u;
    SET_GPR_U32(ctx, 31, 0x1AB5ACu);
    ctx->pc = 0x1AB5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB5A4u;
    // 0x1ab5a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1AB5A4u, 0x1AB5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB5ACu;
label_1ab5ac:
    // 0x1ab5ac: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x1ab5acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x1ab5b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab5b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ab5b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ab5b8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1ab5b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ab5bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ab5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ab5c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ab5c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab5c4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ab5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ab5c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ab5c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab5cc: 0x8c65060c  lw          $a1, 0x60C($v1)
    ctx->pc = 0x1ab5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1548)));
    // 0x1ab5d0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1ab5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ab5d4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1ab5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1ab5d8: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1ab5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1ab5dc: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x1ab5dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x1ab5e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ab5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ab5e4: 0x3a35021  addu        $t2, $sp, $v1
    ctx->pc = 0x1ab5e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1ab5e8: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x1ab5e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab5ec: 0x8d460040  lw          $a2, 0x40($t2)
    ctx->pc = 0x1ab5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 64)));
    // 0x1ab5f0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1AB5F0u;
    SET_GPR_U32(ctx, 31, 0x1AB5F8u);
    ctx->pc = 0x1AB5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB5F0u;
    // 0x1ab5f4: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1AB5F0u, 0x1AB5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB5F8u;
label_1ab5f8:
    // 0x1ab5f8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1ab5f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1ab5fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ab5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ab600: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1ab600u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1ab604:
    // 0x1ab604: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ab604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ab608: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ab608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ab60c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1AB60Cu;
    SET_GPR_U32(ctx, 31, 0x1AB614u);
    ctx->pc = 0x1AB610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB60Cu;
    // 0x1ab610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1AB60Cu, 0x1AB614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB614u;
label_1ab614:
    // 0x1ab614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab618: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x1AB618u;
    SET_GPR_U32(ctx, 31, 0x1AB620u);
    ctx->pc = 0x1AB61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB618u;
    // 0x1ab61c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1AB618u, 0x1AB620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB620u;
label_1ab620:
    // 0x1ab620: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ab620u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1ab624: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1AB624u;
    SET_GPR_U32(ctx, 31, 0x1AB62Cu);
    ctx->pc = 0x1AB628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB624u;
    // 0x1ab628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1AB624u, 0x1AB62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB62Cu;
label_1ab62c:
    // 0x1ab62c: 0x8e0209d8  lw          $v0, 0x9D8($s0)
    ctx->pc = 0x1ab62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2520)));
    // 0x1ab630: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ab630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ab634: 0x4410038  bgez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1AB634u;
    {
        const bool branch_taken_0x1ab634 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1AB638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB634u;
        // 0x1ab638: 0xae0209d8  sw          $v0, 0x9D8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab634) {
            ctx->pc = 0x1AB718u;
            goto label_1ab718;
        }
    }
    ctx->pc = 0x1AB63Cu;
    // 0x1ab63c: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x1ab63cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x1ab640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab644: 0xae0009d8  sw          $zero, 0x9D8($s0)
    ctx->pc = 0x1ab644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2520), GPR_U32(ctx, 0));
    // 0x1ab648: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1ab648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ab64c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ab64cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ab650: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ab650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ab654: 0x3a34821  addu        $t1, $sp, $v1
    ctx->pc = 0x1ab654u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1ab658: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ab658u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab65c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x1ab65cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab660: 0x8d260050  lw          $a2, 0x50($t1)
    ctx->pc = 0x1ab660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x1ab664: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x1ab664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1ab668: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1AB668u;
    SET_GPR_U32(ctx, 31, 0x1AB670u);
    ctx->pc = 0x1AB66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB668u;
    // 0x1ab66c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1AB668u, 0x1AB670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB670u;
label_1ab670:
    // 0x1ab670: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1ab670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1ab674: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ab674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ab678: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1AB678u;
    {
        const bool branch_taken_0x1ab678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB678u;
        // 0x1ab67c: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab678) {
            ctx->pc = 0x1AB718u;
            goto label_1ab718;
        }
    }
    ctx->pc = 0x1AB680u;
label_1ab680:
    // 0x1ab680: 0x8e0209e8  lw          $v0, 0x9E8($s0)
    ctx->pc = 0x1ab680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2536)));
    // 0x1ab684: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ab684u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab688: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ab688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ab68c: 0x2863003d  slti        $v1, $v1, 0x3D
    ctx->pc = 0x1ab68cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x1ab690: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1AB690u;
    {
        const bool branch_taken_0x1ab690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB690u;
        // 0x1ab694: 0xae0209e8  sw          $v0, 0x9E8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab690) {
            ctx->pc = 0x1AB6C4u;
            goto label_1ab6c4;
        }
    }
    ctx->pc = 0x1AB698u;
    // 0x1ab698: 0x8e040604  lw          $a0, 0x604($s0)
    ctx->pc = 0x1ab698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x1ab69c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1AB69Cu;
    SET_GPR_U32(ctx, 31, 0x1AB6A4u);
    ctx->pc = 0x1AB6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB69Cu;
    // 0x1ab6a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1AB69Cu, 0x1AB6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB6A4u;
label_1ab6a4:
    // 0x1ab6a4: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x1ab6a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x1ab6a8: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x1ab6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1ab6ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ab6acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ab6b0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ab6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ab6b4: 0x8c64060c  lw          $a0, 0x60C($v1)
    ctx->pc = 0x1ab6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1548)));
    // 0x1ab6b8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ab6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ab6bc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1ab6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1ab6c0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1ab6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1ab6c4:
    // 0x1ab6c4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1AB6C4u;
    SET_GPR_U32(ctx, 31, 0x1AB6CCu);
    ctx->pc = 0x1AB6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB6C4u;
    // 0x1ab6c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1AB6C4u, 0x1AB6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB6CCu;
label_1ab6cc:
    // 0x1ab6cc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AB6CCu;
    {
        const bool branch_taken_0x1ab6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6CCu;
        // 0x1ab6d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab6cc) {
            ctx->pc = 0x1AB718u;
            goto label_1ab718;
        }
    }
    ctx->pc = 0x1AB6D4u;
    // 0x1ab6d4: 0x8e040604  lw          $a0, 0x604($s0)
    ctx->pc = 0x1ab6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x1ab6d8: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1AB6D8u;
    SET_GPR_U32(ctx, 31, 0x1AB6E0u);
    ctx->pc = 0x1AB6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB6D8u;
    // 0x1ab6dc: 0xae0009e8  sw          $zero, 0x9E8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2536), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1AB6D8u, 0x1AB6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB6E0u;
label_1ab6e0:
    // 0x1ab6e0: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x1ab6e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x1ab6e4: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x1ab6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1ab6e8: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x1ab6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ab6ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ab6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ab6f0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ab6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ab6f4: 0x8c64060c  lw          $a0, 0x60C($v1)
    ctx->pc = 0x1ab6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1548)));
    // 0x1ab6f8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ab6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ab6fc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1ab6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1ab700: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1ab700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1ab704: 0xae0609d4  sw          $a2, 0x9D4($s0)
    ctx->pc = 0x1ab704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2516), GPR_U32(ctx, 6));
    // 0x1ab708: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1ab708u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ab70c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1ab70cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ab710: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1ab710u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ab714: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1ab714u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1ab718:
    // 0x1ab718: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1ab718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1ab71c:
    // 0x1ab71c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1ab71cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ab720: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1ab720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ab724: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x1ab724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ab728: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB728u;
        // 0x1ab72c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB730u;
}
