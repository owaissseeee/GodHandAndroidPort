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

// Function: sceCdReadClock
// Address: 0x399cb0 - 0x399d70
void sceCdReadClock_0x399cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceCdReadClock_0x399cb0");
#endif

    switch (ctx->pc) {
        case 0x399cccu: goto label_399ccc;
        case 0x399d0cu: goto label_399d0c;
        case 0x399d20u: goto label_399d20;
        case 0x399d54u: goto label_399d54;
        default: break;
    }

    ctx->pc = 0x399cb0u;

    // 0x399cb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x399cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x399cb4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x399cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x399cb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x399cb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399cbc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x399cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x399cc0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x399cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x399cc4: 0xc0e63ac  jal         func_398EB0
    ctx->pc = 0x399CC4u;
    SET_GPR_U32(ctx, 31, 0x399CCCu);
    ctx->pc = 0x399CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399CC4u;
    // 0x399cc8: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398EB0u, 0x399CC4u, 0x399CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399CCCu;
label_399ccc:
    // 0x399ccc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x399CCCu;
    {
        const bool branch_taken_0x399ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x399CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399CCCu;
        // 0x399cd0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399ccc) {
            ctx->pc = 0x399CDCu;
            goto label_399cdc;
        }
    }
    ctx->pc = 0x399CD4u;
    // 0x399cd4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x399CD4u;
    {
        const bool branch_taken_0x399cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399CD4u;
        // 0x399cd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399cd4) {
            ctx->pc = 0x399D58u;
            goto label_399d58;
        }
    }
    ctx->pc = 0x399CDCu;
label_399cdc:
    // 0x399cdc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x399cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x399ce0: 0x24509840  addiu       $s0, $v0, -0x67C0
    ctx->pc = 0x399ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940736));
    // 0x399ce4: 0x2484a1c0  addiu       $a0, $a0, -0x5E40
    ctx->pc = 0x399ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943168));
    // 0x399ce8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x399ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x399cec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x399cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x399cf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x399cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399cf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x399cf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399cf8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x399cf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399cfc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x399cfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399d00: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x399d00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x399d04: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x399D04u;
    SET_GPR_U32(ctx, 31, 0x399D0Cu);
    ctx->pc = 0x399D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399D04u;
    // 0x399d08: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x399D04u, 0x399D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399D0Cu;
label_399d0c:
    // 0x399d0c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x399D0Cu;
    {
        const bool branch_taken_0x399d0c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x399D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399D0Cu;
        // 0x399d10: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399d0c) {
            ctx->pc = 0x399D28u;
            goto label_399d28;
        }
    }
    ctx->pc = 0x399D14u;
    // 0x399d14: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x399d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x399d18: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x399D18u;
    SET_GPR_U32(ctx, 31, 0x399D20u);
    ctx->pc = 0x399D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399D18u;
    // 0x399d1c: 0x8c44866c  lw          $a0, -0x7994($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x399D18u, 0x399D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399D20u;
label_399d20:
    // 0x399d20: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x399D20u;
    {
        const bool branch_taken_0x399d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399D20u;
        // 0x399d24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399d20) {
            ctx->pc = 0x399D58u;
            goto label_399d58;
        }
    }
    ctx->pc = 0x399D28u;
label_399d28:
    // 0x399d28: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x399d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x399d2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x399d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x399d30: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x399d30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x399d34: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x399d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x399d38: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x399d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x399d3c: 0xb2240007  sdl         $a0, 0x7($s1)
    ctx->pc = 0x399d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x399d40: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x399d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x399d44: 0xb6240000  sdr         $a0, 0x0($s1)
    ctx->pc = 0x399d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x399d48: 0x8ca4866c  lw          $a0, -0x7994($a1)
    ctx->pc = 0x399d48u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F866Cu));
    // 0x399d4c: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x399D4Cu;
    SET_GPR_U32(ctx, 31, 0x399D54u);
    ctx->pc = 0x399D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399D4Cu;
    // 0x399d50: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x399D4Cu, 0x399D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399D54u;
label_399d54:
    // 0x399d54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x399d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_399d58:
    // 0x399d58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x399d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x399d5c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x399d5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x399d60: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x399d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x399d64: 0x3e00008  jr          $ra
    ctx->pc = 0x399D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399D64u;
        // 0x399d68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399D6Cu;
    // 0x399d6c: 0x0  nop
    ctx->pc = 0x399d6cu;
    // NOP
    ctx->pc = 0x399d70u;
}
