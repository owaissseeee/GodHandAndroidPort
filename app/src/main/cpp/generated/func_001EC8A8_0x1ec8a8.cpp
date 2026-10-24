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

// Function: func_001EC8A8
// Address: 0x1ec8a8 - 0x1ec928
void func_001EC8A8_0x1ec8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001EC8A8_0x1ec8a8");
#endif

    switch (ctx->pc) {
        case 0x1ec900u: goto label_1ec900;
        case 0x1ec908u: goto label_1ec908;
        case 0x1ec914u: goto label_1ec914;
        default: break;
    }

    ctx->pc = 0x1ec8a8u;

    // 0x1ec8a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ec8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ec8ac: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1ec8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1ec8b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ec8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ec8b4: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x1ec8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A2Cu));
    // 0x1ec8b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ec8b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec8bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ec8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ec8c0: 0x24647a2c  addiu       $a0, $v1, 0x7A2C
    ctx->pc = 0x1ec8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31276));
    // 0x1ec8c4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1ec8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1ec8c8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EC8C8u;
    {
        const bool branch_taken_0x1ec8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC8C8u;
        // 0x1ec8cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec8c8) {
            ctx->pc = 0x1EC914u;
            goto label_1ec914;
        }
    }
    ctx->pc = 0x1EC8D0u;
    // 0x1ec8d0: 0xdc82fc24  ld          $v0, -0x3DC($a0)
    ctx->pc = 0x1ec8d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4294966308)));
    // 0x1ec8d4: 0x3403cc00  ori         $v1, $zero, 0xCC00
    ctx->pc = 0x1ec8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x1ec8d8: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1ec8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1ec8dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ec8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ec8e0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EC8E0u;
    {
        const bool branch_taken_0x1ec8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC8E0u;
        // 0x1ec8e4: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec8e0) {
            ctx->pc = 0x1EC914u;
            goto label_1ec914;
        }
    }
    ctx->pc = 0x1EC8E8u;
    // 0x1ec8e8: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x1ec8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1ec8ec: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x1ec8ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x1ec8f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ec8f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec8f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ec8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec8f8: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1EC8F8u;
    SET_GPR_U32(ctx, 31, 0x1EC900u);
    ctx->pc = 0x1EC8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC8F8u;
    // 0x1ec8fc: 0x26310210  addiu       $s1, $s1, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1EC8F8u, 0x1EC900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC900u;
label_1ec900:
    // 0x1ec900: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x1EC900u;
    SET_GPR_U32(ctx, 31, 0x1EC908u);
    ctx->pc = 0x1EC904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC900u;
    // 0x1ec904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1EC900u, 0x1EC908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC908u;
label_1ec908:
    // 0x1ec908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ec908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec90c: 0xc07b524  jal         func_1ED490
    ctx->pc = 0x1EC90Cu;
    SET_GPR_U32(ctx, 31, 0x1EC914u);
    ctx->pc = 0x1EC910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC90Cu;
    // 0x1ec910: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED490u, 0x1EC90Cu, 0x1EC914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC914u;
label_1ec914:
    // 0x1ec914: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ec914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec918: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ec918u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec91c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec920: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC920u;
        // 0x1ec924: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC928u;
}
