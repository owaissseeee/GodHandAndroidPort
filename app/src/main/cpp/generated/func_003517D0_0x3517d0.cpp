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

// Function: func_003517D0
// Address: 0x3517d0 - 0x351888
void func_003517D0_0x3517d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003517D0_0x3517d0");
#endif

    switch (ctx->pc) {
        case 0x351804u: goto label_351804;
        default: break;
    }

    ctx->pc = 0x3517d0u;

    // 0x3517d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3517d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3517d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3517d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3517d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3517d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3517dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3517dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3517e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3517e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3517e4: 0x26320dc4  addiu       $s2, $s1, 0xDC4
    ctx->pc = 0x3517e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 3524));
    // 0x3517e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3517e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3517ec: 0x26301fb8  addiu       $s0, $s1, 0x1FB8
    ctx->pc = 0x3517ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8120));
    // 0x3517f0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3517f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3517f4: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3517F4u;
    {
        const bool branch_taken_0x3517f4 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3517F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3517F4u;
        // 0x3517f8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3517f4) {
            ctx->pc = 0x35180Cu;
            goto label_35180c;
        }
    }
    ctx->pc = 0x3517FCu;
    // 0x3517fc: 0xc0d31f4  jal         func_34C7D0
    ctx->pc = 0x3517FCu;
    SET_GPR_U32(ctx, 31, 0x351804u);
    ctx->pc = 0x34C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C7D0u, 0x3517FCu, 0x351804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351804u;
label_351804:
    // 0x351804: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x351804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x351808: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x351808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_35180c:
    // 0x35180c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x35180cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x351810: 0x4410017  bgez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x351810u;
    {
        const bool branch_taken_0x351810 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x351814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351810u;
        // 0x351814: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351810) {
            ctx->pc = 0x351870u;
            goto label_351870;
        }
    }
    ctx->pc = 0x351818u;
    // 0x351818: 0x6a220d9f  ldl         $v0, 0xD9F($s1)
    ctx->pc = 0x351818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3487); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x35181c: 0x6e220d98  ldr         $v0, 0xD98($s1)
    ctx->pc = 0x35181cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3480); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x351820: 0x6a230da7  ldl         $v1, 0xDA7($s1)
    ctx->pc = 0x351820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3495); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x351824: 0x6e230da0  ldr         $v1, 0xDA0($s1)
    ctx->pc = 0x351824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3488); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x351828: 0x6a240daf  ldl         $a0, 0xDAF($s1)
    ctx->pc = 0x351828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3503); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x35182c: 0x6e240da8  ldr         $a0, 0xDA8($s1)
    ctx->pc = 0x35182cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3496); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x351830: 0x6a250db7  ldl         $a1, 0xDB7($s1)
    ctx->pc = 0x351830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3511); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x351834: 0x6e250db0  ldr         $a1, 0xDB0($s1)
    ctx->pc = 0x351834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3504); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x351838: 0xb2420007  sdl         $v0, 0x7($s2)
    ctx->pc = 0x351838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35183c: 0xb6420000  sdr         $v0, 0x0($s2)
    ctx->pc = 0x35183cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x351840: 0xb243000f  sdl         $v1, 0xF($s2)
    ctx->pc = 0x351840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x351844: 0xb6430008  sdr         $v1, 0x8($s2)
    ctx->pc = 0x351844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x351848: 0xb2440017  sdl         $a0, 0x17($s2)
    ctx->pc = 0x351848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35184c: 0xb6440010  sdr         $a0, 0x10($s2)
    ctx->pc = 0x35184cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x351850: 0xb245001f  sdl         $a1, 0x1F($s2)
    ctx->pc = 0x351850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x351854: 0xb6450018  sdr         $a1, 0x18($s2)
    ctx->pc = 0x351854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x351858: 0x6a220dbf  ldl         $v0, 0xDBF($s1)
    ctx->pc = 0x351858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3519); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x35185c: 0x6e220db8  ldr         $v0, 0xDB8($s1)
    ctx->pc = 0x35185cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3512); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x351860: 0x8e230dc0  lw          $v1, 0xDC0($s1)
    ctx->pc = 0x351860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3520)));
    // 0x351864: 0xb2420027  sdl         $v0, 0x27($s2)
    ctx->pc = 0x351864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x351868: 0xb6420020  sdr         $v0, 0x20($s2)
    ctx->pc = 0x351868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35186c: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x35186cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
label_351870:
    // 0x351870: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x351870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x351874: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x351874u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x351878: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x351878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35187c: 0x3e00008  jr          $ra
    ctx->pc = 0x35187Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35187Cu;
        // 0x351880: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35187Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351884u;
    // 0x351884: 0x0  nop
    ctx->pc = 0x351884u;
    // NOP
    ctx->pc = 0x351888u;
}
