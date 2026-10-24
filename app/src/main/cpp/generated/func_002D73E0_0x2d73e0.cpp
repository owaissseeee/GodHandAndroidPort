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

// Function: func_002D73E0
// Address: 0x2d73e0 - 0x2d74b8
void func_002D73E0_0x2d73e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D73E0_0x2d73e0");
#endif

    switch (ctx->pc) {
        case 0x2d7414u: goto label_2d7414;
        case 0x2d7420u: goto label_2d7420;
        case 0x2d7458u: goto label_2d7458;
        case 0x2d746cu: goto label_2d746c;
        default: break;
    }

    ctx->pc = 0x2d73e0u;

    // 0x2d73e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d73e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d73e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d73e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d73e8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2d73e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2d73ec: 0x24067000  addiu       $a2, $zero, 0x7000
    ctx->pc = 0x2d73ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x2d73f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d73f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d73f4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2d73f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2d73f8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2d73f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2d73fc: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x2d73fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x2d7400: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2d7400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2d7404: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2d7404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2d7408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d7408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d740c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2D740Cu;
    SET_GPR_U32(ctx, 31, 0x2D7414u);
    ctx->pc = 0x2D7410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D740Cu;
    // 0x2d7410: 0x241100ff  addiu       $s1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2D740Cu, 0x2D7414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7414u;
label_2d7414:
    // 0x2d7414: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2d7414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d7418: 0x26627010  addiu       $v0, $s3, 0x7010
    ctx->pc = 0x2d7418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 28688));
    // 0x2d741c: 0x0  nop
    ctx->pc = 0x2d741cu;
    // NOP
label_2d7420:
    // 0x2d7420: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x2d7420u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d7424: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2d7424u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2d7428: 0x0  nop
    ctx->pc = 0x2d7428u;
    // NOP
    // 0x2d742c: 0x0  nop
    ctx->pc = 0x2d742cu;
    // NOP
    // 0x2d7430: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D7430u;
    {
        const bool branch_taken_0x2d7430 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x2D7434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7430u;
        // 0x2d7434: 0x2442ff90  addiu       $v0, $v0, -0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7430) {
            ctx->pc = 0x2D7420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7420;
        }
    }
    ctx->pc = 0x2D7438u;
    // 0x2d7438: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d7438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d743c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2d743cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2d7440: 0x34426100  ori         $v0, $v0, 0x6100
    ctx->pc = 0x2d7440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24832);
    // 0x2d7444: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2d7444u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2d7448: 0x2629021  addu        $s2, $s3, $v0
    ctx->pc = 0x2d7448u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2d744c: 0x2638021  addu        $s0, $s3, $v1
    ctx->pc = 0x2d744cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2d7450: 0x3c140075  lui         $s4, 0x75
    ctx->pc = 0x2d7450u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)117 << 16));
    // 0x2d7454: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x2d7454u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2d7458:
    // 0x2d7458: 0x8e055d74  lw          $a1, 0x5D74($s0)
    ctx->pc = 0x2d7458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23924)));
    // 0x2d745c: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D745Cu;
    {
        const bool branch_taken_0x2d745c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d745c) {
            ctx->pc = 0x2D7460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D745Cu;
            // 0x2d7460: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7474u;
            goto label_2d7474;
        }
    }
    ctx->pc = 0x2D7464u;
    // 0x2d7464: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2D7464u;
    SET_GPR_U32(ctx, 31, 0x2D746Cu);
    ctx->pc = 0x2D7468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7464u;
    // 0x2d7468: 0x26844220  addiu       $a0, $s4, 0x4220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2D7464u, 0x2D746Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D746Cu;
label_2d746c:
    // 0x2d746c: 0xae005d74  sw          $zero, 0x5D74($s0)
    ctx->pc = 0x2d746cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23924), GPR_U32(ctx, 0));
    // 0x2d7470: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2d7470u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2d7474:
    // 0x2d7474: 0x26100080  addiu       $s0, $s0, 0x80
    ctx->pc = 0x2d7474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2d7478: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2d7478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2d747c: 0x621fff6  bgez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D747Cu;
    {
        const bool branch_taken_0x2d747c = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x2D7480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D747Cu;
        // 0x2d7480: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d747c) {
            ctx->pc = 0x2D7458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7458;
        }
    }
    ctx->pc = 0x2D7484u;
    // 0x2d7484: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d7484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d7488: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2d7488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d748c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2d748cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2d7490: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2d7490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d7494: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2d7494u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7498: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2d7498u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d749c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2d749cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d74a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d74a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d74a4: 0xac406120  sw          $zero, 0x6120($v0)
    ctx->pc = 0x2d74a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24864), GPR_U32(ctx, 0));
    // 0x2d74a8: 0xac406130  sw          $zero, 0x6130($v0)
    ctx->pc = 0x2d74a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24880), GPR_U32(ctx, 0));
    // 0x2d74ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2D74ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D74B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D74ACu;
        // 0x2d74b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D74ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D74B4u;
    // 0x2d74b4: 0x0  nop
    ctx->pc = 0x2d74b4u;
    // NOP
    ctx->pc = 0x2d74b8u;
}
