#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: func_0079C0C8
// Address: 0x79c0c8 - 0x79c300
void func_0079C0C8_0x79c0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079C0C8_0x79c0c8");
#endif

    switch (ctx->pc) {
        case 0x79c0dcu: goto label_79c0dc;
        case 0x79c0f0u: goto label_79c0f0;
        case 0x79c1b0u: goto label_79c1b0;
        case 0x79c1e8u: goto label_79c1e8;
        case 0x79c290u: goto label_79c290;
        default: break;
    }

    ctx->pc = 0x79c0c8u;

    // 0x79c0c8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x79c0c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c0cc: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x79c0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x79c0d0: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x79c0d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79c0d4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C0D4u;
    {
        const bool branch_taken_0x79c0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79c0d4) {
            ctx->pc = 0x79C0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C0D4u;
            // 0x79c0d8: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C0E4u;
            goto label_79c0e4;
        }
    }
    ctx->pc = 0x79C0DCu;
label_79c0dc:
    // 0x79c0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x79C0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0DCu;
        // 0x79c0e0: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C0E4u;
label_79c0e4:
    // 0x79c0e4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79c0e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79c0e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C0E8u;
    {
        const bool branch_taken_0x79c0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0E8u;
        // 0x79c0ec: 0x38820004  xori        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c0e8) {
            ctx->pc = 0x79C0F8u;
            goto label_79c0f8;
        }
    }
    ctx->pc = 0x79C0F0u;
label_79c0f0:
    // 0x79c0f0: 0x3e00008  jr          $ra
    ctx->pc = 0x79C0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0F0u;
        // 0x79c0f4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C0F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C0F8u;
label_79c0f8:
    // 0x79c0f8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79C0F8u;
    {
        const bool branch_taken_0x79c0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0F8u;
        // 0x79c0fc: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c0f8) {
            ctx->pc = 0x79C120u;
            goto label_79c120;
        }
    }
    ctx->pc = 0x79C100u;
    // 0x79c100: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x79C100u;
    {
        const bool branch_taken_0x79c100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c100) {
            ctx->pc = 0x79C0DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c0dc;
        }
    }
    ctx->pc = 0x79C108u;
    // 0x79c108: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x79c108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79c10c: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x79c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x79c110: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x79C110u;
    {
        const bool branch_taken_0x79c110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x79C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C110u;
        // 0x79c114: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c110) {
            ctx->pc = 0x79C0DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c0dc;
        }
    }
    ctx->pc = 0x79C118u;
    // 0x79c118: 0x3e00008  jr          $ra
    ctx->pc = 0x79C118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C118u;
        // 0x79c11c: 0x244209e8  addiu       $v0, $v0, 0x9E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2536));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C120u;
label_79c120:
    // 0x79c120: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x79C120u;
    {
        const bool branch_taken_0x79c120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C120u;
        // 0x79c124: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c120) {
            ctx->pc = 0x79C0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c0f0;
        }
    }
    ctx->pc = 0x79C128u;
    // 0x79c128: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x79C128u;
    {
        const bool branch_taken_0x79c128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C128u;
        // 0x79c12c: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c128) {
            ctx->pc = 0x79C170u;
            goto label_79c170;
        }
    }
    ctx->pc = 0x79C130u;
    // 0x79c130: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x79C130u;
    {
        const bool branch_taken_0x79c130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c130) {
            ctx->pc = 0x79C0DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c0dc;
        }
    }
    ctx->pc = 0x79C138u;
    // 0x79c138: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x79c138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x79c13c: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x79c13cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x79c140: 0x6923000f  ldl         $v1, 0xF($t1)
    ctx->pc = 0x79c140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x79c144: 0x6d230008  ldr         $v1, 0x8($t1)
    ctx->pc = 0x79c144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x79c148: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x79c148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c14c: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x79c14cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c150: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x79c150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c154: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x79c154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c158: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x79c158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x79c15c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x79c15cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c160: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x79c160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79c164: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79c164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79c168: 0x3e00008  jr          $ra
    ctx->pc = 0x79C168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C168u;
        // 0x79c16c: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C170u;
