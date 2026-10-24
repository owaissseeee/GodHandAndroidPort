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

// Function: func_001DEB08
// Address: 0x1deb08 - 0x1debe8
void func_001DEB08_0x1deb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DEB08_0x1deb08");
#endif

    switch (ctx->pc) {
        case 0x1debb4u: goto label_1debb4;
        case 0x1debdcu: goto label_1debdc;
        default: break;
    }

    ctx->pc = 0x1deb08u;

    // 0x1deb08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1deb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1deb0c: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1deb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1deb10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1deb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1deb14: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1deb14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1deb18: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1DEB18u;
    {
        const bool branch_taken_0x1deb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB18u;
        // 0x1deb1c: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb18) {
            ctx->pc = 0x1DEBDCu;
            goto label_1debdc;
        }
    }
    ctx->pc = 0x1DEB20u;
    // 0x1deb20: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1deb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1deb24: 0x244bb5d0  addiu       $t3, $v0, -0x4A30
    ctx->pc = 0x1deb24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948304));
    // 0x1deb28: 0x69640007  ldl         $a0, 0x7($t3)
    ctx->pc = 0x1deb28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1deb2c: 0x6d640000  ldr         $a0, 0x0($t3)
    ctx->pc = 0x1deb2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1deb30: 0x6965000f  ldl         $a1, 0xF($t3)
    ctx->pc = 0x1deb30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1deb34: 0x6d650008  ldr         $a1, 0x8($t3)
    ctx->pc = 0x1deb34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1deb38: 0x8d6a0010  lw          $t2, 0x10($t3)
    ctx->pc = 0x1deb38u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x42B5E0u));
    // 0x1deb3c: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1deb3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1deb40: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1deb40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1deb44: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1deb44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1deb48: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1deb48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1deb4c: 0xafaa0010  sw          $t2, 0x10($sp)
    ctx->pc = 0x1deb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 10));
    // 0x1deb50: 0x10c0001a  beqz        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DEB50u;
    {
        const bool branch_taken_0x1deb50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB50u;
        // 0x1deb54: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb50) {
            ctx->pc = 0x1DEBBCu;
            goto label_1debbc;
        }
    }
    ctx->pc = 0x1DEB58u;
    // 0x1deb58: 0x30e5ffff  andi        $a1, $a3, 0xFFFF
    ctx->pc = 0x1deb58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1deb5c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1deb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1deb60: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x1deb60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x1deb64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1deb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1deb68: 0x2406007c  addiu       $a2, $zero, 0x7C
    ctx->pc = 0x1deb68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1deb6c: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x1deb6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x1deb70: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1deb70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1deb74: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x1deb74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1deb78: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1deb78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1deb7c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1deb7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1deb80: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1deb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1deb84: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1deb84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1deb88: 0x3c0600ff  lui         $a2, 0xFF
    ctx->pc = 0x1deb88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)255 << 16));
    // 0x1deb8c: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x1deb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1deb90: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1deb90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1deb94: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1deb94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1deb98: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1deb98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1deb9c: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1deb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1deba0: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1deba0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1deba4: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x1deba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1deba8: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1deba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1debac: 0xc0b5a44  jal         func_2D6910
    ctx->pc = 0x1DEBACu;
    SET_GPR_U32(ctx, 31, 0x1DEBB4u);
    ctx->pc = 0x1DEBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEBACu;
    // 0x1debb0: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6910u, 0x1DEBACu, 0x1DEBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEBB4u;
label_1debb4:
    // 0x1debb4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1DEBB4u;
    {
        const bool branch_taken_0x1debb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEBB4u;
        // 0x1debb8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1debb4) {
            ctx->pc = 0x1DEBE0u;
            goto label_1debe0;
        }
    }
    ctx->pc = 0x1DEBBCu;
label_1debbc:
    // 0x1debbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1debbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1debc0: 0x2405007c  addiu       $a1, $zero, 0x7C
    ctx->pc = 0x1debc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1debc4: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x1debc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1debc8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1debc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1debcc: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1debccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1debd0: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1debd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1debd4: 0xc0b5a52  jal         func_2D6948
    ctx->pc = 0x1DEBD4u;
    SET_GPR_U32(ctx, 31, 0x1DEBDCu);
    ctx->pc = 0x1DEBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEBD4u;
    // 0x1debd8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6948u, 0x1DEBD4u, 0x1DEBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEBDCu;
label_1debdc:
    // 0x1debdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1debdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1debe0:
    // 0x1debe0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEBE0u;
        // 0x1debe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEBE8u;
}
