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

// Function: func_002FC1A0
// Address: 0x2fc1a0 - 0x2fc9a8
void func_002FC1A0_0x2fc1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FC1A0_0x2fc1a0");
#endif

    switch (ctx->pc) {
        case 0x2fc21cu: goto label_2fc21c;
        case 0x2fc244u: goto label_2fc244;
        case 0x2fc470u: goto label_2fc470;
        case 0x2fc574u: goto label_2fc574;
        case 0x2fc608u: goto label_2fc608;
        case 0x2fc89cu: goto label_2fc89c;
        case 0x2fc998u: goto label_2fc998;
        default: break;
    }

    ctx->pc = 0x2fc1a0u;

    // 0x2fc1a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2fc1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2fc1a4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2fc1a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc1a8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2fc1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2fc1ac: 0x91230187  lbu         $v1, 0x187($t1)
    ctx->pc = 0x2fc1acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 391)));
    // 0x2fc1b0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FC1B0u;
    {
        const bool branch_taken_0x2fc1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC1B0u;
        // 0x2fc1b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc1b0) {
            ctx->pc = 0x2FC1C8u;
            goto label_2fc1c8;
        }
    }
    ctx->pc = 0x2FC1B8u;
    // 0x2fc1b8: 0x10620149  beq         $v1, $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x2FC1B8u;
    {
        const bool branch_taken_0x2fc1b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FC1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC1B8u;
        // 0x2fc1bc: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc1b8) {
            ctx->pc = 0x2FC6E0u;
            goto label_2fc6e0;
        }
    }
    ctx->pc = 0x2FC1C0u;
    // 0x2fc1c0: 0x100001f1  b           . + 4 + (0x1F1 << 2)
    ctx->pc = 0x2FC1C0u;
    {
        const bool branch_taken_0x2fc1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC1C0u;
        // 0x2fc1c4: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc1c0) {
            ctx->pc = 0x2FC988u;
            goto label_2fc988;
        }
    }
    ctx->pc = 0x2FC1C8u;
label_2fc1c8:
    // 0x2fc1c8: 0x85220238  lh          $v0, 0x238($t1)
    ctx->pc = 0x2fc1c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 568)));
    // 0x2fc1cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2fc1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2fc1d0: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x2fc1d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2fc1d4: 0x46201f1  bltzl       $v1, . + 4 + (0x1F1 << 2)
    ctx->pc = 0x2FC1D4u;
    {
        const bool branch_taken_0x2fc1d4 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x2fc1d4) {
            ctx->pc = 0x2FC1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC1D4u;
            // 0x2fc1d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC99Cu;
            goto label_2fc99c;
        }
    }
    ctx->pc = 0x2FC1DCu;
    // 0x2fc1dc: 0xc52001b8  lwc1        $f0, 0x1B8($t1)
    ctx->pc = 0x2fc1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc1e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fc1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc1e4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2fc1e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2fc1e8: 0x0  nop
    ctx->pc = 0x2fc1e8u;
    // NOP
    // 0x2fc1ec: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x2fc1ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc1f0: 0x0  nop
    ctx->pc = 0x2fc1f0u;
    // NOP
    // 0x2fc1f4: 0x45000092  bc1f        . + 4 + (0x92 << 2)
    ctx->pc = 0x2FC1F4u;
    {
        const bool branch_taken_0x2fc1f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FC1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC1F4u;
        // 0x2fc1f8: 0xc5260234  lwc1        $f6, 0x234($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc1f4) {
            ctx->pc = 0x2FC440u;
            goto label_2fc440;
        }
    }
    ctx->pc = 0x2FC1FCu;
    // 0x2fc1fc: 0xc52001bc  lwc1        $f0, 0x1BC($t1)
    ctx->pc = 0x2fc1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc200: 0xc52101c0  lwc1        $f1, 0x1C0($t1)
    ctx->pc = 0x2fc200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc204: 0xc52201c4  lwc1        $f2, 0x1C4($t1)
    ctx->pc = 0x2fc204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fc208: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2fc208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fc20c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2fc20cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2fc210: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2fc210u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2fc214: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x2FC214u;
    {
        const bool branch_taken_0x2fc214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC214u;
        // 0x2fc218: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc214) {
            ctx->pc = 0x2FC530u;
            goto label_2fc530;
        }
    }
    ctx->pc = 0x2FC21Cu;
label_2fc21c:
    // 0x2fc21c: 0x692201ff  ldl         $v0, 0x1FF($t1)
    ctx->pc = 0x2fc21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 511); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2fc220: 0x6d2201f8  ldr         $v0, 0x1F8($t1)
    ctx->pc = 0x2fc220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 504); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2fc224: 0x69230207  ldl         $v1, 0x207($t1)
    ctx->pc = 0x2fc224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 519); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2fc228: 0x6d230200  ldr         $v1, 0x200($t1)
    ctx->pc = 0x2fc228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 512); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2fc22c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2fc22cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc230: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2fc230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc234: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x2fc234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc238: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x2fc238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc23c: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x2FC23Cu;
    {
        const bool branch_taken_0x2fc23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc23c) {
            ctx->pc = 0x2FC530u;
            goto label_2fc530;
        }
    }
    ctx->pc = 0x2FC244u;
