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

// Function: cGameObjSortEnt_pushHeap
// Address: 0x2a8a08 - 0x2a8aa8
void cGameObjSortEnt_pushHeap_0x2a8a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObjSortEnt_pushHeap_0x2a8a08");
#endif

    switch (ctx->pc) {
        case 0x2a8a28u: goto label_2a8a28;
        default: break;
    }

    ctx->pc = 0x2a8a08u;

    // 0x2a8a08: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x2a8a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2a8a0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a8a0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a8a10: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2a8a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2a8a14: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2a8a14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8a18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a8a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a8a1c: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x2a8a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x2a8a20: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2A8A20u;
    {
        const bool branch_taken_0x2a8a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A20u;
        // 0x2a8a24: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a20) {
            ctx->pc = 0x2A8A50u;
            goto label_2a8a50;
        }
    }
    ctx->pc = 0x2A8A28u;
label_2a8a28:
    // 0x2a8a28: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x2a8a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2a8a2c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2a8a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8a30: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x2a8a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a8a34: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x2a8a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a8a38: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x2a8a38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8a3c: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x2a8a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2a8a40: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x2a8a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8a44: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2a8a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2a8a48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a8a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a8a4c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2a8a4cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_2a8a50:
    // 0x2a8a50: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x2a8a50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2a8a54: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A8A54u;
    {
        const bool branch_taken_0x2a8a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A54u;
        // 0x2a8a58: 0x310c0  sll         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a54) {
            ctx->pc = 0x2A8A84u;
            goto label_2a8a84;
        }
    }
    ctx->pc = 0x2A8A5Cu;
    // 0x2a8a5c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2a8a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8a60: 0x483821  addu        $a3, $v0, $t0
    ctx->pc = 0x2a8a60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2a8a64: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x2a8a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8a68: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a8a68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8a6c: 0x0  nop
    ctx->pc = 0x2a8a6cu;
    // NOP
    // 0x2a8a70: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A8A70u;
    {
        const bool branch_taken_0x2a8a70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A70u;
        // 0x2a8a74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a70) {
            ctx->pc = 0x2A8A7Cu;
            goto label_2a8a7c;
        }
    }
    ctx->pc = 0x2A8A78u;
    // 0x2a8a78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a8a78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8a7c:
    // 0x2a8a7c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2A8A7Cu;
    {
        const bool branch_taken_0x2a8a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A7Cu;
        // 0x2a8a80: 0x520c0  sll         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a7c) {
            ctx->pc = 0x2A8A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a8a28;
        }
    }
    ctx->pc = 0x2A8A84u;
label_2a8a84:
    // 0x2a8a84: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2a8a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2a8a88: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2a8a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2a8a8c: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x2a8a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2a8a90: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x2a8a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2a8a94: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x2a8a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8a98: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x2a8a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A9Cu;
        // 0x2a8aa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8AA4u;
    // 0x2a8aa4: 0x0  nop
    ctx->pc = 0x2a8aa4u;
    // NOP
    ctx->pc = 0x2a8aa8u;
}
