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

// Function: _sceFs_Rcv_Intr
// Address: 0x3b3ab8 - 0x3b3e70
void _sceFs_Rcv_Intr_0x3b3ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceFs_Rcv_Intr_0x3b3ab8");
#endif

    switch (ctx->pc) {
        case 0x3b3b54u: goto label_3b3b54;
        case 0x3b3ba8u: goto label_3b3ba8;
        case 0x3b3bf8u: goto label_3b3bf8;
        case 0x3b3c60u: goto label_3b3c60;
        case 0x3b3cbcu: goto label_3b3cbc;
        case 0x3b3de8u: goto label_3b3de8;
        case 0x3b3e24u: goto label_3b3e24;
        case 0x3b3e5cu: goto label_3b3e5c;
        default: break;
    }

    ctx->pc = 0x3b3ab8u;

    // 0x3b3ab8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3b3ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3b3abc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b3abcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b3ac0: 0x8c43aee0  lw          $v1, -0x5120($v0)
    ctx->pc = 0x3b3ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FAEE0u));
    // 0x3b3ac4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b3ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3ac8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b3ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b3acc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B3ACCu;
    {
        const bool branch_taken_0x3b3acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3ACCu;
        // 0x3b3ad0: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3acc) {
            ctx->pc = 0x3B3AD8u;
            goto label_3b3ad8;
        }
    }
    ctx->pc = 0x3B3AD4u;
    // 0x3b3ad4: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x3b3ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3b3ad8:
    // 0x3b3ad8: 0x24030440  addiu       $v1, $zero, 0x440
    ctx->pc = 0x3b3ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    // 0x3b3adc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3b3adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3b3ae0: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x3b3ae0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b3ae4: 0x3c040078  lui         $a0, 0x78
    ctx->pc = 0x3b3ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)120 << 16));
    // 0x3b3ae8: 0xac45aed8  sw          $a1, -0x5128($v0)
    ctx->pc = 0x3b3ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294946520), GPR_U32(ctx, 5));
    // 0x3b3aec: 0x24840c40  addiu       $a0, $a0, 0xC40
    ctx->pc = 0x3b3aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3136));
    // 0x3b3af0: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x3b3af0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x3b3af4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3b3af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b3af8: 0x658025  or          $s0, $v1, $a1
    ctx->pc = 0x3b3af8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3b3afc: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x3b3afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x3b3b00: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x3b3b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x3b3b04: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x3b3b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b3b08: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x3b3b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b3b0c: 0x8a060007  lwl         $a2, 0x7($s0)
    ctx->pc = 0x3b3b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x3b3b10: 0x9a060004  lwr         $a2, 0x4($s0)
    ctx->pc = 0x3b3b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x3b3b14: 0xaba60007  swl         $a2, 0x7($sp)
    ctx->pc = 0x3b3b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b3b18: 0xbba60004  swr         $a2, 0x4($sp)
    ctx->pc = 0x3b3b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b3b1c: 0x8a03000b  lwl         $v1, 0xB($s0)
    ctx->pc = 0x3b3b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x3b3b20: 0x9a030008  lwr         $v1, 0x8($s0)
    ctx->pc = 0x3b3b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x3b3b24: 0xaba3000b  swl         $v1, 0xB($sp)
    ctx->pc = 0x3b3b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b3b28: 0xbba30008  swr         $v1, 0x8($sp)
    ctx->pc = 0x3b3b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b3b2c: 0x8a07000f  lwl         $a3, 0xF($s0)
    ctx->pc = 0x3b3b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x3b3b30: 0x9a07000c  lwr         $a3, 0xC($s0)
    ctx->pc = 0x3b3b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x3b3b34: 0xaba7000f  swl         $a3, 0xF($sp)
    ctx->pc = 0x3b3b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b3b38: 0xbba7000c  swr         $a3, 0xC($sp)
    ctx->pc = 0x3b3b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b3b3c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3b3b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b3b40: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B3B40u;
    {
        const bool branch_taken_0x3b3b40 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3B3B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B40u;
        // 0x3b3b44: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3b40) {
            ctx->pc = 0x3B3B54u;
            goto label_3b3b54;
        }
    }
    ctx->pc = 0x3B3B48u;
    // 0x3b3b48: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x3b3b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3b3b4c: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3B3B4Cu;
    SET_GPR_U32(ctx, 31, 0x3B3B54u);
    ctx->pc = 0x3B3B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3B4Cu;
    // 0x3b3b50: 0x8fa6000c  lw          $a2, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3B3B4Cu, 0x3B3B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3B54u;
