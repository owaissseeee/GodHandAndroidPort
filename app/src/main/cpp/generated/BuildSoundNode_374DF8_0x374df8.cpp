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

// Function: BuildSoundNode_374DF8
// Address: 0x374df8 - 0x374f30
void BuildSoundNode_374DF8_0x374df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BuildSoundNode_374DF8_0x374df8");
#endif

    switch (ctx->pc) {
        case 0x374e28u: goto label_374e28;
        case 0x374e54u: goto label_374e54;
        default: break;
    }

    ctx->pc = 0x374df8u;

    // 0x374df8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x374df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x374dfc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x374dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x374e00: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x374e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x374e04: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x374e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x374e08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x374e08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374e0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374e10: 0x9642000e  lhu         $v0, 0xE($s2)
    ctx->pc = 0x374e10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x374e14: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x374e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x374e18: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x374E18u;
    {
        const bool branch_taken_0x374e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x374E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374E18u;
        // 0x374e1c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374e18) {
            ctx->pc = 0x374E34u;
            goto label_374e34;
        }
    }
    ctx->pc = 0x374E20u;
    // 0x374e20: 0xc0df45c  jal         func_37D170
    ctx->pc = 0x374E20u;
    SET_GPR_U32(ctx, 31, 0x374E28u);
    ctx->pc = 0x37D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D170u, 0x374E20u, 0x374E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E28u;
label_374e28:
    // 0x374e28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x374e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374e2c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x374E2Cu;
    {
        const bool branch_taken_0x374e2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x374E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374E2Cu;
        // 0x374e30: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374e2c) {
            ctx->pc = 0x374E3Cu;
            goto label_374e3c;
        }
    }
    ctx->pc = 0x374E34u;
label_374e34:
    // 0x374e34: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x374E34u;
    {
        const bool branch_taken_0x374e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374E34u;
        // 0x374e38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374e34) {
            ctx->pc = 0x374F14u;
            goto label_374f14;
        }
    }
    ctx->pc = 0x374E3Cu;
label_374e3c:
    // 0x374e3c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x374E3Cu;
    {
        const bool branch_taken_0x374e3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x374E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374E3Cu;
        // 0x374e40: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374e3c) {
            ctx->pc = 0x374E4Cu;
            goto label_374e4c;
        }
    }
    ctx->pc = 0x374E44u;
    // 0x374e44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x374E44u;
    {
        const bool branch_taken_0x374e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374E44u;
        // 0x374e48: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374e44) {
            ctx->pc = 0x374E58u;
            goto label_374e58;
        }
    }
    ctx->pc = 0x374E4Cu;
label_374e4c:
    // 0x374e4c: 0xc0ddffe  jal         func_377FF8
    ctx->pc = 0x374E4Cu;
    SET_GPR_U32(ctx, 31, 0x374E54u);
    ctx->pc = 0x377FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377FF8u, 0x374E4Cu, 0x374E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E54u;
label_374e54:
    // 0x374e54: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x374e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_374e58:
    // 0x374e58: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x374e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x374e5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x374e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x374e60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x374e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374e64: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x374e64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x374e68: 0xa203000d  sb          $v1, 0xD($s0)
    ctx->pc = 0x374e68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x374e6c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x374e6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x374e70: 0xa6040012  sh          $a0, 0x12($s0)
    ctx->pc = 0x374e70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x374e74: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x374e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x374e78: 0xa604000e  sh          $a0, 0xE($s0)
    ctx->pc = 0x374e78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x374e7c: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x374e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x374e80: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x374e80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x374e84: 0xa6000016  sh          $zero, 0x16($s0)
    ctx->pc = 0x374e84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x374e88: 0xa6000018  sh          $zero, 0x18($s0)
    ctx->pc = 0x374e88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x374e8c: 0xa600001a  sh          $zero, 0x1A($s0)
    ctx->pc = 0x374e8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x374e90: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x374e90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x374e94: 0xa600001e  sh          $zero, 0x1E($s0)
    ctx->pc = 0x374e94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x374e98: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x374e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x374e9c: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x374e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x374ea0: 0x6a43000f  ldl         $v1, 0xF($s2)
    ctx->pc = 0x374ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x374ea4: 0x6e430008  ldr         $v1, 0x8($s2)
    ctx->pc = 0x374ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x374ea8: 0x6a440017  ldl         $a0, 0x17($s2)
    ctx->pc = 0x374ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x374eac: 0x6e440010  ldr         $a0, 0x10($s2)
    ctx->pc = 0x374eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x374eb0: 0x6a46001f  ldl         $a2, 0x1F($s2)
    ctx->pc = 0x374eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x374eb4: 0x6e460018  ldr         $a2, 0x18($s2)
    ctx->pc = 0x374eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x374eb8: 0xb2020027  sdl         $v0, 0x27($s0)
    ctx->pc = 0x374eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x374ebc: 0xb6020020  sdr         $v0, 0x20($s0)
    ctx->pc = 0x374ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x374ec0: 0xb203002f  sdl         $v1, 0x2F($s0)
    ctx->pc = 0x374ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x374ec4: 0xb6030028  sdr         $v1, 0x28($s0)
    ctx->pc = 0x374ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x374ec8: 0xb2040037  sdl         $a0, 0x37($s0)
    ctx->pc = 0x374ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x374ecc: 0xb6040030  sdr         $a0, 0x30($s0)
    ctx->pc = 0x374eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x374ed0: 0xb206003f  sdl         $a2, 0x3F($s0)
    ctx->pc = 0x374ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x374ed4: 0xb6060038  sdr         $a2, 0x38($s0)
    ctx->pc = 0x374ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x374ed8: 0x6a420027  ldl         $v0, 0x27($s2)
    ctx->pc = 0x374ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x374edc: 0x6e420020  ldr         $v0, 0x20($s2)
    ctx->pc = 0x374edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x374ee0: 0x6a43002f  ldl         $v1, 0x2F($s2)
    ctx->pc = 0x374ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x374ee4: 0x6e430028  ldr         $v1, 0x28($s2)
    ctx->pc = 0x374ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x374ee8: 0xb2020047  sdl         $v0, 0x47($s0)
    ctx->pc = 0x374ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x374eec: 0xb6020040  sdr         $v0, 0x40($s0)
    ctx->pc = 0x374eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x374ef0: 0xb203004f  sdl         $v1, 0x4F($s0)
    ctx->pc = 0x374ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x374ef4: 0xb6030048  sdr         $v1, 0x48($s0)
    ctx->pc = 0x374ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x374ef8: 0x96020048  lhu         $v0, 0x48($s0)
    ctx->pc = 0x374ef8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x374efc: 0x50450005  beql        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x374EFCu;
    {
        const bool branch_taken_0x374efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x374efc) {
            ctx->pc = 0x374F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374EFCu;
            // 0x374f00: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x374F14u;
            goto label_374f14;
        }
    }
    ctx->pc = 0x374F04u;
    // 0x374f04: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x374f04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x374f08: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x374f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x374f0c: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x374f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x374f10: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x374f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_374f14:
    // 0x374f14: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x374f14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x374f18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x374f18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374f1c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x374f1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374f20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374f24: 0x3e00008  jr          $ra
    ctx->pc = 0x374F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374F24u;
        // 0x374f28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374F2Cu;
    // 0x374f2c: 0x0  nop
    ctx->pc = 0x374f2cu;
    // NOP
    ctx->pc = 0x374f30u;
}
