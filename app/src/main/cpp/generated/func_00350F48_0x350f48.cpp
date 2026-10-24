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

// Function: func_00350F48
// Address: 0x350f48 - 0x351108
void func_00350F48_0x350f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00350F48_0x350f48");
#endif

    switch (ctx->pc) {
        case 0x350fecu: goto label_350fec;
        case 0x351000u: goto label_351000;
        case 0x351050u: goto label_351050;
        case 0x3510ccu: goto label_3510cc;
        default: break;
    }

    ctx->pc = 0x350f48u;

    // 0x350f48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x350f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x350f4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x350f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350f50: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x350f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x350f54: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x350f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350f58: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x350f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x350f5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x350f5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350f60: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x350f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x350f64: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x350f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x350f68: 0x12200060  beqz        $s1, . + 4 + (0x60 << 2)
    ctx->pc = 0x350F68u;
    {
        const bool branch_taken_0x350f68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x350F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350F68u;
        // 0x350f6c: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350f68) {
            ctx->pc = 0x3510ECu;
            goto label_3510ec;
        }
    }
    ctx->pc = 0x350F70u;
    // 0x350f70: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x350f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x350f74: 0x5224005e  beql        $s1, $a0, . + 4 + (0x5E << 2)
    ctx->pc = 0x350F74u;
    {
        const bool branch_taken_0x350f74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        if (branch_taken_0x350f74) {
            ctx->pc = 0x350F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350F74u;
            // 0x350f78: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3510F0u;
            goto label_3510f0;
        }
    }
    ctx->pc = 0x350F7Cu;
    // 0x350f7c: 0x91102b  sltu        $v0, $a0, $s1
    ctx->pc = 0x350f7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x350f80: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x350F80u;
    {
        const bool branch_taken_0x350f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350F80u;
        // 0x350f84: 0x224102b  sltu        $v0, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x350f80) {
            ctx->pc = 0x350F9Cu;
            goto label_350f9c;
        }
    }
    ctx->pc = 0x350F88u;
    // 0x350f88: 0x2241823  subu        $v1, $s1, $a0
    ctx->pc = 0x350f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x350f8c: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x350f8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x350f90: 0x14600056  bnez        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x350F90u;
    {
        const bool branch_taken_0x350f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x350F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350F90u;
        // 0x350f94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350f90) {
            ctx->pc = 0x3510ECu;
            goto label_3510ec;
        }
    }
    ctx->pc = 0x350F98u;
    // 0x350f98: 0x224102b  sltu        $v0, $s1, $a0
    ctx->pc = 0x350f98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_350f9c:
    // 0x350f9c: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x350F9Cu;
    {
        const bool branch_taken_0x350f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350f9c) {
            ctx->pc = 0x350FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350F9Cu;
            // 0x350fa0: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351008u;
            goto label_351008;
        }
    }
    ctx->pc = 0x350FA4u;
    // 0x350fa4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x350fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x350fa8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x350fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x350fac: 0x222182b  sltu        $v1, $s1, $v0
    ctx->pc = 0x350facu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x350fb0: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x350FB0u;
    {
        const bool branch_taken_0x350fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x350fb0) {
            ctx->pc = 0x350FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350FB0u;
            // 0x350fb4: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351008u;
            goto label_351008;
        }
    }
    ctx->pc = 0x350FB8u;
    // 0x350fb8: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x350fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x350fbc: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x350fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x350fc0: 0x1a00001d  blez        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x350FC0u;
    {
        const bool branch_taken_0x350fc0 = (GPR_S64(ctx, 16) <= 0);
        if (branch_taken_0x350fc0) {
            ctx->pc = 0x351038u;
            goto label_351038;
        }
    }
    ctx->pc = 0x350FC8u;
    // 0x350fc8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x350fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x350fcc: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x350fccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x350fd0: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x350FD0u;
    {
        const bool branch_taken_0x350fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x350FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350FD0u;
        // 0x350fd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350fd0) {
            ctx->pc = 0x3510ECu;
            goto label_3510ec;
        }
    }
    ctx->pc = 0x350FD8u;
    // 0x350fd8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x350fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x350fdc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x350fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350fe0: 0xd03023  subu        $a2, $a2, $s0
    ctx->pc = 0x350fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x350fe4: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x350FE4u;
    SET_GPR_U32(ctx, 31, 0x350FECu);
    ctx->pc = 0x350FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350FE4u;
    // 0x350fe8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x350FE4u, 0x350FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350FECu;
