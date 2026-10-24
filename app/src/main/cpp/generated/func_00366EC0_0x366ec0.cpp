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

// Function: func_00366EC0
// Address: 0x366ec0 - 0x366fe0
void func_00366EC0_0x366ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00366EC0_0x366ec0");
#endif

    switch (ctx->pc) {
        case 0x366ef0u: goto label_366ef0;
        case 0x366f14u: goto label_366f14;
        default: break;
    }

    ctx->pc = 0x366ec0u;

    // 0x366ec0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x366ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x366ec4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x366ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x366ec8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x366ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x366ecc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x366eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ed0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x366ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x366ed4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x366ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ed8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x366ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x366edc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x366edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ee0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x366ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x366ee4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x366ee4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ee8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x366ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x366eec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x366eecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_366ef0:
    // 0x366ef0: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x366ef0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x366ef4: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x366EF4u;
    {
        const bool branch_taken_0x366ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x366ef4) {
            ctx->pc = 0x366EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x366EF4u;
            // 0x366ef8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x366F44u;
            goto label_366f44;
        }
    }
    ctx->pc = 0x366EFCu;
    // 0x366efc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x366efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366f00: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366f04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x366f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366f08: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x366f08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366f0c: 0xc0d9bf8  jal         func_366FE0
    ctx->pc = 0x366F0Cu;
    SET_GPR_U32(ctx, 31, 0x366F14u);
    ctx->pc = 0x366F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366F0Cu;
    // 0x366f10: 0x27a80004  addiu       $t0, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366FE0u, 0x366F0Cu, 0x366F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366F14u;
label_366f14:
    // 0x366f14: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x366f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x366f18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x366f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366f1c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x366f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x366f20: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x366f20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x366f24: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x366f24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x366f28: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x366f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x366f2c: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x366f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x366f30: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x366f30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x366f34: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x366f34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x366f38: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x366F38u;
    {
        const bool branch_taken_0x366f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366F38u;
        // 0x366f3c: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366f38) {
            ctx->pc = 0x366EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366ef0;
        }
    }
    ctx->pc = 0x366F40u;
    // 0x366f40: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x366f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_366f44:
    // 0x366f44: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x366f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x366f48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x366f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x366f4c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x366F4Cu;
    {
        const bool branch_taken_0x366f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x366F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366F4Cu;
        // 0x366f50: 0x26840028  addiu       $a0, $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366f4c) {
            ctx->pc = 0x366FB8u;
            goto label_366fb8;
        }
    }
    ctx->pc = 0x366F54u;
    // 0x366f54: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x366f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x366f58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x366F58u;
    {
        const bool branch_taken_0x366f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366F58u;
        // 0x366f5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366f58) {
            ctx->pc = 0x366F70u;
            goto label_366f70;
        }
    }
    ctx->pc = 0x366F60u;
    // 0x366f60: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x366f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x366f64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x366f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x366f68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x366f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366f6c: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x366f6cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_366f70:
    // 0x366f70: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x366f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x366f74: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x366f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x366f78: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x366f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x366f7c: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x366f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x366f80: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x366f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x366f84: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x366f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x366f88: 0x68860017  ldl         $a2, 0x17($a0)
    ctx->pc = 0x366f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x366f8c: 0x6c860010  ldr         $a2, 0x10($a0)
    ctx->pc = 0x366f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x366f90: 0x6887001f  ldl         $a3, 0x1F($a0)
    ctx->pc = 0x366f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x366f94: 0x6c870018  ldr         $a3, 0x18($a0)
    ctx->pc = 0x366f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x366f98: 0xb043004f  sdl         $v1, 0x4F($v0)
    ctx->pc = 0x366f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x366f9c: 0xb4430048  sdr         $v1, 0x48($v0)
    ctx->pc = 0x366f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x366fa0: 0xb0450057  sdl         $a1, 0x57($v0)
    ctx->pc = 0x366fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x366fa4: 0xb4450050  sdr         $a1, 0x50($v0)
    ctx->pc = 0x366fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x366fa8: 0xb046005f  sdl         $a2, 0x5F($v0)
    ctx->pc = 0x366fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x366fac: 0xb4460058  sdr         $a2, 0x58($v0)
    ctx->pc = 0x366facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x366fb0: 0xb0470067  sdl         $a3, 0x67($v0)
    ctx->pc = 0x366fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x366fb4: 0xb4470060  sdr         $a3, 0x60($v0)
    ctx->pc = 0x366fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_366fb8:
    // 0x366fb8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x366fb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366fbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x366fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366fc0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x366fc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366fc4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x366fc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x366fc8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x366fc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x366fcc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x366fccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x366fd0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x366fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x366FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366FD4u;
        // 0x366fd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366FDCu;
    // 0x366fdc: 0x0  nop
    ctx->pc = 0x366fdcu;
    // NOP
    ctx->pc = 0x366fe0u;
}
