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

// Function: func_00369FB8
// Address: 0x369fb8 - 0x36a070
void func_00369FB8_0x369fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00369FB8_0x369fb8");
#endif

    switch (ctx->pc) {
        case 0x369fdcu: goto label_369fdc;
        case 0x36a018u: goto label_36a018;
        case 0x36a020u: goto label_36a020;
        case 0x36a044u: goto label_36a044;
        default: break;
    }

    ctx->pc = 0x369fb8u;

    // 0x369fb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x369fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x369fbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x369fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x369fc0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x369fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369fc4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x369fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x369fc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x369fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x369fcc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x369fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x369fd0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x369fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x369fd4: 0xc0db17e  jal         func_36C5F8
    ctx->pc = 0x369FD4u;
    SET_GPR_U32(ctx, 31, 0x369FDCu);
    ctx->pc = 0x369FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369FD4u;
    // 0x369fd8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5F8u, 0x369FD4u, 0x369FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369FDCu;
label_369fdc:
    // 0x369fdc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x369FDCu;
    {
        const bool branch_taken_0x369fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x369FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369FDCu;
        // 0x369fe0: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369fdc) {
            ctx->pc = 0x36A008u;
            goto label_36a008;
        }
    }
    ctx->pc = 0x369FE4u;
    // 0x369fe4: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x369fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x369fe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x369fe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369fec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x369fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369ff0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x369ff0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369ff4: 0x34a5020a  ori         $a1, $a1, 0x20A
    ctx->pc = 0x369ff4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)522);
    // 0x369ff8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x369ff8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x369ffc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x369ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a000: 0x80da7c8  j           func_369F20
    ctx->pc = 0x36A000u;
    ctx->pc = 0x36A004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A000u;
    // 0x36a004: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369F20u, 0x36A000u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36A008u;
label_36a008:
    // 0x36a008: 0x3c11ff03  lui         $s1, 0xFF03
    ctx->pc = 0x36a008u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65283 << 16));
    // 0x36a00c: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x36a00cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36a010: 0x36310305  ori         $s1, $s1, 0x305
    ctx->pc = 0x36a010u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)773);
    // 0x36a014: 0x0  nop
    ctx->pc = 0x36a014u;
    // NOP
label_36a018:
    // 0x36a018: 0xc0daede  jal         func_36BB78
    ctx->pc = 0x36A018u;
    SET_GPR_U32(ctx, 31, 0x36A020u);
    ctx->pc = 0x36A01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A018u;
    // 0x36a01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36BB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36BB78u, 0x36A018u, 0x36A020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A020u;
label_36a020:
    // 0x36a020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36a020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a024: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36a024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a028: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x36a028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36a02c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36A02Cu;
    {
        const bool branch_taken_0x36a02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A02Cu;
        // 0x36a030: 0x304300cc  andi        $v1, $v0, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)204);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a02c) {
            ctx->pc = 0x36A04Cu;
            goto label_36a04c;
        }
    }
    ctx->pc = 0x36A034u;
    // 0x36a034: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x36A034u;
    {
        const bool branch_taken_0x36a034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a034) {
            ctx->pc = 0x36A038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36A034u;
            // 0x36a038: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36A04Cu;
            goto label_36a04c;
        }
    }
    ctx->pc = 0x36A03Cu;
    // 0x36a03c: 0xc0daf68  jal         func_36BDA0
    ctx->pc = 0x36A03Cu;
    SET_GPR_U32(ctx, 31, 0x36A044u);
    ctx->pc = 0x36BDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36BDA0u, 0x36A03Cu, 0x36A044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A044u;
label_36a044:
    // 0x36a044: 0x1052fff4  beq         $v0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x36A044u;
    {
        const bool branch_taken_0x36a044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x36a044) {
            ctx->pc = 0x36A018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a018;
        }
    }
    ctx->pc = 0x36A04Cu;
label_36a04c:
    // 0x36a04c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36a04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a050: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x36a050u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36a054: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36a054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a058: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36a058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a05c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a05cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a060: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36a060u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a064: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36a064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a068: 0x80da7c8  j           func_369F20
    ctx->pc = 0x36A068u;
    ctx->pc = 0x36A06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A068u;
    // 0x36a06c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369F20u, 0x36A068u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36A070u;
}