label_3b3b54:
    // 0x3b3b54: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3b3b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3b3b58: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x3b3b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x3b3b5c: 0x2c830019  sltiu       $v1, $a0, 0x19
    ctx->pc = 0x3b3b5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x3b3b60: 0x106000a1  beqz        $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x3B3B60u;
    {
        const bool branch_taken_0x3b3b60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B60u;
        // 0x3b3b64: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3b60) {
            ctx->pc = 0x3B3DE8u;
            goto label_3b3de8;
        }
    }
    ctx->pc = 0x3B3B68u;
    // 0x3b3b68: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3b3b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3b3b6c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x3b3b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x3b3b70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3b3b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b3b74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3b3b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b3b78: 0x800008  jr          $a0
    ctx->pc = 0x3B3B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B3B80u: goto label_3b3b80;
            case 0x3B3C28u: goto label_3b3c28;
            case 0x3B3D04u: goto label_3b3d04;
            case 0x3B3DA0u: goto label_3b3da0;
            case 0x3B3DE8u: goto label_3b3de8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3B78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B3B80u;
label_3b3b80:
    // 0x3b3b80: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x3b3b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3b3b84: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3B3B84u;
    {
        const bool branch_taken_0x3b3b84 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x3B3B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B84u;
        // 0x3b3b88: 0x26070014  addiu       $a3, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3b84) {
            ctx->pc = 0x3B3BD0u;
            goto label_3b3bd0;
        }
    }
    ctx->pc = 0x3B3B8Cu;
    // 0x3b3b8c: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x3b3b8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x3b3b90: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3b3b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3b3b94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b3b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3b98: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3B3B98u;
    {
        const bool branch_taken_0x3b3b98 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x3B3B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B98u;
        // 0x3b3b9c: 0x1025025  or          $t2, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3b98) {
            ctx->pc = 0x3B3BD0u;
            goto label_3b3bd0;
        }
    }
    ctx->pc = 0x3B3BA0u;
    // 0x3b3ba0: 0x26090024  addiu       $t1, $s0, 0x24
    ctx->pc = 0x3b3ba0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x3b3ba4: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x3b3ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_3b3ba8:
    // 0x3b3ba8: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x3b3ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x3b3bac: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3b3bacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b3bb0: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x3b3bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x3b3bb4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3b3bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3b3bb8: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3b3bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b3bbc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3b3bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b3bc0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3b3bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3b3bc4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x3b3bc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b3bc8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3B3BC8u;
    {
        const bool branch_taken_0x3b3bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3BC8u;
        // 0x3b3bcc: 0x1261021  addu        $v0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3bc8) {
            ctx->pc = 0x3B3BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3ba8;
        }
    }
    ctx->pc = 0x3B3BD0u;
label_3b3bd0:
    // 0x3b3bd0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3b3bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3b3bd4: 0x18600084  blez        $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x3B3BD4u;
    {
        const bool branch_taken_0x3b3bd4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x3B3BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3BD4u;
        // 0x3b3bd8: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3bd4) {
            ctx->pc = 0x3B3DE8u;
            goto label_3b3de8;
        }
    }
    ctx->pc = 0x3B3BDCu;
    // 0x3b3bdc: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x3b3bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x3b3be0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b3be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3be4: 0x18600080  blez        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x3B3BE4u;
    {
        const bool branch_taken_0x3b3be4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x3B3BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3BE4u;
        // 0x3b3be8: 0x1025025  or          $t2, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3be4) {
            ctx->pc = 0x3B3DE8u;
            goto label_3b3de8;
        }
    }
    ctx->pc = 0x3B3BECu;
    // 0x3b3bec: 0x24e90050  addiu       $t1, $a3, 0x50
    ctx->pc = 0x3b3becu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x3b3bf0: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x3b3bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x3b3bf4: 0x0  nop
    ctx->pc = 0x3b3bf4u;
    // NOP
