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

// Function: LightData_Load
// Address: 0x2d6a60 - 0x2d6d80
void LightData_Load_0x2d6a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LightData_Load_0x2d6a60");
#endif

    switch (ctx->pc) {
        case 0x2d6aa4u: goto label_2d6aa4;
        case 0x2d6ac0u: goto label_2d6ac0;
        case 0x2d6aecu: goto label_2d6aec;
        case 0x2d6b00u: goto label_2d6b00;
        case 0x2d6b2cu: goto label_2d6b2c;
        case 0x2d6b90u: goto label_2d6b90;
        case 0x2d6c28u: goto label_2d6c28;
        case 0x2d6c50u: goto label_2d6c50;
        case 0x2d6c7cu: goto label_2d6c7c;
        case 0x2d6cdcu: goto label_2d6cdc;
        default: break;
    }

    ctx->pc = 0x2d6a60u;

    // 0x2d6a60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d6a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d6a64: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2d6a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2d6a68: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2d6a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2d6a6c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2d6a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2d6a70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d6a70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a74: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2d6a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2d6a78: 0x8c447a4c  lw          $a0, 0x7A4C($v0)
    ctx->pc = 0x2d6a78u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x747A4Cu));
    // 0x2d6a7c: 0x24a5d248  addiu       $a1, $a1, -0x2DB8
    ctx->pc = 0x2d6a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955592));
    // 0x2d6a80: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2d6a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2d6a84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d6a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a88: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2d6a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2d6a8c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2d6a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2d6a90: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2d6a90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a94: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d6a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d6a98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d6a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d6a9c: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2D6A9Cu;
    SET_GPR_U32(ctx, 31, 0x2D6AA4u);
    ctx->pc = 0x2D6AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6A9Cu;
    // 0x2d6aa0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2D6A9Cu, 0x2D6AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6AA4u;
label_2d6aa4:
    // 0x2d6aa4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d6aa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6aa8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2d6aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6aac: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D6AACu;
    {
        const bool branch_taken_0x2d6aac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6AACu;
        // 0x2d6ab0: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6aac) {
            ctx->pc = 0x2D6AC8u;
            goto label_2d6ac8;
        }
    }
    ctx->pc = 0x2D6AB4u;
    // 0x2d6ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ab8: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x2D6AB8u;
    SET_GPR_U32(ctx, 31, 0x2D6AC0u);
    ctx->pc = 0x2D6ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6AB8u;
    // 0x2d6abc: 0x24a5d250  addiu       $a1, $a1, -0x2DB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x2D6AB8u, 0x2D6AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6AC0u;
label_2d6ac0:
    // 0x2d6ac0: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2D6AC0u;
    {
        const bool branch_taken_0x2d6ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6AC0u;
        // 0x2d6ac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6ac0) {
            ctx->pc = 0x2D6D58u;
            goto label_2d6d58;
        }
    }
    ctx->pc = 0x2D6AC8u;
label_2d6ac8:
    // 0x2d6ac8: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x2d6ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2d6acc: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x2d6accu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2d6ad0: 0xaa420003  swl         $v0, 0x3($s2)
    ctx->pc = 0x2d6ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d6ad4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2d6ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2d6ad8: 0xba420000  swr         $v0, 0x0($s2)
    ctx->pc = 0x2d6ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d6adc: 0x24a5d258  addiu       $a1, $a1, -0x2DA8
    ctx->pc = 0x2d6adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955608));
    // 0x2d6ae0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d6ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ae4: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x2D6AE4u;
    SET_GPR_U32(ctx, 31, 0x2D6AECu);
    ctx->pc = 0x2D6AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6AE4u;
    // 0x2d6ae8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x2D6AE4u, 0x2D6AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6AECu;
label_2d6aec:
    // 0x2d6aec: 0x1440009a  bnez        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x2D6AECu;
    {
        const bool branch_taken_0x2d6aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6AECu;
        // 0x2d6af0: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6aec) {
            ctx->pc = 0x2D6D58u;
            goto label_2d6d58;
        }
    }
    ctx->pc = 0x2D6AF4u;
    // 0x2d6af4: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x2D6AF4u;
    {
        const bool branch_taken_0x2d6af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6AF4u;
        // 0x2d6af8: 0x26300004  addiu       $s0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6af4) {
            ctx->pc = 0x2D6D44u;
            goto label_2d6d44;
        }
    }
    ctx->pc = 0x2D6AFCu;
    // 0x2d6afc: 0x0  nop
    ctx->pc = 0x2d6afcu;
    // NOP
