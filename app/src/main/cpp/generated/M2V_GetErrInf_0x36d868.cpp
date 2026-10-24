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

// Function: M2V_GetErrInf
// Address: 0x36d868 - 0x36d8e8
void M2V_GetErrInf_0x36d868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("M2V_GetErrInf_0x36d868");
#endif

    switch (ctx->pc) {
        case 0x36d884u: goto label_36d884;
        default: break;
    }

    ctx->pc = 0x36d868u;

    // 0x36d868: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36d868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36d86c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36d86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36d870: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36d870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d874: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36d874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36d878: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36d878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36d87c: 0xc0db5a2  jal         func_36D688
    ctx->pc = 0x36D87Cu;
    SET_GPR_U32(ctx, 31, 0x36D884u);
    ctx->pc = 0x36D880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D87Cu;
    // 0x36d880: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D688u, 0x36D87Cu, 0x36D884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D884u;
label_36d884:
    // 0x36d884: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x36d884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x36d888: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36D888u;
    {
        const bool branch_taken_0x36d888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D888u;
        // 0x36d88c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d888) {
            ctx->pc = 0x36D8A8u;
            goto label_36d8a8;
        }
    }
    ctx->pc = 0x36D890u;
    // 0x36d890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36d890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d894: 0x34a50204  ori         $a1, $a1, 0x204
    ctx->pc = 0x36d894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)516);
    // 0x36d898: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36d898u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36d89c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36d89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d8a0: 0x80db63a  j           func_36D8E8
    ctx->pc = 0x36D8A0u;
    ctx->pc = 0x36D8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D8A0u;
    // 0x36d8a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D8E8u, 0x36D8A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36D8A8u;
label_36d8a8:
    // 0x36d8a8: 0x6a02000b  ldl         $v0, 0xB($s0)
    ctx->pc = 0x36d8a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x36d8ac: 0x6e020004  ldr         $v0, 0x4($s0)
    ctx->pc = 0x36d8acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x36d8b0: 0x6a030013  ldl         $v1, 0x13($s0)
    ctx->pc = 0x36d8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x36d8b4: 0x6e03000c  ldr         $v1, 0xC($s0)
    ctx->pc = 0x36d8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x36d8b8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x36d8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x36d8bc: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x36d8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36d8c0: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x36d8c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36d8c4: 0xb223000f  sdl         $v1, 0xF($s1)
    ctx->pc = 0x36d8c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36d8c8: 0xb6230008  sdr         $v1, 0x8($s1)
    ctx->pc = 0x36d8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36d8cc: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x36d8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x36d8d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36d8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d8d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36d8d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d8d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36d8d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36d8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x36D8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D8DCu;
        // 0x36d8e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D8E4u;
    // 0x36d8e4: 0x0  nop
    ctx->pc = 0x36d8e4u;
    // NOP
    ctx->pc = 0x36d8e8u;
}
