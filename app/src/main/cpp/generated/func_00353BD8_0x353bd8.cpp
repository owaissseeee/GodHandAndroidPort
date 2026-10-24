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

// Function: func_00353BD8
// Address: 0x353bd8 - 0x353ee0
void func_00353BD8_0x353bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00353BD8_0x353bd8");
#endif

    switch (ctx->pc) {
        case 0x353c28u: goto label_353c28;
        case 0x353c60u: goto label_353c60;
        case 0x353cc4u: goto label_353cc4;
        case 0x353d34u: goto label_353d34;
        default: break;
    }

    ctx->pc = 0x353bd8u;

    // 0x353bd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x353bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x353bdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x353bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x353be0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x353be0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353be4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x353be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x353be8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x353be8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353bec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x353becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x353bf0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x353bf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353bf4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x353bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x353bf8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x353bf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353bfc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x353bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x353c00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x353c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x353c04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x353c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x353c08: 0x8e701fc0  lw          $s0, 0x1FC0($s3)
    ctx->pc = 0x353c08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8128)));
    // 0x353c0c: 0x8e020168  lw          $v0, 0x168($s0)
    ctx->pc = 0x353c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x353c10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x353C10u;
    {
        const bool branch_taken_0x353c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353C10u;
        // 0x353c14: 0x26750950  addiu       $s5, $s3, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 2384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353c10) {
            ctx->pc = 0x353C20u;
            goto label_353c20;
        }
    }
    ctx->pc = 0x353C18u;
    // 0x353c18: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x353C18u;
    {
        const bool branch_taken_0x353c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353C18u;
        // 0x353c1c: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353c18) {
            ctx->pc = 0x353C40u;
            goto label_353c40;
        }
    }
    ctx->pc = 0x353C20u;
label_353c20:
    // 0x353c20: 0xc0d556a  jal         func_3555A8
    ctx->pc = 0x353C20u;
    SET_GPR_U32(ctx, 31, 0x353C28u);
    ctx->pc = 0x3555A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3555A8u, 0x353C20u, 0x353C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353C28u;
label_353c28:
    // 0x353c28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x353C28u;
    {
        const bool branch_taken_0x353c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x353C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353C28u;
        // 0x353c2c: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353c28) {
            ctx->pc = 0x353C40u;
            goto label_353c40;
        }
    }
    ctx->pc = 0x353C30u;
    // 0x353c30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x353c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353c34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x353c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x353c38: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x353C38u;
    {
        const bool branch_taken_0x353c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353C38u;
        // 0x353c3c: 0xaea3002c  sw          $v1, 0x2C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353c38) {
            ctx->pc = 0x353EBCu;
            goto label_353ebc;
        }
    }
    ctx->pc = 0x353C40u;
label_353c40:
    // 0x353c40: 0x8e8a0000  lw          $t2, 0x0($s4)
    ctx->pc = 0x353c40u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x353c44: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x353c44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353c48: 0x2544005c  addiu       $a0, $t2, 0x5C
    ctx->pc = 0x353c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 92));
    // 0x353c4c: 0x2441025  or          $v0, $s2, $a0
    ctx->pc = 0x353c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x353c50: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x353c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x353c54: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x353C54u;
    {
        const bool branch_taken_0x353c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353C54u;
        // 0x353c58: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353c54) {
            ctx->pc = 0x353CC0u;
            goto label_353cc0;
        }
    }
    ctx->pc = 0x353C5Cu;
    // 0x353c5c: 0x26420080  addiu       $v0, $s2, 0x80
    ctx->pc = 0x353c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_353c60:
    // 0x353c60: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x353c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x353c64: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x353c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x353c68: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x353c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x353c6c: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x353c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x353c70: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x353c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x353c74: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x353c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x353c78: 0x6869001f  ldl         $t1, 0x1F($v1)
    ctx->pc = 0x353c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x353c7c: 0x6c690018  ldr         $t1, 0x18($v1)
    ctx->pc = 0x353c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x353c80: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x353c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353c84: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x353c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353c88: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x353c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353c8c: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x353c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353c90: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x353c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353c94: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x353c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353c98: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x353c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353c9c: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x353c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353ca0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x353ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x353ca4: 0x0  nop
    ctx->pc = 0x353ca4u;
    // NOP
    // 0x353ca8: 0x0  nop
    ctx->pc = 0x353ca8u;
    // NOP
    // 0x353cac: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x353CACu;
    {
        const bool branch_taken_0x353cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x353CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353CACu;
        // 0x353cb0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353cac) {
            ctx->pc = 0x353C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353c60;
        }
    }
    ctx->pc = 0x353CB4u;
    // 0x353cb4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x353CB4u;
    {
        const bool branch_taken_0x353cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353CB4u;
        // 0x353cb8: 0xde021120  ld          $v0, 0x1120($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353cb4) {
            ctx->pc = 0x353CFCu;
            goto label_353cfc;
        }
    }
    ctx->pc = 0x353CBCu;
    // 0x353cbc: 0x0  nop
    ctx->pc = 0x353cbcu;
    // NOP
