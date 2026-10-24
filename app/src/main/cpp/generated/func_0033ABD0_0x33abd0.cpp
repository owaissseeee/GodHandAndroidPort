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

// Function: func_0033ABD0
// Address: 0x33abd0 - 0x33aca0
void func_0033ABD0_0x33abd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033ABD0_0x33abd0");
#endif

    switch (ctx->pc) {
        case 0x33abd0u: goto label_33abd0;
        case 0x33abd4u: goto label_33abd4;
        case 0x33abd8u: goto label_33abd8;
        case 0x33abdcu: goto label_33abdc;
        case 0x33abe0u: goto label_33abe0;
        case 0x33abe4u: goto label_33abe4;
        case 0x33abe8u: goto label_33abe8;
        case 0x33abecu: goto label_33abec;
        case 0x33abf0u: goto label_33abf0;
        case 0x33abf4u: goto label_33abf4;
        case 0x33abf8u: goto label_33abf8;
        case 0x33abfcu: goto label_33abfc;
        case 0x33ac00u: goto label_33ac00;
        case 0x33ac04u: goto label_33ac04;
        case 0x33ac08u: goto label_33ac08;
        case 0x33ac0cu: goto label_33ac0c;
        case 0x33ac10u: goto label_33ac10;
        case 0x33ac14u: goto label_33ac14;
        case 0x33ac18u: goto label_33ac18;
        case 0x33ac1cu: goto label_33ac1c;
        case 0x33ac20u: goto label_33ac20;
        case 0x33ac24u: goto label_33ac24;
        case 0x33ac28u: goto label_33ac28;
        case 0x33ac2cu: goto label_33ac2c;
        case 0x33ac30u: goto label_33ac30;
        case 0x33ac34u: goto label_33ac34;
        case 0x33ac38u: goto label_33ac38;
        case 0x33ac3cu: goto label_33ac3c;
        case 0x33ac40u: goto label_33ac40;
        case 0x33ac44u: goto label_33ac44;
        case 0x33ac48u: goto label_33ac48;
        case 0x33ac4cu: goto label_33ac4c;
        case 0x33ac50u: goto label_33ac50;
        case 0x33ac54u: goto label_33ac54;
        case 0x33ac58u: goto label_33ac58;
        case 0x33ac5cu: goto label_33ac5c;
        case 0x33ac60u: goto label_33ac60;
        case 0x33ac64u: goto label_33ac64;
        case 0x33ac68u: goto label_33ac68;
        case 0x33ac6cu: goto label_33ac6c;
        case 0x33ac70u: goto label_33ac70;
        case 0x33ac74u: goto label_33ac74;
        case 0x33ac78u: goto label_33ac78;
        case 0x33ac7cu: goto label_33ac7c;
        case 0x33ac80u: goto label_33ac80;
        case 0x33ac84u: goto label_33ac84;
        case 0x33ac88u: goto label_33ac88;
        case 0x33ac8cu: goto label_33ac8c;
        case 0x33ac90u: goto label_33ac90;
        case 0x33ac94u: goto label_33ac94;
        case 0x33ac98u: goto label_33ac98;
        case 0x33ac9cu: goto label_33ac9c;
        default: break;
    }

    ctx->pc = 0x33abd0u;

label_33abd0:
    // 0x33abd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33abd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33abd4:
    // 0x33abd4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_33abd8:
    if (ctx->pc == 0x33ABD8u) {
        ctx->pc = 0x33ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ABD4u;
        // 0x33abd8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ABDCu;
        goto label_33abdc;
    }
    ctx->pc = 0x33ABD4u;
    {
        const bool branch_taken_0x33abd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ABD4u;
        // 0x33abd8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33abd4) {
            ctx->pc = 0x33ABF0u;
            goto label_33abf0;
        }
    }
    ctx->pc = 0x33ABDCu;
label_33abdc:
    // 0x33abdc: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33abdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_33abe0:
    // 0x33abe0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x33abe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_33abe4:
    // 0x33abe4: 0x24845d08  addiu       $a0, $a0, 0x5D08
    ctx->pc = 0x33abe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23816));