label_2d6b00:
    // 0x2d6b00: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2d6b00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6b04: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2d6b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2d6b08: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2d6b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2d6b0c: 0x2031025  or          $v0, $s0, $v1
    ctx->pc = 0x2d6b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x2d6b10: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2d6b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2d6b14: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D6B14u;
    {
        const bool branch_taken_0x2d6b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B14u;
        // 0x2d6b18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6b14) {
            ctx->pc = 0x2D6B80u;
            goto label_2d6b80;
        }
    }
    ctx->pc = 0x2D6B1Cu;
    // 0x2d6b1c: 0x26080070  addiu       $t0, $s0, 0x70
    ctx->pc = 0x2d6b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2d6b20: 0x26020060  addiu       $v0, $s0, 0x60
    ctx->pc = 0x2d6b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2d6b24: 0x143080  sll         $a2, $s4, 2
    ctx->pc = 0x2d6b24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2d6b28: 0x26440410  addiu       $a0, $s2, 0x410
    ctx->pc = 0x2d6b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1040));
label_2d6b2c:
    // 0x2d6b2c: 0x68a70007  ldl         $a3, 0x7($a1)
    ctx->pc = 0x2d6b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2d6b30: 0x6ca70000  ldr         $a3, 0x0($a1)
    ctx->pc = 0x2d6b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2d6b34: 0x68a9000f  ldl         $t1, 0xF($a1)
    ctx->pc = 0x2d6b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2d6b38: 0x6ca90008  ldr         $t1, 0x8($a1)
    ctx->pc = 0x2d6b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2d6b3c: 0x68aa0017  ldl         $t2, 0x17($a1)
    ctx->pc = 0x2d6b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2d6b40: 0x6caa0010  ldr         $t2, 0x10($a1)
    ctx->pc = 0x2d6b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2d6b44: 0x68ab001f  ldl         $t3, 0x1F($a1)
    ctx->pc = 0x2d6b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2d6b48: 0x6cab0018  ldr         $t3, 0x18($a1)
    ctx->pc = 0x2d6b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2d6b4c: 0xb0670007  sdl         $a3, 0x7($v1)
    ctx->pc = 0x2d6b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6b50: 0xb4670000  sdr         $a3, 0x0($v1)
    ctx->pc = 0x2d6b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6b54: 0xb069000f  sdl         $t1, 0xF($v1)
    ctx->pc = 0x2d6b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6b58: 0xb4690008  sdr         $t1, 0x8($v1)
    ctx->pc = 0x2d6b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6b5c: 0xb06a0017  sdl         $t2, 0x17($v1)
    ctx->pc = 0x2d6b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6b60: 0xb46a0010  sdr         $t2, 0x10($v1)
    ctx->pc = 0x2d6b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6b64: 0xb06b001f  sdl         $t3, 0x1F($v1)
    ctx->pc = 0x2d6b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6b68: 0xb46b0018  sdr         $t3, 0x18($v1)
    ctx->pc = 0x2d6b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6b6c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2d6b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2d6b70: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2D6B70u;
    {
        const bool branch_taken_0x2d6b70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D6B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B70u;
        // 0x2d6b74: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6b70) {
            ctx->pc = 0x2D6B2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6b2c;
        }
    }
    ctx->pc = 0x2D6B78u;
    // 0x2d6b78: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2D6B78u;
    {
        const bool branch_taken_0x2d6b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B78u;
        // 0x2d6b7c: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6b78) {
            ctx->pc = 0x2D6BC0u;
            goto label_2d6bc0;
        }
    }
    ctx->pc = 0x2D6B80u;
