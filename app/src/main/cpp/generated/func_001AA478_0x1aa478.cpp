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

// Function: func_001AA478
// Address: 0x1aa478 - 0x1aa500
void func_001AA478_0x1aa478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AA478_0x1aa478");
#endif

    switch (ctx->pc) {
        case 0x1aa4b8u: goto label_1aa4b8;
        case 0x1aa4d4u: goto label_1aa4d4;
        case 0x1aa4f4u: goto label_1aa4f4;
        default: break;
    }

    ctx->pc = 0x1aa478u;

    // 0x1aa478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa47c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa480: 0x8c8209e0  lw          $v0, 0x9E0($a0)
    ctx->pc = 0x1aa480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x1aa484: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1AA484u;
    {
        const bool branch_taken_0x1aa484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA484u;
        // 0x1aa488: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa484) {
            ctx->pc = 0x1AA4F4u;
            goto label_1aa4f4;
        }
    }
    ctx->pc = 0x1AA48Cu;
    // 0x1aa48c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AA48Cu;
    {
        const bool branch_taken_0x1aa48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA48Cu;
        // 0x1aa490: 0xac8209e0  sw          $v0, 0x9E0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa48c) {
            ctx->pc = 0x1AA4DCu;
            goto label_1aa4dc;
        }
    }
    ctx->pc = 0x1AA494u;
    // 0x1aa494: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1aa494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1aa498: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AA498u;
    {
        const bool branch_taken_0x1aa498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA498u;
        // 0x1aa49c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa498) {
            ctx->pc = 0x1AA4C0u;
            goto label_1aa4c0;
        }
    }
    ctx->pc = 0x1AA4A0u;
    // 0x1aa4a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aa4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa4a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1aa4a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aa4a8: 0x0  nop
    ctx->pc = 0x1aa4a8u;
    // NOP
    // 0x1aa4ac: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1aa4acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1aa4b0: 0xc06dc68  jal         func_1B71A0
    ctx->pc = 0x1AA4B0u;
    SET_GPR_U32(ctx, 31, 0x1AA4B8u);
    ctx->pc = 0x1AA4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA4B0u;
    // 0x1aa4b4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A0u, 0x1AA4B0u, 0x1AA4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA4B8u;
label_1aa4b8:
    // 0x1aa4b8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1AA4B8u;
    {
        const bool branch_taken_0x1aa4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA4B8u;
        // 0x1aa4bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa4b8) {
            ctx->pc = 0x1AA4F8u;
            goto label_1aa4f8;
        }
    }
    ctx->pc = 0x1AA4C0u;
label_1aa4c0:
    // 0x1aa4c0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1aa4c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1aa4c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aa4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa4c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1aa4c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aa4cc: 0xc06dc68  jal         func_1B71A0
    ctx->pc = 0x1AA4CCu;
    SET_GPR_U32(ctx, 31, 0x1AA4D4u);
    ctx->pc = 0x1AA4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA4CCu;
    // 0x1aa4d0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A0u, 0x1AA4CCu, 0x1AA4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA4D4u;
label_1aa4d4:
    // 0x1aa4d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AA4D4u;
    {
        const bool branch_taken_0x1aa4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA4D4u;
        // 0x1aa4d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa4d4) {
            ctx->pc = 0x1AA4F8u;
            goto label_1aa4f8;
        }
    }
    ctx->pc = 0x1AA4DCu;
label_1aa4dc:
    // 0x1aa4dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aa4dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa4e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1aa4e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aa4e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aa4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa4e8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1aa4e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1aa4ec: 0xc06dc68  jal         func_1B71A0
    ctx->pc = 0x1AA4ECu;
    SET_GPR_U32(ctx, 31, 0x1AA4F4u);
    ctx->pc = 0x1AA4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA4ECu;
    // 0x1aa4f0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A0u, 0x1AA4ECu, 0x1AA4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA4F4u;
label_1aa4f4:
    // 0x1aa4f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aa4f8:
    // 0x1aa4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA4F8u;
        // 0x1aa4fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA500u;
}