label_353cc0:
    // 0x353cc0: 0x26420080  addiu       $v0, $s2, 0x80
    ctx->pc = 0x353cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_353cc4:
    // 0x353cc4: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x353cc4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x353cc8: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x353cc8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x353ccc: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x353cccu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x353cd0: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x353cd0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x353cd4: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x353cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x353cd8: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x353cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x353cdc: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x353cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x353ce0: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x353ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x353ce4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x353ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x353ce8: 0x0  nop
    ctx->pc = 0x353ce8u;
    // NOP
    // 0x353cec: 0x0  nop
    ctx->pc = 0x353cecu;
    // NOP
    // 0x353cf0: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x353CF0u;
    {
        const bool branch_taken_0x353cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x353CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353CF0u;
        // 0x353cf4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353cf0) {
            ctx->pc = 0x353CC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353cc4;
        }
    }
    ctx->pc = 0x353CF8u;
    // 0x353cf8: 0xde021120  ld          $v0, 0x1120($s0)
    ctx->pc = 0x353cf8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4384)));
label_353cfc:
    // 0x353cfc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x353cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x353d00: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x353d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x353d04: 0x14830042  bne         $a0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x353D04u;
    {
        const bool branch_taken_0x353d04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x353D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353D04u;
        // 0x353d08: 0xfca200e0  sd          $v0, 0xE0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353d04) {
            ctx->pc = 0x353E10u;
            goto label_353e10;
        }
    }
    ctx->pc = 0x353D0Cu;
    // 0x353d0c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x353d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x353d10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x353d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x353d14: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x353d14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x353d18: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x353D18u;
    {
        const bool branch_taken_0x353d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353d18) {
            ctx->pc = 0x353D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353D18u;
            // 0x353d1c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353D4Cu;
            goto label_353d4c;
        }
    }
    ctx->pc = 0x353D20u;
    // 0x353d20: 0x8e020168  lw          $v0, 0x168($s0)
    ctx->pc = 0x353d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x353d24: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x353D24u;
    {
        const bool branch_taken_0x353d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353d24) {
            ctx->pc = 0x353D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353D24u;
            // 0x353d28: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353D4Cu;
            goto label_353d4c;
        }
    }
    ctx->pc = 0x353D2Cu;
    // 0x353d2c: 0xc0d55a8  jal         func_3556A0
    ctx->pc = 0x353D2Cu;
    SET_GPR_U32(ctx, 31, 0x353D34u);
    ctx->pc = 0x353D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353D2Cu;
    // 0x353d30: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3556A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3556A0u, 0x353D2Cu, 0x353D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353D34u;
label_353d34:
    // 0x353d34: 0x8e020164  lw          $v0, 0x164($s0)
    ctx->pc = 0x353d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x353d38: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x353d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x353d3c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x353d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x353d40: 0xae030164  sw          $v1, 0x164($s0)
    ctx->pc = 0x353d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 3));
    // 0x353d44: 0x8e8a0000  lw          $t2, 0x0($s4)
    ctx->pc = 0x353d44u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x353d48: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x353d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_353d4c:
    // 0x353d4c: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x353d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x353d50: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x353d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x353d54: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x353d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x353d58: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x353d58u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x353d5c: 0x2505000f  addiu       $a1, $t0, 0xF
    ctx->pc = 0x353d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x353d60: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x353d60u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x353d64: 0x28a90000  slti        $t1, $a1, 0x0
    ctx->pc = 0x353d64u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x353d68: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x353d68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x353d6c: 0x2508001e  addiu       $t0, $t0, 0x1E
    ctx->pc = 0x353d6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30));
    // 0x353d70: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x353d70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x353d74: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x353d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x353d78: 0x2487003f  addiu       $a3, $a0, 0x3F
    ctx->pc = 0x353d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x353d7c: 0x2484007e  addiu       $a0, $a0, 0x7E
    ctx->pc = 0x353d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 126));
    // 0x353d80: 0x2446003f  addiu       $a2, $v0, 0x3F
    ctx->pc = 0x353d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x353d84: 0x2442007e  addiu       $v0, $v0, 0x7E
    ctx->pc = 0x353d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 126));
    // 0x353d88: 0x28e30000  slti        $v1, $a3, 0x0
    ctx->pc = 0x353d88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x353d8c: 0x109280b  movn        $a1, $t0, $t1
    ctx->pc = 0x353d8cu;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
    // 0x353d90: 0x83380b  movn        $a3, $a0, $v1
    ctx->pc = 0x353d90u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x353d94: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x353d94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x353d98: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x353d98u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x353d9c: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x353d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x353da0: 0x73983  sra         $a3, $a3, 6
    ctx->pc = 0x353da0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 6));
    // 0x353da4: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x353da4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x353da8: 0xe51018  mult        $v0, $a3, $a1
    ctx->pc = 0x353da8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x353dac: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x353dacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x353db0: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x353db0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x353db4: 0x8e040164  lw          $a0, 0x164($s0)
    ctx->pc = 0x353db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x353db8: 0x70c52818  mult1       $a1, $a2, $a1
    ctx->pc = 0x353db8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x353dbc: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x353dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x353dc0: 0x8c680008  lw          $t0, 0x8($v1)
    ctx->pc = 0x353dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x353dc4: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x353dc4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x353dc8: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x353dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x353dcc: 0xa627001e  sh          $a3, 0x1E($s1)
    ctx->pc = 0x353dccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 30), (uint16_t)GPR_U32(ctx, 7));
    // 0x353dd0: 0x1222021  addu        $a0, $t1, $v0
    ctx->pc = 0x353dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x353dd4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x353dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x353dd8: 0x52a40  sll         $a1, $a1, 9
    ctx->pc = 0x353dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 9));
    // 0x353ddc: 0xa626001c  sh          $a2, 0x1C($s1)
    ctx->pc = 0x353ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 6));
    // 0x353de0: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x353de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x353de4: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x353de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x353de8: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x353de8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x353dec: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x353decu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x353df0: 0xa627000e  sh          $a3, 0xE($s1)
    ctx->pc = 0x353df0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 7));
    // 0x353df4: 0xa626000c  sh          $a2, 0xC($s1)
    ctx->pc = 0x353df4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x353df8: 0xae280008  sw          $t0, 0x8($s1)
    ctx->pc = 0x353df8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 8));
    // 0x353dfc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x353dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x353e00: 0xae290018  sw          $t1, 0x18($s1)
    ctx->pc = 0x353e00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 9));
    // 0x353e04: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x353E04u;
    {
        const bool branch_taken_0x353e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353E04u;
        // 0x353e08: 0xae240010  sw          $a0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353e04) {
            ctx->pc = 0x353E9Cu;
            goto label_353e9c;
        }
    }
    ctx->pc = 0x353E0Cu;
    // 0x353e0c: 0x0  nop
    ctx->pc = 0x353e0cu;
    // NOP