label_2fc244:
    // 0x2fc244: 0x0  nop
    ctx->pc = 0x2fc244u;
    // NOP
    // 0x2fc248: 0x0  nop
    ctx->pc = 0x2fc248u;
    // NOP
    // 0x2fc24c: 0x46053143  div.s       $f5, $f6, $f5
    ctx->pc = 0x2fc24cu;
    ctx->f[5] = ps2FpuDivide(ctx->fcr31, ctx->f[6], ctx->f[5]);
    // 0x2fc250: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2fc250u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2fc254: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2fc254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2fc258: 0x252301c0  addiu       $v1, $t1, 0x1C0
    ctx->pc = 0x2fc258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 448));
    // 0x2fc25c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2fc25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc260: 0x252401bc  addiu       $a0, $t1, 0x1BC
    ctx->pc = 0x2fc260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 444));
    // 0x2fc264: 0x252201c4  addiu       $v0, $t1, 0x1C4
    ctx->pc = 0x2fc264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 452));
    // 0x2fc268: 0x8a3821  addu        $a3, $a0, $t2
    ctx->pc = 0x2fc268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x2fc26c: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2fc26cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2fc270: 0x4a4021  addu        $t0, $v0, $t2
    ctx->pc = 0x2fc270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2fc274: 0x6a3021  addu        $a2, $v1, $t2
    ctx->pc = 0x2fc274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2fc278: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2fc278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2fc27c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x2fc27cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2fc280: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2fc280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2fc284: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2fc284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2fc288: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2fc288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fc28c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2fc28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc290: 0x0  nop
    ctx->pc = 0x2fc290u;
    // NOP
    // 0x2fc294: 0x0  nop
    ctx->pc = 0x2fc294u;
    // NOP
    // 0x2fc298: 0x46042943  div.s       $f5, $f5, $f4
    ctx->pc = 0x2fc298u;
    ctx->f[5] = ps2FpuDivide(ctx->fcr31, ctx->f[5], ctx->f[4]);
    // 0x2fc29c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2fc29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fc2a0: 0xc4e60000  lwc1        $f6, 0x0($a3)
    ctx->pc = 0x2fc2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2fc2a4: 0xc4c70000  lwc1        $f7, 0x0($a2)
    ctx->pc = 0x2fc2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2fc2a8: 0xc5080000  lwc1        $f8, 0x0($t0)
    ctx->pc = 0x2fc2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2fc2ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fc2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc2b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fc2b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc2b4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2fc2b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2fc2b8: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2fc2b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2fc2bc: 0x46050101  sub.s       $f4, $f0, $f5
    ctx->pc = 0x2fc2bcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2fc2c0: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2fc2c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2fc2c4: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x2fc2c4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2fc2c8: 0xe7a70024  swc1        $f7, 0x24($sp)
    ctx->pc = 0x2fc2c8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2fc2cc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2fc2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2fc2d0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2fc2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2fc2d4: 0xe7a80028  swc1        $f8, 0x28($sp)
    ctx->pc = 0x2fc2d4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2fc2d8: 0x6baa0017  ldl         $t2, 0x17($sp)
    ctx->pc = 0x2fc2d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2fc2dc: 0x6faa0010  ldr         $t2, 0x10($sp)
    ctx->pc = 0x2fc2dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2fc2e0: 0x6bab001f  ldl         $t3, 0x1F($sp)
    ctx->pc = 0x2fc2e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2fc2e4: 0x6fab0018  ldr         $t3, 0x18($sp)
    ctx->pc = 0x2fc2e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2fc2e8: 0xb3aa0047  sdl         $t2, 0x47($sp)
    ctx->pc = 0x2fc2e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc2ec: 0xb7aa0040  sdr         $t2, 0x40($sp)
    ctx->pc = 0x2fc2ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc2f0: 0xb3ab004f  sdl         $t3, 0x4F($sp)
    ctx->pc = 0x2fc2f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc2f4: 0xb7ab0048  sdr         $t3, 0x48($sp)
    ctx->pc = 0x2fc2f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc2f8: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x2fc2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc2fc: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x2fc2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fc300: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x2fc300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fc304: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2fc304u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2fc308: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2fc308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc30c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2fc30cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2fc310: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2fc310u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2fc314: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2fc314u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2fc318: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x2fc318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2fc31c: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x2fc31cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2fc320: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x2fc320u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2fc324: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2fc324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2fc328: 0x6ba40047  ldl         $a0, 0x47($sp)
    ctx->pc = 0x2fc328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2fc32c: 0x6fa40040  ldr         $a0, 0x40($sp)
    ctx->pc = 0x2fc32cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2fc330: 0x6ba5004f  ldl         $a1, 0x4F($sp)
    ctx->pc = 0x2fc330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2fc334: 0x6fa50048  ldr         $a1, 0x48($sp)
    ctx->pc = 0x2fc334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2fc338: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x2fc338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc33c: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x2fc33cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc340: 0xb3a5003f  sdl         $a1, 0x3F($sp)
    ctx->pc = 0x2fc340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc344: 0xb7a50038  sdr         $a1, 0x38($sp)
    ctx->pc = 0x2fc344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc348: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x2fc348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2fc34c: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x2fc34cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2fc350: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x2fc350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2fc354: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x2fc354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2fc358: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x2fc358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc35c: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x2fc35cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc360: 0xb3a3005f  sdl         $v1, 0x5F($sp)
    ctx->pc = 0x2fc360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc364: 0xb7a30058  sdr         $v1, 0x58($sp)
    ctx->pc = 0x2fc364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc368: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2fc368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc36c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2fc36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc370: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2fc370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fc374: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2fc374u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2fc378: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2fc378u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2fc37c: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2fc37cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2fc380: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2fc380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2fc384: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2fc384u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2fc388: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x2fc388u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2fc38c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2fc38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc390: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2fc390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2fc394: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2fc394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2fc398: 0x6baa0057  ldl         $t2, 0x57($sp)
    ctx->pc = 0x2fc398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2fc39c: 0x6faa0050  ldr         $t2, 0x50($sp)
    ctx->pc = 0x2fc39cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2fc3a0: 0x6bab005f  ldl         $t3, 0x5F($sp)
    ctx->pc = 0x2fc3a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2fc3a4: 0x6fab0058  ldr         $t3, 0x58($sp)
    ctx->pc = 0x2fc3a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2fc3a8: 0xb3aa0047  sdl         $t2, 0x47($sp)
    ctx->pc = 0x2fc3a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc3ac: 0xb7aa0040  sdr         $t2, 0x40($sp)
    ctx->pc = 0x2fc3acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc3b0: 0xb3ab004f  sdl         $t3, 0x4F($sp)
    ctx->pc = 0x2fc3b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc3b4: 0xb7ab0048  sdr         $t3, 0x48($sp)
    ctx->pc = 0x2fc3b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc3b8: 0x6ba40037  ldl         $a0, 0x37($sp)
    ctx->pc = 0x2fc3b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2fc3bc: 0x6fa40030  ldr         $a0, 0x30($sp)
    ctx->pc = 0x2fc3bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2fc3c0: 0x6ba5003f  ldl         $a1, 0x3F($sp)
    ctx->pc = 0x2fc3c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2fc3c4: 0x6fa50038  ldr         $a1, 0x38($sp)
    ctx->pc = 0x2fc3c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2fc3c8: 0xb3a40057  sdl         $a0, 0x57($sp)
    ctx->pc = 0x2fc3c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc3cc: 0xb7a40050  sdr         $a0, 0x50($sp)
    ctx->pc = 0x2fc3ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc3d0: 0xb3a5005f  sdl         $a1, 0x5F($sp)
    ctx->pc = 0x2fc3d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc3d4: 0xb7a50058  sdr         $a1, 0x58($sp)
    ctx->pc = 0x2fc3d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc3d8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2fc3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc3dc: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2fc3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc3e0: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2fc3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fc3e4: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x2fc3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fc3e8: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x2fc3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fc3ec: 0xc7a60044  lwc1        $f6, 0x44($sp)
    ctx->pc = 0x2fc3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2fc3f0: 0xc7a70048  lwc1        $f7, 0x48($sp)
    ctx->pc = 0x2fc3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2fc3f4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2fc3f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2fc3f8: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x2fc3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2fc3fc: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x2fc3fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x2fc400: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x2fc400u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x2fc404: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2fc404u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2fc408: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2fc408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2fc40c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2fc40cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2fc410: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x2fc410u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2fc414: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x2fc414u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2fc418: 0x6ba20057  ldl         $v0, 0x57($sp)
    ctx->pc = 0x2fc418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2fc41c: 0x6fa20050  ldr         $v0, 0x50($sp)
    ctx->pc = 0x2fc41cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2fc420: 0x6ba3005f  ldl         $v1, 0x5F($sp)
    ctx->pc = 0x2fc420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2fc424: 0x6fa30058  ldr         $v1, 0x58($sp)
    ctx->pc = 0x2fc424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2fc428: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2fc428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc42c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2fc42cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc430: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x2fc430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc434: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x2fc434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc438: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2FC438u;
    {
        const bool branch_taken_0x2fc438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc438) {
            ctx->pc = 0x2FC530u;
            goto label_2fc530;
        }
    }
    ctx->pc = 0x2FC440u;