label_3b3bf8:
    // 0x3b3bf8: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x3b3bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x3b3bfc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3b3bfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b3c00: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x3b3c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x3b3c04: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3b3c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3b3c08: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3b3c08u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b3c0c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3b3c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b3c10: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x3b3c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3b3c14: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x3b3c14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b3c18: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3B3C18u;
    {
        const bool branch_taken_0x3b3c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C18u;
        // 0x3b3c1c: 0x1261021  addu        $v0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3c18) {
            ctx->pc = 0x3B3BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3bf8;
        }
    }
    ctx->pc = 0x3B3C20u;
    // 0x3b3c20: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x3B3C20u;
    {
        const bool branch_taken_0x3b3c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C20u;
        // 0x3b3c24: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3c20) {
            ctx->pc = 0x3B3DECu;
            goto label_3b3dec;
        }
    }
    ctx->pc = 0x3B3C28u;
label_3b3c28:
    // 0x3b3c28: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3b3c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b3c2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3b3c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b3c30: 0x1860006e  blez        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x3B3C30u;
    {
        const bool branch_taken_0x3b3c30 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x3B3C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C30u;
        // 0x3b3c34: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3c30) {
            ctx->pc = 0x3B3DECu;
            goto label_3b3dec;
        }
    }
    ctx->pc = 0x3B3C38u;
    // 0x3b3c38: 0x8a040017  lwl         $a0, 0x17($s0)
    ctx->pc = 0x3b3c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x3b3c3c: 0x9a040014  lwr         $a0, 0x14($s0)
    ctx->pc = 0x3b3c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x3b3c40: 0xaba40013  swl         $a0, 0x13($sp)
    ctx->pc = 0x3b3c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b3c44: 0xbba40010  swr         $a0, 0x10($sp)
    ctx->pc = 0x3b3c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b3c48: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x3b3c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3b3c4c: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x3b3c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b3c50: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x3b3c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x3b3c54: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x3b3c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3b3c58: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3B3C58u;
    {
        const bool branch_taken_0x3b3c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C58u;
        // 0x3b3c5c: 0x26020158  addiu       $v0, $s0, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3c58) {
            ctx->pc = 0x3B3CBCu;
            goto label_3b3cbc;
        }
    }
    ctx->pc = 0x3B3C60u;
label_3b3c60:
    // 0x3b3c60: 0x68880007  ldl         $t0, 0x7($a0)
    ctx->pc = 0x3b3c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3b3c64: 0x6c880000  ldr         $t0, 0x0($a0)
    ctx->pc = 0x3b3c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3b3c68: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x3b3c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3b3c6c: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x3b3c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3b3c70: 0x68850017  ldl         $a1, 0x17($a0)
    ctx->pc = 0x3b3c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3b3c74: 0x6c850010  ldr         $a1, 0x10($a0)
    ctx->pc = 0x3b3c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3b3c78: 0x6887001f  ldl         $a3, 0x1F($a0)
    ctx->pc = 0x3b3c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x3b3c7c: 0x6c870018  ldr         $a3, 0x18($a0)
    ctx->pc = 0x3b3c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3b3c80: 0xb0c80007  sdl         $t0, 0x7($a2)
    ctx->pc = 0x3b3c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b3c84: 0xb4c80000  sdr         $t0, 0x0($a2)
    ctx->pc = 0x3b3c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b3c88: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x3b3c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b3c8c: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x3b3c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b3c90: 0xb0c50017  sdl         $a1, 0x17($a2)
    ctx->pc = 0x3b3c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b3c94: 0xb4c50010  sdr         $a1, 0x10($a2)
    ctx->pc = 0x3b3c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b3c98: 0xb0c7001f  sdl         $a3, 0x1F($a2)
    ctx->pc = 0x3b3c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b3c9c: 0xb4c70018  sdr         $a3, 0x18($a2)
    ctx->pc = 0x3b3c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b3ca0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3b3ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3b3ca4: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x3b3ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x3b3ca8: 0x0  nop
    ctx->pc = 0x3b3ca8u;
    // NOP
    // 0x3b3cac: 0x1482ffec  bne         $a0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3B3CACu;
    {
        const bool branch_taken_0x3b3cac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b3cac) {
            ctx->pc = 0x3B3C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3c60;
        }
    }
    ctx->pc = 0x3B3CB4u;
    // 0x3b3cb4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3B3CB4u;
    {
        const bool branch_taken_0x3b3cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3cb4) {
            ctx->pc = 0x3B3CF0u;
            goto label_3b3cf0;
        }
    }
    ctx->pc = 0x3B3CBCu;
