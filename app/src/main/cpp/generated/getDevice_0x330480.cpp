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

// Function: getDevice
// Address: 0x330480 - 0x330518
void getDevice_0x330480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getDevice_0x330480");
#endif

    switch (ctx->pc) {
        case 0x3304acu: goto label_3304ac;
        case 0x3304c0u: goto label_3304c0;
        case 0x3304d4u: goto label_3304d4;
        default: break;
    }

    ctx->pc = 0x330480u;

    // 0x330480: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x330480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x330484: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x330484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x330488: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x330488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33048c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33048cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x330490: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x330490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x330494: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x330494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x330498: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x330498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x33049c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33049cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3304a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3304a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3304a4: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x3304A4u;
    SET_GPR_U32(ctx, 31, 0x3304ACu);
    ctx->pc = 0x3304A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3304A4u;
    // 0x3304a8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x3304A4u, 0x3304ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3304ACu;
label_3304ac:
    // 0x3304ac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3304acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3304b0: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x3304b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x3304b4: 0x24525e84  addiu       $s2, $v0, 0x5E84
    ctx->pc = 0x3304b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 24196));
    // 0x3304b8: 0x2655fffc  addiu       $s5, $s2, -0x4
    ctx->pc = 0x3304b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x3304bc: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x3304bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_3304c0:
    // 0x3304c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3304c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3304c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3304c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3304c8: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x3304c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x3304cc: 0xc0e96f6  jal         func_3A5BD8
    ctx->pc = 0x3304CCu;
    SET_GPR_U32(ctx, 31, 0x3304D4u);
    ctx->pc = 0x3304D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3304CCu;
    // 0x3304d0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5BD8u, 0x3304CCu, 0x3304D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3304D4u;
label_3304d4:
    // 0x3304d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3304D4u;
    {
        const bool branch_taken_0x3304d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3304D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3304D4u;
        // 0x3304d8: 0x2e230020  sltiu       $v1, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3304d4) {
            ctx->pc = 0x3304E8u;
            goto label_3304e8;
        }
    }
    ctx->pc = 0x3304DCu;
    // 0x3304dc: 0x2151821  addu        $v1, $s0, $s5
    ctx->pc = 0x3304dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x3304e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3304E0u;
    {
        const bool branch_taken_0x3304e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3304E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3304E0u;
        // 0x3304e4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3304e0) {
            ctx->pc = 0x3304F4u;
            goto label_3304f4;
        }
    }
    ctx->pc = 0x3304E8u;
label_3304e8:
    // 0x3304e8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x3304E8u;
    {
        const bool branch_taken_0x3304e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3304ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3304E8u;
        // 0x3304ec: 0x118100  sll         $s0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3304e8) {
            ctx->pc = 0x3304C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3304c0;
        }
    }
    ctx->pc = 0x3304F0u;
    // 0x3304f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3304f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3304f4:
    // 0x3304f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3304f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3304f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3304f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3304fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3304fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330500: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x330500u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x330504: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x330504u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x330508: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x330508u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33050c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33050cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x330510: 0x3e00008  jr          $ra
    ctx->pc = 0x330510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330510u;
        // 0x330514: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330518u;
}