label_2fc440:
    // 0x2fc440: 0x46003024  .word       0x46003024                   # cvt.w.s     $f0, $f6 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2fc440u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[6]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2fc444: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2fc444u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2fc448: 0xc5230208  lwc1        $f3, 0x208($t1)
    ctx->pc = 0x2fc448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fc44c: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x2fc44cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2fc450: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2fc450u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc454: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x2fc454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x2fc458: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2fc458u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x2fc45c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2fc45cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2fc460: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2fc460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fc464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc468: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x2fc468u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2fc46c: 0x0  nop
    ctx->pc = 0x2fc46cu;
    // NOP
label_2fc470:
    // 0x2fc470: 0x46034034  c.lt.s      $f8, $f3
    ctx->pc = 0x2fc470u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc474: 0x0  nop
    ctx->pc = 0x2fc474u;
    // NOP
    // 0x2fc478: 0x4501ff68  bc1t        . + 4 + (-0x98 << 2)
    ctx->pc = 0x2FC478u;
    {
        const bool branch_taken_0x2fc478 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fc478) {
            ctx->pc = 0x2FC21Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc21c;
        }
    }
    ctx->pc = 0x2FC480u;
    // 0x2fc480: 0x91220185  lbu         $v0, 0x185($t1)
    ctx->pc = 0x2fc480u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 389)));
    // 0x2fc484: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FC484u;
    {
        const bool branch_taken_0x2fc484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC484u;
        // 0x2fc488: 0xe21021  addu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc484) {
            ctx->pc = 0x2FC4B0u;
            goto label_2fc4b0;
        }
    }
    ctx->pc = 0x2FC48Cu;
    // 0x2fc48c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FC48Cu;
    {
        const bool branch_taken_0x2fc48c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc48c) {
            ctx->pc = 0x2FC490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC48Cu;
            // 0x2fc490: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC494u;
            goto label_2fc494;
        }
    }
    ctx->pc = 0x2FC494u;
label_2fc494:
    // 0x2fc494: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x2fc494u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2fc498: 0x1810  mfhi        $v1
    ctx->pc = 0x2fc498u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2fc49c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2fc49cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2fc4a0: 0x0  nop
    ctx->pc = 0x2fc4a0u;
    // NOP
    // 0x2fc4a4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2fc4a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2fc4a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FC4A8u;
    {
        const bool branch_taken_0x2fc4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC4A8u;
        // 0x2fc4ac: 0x81403  sra         $v0, $t0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc4a8) {
            ctx->pc = 0x2FC4C0u;
            goto label_2fc4c0;
        }
    }
    ctx->pc = 0x2FC4B0u;
label_2fc4b0:
    // 0x2fc4b0: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x2fc4b0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2fc4b4: 0x0  nop
    ctx->pc = 0x2fc4b4u;
    // NOP
    // 0x2fc4b8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2fc4b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2fc4bc: 0x81403  sra         $v0, $t0, 16
    ctx->pc = 0x2fc4bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 16));
