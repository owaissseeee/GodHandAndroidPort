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

// Function: func_002A9210
// Address: 0x2a9210 - 0x2a9288
void func_002A9210_0x2a9210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A9210_0x2a9210");
#endif

    switch (ctx->pc) {
        case 0x2a9238u: goto label_2a9238;
        case 0x2a9268u: goto label_2a9268;
        default: break;
    }

    ctx->pc = 0x2a9210u;

    // 0x2a9210: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a9210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a9214: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2a9214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2a9218: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2a9218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2a921c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a921cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9220: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a9220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a9224: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a9224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9228: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a9228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a922c: 0x12110010  beq         $s0, $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A922Cu;
    {
        const bool branch_taken_0x2a922c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x2A9230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A922Cu;
        // 0x2a9230: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a922c) {
            ctx->pc = 0x2A9270u;
            goto label_2a9270;
        }
    }
    ctx->pc = 0x2A9234u;
    // 0x2a9234: 0x0  nop
    ctx->pc = 0x2a9234u;
    // NOP
label_2a9238:
    // 0x2a9238: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x2a9238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a923c: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x2a923cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a9240: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2a9240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a9244: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a9244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9248: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2a9248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a924c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2a924cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a9250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a9250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9254: 0x9fa20000  lwu         $v0, 0x0($sp)
    ctx->pc = 0x2a9254u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9258: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2a9258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2a925c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2a925cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2a9260: 0xc0aa426  jal         func_2A9098
    ctx->pc = 0x2A9260u;
    SET_GPR_U32(ctx, 31, 0x2A9268u);
    ctx->pc = 0x2A9264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9260u;
    // 0x2a9264: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9098u, 0x2A9260u, 0x2A9268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9268u;
label_2a9268:
    // 0x2a9268: 0x1611fff3  bne         $s0, $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2A9268u;
    {
        const bool branch_taken_0x2a9268 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x2a9268) {
            ctx->pc = 0x2A9238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a9238;
        }
    }
    ctx->pc = 0x2A9270u;
label_2a9270:
    // 0x2a9270: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2a9270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a9274: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2a9274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9278: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a9278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a927c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a927cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9280: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9280u;
        // 0x2a9284: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9288u;
}
