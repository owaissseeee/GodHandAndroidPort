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

// Function: iSetTimerHandler
// Address: 0x3b7400 - 0x3b7510
void iSetTimerHandler_0x3b7400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iSetTimerHandler_0x3b7400");
#endif

    switch (ctx->pc) {
        case 0x3b7480u: goto label_3b7480;
        case 0x3b74d8u: goto label_3b74d8;
        case 0x3b74e0u: goto label_3b74e0;
        case 0x3b74e8u: goto label_3b74e8;
        default: break;
    }

    ctx->pc = 0x3b7400u;

    // 0x3b7400: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b7400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3b7404: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x3b7404u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x3b7408: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3b7408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3b740c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3b740cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3b7410: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3b7410u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7414: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b7414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b7418: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3b7418u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b741c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b741cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b7420: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3b7420u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7424: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3b7424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3b7428: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x3b7428u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3b742c: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B742Cu;
    {
        const bool branch_taken_0x3b742c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x3B7430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B742Cu;
        // 0x3b7430: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b742c) {
            ctx->pc = 0x3B7444u;
            goto label_3b7444;
        }
    }
    ctx->pc = 0x3B7434u;
    // 0x3b7434: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3b7434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3b7438: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x3b7438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x3b743c: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B743Cu;
    {
        const bool branch_taken_0x3b743c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b743c) {
            ctx->pc = 0x3B7440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B743Cu;
            // 0x3b7440: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B7450u;
            goto label_3b7450;
        }
    }
    ctx->pc = 0x3B7444u;
label_3b7444:
    // 0x3b7444: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b7444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b7448: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3B7448u;
    {
        const bool branch_taken_0x3b7448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7448u;
        // 0x3b744c: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7448) {
            ctx->pc = 0x3B74ECu;
            goto label_3b74ec;
        }
    }
    ctx->pc = 0x3B7450u;
label_3b7450:
    // 0x3b7450: 0x2451be90  addiu       $s1, $v0, -0x4170
    ctx->pc = 0x3b7450u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950544));
    // 0x3b7454: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x3b7454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x3b7458: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B7458u;
    {
        const bool branch_taken_0x3b7458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3b7458) {
            ctx->pc = 0x3B745Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B7458u;
            // 0x3b745c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B746Cu;
            goto label_3b746c;
        }
    }
    ctx->pc = 0x3B7460u;
    // 0x3b7460: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b7460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b7464: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3B7464u;
    {
        const bool branch_taken_0x3b7464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7464u;
        // 0x3b7468: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7464) {
            ctx->pc = 0x3B74ECu;
            goto label_3b74ec;
        }
    }
    ctx->pc = 0x3B746Cu;
label_3b746c:
    // 0x3b746c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3b746cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3b7470: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B7470u;
    {
        const bool branch_taken_0x3b7470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7470) {
            ctx->pc = 0x3B7494u;
            goto label_3b7494;
        }
    }
    ctx->pc = 0x3B7478u;
    // 0x3b7478: 0xc0edb90  jal         func_3B6E40
    ctx->pc = 0x3B7478u;
    SET_GPR_U32(ctx, 31, 0x3B7480u);
    ctx->pc = 0x3B747Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7478u;
    // 0x3b747c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6E40u, 0x3B7478u, 0x3B7480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7480u;
label_3b7480:
    // 0x3b7480: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3b7480u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7484: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x3b7484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3b7488: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B7488u;
    {
        const bool branch_taken_0x3b7488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x3b7488) {
            ctx->pc = 0x3B748Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B7488u;
            // 0x3b748c: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B7490u;
            goto label_3b7490;
        }
    }
    ctx->pc = 0x3B7490u;
label_3b7490:
    // 0x3b7490: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3b7490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3b7494:
    // 0x3b7494: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B7494u;
    {
        const bool branch_taken_0x3b7494 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B7498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7494u;
        // 0x3b7498: 0xae120028  sw          $s2, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7494) {
            ctx->pc = 0x3B74B0u;
            goto label_3b74b0;
        }
    }
    ctx->pc = 0x3B749Cu;
    // 0x3b749c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3b749cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3b74a0: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x3b74a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x3b74a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3b74a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3b74a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3B74A8u;
    {
        const bool branch_taken_0x3b74a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B74ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B74A8u;
        // 0x3b74ac: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b74a8) {
            ctx->pc = 0x3B74D8u;
            goto label_3b74d8;
        }
    }
    ctx->pc = 0x3B74B0u;
label_3b74b0:
    // 0x3b74b0: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x3b74b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3b74b4: 0xfe130020  sd          $s3, 0x20($s0)
    ctx->pc = 0x3b74b4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 19));
    // 0x3b74b8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x3b74b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x3b74bc: 0xae1c002c  sw          $gp, 0x2C($s0)
    ctx->pc = 0x3b74bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 28));
    // 0x3b74c0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3b74c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3b74c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b74c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b74c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B74C8u;
    {
        const bool branch_taken_0x3b74c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B74CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B74C8u;
        // 0x3b74cc: 0xae140030  sw          $s4, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b74c8) {
            ctx->pc = 0x3B74D8u;
            goto label_3b74d8;
        }
    }
    ctx->pc = 0x3B74D0u;
    // 0x3b74d0: 0xc0edb6e  jal         func_3B6DB8
    ctx->pc = 0x3B74D0u;
    SET_GPR_U32(ctx, 31, 0x3B74D8u);
    ctx->pc = 0x3B74D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B74D0u;
    // 0x3b74d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6DB8u, 0x3B74D0u, 0x3B74D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B74D8u;
label_3b74d8:
    // 0x3b74d8: 0xc0edc4c  jal         func_3B7130
    ctx->pc = 0x3B74D8u;
    SET_GPR_U32(ctx, 31, 0x3B74E0u);
    ctx->pc = 0x3B7130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7130u, 0x3B74D8u, 0x3B74E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B74E0u;
label_3b74e0:
    // 0x3b74e0: 0xc0edb0a  jal         func_3B6C28
    ctx->pc = 0x3B74E0u;
    SET_GPR_U32(ctx, 31, 0x3B74E8u);
    ctx->pc = 0x3B74E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B74E0u;
    // 0x3b74e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6C28u, 0x3B74E0u, 0x3B74E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B74E8u;
label_3b74e8:
    // 0x3b74e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b74e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b74ec:
    // 0x3b74ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3b74ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b74f0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3b74f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b74f4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3b74f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b74f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b74f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b74fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b74fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b7500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b7500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b7504: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7504u;
        // 0x3b7508: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B750Cu;
    // 0x3b750c: 0x0  nop
    ctx->pc = 0x3b750cu;
    // NOP
    ctx->pc = 0x3b7510u;
}
