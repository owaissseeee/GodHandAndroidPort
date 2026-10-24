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

// Function: _lf_bind
// Address: 0x3b5a80 - 0x3b5b80
void _lf_bind_0x3b5a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_lf_bind_0x3b5a80");
#endif

    switch (ctx->pc) {
        case 0x3b5aa8u: goto label_3b5aa8;
        case 0x3b5abcu: goto label_3b5abc;
        case 0x3b5b00u: goto label_3b5b00;
        case 0x3b5b40u: goto label_3b5b40;
        default: break;
    }

    ctx->pc = 0x3b5a80u;

    // 0x3b5a80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b5a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3b5a84: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3b5a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3b5a88: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x3b5a88u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x3b5a8c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3b5a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3b5a90: 0x8e42aef8  lw          $v0, -0x5108($s2)
    ctx->pc = 0x3b5a90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAEF8u));
    // 0x3b5a94: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3b5a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x3b5a98: 0x4410032  bgez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3B5A98u;
    {
        const bool branch_taken_0x3b5a98 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3B5A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5A98u;
        // 0x3b5a9c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5a98) {
            ctx->pc = 0x3B5B64u;
            goto label_3b5b64;
        }
    }
    ctx->pc = 0x3B5AA0u;
    // 0x3b5aa0: 0x3c110078  lui         $s1, 0x78
    ctx->pc = 0x3b5aa0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)120 << 16));
    // 0x3b5aa4: 0x26301b80  addiu       $s0, $s1, 0x1B80
    ctx->pc = 0x3b5aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 7040));
label_3b5aa8:
    // 0x3b5aa8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3b5aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3b5aac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b5aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5ab0: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x3b5ab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x3b5ab4: 0xc0ecbd2  jal         func_3B2F48
    ctx->pc = 0x3B5AB4u;
    SET_GPR_U32(ctx, 31, 0x3B5ABCu);
    ctx->pc = 0x3B5AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5AB4u;
    // 0x3b5ab8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F48u, 0x3B5AB4u, 0x3B5ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5ABCu;
label_3b5abc:
    // 0x3b5abc: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B5ABCu;
    {
        const bool branch_taken_0x3b5abc = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x3b5abc) {
            ctx->pc = 0x3B5AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5ABCu;
            // 0x3b5ac0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5ACCu;
            goto label_3b5acc;
        }
    }
    ctx->pc = 0x3B5AC4u;
    // 0x3b5ac4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3B5AC4u;
    {
        const bool branch_taken_0x3b5ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5AC4u;
        // 0x3b5ac8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5ac4) {
            ctx->pc = 0x3B5B68u;
            goto label_3b5b68;
        }
    }
    ctx->pc = 0x3B5ACCu;
label_3b5acc:
    // 0x3b5acc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3B5ACCu;
    {
        const bool branch_taken_0x3b5acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5ACCu;
        // 0x3b5ad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5acc) {
            ctx->pc = 0x3B5B34u;
            goto label_3b5b34;
        }
    }
    ctx->pc = 0x3B5AD4u;
    // 0x3b5ad4: 0x3c110078  lui         $s1, 0x78
    ctx->pc = 0x3b5ad4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)120 << 16));
    // 0x3b5ad8: 0xae40aef8  sw          $zero, -0x5108($s2)
    ctx->pc = 0x3b5ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294946552), GPR_U32(ctx, 0));
    // 0x3b5adc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3b5adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3b5ae0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x3b5ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3b5ae4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b5ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5ae8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b5ae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5aec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b5aecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5af0: 0x26291980  addiu       $t1, $s1, 0x1980
    ctx->pc = 0x3b5af0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 6528));
    // 0x3b5af4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3b5af4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b5af8: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x3B5AF8u;
    SET_GPR_U32(ctx, 31, 0x3B5B00u);
    ctx->pc = 0x3B5AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5AF8u;
    // 0x3b5afc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x3B5AF8u, 0x3B5B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5B00u;
label_3b5b00:
    // 0x3b5b00: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B5B00u;
    {
        const bool branch_taken_0x3b5b00 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3B5B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5B00u;
        // 0x3b5b04: 0x3c030078  lui         $v1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5b00) {
            ctx->pc = 0x3B5B14u;
            goto label_3b5b14;
        }
    }
    ctx->pc = 0x3B5B08u;
    // 0x3b5b08: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x3b5b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x3b5b0c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3B5B0Cu;
    {
        const bool branch_taken_0x3b5b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5B0Cu;
        // 0x3b5b10: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5b0c) {
            ctx->pc = 0x3B5B68u;
            goto label_3b5b68;
        }
    }
    ctx->pc = 0x3B5B14u;
label_3b5b14:
    // 0x3b5b14: 0x26271980  addiu       $a3, $s1, 0x1980
    ctx->pc = 0x3b5b14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 6528));
    // 0x3b5b18: 0x24661ba8  addiu       $a2, $v1, 0x1BA8
    ctx->pc = 0x3b5b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 7080));
    // 0x3b5b1c: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x3b5b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x3b5b20: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x3b5b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x3b5b24: 0xa8c40003  swl         $a0, 0x3($a2)
    ctx->pc = 0x3b5b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b5b28: 0xb8c40000  swr         $a0, 0x0($a2)
    ctx->pc = 0x3b5b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b5b2c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3B5B2Cu;
    {
        const bool branch_taken_0x3b5b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5B2Cu;
        // 0x3b5b30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5b2c) {
            ctx->pc = 0x3B5B68u;
            goto label_3b5b68;
        }
    }
    ctx->pc = 0x3B5B34u;
label_3b5b34:
    // 0x3b5b34: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x3b5b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x3b5b38: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3b5b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b5b3c: 0x0  nop
    ctx->pc = 0x3b5b3cu;
    // NOP
label_3b5b40:
    // 0x3b5b40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3b5b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3b5b44: 0x0  nop
    ctx->pc = 0x3b5b44u;
    // NOP
    // 0x3b5b48: 0x0  nop
    ctx->pc = 0x3b5b48u;
    // NOP
    // 0x3b5b4c: 0x0  nop
    ctx->pc = 0x3b5b4cu;
    // NOP
    // 0x3b5b50: 0x0  nop
    ctx->pc = 0x3b5b50u;
    // NOP
    // 0x3b5b54: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B5B54u;
    {
        const bool branch_taken_0x3b5b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b5b54) {
            ctx->pc = 0x3B5B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b5b40;
        }
    }
    ctx->pc = 0x3B5B5Cu;
    // 0x3b5b5c: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x3B5B5Cu;
    {
        const bool branch_taken_0x3b5b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5B5Cu;
        // 0x3b5b60: 0x26301b80  addiu       $s0, $s1, 0x1B80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 7040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5b5c) {
            ctx->pc = 0x3B5AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b5aa8;
        }
    }
    ctx->pc = 0x3B5B64u;
label_3b5b64:
    // 0x3b5b64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b5b64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b5b68:
    // 0x3b5b68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3b5b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b5b6c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3b5b6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b5b70: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3b5b70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b5b74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3b5b74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b5b78: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5B78u;
        // 0x3b5b7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5B80u;
}