label_2fc4c0:
    // 0x2fc4c0: 0x252401b8  addiu       $a0, $t1, 0x1B8
    ctx->pc = 0x2fc4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 440));
    // 0x2fc4c4: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x2fc4c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2fc4c8: 0x0  nop
    ctx->pc = 0x2fc4c8u;
    // NOP
    // 0x2fc4cc: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2fc4ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2fc4d0: 0x8a1821  addu        $v1, $a0, $t2
    ctx->pc = 0x2fc4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x2fc4d4: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x2fc4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fc4d8: 0x46052002  mul.s       $f0, $f4, $f5
    ctx->pc = 0x2fc4d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x2fc4dc: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2fc4dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2fc4e0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2fc4e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2fc4e4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2fc4e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2fc4e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fc4e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc4ec: 0x0  nop
    ctx->pc = 0x2fc4ecu;
    // NOP
    // 0x2fc4f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2fc4f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2fc4f4: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x2fc4f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc4f8: 0x0  nop
    ctx->pc = 0x2fc4f8u;
    // NOP
    // 0x2fc4fc: 0x4501ff51  bc1t        . + 4 + (-0xAF << 2)
    ctx->pc = 0x2FC4FCu;
    {
        const bool branch_taken_0x2fc4fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FC500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC4FCu;
        // 0x2fc500: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc4fc) {
            ctx->pc = 0x2FC244u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc244;
        }
    }
    ctx->pc = 0x2FC504u;
    // 0x2fc504: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2fc504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc508: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x2fc508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2fc50c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x2FC50Cu;
    {
        const bool branch_taken_0x2fc50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC50Cu;
        // 0x2fc510: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc50c) {
            ctx->pc = 0x2FC470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc470;
        }
    }
    ctx->pc = 0x2FC514u;
    // 0x2fc514: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fc514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc518: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fc518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc51c: 0x0  nop
    ctx->pc = 0x2fc51cu;
    // NOP
    // 0x2fc520: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2fc520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2fc524: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2fc524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fc528: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2fc528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2fc52c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2fc52cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2fc530:
    // 0x2fc530: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2fc530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2fc534: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2fc534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2fc538: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x2fc538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2fc53c: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x2fc53cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2fc540: 0xb122018f  sdl         $v0, 0x18F($t1)
    ctx->pc = 0x2fc540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc544: 0xb5220188  sdr         $v0, 0x188($t1)
    ctx->pc = 0x2fc544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc548: 0xb1230197  sdl         $v1, 0x197($t1)
    ctx->pc = 0x2fc548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc54c: 0xb5230190  sdr         $v1, 0x190($t1)
    ctx->pc = 0x2fc54cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fc550: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fc550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc554: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fc554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc558: 0xc5200198  lwc1        $f0, 0x198($t1)
    ctx->pc = 0x2fc558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc55c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2fc55cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc560: 0x0  nop
    ctx->pc = 0x2fc560u;
    // NOP
    // 0x2fc564: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x2FC564u;
    {
        const bool branch_taken_0x2fc564 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FC568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC564u;
        // 0x2fc568: 0xc5230234  lwc1        $f3, 0x234($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc564) {
            ctx->pc = 0x2FC5D0u;
            goto label_2fc5d0;
        }
    }
    ctx->pc = 0x2FC56Cu;
    // 0x2fc56c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2FC56Cu;
    {
        const bool branch_taken_0x2fc56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC56Cu;
        // 0x2fc570: 0xc528019c  lwc1        $f8, 0x19C($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc56c) {
            ctx->pc = 0x2FC644u;
            goto label_2fc644;
        }
    }
    ctx->pc = 0x2FC574u;
label_2fc574:
    // 0x2fc574: 0x0  nop
    ctx->pc = 0x2fc574u;
    // NOP
    // 0x2fc578: 0x0  nop
    ctx->pc = 0x2fc578u;
    // NOP
    // 0x2fc57c: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x2fc57cu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[3], ctx->f[2]);
    // 0x2fc580: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2fc580u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2fc584: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2fc584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2fc588: 0x2522019c  addiu       $v0, $t1, 0x19C
    ctx->pc = 0x2fc588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 412));
    // 0x2fc58c: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x2fc58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2fc590: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fc590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc594: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2fc594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2fc598: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x2fc598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2fc59c: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x2fc59cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x2fc5a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2fc5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2fc5a4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2fc5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc5a8: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2fc5a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2fc5ac: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2fc5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc5b0: 0x0  nop
    ctx->pc = 0x2fc5b0u;
    // NOP
    // 0x2fc5b4: 0x0  nop
    ctx->pc = 0x2fc5b4u;
    // NOP
    // 0x2fc5b8: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x2fc5b8u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[4]);
    // 0x2fc5bc: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x2fc5bcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2fc5c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2fc5c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2fc5c4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2fc5c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2fc5c8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2FC5C8u;
    {
        const bool branch_taken_0x2fc5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC5C8u;
        // 0x2fc5cc: 0x46000a00  add.s       $f8, $f1, $f0 (Delay Slot)
        ctx->f[8] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc5c8) {
            ctx->pc = 0x2FC644u;
            goto label_2fc644;
        }
    }
    ctx->pc = 0x2FC5D0u;
label_2fc5d0:
    // 0x2fc5d0: 0x85220238  lh          $v0, 0x238($t1)
    ctx->pc = 0x2fc5d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 568)));
    // 0x2fc5d4: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2fc5d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2fc5d8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2fc5d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2fc5dc: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x2fc5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x2fc5e0: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2fc5e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x2fc5e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fc5e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc5e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fc5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc5ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2fc5ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2fc5f0: 0x0  nop
    ctx->pc = 0x2fc5f0u;
    // NOP
    // 0x2fc5f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2fc5f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2fc5f8: 0x25230198  addiu       $v1, $t1, 0x198
    ctx->pc = 0x2fc5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 408));
    // 0x2fc5fc: 0x252601a0  addiu       $a2, $t1, 0x1A0
    ctx->pc = 0x2fc5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 416));
    // 0x2fc600: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2fc600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fc604: 0x0  nop
    ctx->pc = 0x2fc604u;
    // NOP
