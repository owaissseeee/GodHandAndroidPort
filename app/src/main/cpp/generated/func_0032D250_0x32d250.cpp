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

// Function: func_0032D250
// Address: 0x32d250 - 0x32d340
void func_0032D250_0x32d250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032D250_0x32d250");
#endif

    switch (ctx->pc) {
        case 0x32d290u: goto label_32d290;
        case 0x32d2a4u: goto label_32d2a4;
        case 0x32d2c4u: goto label_32d2c4;
        case 0x32d2d4u: goto label_32d2d4;
        case 0x32d2e8u: goto label_32d2e8;
        case 0x32d2f0u: goto label_32d2f0;
        case 0x32d2f8u: goto label_32d2f8;
        case 0x32d30cu: goto label_32d30c;
        case 0x32d314u: goto label_32d314;
        default: break;
    }

    ctx->pc = 0x32d250u;

    // 0x32d250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32d250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32d254: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x32d254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x32d258: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32d258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32d25c: 0x24631474  addiu       $v1, $v1, 0x1474
    ctx->pc = 0x32d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5236));
    // 0x32d260: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32d260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32d264: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32d264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32d268: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32d268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x32d26c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32d26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32d270: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32d270u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3D1474u));
    // 0x32d274: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32d274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32d278: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x32D278u;
    {
        const bool branch_taken_0x32d278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D278u;
        // 0x32d27c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d278) {
            ctx->pc = 0x32D320u;
            goto label_32d320;
        }
    }
    ctx->pc = 0x32D280u;
    // 0x32d280: 0x3c13003d  lui         $s3, 0x3D
    ctx->pc = 0x32d280u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)61 << 16));
    // 0x32d284: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x32d284u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d288: 0x26701488  addiu       $s0, $s3, 0x1488
    ctx->pc = 0x32d288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 5256));
    // 0x32d28c: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x32d28cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32d290:
    // 0x32d290: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x32d290u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32d294: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x32D294u;
    {
        const bool branch_taken_0x32d294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x32d294) {
            ctx->pc = 0x32D298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D294u;
            // 0x32d298: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D2A8u;
            goto label_32d2a8;
        }
    }
    ctx->pc = 0x32D29Cu;
    // 0x32d29c: 0xc0cb5c8  jal         func_32D720
    ctx->pc = 0x32D29Cu;
    SET_GPR_U32(ctx, 31, 0x32D2A4u);
    ctx->pc = 0x32D2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D29Cu;
    // 0x32d2a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D720u, 0x32D29Cu, 0x32D2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D2A4u;
label_32d2a4:
    // 0x32d2a4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x32d2a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_32d2a8:
    // 0x32d2a8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x32D2A8u;
    {
        const bool branch_taken_0x32d2a8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x32D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D2A8u;
        // 0x32d2ac: 0x26100278  addiu       $s0, $s0, 0x278 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d2a8) {
            ctx->pc = 0x32D290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32d290;
        }
    }
    ctx->pc = 0x32D2B0u;
    // 0x32d2b0: 0x26701488  addiu       $s0, $s3, 0x1488
    ctx->pc = 0x32d2b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 5256));
    // 0x32d2b4: 0x240609e0  addiu       $a2, $zero, 0x9E0
    ctx->pc = 0x32d2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2528));
    // 0x32d2b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32d2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d2bc: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x32D2BCu;
    SET_GPR_U32(ctx, 31, 0x32D2C4u);
    ctx->pc = 0x32D2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D2BCu;
    // 0x32d2c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x32D2BCu, 0x32D2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D2C4u;
label_32d2c4:
    // 0x32d2c4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x32d2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32d2c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32d2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d2cc: 0xc0cee4e  jal         func_33B938
    ctx->pc = 0x32D2CCu;
    SET_GPR_U32(ctx, 31, 0x32D2D4u);
    ctx->pc = 0x32D2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D2CCu;
    // 0x32d2d0: 0x3c120045  lui         $s2, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)69 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B938u, 0x32D2CCu, 0x32D2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D2D4u;
label_32d2d4:
    // 0x32d2d4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x32d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x32d2d8: 0x8c451478  lw          $a1, 0x1478($v0)
    ctx->pc = 0x32d2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3D1478u));
    // 0x32d2dc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x32d2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32d2e0: 0xc0cee4e  jal         func_33B938
    ctx->pc = 0x32D2E0u;
    SET_GPR_U32(ctx, 31, 0x32D2E8u);
    ctx->pc = 0x32D2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D2E0u;
    // 0x32d2e4: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B938u, 0x32D2E0u, 0x32D2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D2E8u;
label_32d2e8:
    // 0x32d2e8: 0xc0cbca2  jal         func_32F288
    ctx->pc = 0x32D2E8u;
    SET_GPR_U32(ctx, 31, 0x32D2F0u);
    ctx->pc = 0x32F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F288u, 0x32D2E8u, 0x32D2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D2F0u;
label_32d2f0:
    // 0x32d2f0: 0xc0c92b2  jal         func_324AC8
    ctx->pc = 0x32D2F0u;
    SET_GPR_U32(ctx, 31, 0x32D2F8u);
    ctx->pc = 0x324AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324AC8u, 0x32D2F0u, 0x32D2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D2F8u;
label_32d2f8:
    // 0x32d2f8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x32d2f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32d2fc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x32D2FCu;
    {
        const bool branch_taken_0x32d2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d2fc) {
            ctx->pc = 0x32D300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D2FCu;
            // 0x32d300: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D318u;
            goto label_32d318;
        }
    }
    ctx->pc = 0x32D304u;
    // 0x32d304: 0xc0cede4  jal         func_33B790
    ctx->pc = 0x32D304u;
    SET_GPR_U32(ctx, 31, 0x32D30Cu);
    ctx->pc = 0x32D308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D304u;
    // 0x32d308: 0x264429a0  addiu       $a0, $s2, 0x29A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 10656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B790u, 0x32D304u, 0x32D30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D30Cu;
label_32d30c:
    // 0x32d30c: 0xc0cb5c8  jal         func_32D720
    ctx->pc = 0x32D30Cu;
    SET_GPR_U32(ctx, 31, 0x32D314u);
    ctx->pc = 0x32D310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D30Cu;
    // 0x32d310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D720u, 0x32D30Cu, 0x32D314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D314u;
label_32d314:
    // 0x32d314: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x32d314u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_32d318:
    // 0x32d318: 0x621fff7  bgez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x32D318u;
    {
        const bool branch_taken_0x32d318 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x32D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D318u;
        // 0x32d31c: 0x26100278  addiu       $s0, $s0, 0x278 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d318) {
            ctx->pc = 0x32D2F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32d2f8;
        }
    }
    ctx->pc = 0x32D320u;
label_32d320:
    // 0x32d320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32d320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d324: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32d324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32d328: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32d328u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d32c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32d32cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32d330: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32d330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d334: 0x3e00008  jr          $ra
    ctx->pc = 0x32D334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D334u;
        // 0x32d338: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D33Cu;
    // 0x32d33c: 0x0  nop
    ctx->pc = 0x32d33cu;
    // NOP
    ctx->pc = 0x32d340u;
}
