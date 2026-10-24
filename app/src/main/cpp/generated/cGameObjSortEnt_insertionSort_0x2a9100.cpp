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

// Function: cGameObjSortEnt_insertionSort
// Address: 0x2a9100 - 0x2a9210
void cGameObjSortEnt_insertionSort_0x2a9100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObjSortEnt_insertionSort_0x2a9100");
#endif

    switch (ctx->pc) {
        case 0x2a9138u: goto label_2a9138;
        case 0x2a9180u: goto label_2a9180;
        case 0x2a91dcu: goto label_2a91dc;
        default: break;
    }

    ctx->pc = 0x2a9100u;

    // 0x2a9100: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a9100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a9104: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2a9104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2a9108: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a9108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a910c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a910cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9110: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2a9110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2a9114: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2a9114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9118: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2a9118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2a911c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2a911cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9120: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2a9120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2a9124: 0x12330031  beq         $s1, $s3, . + 4 + (0x31 << 2)
    ctx->pc = 0x2A9124u;
    {
        const bool branch_taken_0x2a9124 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x2A9128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9124u;
        // 0x2a9128: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9124) {
            ctx->pc = 0x2A91ECu;
            goto label_2a91ec;
        }
    }
    ctx->pc = 0x2A912Cu;
    // 0x2a912c: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x2a912cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2a9130: 0x1213002e  beq         $s0, $s3, . + 4 + (0x2E << 2)
    ctx->pc = 0x2A9130u;
    {
        const bool branch_taken_0x2a9130 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x2A9134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9130u;
        // 0x2a9134: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9130) {
            ctx->pc = 0x2A91ECu;
            goto label_2a91ec;
        }
    }
    ctx->pc = 0x2A9138u;
label_2a9138:
    // 0x2a9138: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x2a9138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a913c: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x2a913cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a9140: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2a9140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a9144: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2a9144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a9148: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2a9148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a914c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2a914cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9150: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a9150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9154: 0x0  nop
    ctx->pc = 0x2a9154u;
    // NOP
    // 0x2a9158: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A9158u;
    {
        const bool branch_taken_0x2a9158 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9158u;
        // 0x2a915c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9158) {
            ctx->pc = 0x2A9164u;
            goto label_2a9164;
        }
    }
    ctx->pc = 0x2A9160u;
    // 0x2a9160: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a9160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9164:
    // 0x2a9164: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A9164u;
    {
        const bool branch_taken_0x2a9164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9164u;
        // 0x2a9168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9164) {
            ctx->pc = 0x2A91B4u;
            goto label_2a91b4;
        }
    }
    ctx->pc = 0x2A916Cu;
    // 0x2a916c: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x2a916cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2a9170: 0x911023  subu        $v0, $a0, $s1
    ctx->pc = 0x2a9170u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2a9174: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2a9174u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2a9178: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A9178u;
    {
        const bool branch_taken_0x2a9178 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2A917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9178u;
        // 0x2a917c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9178) {
            ctx->pc = 0x2A91A0u;
            goto label_2a91a0;
        }
    }
    ctx->pc = 0x2A9180u;
label_2a9180:
    // 0x2a9180: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x2a9180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x2a9184: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x2a9184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x2a9188: 0x68860007  ldl         $a2, 0x7($a0)
    ctx->pc = 0x2a9188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2a918c: 0x6c860000  ldr         $a2, 0x0($a0)
    ctx->pc = 0x2a918cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2a9190: 0xb0660007  sdl         $a2, 0x7($v1)
    ctx->pc = 0x2a9190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a9194: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a9194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a9198: 0x1c40fff9  bgtz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A9198u;
    {
        const bool branch_taken_0x2a9198 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x2A919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9198u;
        // 0x2a919c: 0xb4660000  sdr         $a2, 0x0($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9198) {
            ctx->pc = 0x2A9180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a9180;
        }
    }
    ctx->pc = 0x2A91A0u;
label_2a91a0:
    // 0x2a91a0: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2a91a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a91a4: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2a91a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a91a8: 0xb2420007  sdl         $v0, 0x7($s2)
    ctx->pc = 0x2a91a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a91ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2A91ACu;
    {
        const bool branch_taken_0x2a91ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A91B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A91ACu;
        // 0x2a91b0: 0xb6420000  sdr         $v0, 0x0($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a91ac) {
            ctx->pc = 0x2A91E0u;
            goto label_2a91e0;
        }
    }
    ctx->pc = 0x2A91B4u;
label_2a91b4:
    // 0x2a91b4: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x2a91b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2a91b8: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x2a91b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2a91bc: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x2a91bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a91c0: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x2a91c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a91c4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2a91c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a91c8: 0x9fa50014  lwu         $a1, 0x14($sp)
    ctx->pc = 0x2a91c8u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2a91cc: 0x9fa20010  lwu         $v0, 0x10($sp)
    ctx->pc = 0x2a91ccu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a91d0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2a91d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2a91d4: 0xc0aa426  jal         func_2A9098
    ctx->pc = 0x2A91D4u;
    SET_GPR_U32(ctx, 31, 0x2A91DCu);
    ctx->pc = 0x2A91D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A91D4u;
    // 0x2a91d8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9098u, 0x2A91D4u, 0x2A91DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A91DCu;
label_2a91dc:
    // 0x2a91dc: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x2a91dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2a91e0:
    // 0x2a91e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a91e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a91e4: 0x1613ffd4  bne         $s0, $s3, . + 4 + (-0x2C << 2)
    ctx->pc = 0x2A91E4u;
    {
        const bool branch_taken_0x2a91e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x2a91e4) {
            ctx->pc = 0x2A9138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a9138;
        }
    }
    ctx->pc = 0x2A91ECu;
label_2a91ec:
    // 0x2a91ec: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2a91ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a91f0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2a91f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a91f4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2a91f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a91f8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a91f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a91fc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2a91fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9200: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a9200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9204: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9204u;
        // 0x2a9208: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A920Cu;
    // 0x2a920c: 0x0  nop
    ctx->pc = 0x2a920cu;
    // NOP
    ctx->pc = 0x2a9210u;
}