label_2d6b80:
    // 0x2d6b80: 0x26080070  addiu       $t0, $s0, 0x70
    ctx->pc = 0x2d6b80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2d6b84: 0x26020060  addiu       $v0, $s0, 0x60
    ctx->pc = 0x2d6b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2d6b88: 0x143080  sll         $a2, $s4, 2
    ctx->pc = 0x2d6b88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2d6b8c: 0x26440410  addiu       $a0, $s2, 0x410
    ctx->pc = 0x2d6b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1040));
label_2d6b90:
    // 0x2d6b90: 0xdcac0000  ld          $t4, 0x0($a1)
    ctx->pc = 0x2d6b90u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d6b94: 0xdca70008  ld          $a3, 0x8($a1)
    ctx->pc = 0x2d6b94u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d6b98: 0xdca90010  ld          $t1, 0x10($a1)
    ctx->pc = 0x2d6b98u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d6b9c: 0xdcaa0018  ld          $t2, 0x18($a1)
    ctx->pc = 0x2d6b9cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2d6ba0: 0xfc6c0000  sd          $t4, 0x0($v1)
    ctx->pc = 0x2d6ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 12));
    // 0x2d6ba4: 0xfc670008  sd          $a3, 0x8($v1)
    ctx->pc = 0x2d6ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
    // 0x2d6ba8: 0xfc690010  sd          $t1, 0x10($v1)
    ctx->pc = 0x2d6ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 9));
    // 0x2d6bac: 0xfc6a0018  sd          $t2, 0x18($v1)
    ctx->pc = 0x2d6bacu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 10));
    // 0x2d6bb0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2d6bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2d6bb4: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D6BB4u;
    {
        const bool branch_taken_0x2d6bb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D6BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6BB4u;
        // 0x2d6bb8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6bb4) {
            ctx->pc = 0x2D6B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6b90;
        }
    }
    ctx->pc = 0x2D6BBCu;
    // 0x2d6bbc: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x2d6bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2d6bc0:
    // 0x2d6bc0: 0x2728821  addu        $s1, $s3, $s2
    ctx->pc = 0x2d6bc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2d6bc4: 0x68ab0007  ldl         $t3, 0x7($a1)
    ctx->pc = 0x2d6bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2d6bc8: 0x6cab0000  ldr         $t3, 0x0($a1)
    ctx->pc = 0x2d6bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2d6bcc: 0x68ac000f  ldl         $t4, 0xF($a1)
    ctx->pc = 0x2d6bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2d6bd0: 0x6cac0008  ldr         $t4, 0x8($a1)
    ctx->pc = 0x2d6bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2d6bd4: 0xb06b0007  sdl         $t3, 0x7($v1)
    ctx->pc = 0x2d6bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6bd8: 0xb46b0000  sdr         $t3, 0x0($v1)
    ctx->pc = 0x2d6bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6bdc: 0xb06c000f  sdl         $t4, 0xF($v1)
    ctx->pc = 0x2d6bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6be0: 0xb46c0008  sdr         $t4, 0x8($v1)
    ctx->pc = 0x2d6be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6be4: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x2d6be4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x2d6be8: 0x89070107  lwl         $a3, 0x107($t0)
    ctx->pc = 0x2d6be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 263); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x2d6bec: 0x99070104  lwr         $a3, 0x104($t0)
    ctx->pc = 0x2d6becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 260); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x2d6bf0: 0xaa270083  swl         $a3, 0x83($s1)
    ctx->pc = 0x2d6bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 131); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d6bf4: 0xba270080  swr         $a3, 0x80($s1)
    ctx->pc = 0x2d6bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 128); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d6bf8: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x2d6bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x2d6bfc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D6BFCu;
    {
        const bool branch_taken_0x2d6bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6BFCu;
        // 0x2d6c00: 0x25100108  addiu       $s0, $t0, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6bfc) {
            ctx->pc = 0x2D6C30u;
            goto label_2d6c30;
        }
    }
    ctx->pc = 0x2D6C04u;
    // 0x2d6c04: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x2d6c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2d6c08: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D6C08u;
    {
        const bool branch_taken_0x2d6c08 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2D6C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C08u;
        // 0x2d6c0c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6c08) {
            ctx->pc = 0x2D6C30u;
            goto label_2d6c30;
        }
    }
    ctx->pc = 0x2D6C10u;
    // 0x2d6c10: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x2d6c10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x2d6c14: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x2d6c14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2d6c18: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x2d6c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x2d6c1c: 0x2012  mflo        $a0
    ctx->pc = 0x2d6c1cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2d6c20: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2D6C20u;
    SET_GPR_U32(ctx, 31, 0x2D6C28u);
    ctx->pc = 0x2D6C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6C20u;
    // 0x2d6c24: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2D6C20u, 0x2D6C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6C28u;