label_33abe8:
    // 0x33abe8: 0x10000008  b           . + 4 + (0x8 << 2)
label_33abec:
    if (ctx->pc == 0x33ABECu) {
        ctx->pc = 0x33ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ABE8u;
        // 0x33abec: 0x24a55bd8  addiu       $a1, $a1, 0x5BD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ABF0u;
        goto label_33abf0;
    }
    ctx->pc = 0x33ABE8u;
    {
        const bool branch_taken_0x33abe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ABE8u;
        // 0x33abec: 0x24a55bd8  addiu       $a1, $a1, 0x5BD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33abe8) {
            ctx->pc = 0x33AC0Cu;
            goto label_33ac0c;
        }
    }
    ctx->pc = 0x33ABF0u;
label_33abf0:
    // 0x33abf0: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x33abf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_33abf4:
    // 0x33abf4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_33abf8:
    if (ctx->pc == 0x33ABF8u) {
        ctx->pc = 0x33ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ABF4u;
        // 0x33abf8: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ABFCu;
        goto label_33abfc;
    }
    ctx->pc = 0x33ABF4u;
    {
        const bool branch_taken_0x33abf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33abf4) {
            ctx->pc = 0x33ABF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33ABF4u;
            // 0x33abf8: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AC20u;
            goto label_33ac20;
        }
    }
    ctx->pc = 0x33ABFCu;
label_33abfc:
    // 0x33abfc: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33abfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_33ac00:
    // 0x33ac00: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x33ac00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_33ac04:
    // 0x33ac04: 0x24845d18  addiu       $a0, $a0, 0x5D18
    ctx->pc = 0x33ac04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23832));
label_33ac08:
    // 0x33ac08: 0x24a55c08  addiu       $a1, $a1, 0x5C08
    ctx->pc = 0x33ac08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23560));
label_33ac0c:
    // 0x33ac0c: 0xc0ce812  jal         func_33A048
label_33ac10:
    if (ctx->pc == 0x33AC10u) {
        ctx->pc = 0x33AC14u;
        goto label_33ac14;
    }
    ctx->pc = 0x33AC0Cu;
    SET_GPR_U32(ctx, 31, 0x33AC14u);
    ctx->pc = 0x33A048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A048u, 0x33AC0Cu, 0x33AC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AC14u;
label_33ac14:
    // 0x33ac14: 0x1000001d  b           . + 4 + (0x1D << 2)
label_33ac18:
    if (ctx->pc == 0x33AC18u) {
        ctx->pc = 0x33AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC14u;
        // 0x33ac18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AC1Cu;
        goto label_33ac1c;
    }
    ctx->pc = 0x33AC14u;
    {
        const bool branch_taken_0x33ac14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC14u;
        // 0x33ac18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ac14) {
            ctx->pc = 0x33AC8Cu;
            goto label_33ac8c;
        }
    }
    ctx->pc = 0x33AC1Cu;
label_33ac1c:
    // 0x33ac1c: 0x0  nop
    ctx->pc = 0x33ac1cu;
    // NOP
label_33ac20:
    // 0x33ac20: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_33ac24:
    if (ctx->pc == 0x33AC24u) {
        ctx->pc = 0x33AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC20u;
        // 0x33ac24: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AC28u;
        goto label_33ac28;
    }
    ctx->pc = 0x33AC20u;
    {
        const bool branch_taken_0x33ac20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC20u;
        // 0x33ac24: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ac20) {
            ctx->pc = 0x33AC48u;
            goto label_33ac48;
        }
    }
    ctx->pc = 0x33AC28u;
label_33ac28:
    // 0x33ac28: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x33ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_33ac2c:
    // 0x33ac2c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_33ac30:
    if (ctx->pc == 0x33AC30u) {
        ctx->pc = 0x33AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC2Cu;
        // 0x33ac30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AC34u;
        goto label_33ac34;
    }
    ctx->pc = 0x33AC2Cu;
    {
        const bool branch_taken_0x33ac2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ac2c) {
            ctx->pc = 0x33AC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AC2Cu;
            // 0x33ac30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AC8Cu;
            goto label_33ac8c;
        }
    }
    ctx->pc = 0x33AC34u;
