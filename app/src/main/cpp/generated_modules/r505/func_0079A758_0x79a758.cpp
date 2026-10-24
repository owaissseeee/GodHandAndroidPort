#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: func_0079A758
// Address: 0x79a758 - 0x79a990
void func_0079A758_0x79a758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A758_0x79a758");
#endif

    switch (ctx->pc) {
        case 0x79a76cu: goto label_79a76c;
        case 0x79a780u: goto label_79a780;
        case 0x79a840u: goto label_79a840;
        case 0x79a878u: goto label_79a878;
        case 0x79a920u: goto label_79a920;
        default: break;
    }

    ctx->pc = 0x79a758u;

    // 0x79a758: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x79a758u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a75c: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x79a75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x79a760: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x79a760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79a764: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A764u;
    {
        const bool branch_taken_0x79a764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a764) {
            ctx->pc = 0x79A768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A764u;
            // 0x79a768: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A774u;
            goto label_79a774;
        }
    }
    ctx->pc = 0x79A76Cu;
label_79a76c:
    // 0x79a76c: 0x3e00008  jr          $ra
    ctx->pc = 0x79A76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A76Cu;
        // 0x79a770: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A774u;
label_79a774:
    // 0x79a774: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79a774u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79a778: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A778u;
    {
        const bool branch_taken_0x79a778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A778u;
        // 0x79a77c: 0x38820004  xori        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a778) {
            ctx->pc = 0x79A788u;
            goto label_79a788;
        }
    }
    ctx->pc = 0x79A780u;
label_79a780:
    // 0x79a780: 0x3e00008  jr          $ra
    ctx->pc = 0x79A780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A780u;
        // 0x79a784: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A788u;
label_79a788:
    // 0x79a788: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79A788u;
    {
        const bool branch_taken_0x79a788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A788u;
        // 0x79a78c: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a788) {
            ctx->pc = 0x79A7B0u;
            goto label_79a7b0;
        }
    }
    ctx->pc = 0x79A790u;
    // 0x79a790: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x79A790u;
    {
        const bool branch_taken_0x79a790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a790) {
            ctx->pc = 0x79A76Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a76c;
        }
    }
    ctx->pc = 0x79A798u;
    // 0x79a798: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x79a798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79a79c: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x79a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x79a7a0: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x79A7A0u;
    {
        const bool branch_taken_0x79a7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x79A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7A0u;
        // 0x79a7a4: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7a0) {
            ctx->pc = 0x79A76Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a76c;
        }
    }
    ctx->pc = 0x79A7A8u;
    // 0x79a7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7A8u;
        // 0x79a7ac: 0x2442c288  addiu       $v0, $v0, -0x3D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A7B0u;
label_79a7b0:
    // 0x79a7b0: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x79A7B0u;
    {
        const bool branch_taken_0x79a7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7B0u;
        // 0x79a7b4: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7b0) {
            ctx->pc = 0x79A780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a780;
        }
    }
    ctx->pc = 0x79A7B8u;
    // 0x79a7b8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x79A7B8u;
    {
        const bool branch_taken_0x79a7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7B8u;
        // 0x79a7bc: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7b8) {
            ctx->pc = 0x79A800u;
            goto label_79a800;
        }
    }
    ctx->pc = 0x79A7C0u;
    // 0x79a7c0: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x79A7C0u;
    {
        const bool branch_taken_0x79a7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a7c0) {
            ctx->pc = 0x79A76Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a76c;
        }
    }
    ctx->pc = 0x79A7C8u;
    // 0x79a7c8: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x79a7c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x79a7cc: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x79a7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x79a7d0: 0x6923000f  ldl         $v1, 0xF($t1)
    ctx->pc = 0x79a7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x79a7d4: 0x6d230008  ldr         $v1, 0x8($t1)
    ctx->pc = 0x79a7d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x79a7d8: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x79a7d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a7dc: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x79a7dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a7e0: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x79a7e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a7e4: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x79a7e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a7e8: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x79a7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x79a7ec: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x79a7ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7f0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x79a7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79a7f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79a7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79a7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7F8u;
        // 0x79a7fc: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A800u;