label_2d6c28:
    // 0x2d6c28: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2D6C28u;
    {
        const bool branch_taken_0x2d6c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C28u;
        // 0x2d6c2c: 0xae220084  sw          $v0, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6c28) {
            ctx->pc = 0x2D6D54u;
            goto label_2d6d54;
        }
    }
    ctx->pc = 0x2D6C30u;
label_2d6c30:
    // 0x2d6c30: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2d6c30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6c34: 0x26890001  addiu       $t1, $s4, 0x1
    ctx->pc = 0x2d6c34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2d6c38: 0x2471821  addu        $v1, $s2, $a3
    ctx->pc = 0x2d6c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x2d6c3c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2d6c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2d6c40: 0x1840003f  blez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2D6C40u;
    {
        const bool branch_taken_0x2d6c40 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2D6C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C40u;
        // 0x2d6c44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6c40) {
            ctx->pc = 0x2D6D40u;
            goto label_2d6d40;
        }
    }
    ctx->pc = 0x2D6C48u;
    // 0x2d6c48: 0x240a0070  addiu       $t2, $zero, 0x70
    ctx->pc = 0x2d6c48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2d6c4c: 0x0  nop
    ctx->pc = 0x2d6c4cu;
    // NOP
label_2d6c50:
    // 0x2d6c50: 0xca2018  mult        $a0, $a2, $t2
    ctx->pc = 0x2d6c50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2d6c54: 0x2471021  addu        $v0, $s2, $a3
    ctx->pc = 0x2d6c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x2d6c58: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x2d6c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x2d6c5c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2d6c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d6c60: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x2d6c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x2d6c64: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2d6c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2d6c68: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D6C68u;
    {
        const bool branch_taken_0x2d6c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C68u;
        // 0x2d6c6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6c68) {
            ctx->pc = 0x2D6CD0u;
            goto label_2d6cd0;
        }
    }
    ctx->pc = 0x2D6C70u;
    // 0x2d6c70: 0x26080070  addiu       $t0, $s0, 0x70
    ctx->pc = 0x2d6c70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2d6c74: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2d6c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2d6c78: 0x26020060  addiu       $v0, $s0, 0x60
    ctx->pc = 0x2d6c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_2d6c7c:
    // 0x2d6c7c: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x2d6c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2d6c80: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x2d6c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2d6c84: 0x68a7000f  ldl         $a3, 0xF($a1)
    ctx->pc = 0x2d6c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2d6c88: 0x6ca70008  ldr         $a3, 0x8($a1)
    ctx->pc = 0x2d6c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2d6c8c: 0x68ab0017  ldl         $t3, 0x17($a1)
    ctx->pc = 0x2d6c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2d6c90: 0x6cab0010  ldr         $t3, 0x10($a1)
    ctx->pc = 0x2d6c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2d6c94: 0x68ac001f  ldl         $t4, 0x1F($a1)
    ctx->pc = 0x2d6c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2d6c98: 0x6cac0018  ldr         $t4, 0x18($a1)
    ctx->pc = 0x2d6c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2d6c9c: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x2d6c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6ca0: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x2d6ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6ca4: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x2d6ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6ca8: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x2d6ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6cac: 0xb08b0017  sdl         $t3, 0x17($a0)
    ctx->pc = 0x2d6cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6cb0: 0xb48b0010  sdr         $t3, 0x10($a0)
    ctx->pc = 0x2d6cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6cb4: 0xb08c001f  sdl         $t4, 0x1F($a0)
    ctx->pc = 0x2d6cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6cb8: 0xb48c0018  sdr         $t4, 0x18($a0)
    ctx->pc = 0x2d6cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6cbc: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2d6cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2d6cc0: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2D6CC0u;
    {
        const bool branch_taken_0x2d6cc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D6CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6CC0u;
        // 0x2d6cc4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6cc0) {
            ctx->pc = 0x2D6C7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6c7c;
        }
    }
    ctx->pc = 0x2D6CC8u;
    // 0x2d6cc8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D6CC8u;
    {
        const bool branch_taken_0x2d6cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6cc8) {
            ctx->pc = 0x2D6D08u;
            goto label_2d6d08;
        }
    }
    ctx->pc = 0x2D6CD0u;