label_350fec:
    // 0x350fec: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x350fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x350ff0: 0x3b02023  subu        $a0, $sp, $s0
    ctx->pc = 0x350ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x350ff4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x350ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350ff8: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x350FF8u;
    SET_GPR_U32(ctx, 31, 0x351000u);
    ctx->pc = 0x350FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350FF8u;
    // 0x350ffc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x350FF8u, 0x351000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351000u;
label_351000:
    // 0x351000: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x351000u;
    {
        const bool branch_taken_0x351000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351000) {
            ctx->pc = 0x351048u;
            goto label_351048;
        }
    }
    ctx->pc = 0x351008u;
label_351008:
    // 0x351008: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x351008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x35100c: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x35100Cu;
    {
        const bool branch_taken_0x35100c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x351010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35100Cu;
        // 0x351010: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35100c) {
            ctx->pc = 0x3510ECu;
            goto label_3510ec;
        }
    }
    ctx->pc = 0x351014u;
    // 0x351014: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x351014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x351018: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x351018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35101c: 0x222182b  sltu        $v1, $s1, $v0
    ctx->pc = 0x35101cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x351020: 0x50600032  beql        $v1, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x351020u;
    {
        const bool branch_taken_0x351020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x351020) {
            ctx->pc = 0x351024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351020u;
            // 0x351024: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3510ECu;
            goto label_3510ec;
        }
    }
    ctx->pc = 0x351028u;
    // 0x351028: 0x2221823  subu        $v1, $s1, $v0
    ctx->pc = 0x351028u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x35102c: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x35102cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x351030: 0x1e00002e  bgtz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x351030u;
    {
        const bool branch_taken_0x351030 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x351034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351030u;
        // 0x351034: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351030) {
            ctx->pc = 0x3510ECu;
            goto label_3510ec;
        }
    }
    ctx->pc = 0x351038u;
label_351038:
    // 0x351038: 0x8a220003  lwl         $v0, 0x3($s1)
    ctx->pc = 0x351038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x35103c: 0x9a220000  lwr         $v0, 0x0($s1)
    ctx->pc = 0x35103cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x351040: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x351040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x351044: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x351044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_351048:
    // 0x351048: 0xc0da476  jal         func_3691D8
    ctx->pc = 0x351048u;
    SET_GPR_U32(ctx, 31, 0x351050u);
    ctx->pc = 0x35104Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351048u;
    // 0x35104c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3691D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3691D8u, 0x351048u, 0x351050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351050u;
label_351050:
    // 0x351050: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x351050u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351054: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x351054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x351058: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x351058u;
    {
        const bool branch_taken_0x351058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351058u;
        // 0x35105c: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x351058) {
            ctx->pc = 0x351098u;
            goto label_351098;
        }
    }
    ctx->pc = 0x351060u;
    // 0x351060: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x351060u;
    {
        const bool branch_taken_0x351060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351060u;
        // 0x351064: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351060) {
            ctx->pc = 0x351080u;
            goto label_351080;
        }
    }
    ctx->pc = 0x351068u;
    // 0x351068: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x351068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35106c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x35106Cu;
    {
        const bool branch_taken_0x35106c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x351070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35106Cu;
        // 0x351070: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35106c) {
            ctx->pc = 0x3510B0u;
            goto label_3510b0;
        }
    }
    ctx->pc = 0x351074u;
    // 0x351074: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x351074u;
    {
        const bool branch_taken_0x351074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351074u;
        // 0x351078: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351074) {
            ctx->pc = 0x3510F0u;
            goto label_3510f0;
        }
    }
    ctx->pc = 0x35107Cu;
    // 0x35107c: 0x0  nop
    ctx->pc = 0x35107cu;
    // NOP
