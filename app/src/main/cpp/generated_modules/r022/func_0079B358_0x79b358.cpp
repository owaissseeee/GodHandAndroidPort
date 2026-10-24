#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: func_0079B358
// Address: 0x79b358 - 0x79b590
void func_0079B358_0x79b358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B358_0x79b358");
#endif

    switch (ctx->pc) {
        case 0x79b36cu: goto label_79b36c;
        case 0x79b380u: goto label_79b380;
        case 0x79b440u: goto label_79b440;
        case 0x79b478u: goto label_79b478;
        case 0x79b520u: goto label_79b520;
        default: break;
    }

    ctx->pc = 0x79b358u;

    // 0x79b358: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x79b358u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b35c: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x79b35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x79b360: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x79b360u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79b364: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B364u;
    {
        const bool branch_taken_0x79b364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b364) {
            ctx->pc = 0x79B368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B364u;
            // 0x79b368: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B374u;
            goto label_79b374;
        }
    }
    ctx->pc = 0x79B36Cu;
label_79b36c:
    // 0x79b36c: 0x3e00008  jr          $ra
    ctx->pc = 0x79B36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B36Cu;
        // 0x79b370: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B374u;
label_79b374:
    // 0x79b374: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79b374u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79b378: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B378u;
    {
        const bool branch_taken_0x79b378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B378u;
        // 0x79b37c: 0x38820004  xori        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b378) {
            ctx->pc = 0x79B388u;
            goto label_79b388;
        }
    }
    ctx->pc = 0x79B380u;
label_79b380:
    // 0x79b380: 0x3e00008  jr          $ra
    ctx->pc = 0x79B380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B380u;
        // 0x79b384: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B388u;
label_79b388:
    // 0x79b388: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79B388u;
    {
        const bool branch_taken_0x79b388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B388u;
        // 0x79b38c: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b388) {
            ctx->pc = 0x79B3B0u;
            goto label_79b3b0;
        }
    }
    ctx->pc = 0x79B390u;
    // 0x79b390: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x79B390u;
    {
        const bool branch_taken_0x79b390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b390) {
            ctx->pc = 0x79B36Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b36c;
        }
    }
    ctx->pc = 0x79B398u;
    // 0x79b398: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x79b398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79b39c: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x79b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x79b3a0: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x79B3A0u;
    {
        const bool branch_taken_0x79b3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x79B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3A0u;
        // 0x79b3a4: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3a0) {
            ctx->pc = 0x79B36Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b36c;
        }
    }
    ctx->pc = 0x79B3A8u;
    // 0x79b3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x79B3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3A8u;
        // 0x79b3ac: 0x2442cda0  addiu       $v0, $v0, -0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B3B0u;
label_79b3b0:
    // 0x79b3b0: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x79B3B0u;
    {
        const bool branch_taken_0x79b3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3B0u;
        // 0x79b3b4: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3b0) {
            ctx->pc = 0x79B380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b380;
        }
    }
    ctx->pc = 0x79B3B8u;
    // 0x79b3b8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x79B3B8u;
    {
        const bool branch_taken_0x79b3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3B8u;
        // 0x79b3bc: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3b8) {
            ctx->pc = 0x79B400u;
            goto label_79b400;
        }
    }
    ctx->pc = 0x79B3C0u;
    // 0x79b3c0: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x79B3C0u;
    {
        const bool branch_taken_0x79b3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b3c0) {
            ctx->pc = 0x79B36Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b36c;
        }
    }
    ctx->pc = 0x79B3C8u;
    // 0x79b3c8: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x79b3c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x79b3cc: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x79b3ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x79b3d0: 0x6923000f  ldl         $v1, 0xF($t1)
    ctx->pc = 0x79b3d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x79b3d4: 0x6d230008  ldr         $v1, 0x8($t1)
    ctx->pc = 0x79b3d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x79b3d8: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x79b3d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b3dc: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x79b3dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b3e0: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x79b3e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b3e4: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x79b3e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b3e8: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x79b3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x79b3ec: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x79b3ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b3f0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x79b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79b3f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79b3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79b3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x79B3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3F8u;
        // 0x79b3fc: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B3F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B400u;
