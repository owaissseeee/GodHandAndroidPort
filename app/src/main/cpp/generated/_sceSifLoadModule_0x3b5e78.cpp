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

// Function: _sceSifLoadModule
// Address: 0x3b5e78 - 0x3b60a0
void _sceSifLoadModule_0x3b5e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceSifLoadModule_0x3b5e78");
#endif

    switch (ctx->pc) {
        case 0x3b5eb0u: goto label_3b5eb0;
        case 0x3b5ec0u: goto label_3b5ec0;
        case 0x3b5ee8u: goto label_3b5ee8;
        case 0x3b5f20u: goto label_3b5f20;
        case 0x3b5f88u: goto label_3b5f88;
        case 0x3b6018u: goto label_3b6018;
        case 0x3b605cu: goto label_3b605c;
        default: break;
    }

    ctx->pc = 0x3b5e78u;

    // 0x3b5e78: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b5e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3b5e7c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x3b5e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x3b5e80: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x3b5e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x3b5e84: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3b5e84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5e88: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3b5e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3b5e8c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x3b5e8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5e90: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3b5e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x3b5e94: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3b5e94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5e98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3b5e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3b5e9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b5e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5ea0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3b5ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3b5ea4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3b5ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5ea8: 0xc0ed6a0  jal         func_3B5A80
    ctx->pc = 0x3B5EA8u;
    SET_GPR_U32(ctx, 31, 0x3B5EB0u);
    ctx->pc = 0x3B5EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5EA8u;
    // 0x3b5eac: 0xffb50060  sd          $s5, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5A80u, 0x3B5EA8u, 0x3B5EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5EB0u;
label_3b5eb0:
    // 0x3b5eb0: 0x4400071  bltz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x3B5EB0u;
    {
        const bool branch_taken_0x3b5eb0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3B5EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5EB0u;
        // 0x3b5eb4: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5eb0) {
            ctx->pc = 0x3B6078u;
            goto label_3b6078;
        }
    }
    ctx->pc = 0x3B5EB8u;
    // 0x3b5eb8: 0xc0ed6e0  jal         func_3B5B80
    ctx->pc = 0x3B5EB8u;
    SET_GPR_U32(ctx, 31, 0x3B5EC0u);
    ctx->pc = 0x3B5B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B80u, 0x3B5EB8u, 0x3B5EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5EC0u;
label_3b5ec0:
    // 0x3b5ec0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B5EC0u;
    {
        const bool branch_taken_0x3b5ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5ec0) {
            ctx->pc = 0x3B5EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5EC0u;
            // 0x3b5ec4: 0x3c020078  lui         $v0, 0x78 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5ED4u;
            goto label_3b5ed4;
        }
    }
    ctx->pc = 0x3B5EC8u;
    // 0x3b5ec8: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x3b5ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x3b5ecc: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x3B5ECCu;
    {
        const bool branch_taken_0x3b5ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5ECCu;
        // 0x3b5ed0: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5ecc) {
            ctx->pc = 0x3B6078u;
            goto label_3b6078;
        }
    }
    ctx->pc = 0x3B5ED4u;
label_3b5ed4:
    // 0x3b5ed4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b5ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5ed8: 0x24511988  addiu       $s1, $v0, 0x1988
    ctx->pc = 0x3b5ed8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 6536));
    // 0x3b5edc: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x3b5edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x3b5ee0: 0xc0e9768  jal         func_3A5DA0
    ctx->pc = 0x3B5EE0u;
    SET_GPR_U32(ctx, 31, 0x3B5EE8u);
    ctx->pc = 0x3B5EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5EE0u;
    // 0x3b5ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5DA0u, 0x3B5EE0u, 0x3B5EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5EE8u;