label_79a800:
    // 0x79a800: 0x1040ffdf  beqz        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x79A800u;
    {
        const bool branch_taken_0x79a800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A800u;
        // 0x79a804: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a800) {
            ctx->pc = 0x79A780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a780;
        }
    }
    ctx->pc = 0x79A808u;
    // 0x79a808: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x79a808u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x79a80c: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x79a80cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x79a810: 0x8d2b000c  lw          $t3, 0xC($t1)
    ctx->pc = 0x79a810u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x79a814: 0xe81823  subu        $v1, $a3, $t0
    ctx->pc = 0x79a814u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x79a818: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x79a818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79a81c: 0x32023  negu        $a0, $v1
    ctx->pc = 0x79a81cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x79a820: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x79a820u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x79a824: 0x28630020  slti        $v1, $v1, 0x20
    ctx->pc = 0x79a824u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x79a828: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x79A828u;
    {
        const bool branch_taken_0x79a828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A828u;
        // 0x79a82c: 0x8caa000c  lw          $t2, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a828) {
            ctx->pc = 0x79A89Cu;
            goto label_79a89c;
        }
    }
    ctx->pc = 0x79A830u;
    // 0x79a830: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x79a830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x79a834: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79A834u;
    {
        const bool branch_taken_0x79a834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A834u;
        // 0x79a838: 0x8d290004  lw          $t1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a834) {
            ctx->pc = 0x79A864u;
            goto label_79a864;
        }
    }
    ctx->pc = 0x79A83Cu;
    // 0x79a83c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x79a83cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_79a840:
    // 0x79a840: 0xa1042  srl         $v0, $t2, 1
    ctx->pc = 0x79a840u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x79a844: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x79a844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x79a848: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x79a848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x79a84c: 0x107202a  slt         $a0, $t0, $a3
    ctx->pc = 0x79a84cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x79a850: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x79a850u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x79a854: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79A854u;
    {
        const bool branch_taken_0x79a854 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a854) {
            ctx->pc = 0x79A840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a840;
        }
    }
    ctx->pc = 0x79A85Cu;
    // 0x79a85c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x79A85Cu;
    {
        const bool branch_taken_0x79a85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A85Cu;
        // 0x79a860: 0xe8102a  slt         $v0, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a85c) {
            ctx->pc = 0x79A86Cu;
            goto label_79a86c;
        }
    }
    ctx->pc = 0x79A864u;
label_79a864:
    // 0x79a864: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x79a864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79a868: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x79a868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_79a86c:
    // 0x79a86c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x79A86Cu;
    {
        const bool branch_taken_0x79a86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a86c) {
            ctx->pc = 0x79A8C0u;
            goto label_79a8c0;
        }
    }
    ctx->pc = 0x79A874u;
    // 0x79a874: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x79a874u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_79a878:
    // 0x79a878: 0xb1842  srl         $v1, $t3, 1
    ctx->pc = 0x79a878u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
    // 0x79a87c: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x79a87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x79a880: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x79a880u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79a884: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x79a884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x79a888: 0x0  nop
    ctx->pc = 0x79a888u;
    // NOP
    // 0x79a88c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79A88Cu;
    {
        const bool branch_taken_0x79a88c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a88c) {
            ctx->pc = 0x79A878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a878;
        }
    }
    ctx->pc = 0x79A894u;
    // 0x79a894: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x79A894u;
    {
        const bool branch_taken_0x79a894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A894u;
        // 0x79a898: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a894) {
            ctx->pc = 0x79A8C0u;
            goto label_79a8c0;
        }
    }
    ctx->pc = 0x79A89Cu;
label_79a89c:
    // 0x79a89c: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x79a89cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x79a8a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A8A0u;
    {
        const bool branch_taken_0x79a8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8A0u;
        // 0x79a8a4: 0x8d290004  lw          $t1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8a0) {
            ctx->pc = 0x79A8B4u;
            goto label_79a8b4;
        }
    }
    ctx->pc = 0x79A8A8u;
    // 0x79a8a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79a8a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79A8ACu;
    {
        const bool branch_taken_0x79a8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8ACu;
        // 0x79a8b0: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8ac) {
            ctx->pc = 0x79A8C0u;
            goto label_79a8c0;
        }
    }
    ctx->pc = 0x79A8B4u;
