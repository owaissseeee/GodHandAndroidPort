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

// Function: func_003352D0
// Address: 0x3352d0 - 0x335348
void func_003352D0_0x3352d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003352D0_0x3352d0");
#endif

    ctx->pc = 0x3352d0u;

    // 0x3352d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3352d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3352d4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3352d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3352d8: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3352D8u;
    {
        const bool branch_taken_0x3352d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3352DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3352D8u;
        // 0x3352dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3352d8) {
            ctx->pc = 0x335320u;
            goto label_335320;
        }
    }
    ctx->pc = 0x3352E0u;
    // 0x3352e0: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x3352e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x3352e4: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x3352e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x3352e8: 0x24474bb0  addiu       $a3, $v0, 0x4BB0
    ctx->pc = 0x3352e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 19376));
    // 0x3352ec: 0x2466a4a0  addiu       $a2, $v1, -0x5B60
    ctx->pc = 0x3352ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
    // 0x3352f0: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x3352f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x3352f4: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x3352f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x3352f8: 0x80e50004  lb          $a1, 0x4($a3)
    ctx->pc = 0x3352f8u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x454BB4u));
    // 0x3352fc: 0xa8c40003  swl         $a0, 0x3($a2)
    ctx->pc = 0x3352fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x335300: 0xb8c40000  swr         $a0, 0x0($a2)
    ctx->pc = 0x335300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x335304: 0xa0c50004  sb          $a1, 0x4($a2)
    ctx->pc = 0x335304u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3DA4A4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3DA4A4u, _value); } while (0);
    // 0x335308: 0x80e40005  lb          $a0, 0x5($a3)
    ctx->pc = 0x335308u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x454BB5u));
    // 0x33530c: 0xa0c40005  sb          $a0, 0x5($a2)
    ctx->pc = 0x33530cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3DA4A5u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3DA4A5u, _value); } while (0);
    // 0x335310: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x335310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335314: 0x3e00008  jr          $ra
    ctx->pc = 0x335314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335314u;
        // 0x335318: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33531Cu;
    // 0x33531c: 0x0  nop
    ctx->pc = 0x33531cu;
    // NOP
label_335320:
    // 0x335320: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x335320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x335324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x335324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335328: 0x2484a4a0  addiu       $a0, $a0, -0x5B60
    ctx->pc = 0x335328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943904));
    // 0x33532c: 0x80e95f1  j           func_3A57C4
    ctx->pc = 0x33532Cu;
    ctx->pc = 0x335330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33532Cu;
    // 0x335330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57C4u, 0x33532Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x335334u;
    // 0x335334: 0x0  nop
    ctx->pc = 0x335334u;
    // NOP
    // 0x335338: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x335338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x33533c: 0x0  nop
    ctx->pc = 0x33533cu;
    // NOP
    // 0x335340: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x335340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x335344: 0x0  nop
    ctx->pc = 0x335344u;
    // NOP
    ctx->pc = 0x335348u;
}