label_3b5ee8:
    // 0x3b5ee8: 0x2622fff8  addiu       $v0, $s1, -0x8
    ctx->pc = 0x3b5ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x3b5eec: 0x1200004c  beqz        $s0, . + 4 + (0x4C << 2)
    ctx->pc = 0x3B5EECu;
    {
        const bool branch_taken_0x3b5eec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5EECu;
        // 0x3b5ef0: 0xa0400103  sb          $zero, 0x103($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 259), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5eec) {
            ctx->pc = 0x3B6020u;
            goto label_3b6020;
        }
    }
    ctx->pc = 0x3B5EF4u;
    // 0x3b5ef4: 0x2a4200fd  slti        $v0, $s2, 0xFD
    ctx->pc = 0x3b5ef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)253) ? 1 : 0);
    // 0x3b5ef8: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x3B5EF8u;
    {
        const bool branch_taken_0x3b5ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B5EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5EF8u;
        // 0x3b5efc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5ef8) {
            ctx->pc = 0x3B6008u;
            goto label_3b6008;
        }
    }
    ctx->pc = 0x3B5F00u;
    // 0x3b5f00: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x3b5f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
    // 0x3b5f04: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x3b5f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x3b5f08: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x3b5f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3b5f0c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3B5F0Cu;
    {
        const bool branch_taken_0x3b5f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5F0Cu;
        // 0x3b5f10: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5f0c) {
            ctx->pc = 0x3B5F7Cu;
            goto label_3b5f7c;
        }
    }
    ctx->pc = 0x3B5F14u;
    // 0x3b5f14: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x3b5f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x3b5f18: 0x3c150078  lui         $s5, 0x78
    ctx->pc = 0x3b5f18u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)120 << 16));
    // 0x3b5f1c: 0x3c050078  lui         $a1, 0x78
    ctx->pc = 0x3b5f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)120 << 16));
label_3b5f20:
    // 0x3b5f20: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x3b5f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3b5f24: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x3b5f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3b5f28: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x3b5f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x3b5f2c: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x3b5f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3b5f30: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x3b5f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3b5f34: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x3b5f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3b5f38: 0x6869001f  ldl         $t1, 0x1F($v1)
    ctx->pc = 0x3b5f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x3b5f3c: 0x6c690018  ldr         $t1, 0x18($v1)
    ctx->pc = 0x3b5f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3b5f40: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x3b5f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5f44: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x3b5f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5f48: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x3b5f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5f4c: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x3b5f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5f50: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x3b5f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5f54: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x3b5f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5f58: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x3b5f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5f5c: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x3b5f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5f60: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3b5f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3b5f64: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3b5f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3b5f68: 0x0  nop
    ctx->pc = 0x3b5f68u;
    // NOP
    // 0x3b5f6c: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3B5F6Cu;
    {
        const bool branch_taken_0x3b5f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b5f6c) {
            ctx->pc = 0x3B5F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b5f20;
        }
    }
    ctx->pc = 0x3B5F74u;
    // 0x3b5f74: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3B5F74u;
    {
        const bool branch_taken_0x3b5f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5f74) {
            ctx->pc = 0x3B5FBCu;
            goto label_3b5fbc;
        }
    }
    ctx->pc = 0x3B5F7Cu;
label_3b5f7c:
    // 0x3b5f7c: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x3b5f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x3b5f80: 0x3c150078  lui         $s5, 0x78
    ctx->pc = 0x3b5f80u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)120 << 16));
    // 0x3b5f84: 0x3c050078  lui         $a1, 0x78
    ctx->pc = 0x3b5f84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)120 << 16));
label_3b5f88:
    // 0x3b5f88: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x3b5f88u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b5f8c: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x3b5f8cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3b5f90: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x3b5f90u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3b5f94: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x3b5f94u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x3b5f98: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x3b5f98u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x3b5f9c: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x3b5f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x3b5fa0: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x3b5fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x3b5fa4: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x3b5fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x3b5fa8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3b5fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3b5fac: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3b5facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3b5fb0: 0x0  nop
    ctx->pc = 0x3b5fb0u;
    // NOP
    // 0x3b5fb4: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3B5FB4u;
    {
        const bool branch_taken_0x3b5fb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b5fb4) {
            ctx->pc = 0x3B5F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b5f88;
        }
    }
    ctx->pc = 0x3B5FBCu;