label_33ac34:
    // 0x33ac34: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x33ac34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_33ac38:
    // 0x33ac38: 0x40f809  jalr        $v0
label_33ac3c:
    if (ctx->pc == 0x33AC3Cu) {
        ctx->pc = 0x33AC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC38u;
        // 0x33ac3c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AC40u;
        goto label_33ac40;
    }
    ctx->pc = 0x33AC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33AC40u);
        ctx->pc = 0x33AC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC38u;
        // 0x33ac3c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AC38u, 0x33AC40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33AC40u;
label_33ac40:
    // 0x33ac40: 0x10000012  b           . + 4 + (0x12 << 2)
label_33ac44:
    if (ctx->pc == 0x33AC44u) {
        ctx->pc = 0x33AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC40u;
        // 0x33ac44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AC48u;
        goto label_33ac48;
    }
    ctx->pc = 0x33AC40u;
    {
        const bool branch_taken_0x33ac40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC40u;
        // 0x33ac44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ac40) {
            ctx->pc = 0x33AC8Cu;
            goto label_33ac8c;
        }
    }
    ctx->pc = 0x33AC48u;
label_33ac48:
    // 0x33ac48: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x33ac48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_33ac4c:
    // 0x33ac4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33ac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33ac50:
    // 0x33ac50: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x33ac50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_33ac54:
    // 0x33ac54: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_33ac58:
    if (ctx->pc == 0x33AC58u) {
        ctx->pc = 0x33AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC54u;
        // 0x33ac58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AC5Cu;
        goto label_33ac5c;
    }
    ctx->pc = 0x33AC54u;
    {
        const bool branch_taken_0x33ac54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC54u;
        // 0x33ac58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ac54) {
            ctx->pc = 0x33AC8Cu;
            goto label_33ac8c;
        }
    }
    ctx->pc = 0x33AC5Cu;
label_33ac5c:
    // 0x33ac5c: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x33ac5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_33ac60:
    // 0x33ac60: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x33ac60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_33ac64:
    // 0x33ac64: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x33ac64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_33ac68:
    // 0x33ac68: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x33ac68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_33ac6c:
    // 0x33ac6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33ac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33ac70:
    // 0x33ac70: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x33ac70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_33ac74:
    // 0x33ac74: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x33ac74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_33ac78:
    // 0x33ac78: 0x80820005  lb          $v0, 0x5($a0)
    ctx->pc = 0x33ac78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
label_33ac7c:
    // 0x33ac7c: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
label_33ac80:
    if (ctx->pc == 0x33AC80u) {
        ctx->pc = 0x33AC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC7Cu;
        // 0x33ac80: 0xa61026  xor         $v0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AC84u;
        goto label_33ac84;
    }
    ctx->pc = 0x33AC7Cu;
    {
        const bool branch_taken_0x33ac7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33ac7c) {
            ctx->pc = 0x33AC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AC7Cu;
            // 0x33ac80: 0xa61026  xor         $v0, $a1, $a2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AC88u;
            goto label_33ac88;
        }
    }
    ctx->pc = 0x33AC84u;
label_33ac84:
    // 0x33ac84: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x33ac84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_33ac88:
    // 0x33ac88: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x33ac88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_33ac8c:
    // 0x33ac8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33ac8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33ac90:
    // 0x33ac90: 0x3e00008  jr          $ra
label_33ac94:
    if (ctx->pc == 0x33AC94u) {
        ctx->pc = 0x33AC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC90u;
        // 0x33ac94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AC98u;
        goto label_33ac98;
    }
    ctx->pc = 0x33AC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC90u;
        // 0x33ac94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AC98u;
label_33ac98:
    // 0x33ac98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33ac98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_33ac9c:
    // 0x33ac9c: 0x0  nop
    ctx->pc = 0x33ac9cu;
    // NOP
    ctx->pc = 0x33aca0u;
}
