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

// Function: func_002C8EF8
// Address: 0x2c8ef8 - 0x2c9008
void func_002C8EF8_0x2c8ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C8EF8_0x2c8ef8");
#endif

    switch (ctx->pc) {
        case 0x2c8fa8u: goto label_2c8fa8;
        case 0x2c8fd8u: goto label_2c8fd8;
        case 0x2c8fe0u: goto label_2c8fe0;
        case 0x2c8ff0u: goto label_2c8ff0;
        default: break;
    }

    ctx->pc = 0x2c8ef8u;

    // 0x2c8ef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c8ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c8efc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2c8efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2c8f00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c8f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c8f04: 0x244674a0  addiu       $a2, $v0, 0x74A0
    ctx->pc = 0x2c8f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x2c8f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c8f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c8f0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c8f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8f10: 0x8cc40554  lw          $a0, 0x554($a2)
    ctx->pc = 0x2c8f10u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7479F4u));
    // 0x2c8f14: 0x8cc20594  lw          $v0, 0x594($a2)
    ctx->pc = 0x2c8f14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A34u));
    // 0x2c8f18: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2c8f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2c8f1c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2c8f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2c8f20: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8F20u;
    {
        const bool branch_taken_0x2c8f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F20u;
        // 0x2c8f24: 0x642821  addu        $a1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8f20) {
            ctx->pc = 0x2C8F34u;
            goto label_2c8f34;
        }
    }
    ctx->pc = 0x2C8F28u;
    // 0x2c8f28: 0x8cc2056c  lw          $v0, 0x56C($a2)
    ctx->pc = 0x2c8f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1388)));
    // 0x2c8f2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8F2Cu;
    {
        const bool branch_taken_0x2c8f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8f2c) {
            ctx->pc = 0x2C8F3Cu;
            goto label_2c8f3c;
        }
    }
    ctx->pc = 0x2C8F34u;
label_2c8f34:
    // 0x2c8f34: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2c8f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2c8f38: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x2c8f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2c8f3c:
    // 0x2c8f3c: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2C8F3Cu;
    {
        const bool branch_taken_0x2c8f3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8f3c) {
            ctx->pc = 0x2C8FE8u;
            goto label_2c8fe8;
        }
    }
    ctx->pc = 0x2C8F44u;
    // 0x2c8f44: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x2c8f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2c8f48: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x2c8f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2c8f4c: 0x88a3000b  lwl         $v1, 0xB($a1)
    ctx->pc = 0x2c8f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x2c8f50: 0x98a30008  lwr         $v1, 0x8($a1)
    ctx->pc = 0x2c8f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x2c8f54: 0xb202000b  sdl         $v0, 0xB($s0)
    ctx->pc = 0x2c8f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8f58: 0xb6020004  sdr         $v0, 0x4($s0)
    ctx->pc = 0x2c8f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8f5c: 0xaa03000f  swl         $v1, 0xF($s0)
    ctx->pc = 0x2c8f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2c8f60: 0xba03000c  swr         $v1, 0xC($s0)
    ctx->pc = 0x2c8f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2c8f64: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x2c8f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x2c8f68: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2c8f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c8f6c: 0x34424c53  ori         $v0, $v0, 0x4C53
    ctx->pc = 0x2c8f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19539);
    // 0x2c8f70: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C8F70u;
    {
        const bool branch_taken_0x2c8f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C8F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F70u;
        // 0x2c8f74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8f70) {
            ctx->pc = 0x2C8FE8u;
            goto label_2c8fe8;
        }
    }
    ctx->pc = 0x2C8F78u;
    // 0x2c8f78: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2c8f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c8f7c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C8F7Cu;
    {
        const bool branch_taken_0x2c8f7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C8F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F7Cu;
        // 0x2c8f80: 0x24a2000c  addiu       $v0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8f7c) {
            ctx->pc = 0x2C8FC8u;
            goto label_2c8fc8;
        }
    }
    ctx->pc = 0x2C8F84u;
    // 0x2c8f84: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x2c8f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2c8f88: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2c8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c8f8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c8f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c8f90: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C8F90u;
    {
        const bool branch_taken_0x2c8f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F90u;
        // 0x2c8f94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8f90) {
            ctx->pc = 0x2C8FCCu;
            goto label_2c8fcc;
        }
    }
    ctx->pc = 0x2C8F98u;
    // 0x2c8f98: 0x94650018  lhu         $a1, 0x18($v1)
    ctx->pc = 0x2c8f98u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2c8f9c: 0xa4650014  sh          $a1, 0x14($v1)
    ctx->pc = 0x2c8f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 5));
    // 0x2c8fa0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2c8fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c8fa4: 0x0  nop
    ctx->pc = 0x2c8fa4u;
    // NOP
label_2c8fa8:
    // 0x2c8fa8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2c8fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c8fac: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2c8facu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c8fb0: 0x0  nop
    ctx->pc = 0x2c8fb0u;
    // NOP
    // 0x2c8fb4: 0x0  nop
    ctx->pc = 0x2c8fb4u;
    // NOP
    // 0x2c8fb8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C8FB8u;
    {
        const bool branch_taken_0x2c8fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8fb8) {
            ctx->pc = 0x2C8FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8FB8u;
            // 0x2c8fbc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8fa8;
        }
    }
    ctx->pc = 0x2C8FC0u;
    // 0x2c8fc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8FC0u;
    {
        const bool branch_taken_0x2c8fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8FC0u;
        // 0x2c8fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8fc0) {
            ctx->pc = 0x2C8FD0u;
            goto label_2c8fd0;
        }
    }
    ctx->pc = 0x2C8FC8u;
label_2c8fc8:
    // 0x2c8fc8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c8fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2c8fcc:
    // 0x2c8fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8fd0:
    // 0x2c8fd0: 0xc0b2428  jal         func_2C90A0
    ctx->pc = 0x2C8FD0u;
    SET_GPR_U32(ctx, 31, 0x2C8FD8u);
    ctx->pc = 0x2C8FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8FD0u;
    // 0x2c8fd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C90A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C90A0u, 0x2C8FD0u, 0x2C8FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8FD8u;
label_2c8fd8:
    // 0x2c8fd8: 0xc0b2654  jal         func_2C9950
    ctx->pc = 0x2C8FD8u;
    SET_GPR_U32(ctx, 31, 0x2C8FE0u);
    ctx->pc = 0x2C8FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8FD8u;
    // 0x2c8fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9950u, 0x2C8FD8u, 0x2C8FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8FE0u;
label_2c8fe0:
    // 0x2c8fe0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8FE0u;
    {
        const bool branch_taken_0x2c8fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8FE0u;
        // 0x2c8fe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8fe0) {
            ctx->pc = 0x2C8FF4u;
            goto label_2c8ff4;
        }
    }
    ctx->pc = 0x2C8FE8u;
label_2c8fe8:
    // 0x2c8fe8: 0xc0b23ac  jal         func_2C8EB0
    ctx->pc = 0x2C8FE8u;
    SET_GPR_U32(ctx, 31, 0x2C8FF0u);
    ctx->pc = 0x2C8FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8FE8u;
    // 0x2c8fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8EB0u, 0x2C8FE8u, 0x2C8FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8FF0u;
label_2c8ff0:
    // 0x2c8ff0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c8ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8ff4:
    // 0x2c8ff4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c8ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c8ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8FFCu;
        // 0x2c9000: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9004u;
    // 0x2c9004: 0x0  nop
    ctx->pc = 0x2c9004u;
    // NOP
    ctx->pc = 0x2c9008u;
}
