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

// Function: func_001EBB78
// Address: 0x1ebb78 - 0x1ebc58
void func_001EBB78_0x1ebb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001EBB78_0x1ebb78");
#endif

    switch (ctx->pc) {
        case 0x1ebb90u: goto label_1ebb90;
        case 0x1ebc28u: goto label_1ebc28;
        case 0x1ebc34u: goto label_1ebc34;
        default: break;
    }

    ctx->pc = 0x1ebb78u;

    // 0x1ebb78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ebb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ebb7c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ebb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1ebb80: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ebb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1ebb84: 0x2490005c  addiu       $s0, $a0, 0x5C
    ctx->pc = 0x1ebb84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x1ebb88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ebb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ebb8c: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1ebb8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ebb90:
    // 0x1ebb90: 0x9e020030  lwu         $v0, 0x30($s0)
    ctx->pc = 0x1ebb90u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1ebb94: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1ebb94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1ebb98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ebb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ebb9c: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x1EBB9Cu;
    {
        const bool branch_taken_0x1ebb9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebb9c) {
            ctx->pc = 0x1EBBA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBB9Cu;
            // 0x1ebba0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBC38u;
            goto label_1ebc38;
        }
    }
    ctx->pc = 0x1EBBA4u;
    // 0x1ebba4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1ebba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ebba8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBBA8u;
    {
        const bool branch_taken_0x1ebba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBA8u;
        // 0x1ebbac: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebba8) {
            ctx->pc = 0x1EBBBCu;
            goto label_1ebbbc;
        }
    }
    ctx->pc = 0x1EBBB0u;
    // 0x1ebbb0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ebbb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebbb4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EBBB4u;
    {
        const bool branch_taken_0x1ebbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBB4u;
        // 0x1ebbb8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebbb4) {
            ctx->pc = 0x1EBBC0u;
            goto label_1ebbc0;
        }
    }
    ctx->pc = 0x1EBBBCu;
label_1ebbbc:
    // 0x1ebbbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ebbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ebbc0:
    // 0x1ebbc0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1ebbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ebbc4: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1EBBC4u;
    {
        const bool branch_taken_0x1ebbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebbc4) {
            ctx->pc = 0x1EBBC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBBC4u;
            // 0x1ebbc8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBC38u;
            goto label_1ebc38;
        }
    }
    ctx->pc = 0x1EBBCCu;
    // 0x1ebbcc: 0x6a02000f  ldl         $v0, 0xF($s0)
    ctx->pc = 0x1ebbccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ebbd0: 0x6e020008  ldr         $v0, 0x8($s0)
    ctx->pc = 0x1ebbd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ebbd4: 0x6a030017  ldl         $v1, 0x17($s0)
    ctx->pc = 0x1ebbd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ebbd8: 0x6e030010  ldr         $v1, 0x10($s0)
    ctx->pc = 0x1ebbd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ebbdc: 0x6a04001f  ldl         $a0, 0x1F($s0)
    ctx->pc = 0x1ebbdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1ebbe0: 0x6e040018  ldr         $a0, 0x18($s0)
    ctx->pc = 0x1ebbe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1ebbe4: 0x6a050027  ldl         $a1, 0x27($s0)
    ctx->pc = 0x1ebbe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1ebbe8: 0x6e050020  ldr         $a1, 0x20($s0)
    ctx->pc = 0x1ebbe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1ebbec: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1ebbecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebbf0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1ebbf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebbf4: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x1ebbf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebbf8: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x1ebbf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebbfc: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x1ebbfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebc00: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x1ebc00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebc04: 0xb3a5001f  sdl         $a1, 0x1F($sp)
    ctx->pc = 0x1ebc04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebc08: 0xb7a50018  sdr         $a1, 0x18($sp)
    ctx->pc = 0x1ebc08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebc0c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1ebc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1ebc10: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1ebc10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1ebc14: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1ebc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1ebc18: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ebc18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ebc1c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1ebc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1ebc20: 0xc06c7d6  jal         func_1B1F58
    ctx->pc = 0x1EBC20u;
    SET_GPR_U32(ctx, 31, 0x1EBC28u);
    ctx->pc = 0x1EBC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBC20u;
    // 0x1ebc24: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1F58u, 0x1EBC20u, 0x1EBC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBC28u;
label_1ebc28:
    // 0x1ebc28: 0xc7ac0008  lwc1        $f12, 0x8($sp)
    ctx->pc = 0x1ebc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ebc2c: 0xc0560a2  jal         func_158288
    ctx->pc = 0x1EBC2Cu;
    SET_GPR_U32(ctx, 31, 0x1EBC34u);
    ctx->pc = 0x1EBC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBC2Cu;
    // 0x1ebc30: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x1EBC2Cu, 0x1EBC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBC34u;
label_1ebc34:
    // 0x1ebc34: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1ebc34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1ebc38:
    // 0x1ebc38: 0x621ffd5  bgez        $s1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1EBC38u;
    {
        const bool branch_taken_0x1ebc38 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1EBC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC38u;
        // 0x1ebc3c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc38) {
            ctx->pc = 0x1EBB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ebb90;
        }
    }
    ctx->pc = 0x1EBC40u;
    // 0x1ebc40: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1ebc40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ebc44: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1ebc44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ebc48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ebc48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ebc4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC4Cu;
        // 0x1ebc50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBC54u;
    // 0x1ebc54: 0x0  nop
    ctx->pc = 0x1ebc54u;
    // NOP
    ctx->pc = 0x1ebc58u;
}