label_79c170:
    // 0x79c170: 0x1040ffdf  beqz        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x79C170u;
    {
        const bool branch_taken_0x79c170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C170u;
        // 0x79c174: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c170) {
            ctx->pc = 0x79C0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c0f0;
        }
    }
    ctx->pc = 0x79C178u;
    // 0x79c178: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x79c178u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x79c17c: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x79c17cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x79c180: 0x8d2b000c  lw          $t3, 0xC($t1)
    ctx->pc = 0x79c180u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x79c184: 0xe81823  subu        $v1, $a3, $t0
    ctx->pc = 0x79c184u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x79c188: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x79c188u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79c18c: 0x32023  negu        $a0, $v1
    ctx->pc = 0x79c18cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x79c190: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x79c190u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x79c194: 0x28630020  slti        $v1, $v1, 0x20
    ctx->pc = 0x79c194u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x79c198: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x79C198u;
    {
        const bool branch_taken_0x79c198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C198u;
        // 0x79c19c: 0x8caa000c  lw          $t2, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c198) {
            ctx->pc = 0x79C20Cu;
            goto label_79c20c;
        }
    }
    ctx->pc = 0x79C1A0u;
    // 0x79c1a0: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x79c1a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x79c1a4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79C1A4u;
    {
        const bool branch_taken_0x79c1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C1A4u;
        // 0x79c1a8: 0x8d290004  lw          $t1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c1a4) {
            ctx->pc = 0x79C1D4u;
            goto label_79c1d4;
        }
    }
    ctx->pc = 0x79C1ACu;
    // 0x79c1ac: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x79c1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_79c1b0:
    // 0x79c1b0: 0xa1042  srl         $v0, $t2, 1
    ctx->pc = 0x79c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x79c1b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x79c1b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x79c1b8: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x79c1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x79c1bc: 0x107202a  slt         $a0, $t0, $a3
    ctx->pc = 0x79c1bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x79c1c0: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x79c1c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x79c1c4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79C1C4u;
    {
        const bool branch_taken_0x79c1c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c1c4) {
            ctx->pc = 0x79C1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c1b0;
        }
    }
    ctx->pc = 0x79C1CCu;
    // 0x79c1cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x79C1CCu;
    {
        const bool branch_taken_0x79c1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C1CCu;
        // 0x79c1d0: 0xe8102a  slt         $v0, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c1cc) {
            ctx->pc = 0x79C1DCu;
            goto label_79c1dc;
        }
    }
    ctx->pc = 0x79C1D4u;
label_79c1d4:
    // 0x79c1d4: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x79c1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79c1d8: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x79c1d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_79c1dc:
    // 0x79c1dc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x79C1DCu;
    {
        const bool branch_taken_0x79c1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79c1dc) {
            ctx->pc = 0x79C230u;
            goto label_79c230;
        }
    }
    ctx->pc = 0x79C1E4u;
    // 0x79c1e4: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x79c1e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_79c1e8:
    // 0x79c1e8: 0xb1842  srl         $v1, $t3, 1
    ctx->pc = 0x79c1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
    // 0x79c1ec: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x79c1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x79c1f0: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x79c1f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79c1f4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x79c1f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x79c1f8: 0x0  nop
    ctx->pc = 0x79c1f8u;
    // NOP
    // 0x79c1fc: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79C1FCu;
    {
        const bool branch_taken_0x79c1fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c1fc) {
            ctx->pc = 0x79C1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c1e8;
        }
    }
    ctx->pc = 0x79C204u;
    // 0x79c204: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x79C204u;
    {
        const bool branch_taken_0x79c204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C204u;
        // 0x79c208: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c204) {
            ctx->pc = 0x79C230u;
            goto label_79c230;
        }
    }
    ctx->pc = 0x79C20Cu;
label_79c20c:
    // 0x79c20c: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x79c20cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x79c210: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79C210u;
    {
        const bool branch_taken_0x79c210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C210u;
        // 0x79c214: 0x8d290004  lw          $t1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c210) {
            ctx->pc = 0x79C224u;
            goto label_79c224;
        }
    }
    ctx->pc = 0x79C218u;
    // 0x79c218: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79c218u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c21c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79C21Cu;
    {
        const bool branch_taken_0x79c21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C21Cu;
        // 0x79c220: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c21c) {
            ctx->pc = 0x79C230u;
            goto label_79c230;
        }
    }
    ctx->pc = 0x79C224u;
