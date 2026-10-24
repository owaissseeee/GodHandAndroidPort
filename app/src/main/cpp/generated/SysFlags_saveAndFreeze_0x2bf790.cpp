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

// Function: SysFlags_saveAndFreeze
// Address: 0x2bf790 - 0x2bf800
void SysFlags_saveAndFreeze_0x2bf790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SysFlags_saveAndFreeze_0x2bf790");
#endif

    ctx->pc = 0x2bf790u;

    // 0x2bf790: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x2bf790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x2bf794: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x2bf794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
    // 0x2bf798: 0x24a87a78  addiu       $t0, $a1, 0x7A78
    ctx->pc = 0x2bf798u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 31352));
    // 0x2bf79c: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x2bf79cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2bf7a0: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x2bf7a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2bf7a4: 0xb082007b  sdl         $v0, 0x7B($a0)
    ctx->pc = 0x2bf7a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bf7a8: 0xb4820074  sdr         $v0, 0x74($a0)
    ctx->pc = 0x2bf7a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bf7ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2bf7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2bf7b0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x2bf7b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x2bf7b4: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x2bf7b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
    // 0x2bf7b8: 0x8ca27a78  lw          $v0, 0x7A78($a1)
    ctx->pc = 0x2bf7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A78u));
    // 0x2bf7bc: 0x3c090002  lui         $t1, 0x2
    ctx->pc = 0x2bf7bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)2 << 16));
    // 0x2bf7c0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2bf7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2bf7c4: 0x3c0a0004  lui         $t2, 0x4
    ctx->pc = 0x2bf7c4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4 << 16));
    // 0x2bf7c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2bf7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2bf7cc: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x2bf7ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x2bf7d0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2bf7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2bf7d4: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x2bf7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x2bf7d8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x2bf7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x2bf7dc: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x2bf7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x2bf7e0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2bf7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2bf7e4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x2bf7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x2bf7e8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2bf7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2bf7ec: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x2bf7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x2bf7f0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2bf7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2bf7f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bf7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bf7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7F8u;
        // 0x2bf7fc: 0xaca27a78  sw          $v0, 0x7A78($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 31352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF800u;
}