label_351080:
    // 0x351080: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x351080u;
    {
        const bool branch_taken_0x351080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x351084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351080u;
        // 0x351084: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351080) {
            ctx->pc = 0x3510E8u;
            goto label_3510e8;
        }
    }
    ctx->pc = 0x351088u;
    // 0x351088: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x351088u;
    {
        const bool branch_taken_0x351088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351088u;
        // 0x35108c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351088) {
            ctx->pc = 0x3510E8u;
            goto label_3510e8;
        }
    }
    ctx->pc = 0x351090u;
    // 0x351090: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x351090u;
    {
        const bool branch_taken_0x351090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351090u;
        // 0x351094: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351090) {
            ctx->pc = 0x3510F0u;
            goto label_3510f0;
        }
    }
    ctx->pc = 0x351098u;
label_351098:
    // 0x351098: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x351098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35109c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x35109cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x3510a0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3510A0u;
    {
        const bool branch_taken_0x3510a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3510A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3510A0u;
        // 0x3510a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3510a0) {
            ctx->pc = 0x3510E8u;
            goto label_3510e8;
        }
    }
    ctx->pc = 0x3510A8u;
    // 0x3510a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3510A8u;
    {
        const bool branch_taken_0x3510a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3510ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3510A8u;
        // 0x3510ac: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3510a8) {
            ctx->pc = 0x3510C4u;
            goto label_3510c4;
        }
    }
    ctx->pc = 0x3510B0u;
label_3510b0:
    // 0x3510b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3510b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3510b4: 0x30420048  andi        $v0, $v0, 0x48
    ctx->pc = 0x3510b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)72);
    // 0x3510b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3510B8u;
    {
        const bool branch_taken_0x3510b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3510BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3510B8u;
        // 0x3510bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3510b8) {
            ctx->pc = 0x3510E8u;
            goto label_3510e8;
        }
    }
    ctx->pc = 0x3510C0u;
    // 0x3510c0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3510c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3510c4:
    // 0x3510c4: 0xc0d447e  jal         func_3511F8
    ctx->pc = 0x3510C4u;
    SET_GPR_U32(ctx, 31, 0x3510CCu);
    ctx->pc = 0x3510C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3510C4u;
    // 0x3510c8: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3511F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3511F8u, 0x3510C4u, 0x3510CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3510CCu;
label_3510cc:
    // 0x3510cc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3510CCu;
    {
        const bool branch_taken_0x3510cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3510cc) {
            ctx->pc = 0x3510D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3510CCu;
            // 0x3510d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3510ECu;
            goto label_3510ec;
        }
    }
    ctx->pc = 0x3510D4u;
    // 0x3510d4: 0x54510005  bnel        $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3510D4u;
    {
        const bool branch_taken_0x3510d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x3510d4) {
            ctx->pc = 0x3510D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3510D4u;
            // 0x3510d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3510ECu;
            goto label_3510ec;
        }
    }
    ctx->pc = 0x3510DCu;
    // 0x3510dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3510DCu;
    {
        const bool branch_taken_0x3510dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3510E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3510DCu;
        // 0x3510e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3510dc) {
            ctx->pc = 0x3510ECu;
            goto label_3510ec;
        }
    }
    ctx->pc = 0x3510E4u;
    // 0x3510e4: 0x0  nop
    ctx->pc = 0x3510e4u;
    // NOP
label_3510e8:
    // 0x3510e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3510e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3510ec:
    // 0x3510ec: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3510ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3510f0:
    // 0x3510f0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3510f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3510f4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3510f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3510f8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3510f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3510fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3510FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3510FCu;
        // 0x351100: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3510FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351104u;
    // 0x351104: 0x0  nop
    ctx->pc = 0x351104u;
    // NOP
    ctx->pc = 0x351108u;
}