label_79c224:
    // 0x79c224: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x79c224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c228: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x79c228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79c22c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x79c22cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79c230:
    // 0x79c230: 0x11250022  beq         $t1, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x79C230u;
    {
        const bool branch_taken_0x79c230 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        ctx->pc = 0x79C234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C230u;
        // 0x79c234: 0x16a1021  addu        $v0, $t3, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c230) {
            ctx->pc = 0x79C2BCu;
            goto label_79c2bc;
        }
    }
    ctx->pc = 0x79C238u;
    // 0x79c238: 0x15200002  bnez        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x79C238u;
    {
        const bool branch_taken_0x79c238 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C238u;
        // 0x79c23c: 0x14b1023  subu        $v0, $t2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c238) {
            ctx->pc = 0x79C244u;
            goto label_79c244;
        }
    }
    ctx->pc = 0x79C240u;
    // 0x79c240: 0x16a1023  subu        $v0, $t3, $t2
    ctx->pc = 0x79c240u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
label_79c244:
    // 0x79c244: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C244u;
    {
        const bool branch_taken_0x79c244 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x79C248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C244u;
        // 0x79c248: 0x21823  negu        $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c244) {
            ctx->pc = 0x79C25Cu;
            goto label_79c25c;
        }
    }
    ctx->pc = 0x79C24Cu;
    // 0x79c24c: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x79c24cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x79c250: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x79c250u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x79c254: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79C254u;
    {
        const bool branch_taken_0x79c254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C254u;
        // 0x79c258: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c254) {
            ctx->pc = 0x79C26Cu;
            goto label_79c26c;
        }
    }
    ctx->pc = 0x79C25Cu;
label_79c25c:
    // 0x79c25c: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x79c25cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x79c260: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79c260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c264: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x79c264u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x79c268: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x79c268u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_79c26c:
    // 0x79c26c: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x79c26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x79c270: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x79c270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x79c274: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x79c274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x79c278: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x79c278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x79c27c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x79c27cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79c280: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x79C280u;
    {
        const bool branch_taken_0x79c280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C280u;
        // 0x79c284: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c280) {
            ctx->pc = 0x79C2CCu;
            goto label_79c2cc;
        }
    }
    ctx->pc = 0x79C288u;
    // 0x79c288: 0x3c053fff  lui         $a1, 0x3FFF
    ctx->pc = 0x79c288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
    // 0x79c28c: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x79c28cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
label_79c290:
    // 0x79c290: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x79c290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x79c294: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x79c294u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x79c298: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x79c298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x79c29c: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x79c29cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x79c2a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79c2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79c2a4: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x79c2a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79c2a8: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x79c2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x79c2ac: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79C2ACu;
    {
        const bool branch_taken_0x79c2ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2ACu;
        // 0x79c2b0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c2ac) {
            ctx->pc = 0x79C290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c290;
        }
    }
    ctx->pc = 0x79C2B4u;
    // 0x79c2b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79C2B4u;
    {
        const bool branch_taken_0x79c2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2B4u;
        // 0x79c2b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c2b4) {
            ctx->pc = 0x79C2CCu;
            goto label_79c2cc;
        }
    }
    ctx->pc = 0x79C2BCu;
label_79c2bc:
    // 0x79c2bc: 0xacc90004  sw          $t1, 0x4($a2)
    ctx->pc = 0x79c2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x79c2c0: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x79c2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x79c2c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79c2c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c2c8: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x79c2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_79c2cc:
    // 0x79c2cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79c2d0: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x79C2D0u;
    {
        const bool branch_taken_0x79c2d0 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x79C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2D0u;
        // 0x79c2d4: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c2d0) {
            ctx->pc = 0x79C2F4u;
            goto label_79c2f4;
        }
    }
    ctx->pc = 0x79C2D8u;
    // 0x79c2d8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x79c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x79c2dc: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x79c2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x79c2e0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x79c2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x79c2e4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x79c2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x79c2e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79c2ec: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x79c2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x79c2f0: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x79c2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_79c2f4:
    // 0x79c2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x79C2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2F4u;
        // 0x79c2f8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C2FCu;
    // 0x79c2fc: 0x0  nop
    ctx->pc = 0x79c2fcu;
    // NOP
    ctx->pc = 0x79c300u;
}
} // namespace gh_r501