label_3b3cbc:
    // 0x3b3cbc: 0xdc880000  ld          $t0, 0x0($a0)
    ctx->pc = 0x3b3cbcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b3cc0: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x3b3cc0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3b3cc4: 0xdc850010  ld          $a1, 0x10($a0)
    ctx->pc = 0x3b3cc4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3b3cc8: 0xdc870018  ld          $a3, 0x18($a0)
    ctx->pc = 0x3b3cc8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3b3ccc: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x3b3cccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
    // 0x3b3cd0: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x3b3cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x3b3cd4: 0xfcc50010  sd          $a1, 0x10($a2)
    ctx->pc = 0x3b3cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 5));
    // 0x3b3cd8: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x3b3cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x3b3cdc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3b3cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3b3ce0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x3b3ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x3b3ce4: 0x0  nop
    ctx->pc = 0x3b3ce4u;
    // NOP
    // 0x3b3ce8: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3B3CE8u;
    {
        const bool branch_taken_0x3b3ce8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b3ce8) {
            ctx->pc = 0x3B3CBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3cbc;
        }
    }
    ctx->pc = 0x3B3CF0u;
label_3b3cf0:
    // 0x3b3cf0: 0x88880003  lwl         $t0, 0x3($a0)
    ctx->pc = 0x3b3cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x3b3cf4: 0x98880000  lwr         $t0, 0x0($a0)
    ctx->pc = 0x3b3cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x3b3cf8: 0xa8c80003  swl         $t0, 0x3($a2)
    ctx->pc = 0x3b3cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b3cfc: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x3B3CFCu;
    {
        const bool branch_taken_0x3b3cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3CFCu;
        // 0x3b3d00: 0xb8c80000  swr         $t0, 0x0($a2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3cfc) {
            ctx->pc = 0x3B3DE8u;
            goto label_3b3de8;
        }
    }
    ctx->pc = 0x3B3D04u;
