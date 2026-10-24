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

// Function: func_001BC1C8
// Address: 0x1bc1c8 - 0x1bc300
void func_001BC1C8_0x1bc1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BC1C8_0x1bc1c8");
#endif

    switch (ctx->pc) {
        case 0x1bc1c8u: goto label_1bc1c8;
        case 0x1bc1ccu: goto label_1bc1cc;
        case 0x1bc1d0u: goto label_1bc1d0;
        case 0x1bc1d4u: goto label_1bc1d4;
        case 0x1bc1d8u: goto label_1bc1d8;
        case 0x1bc1dcu: goto label_1bc1dc;
        case 0x1bc1e0u: goto label_1bc1e0;
        case 0x1bc1e4u: goto label_1bc1e4;
        case 0x1bc1e8u: goto label_1bc1e8;
        case 0x1bc1ecu: goto label_1bc1ec;
        case 0x1bc1f0u: goto label_1bc1f0;
        case 0x1bc1f4u: goto label_1bc1f4;
        case 0x1bc1f8u: goto label_1bc1f8;
        case 0x1bc1fcu: goto label_1bc1fc;
        case 0x1bc200u: goto label_1bc200;
        case 0x1bc204u: goto label_1bc204;
        case 0x1bc208u: goto label_1bc208;
        case 0x1bc20cu: goto label_1bc20c;
        case 0x1bc210u: goto label_1bc210;
        case 0x1bc214u: goto label_1bc214;
        case 0x1bc218u: goto label_1bc218;
        case 0x1bc21cu: goto label_1bc21c;
        case 0x1bc220u: goto label_1bc220;
        case 0x1bc224u: goto label_1bc224;
        case 0x1bc228u: goto label_1bc228;
        case 0x1bc22cu: goto label_1bc22c;
        case 0x1bc230u: goto label_1bc230;
        case 0x1bc234u: goto label_1bc234;
        case 0x1bc238u: goto label_1bc238;
        case 0x1bc23cu: goto label_1bc23c;
        case 0x1bc240u: goto label_1bc240;
        case 0x1bc244u: goto label_1bc244;
        case 0x1bc248u: goto label_1bc248;
        case 0x1bc24cu: goto label_1bc24c;
        case 0x1bc250u: goto label_1bc250;
        case 0x1bc254u: goto label_1bc254;
        case 0x1bc258u: goto label_1bc258;
        case 0x1bc25cu: goto label_1bc25c;
        case 0x1bc260u: goto label_1bc260;
        case 0x1bc264u: goto label_1bc264;
        case 0x1bc268u: goto label_1bc268;
        case 0x1bc26cu: goto label_1bc26c;
        case 0x1bc270u: goto label_1bc270;
        case 0x1bc274u: goto label_1bc274;
        case 0x1bc278u: goto label_1bc278;
        case 0x1bc27cu: goto label_1bc27c;
        case 0x1bc280u: goto label_1bc280;
        case 0x1bc284u: goto label_1bc284;
        case 0x1bc288u: goto label_1bc288;
        case 0x1bc28cu: goto label_1bc28c;
        case 0x1bc290u: goto label_1bc290;
        case 0x1bc294u: goto label_1bc294;
        case 0x1bc298u: goto label_1bc298;
        case 0x1bc29cu: goto label_1bc29c;
        case 0x1bc2a0u: goto label_1bc2a0;
        case 0x1bc2a4u: goto label_1bc2a4;
        case 0x1bc2a8u: goto label_1bc2a8;
        case 0x1bc2acu: goto label_1bc2ac;
        case 0x1bc2b0u: goto label_1bc2b0;
        case 0x1bc2b4u: goto label_1bc2b4;
        case 0x1bc2b8u: goto label_1bc2b8;
        case 0x1bc2bcu: goto label_1bc2bc;
        case 0x1bc2c0u: goto label_1bc2c0;
        case 0x1bc2c4u: goto label_1bc2c4;
        case 0x1bc2c8u: goto label_1bc2c8;
        case 0x1bc2ccu: goto label_1bc2cc;
        case 0x1bc2d0u: goto label_1bc2d0;
        case 0x1bc2d4u: goto label_1bc2d4;
        case 0x1bc2d8u: goto label_1bc2d8;
        case 0x1bc2dcu: goto label_1bc2dc;
        case 0x1bc2e0u: goto label_1bc2e0;
        case 0x1bc2e4u: goto label_1bc2e4;
        case 0x1bc2e8u: goto label_1bc2e8;
        case 0x1bc2ecu: goto label_1bc2ec;
        case 0x1bc2f0u: goto label_1bc2f0;
        case 0x1bc2f4u: goto label_1bc2f4;
        case 0x1bc2f8u: goto label_1bc2f8;
        case 0x1bc2fcu: goto label_1bc2fc;
        default: break;
    }

    ctx->pc = 0x1bc1c8u;

