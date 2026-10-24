#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: func_0079BD70
// Address: 0x79bd70 - 0x79bea0
void func_0079BD70_0x79bd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079BD70_0x79bd70");
#endif

    switch (ctx->pc) {
        case 0x79bdb4u: goto label_79bdb4;
        case 0x79be10u: goto label_79be10;
        case 0x79be74u: goto label_79be74;
        default: break;
    }

    ctx->pc = 0x79bd70u;

    // 0x79bd70: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x79bd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x79bd74: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79bd78: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x79bd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x79bd7c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x79bd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79bd80: 0x8c43c804  lw          $v1, -0x37FC($v0)
    ctx->pc = 0x79bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x79C804u));
    // 0x79bd84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79bd84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bd88: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BD88u;
    {
        const bool branch_taken_0x79bd88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x79BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD88u;
        // 0x79bd8c: 0xffbf00e0  sd          $ra, 0xE0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd88) {
            ctx->pc = 0x79BD98u;
            goto label_79bd98;
        }
    }
    ctx->pc = 0x79BD90u;
    // 0x79bd90: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x79BD90u;
    {
        const bool branch_taken_0x79bd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD90u;
        // 0x79bd94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd90) {
            ctx->pc = 0x79BE90u;
            goto label_79be90;
        }
    }
    ctx->pc = 0x79BD98u;
label_79bd98:
    // 0x79bd98: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79bd98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79bd9c: 0x2463c648  addiu       $v1, $v1, -0x39B8
    ctx->pc = 0x79bd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952520));
    // 0x79bda0: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x79bda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x79bda4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x79BDA4u;
    {
        const bool branch_taken_0x79bda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDA4u;
        // 0x79bda8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bda4) {
            ctx->pc = 0x79BE08u;
            goto label_79be08;
        }
    }
    ctx->pc = 0x79BDACu;
    // 0x79bdac: 0x246200c0  addiu       $v0, $v1, 0xC0
    ctx->pc = 0x79bdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x79bdb0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79bdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_79bdb4:
    // 0x79bdb4: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x79bdb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x79bdb8: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x79bdb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x79bdbc: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x79bdbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x79bdc0: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x79bdc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x79bdc4: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x79bdc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x79bdc8: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x79bdc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x79bdcc: 0x6869001f  ldl         $t1, 0x1F($v1)
    ctx->pc = 0x79bdccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x79bdd0: 0x6c690018  ldr         $t1, 0x18($v1)
    ctx->pc = 0x79bdd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x79bdd4: 0xb0a60007  sdl         $a2, 0x7($a1)
    ctx->pc = 0x79bdd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79bdd8: 0xb4a60000  sdr         $a2, 0x0($a1)
    ctx->pc = 0x79bdd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79bddc: 0xb0a7000f  sdl         $a3, 0xF($a1)
    ctx->pc = 0x79bddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79bde0: 0xb4a70008  sdr         $a3, 0x8($a1)
    ctx->pc = 0x79bde0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79bde4: 0xb0a80017  sdl         $t0, 0x17($a1)
    ctx->pc = 0x79bde4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79bde8: 0xb4a80010  sdr         $t0, 0x10($a1)
    ctx->pc = 0x79bde8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79bdec: 0xb0a9001f  sdl         $t1, 0x1F($a1)
    ctx->pc = 0x79bdecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79bdf0: 0xb4a90018  sdr         $t1, 0x18($a1)
    ctx->pc = 0x79bdf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79bdf4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x79bdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x79bdf8: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x79BDF8u;
    {
        const bool branch_taken_0x79bdf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x79BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDF8u;
        // 0x79bdfc: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bdf8) {
            ctx->pc = 0x79BDB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bdb4;
        }
    }
    ctx->pc = 0x79BE00u;
    // 0x79be00: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x79BE00u;
    {
        const bool branch_taken_0x79be00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79be00) {
            ctx->pc = 0x79BE3Cu;
            goto label_79be3c;
        }
    }
    ctx->pc = 0x79BE08u;
label_79be08:
    // 0x79be08: 0x246200c0  addiu       $v0, $v1, 0xC0
    ctx->pc = 0x79be08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x79be0c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79be0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_79be10:
    // 0x79be10: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x79be10u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79be14: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x79be14u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x79be18: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x79be18u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x79be1c: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x79be1cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x79be20: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x79be20u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x79be24: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x79be24u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x79be28: 0xfca80010  sd          $t0, 0x10($a1)
    ctx->pc = 0x79be28u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 8));
    // 0x79be2c: 0xfca90018  sd          $t1, 0x18($a1)
    ctx->pc = 0x79be2cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 9));
    // 0x79be30: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x79be30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x79be34: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x79BE34u;
    {
        const bool branch_taken_0x79be34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x79BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE34u;
        // 0x79be38: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79be34) {
            ctx->pc = 0x79BE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79be10;
        }
    }
    ctx->pc = 0x79BE3Cu;
label_79be3c:
    // 0x79be3c: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x79be3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x79be40: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x79be40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x79be44: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x79be44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x79be48: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x79be48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x79be4c: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x79be4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x79be50: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x79be50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x79be54: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x79be54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79be58: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x79be58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79be5c: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x79be5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79be60: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x79be60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79be64: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x79be64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79be68: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x79be68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x79be6c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x79BE6Cu;
    SET_GPR_U32(ctx, 31, 0x79BE74u);
    ctx->pc = 0x79BE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BE6Cu;
    // 0x79be70: 0xb4a70010  sdr         $a3, 0x10($a1) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x79BE6Cu, 0x79BE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BE74u;
label_79be74:
    // 0x79be74: 0x8e03c804  lw          $v1, -0x37FC($s0)
    ctx->pc = 0x79be74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952964)));
    // 0x79be78: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x79be78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x79be7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79be7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x79be80: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x79be80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x79be84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x79be84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x79be88: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x79be88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x79be8c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x79be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_79be90:
    // 0x79be90: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x79be90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x79be94: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x79be94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79be98: 0x3e00008  jr          $ra
    ctx->pc = 0x79BE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE98u;
        // 0x79be9c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BEA0u;
}
} // namespace gh_r040