label_79b400:
    // 0x79b400: 0x1040ffdf  beqz        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x79B400u;
    {
        const bool branch_taken_0x79b400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B400u;
        // 0x79b404: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b400) {
            ctx->pc = 0x79B380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b380;
        }
    }
    ctx->pc = 0x79B408u;
    // 0x79b408: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x79b408u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x79b40c: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x79b40cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x79b410: 0x8d2b000c  lw          $t3, 0xC($t1)
    ctx->pc = 0x79b410u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x79b414: 0xe81823  subu        $v1, $a3, $t0
    ctx->pc = 0x79b414u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x79b418: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x79b418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79b41c: 0x32023  negu        $a0, $v1
    ctx->pc = 0x79b41cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x79b420: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x79b420u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x79b424: 0x28630020  slti        $v1, $v1, 0x20
    ctx->pc = 0x79b424u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x79b428: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x79B428u;
    {
        const bool branch_taken_0x79b428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B428u;
        // 0x79b42c: 0x8caa000c  lw          $t2, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b428) {
            ctx->pc = 0x79B49Cu;
            goto label_79b49c;
        }
    }
    ctx->pc = 0x79B430u;
    // 0x79b430: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x79b430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x79b434: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79B434u;
    {
        const bool branch_taken_0x79b434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B434u;
        // 0x79b438: 0x8d290004  lw          $t1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b434) {
            ctx->pc = 0x79B464u;
            goto label_79b464;
        }
    }
    ctx->pc = 0x79B43Cu;
    // 0x79b43c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x79b43cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_79b440:
    // 0x79b440: 0xa1042  srl         $v0, $t2, 1
    ctx->pc = 0x79b440u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x79b444: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x79b444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x79b448: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x79b448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x79b44c: 0x107202a  slt         $a0, $t0, $a3
    ctx->pc = 0x79b44cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x79b450: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x79b450u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x79b454: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79B454u;
    {
        const bool branch_taken_0x79b454 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b454) {
            ctx->pc = 0x79B440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b440;
        }
    }
    ctx->pc = 0x79B45Cu;
    // 0x79b45c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x79B45Cu;
    {
        const bool branch_taken_0x79b45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B45Cu;
        // 0x79b460: 0xe8102a  slt         $v0, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b45c) {
            ctx->pc = 0x79B46Cu;
            goto label_79b46c;
        }
    }
    ctx->pc = 0x79B464u;
label_79b464:
    // 0x79b464: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x79b464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79b468: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x79b468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_79b46c:
    // 0x79b46c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x79B46Cu;
    {
        const bool branch_taken_0x79b46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b46c) {
            ctx->pc = 0x79B4C0u;
            goto label_79b4c0;
        }
    }
    ctx->pc = 0x79B474u;
    // 0x79b474: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x79b474u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_79b478:
    // 0x79b478: 0xb1842  srl         $v1, $t3, 1
    ctx->pc = 0x79b478u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
    // 0x79b47c: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x79b47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x79b480: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x79b480u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79b484: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x79b484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x79b488: 0x0  nop
    ctx->pc = 0x79b488u;
    // NOP
    // 0x79b48c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79B48Cu;
    {
        const bool branch_taken_0x79b48c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b48c) {
            ctx->pc = 0x79B478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b478;
        }
    }
    ctx->pc = 0x79B494u;
    // 0x79b494: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x79B494u;
    {
        const bool branch_taken_0x79b494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B494u;
        // 0x79b498: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b494) {
            ctx->pc = 0x79B4C0u;
            goto label_79b4c0;
        }
    }
    ctx->pc = 0x79B49Cu;
label_79b49c:
    // 0x79b49c: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x79b49cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x79b4a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B4A0u;
    {
        const bool branch_taken_0x79b4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4A0u;
        // 0x79b4a4: 0x8d290004  lw          $t1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b4a0) {
            ctx->pc = 0x79B4B4u;
            goto label_79b4b4;
        }
    }
    ctx->pc = 0x79B4A8u;
    // 0x79b4a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79b4a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b4ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79B4ACu;
    {
        const bool branch_taken_0x79b4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4ACu;
        // 0x79b4b0: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b4ac) {
            ctx->pc = 0x79B4C0u;
            goto label_79b4c0;
        }
    }
    ctx->pc = 0x79B4B4u;
