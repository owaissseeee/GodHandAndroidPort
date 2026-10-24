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

// Function: AddSoundEntry_374F30
// Address: 0x374f30 - 0x375050
void AddSoundEntry_374F30_0x374f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddSoundEntry_374F30_0x374f30");
#endif

    switch (ctx->pc) {
        case 0x374f4cu: goto label_374f4c;
        default: break;
    }

    ctx->pc = 0x374f30u;

    // 0x374f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x374f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x374f34: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x374f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x374f38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x374f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x374f3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x374f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374f40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374f44: 0xc0df45c  jal         func_37D170
    ctx->pc = 0x374F44u;
    SET_GPR_U32(ctx, 31, 0x374F4Cu);
    ctx->pc = 0x374F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374F44u;
    // 0x374f48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D170u, 0x374F44u, 0x374F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374F4Cu;
label_374f4c:
    // 0x374f4c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x374f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374f50: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x374F50u;
    {
        const bool branch_taken_0x374f50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x374F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374F50u;
        // 0x374f54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374f50) {
            ctx->pc = 0x374F60u;
            goto label_374f60;
        }
    }
    ctx->pc = 0x374F58u;
    // 0x374f58: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x374F58u;
    {
        const bool branch_taken_0x374f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374F58u;
        // 0x374f5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374f58) {
            ctx->pc = 0x37503Cu;
            goto label_37503c;
        }
    }
    ctx->pc = 0x374F60u;
label_374f60:
    // 0x374f60: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x374f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x374f64: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x374f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x374f68: 0xa4c2000e  sh          $v0, 0xE($a2)
    ctx->pc = 0x374f68u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x374f6c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x374f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x374f70: 0x3c040077  lui         $a0, 0x77
    ctx->pc = 0x374f70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)119 << 16));
    // 0x374f74: 0xa0c2000d  sb          $v0, 0xD($a2)
    ctx->pc = 0x374f74u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x374f78: 0x24843250  addiu       $a0, $a0, 0x3250
    ctx->pc = 0x374f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12880));
    // 0x374f7c: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x374f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x374f80: 0xa0c3000c  sb          $v1, 0xC($a2)
    ctx->pc = 0x374f80u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x374f84: 0xa4c50012  sh          $a1, 0x12($a2)
    ctx->pc = 0x374f84u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 18), (uint16_t)GPR_U32(ctx, 5));
    // 0x374f88: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x374f88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x374f8c: 0xa4c00010  sh          $zero, 0x10($a2)
    ctx->pc = 0x374f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x374f90: 0xa4c00014  sh          $zero, 0x14($a2)
    ctx->pc = 0x374f90u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x374f94: 0xa4c00016  sh          $zero, 0x16($a2)
    ctx->pc = 0x374f94u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x374f98: 0xa4c00018  sh          $zero, 0x18($a2)
    ctx->pc = 0x374f98u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x374f9c: 0xa4c0001a  sh          $zero, 0x1A($a2)
    ctx->pc = 0x374f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x374fa0: 0xa4c0001c  sh          $zero, 0x1C($a2)
    ctx->pc = 0x374fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x374fa4: 0xa4c0001e  sh          $zero, 0x1E($a2)
    ctx->pc = 0x374fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x374fa8: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x374fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x374fac: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x374facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x374fb0: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x374fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x374fb4: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x374fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x374fb8: 0x6a250017  ldl         $a1, 0x17($s1)
    ctx->pc = 0x374fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x374fbc: 0x6e250010  ldr         $a1, 0x10($s1)
    ctx->pc = 0x374fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x374fc0: 0x6a27001f  ldl         $a3, 0x1F($s1)
    ctx->pc = 0x374fc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x374fc4: 0x6e270018  ldr         $a3, 0x18($s1)
    ctx->pc = 0x374fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x374fc8: 0xb0c20027  sdl         $v0, 0x27($a2)
    ctx->pc = 0x374fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x374fcc: 0xb4c20020  sdr         $v0, 0x20($a2)
    ctx->pc = 0x374fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x374fd0: 0xb0c3002f  sdl         $v1, 0x2F($a2)
    ctx->pc = 0x374fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x374fd4: 0xb4c30028  sdr         $v1, 0x28($a2)
    ctx->pc = 0x374fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x374fd8: 0xb0c50037  sdl         $a1, 0x37($a2)
    ctx->pc = 0x374fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x374fdc: 0xb4c50030  sdr         $a1, 0x30($a2)
    ctx->pc = 0x374fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x374fe0: 0xb0c7003f  sdl         $a3, 0x3F($a2)
    ctx->pc = 0x374fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x374fe4: 0xb4c70038  sdr         $a3, 0x38($a2)
    ctx->pc = 0x374fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x374fe8: 0x6a220027  ldl         $v0, 0x27($s1)
    ctx->pc = 0x374fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x374fec: 0x6e220020  ldr         $v0, 0x20($s1)
    ctx->pc = 0x374fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x374ff0: 0x6a23002f  ldl         $v1, 0x2F($s1)
    ctx->pc = 0x374ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x374ff4: 0x6e230028  ldr         $v1, 0x28($s1)
    ctx->pc = 0x374ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x374ff8: 0xb0c20047  sdl         $v0, 0x47($a2)
    ctx->pc = 0x374ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x374ffc: 0xb4c20040  sdr         $v0, 0x40($a2)
    ctx->pc = 0x374ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375000: 0xb0c3004f  sdl         $v1, 0x4F($a2)
    ctx->pc = 0x375000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375004: 0xb4c30048  sdr         $v1, 0x48($a2)
    ctx->pc = 0x375004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375008: 0x84c20020  lh          $v0, 0x20($a2)
    ctx->pc = 0x375008u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x37500c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37500cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x375010: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x375010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x375014: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x375014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x375018: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x375018u;
    {
        const bool branch_taken_0x375018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375018u;
        // 0x37501c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x375018) {
            ctx->pc = 0x375038u;
            goto label_375038;
        }
    }
    ctx->pc = 0x375020u;
    // 0x375020: 0x94c30048  lhu         $v1, 0x48($a2)
    ctx->pc = 0x375020u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x375024: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x375024u;
    {
        const bool branch_taken_0x375024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x375028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375024u;
        // 0x375028: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375024) {
            ctx->pc = 0x37503Cu;
            goto label_37503c;
        }
    }
    ctx->pc = 0x37502Cu;
    // 0x37502c: 0x90c2000d  lbu         $v0, 0xD($a2)
    ctx->pc = 0x37502cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 13)));
    // 0x375030: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x375030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x375034: 0xa0c2000d  sb          $v0, 0xD($a2)
    ctx->pc = 0x375034u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 13), (uint8_t)GPR_U32(ctx, 2));
label_375038:
    // 0x375038: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x375038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37503c:
    // 0x37503c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37503cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x375040: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x375040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375048: 0x3e00008  jr          $ra
    ctx->pc = 0x375048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375048u;
        // 0x37504c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375050u;
}
