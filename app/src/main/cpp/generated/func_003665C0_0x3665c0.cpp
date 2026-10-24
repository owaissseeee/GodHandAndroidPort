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

// Function: func_003665C0
// Address: 0x3665c0 - 0x366678
void func_003665C0_0x3665c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003665C0_0x3665c0");
#endif

    switch (ctx->pc) {
        case 0x3665d8u: goto label_3665d8;
        case 0x366638u: goto label_366638;
        default: break;
    }

    ctx->pc = 0x3665c0u;

    // 0x3665c0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x3665c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x3665c4: 0x24630298  addiu       $v1, $v1, 0x298
    ctx->pc = 0x3665c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 664));
    // 0x3665c8: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x3665c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3665cc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x3665ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3665d0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3665D0u;
    {
        const bool branch_taken_0x3665d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3665D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3665D0u;
        // 0x3665d4: 0x24621800  addiu       $v0, $v1, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 6144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3665d0) {
            ctx->pc = 0x366638u;
            goto label_366638;
        }
    }
    ctx->pc = 0x3665D8u;
label_3665d8:
    // 0x3665d8: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x3665d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3665dc: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x3665dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3665e0: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x3665e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3665e4: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x3665e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3665e8: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x3665e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x3665ec: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x3665ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3665f0: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x3665f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3665f4: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x3665f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3665f8: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x3665f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3665fc: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x3665fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x366600: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x366600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x366604: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x366604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x366608: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x366608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36660c: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x36660cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x366610: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x366610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x366614: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x366614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x366618: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x366618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x36661c: 0x0  nop
    ctx->pc = 0x36661cu;
    // NOP
    // 0x366620: 0x0  nop
    ctx->pc = 0x366620u;
    // NOP
    // 0x366624: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x366624u;
    {
        const bool branch_taken_0x366624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x366628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366624u;
        // 0x366628: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366624) {
            ctx->pc = 0x3665D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3665d8;
        }
    }
    ctx->pc = 0x36662Cu;
    // 0x36662c: 0x3e00008  jr          $ra
    ctx->pc = 0x36662Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36662Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366634u;
    // 0x366634: 0x0  nop
    ctx->pc = 0x366634u;
    // NOP
label_366638:
    // 0x366638: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x366638u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36663c: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x36663cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x366640: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x366640u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x366644: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x366644u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x366648: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x366648u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x36664c: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x36664cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x366650: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x366650u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x366654: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x366654u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x366658: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x366658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x36665c: 0x0  nop
    ctx->pc = 0x36665cu;
    // NOP
    // 0x366660: 0x0  nop
    ctx->pc = 0x366660u;
    // NOP
    // 0x366664: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x366664u;
    {
        const bool branch_taken_0x366664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x366668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366664u;
        // 0x366668: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366664) {
            ctx->pc = 0x366638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366638;
        }
    }
    ctx->pc = 0x36666Cu;
    // 0x36666c: 0x3e00008  jr          $ra
    ctx->pc = 0x36666Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36666Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366674u;
    // 0x366674: 0x0  nop
    ctx->pc = 0x366674u;
    // NOP
    ctx->pc = 0x366678u;
}