label_2fc608:
    // 0x2fc608: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x2fc608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fc60c: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x2fc60cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2fc610: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fc610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fc614: 0x46000164  .word       0x46000164                   # cvt.w.s     $f5, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2fc614u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x2fc618: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x2fc618u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2fc61c: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x2fc61cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2fc620: 0x1040ffd4  beqz        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x2FC620u;
    {
        const bool branch_taken_0x2fc620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC620u;
        // 0x2fc624: 0x24850001  addiu       $a1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc620) {
            ctx->pc = 0x2FC574u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc574;
        }
    }
    ctx->pc = 0x2FC628u;
    // 0x2fc628: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2fc628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc62c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2fc62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2fc630: 0x2c820003  sltiu       $v0, $a0, 0x3
    ctx->pc = 0x2fc630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2fc634: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2FC634u;
    {
        const bool branch_taken_0x2fc634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC634u;
        // 0x2fc638: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc634) {
            ctx->pc = 0x2FC608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc608;
        }
    }
    ctx->pc = 0x2FC63Cu;
    // 0x2fc63c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fc63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc640: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x2fc640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_2fc644:
    // 0x2fc644: 0x91220186  lbu         $v0, 0x186($t1)
    ctx->pc = 0x2fc644u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 390)));
    // 0x2fc648: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fc648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fc64c: 0x104000d2  beqz        $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x2FC64Cu;
    {
        const bool branch_taken_0x2fc64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC64Cu;
        // 0x2fc650: 0xe5280194  swc1        $f8, 0x194($t1) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 404), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc64c) {
            ctx->pc = 0x2FC998u;
            goto label_2fc998;
        }
    }
    ctx->pc = 0x2FC654u;
    // 0x2fc654: 0x9122020c  lbu         $v0, 0x20C($t1)
    ctx->pc = 0x2fc654u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 524)));
    // 0x2fc658: 0x9123020d  lbu         $v1, 0x20D($t1)
    ctx->pc = 0x2fc658u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 525)));
    // 0x2fc65c: 0x9124020e  lbu         $a0, 0x20E($t1)
    ctx->pc = 0x2fc65cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 526)));
    // 0x2fc660: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x2fc660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2fc664: 0x0  nop
    ctx->pc = 0x2fc664u;
    // NOP
    // 0x2fc668: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x2fc668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x2fc66c: 0x9125020f  lbu         $a1, 0x20F($t1)
    ctx->pc = 0x2fc66cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 527)));
    // 0x2fc670: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x2fc670u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2fc674: 0x0  nop
    ctx->pc = 0x2fc674u;
    // NOP
    // 0x2fc678: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2fc678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2fc67c: 0x44843000  mtc1        $a0, $f6
    ctx->pc = 0x2fc67cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2fc680: 0x0  nop
    ctx->pc = 0x2fc680u;
    // NOP
    // 0x2fc684: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x2fc684u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x2fc688: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2fc688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2fc68c: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x2fc68cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x2fc690: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fc690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc694: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x2fc694u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2fc698: 0x0  nop
    ctx->pc = 0x2fc698u;
    // NOP
    // 0x2fc69c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2fc69cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2fc6a0: 0xc5240188  lwc1        $f4, 0x188($t1)
    ctx->pc = 0x2fc6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fc6a4: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x2fc6a4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2fc6a8: 0xc523018c  lwc1        $f3, 0x18C($t1)
    ctx->pc = 0x2fc6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fc6ac: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2fc6acu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2fc6b0: 0xc5210190  lwc1        $f1, 0x190($t1)
    ctx->pc = 0x2fc6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc6b4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2fc6b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2fc6b8: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2fc6b8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2fc6bc: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x2fc6bcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x2fc6c0: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x2fc6c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x2fc6c4: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2fc6c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2fc6c8: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x2fc6c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x2fc6cc: 0xe5240188  swc1        $f4, 0x188($t1)
    ctx->pc = 0x2fc6ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 392), bits); }
    // 0x2fc6d0: 0xe523018c  swc1        $f3, 0x18C($t1)
    ctx->pc = 0x2fc6d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 396), bits); }
    // 0x2fc6d4: 0xe5210190  swc1        $f1, 0x190($t1)
    ctx->pc = 0x2fc6d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 400), bits); }
    // 0x2fc6d8: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x2FC6D8u;
    {
        const bool branch_taken_0x2fc6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC6D8u;
        // 0x2fc6dc: 0xe5220194  swc1        $f2, 0x194($t1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 404), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc6d8) {
            ctx->pc = 0x2FC998u;
            goto label_2fc998;
        }
    }
    ctx->pc = 0x2FC6E0u;