label_1bc1c8:
    // 0x1bc1c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bc1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1bc1cc:
    // 0x1bc1cc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1bc1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_1bc1d0:
    // 0x1bc1d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1bc1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1bc1d4:
    // 0x1bc1d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bc1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1bc1d8:
    // 0x1bc1d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bc1d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bc1dc:
    // 0x1bc1dc: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x1bc1dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_1bc1e0:
    // 0x1bc1e0: 0x24489278  addiu       $t0, $v0, -0x6D88
    ctx->pc = 0x1bc1e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939256));
label_1bc1e4:
    // 0x1bc1e4: 0x69040007  ldl         $a0, 0x7($t0)
    ctx->pc = 0x1bc1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1bc1e8:
    // 0x1bc1e8: 0x6d040000  ldr         $a0, 0x0($t0)
    ctx->pc = 0x1bc1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1bc1ec:
    // 0x1bc1ec: 0x6905000f  ldl         $a1, 0xF($t0)
    ctx->pc = 0x1bc1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1bc1f0:
    // 0x1bc1f0: 0x6d050008  ldr         $a1, 0x8($t0)
    ctx->pc = 0x1bc1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1bc1f4:
    // 0x1bc1f4: 0x69060017  ldl         $a2, 0x17($t0)
    ctx->pc = 0x1bc1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1bc1f8:
    // 0x1bc1f8: 0x6d060010  ldr         $a2, 0x10($t0)
    ctx->pc = 0x1bc1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1bc1fc:
    // 0x1bc1fc: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1bc1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bc200:
    // 0x1bc200: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1bc200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bc204:
    // 0x1bc204: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1bc204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bc208:
    // 0x1bc208: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1bc208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bc20c:
    // 0x1bc20c: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1bc20cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bc210:
    // 0x1bc210: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x1bc210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bc214:
    // 0x1bc214: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1bc214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bc218:
    // 0x1bc218: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x1bc218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_1bc21c:
    // 0x1bc21c: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1bc21cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1bc220:
    // 0x1bc220: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1bc220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1bc224:
    // 0x1bc224: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x1bc224u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_1bc228:
    // 0x1bc228: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_1bc22c:
    if (ctx->pc == 0x1BC22Cu) {
        ctx->pc = 0x1BC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC228u;
        // 0x1bc22c: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC230u;
        goto label_1bc230;
    }
    ctx->pc = 0x1BC228u;
    {
        const bool branch_taken_0x1bc228 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1BC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC228u;
        // 0x1bc22c: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc228) {
            ctx->pc = 0x1BC25Cu;
            goto label_1bc25c;
        }
    }
    ctx->pc = 0x1BC230u;
label_1bc230:
    // 0x1bc230: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x1bc230u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1bc234:
    // 0x1bc234: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1bc234u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1bc238:
    // 0x1bc238: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1bc238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1bc23c:
    // 0x1bc23c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1bc23cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1bc240:
    // 0x1bc240: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1bc240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1bc244:
    // 0x1bc244: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bc244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bc248:
    // 0x1bc248: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1bc248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1bc24c:
    // 0x1bc24c: 0xdc87fff8  ld          $a3, -0x8($a0)
    ctx->pc = 0x1bc24cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_1bc250:
    // 0x1bc250: 0x7303f  dsra32      $a2, $a3, 0
    ctx->pc = 0x1bc250u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 7) >> (32 + 0));
label_1bc254:
    // 0x1bc254: 0x10000004  b           . + 4 + (0x4 << 2)
label_1bc258:
    if (ctx->pc == 0x1BC258u) {
        ctx->pc = 0x1BC258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC254u;
        // 0x1bc258: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC25Cu;
        goto label_1bc25c;
    }
    ctx->pc = 0x1BC254u;
    {
        const bool branch_taken_0x1bc254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC254u;
        // 0x1bc258: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc254) {
            ctx->pc = 0x1BC268u;
            goto label_1bc268;
        }
    }
    ctx->pc = 0x1BC25Cu;
label_1bc25c:
    // 0x1bc25c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bc260:
    // 0x1bc260: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1bc260u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bc264:
    // 0x1bc264: 0x920202f5  lbu         $v0, 0x2F5($s0)
    ctx->pc = 0x1bc264u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_1bc268:
    // 0x1bc268: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1bc268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1bc26c:
    // 0x1bc26c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1bc26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1bc270:
    // 0x1bc270: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1bc274:
    if (ctx->pc == 0x1BC274u) {
        ctx->pc = 0x1BC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC270u;
        // 0x1bc274: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC278u;
        goto label_1bc278;
    }
    ctx->pc = 0x1BC270u;
    {
        const bool branch_taken_0x1bc270 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1BC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC270u;
        // 0x1bc274: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc270) {
            ctx->pc = 0x1BC28Cu;
            goto label_1bc28c;
        }
    }
    ctx->pc = 0x1BC278u;
label_1bc278:
    // 0x1bc278: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x1bc278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_1bc27c:
    // 0x1bc27c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1bc27cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1bc280:
    // 0x1bc280: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1bc280u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1bc284:
    // 0x1bc284: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bc288:
    if (ctx->pc == 0x1BC288u) {
        ctx->pc = 0x1BC288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC284u;
        // 0x1bc288: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC28Cu;
        goto label_1bc28c;
    }
    ctx->pc = 0x1BC284u;
    {
        const bool branch_taken_0x1bc284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC284u;
        // 0x1bc288: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc284) {
            ctx->pc = 0x1BC290u;
            goto label_1bc290;
        }
    }
    ctx->pc = 0x1BC28Cu;
