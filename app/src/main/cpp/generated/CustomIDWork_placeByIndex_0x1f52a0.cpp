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

// Function: CustomIDWork_placeByIndex
// Address: 0x1f52a0 - 0x1f53a8
void CustomIDWork_placeByIndex_0x1f52a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_placeByIndex_0x1f52a0");
#endif

    switch (ctx->pc) {
        case 0x1f531cu: goto label_1f531c;
        case 0x1f536cu: goto label_1f536c;
        case 0x1f537cu: goto label_1f537c;
        case 0x1f538cu: goto label_1f538c;
        default: break;
    }

    ctx->pc = 0x1f52a0u;

    // 0x1f52a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f52a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f52a4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1f52a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1f52a8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1f52a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1f52ac: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x1f52acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1f52b0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1f52b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1f52b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f52b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f52b8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1f52b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1f52bc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f52bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f52c0: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1F52C0u;
    {
        const bool branch_taken_0x1f52c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F52C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F52C0u;
        // 0x1f52c4: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f52c0) {
            ctx->pc = 0x1F538Cu;
            goto label_1f538c;
        }
    }
    ctx->pc = 0x1F52C8u;
    // 0x1f52c8: 0x58080  sll         $s0, $a1, 2
    ctx->pc = 0x1f52c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1f52cc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1f52ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1f52d0: 0x2446bfb0  addiu       $a2, $v0, -0x4050
    ctx->pc = 0x1f52d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950832));
    // 0x1f52d4: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x1f52d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f52d8: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x1f52d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f52dc: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x1f52dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1f52e0: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x1f52e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1f52e4: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x1f52e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1f52e8: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x1f52e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1f52ec: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1f52ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f52f0: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1f52f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f52f4: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x1f52f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f52f8: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x1f52f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f52fc: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x1f52fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f5300: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x1f5300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f5304: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x1f5304u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x42BFC8u));
    // 0x1f5308: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1f5308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1f530c: 0x3b01821  addu        $v1, $sp, $s0
    ctx->pc = 0x1f530cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x1f5310: 0x26240440  addiu       $a0, $s1, 0x440
    ctx->pc = 0x1f5310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
    // 0x1f5314: 0xc0b5996  jal         func_2D6658
    ctx->pc = 0x1F5314u;
    SET_GPR_U32(ctx, 31, 0x1F531Cu);
    ctx->pc = 0x1F5318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5314u;
    // 0x1f5318: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6658u, 0x1F5314u, 0x1F531Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F531Cu;
label_1f531c:
    // 0x1f531c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1f531cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1f5320: 0x3b01821  addu        $v1, $sp, $s0
    ctx->pc = 0x1f5320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x1f5324: 0x2446bfd0  addiu       $a2, $v0, -0x4030
    ctx->pc = 0x1f5324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950864));
    // 0x1f5328: 0x68c70007  ldl         $a3, 0x7($a2)
    ctx->pc = 0x1f5328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1f532c: 0x6cc70000  ldr         $a3, 0x0($a2)
    ctx->pc = 0x1f532cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1f5330: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x1f5330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1f5334: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x1f5334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1f5338: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x1f5338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1f533c: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x1f533cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1f5340: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x1f5340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f5344: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x1f5344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f5348: 0xb3a4002f  sdl         $a0, 0x2F($sp)
    ctx->pc = 0x1f5348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f534c: 0xb7a40028  sdr         $a0, 0x28($sp)
    ctx->pc = 0x1f534cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f5350: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x1f5350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f5354: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x1f5354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f5358: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x1f5358u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x42BFE8u));
    // 0x1f535c: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x1f535cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x1f5360: 0x262404bc  addiu       $a0, $s1, 0x4BC
    ctx->pc = 0x1f5360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1212));
    // 0x1f5364: 0xc0b5996  jal         func_2D6658
    ctx->pc = 0x1F5364u;
    SET_GPR_U32(ctx, 31, 0x1F536Cu);
    ctx->pc = 0x1F5368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5364u;
    // 0x1f5368: 0x8c650020  lw          $a1, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6658u, 0x1F5364u, 0x1F536Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F536Cu;
label_1f536c:
    // 0x1f536c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f536cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5370: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f5370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f5374: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F5374u;
    SET_GPR_U32(ctx, 31, 0x1F537Cu);
    ctx->pc = 0x1F5378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5374u;
    // 0x1f5378: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F5374u, 0x1F537Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F537Cu;
label_1f537c:
    // 0x1f537c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f537cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5380: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f5380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5384: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F5384u;
    SET_GPR_U32(ctx, 31, 0x1F538Cu);
    ctx->pc = 0x1F5388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5384u;
    // 0x1f5388: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F5384u, 0x1F538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F538Cu;
label_1f538c:
    // 0x1f538c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1f538cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f5390: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1f5390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f5394: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1f5394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f5398: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f5398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f539c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F539Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F53A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F539Cu;
        // 0x1f53a0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F539Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F53A4u;
    // 0x1f53a4: 0x0  nop
    ctx->pc = 0x1f53a4u;
    // NOP
    ctx->pc = 0x1f53a8u;
}