label_2fc6e0:
    // 0x2fc6e0: 0x8d250110  lw          $a1, 0x110($t1)
    ctx->pc = 0x2fc6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 272)));
    // 0x2fc6e4: 0x8523022e  lh          $v1, 0x22E($t1)
    ctx->pc = 0x2fc6e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 558)));
    // 0x2fc6e8: 0x8ca402c0  lw          $a0, 0x2C0($a1)
    ctx->pc = 0x2fc6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 704)));
    // 0x2fc6ec: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2fc6ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2fc6f0: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x2FC6F0u;
    {
        const bool branch_taken_0x2fc6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc6f0) {
            ctx->pc = 0x2FC914u;
            goto label_2fc914;
        }
    }
    ctx->pc = 0x2FC6F8u;
    // 0x2fc6f8: 0x8ca202c4  lw          $v0, 0x2C4($a1)
    ctx->pc = 0x2fc6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 708)));
    // 0x2fc6fc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2fc6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2fc700: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2fc700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2fc704: 0x144000a5  bnez        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2FC704u;
    {
        const bool branch_taken_0x2fc704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC704u;
        // 0x2fc708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc704) {
            ctx->pc = 0x2FC99Cu;
            goto label_2fc99c;
        }
    }
    ctx->pc = 0x2FC70Cu;
    // 0x2fc70c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2fc70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2fc710: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2fc710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2fc714: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FC714u;
    {
        const bool branch_taken_0x2fc714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC714u;
        // 0x2fc718: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc714) {
            ctx->pc = 0x2FC730u;
            goto label_2fc730;
        }
    }
    ctx->pc = 0x2FC71Cu;
    // 0x2fc71c: 0x9122011d  lbu         $v0, 0x11D($t1)
    ctx->pc = 0x2fc71cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 285)));
    // 0x2fc720: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fc720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fc724: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FC724u;
    {
        const bool branch_taken_0x2fc724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC724u;
        // 0x2fc728: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc724) {
            ctx->pc = 0x2FC744u;
            goto label_2fc744;
        }
    }
    ctx->pc = 0x2FC72Cu;
    // 0x2fc72c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2fc72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_2fc730:
    // 0x2fc730: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2fc730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2fc734: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2fc734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
    // 0x2fc738: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2fc738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2fc73c: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2FC73Cu;
    {
        const bool branch_taken_0x2fc73c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC73Cu;
        // 0x2fc740: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc73c) {
            ctx->pc = 0x2FC7D4u;
            goto label_2fc7d4;
        }
    }
    ctx->pc = 0x2FC744u;
label_2fc744:
    // 0x2fc744: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2fc744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2fc748: 0x244219a0  addiu       $v0, $v0, 0x19A0
    ctx->pc = 0x2fc748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6560));
    // 0x2fc74c: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x2fc74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x2fc750: 0xc4610574  lwc1        $f1, 0x574($v1)
    ctx->pc = 0x2fc750u;
    { uint32_t bits = FAST_READ32(0x747A14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc754: 0xc4400420  lwc1        $f0, 0x420($v0)
    ctx->pc = 0x2fc754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc758: 0xc52201c8  lwc1        $f2, 0x1C8($t1)
    ctx->pc = 0x2fc758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fc75c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2fc75cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2fc760: 0xc5230188  lwc1        $f3, 0x188($t1)
    ctx->pc = 0x2fc760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fc764: 0xc52401cc  lwc1        $f4, 0x1CC($t1)
    ctx->pc = 0x2fc764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fc768: 0xc525018c  lwc1        $f5, 0x18C($t1)
    ctx->pc = 0x2fc768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2fc76c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2fc76cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2fc770: 0xc52601d0  lwc1        $f6, 0x1D0($t1)
    ctx->pc = 0x2fc770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2fc774: 0xc5270190  lwc1        $f7, 0x190($t1)
    ctx->pc = 0x2fc774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2fc778: 0xc52901d4  lwc1        $f9, 0x1D4($t1)
    ctx->pc = 0x2fc778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2fc77c: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x2fc77cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2fc780: 0xc5280194  lwc1        $f8, 0x194($t1)
    ctx->pc = 0x2fc780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2fc784: 0xe5230188  swc1        $f3, 0x188($t1)
    ctx->pc = 0x2fc784u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 392), bits); }
    // 0x2fc788: 0xc4610574  lwc1        $f1, 0x574($v1)
    ctx->pc = 0x2fc788u;
    { uint32_t bits = FAST_READ32(0x747A14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc78c: 0xc4400420  lwc1        $f0, 0x420($v0)
    ctx->pc = 0x2fc78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc790: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2fc790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2fc794: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2fc794u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2fc798: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x2fc798u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x2fc79c: 0xe525018c  swc1        $f5, 0x18C($t1)
    ctx->pc = 0x2fc79cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 396), bits); }
    // 0x2fc7a0: 0xc4610574  lwc1        $f1, 0x574($v1)
    ctx->pc = 0x2fc7a0u;
    { uint32_t bits = FAST_READ32(0x747A14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc7a4: 0xc4400420  lwc1        $f0, 0x420($v0)
    ctx->pc = 0x2fc7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc7a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2fc7a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2fc7ac: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2fc7acu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2fc7b0: 0x460639c1  sub.s       $f7, $f7, $f6
    ctx->pc = 0x2fc7b0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x2fc7b4: 0xe5270190  swc1        $f7, 0x190($t1)
    ctx->pc = 0x2fc7b4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 400), bits); }
    // 0x2fc7b8: 0xc4400420  lwc1        $f0, 0x420($v0)
    ctx->pc = 0x2fc7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc7bc: 0xc4610574  lwc1        $f1, 0x574($v1)
    ctx->pc = 0x2fc7bcu;
    { uint32_t bits = FAST_READ32(0x747A14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc7c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2fc7c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2fc7c4: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x2fc7c4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x2fc7c8: 0x46094201  sub.s       $f8, $f8, $f9
    ctx->pc = 0x2fc7c8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[9]);
    // 0x2fc7cc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2FC7CCu;
    {
        const bool branch_taken_0x2fc7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC7CCu;
        // 0x2fc7d0: 0xe5280194  swc1        $f8, 0x194($t1) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 404), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc7cc) {
            ctx->pc = 0x2FC814u;
            goto label_2fc814;
        }
    }
    ctx->pc = 0x2FC7D4u;