label_3b3d04:
    // 0x3b3d04: 0x8a060017  lwl         $a2, 0x17($s0)
    ctx->pc = 0x3b3d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x3b3d08: 0x9a060014  lwr         $a2, 0x14($s0)
    ctx->pc = 0x3b3d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x3b3d0c: 0xaba60013  swl         $a2, 0x13($sp)
    ctx->pc = 0x3b3d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b3d10: 0xbba60010  swr         $a2, 0x10($sp)
    ctx->pc = 0x3b3d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b3d14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3b3d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b3d18: 0x6a03001f  ldl         $v1, 0x1F($s0)
    ctx->pc = 0x3b3d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3b3d1c: 0x6e030018  ldr         $v1, 0x18($s0)
    ctx->pc = 0x3b3d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3b3d20: 0x6a040027  ldl         $a0, 0x27($s0)
    ctx->pc = 0x3b3d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3b3d24: 0x6e040020  ldr         $a0, 0x20($s0)
    ctx->pc = 0x3b3d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3b3d28: 0x6a05002f  ldl         $a1, 0x2F($s0)
    ctx->pc = 0x3b3d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3b3d2c: 0x6e050028  ldr         $a1, 0x28($s0)
    ctx->pc = 0x3b3d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3b3d30: 0x6a060037  ldl         $a2, 0x37($s0)
    ctx->pc = 0x3b3d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3b3d34: 0x6e060030  ldr         $a2, 0x30($s0)
    ctx->pc = 0x3b3d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3b3d38: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x3b3d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b3d3c: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x3b3d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b3d40: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x3b3d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b3d44: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x3b3d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b3d48: 0xb0450017  sdl         $a1, 0x17($v0)
    ctx->pc = 0x3b3d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b3d4c: 0xb4450010  sdr         $a1, 0x10($v0)
    ctx->pc = 0x3b3d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b3d50: 0xb046001f  sdl         $a2, 0x1F($v0)
    ctx->pc = 0x3b3d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b3d54: 0xb4460018  sdr         $a2, 0x18($v0)
    ctx->pc = 0x3b3d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b3d58: 0x6a03003f  ldl         $v1, 0x3F($s0)
    ctx->pc = 0x3b3d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3b3d5c: 0x6e030038  ldr         $v1, 0x38($s0)
    ctx->pc = 0x3b3d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3b3d60: 0x6a040047  ldl         $a0, 0x47($s0)
    ctx->pc = 0x3b3d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3b3d64: 0x6e040040  ldr         $a0, 0x40($s0)
    ctx->pc = 0x3b3d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3b3d68: 0x6a05004f  ldl         $a1, 0x4F($s0)
    ctx->pc = 0x3b3d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3b3d6c: 0x6e050048  ldr         $a1, 0x48($s0)
    ctx->pc = 0x3b3d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3b3d70: 0x6a060057  ldl         $a2, 0x57($s0)
    ctx->pc = 0x3b3d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3b3d74: 0x6e060050  ldr         $a2, 0x50($s0)
    ctx->pc = 0x3b3d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3b3d78: 0xb0430027  sdl         $v1, 0x27($v0)
    ctx->pc = 0x3b3d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b3d7c: 0xb4430020  sdr         $v1, 0x20($v0)
    ctx->pc = 0x3b3d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b3d80: 0xb044002f  sdl         $a0, 0x2F($v0)
    ctx->pc = 0x3b3d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b3d84: 0xb4440028  sdr         $a0, 0x28($v0)
    ctx->pc = 0x3b3d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b3d88: 0xb0450037  sdl         $a1, 0x37($v0)
    ctx->pc = 0x3b3d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b3d8c: 0xb4450030  sdr         $a1, 0x30($v0)
    ctx->pc = 0x3b3d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b3d90: 0xb046003f  sdl         $a2, 0x3F($v0)
    ctx->pc = 0x3b3d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b3d94: 0xb4460038  sdr         $a2, 0x38($v0)
    ctx->pc = 0x3b3d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b3d98: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3B3D98u;
    {
        const bool branch_taken_0x3b3d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3D98u;
        // 0x3b3d9c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3d98) {
            ctx->pc = 0x3B3DECu;
            goto label_3b3dec;
        }
    }
    ctx->pc = 0x3B3DA0u;
label_3b3da0:
    // 0x3b3da0: 0x8a070017  lwl         $a3, 0x17($s0)
    ctx->pc = 0x3b3da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x3b3da4: 0x9a070014  lwr         $a3, 0x14($s0)
    ctx->pc = 0x3b3da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x3b3da8: 0xaba70013  swl         $a3, 0x13($sp)
    ctx->pc = 0x3b3da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b3dac: 0xbba70010  swr         $a3, 0x10($sp)
    ctx->pc = 0x3b3dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b3db0: 0x8a04001b  lwl         $a0, 0x1B($s0)
    ctx->pc = 0x3b3db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x3b3db4: 0x9a040018  lwr         $a0, 0x18($s0)
    ctx->pc = 0x3b3db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x3b3db8: 0xaba40017  swl         $a0, 0x17($sp)
    ctx->pc = 0x3b3db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b3dbc: 0xbba40014  swr         $a0, 0x14($sp)
    ctx->pc = 0x3b3dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b3dc0: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x3b3dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3b3dc4: 0x2cc20401  sltiu       $v0, $a2, 0x401
    ctx->pc = 0x3b3dc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x3b3dc8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B3DC8u;
    {
        const bool branch_taken_0x3b3dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3DC8u;
        // 0x3b3dcc: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3dc8) {
            ctx->pc = 0x3B3DE0u;
            goto label_3b3de0;
        }
    }
    ctx->pc = 0x3B3DD0u;
    // 0x3b3dd0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x3b3dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3b3dd4: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x3b3dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3b3dd8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3b3dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3b3ddc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3b3ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3b3de0:
    // 0x3b3de0: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3B3DE0u;
    SET_GPR_U32(ctx, 31, 0x3B3DE8u);
    ctx->pc = 0x3B3DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3DE0u;
    // 0x3b3de4: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3B3DE0u, 0x3B3DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3DE8u;