label_353e10:
    // 0x353e10: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x353e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x353e14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x353e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x353e18: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x353e18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x353e1c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x353E1Cu;
    {
        const bool branch_taken_0x353e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353E1Cu;
        // 0x353e20: 0x8e020138  lw          $v0, 0x138($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353e1c) {
            ctx->pc = 0x353E44u;
            goto label_353e44;
        }
    }
    ctx->pc = 0x353E24u;
    // 0x353e24: 0x8e03013c  lw          $v1, 0x13C($s0)
    ctx->pc = 0x353e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x353e28: 0xae050164  sw          $a1, 0x164($s0)
    ctx->pc = 0x353e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 5));
    // 0x353e2c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x353e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x353e30: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x353e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x353e34: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x353e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
    // 0x353e38: 0xae03013c  sw          $v1, 0x13C($s0)
    ctx->pc = 0x353e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 3));
    // 0x353e3c: 0x8e8a0000  lw          $t2, 0x0($s4)
    ctx->pc = 0x353e3cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x353e40: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x353e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_353e44:
    // 0x353e44: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x353e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x353e48: 0x8e03013c  lw          $v1, 0x13C($s0)
    ctx->pc = 0x353e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x353e4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x353e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x353e50: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x353e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x353e54: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x353e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x353e58: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x353e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x353e5c: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x353e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x353e60: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x353e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x353e64: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x353e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x353e68: 0xb2250007  sdl         $a1, 0x7($s1)
    ctx->pc = 0x353e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353e6c: 0xb6250000  sdr         $a1, 0x0($s1)
    ctx->pc = 0x353e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353e70: 0xb226000f  sdl         $a2, 0xF($s1)
    ctx->pc = 0x353e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353e74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x353e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x353e78: 0xb6260008  sdr         $a2, 0x8($s1)
    ctx->pc = 0x353e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353e7c: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x353e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x353e80: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x353e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x353e84: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x353e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x353e88: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x353e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x353e8c: 0xb2290017  sdl         $t1, 0x17($s1)
    ctx->pc = 0x353e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353e90: 0xb6290010  sdr         $t1, 0x10($s1)
    ctx->pc = 0x353e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353e94: 0xb222001f  sdl         $v0, 0x1F($s1)
    ctx->pc = 0x353e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353e98: 0xb6220018  sdr         $v0, 0x18($s1)
    ctx->pc = 0x353e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_353e9c:
    // 0x353e9c: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x353e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x353ea0: 0x2544005c  addiu       $a0, $t2, 0x5C
    ctx->pc = 0x353ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 92));
    // 0x353ea4: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x353ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x353ea8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x353ea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353eac: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x353eacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x353eb0: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x353eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x353eb4: 0xae240024  sw          $a0, 0x24($s1)
    ctx->pc = 0x353eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 4));
    // 0x353eb8: 0xaea0002c  sw          $zero, 0x2C($s5)
    ctx->pc = 0x353eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 0));
label_353ebc:
    // 0x353ebc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x353ebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x353ec0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x353ec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x353ec4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x353ec4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353ec8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x353ec8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353ecc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x353eccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x353ed0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x353ed0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x353ed4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x353ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x353ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x353ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353ED8u;
        // 0x353edc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353EE0u;
}
