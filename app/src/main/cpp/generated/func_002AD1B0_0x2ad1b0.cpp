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

// Function: func_002AD1B0
// Address: 0x2ad1b0 - 0x2ad218
void func_002AD1B0_0x2ad1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AD1B0_0x2ad1b0");
#endif

    switch (ctx->pc) {
        case 0x2ad1e8u: goto label_2ad1e8;
        case 0x2ad1f4u: goto label_2ad1f4;
        default: break;
    }

    ctx->pc = 0x2ad1b0u;

    // 0x2ad1b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ad1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ad1b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ad1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ad1b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ad1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2ad1bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ad1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ad1c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2ad1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2ad1c4: 0x14a2000e  bne         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2AD1C4u;
    {
        const bool branch_taken_0x2ad1c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AD1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD1C4u;
        // 0x2ad1c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad1c4) {
            ctx->pc = 0x2AD200u;
            goto label_2ad200;
        }
    }
    ctx->pc = 0x2AD1CCu;
    // 0x2ad1cc: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AD1CCu;
    {
        const bool branch_taken_0x2ad1cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD1CCu;
        // 0x2ad1d0: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad1cc) {
            ctx->pc = 0x2AD200u;
            goto label_2ad200;
        }
    }
    ctx->pc = 0x2AD1D4u;
    // 0x2ad1d4: 0x2411027f  addiu       $s1, $zero, 0x27F
    ctx->pc = 0x2ad1d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
    // 0x2ad1d8: 0x2442b3b0  addiu       $v0, $v0, -0x4C50
    ctx->pc = 0x2ad1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947760));
    // 0x2ad1dc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2ad1dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ad1e0: 0x24500744  addiu       $s0, $v0, 0x744
    ctx->pc = 0x2ad1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1860));
    // 0x2ad1e4: 0x0  nop
    ctx->pc = 0x2ad1e4u;
    // NOP
label_2ad1e8:
    // 0x2ad1e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ad1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad1ec: 0xc0c2400  jal         func_309000
    ctx->pc = 0x2AD1ECu;
    SET_GPR_U32(ctx, 31, 0x2AD1F4u);
    ctx->pc = 0x2AD1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD1ECu;
    // 0x2ad1f0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309000u, 0x2AD1ECu, 0x2AD1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD1F4u;
label_2ad1f4:
    // 0x2ad1f4: 0x0  nop
    ctx->pc = 0x2ad1f4u;
    // NOP
    // 0x2ad1f8: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AD1F8u;
    {
        const bool branch_taken_0x2ad1f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x2AD1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD1F8u;
        // 0x2ad1fc: 0x261000ac  addiu       $s0, $s0, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad1f8) {
            ctx->pc = 0x2AD1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad1e8;
        }
    }
    ctx->pc = 0x2AD200u;
label_2ad200:
    // 0x2ad200: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ad200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad204: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ad204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad208: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2ad208u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad20c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad210: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD210u;
        // 0x2ad214: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD218u;
}
