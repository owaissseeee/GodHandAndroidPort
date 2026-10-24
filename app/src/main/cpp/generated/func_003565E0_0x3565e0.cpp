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

// Function: func_003565E0
// Address: 0x3565e0 - 0x356648
void func_003565E0_0x3565e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003565E0_0x3565e0");
#endif

    switch (ctx->pc) {
        case 0x356634u: goto label_356634;
        default: break;
    }

    ctx->pc = 0x3565e0u;

    // 0x3565e0: 0x3c030076  lui         $v1, 0x76
    ctx->pc = 0x3565e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
    // 0x3565e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3565e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3565e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3565e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3565ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3565ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3565f0: 0xac626c70  sw          $v0, 0x6C70($v1)
    ctx->pc = 0x3565f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x766C70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x766C70u, _value); } while (0);
    // 0x3565f4: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x3565f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x3565f8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3565f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3565fc: 0x24486c78  addiu       $t0, $v0, 0x6C78
    ctx->pc = 0x3565fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 27768));
    // 0x356600: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x356600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x356604: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x356604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x356608: 0xb1030007  sdl         $v1, 0x7($t0)
    ctx->pc = 0x356608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35660c: 0xb5030000  sdr         $v1, 0x0($t0)
    ctx->pc = 0x35660cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x356610: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x356610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x356614: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x356614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356618: 0x8cc21fc0  lw          $v0, 0x1FC0($a2)
    ctx->pc = 0x356618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8128)));
    // 0x35661c: 0x68e90007  ldl         $t1, 0x7($a3)
    ctx->pc = 0x35661cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x356620: 0x6ce90000  ldr         $t1, 0x0($a3)
    ctx->pc = 0x356620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x356624: 0xb04911ff  sdl         $t1, 0x11FF($v0)
    ctx->pc = 0x356624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4607); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x356628: 0xb44911f8  sdr         $t1, 0x11F8($v0)
    ctx->pc = 0x356628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4600); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35662c: 0xc0d375c  jal         func_34DD70
    ctx->pc = 0x35662Cu;
    SET_GPR_U32(ctx, 31, 0x356634u);
    ctx->pc = 0x356630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35662Cu;
    // 0x356630: 0x34a50f40  ori         $a1, $a1, 0xF40 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3904);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x35662Cu, 0x356634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356634u;
label_356634:
    // 0x356634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x356638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35663c: 0x3e00008  jr          $ra
    ctx->pc = 0x35663Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35663Cu;
        // 0x356640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35663Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356644u;
    // 0x356644: 0x0  nop
    ctx->pc = 0x356644u;
    // NOP
    ctx->pc = 0x356648u;
}