label_79a8b4:
    // 0x79a8b4: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x79a8b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8b8: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x79a8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79a8bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x79a8bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a8c0:
    // 0x79a8c0: 0x11250022  beq         $t1, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x79A8C0u;
    {
        const bool branch_taken_0x79a8c0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        ctx->pc = 0x79A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8C0u;
        // 0x79a8c4: 0x16a1021  addu        $v0, $t3, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8c0) {
            ctx->pc = 0x79A94Cu;
            goto label_79a94c;
        }
    }
    ctx->pc = 0x79A8C8u;
    // 0x79a8c8: 0x15200002  bnez        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x79A8C8u;
    {
        const bool branch_taken_0x79a8c8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8C8u;
        // 0x79a8cc: 0x14b1023  subu        $v0, $t2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8c8) {
            ctx->pc = 0x79A8D4u;
            goto label_79a8d4;
        }
    }
    ctx->pc = 0x79A8D0u;
    // 0x79a8d0: 0x16a1023  subu        $v0, $t3, $t2
    ctx->pc = 0x79a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
label_79a8d4:
    // 0x79a8d4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A8D4u;
    {
        const bool branch_taken_0x79a8d4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x79A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8D4u;
        // 0x79a8d8: 0x21823  negu        $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8d4) {
            ctx->pc = 0x79A8ECu;
            goto label_79a8ec;
        }
    }
    ctx->pc = 0x79A8DCu;
    // 0x79a8dc: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x79a8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x79a8e0: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x79a8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x79a8e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79A8E4u;
    {
        const bool branch_taken_0x79a8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8E4u;
        // 0x79a8e8: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8e4) {
            ctx->pc = 0x79A8FCu;
            goto label_79a8fc;
        }
    }
    ctx->pc = 0x79A8ECu;
label_79a8ec:
    // 0x79a8ec: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x79a8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x79a8f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a8f4: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x79a8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x79a8f8: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x79a8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_79a8fc:
    // 0x79a8fc: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x79a8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x79a900: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x79a900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x79a904: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x79a904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x79a908: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x79a908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x79a90c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x79a90cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79a910: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x79A910u;
    {
        const bool branch_taken_0x79a910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A910u;
        // 0x79a914: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a910) {
            ctx->pc = 0x79A95Cu;
            goto label_79a95c;
        }
    }
    ctx->pc = 0x79A918u;
    // 0x79a918: 0x3c053fff  lui         $a1, 0x3FFF
    ctx->pc = 0x79a918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
    // 0x79a91c: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x79a91cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
label_79a920:
    // 0x79a920: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x79a920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x79a924: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x79a924u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x79a928: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x79a928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x79a92c: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x79a92cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x79a930: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79a930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79a934: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x79a934u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79a938: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x79a938u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x79a93c: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79A93Cu;
    {
        const bool branch_taken_0x79a93c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A93Cu;
        // 0x79a940: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a93c) {
            ctx->pc = 0x79A920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a920;
        }
    }
    ctx->pc = 0x79A944u;
    // 0x79a944: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79A944u;
    {
        const bool branch_taken_0x79a944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A944u;
        // 0x79a948: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a944) {
            ctx->pc = 0x79A95Cu;
            goto label_79a95c;
        }
    }
    ctx->pc = 0x79A94Cu;
label_79a94c:
    // 0x79a94c: 0xacc90004  sw          $t1, 0x4($a2)
    ctx->pc = 0x79a94cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x79a950: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x79a950u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x79a954: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a958: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x79a958u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_79a95c:
    // 0x79a95c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a960: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x79A960u;
    {
        const bool branch_taken_0x79a960 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x79A964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A960u;
        // 0x79a964: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a960) {
            ctx->pc = 0x79A984u;
            goto label_79a984;
        }
    }
    ctx->pc = 0x79A968u;
    // 0x79a968: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x79a968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x79a96c: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x79a96cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x79a970: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x79a970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x79a974: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x79a974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x79a978: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a97c: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x79a97cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x79a980: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x79a980u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_79a984:
    // 0x79a984: 0x3e00008  jr          $ra
    ctx->pc = 0x79A984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A984u;
        // 0x79a988: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
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
} // namespace gh_r505
