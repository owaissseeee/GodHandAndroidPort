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

// Function: func_001E4200
// Address: 0x1e4200 - 0x1e4308
void func_001E4200_0x1e4200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E4200_0x1e4200");
#endif

    switch (ctx->pc) {
        case 0x1e4288u: goto label_1e4288;
        case 0x1e42a8u: goto label_1e42a8;
        case 0x1e42c8u: goto label_1e42c8;
        case 0x1e42e4u: goto label_1e42e4;
        default: break;
    }

    ctx->pc = 0x1e4200u;

    // 0x1e4200: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e4200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e4204: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1e4204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1e4208: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e4208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e420c: 0x30b3ffff  andi        $s3, $a1, 0xFFFF
    ctx->pc = 0x1e420cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1e4210: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1e4210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1e4214: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1e4214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1e4218: 0x2e620005  sltiu       $v0, $s3, 0x5
    ctx->pc = 0x1e4218u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1e421c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e421cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1e4220: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e4220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e4224: 0x246ab8d0  addiu       $t2, $v1, -0x4730
    ctx->pc = 0x1e4224u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949072));
    // 0x1e4228: 0x69450007  ldl         $a1, 0x7($t2)
    ctx->pc = 0x1e4228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1e422c: 0x6d450000  ldr         $a1, 0x0($t2)
    ctx->pc = 0x1e422cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1e4230: 0x6948000f  ldl         $t0, 0xF($t2)
    ctx->pc = 0x1e4230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1e4234: 0x6d480008  ldr         $t0, 0x8($t2)
    ctx->pc = 0x1e4234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1e4238: 0x8d490010  lw          $t1, 0x10($t2)
    ctx->pc = 0x1e4238u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x1e423c: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x1e423cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e4240: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x1e4240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e4244: 0xb3a8000f  sdl         $t0, 0xF($sp)
    ctx->pc = 0x1e4244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e4248: 0xb7a80008  sdr         $t0, 0x8($sp)
    ctx->pc = 0x1e4248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e424c: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x1e424cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x1e4250: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1E4250u;
    {
        const bool branch_taken_0x1e4250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4250u;
        // 0x1e4254: 0x1312c0  sll         $v0, $s3, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4250) {
            ctx->pc = 0x1E42ECu;
            goto label_1e42ec;
        }
    }
    ctx->pc = 0x1E4258u;
    // 0x1e4258: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4258u;
    {
        const bool branch_taken_0x1e4258 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4258u;
        // 0x1e425c: 0xa48204ac  sh          $v0, 0x4AC($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1196), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4258) {
            ctx->pc = 0x1E4268u;
            goto label_1e4268;
        }
    }
    ctx->pc = 0x1E4260u;
    // 0x1e4260: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e4260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e4264: 0xa48204ac  sh          $v0, 0x4AC($a0)
    ctx->pc = 0x1e4264u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1196), (uint16_t)GPR_U32(ctx, 2));
label_1e4268:
    // 0x1e4268: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E4268u;
    {
        const bool branch_taken_0x1e4268 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4268u;
        // 0x1e426c: 0x24920400  addiu       $s2, $a0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4268) {
            ctx->pc = 0x1E42BCu;
            goto label_1e42bc;
        }
    }
    ctx->pc = 0x1E4270u;
    // 0x1e4270: 0x948204ac  lhu         $v0, 0x4AC($a0)
    ctx->pc = 0x1e4270u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1196)));
    // 0x1e4274: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e4274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4278: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1e4278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e427c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1e427cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1e4280: 0xa48204ac  sh          $v0, 0x4AC($a0)
    ctx->pc = 0x1e4280u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1196), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e4284: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e4284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e4288:
    // 0x1e4288: 0x2332826  xor         $a1, $s1, $s3
    ctx->pc = 0x1e4288u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 19));
    // 0x1e428c: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x1e428cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e4290: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e4290u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e4294: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e4294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4298: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1e4298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1e429c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e429cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e42a0: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E42A0u;
    SET_GPR_U32(ctx, 31, 0x1E42A8u);
    ctx->pc = 0x1E42A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E42A0u;
    // 0x1e42a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E42A0u, 0x1E42A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E42A8u;
label_1e42a8:
    // 0x1e42a8: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x1e42a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1e42ac: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E42ACu;
    {
        const bool branch_taken_0x1e42ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e42ac) {
            ctx->pc = 0x1E42B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E42ACu;
            // 0x1e42b0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E4288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4288;
        }
    }
    ctx->pc = 0x1E42B4u;
    // 0x1e42b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E42B4u;
    {
        const bool branch_taken_0x1e42b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E42B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42B4u;
        // 0x1e42b8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e42b4) {
            ctx->pc = 0x1E42F0u;
            goto label_1e42f0;
        }
    }
    ctx->pc = 0x1E42BCu;
label_1e42bc:
    // 0x1e42bc: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1e42bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e42c0: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1e42c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e42c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e42c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e42c8:
    // 0x1e42c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e42c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e42cc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1e42ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1e42d0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e42d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e42d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e42d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e42d8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e42d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e42dc: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E42DCu;
    SET_GPR_U32(ctx, 31, 0x1E42E4u);
    ctx->pc = 0x1E42E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E42DCu;
    // 0x1e42e0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E42DCu, 0x1E42E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E42E4u;
label_1e42e4:
    // 0x1e42e4: 0x623fff8  bgezl       $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1E42E4u;
    {
        const bool branch_taken_0x1e42e4 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x1e42e4) {
            ctx->pc = 0x1E42E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E42E4u;
            // 0x1e42e8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E42C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e42c8;
        }
    }
    ctx->pc = 0x1E42ECu;
label_1e42ec:
    // 0x1e42ec: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1e42ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e42f0:
    // 0x1e42f0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1e42f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e42f4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1e42f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e42f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e42f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e42fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e42fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4300: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4300u;
        // 0x1e4304: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4308u;
}
