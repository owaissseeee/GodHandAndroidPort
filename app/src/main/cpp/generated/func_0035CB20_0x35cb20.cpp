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

// Function: func_0035CB20
// Address: 0x35cb20 - 0x35cc80
void func_0035CB20_0x35cb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035CB20_0x35cb20");
#endif

    switch (ctx->pc) {
        case 0x35cb48u: goto label_35cb48;
        case 0x35cbacu: goto label_35cbac;
        case 0x35cc38u: goto label_35cc38;
        case 0x35cc4cu: goto label_35cc4c;
        case 0x35cc54u: goto label_35cc54;
        default: break;
    }

    ctx->pc = 0x35cb20u;

    // 0x35cb20: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x35cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x35cb24: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x35cb24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x35cb28: 0x24639990  addiu       $v1, $v1, -0x6670
    ctx->pc = 0x35cb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941072));
    // 0x35cb2c: 0xffb00120  sd          $s0, 0x120($sp)
    ctx->pc = 0x35cb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
    // 0x35cb30: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x35cb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x35cb34: 0xffb10128  sd          $s1, 0x128($sp)
    ctx->pc = 0x35cb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 17));
    // 0x35cb38: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x35cb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x35cb3c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x35CB3Cu;
    {
        const bool branch_taken_0x35cb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CB3Cu;
        // 0x35cb40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cb3c) {
            ctx->pc = 0x35CBA8u;
            goto label_35cba8;
        }
    }
    ctx->pc = 0x35CB44u;
    // 0x35cb44: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x35cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_35cb48:
    // 0x35cb48: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x35cb48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x35cb4c: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x35cb4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x35cb50: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x35cb50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x35cb54: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x35cb54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x35cb58: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x35cb58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x35cb5c: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x35cb5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x35cb60: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x35cb60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x35cb64: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x35cb64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x35cb68: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x35cb68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35cb6c: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x35cb6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35cb70: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x35cb70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35cb74: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x35cb74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35cb78: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x35cb78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35cb7c: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x35cb7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35cb80: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x35cb80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35cb84: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x35cb84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35cb88: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x35cb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x35cb8c: 0x0  nop
    ctx->pc = 0x35cb8cu;
    // NOP
    // 0x35cb90: 0x0  nop
    ctx->pc = 0x35cb90u;
    // NOP
    // 0x35cb94: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x35CB94u;
    {
        const bool branch_taken_0x35cb94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x35CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CB94u;
        // 0x35cb98: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cb94) {
            ctx->pc = 0x35CB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35cb48;
        }
    }
    ctx->pc = 0x35CB9Cu;
    // 0x35cb9c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x35CB9Cu;
    {
        const bool branch_taken_0x35cb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cb9c) {
            ctx->pc = 0x35CBE0u;
            goto label_35cbe0;
        }
    }
    ctx->pc = 0x35CBA4u;
    // 0x35cba4: 0x0  nop
    ctx->pc = 0x35cba4u;
    // NOP
label_35cba8:
    // 0x35cba8: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x35cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_35cbac:
    // 0x35cbac: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x35cbacu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35cbb0: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x35cbb0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x35cbb4: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x35cbb4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x35cbb8: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x35cbb8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x35cbbc: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x35cbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x35cbc0: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x35cbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x35cbc4: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x35cbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x35cbc8: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x35cbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x35cbcc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x35cbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x35cbd0: 0x0  nop
    ctx->pc = 0x35cbd0u;
    // NOP
    // 0x35cbd4: 0x0  nop
    ctx->pc = 0x35cbd4u;
    // NOP
    // 0x35cbd8: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x35CBD8u;
    {
        const bool branch_taken_0x35cbd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x35CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CBD8u;
        // 0x35cbdc: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cbd8) {
            ctx->pc = 0x35CBACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35cbac;
        }
    }
    ctx->pc = 0x35CBE0u;
label_35cbe0:
    // 0x35cbe0: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x35cbe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x35cbe4: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x35cbe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x35cbe8: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x35cbe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x35cbec: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x35cbecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x35cbf0: 0x80670010  lb          $a3, 0x10($v1)
    ctx->pc = 0x35cbf0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x35cbf4: 0x80680011  lb          $t0, 0x11($v1)
    ctx->pc = 0x35cbf4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
    // 0x35cbf8: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x35cbf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35cbfc: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x35cbfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35cc00: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x35cc00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35cc04: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x35cc04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35cc08: 0xa0870010  sb          $a3, 0x10($a0)
    ctx->pc = 0x35cc08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 7));
    // 0x35cc0c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x35cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x35cc10: 0x2451e320  addiu       $s1, $v0, -0x1CE0
    ctx->pc = 0x35cc10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959904));
    // 0x35cc14: 0xa0880011  sb          $t0, 0x11($a0)
    ctx->pc = 0x35cc14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 8));
    // 0x35cc18: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x35cc18u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EE320u));
    // 0x35cc1c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x35CC1Cu;
    {
        const bool branch_taken_0x35cc1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CC1Cu;
        // 0x35cc20: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cc1c) {
            ctx->pc = 0x35CC68u;
            goto label_35cc68;
        }
    }
    ctx->pc = 0x35CC24u;
    // 0x35cc24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35cc24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cc28: 0x8c46e31c  lw          $a2, -0x1CE4($v0)
    ctx->pc = 0x35cc28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959900)));
    // 0x35cc2c: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x35cc2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x35cc30: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x35CC30u;
    SET_GPR_U32(ctx, 31, 0x35CC38u);
    ctx->pc = 0x35CC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CC30u;
    // 0x35cc34: 0x2610e328  addiu       $s0, $s0, -0x1CD8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x35CC30u, 0x35CC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CC38u;
label_35cc38:
    // 0x35cc38: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x35cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x35cc3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x35cc3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cc40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x35cc40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x35cc44: 0xc0e95f1  jal         func_3A57C4
    ctx->pc = 0x35CC44u;
    SET_GPR_U32(ctx, 31, 0x35CC4Cu);
    ctx->pc = 0x35CC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CC44u;
    // 0x35cc48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57C4u, 0x35CC44u, 0x35CC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CC4Cu;
label_35cc4c:
    // 0x35cc4c: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x35CC4Cu;
    SET_GPR_U32(ctx, 31, 0x35CC54u);
    ctx->pc = 0x35CC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CC4Cu;
    // 0x35cc50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x35CC4Cu, 0x35CC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CC54u;
label_35cc54:
    // 0x35cc54: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x35cc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35cc58: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x35cc58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x35cc5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35cc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35cc60: 0xac83e32c  sw          $v1, -0x1CD4($a0)
    ctx->pc = 0x35cc60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EE32Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EE32Cu, _value); } while (0);
    // 0x35cc64: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x35cc64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_35cc68:
    // 0x35cc68: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x35cc68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x35cc6c: 0xdfb10128  ld          $s1, 0x128($sp)
    ctx->pc = 0x35cc6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x35cc70: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x35cc70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x35cc74: 0x3e00008  jr          $ra
    ctx->pc = 0x35CC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CC74u;
        // 0x35cc78: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CC7Cu;
    // 0x35cc7c: 0x0  nop
    ctx->pc = 0x35cc7cu;
    // NOP
    ctx->pc = 0x35cc80u;
}
