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

// Function: cGameObjSortEnt_partialSort
// Address: 0x2a8d30 - 0x2a8e48
void cGameObjSortEnt_partialSort_0x2a8d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObjSortEnt_partialSort_0x2a8d30");
#endif

    switch (ctx->pc) {
        case 0x2a8d78u: goto label_2a8d78;
        case 0x2a8d90u: goto label_2a8d90;
        case 0x2a8e00u: goto label_2a8e00;
        case 0x2a8e20u: goto label_2a8e20;
        default: break;
    }

    ctx->pc = 0x2a8d30u;

    // 0x2a8d30: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2a8d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2a8d34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a8d34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8d38: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2a8d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2a8d3c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2a8d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2a8d40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a8d40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8d44: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2a8d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2a8d48: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2a8d48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8d4c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2a8d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2a8d50: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2a8d50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8d54: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2a8d54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8d58: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2a8d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2a8d5c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2a8d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2a8d60: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2a8d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2a8d64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a8d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a8d68: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2a8d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8d6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a8d6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8d70: 0xc0aa2e4  jal         func_2A8B90
    ctx->pc = 0x2A8D70u;
    SET_GPR_U32(ctx, 31, 0x2A8D78u);
    ctx->pc = 0x2A8D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8D70u;
    // 0x2a8d74: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8B90u, 0x2A8D70u, 0x2A8D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8D78u;
label_2a8d78:
    // 0x2a8d78: 0x275102b  sltu        $v0, $s3, $s5
    ctx->pc = 0x2a8d78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2a8d7c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2A8D7Cu;
    {
        const bool branch_taken_0x2a8d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D7Cu;
        // 0x2a8d80: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8d7c) {
            ctx->pc = 0x2A8E10u;
            goto label_2a8e10;
        }
    }
    ctx->pc = 0x2A8D84u;
    // 0x2a8d84: 0x272b023  subu        $s6, $s3, $s2
    ctx->pc = 0x2a8d84u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2a8d88: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2a8d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8d8c: 0x0  nop
    ctx->pc = 0x2a8d8cu;
    // NOP
label_2a8d90:
    // 0x2a8d90: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2a8d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8d94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a8d94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8d98: 0x0  nop
    ctx->pc = 0x2a8d98u;
    // NOP
    // 0x2a8d9c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A8D9Cu;
    {
        const bool branch_taken_0x2a8d9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D9Cu;
        // 0x2a8da0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8d9c) {
            ctx->pc = 0x2A8DA8u;
            goto label_2a8da8;
        }
    }
    ctx->pc = 0x2A8DA4u;
    // 0x2a8da4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a8da4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8da8:
    // 0x2a8da8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A8DA8u;
    {
        const bool branch_taken_0x2a8da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8DA8u;
        // 0x2a8dac: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8da8) {
            ctx->pc = 0x2A8E00u;
            goto label_2a8e00;
        }
    }
    ctx->pc = 0x2A8DB0u;
    // 0x2a8db0: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x2a8db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a8db4: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x2a8db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a8db8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2a8db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8dbc: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2a8dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8dc0: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x2a8dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2a8dc4: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x2a8dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2a8dc8: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x2a8dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8dcc: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x2a8dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8dd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a8dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8dd4: 0x6a260007  ldl         $a2, 0x7($s1)
    ctx->pc = 0x2a8dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2a8dd8: 0x6e260000  ldr         $a2, 0x0($s1)
    ctx->pc = 0x2a8dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2a8ddc: 0xb2060007  sdl         $a2, 0x7($s0)
    ctx->pc = 0x2a8ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8de0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a8de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8de4: 0xb6060000  sdr         $a2, 0x0($s0)
    ctx->pc = 0x2a8de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8de8: 0x9fa70014  lwu         $a3, 0x14($sp)
    ctx->pc = 0x2a8de8u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2a8dec: 0x1630c3  sra         $a2, $s6, 3
    ctx->pc = 0x2a8decu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 22), 3));
    // 0x2a8df0: 0x9fa20010  lwu         $v0, 0x10($sp)
    ctx->pc = 0x2a8df0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8df4: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2a8df4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2a8df8: 0xc0aa2aa  jal         func_2A8AA8
    ctx->pc = 0x2A8DF8u;
    SET_GPR_U32(ctx, 31, 0x2A8E00u);
    ctx->pc = 0x2A8DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8DF8u;
    // 0x2a8dfc: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8AA8u, 0x2A8DF8u, 0x2A8E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8E00u;
label_2a8e00:
    // 0x2a8e00: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2a8e00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2a8e04: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x2a8e04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2a8e08: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2A8E08u;
    {
        const bool branch_taken_0x2a8e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8e08) {
            ctx->pc = 0x2A8E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8E08u;
            // 0x2a8e0c: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a8d90;
        }
    }
    ctx->pc = 0x2A8E10u;
label_2a8e10:
    // 0x2a8e10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a8e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8e14: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a8e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8e18: 0xc0aa312  jal         func_2A8C48
    ctx->pc = 0x2A8E18u;
    SET_GPR_U32(ctx, 31, 0x2A8E20u);
    ctx->pc = 0x2A8E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8E18u;
    // 0x2a8e1c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8C48u, 0x2A8E18u, 0x2A8E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8E20u;
label_2a8e20:
    // 0x2a8e20: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2a8e20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a8e24: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2a8e24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a8e28: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2a8e28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a8e2c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2a8e2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a8e30: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2a8e30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a8e34: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2a8e34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a8e38: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2a8e38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a8e3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a8e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8e40: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8E40u;
        // 0x2a8e44: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8E48u;
}
