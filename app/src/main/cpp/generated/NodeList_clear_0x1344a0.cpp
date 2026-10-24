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

// Function: NodeList_clear
// Address: 0x1344a0 - 0x134520
void NodeList_clear_0x1344a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NodeList_clear_0x1344a0");
#endif

    switch (ctx->pc) {
        case 0x1344a0u: goto label_1344a0;
        case 0x1344a4u: goto label_1344a4;
        case 0x1344a8u: goto label_1344a8;
        case 0x1344acu: goto label_1344ac;
        case 0x1344b0u: goto label_1344b0;
        case 0x1344b4u: goto label_1344b4;
        case 0x1344b8u: goto label_1344b8;
        case 0x1344bcu: goto label_1344bc;
        case 0x1344c0u: goto label_1344c0;
        case 0x1344c4u: goto label_1344c4;
        case 0x1344c8u: goto label_1344c8;
        case 0x1344ccu: goto label_1344cc;
        case 0x1344d0u: goto label_1344d0;
        case 0x1344d4u: goto label_1344d4;
        case 0x1344d8u: goto label_1344d8;
        case 0x1344dcu: goto label_1344dc;
        case 0x1344e0u: goto label_1344e0;
        case 0x1344e4u: goto label_1344e4;
        case 0x1344e8u: goto label_1344e8;
        case 0x1344ecu: goto label_1344ec;
        case 0x1344f0u: goto label_1344f0;
        case 0x1344f4u: goto label_1344f4;
        case 0x1344f8u: goto label_1344f8;
        case 0x1344fcu: goto label_1344fc;
        case 0x134500u: goto label_134500;
        case 0x134504u: goto label_134504;
        case 0x134508u: goto label_134508;
        case 0x13450cu: goto label_13450c;
        case 0x134510u: goto label_134510;
        case 0x134514u: goto label_134514;
        case 0x134518u: goto label_134518;
        case 0x13451cu: goto label_13451c;
        default: break;
    }

    ctx->pc = 0x1344a0u;

label_1344a0:
    // 0x1344a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1344a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1344a4:
    // 0x1344a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1344a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1344a8:
    // 0x1344a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1344a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1344ac:
    // 0x1344ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1344acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1344b0:
    // 0x1344b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1344b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1344b4:
    // 0x1344b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1344b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1344b8:
    // 0x1344b8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1344b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1344bc:
    // 0x1344bc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1344c0:
    if (ctx->pc == 0x1344C0u) {
        ctx->pc = 0x1344C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1344BCu;
        // 0x1344c0: 0x3c120046  lui         $s2, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1344C4u;
        goto label_1344c4;
    }
    ctx->pc = 0x1344BCu;
    {
        const bool branch_taken_0x1344bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1344C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1344BCu;
        // 0x1344c0: 0x3c120046  lui         $s2, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1344bc) {
            ctx->pc = 0x134504u;
            goto label_134504;
        }
    }
    ctx->pc = 0x1344C4u;
label_1344c4:
    // 0x1344c4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1344c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1344c8:
    // 0x1344c8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1344cc:
    if (ctx->pc == 0x1344CCu) {
        ctx->pc = 0x1344CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1344C8u;
        // 0x1344cc: 0x8cd10000  lw          $s1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1344D0u;
        goto label_1344d0;
    }
    ctx->pc = 0x1344C8u;
    {
        const bool branch_taken_0x1344c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1344CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1344C8u;
        // 0x1344cc: 0x8cd10000  lw          $s1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1344c8) {
            ctx->pc = 0x1344E8u;
            goto label_1344e8;
        }
    }
    ctx->pc = 0x1344D0u;
label_1344d0:
    // 0x1344d0: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x1344d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_1344d4:
    // 0x1344d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1344d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1344d8:
    // 0x1344d8: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1344d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1344dc:
    // 0x1344dc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1344dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1344e0:
    // 0x1344e0: 0x60f809  jalr        $v1
label_1344e4:
    if (ctx->pc == 0x1344E4u) {
        ctx->pc = 0x1344E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1344E0u;
        // 0x1344e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1344E8u;
        goto label_1344e8;
    }
    ctx->pc = 0x1344E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1344E8u);
        ctx->pc = 0x1344E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1344E0u;
        // 0x1344e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1344E0u, 0x1344E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1344E8u;
label_1344e8:
    // 0x1344e8: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x1344e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_1344ec:
    // 0x1344ec: 0x8e420d18  lw          $v0, 0xD18($s2)
    ctx->pc = 0x1344ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3352)));
label_1344f0:
    // 0x1344f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1344f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1344f4:
    // 0x1344f4: 0xae420d18  sw          $v0, 0xD18($s2)
    ctx->pc = 0x1344f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3352), GPR_U32(ctx, 2));
label_1344f8:
    // 0x1344f8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1344f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1344fc:
    // 0x1344fc: 0x5460fff2  bnel        $v1, $zero, . + 4 + (-0xE << 2)
label_134500:
    if (ctx->pc == 0x134500u) {
        ctx->pc = 0x134500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1344FCu;
        // 0x134500: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134504u;
        goto label_134504;
    }
    ctx->pc = 0x1344FCu;
    {
        const bool branch_taken_0x1344fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1344fc) {
            ctx->pc = 0x134500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1344FCu;
            // 0x134500: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1344C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1344c8;
        }
    }
    ctx->pc = 0x134504u;
label_134504:
    // 0x134504: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x134504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_134508:
    // 0x134508: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x134508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13450c:
    // 0x13450c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x13450cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_134510:
    // 0x134510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x134510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_134514:
    // 0x134514: 0x3e00008  jr          $ra
label_134518:
    if (ctx->pc == 0x134518u) {
        ctx->pc = 0x134518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134514u;
        // 0x134518: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13451Cu;
        goto label_13451c;
    }
    ctx->pc = 0x134514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134514u;
        // 0x134518: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13451Cu;
label_13451c:
    // 0x13451c: 0x0  nop
    ctx->pc = 0x13451cu;
    // NOP
    ctx->pc = 0x134520u;
}
