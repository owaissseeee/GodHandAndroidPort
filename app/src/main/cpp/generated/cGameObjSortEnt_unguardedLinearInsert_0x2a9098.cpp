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

// Function: cGameObjSortEnt_unguardedLinearInsert
// Address: 0x2a9098 - 0x2a9100
void cGameObjSortEnt_unguardedLinearInsert_0x2a9098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObjSortEnt_unguardedLinearInsert_0x2a9098");
#endif

    switch (ctx->pc) {
        case 0x2a90a8u: goto label_2a90a8;
        default: break;
    }

    ctx->pc = 0x2a9098u;

    // 0x2a9098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a9098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a909c: 0x2483fff8  addiu       $v1, $a0, -0x8
    ctx->pc = 0x2a909cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x2a90a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A90A0u;
    {
        const bool branch_taken_0x2a90a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A90A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A90A0u;
        // 0x2a90a4: 0xffa50000  sd          $a1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a90a0) {
            ctx->pc = 0x2A90C0u;
            goto label_2a90c0;
        }
    }
    ctx->pc = 0x2A90A8u;
label_2a90a8:
    // 0x2a90a8: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x2a90a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a90ac: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x2a90acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a90b0: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x2a90b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a90b4: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x2a90b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a90b8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2a90b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a90bc: 0x2483fff8  addiu       $v1, $a0, -0x8
    ctx->pc = 0x2a90bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
label_2a90c0:
    // 0x2a90c0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2a90c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a90c4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2a90c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a90c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a90c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a90cc: 0x0  nop
    ctx->pc = 0x2a90ccu;
    // NOP
    // 0x2a90d0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A90D0u;
    {
        const bool branch_taken_0x2a90d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A90D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A90D0u;
        // 0x2a90d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a90d0) {
            ctx->pc = 0x2A90DCu;
            goto label_2a90dc;
        }
    }
    ctx->pc = 0x2A90D8u;
    // 0x2a90d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a90d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a90dc:
    // 0x2a90dc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2A90DCu;
    {
        const bool branch_taken_0x2a90dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a90dc) {
            ctx->pc = 0x2A90A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a90a8;
        }
    }
    ctx->pc = 0x2A90E4u;
    // 0x2a90e4: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2a90e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a90e8: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2a90e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a90ec: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x2a90ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a90f0: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x2a90f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a90f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A90F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A90F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A90F4u;
        // 0x2a90f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A90F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A90FCu;
    // 0x2a90fc: 0x0  nop
    ctx->pc = 0x2a90fcu;
    // NOP
    ctx->pc = 0x2a9100u;
}
