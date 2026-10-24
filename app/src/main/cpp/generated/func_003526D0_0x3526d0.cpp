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

// Function: func_003526D0
// Address: 0x3526d0 - 0x352790
void func_003526D0_0x3526d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003526D0_0x3526d0");
#endif

    switch (ctx->pc) {
        case 0x35273cu: goto label_35273c;
        case 0x35274cu: goto label_35274c;
        case 0x352758u: goto label_352758;
        default: break;
    }

    ctx->pc = 0x3526d0u;

    // 0x3526d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3526d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3526d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3526d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3526d8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3526d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3526dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3526dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3526e0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3526e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3526e4: 0x8e030d98  lw          $v1, 0xD98($s0)
    ctx->pc = 0x3526e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
    // 0x3526e8: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x3526E8u;
    {
        const bool branch_taken_0x3526e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3526ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3526E8u;
        // 0x3526ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3526e8) {
            ctx->pc = 0x352780u;
            goto label_352780;
        }
    }
    ctx->pc = 0x3526F0u;
    // 0x3526f0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3526f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3526f4: 0x6a020d53  ldl         $v0, 0xD53($s0)
    ctx->pc = 0x3526f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3411); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3526f8: 0x6e020d4c  ldr         $v0, 0xD4C($s0)
    ctx->pc = 0x3526f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3404); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3526fc: 0x6a030d5b  ldl         $v1, 0xD5B($s0)
    ctx->pc = 0x3526fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3419); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x352700: 0x6e030d54  ldr         $v1, 0xD54($s0)
    ctx->pc = 0x352700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3412); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x352704: 0x6a070d63  ldl         $a3, 0xD63($s0)
    ctx->pc = 0x352704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3427); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x352708: 0x6e070d5c  ldr         $a3, 0xD5C($s0)
    ctx->pc = 0x352708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3420); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x35270c: 0x6a080d6b  ldl         $t0, 0xD6B($s0)
    ctx->pc = 0x35270cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3435); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x352710: 0x6e080d64  ldr         $t0, 0xD64($s0)
    ctx->pc = 0x352710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3428); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x352714: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x352714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x352718: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x352718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35271c: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x35271cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x352720: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x352720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x352724: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x352724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x352728: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x352728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35272c: 0xb3a8001f  sdl         $t0, 0x1F($sp)
    ctx->pc = 0x35272cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x352730: 0xb7a80018  sdr         $t0, 0x18($sp)
    ctx->pc = 0x352730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x352734: 0xc0d6c3a  jal         func_35B0E8
    ctx->pc = 0x352734u;
    SET_GPR_U32(ctx, 31, 0x35273Cu);
    ctx->pc = 0x352738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352734u;
    // 0x352738: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B0E8u, 0x352734u, 0x35273Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35273Cu;
label_35273c:
    // 0x35273c: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x35273cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x352740: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x352740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x352744: 0xc0d6c3a  jal         func_35B0E8
    ctx->pc = 0x352744u;
    SET_GPR_U32(ctx, 31, 0x35274Cu);
    ctx->pc = 0x352748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352744u;
    // 0x352748: 0x26040d9c  addiu       $a0, $s0, 0xD9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3484));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B0E8u, 0x352744u, 0x35274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35274Cu;
label_35274c:
    // 0x35274c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35274cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352750: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x352750u;
    SET_GPR_U32(ctx, 31, 0x352758u);
    ctx->pc = 0x352754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352750u;
    // 0x352754: 0x24050035  addiu       $a1, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x352750u, 0x352758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352758u;
label_352758:
    // 0x352758: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x352758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35275c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x35275cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x352760: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x352760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x352764: 0xa6202a  slt         $a0, $a1, $a2
    ctx->pc = 0x352764u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x352768: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x352768u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x35276c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35276Cu;
    {
        const bool branch_taken_0x35276c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x352770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35276Cu;
        // 0x352770: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35276c) {
            ctx->pc = 0x352780u;
            goto label_352780;
        }
    }
    ctx->pc = 0x352774u;
    // 0x352774: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x352774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x352778: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x352778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35277c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x35277cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_352780:
    // 0x352780: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x352780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x352784: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x352784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x352788: 0x3e00008  jr          $ra
    ctx->pc = 0x352788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352788u;
        // 0x35278c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352790u;
}
