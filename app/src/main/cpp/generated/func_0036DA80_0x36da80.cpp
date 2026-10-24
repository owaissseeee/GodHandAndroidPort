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

// Function: func_0036DA80
// Address: 0x36da80 - 0x36db80
void func_0036DA80_0x36da80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036DA80_0x36da80");
#endif

    switch (ctx->pc) {
        case 0x36da9cu: goto label_36da9c;
        case 0x36dad8u: goto label_36dad8;
        case 0x36db38u: goto label_36db38;
        default: break;
    }

    ctx->pc = 0x36da80u;

    // 0x36da80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36da80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36da84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36da84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36da88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36da88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36da8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36da8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36da90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36da90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36da94: 0xc0db5a2  jal         func_36D688
    ctx->pc = 0x36DA94u;
    SET_GPR_U32(ctx, 31, 0x36DA9Cu);
    ctx->pc = 0x36DA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DA94u;
    // 0x36da98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D688u, 0x36DA94u, 0x36DA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DA9Cu;
label_36da9c:
    // 0x36da9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36DA9Cu;
    {
        const bool branch_taken_0x36da9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DA9Cu;
        // 0x36daa0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36da9c) {
            ctx->pc = 0x36DAC0u;
            goto label_36dac0;
        }
    }
    ctx->pc = 0x36DAA4u;
    // 0x36daa4: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x36daa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x36daa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36daa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36daac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36daacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36dab0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36dab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36dab4: 0x34a5020c  ori         $a1, $a1, 0x20C
    ctx->pc = 0x36dab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)524);
    // 0x36dab8: 0x80db63a  j           func_36D8E8
    ctx->pc = 0x36DAB8u;
    ctx->pc = 0x36DABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DAB8u;
    // 0x36dabc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D8E8u, 0x36DAB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36DAC0u;
label_36dac0:
    // 0x36dac0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36dac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dac4: 0x26030058  addiu       $v1, $s0, 0x58
    ctx->pc = 0x36dac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x36dac8: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x36dac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x36dacc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x36daccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x36dad0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x36DAD0u;
    {
        const bool branch_taken_0x36dad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DAD0u;
        // 0x36dad4: 0x260400d8  addiu       $a0, $s0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36dad0) {
            ctx->pc = 0x36DB38u;
            goto label_36db38;
        }
    }
    ctx->pc = 0x36DAD8u;
label_36dad8:
    // 0x36dad8: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x36dad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x36dadc: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x36dadcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x36dae0: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x36dae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x36dae4: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x36dae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x36dae8: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x36dae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x36daec: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x36daecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x36daf0: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x36daf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x36daf4: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x36daf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x36daf8: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x36daf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36dafc: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x36dafcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36db00: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x36db00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36db04: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x36db04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36db08: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x36db08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36db0c: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x36db0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36db10: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x36db10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36db14: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x36db14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36db18: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x36db18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x36db1c: 0x0  nop
    ctx->pc = 0x36db1cu;
    // NOP
    // 0x36db20: 0x0  nop
    ctx->pc = 0x36db20u;
    // NOP
    // 0x36db24: 0x1464ffec  bne         $v1, $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x36DB24u;
    {
        const bool branch_taken_0x36db24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x36DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DB24u;
        // 0x36db28: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36db24) {
            ctx->pc = 0x36DAD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36dad8;
        }
    }
    ctx->pc = 0x36DB2Cu;
    // 0x36db2c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x36DB2Cu;
    {
        const bool branch_taken_0x36db2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DB2Cu;
        // 0x36db30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36db2c) {
            ctx->pc = 0x36DB70u;
            goto label_36db70;
        }
    }
    ctx->pc = 0x36DB34u;
    // 0x36db34: 0x0  nop
    ctx->pc = 0x36db34u;
    // NOP
label_36db38:
    // 0x36db38: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x36db38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36db3c: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x36db3cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x36db40: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x36db40u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x36db44: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x36db44u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x36db48: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x36db48u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x36db4c: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x36db4cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x36db50: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x36db50u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x36db54: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x36db54u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x36db58: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x36db58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x36db5c: 0x0  nop
    ctx->pc = 0x36db5cu;
    // NOP
    // 0x36db60: 0x0  nop
    ctx->pc = 0x36db60u;
    // NOP
    // 0x36db64: 0x1464fff4  bne         $v1, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x36DB64u;
    {
        const bool branch_taken_0x36db64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x36DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DB64u;
        // 0x36db68: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36db64) {
            ctx->pc = 0x36DB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36db38;
        }
    }
    ctx->pc = 0x36DB6Cu;
    // 0x36db6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36db6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36db70:
    // 0x36db70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36db70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36db74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36db74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36db78: 0x3e00008  jr          $ra
    ctx->pc = 0x36DB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DB78u;
        // 0x36db7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DB80u;
}
