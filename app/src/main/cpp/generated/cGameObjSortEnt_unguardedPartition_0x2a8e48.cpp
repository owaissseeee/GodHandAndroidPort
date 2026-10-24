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

// Function: cGameObjSortEnt_unguardedPartition
// Address: 0x2a8e48 - 0x2a8ef0
void cGameObjSortEnt_unguardedPartition_0x2a8e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObjSortEnt_unguardedPartition_0x2a8e48");
#endif

    switch (ctx->pc) {
        case 0x2a8e50u: goto label_2a8e50;
        case 0x2a8e58u: goto label_2a8e58;
        case 0x2a8e80u: goto label_2a8e80;
        default: break;
    }

    ctx->pc = 0x2a8e48u;

    // 0x2a8e48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a8e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a8e4c: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x2a8e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
label_2a8e50:
    // 0x2a8e50: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x2a8e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x2a8e54: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2a8e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a8e58:
    // 0x2a8e58: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2a8e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8e5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a8e5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8e60: 0x0  nop
    ctx->pc = 0x2a8e60u;
    // NOP
    // 0x2a8e64: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A8E64u;
    {
        const bool branch_taken_0x2a8e64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8E64u;
        // 0x2a8e68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8e64) {
            ctx->pc = 0x2A8E70u;
            goto label_2a8e70;
        }
    }
    ctx->pc = 0x2A8E6Cu;
    // 0x2a8e6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a8e6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8e70:
    // 0x2a8e70: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A8E70u;
    {
        const bool branch_taken_0x2a8e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8e70) {
            ctx->pc = 0x2A8E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8E70u;
            // 0x2a8e74: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a8e58;
        }
    }
    ctx->pc = 0x2A8E78u;
    // 0x2a8e78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A8E78u;
    {
        const bool branch_taken_0x2a8e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8E78u;
        // 0x2a8e7c: 0xc4a00004  lwc1        $f0, 0x4($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8e78) {
            ctx->pc = 0x2A8E84u;
            goto label_2a8e84;
        }
    }
    ctx->pc = 0x2A8E80u;
label_2a8e80:
    // 0x2a8e80: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2a8e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a8e84:
    // 0x2a8e84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a8e84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8e88: 0x0  nop
    ctx->pc = 0x2a8e88u;
    // NOP
    // 0x2a8e8c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A8E8Cu;
    {
        const bool branch_taken_0x2a8e8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8E8Cu;
        // 0x2a8e90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8e8c) {
            ctx->pc = 0x2A8E98u;
            goto label_2a8e98;
        }
    }
    ctx->pc = 0x2A8E94u;
    // 0x2a8e94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a8e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8e98:
    // 0x2a8e98: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A8E98u;
    {
        const bool branch_taken_0x2a8e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8e98) {
            ctx->pc = 0x2A8E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8E98u;
            // 0x2a8e9c: 0x24a5fff8  addiu       $a1, $a1, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a8e80;
        }
    }
    ctx->pc = 0x2A8EA0u;
    // 0x2a8ea0: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x2a8ea0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2a8ea4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A8EA4u;
    {
        const bool branch_taken_0x2a8ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8EA4u;
        // 0x2a8ea8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8ea4) {
            ctx->pc = 0x2A8EE4u;
            goto label_2a8ee4;
        }
    }
    ctx->pc = 0x2A8EACu;
    // 0x2a8eac: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x2a8eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a8eb0: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x2a8eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a8eb4: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2a8eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8eb8: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2a8eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8ebc: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x2a8ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a8ec0: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x2a8ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a8ec4: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x2a8ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8ec8: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x2a8ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8ecc: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x2a8eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a8ed0: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x2a8ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a8ed4: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x2a8ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8ed8: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x2a8ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8edc: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x2A8EDCu;
    {
        const bool branch_taken_0x2a8edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8EDCu;
        // 0x2a8ee0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8edc) {
            ctx->pc = 0x2A8E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a8e50;
        }
    }
    ctx->pc = 0x2A8EE4u;
label_2a8ee4:
    // 0x2a8ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8EE4u;
        // 0x2a8ee8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8EECu;
    // 0x2a8eec: 0x0  nop
    ctx->pc = 0x2a8eecu;
    // NOP
    ctx->pc = 0x2a8ef0u;
}
