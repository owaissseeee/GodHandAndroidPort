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

// Function: func_00352F40
// Address: 0x352f40 - 0x353060
void func_00352F40_0x352f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00352F40_0x352f40");
#endif

    switch (ctx->pc) {
        case 0x352f68u: goto label_352f68;
        case 0x352fa8u: goto label_352fa8;
        default: break;
    }

    ctx->pc = 0x352f40u;

    // 0x352f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x352f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x352f44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x352f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x352f48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x352f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x352f4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x352f4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352f50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x352f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x352f54: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x352f54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352f58: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x352f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x352f5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x352f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x352f60: 0xc0d54f2  jal         func_3553C8
    ctx->pc = 0x352F60u;
    SET_GPR_U32(ctx, 31, 0x352F68u);
    ctx->pc = 0x352F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352F60u;
    // 0x352f64: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3553C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3553C8u, 0x352F60u, 0x352F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352F68u;
label_352f68:
    // 0x352f68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x352f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352f6c: 0x52000035  beql        $s0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x352F6Cu;
    {
        const bool branch_taken_0x352f6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x352f6c) {
            ctx->pc = 0x352F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x352F6Cu;
            // 0x352f70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353044u;
            goto label_353044;
        }
    }
    ctx->pc = 0x352F74u;
    // 0x352f74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x352f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x352f78: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x352F78u;
    {
        const bool branch_taken_0x352f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x352f78) {
            ctx->pc = 0x352F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x352F78u;
            // 0x352f7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353044u;
            goto label_353044;
        }
    }
    ctx->pc = 0x352F80u;
    // 0x352f80: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x352f80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x352f84: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x352f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x352f88: 0x26030038  addiu       $v1, $s0, 0x38
    ctx->pc = 0x352f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x352f8c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x352f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x352f90: 0x28c20201  slti        $v0, $a2, 0x201
    ctx->pc = 0x352f90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x352f94: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x352f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352f98: 0xe2300a  movz        $a2, $a3, $v0
    ctx->pc = 0x352f98u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x352f9c: 0x26720d30  addiu       $s2, $s3, 0xD30
    ctx->pc = 0x352f9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 3376));
    // 0x352fa0: 0xc0d9a58  jal         func_366960
    ctx->pc = 0x352FA0u;
    SET_GPR_U32(ctx, 31, 0x352FA8u);
    ctx->pc = 0x352FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352FA0u;
    // 0x352fa4: 0xac660200  sw          $a2, 0x200($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 512), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366960u, 0x352FA0u, 0x352FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352FA8u;
label_352fa8:
    // 0x352fa8: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x352fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x352fac: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x352facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x352fb0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x352fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x352fb4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x352fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x352fb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x352fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x352fbc: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x352FBCu;
    {
        const bool branch_taken_0x352fbc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x352FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352FBCu;
        // 0x352fc0: 0x711821  addu        $v1, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352fbc) {
            ctx->pc = 0x352FD0u;
            goto label_352fd0;
        }
    }
    ctx->pc = 0x352FC4u;
    // 0x352fc4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x352fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x352fc8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x352FC8u;
    {
        const bool branch_taken_0x352fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352FC8u;
        // 0x352fcc: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352fc8) {
            ctx->pc = 0x352FE0u;
            goto label_352fe0;
        }
    }
    ctx->pc = 0x352FD0u;
label_352fd0:
    // 0x352fd0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x352fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x352fd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x352fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x352fd8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x352fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x352fdc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x352fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_352fe0:
    // 0x352fe0: 0x6a420043  ldl         $v0, 0x43($s2)
    ctx->pc = 0x352fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x352fe4: 0x6e42003c  ldr         $v0, 0x3C($s2)
    ctx->pc = 0x352fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x352fe8: 0x6a43004b  ldl         $v1, 0x4B($s2)
    ctx->pc = 0x352fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x352fec: 0x6e430044  ldr         $v1, 0x44($s2)
    ctx->pc = 0x352fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x352ff0: 0x6a440053  ldl         $a0, 0x53($s2)
    ctx->pc = 0x352ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x352ff4: 0x6e44004c  ldr         $a0, 0x4C($s2)
    ctx->pc = 0x352ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x352ff8: 0x6a45005b  ldl         $a1, 0x5B($s2)
    ctx->pc = 0x352ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x352ffc: 0x6e450054  ldr         $a1, 0x54($s2)
    ctx->pc = 0x352ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x353000: 0xb2020013  sdl         $v0, 0x13($s0)
    ctx->pc = 0x353000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353004: 0xb602000c  sdr         $v0, 0xC($s0)
    ctx->pc = 0x353004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353008: 0xb203001b  sdl         $v1, 0x1B($s0)
    ctx->pc = 0x353008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35300c: 0xb6030014  sdr         $v1, 0x14($s0)
    ctx->pc = 0x35300cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353010: 0xb2040023  sdl         $a0, 0x23($s0)
    ctx->pc = 0x353010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353014: 0xb604001c  sdr         $a0, 0x1C($s0)
    ctx->pc = 0x353014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353018: 0xb205002b  sdl         $a1, 0x2B($s0)
    ctx->pc = 0x353018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35301c: 0xb6050024  sdr         $a1, 0x24($s0)
    ctx->pc = 0x35301cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353020: 0x6a420063  ldl         $v0, 0x63($s2)
    ctx->pc = 0x353020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x353024: 0x6e42005c  ldr         $v0, 0x5C($s2)
    ctx->pc = 0x353024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x353028: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x353028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x35302c: 0xb2020033  sdl         $v0, 0x33($s0)
    ctx->pc = 0x35302cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353030: 0xb602002c  sdr         $v0, 0x2C($s0)
    ctx->pc = 0x353030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353034: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x353034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x353038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x353038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35303c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x35303cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x353040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x353040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_353044:
    // 0x353044: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x353044u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x353048: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x353048u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35304c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35304cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353050: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x353050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x353054: 0x3e00008  jr          $ra
    ctx->pc = 0x353054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353054u;
        // 0x353058: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35305Cu;
    // 0x35305c: 0x0  nop
    ctx->pc = 0x35305cu;
    // NOP
    ctx->pc = 0x353060u;
}
