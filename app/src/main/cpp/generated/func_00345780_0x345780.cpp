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

// Function: func_00345780
// Address: 0x345780 - 0x345828
void func_00345780_0x345780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00345780_0x345780");
#endif

    switch (ctx->pc) {
        case 0x3457b4u: goto label_3457b4;
        case 0x3457ccu: goto label_3457cc;
        case 0x3457e0u: goto label_3457e0;
        case 0x3457f0u: goto label_3457f0;
        case 0x345808u: goto label_345808;
        case 0x345818u: goto label_345818;
        default: break;
    }

    ctx->pc = 0x345780u;

    // 0x345780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x345780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x345784: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x345784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x345788: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x345788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x34578c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34578cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x345790: 0x24487b10  addiu       $t0, $v0, 0x7B10
    ctx->pc = 0x345790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 31504));
    // 0x345794: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x345794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x345798: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x345798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x34579c: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x34579cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3457a0: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x3457a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3457a4: 0x240537b0  addiu       $a1, $zero, 0x37B0
    ctx->pc = 0x3457a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14256));
    // 0x3457a8: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x3457a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x3457ac: 0xc0d36d4  jal         func_34DB50
    ctx->pc = 0x3457ACu;
    SET_GPR_U32(ctx, 31, 0x3457B4u);
    ctx->pc = 0x3457B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3457ACu;
    // 0x3457b0: 0x24647bd8  addiu       $a0, $v1, 0x7BD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DB50u, 0x3457ACu, 0x3457B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3457B4u;
label_3457b4:
    // 0x3457b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3457b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3457b8: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3457B8u;
    {
        const bool branch_taken_0x3457b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3457BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3457B8u;
        // 0x3457bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3457b8) {
            ctx->pc = 0x3457D8u;
            goto label_3457d8;
        }
    }
    ctx->pc = 0x3457C0u;
    // 0x3457c0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3457c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3457c4: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x3457C4u;
    SET_GPR_U32(ctx, 31, 0x3457CCu);
    ctx->pc = 0x3457C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3457C4u;
    // 0x3457c8: 0x24847be0  addiu       $a0, $a0, 0x7BE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x3457C4u, 0x3457CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3457CCu;
label_3457cc:
    // 0x3457cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3457CCu;
    {
        const bool branch_taken_0x3457cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3457D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3457CCu;
        // 0x3457d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3457cc) {
            ctx->pc = 0x345818u;
            goto label_345818;
        }
    }
    ctx->pc = 0x3457D4u;
    // 0x3457d4: 0x0  nop
    ctx->pc = 0x3457d4u;
    // NOP
label_3457d8:
    // 0x3457d8: 0xc0d36d8  jal         func_34DB60
    ctx->pc = 0x3457D8u;
    SET_GPR_U32(ctx, 31, 0x3457E0u);
    ctx->pc = 0x34DB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DB60u, 0x3457D8u, 0x3457E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3457E0u;
label_3457e0:
    // 0x3457e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3457E0u;
    {
        const bool branch_taken_0x3457e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3457E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3457E0u;
        // 0x3457e4: 0x3c050034  lui         $a1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3457e0) {
            ctx->pc = 0x3457F8u;
            goto label_3457f8;
        }
    }
    ctx->pc = 0x3457E8u;
    // 0x3457e8: 0xc0d15d4  jal         func_345750
    ctx->pc = 0x3457E8u;
    SET_GPR_U32(ctx, 31, 0x3457F0u);
    ctx->pc = 0x3457ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3457E8u;
    // 0x3457ec: 0x2404fed3  addiu       $a0, $zero, -0x12D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966995));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345750u, 0x3457E8u, 0x3457F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3457F0u;
label_3457f0:
    // 0x3457f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3457F0u;
    {
        const bool branch_taken_0x3457f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3457F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3457F0u;
        // 0x3457f4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3457f0) {
            ctx->pc = 0x34581Cu;
            goto label_34581c;
        }
    }
    ctx->pc = 0x3457F8u;
label_3457f8:
    // 0x3457f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3457f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3457fc: 0x24a55848  addiu       $a1, $a1, 0x5848
    ctx->pc = 0x3457fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22600));
    // 0x345800: 0xc0d3788  jal         func_34DE20
    ctx->pc = 0x345800u;
    SET_GPR_U32(ctx, 31, 0x345808u);
    ctx->pc = 0x345804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345800u;
    // 0x345804: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DE20u, 0x345800u, 0x345808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345808u;
label_345808:
    // 0x345808: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x345808u;
    {
        const bool branch_taken_0x345808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345808u;
        // 0x34580c: 0x2404fed1  addiu       $a0, $zero, -0x12F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966993));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345808) {
            ctx->pc = 0x345818u;
            goto label_345818;
        }
    }
    ctx->pc = 0x345810u;
    // 0x345810: 0xc0d15d4  jal         func_345750
    ctx->pc = 0x345810u;
    SET_GPR_U32(ctx, 31, 0x345818u);
    ctx->pc = 0x345750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345750u, 0x345810u, 0x345818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345818u;
label_345818:
    // 0x345818: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x345818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34581c:
    // 0x34581c: 0x3e00008  jr          $ra
    ctx->pc = 0x34581Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34581Cu;
        // 0x345820: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34581Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345824u;
    // 0x345824: 0x0  nop
    ctx->pc = 0x345824u;
    // NOP
    ctx->pc = 0x345828u;
}
