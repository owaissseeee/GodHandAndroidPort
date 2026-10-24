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

// Function: func_00359758
// Address: 0x359758 - 0x3597d0
void func_00359758_0x359758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00359758_0x359758");
#endif

    switch (ctx->pc) {
        case 0x359774u: goto label_359774;
        default: break;
    }

    ctx->pc = 0x359758u;

    // 0x359758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35975c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35975cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359760: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x359760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359764: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x359764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x359768: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x359768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35976c: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x35976Cu;
    SET_GPR_U32(ctx, 31, 0x359774u);
    ctx->pc = 0x359770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35976Cu;
    // 0x359770: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x35976Cu, 0x359774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359774u;
label_359774:
    // 0x359774: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x359774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x359778: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x359778u;
    {
        const bool branch_taken_0x359778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359778u;
        // 0x35977c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359778) {
            ctx->pc = 0x359798u;
            goto label_359798;
        }
    }
    ctx->pc = 0x359780u;
    // 0x359780: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359784: 0x34a50151  ori         $a1, $a1, 0x151
    ctx->pc = 0x359784u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)337);
    // 0x359788: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35978c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35978cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359790: 0x80d375c  j           func_34DD70
    ctx->pc = 0x359790u;
    ctx->pc = 0x359794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359790u;
    // 0x359794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x359790u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x359798u;
label_359798:
    // 0x359798: 0xae1136b0  sw          $s1, 0x36B0($s0)
    ctx->pc = 0x359798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14000), GPR_U32(ctx, 17));
    // 0x35979c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35979cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3597a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3597a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3597a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3597a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3597a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3597A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3597ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3597A8u;
        // 0x3597ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3597A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3597B0u;
    // 0x3597b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3597b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3597b4: 0x0  nop
    ctx->pc = 0x3597b4u;
    // NOP
    // 0x3597b8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3597b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3597bc: 0x0  nop
    ctx->pc = 0x3597bcu;
    // NOP
    // 0x3597c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3597c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3597c4: 0x0  nop
    ctx->pc = 0x3597c4u;
    // NOP
    // 0x3597c8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3597c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3597cc: 0x0  nop
    ctx->pc = 0x3597ccu;
    // NOP
    ctx->pc = 0x3597d0u;
}