label_2d6cd0:
    // 0x2d6cd0: 0x26080070  addiu       $t0, $s0, 0x70
    ctx->pc = 0x2d6cd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2d6cd4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2d6cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2d6cd8: 0x26020060  addiu       $v0, $s0, 0x60
    ctx->pc = 0x2d6cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_2d6cdc:
    // 0x2d6cdc: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2d6cdcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d6ce0: 0xdca70008  ld          $a3, 0x8($a1)
    ctx->pc = 0x2d6ce0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d6ce4: 0xdcab0010  ld          $t3, 0x10($a1)
    ctx->pc = 0x2d6ce4u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d6ce8: 0xdcac0018  ld          $t4, 0x18($a1)
    ctx->pc = 0x2d6ce8u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2d6cec: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x2d6cecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x2d6cf0: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x2d6cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x2d6cf4: 0xfc8b0010  sd          $t3, 0x10($a0)
    ctx->pc = 0x2d6cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 11));
    // 0x2d6cf8: 0xfc8c0018  sd          $t4, 0x18($a0)
    ctx->pc = 0x2d6cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 12));
    // 0x2d6cfc: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2d6cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2d6d00: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D6D00u;
    {
        const bool branch_taken_0x2d6d00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D6D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6D00u;
        // 0x2d6d04: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6d00) {
            ctx->pc = 0x2D6CDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6cdc;
        }
    }
    ctx->pc = 0x2D6D08u;
label_2d6d08:
    // 0x2d6d08: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x2d6d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d6d0c: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x2d6d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d6d10: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x2d6d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2d6d14: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x2d6d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2d6d18: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x2d6d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6d1c: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x2d6d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6d20: 0xb083000f  sdl         $v1, 0xF($a0)
    ctx->pc = 0x2d6d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6d24: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2d6d24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d28: 0xb4830008  sdr         $v1, 0x8($a0)
    ctx->pc = 0x2d6d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6d2c: 0x2471821  addu        $v1, $s2, $a3
    ctx->pc = 0x2d6d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x2d6d30: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2d6d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2d6d34: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2d6d34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d6d38: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x2D6D38u;
    {
        const bool branch_taken_0x2d6d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6D38u;
        // 0x2d6d3c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6d38) {
            ctx->pc = 0x2D6C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6c50;
        }
    }
    ctx->pc = 0x2D6D40u;
label_2d6d40:
    // 0x2d6d40: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x2d6d40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2d6d44:
    // 0x2d6d44: 0x2a820008  slti        $v0, $s4, 0x8
    ctx->pc = 0x2d6d44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2d6d48: 0x1440ff6d  bnez        $v0, . + 4 + (-0x93 << 2)
    ctx->pc = 0x2D6D48u;
    {
        const bool branch_taken_0x2d6d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6D48u;
        // 0x2d6d4c: 0x1419c0  sll         $v1, $s4, 7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6d48) {
            ctx->pc = 0x2D6B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6b00;
        }
    }
    ctx->pc = 0x2D6D50u;
    // 0x2d6d50: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2d6d50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d6d54:
    // 0x2d6d54: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2d6d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d6d58:
    // 0x2d6d58: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2d6d58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d6d5c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2d6d5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d6d60: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2d6d60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6d64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d6d64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d6d68: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2d6d68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6d6c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2d6d6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d6d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6d74: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6D74u;
        // 0x2d6d78: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6D7Cu;
    // 0x2d6d7c: 0x0  nop
    ctx->pc = 0x2d6d7cu;
    // NOP
    ctx->pc = 0x2d6d80u;
}