label_79b4b4:
    // 0x79b4b4: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x79b4b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b4b8: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x79b4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79b4bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x79b4bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b4c0:
    // 0x79b4c0: 0x11250022  beq         $t1, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x79B4C0u;
    {
        const bool branch_taken_0x79b4c0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        ctx->pc = 0x79B4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4C0u;
        // 0x79b4c4: 0x16a1021  addu        $v0, $t3, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b4c0) {
            ctx->pc = 0x79B54Cu;
            goto label_79b54c;
        }
    }
    ctx->pc = 0x79B4C8u;
    // 0x79b4c8: 0x15200002  bnez        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x79B4C8u;
    {
        const bool branch_taken_0x79b4c8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4C8u;
        // 0x79b4cc: 0x14b1023  subu        $v0, $t2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b4c8) {
            ctx->pc = 0x79B4D4u;
            goto label_79b4d4;
        }
    }
    ctx->pc = 0x79B4D0u;
    // 0x79b4d0: 0x16a1023  subu        $v0, $t3, $t2
    ctx->pc = 0x79b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
label_79b4d4:
    // 0x79b4d4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B4D4u;
    {
        const bool branch_taken_0x79b4d4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x79B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4D4u;
        // 0x79b4d8: 0x21823  negu        $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b4d4) {
            ctx->pc = 0x79B4ECu;
            goto label_79b4ec;
        }
    }
    ctx->pc = 0x79B4DCu;
    // 0x79b4dc: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x79b4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x79b4e0: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x79b4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x79b4e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79B4E4u;
    {
        const bool branch_taken_0x79b4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4E4u;
        // 0x79b4e8: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b4e4) {
            ctx->pc = 0x79B4FCu;
            goto label_79b4fc;
        }
    }
    ctx->pc = 0x79B4ECu;
label_79b4ec:
    // 0x79b4ec: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x79b4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x79b4f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b4f4: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x79b4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x79b4f8: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x79b4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_79b4fc:
    // 0x79b4fc: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x79b4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x79b500: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x79b500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x79b504: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x79b504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x79b508: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x79b508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x79b50c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x79b50cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79b510: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x79B510u;
    {
        const bool branch_taken_0x79b510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B510u;
        // 0x79b514: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b510) {
            ctx->pc = 0x79B55Cu;
            goto label_79b55c;
        }
    }
    ctx->pc = 0x79B518u;
    // 0x79b518: 0x3c053fff  lui         $a1, 0x3FFF
    ctx->pc = 0x79b518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
    // 0x79b51c: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x79b51cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
label_79b520:
    // 0x79b520: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x79b520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x79b524: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x79b524u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x79b528: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x79b528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x79b52c: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x79b52cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x79b530: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79b530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79b534: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x79b534u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79b538: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x79b538u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x79b53c: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79B53Cu;
    {
        const bool branch_taken_0x79b53c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B53Cu;
        // 0x79b540: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b53c) {
            ctx->pc = 0x79B520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b520;
        }
    }
    ctx->pc = 0x79B544u;
    // 0x79b544: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79B544u;
    {
        const bool branch_taken_0x79b544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B544u;
        // 0x79b548: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b544) {
            ctx->pc = 0x79B55Cu;
            goto label_79b55c;
        }
    }
    ctx->pc = 0x79B54Cu;
label_79b54c:
    // 0x79b54c: 0xacc90004  sw          $t1, 0x4($a2)
    ctx->pc = 0x79b54cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x79b550: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x79b550u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x79b554: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79b554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b558: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x79b558u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_79b55c:
    // 0x79b55c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79b560: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x79B560u;
    {
        const bool branch_taken_0x79b560 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x79B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B560u;
        // 0x79b564: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b560) {
            ctx->pc = 0x79B584u;
            goto label_79b584;
        }
    }
    ctx->pc = 0x79B568u;
    // 0x79b568: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x79b568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x79b56c: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x79b56cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x79b570: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x79b570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x79b574: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x79b574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x79b578: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b57c: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x79b57cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x79b580: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x79b580u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_79b584:
    // 0x79b584: 0x3e00008  jr          $ra
    ctx->pc = 0x79B584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B584u;
        // 0x79b588: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B58Cu;
    // 0x79b58c: 0x0  nop
    ctx->pc = 0x79b58cu;
    // NOP
    ctx->pc = 0x79b590u;
}
} // namespace gh_r022