label_2fc7d4:
    // 0x2fc7d4: 0xc5200188  lwc1        $f0, 0x188($t1)
    ctx->pc = 0x2fc7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc7d8: 0xc521018c  lwc1        $f1, 0x18C($t1)
    ctx->pc = 0x2fc7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc7dc: 0xc5220190  lwc1        $f2, 0x190($t1)
    ctx->pc = 0x2fc7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fc7e0: 0xc5230194  lwc1        $f3, 0x194($t1)
    ctx->pc = 0x2fc7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fc7e4: 0xc52401a8  lwc1        $f4, 0x1A8($t1)
    ctx->pc = 0x2fc7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fc7e8: 0xc52601ac  lwc1        $f6, 0x1AC($t1)
    ctx->pc = 0x2fc7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2fc7ec: 0xc52701b0  lwc1        $f7, 0x1B0($t1)
    ctx->pc = 0x2fc7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2fc7f0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2fc7f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2fc7f4: 0xc52501b4  lwc1        $f5, 0x1B4($t1)
    ctx->pc = 0x2fc7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2fc7f8: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2fc7f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2fc7fc: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x2fc7fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2fc800: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x2fc800u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x2fc804: 0xe5200188  swc1        $f0, 0x188($t1)
    ctx->pc = 0x2fc804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 392), bits); }
    // 0x2fc808: 0xe521018c  swc1        $f1, 0x18C($t1)
    ctx->pc = 0x2fc808u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 396), bits); }
    // 0x2fc80c: 0xe5220190  swc1        $f2, 0x190($t1)
    ctx->pc = 0x2fc80cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 400), bits); }
    // 0x2fc810: 0xe5230194  swc1        $f3, 0x194($t1)
    ctx->pc = 0x2fc810u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 404), bits); }
label_2fc814:
    // 0x2fc814: 0xc5200188  lwc1        $f0, 0x188($t1)
    ctx->pc = 0x2fc814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc818: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fc818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc81c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fc81cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc820: 0x0  nop
    ctx->pc = 0x2fc820u;
    // NOP
    // 0x2fc824: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2fc824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc828: 0x0  nop
    ctx->pc = 0x2fc828u;
    // NOP
    // 0x2fc82c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2FC82Cu;
    {
        const bool branch_taken_0x2fc82c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fc82c) {
            ctx->pc = 0x2FC830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC82Cu;
            // 0x2fc830: 0xe5210188  swc1        $f1, 0x188($t1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 392), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC834u;
            goto label_2fc834;
        }
    }
    ctx->pc = 0x2FC834u;
label_2fc834:
    // 0x2fc834: 0xc520018c  lwc1        $f0, 0x18C($t1)
    ctx->pc = 0x2fc834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc838: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2fc838u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc83c: 0x0  nop
    ctx->pc = 0x2fc83cu;
    // NOP
    // 0x2fc840: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2FC840u;
    {
        const bool branch_taken_0x2fc840 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fc840) {
            ctx->pc = 0x2FC844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC840u;
            // 0x2fc844: 0xe521018c  swc1        $f1, 0x18C($t1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 396), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC848u;
            goto label_2fc848;
        }
    }
    ctx->pc = 0x2FC848u;
label_2fc848:
    // 0x2fc848: 0xc5200190  lwc1        $f0, 0x190($t1)
    ctx->pc = 0x2fc848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc84c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2fc84cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc850: 0x0  nop
    ctx->pc = 0x2fc850u;
    // NOP
    // 0x2fc854: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2FC854u;
    {
        const bool branch_taken_0x2fc854 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fc854) {
            ctx->pc = 0x2FC858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC854u;
            // 0x2fc858: 0xe5210190  swc1        $f1, 0x190($t1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 400), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC85Cu;
            goto label_2fc85c;
        }
    }
    ctx->pc = 0x2FC85Cu;
label_2fc85c:
    // 0x2fc85c: 0xc5200194  lwc1        $f0, 0x194($t1)
    ctx->pc = 0x2fc85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc860: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2fc860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc864: 0x0  nop
    ctx->pc = 0x2fc864u;
    // NOP
    // 0x2fc868: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2FC868u;
    {
        const bool branch_taken_0x2fc868 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fc868) {
            ctx->pc = 0x2FC86Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC868u;
            // 0x2fc86c: 0xe5210194  swc1        $f1, 0x194($t1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 404), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC870u;
            goto label_2fc870;
        }
    }
    ctx->pc = 0x2FC870u;
label_2fc870:
    // 0x2fc870: 0xc5270194  lwc1        $f7, 0x194($t1)
    ctx->pc = 0x2fc870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2fc874: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x2fc874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x2fc878: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2fc878u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2fc87c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fc87cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc880: 0x0  nop
    ctx->pc = 0x2fc880u;
    // NOP
    // 0x2fc884: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x2fc884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc888: 0x0  nop
    ctx->pc = 0x2fc888u;
    // NOP
    // 0x2fc88c: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2FC88Cu;
    {
        const bool branch_taken_0x2fc88c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fc88c) {
            ctx->pc = 0x2FC890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC88Cu;
            // 0x2fc890: 0x8d230110  lw          $v1, 0x110($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC8A4u;
            goto label_2fc8a4;
        }
    }
    ctx->pc = 0x2FC894u;
    // 0x2fc894: 0xc0bef94  jal         func_2FBE50
    ctx->pc = 0x2FC894u;
    SET_GPR_U32(ctx, 31, 0x2FC89Cu);
    ctx->pc = 0x2FC898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC894u;
    // 0x2fc898: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE50u, 0x2FC894u, 0x2FC89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC89Cu;
label_2fc89c:
    // 0x2fc89c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2FC89Cu;
    {
        const bool branch_taken_0x2fc89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC89Cu;
        // 0x2fc8a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc89c) {
            ctx->pc = 0x2FC99Cu;
            goto label_2fc99c;
        }
    }
    ctx->pc = 0x2FC8A4u;
