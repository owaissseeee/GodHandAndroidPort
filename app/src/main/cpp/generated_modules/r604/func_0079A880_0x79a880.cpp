#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r604_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r604
{
// Function: func_0079A880
// Address: 0x79a880 - 0x79a990
void func_0079A880_0x79a880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A880_0x79a880");
#endif

    switch (ctx->pc) {
        case 0x79a928u: goto label_79a928;
        case 0x79a93cu: goto label_79a93c;
        case 0x79a948u: goto label_79a948;
        case 0x79a958u: goto label_79a958;
        case 0x79a970u: goto label_79a970;
        default: break;
    }

    ctx->pc = 0x79a880u;

    // 0x79a880: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x79a880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x79a884: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a888: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x79a888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x79a88c: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79a890: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x79a890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x79a894: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79a894u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79a898: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x79a898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x79a89c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79a89cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8a0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x79a8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x79a8a4: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x79a8a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79a8a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x79a8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x79a8ac: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x79a8acu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x79a8b0: 0x2448b4f8  addiu       $t0, $v0, -0x4B08
    ctx->pc = 0x79a8b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948088));
    // 0x79a8b4: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x79a8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x79a8b8: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x79a8b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x79a8bc: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x79a8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x79a8c0: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x79a8c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x79a8c4: 0x69070017  ldl         $a3, 0x17($t0)
    ctx->pc = 0x79a8c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x79a8c8: 0x6d070010  ldr         $a3, 0x10($t0)
    ctx->pc = 0x79a8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x79a8cc: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x79a8ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a8d0: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x79a8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a8d4: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x79a8d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a8d8: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x79a8d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a8dc: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x79a8dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a8e0: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x79a8e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a8e4: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x79a8e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8e8: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a8ec: 0x2468b510  addiu       $t0, $v1, -0x4AF0
    ctx->pc = 0x79a8ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948112));
    // 0x79a8f0: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x79a8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x79a8f4: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x79a8f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x79a8f8: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x79a8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x79a8fc: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x79a8fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x79a900: 0x69070017  ldl         $a3, 0x17($t0)
    ctx->pc = 0x79a900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x79a904: 0x6d070010  ldr         $a3, 0x10($t0)
    ctx->pc = 0x79a904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x79a908: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x79a908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a90c: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x79a90cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a910: 0xb3a6002f  sdl         $a2, 0x2F($sp)
    ctx->pc = 0x79a910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a914: 0xb7a60028  sdr         $a2, 0x28($sp)
    ctx->pc = 0x79a914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a918: 0xb3a70037  sdl         $a3, 0x37($sp)
    ctx->pc = 0x79a918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a91c: 0xb7a70030  sdr         $a3, 0x30($sp)
    ctx->pc = 0x79a91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a920: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79A920u;
    SET_GPR_U32(ctx, 31, 0x79A928u);
    ctx->pc = 0x79A924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A920u;
    // 0x79a924: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79A920u, 0x79A928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A928u;
label_79a928:
    // 0x79a928: 0x3b11021  addu        $v0, $sp, $s1
    ctx->pc = 0x79a928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
    // 0x79a92c: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a930: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x79a930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a934: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79A934u;
    SET_GPR_U32(ctx, 31, 0x79A93Cu);
    ctx->pc = 0x79A938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A934u;
    // 0x79a938: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79A934u, 0x79A93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A93Cu;
label_79a93c:
    // 0x79a93c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79A93Cu;
    {
        const bool branch_taken_0x79a93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A93Cu;
        // 0x79a940: 0x2519021  addu        $s2, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a93c) {
            ctx->pc = 0x79A958u;
            goto label_79a958;
        }
    }
    ctx->pc = 0x79A944u;
    // 0x79a944: 0x0  nop
    ctx->pc = 0x79a944u;
    // NOP
label_79a948:
    // 0x79a948: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a94c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x79a94cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x79a950: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A950u;
    SET_GPR_U32(ctx, 31, 0x79A958u);
    ctx->pc = 0x79A954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A950u;
    // 0x79a954: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A950u, 0x79A958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A958u;
label_79a958:
    // 0x79a958: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x79a958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79a95c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x79a95cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x79a960: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79A960u;
    {
        const bool branch_taken_0x79a960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A960u;
        // 0x79a964: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a960) {
            ctx->pc = 0x79A948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a948;
        }
    }
    ctx->pc = 0x79A968u;
    // 0x79a968: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79A968u;
    SET_GPR_U32(ctx, 31, 0x79A970u);
    ctx->pc = 0x79A96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A968u;
    // 0x79a96c: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A968u, 0x79A970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A970u;
label_79a970:
    // 0x79a970: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x79a970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79a974: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x79a974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a978: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x79a978u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a97c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x79a97cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a980: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x79a980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a984: 0x3e00008  jr          $ra
    ctx->pc = 0x79A984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A984u;
        // 0x79a988: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A98Cu;
    // 0x79a98c: 0x0  nop
    ctx->pc = 0x79a98cu;
    // NOP
    ctx->pc = 0x79a990u;
}
} // namespace gh_r604
