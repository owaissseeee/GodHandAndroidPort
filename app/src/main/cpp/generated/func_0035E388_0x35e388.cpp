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

// Function: func_0035E388
// Address: 0x35e388 - 0x35e400
void func_0035E388_0x35e388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035E388_0x35e388");
#endif

    switch (ctx->pc) {
        case 0x35e3b0u: goto label_35e3b0;
        case 0x35e3c4u: goto label_35e3c4;
        default: break;
    }

    ctx->pc = 0x35e388u;

    // 0x35e388: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35e388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35e38c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35e38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35e390: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x35e390u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e394: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35e394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35e398: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x35e398u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x35e39c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x35e39cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x35e3a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35e3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35e3a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35e3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35e3a8: 0xc0d783c  jal         func_35E0F0
    ctx->pc = 0x35E3A8u;
    SET_GPR_U32(ctx, 31, 0x35E3B0u);
    ctx->pc = 0x35E3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E3A8u;
    // 0x35e3ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E0F0u, 0x35E3A8u, 0x35E3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E3B0u;
label_35e3b0:
    // 0x35e3b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35e3b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e3b4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x35E3B4u;
    {
        const bool branch_taken_0x35e3b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E3B4u;
        // 0x35e3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e3b4) {
            ctx->pc = 0x35E3E4u;
            goto label_35e3e4;
        }
    }
    ctx->pc = 0x35E3BCu;
    // 0x35e3bc: 0xc0d7a7a  jal         func_35E9E8
    ctx->pc = 0x35E3BCu;
    SET_GPR_U32(ctx, 31, 0x35E3C4u);
    ctx->pc = 0x35E9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E9E8u, 0x35E3BCu, 0x35E3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E3C4u;
label_35e3c4:
    // 0x35e3c4: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x35e3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x35e3c8: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35E3C8u;
    {
        const bool branch_taken_0x35e3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35E3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E3C8u;
        // 0x35e3cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e3c8) {
            ctx->pc = 0x35E3E4u;
            goto label_35e3e4;
        }
    }
    ctx->pc = 0x35E3D0u;
    // 0x35e3d0: 0x9623001a  lhu         $v1, 0x1A($s1)
    ctx->pc = 0x35e3d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x35e3d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35e3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e3d8: 0x3864ffff  xori        $a0, $v1, 0xFFFF
    ctx->pc = 0x35e3d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65535);
    // 0x35e3dc: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x35e3dcu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x35e3e0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x35e3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_35e3e4:
    // 0x35e3e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e3e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e3e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35e3e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e3ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35e3ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e3f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35e3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35e3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x35E3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E3F4u;
        // 0x35e3f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E3FCu;
    // 0x35e3fc: 0x0  nop
    ctx->pc = 0x35e3fcu;
    // NOP
    ctx->pc = 0x35e400u;
}