label_3b3de8:
    // 0x3b3de8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3b3de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3b3dec:
    // 0x3b3dec: 0x4810019  bgez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3B3DECu;
    {
        const bool branch_taken_0x3b3dec = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x3B3DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3DECu;
        // 0x3b3df0: 0x3c070040  lui         $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3dec) {
            ctx->pc = 0x3B3E54u;
            goto label_3b3e54;
        }
    }
    ctx->pc = 0x3B3DF4u;
    // 0x3b3df4: 0x41023  negu        $v0, $a0
    ctx->pc = 0x3b3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x3b3df8: 0x8ce3ae58  lw          $v1, -0x51A8($a3)
    ctx->pc = 0x3b3df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294946392)));
    // 0x3b3dfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b3dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3e00: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3b3e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3b3e04: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B3E04u;
    {
        const bool branch_taken_0x3b3e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3B3E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E04u;
        // 0x3b3e08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3e04) {
            ctx->pc = 0x3B3E20u;
            goto label_3b3e20;
        }
    }
    ctx->pc = 0x3B3E0Cu;
    // 0x3b3e0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b3e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b3e10: 0xace2ae58  sw          $v0, -0x51A8($a3)
    ctx->pc = 0x3b3e10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294946392), GPR_U32(ctx, 2));
    // 0x3b3e14: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3B3E14u;
    {
        const bool branch_taken_0x3b3e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E14u;
        // 0x3b3e18: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3e14) {
            ctx->pc = 0x3B3E60u;
            goto label_3b3e60;
        }
    }
    ctx->pc = 0x3B3E1Cu;
    // 0x3b3e1c: 0x0  nop
    ctx->pc = 0x3b3e1cu;
    // NOP
label_3b3e20:
    // 0x3b3e20: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3b3e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3b3e24:
    // 0x3b3e24: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x3b3e24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3b3e28: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3B3E28u;
    {
        const bool branch_taken_0x3b3e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E28u;
        // 0x3b3e2c: 0x24e2ae58  addiu       $v0, $a3, -0x51A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3e28) {
            ctx->pc = 0x3B3E5Cu;
            goto label_3b3e5c;
        }
    }
    ctx->pc = 0x3B3E30u;
    // 0x3b3e30: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3b3e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3b3e34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3b3e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b3e38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3b3e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b3e3c: 0x1485fff9  bne         $a0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3B3E3Cu;
    {
        const bool branch_taken_0x3b3e3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x3B3E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E3Cu;
        // 0x3b3e40: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3e3c) {
            ctx->pc = 0x3B3E24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3e24;
        }
    }
    ctx->pc = 0x3B3E44u;
    // 0x3b3e44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b3e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b3e48: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3b3e48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3b3e4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B3E4Cu;
    {
        const bool branch_taken_0x3b3e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E4Cu;
        // 0x3b3e50: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3e4c) {
            ctx->pc = 0x3B3E60u;
            goto label_3b3e60;
        }
    }
    ctx->pc = 0x3B3E54u;
label_3b3e54:
    // 0x3b3e54: 0xc0ebf34  jal         func_3AFCD0
    ctx->pc = 0x3B3E54u;
    SET_GPR_U32(ctx, 31, 0x3B3E5Cu);
    ctx->pc = 0x3AFCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCD0u, 0x3B3E54u, 0x3B3E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3E5Cu;
label_3b3e5c:
    // 0x3b3e5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b3e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b3e60:
    // 0x3b3e60: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3b3e60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b3e64: 0x3e00008  jr          $ra
    ctx->pc = 0x3B3E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E64u;
        // 0x3b3e68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B3E6Cu;
    // 0x3b3e6c: 0x0  nop
    ctx->pc = 0x3b3e6cu;
    // NOP
    ctx->pc = 0x3b3e70u;
}