label_1bc28c:
    // 0x1bc28c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1bc28cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1bc290:
    // 0x1bc290: 0xc0f809  jalr        $a2
label_1bc294:
    if (ctx->pc == 0x1BC294u) {
        ctx->pc = 0x1BC294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC290u;
        // 0x1bc294: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC298u;
        goto label_1bc298;
    }
    ctx->pc = 0x1BC290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1BC298u);
        ctx->pc = 0x1BC294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC290u;
        // 0x1bc294: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC290u, 0x1BC298u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BC298u;
label_1bc298:
    // 0x1bc298: 0x8e050600  lw          $a1, 0x600($s0)
    ctx->pc = 0x1bc298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
label_1bc29c:
    // 0x1bc29c: 0xc06dce0  jal         func_1B7380
label_1bc2a0:
    if (ctx->pc == 0x1BC2A0u) {
        ctx->pc = 0x1BC2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC29Cu;
        // 0x1bc2a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC2A4u;
        goto label_1bc2a4;
    }
    ctx->pc = 0x1BC29Cu;
    SET_GPR_U32(ctx, 31, 0x1BC2A4u);
    ctx->pc = 0x1BC2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC29Cu;
    // 0x1bc2a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x1BC29Cu, 0x1BC2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC2A4u;
label_1bc2a4:
    // 0x1bc2a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bc2a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bc2a8:
    // 0x1bc2a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc2ac:
    // 0x1bc2ac: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
label_1bc2b0:
    if (ctx->pc == 0x1BC2B0u) {
        ctx->pc = 0x1BC2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2ACu;
        // 0x1bc2b0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC2B4u;
        goto label_1bc2b4;
    }
    ctx->pc = 0x1BC2ACu;
    {
        const bool branch_taken_0x1bc2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bc2ac) {
            ctx->pc = 0x1BC2B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC2ACu;
            // 0x1bc2b0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC2F4u;
            goto label_1bc2f4;
        }
    }
    ctx->pc = 0x1BC2B4u;
label_1bc2b4:
    // 0x1bc2b4: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x1bc2b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_1bc2b8:
    // 0x1bc2b8: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
label_1bc2bc:
    if (ctx->pc == 0x1BC2BCu) {
        ctx->pc = 0x1BC2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2B8u;
        // 0x1bc2bc: 0xa20302f4  sb          $v1, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC2C0u;
        goto label_1bc2c0;
    }
    ctx->pc = 0x1BC2B8u;
    {
        const bool branch_taken_0x1bc2b8 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x1bc2b8) {
            ctx->pc = 0x1BC2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC2B8u;
            // 0x1bc2bc: 0xa20302f4  sb          $v1, 0x2F4($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC2E4u;
            goto label_1bc2e4;
        }
    }
    ctx->pc = 0x1BC2C0u;
label_1bc2c0:
    // 0x1bc2c0: 0x8e0305b0  lw          $v1, 0x5B0($s0)
    ctx->pc = 0x1bc2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
label_1bc2c4:
    // 0x1bc2c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bc2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bc2c8:
    // 0x1bc2c8: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x1bc2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
label_1bc2cc:
    // 0x1bc2cc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1bc2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_1bc2d0:
    // 0x1bc2d0: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1bc2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_1bc2d4:
    // 0x1bc2d4: 0xae0305b0  sw          $v1, 0x5B0($s0)
    ctx->pc = 0x1bc2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 3));
label_1bc2d8:
    // 0x1bc2d8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1bc2d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1bc2dc:
    // 0x1bc2dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1bc2e0:
    if (ctx->pc == 0x1BC2E0u) {
        ctx->pc = 0x1BC2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2DCu;
        // 0x1bc2e0: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC2E4u;
        goto label_1bc2e4;
    }
    ctx->pc = 0x1BC2DCu;
    {
        const bool branch_taken_0x1bc2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2DCu;
        // 0x1bc2e0: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc2dc) {
            ctx->pc = 0x1BC2F0u;
            goto label_1bc2f0;
        }
    }
    ctx->pc = 0x1BC2E4u;
label_1bc2e4:
    // 0x1bc2e4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1bc2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1bc2e8:
    // 0x1bc2e8: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1bc2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_1bc2ec:
    // 0x1bc2ec: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1bc2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1bc2f0:
    // 0x1bc2f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1bc2f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bc2f4:
    // 0x1bc2f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bc2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bc2f8:
    // 0x1bc2f8: 0x3e00008  jr          $ra
label_1bc2fc:
    if (ctx->pc == 0x1BC2FCu) {
        ctx->pc = 0x1BC2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2F8u;
        // 0x1bc2fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC300u;
        goto label_fallthrough_0x1bc2f8;
    }
    ctx->pc = 0x1BC2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2F8u;
        // 0x1bc2fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bc2f8:
    ctx->pc = 0x1BC300u;
}
