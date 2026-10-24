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

// Function: InitTwoIdWorks
// Address: 0x13e380 - 0x13e3f8
void InitTwoIdWorks_0x13e380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitTwoIdWorks_0x13e380");
#endif

    switch (ctx->pc) {
        case 0x13e3acu: goto label_13e3ac;
        case 0x13e3b0u: goto label_13e3b0;
        case 0x13e3b8u: goto label_13e3b8;
        default: break;
    }

    ctx->pc = 0x13e380u;

    // 0x13e380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13e380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13e384: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13e384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e388: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13e388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13e38c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x13e38cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x13e390: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13e390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e394: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13e394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13e398: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x13e398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x13e39c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13e3a0: 0x2632009c  addiu       $s2, $s1, 0x9C
    ctx->pc = 0x13e3a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 156));
    // 0x13e3a4: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x13E3A4u;
    SET_GPR_U32(ctx, 31, 0x13E3ACu);
    ctx->pc = 0x13E3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E3A4u;
    // 0x13e3a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x13E3A4u, 0x13E3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E3ACu;
label_13e3ac:
    // 0x13e3ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13e3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13e3b0:
    // 0x13e3b0: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13E3B0u;
    SET_GPR_U32(ctx, 31, 0x13E3B8u);
    ctx->pc = 0x13E3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E3B0u;
    // 0x13e3b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13E3B0u, 0x13E3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E3B8u;
label_13e3b8:
    // 0x13e3b8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x13e3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13e3bc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x13e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13e3c0: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x13e3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x13e3c4: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x13e3c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13e3c8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13e3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x13e3cc: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x13e3ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x13e3d0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13E3D0u;
    {
        const bool branch_taken_0x13e3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E3D0u;
        // 0x13e3d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e3d0) {
            ctx->pc = 0x13E3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e3b0;
        }
    }
    ctx->pc = 0x13E3D8u;
    // 0x13e3d8: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x13e3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x13e3dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13e3dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13e3e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13e3e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e3e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x13e3e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e3e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x13E3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E3ECu;
        // 0x13e3f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E3F4u;
    // 0x13e3f4: 0x0  nop
    ctx->pc = 0x13e3f4u;
    // NOP
    ctx->pc = 0x13e3f8u;
}