label_2fc8a4:
    // 0x2fc8a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2fc8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2fc8a8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2fc8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2fc8ac: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2FC8ACu;
    {
        const bool branch_taken_0x2fc8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC8ACu;
        // 0x2fc8b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc8ac) {
            ctx->pc = 0x2FC99Cu;
            goto label_2fc99c;
        }
    }
    ctx->pc = 0x2FC8B4u;
    // 0x2fc8b4: 0xc52201b4  lwc1        $f2, 0x1B4($t1)
    ctx->pc = 0x2fc8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fc8b8: 0xc5240188  lwc1        $f4, 0x188($t1)
    ctx->pc = 0x2fc8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fc8bc: 0xc525018c  lwc1        $f5, 0x18C($t1)
    ctx->pc = 0x2fc8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2fc8c0: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x2fc8c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x2fc8c4: 0xc5260190  lwc1        $f6, 0x190($t1)
    ctx->pc = 0x2fc8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2fc8c8: 0xc52001a8  lwc1        $f0, 0x1A8($t1)
    ctx->pc = 0x2fc8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc8cc: 0xc52101ac  lwc1        $f1, 0x1AC($t1)
    ctx->pc = 0x2fc8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc8d0: 0xc52301b0  lwc1        $f3, 0x1B0($t1)
    ctx->pc = 0x2fc8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fc8d4: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2fc8d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2fc8d8: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x2fc8d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2fc8dc: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x2fc8dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2fc8e0: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x2fc8e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2fc8e4: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2fc8e4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2fc8e8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2fc8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fc8ec: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x2fc8ecu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x2fc8f0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2fc8f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2fc8f4: 0x46033181  sub.s       $f6, $f6, $f3
    ctx->pc = 0x2fc8f4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
    // 0x2fc8f8: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2fc8f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2fc8fc: 0x46023881  sub.s       $f2, $f7, $f2
    ctx->pc = 0x2fc8fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x2fc900: 0xe52401c8  swc1        $f4, 0x1C8($t1)
    ctx->pc = 0x2fc900u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 456), bits); }
    // 0x2fc904: 0xe52501cc  swc1        $f5, 0x1CC($t1)
    ctx->pc = 0x2fc904u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 460), bits); }
    // 0x2fc908: 0xe52601d0  swc1        $f6, 0x1D0($t1)
    ctx->pc = 0x2fc908u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 464), bits); }
    // 0x2fc90c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2FC90Cu;
    {
        const bool branch_taken_0x2fc90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC90Cu;
        // 0x2fc910: 0xe52201d4  swc1        $f2, 0x1D4($t1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 468), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc90c) {
            ctx->pc = 0x2FC99Cu;
            goto label_2fc99c;
        }
    }
    ctx->pc = 0x2FC914u;
label_2fc914:
    // 0x2fc914: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2FC914u;
    {
        const bool branch_taken_0x2fc914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC914u;
        // 0x2fc918: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc914) {
            ctx->pc = 0x2FC99Cu;
            goto label_2fc99c;
        }
    }
    ctx->pc = 0x2FC91Cu;
    // 0x2fc91c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FC91Cu;
    {
        const bool branch_taken_0x2fc91c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2FC920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC91Cu;
        // 0x2fc920: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc91c) {
            ctx->pc = 0x2FC938u;
            goto label_2fc938;
        }
    }
    ctx->pc = 0x2FC924u;
    // 0x2fc924: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2fc924u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc928: 0x0  nop
    ctx->pc = 0x2fc928u;
    // NOP
    // 0x2fc92c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2fc92cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2fc930: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2FC930u;
    {
        const bool branch_taken_0x2fc930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC930u;
        // 0x2fc934: 0xc5200234  lwc1        $f0, 0x234($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc930) {
            ctx->pc = 0x2FC954u;
            goto label_2fc954;
        }
    }
    ctx->pc = 0x2FC938u;
label_2fc938:
    // 0x2fc938: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2fc938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2fc93c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2fc93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2fc940: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fc940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc944: 0x0  nop
    ctx->pc = 0x2fc944u;
    // NOP
    // 0x2fc948: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2fc948u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2fc94c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2fc94cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2fc950: 0xc5200234  lwc1        $f0, 0x234($t1)
    ctx->pc = 0x2fc950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fc954:
    // 0x2fc954: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fc954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc958: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2fc958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2fc95c: 0x0  nop
    ctx->pc = 0x2fc95cu;
    // NOP
    // 0x2fc960: 0x0  nop
    ctx->pc = 0x2fc960u;
    // NOP
    // 0x2fc964: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2fc964u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2fc968: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2fc968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc96c: 0x0  nop
    ctx->pc = 0x2fc96cu;
    // NOP
    // 0x2fc970: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2FC970u;
    {
        const bool branch_taken_0x2fc970 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fc970) {
            ctx->pc = 0x2FC974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC970u;
            // 0x2fc974: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC978u;
            goto label_2fc978;
        }
    }
    ctx->pc = 0x2FC978u;
label_2fc978:
    // 0x2fc978: 0xc52001a4  lwc1        $f0, 0x1A4($t1)
    ctx->pc = 0x2fc978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc97c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2fc97cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2fc980: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FC980u;
    {
        const bool branch_taken_0x2fc980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC980u;
        // 0x2fc984: 0xe5200194  swc1        $f0, 0x194($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 404), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc980) {
            ctx->pc = 0x2FC998u;
            goto label_2fc998;
        }
    }
    ctx->pc = 0x2FC988u;
label_2fc988:
    // 0x2fc988: 0x90860102  lbu         $a2, 0x102($a0)
    ctx->pc = 0x2fc988u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 258)));
    // 0x2fc98c: 0x24a5fa10  addiu       $a1, $a1, -0x5F0
    ctx->pc = 0x2fc98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965776));
    // 0x2fc990: 0xc0b67da  jal         func_2D9F68
    ctx->pc = 0x2FC990u;
    SET_GPR_U32(ctx, 31, 0x2FC998u);
    ctx->pc = 0x2FC994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC990u;
    // 0x2fc994: 0x90870187  lbu         $a3, 0x187($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 391)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2FC990u, 0x2FC998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC998u;
label_2fc998:
    // 0x2fc998: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fc998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fc99c:
    // 0x2fc99c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2fc99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fc9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC9A0u;
        // 0x2fc9a4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC9A8u;
}