label_3b5fbc:
    // 0x3b5fbc: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x3b5fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3b5fc0: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x3b5fc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3b5fc4: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x3b5fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x3b5fc8: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x3b5fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3b5fcc: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x3b5fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3b5fd0: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x3b5fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3b5fd4: 0x8869001b  lwl         $t1, 0x1B($v1)
    ctx->pc = 0x3b5fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x3b5fd8: 0x98690018  lwr         $t1, 0x18($v1)
    ctx->pc = 0x3b5fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x3b5fdc: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x3b5fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5fe0: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x3b5fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5fe4: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x3b5fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5fe8: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x3b5fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5fec: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x3b5fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5ff0: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x3b5ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5ff4: 0xa889001b  swl         $t1, 0x1B($a0)
    ctx->pc = 0x3b5ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b5ff8: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x3b5ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x3b5ffc: 0xb8890018  swr         $t1, 0x18($a0)
    ctx->pc = 0x3b5ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b6000: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3B6000u;
    {
        const bool branch_taken_0x3b6000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6000u;
        // 0x3b6004: 0xaea21980  sw          $v0, 0x1980($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 6528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6000) {
            ctx->pc = 0x3B6030u;
            goto label_3b6030;
        }
    }
    ctx->pc = 0x3B6008u;
label_3b6008:
    // 0x3b6008: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x3b6008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
    // 0x3b600c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b600cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6010: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3B6010u;
    SET_GPR_U32(ctx, 31, 0x3B6018u);
    ctx->pc = 0x3B6014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6010u;
    // 0x3b6014: 0x3c150078  lui         $s5, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)120 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3B6010u, 0x3B6018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6018u;
label_3b6018:
    // 0x3b6018: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B6018u;
    {
        const bool branch_taken_0x3b6018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6018u;
        // 0x3b601c: 0xae32fff8  sw          $s2, -0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6018) {
            ctx->pc = 0x3B602Cu;
            goto label_3b602c;
        }
    }
    ctx->pc = 0x3B6020u;
label_3b6020:
    // 0x3b6020: 0xa0400104  sb          $zero, 0x104($v0)
    ctx->pc = 0x3b6020u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 260), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b6024: 0x3c150078  lui         $s5, 0x78
    ctx->pc = 0x3b6024u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)120 << 16));
    // 0x3b6028: 0xae20fff8  sw          $zero, -0x8($s1)
    ctx->pc = 0x3b6028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 0));
label_3b602c:
    // 0x3b602c: 0x3c050078  lui         $a1, 0x78
    ctx->pc = 0x3b602cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)120 << 16));
label_3b6030:
    // 0x3b6030: 0x26b01980  addiu       $s0, $s5, 0x1980
    ctx->pc = 0x3b6030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 6528));
    // 0x3b6034: 0x24a41b80  addiu       $a0, $a1, 0x1B80
    ctx->pc = 0x3b6034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 7040));
    // 0x3b6038: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3b6038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b603c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3b603cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3b6040: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b6040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6044: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3b6044u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6048: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x3b6048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3b604c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3b604cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6050: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x3b6050u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3b6054: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x3B6054u;
    SET_GPR_U32(ctx, 31, 0x3B605Cu);
    ctx->pc = 0x3B6058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6054u;
    // 0x3b6058: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x3B6054u, 0x3B605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B605Cu;
label_3b605c:
    // 0x3b605c: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B605Cu;
    {
        const bool branch_taken_0x3b605c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x3b605c) {
            ctx->pc = 0x3B6060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B605Cu;
            // 0x3b6060: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6070u;
            goto label_3b6070;
        }
    }
    ctx->pc = 0x3B6064u;
    // 0x3b6064: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x3b6064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x3b6068: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B6068u;
    {
        const bool branch_taken_0x3b6068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6068u;
        // 0x3b606c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6068) {
            ctx->pc = 0x3B6078u;
            goto label_3b6078;
        }
    }
    ctx->pc = 0x3B6070u;
label_3b6070:
    // 0x3b6070: 0x8ea21980  lw          $v0, 0x1980($s5)
    ctx->pc = 0x3b6070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6528)));
    // 0x3b6074: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x3b6074u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_3b6078:
    // 0x3b6078: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3b6078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b607c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x3b607cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b6080: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x3b6080u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b6084: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x3b6084u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b6088: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3b6088u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b608c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3b608cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b6090: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3b6090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b6094: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6094u;
        // 0x3b6098: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B609Cu;
    // 0x3b609c: 0x0  nop
    ctx->pc = 0x3b609cu;
    // NOP
    ctx->pc = 0x3b60a0u;
}
