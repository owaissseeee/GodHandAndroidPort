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

// Function: func_0032AFB0
// Address: 0x32afb0 - 0x32b0b0
void func_0032AFB0_0x32afb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032AFB0_0x32afb0");
#endif

    switch (ctx->pc) {
        case 0x32afd4u: goto label_32afd4;
        case 0x32b00cu: goto label_32b00c;
        case 0x32b014u: goto label_32b014;
        case 0x32b01cu: goto label_32b01c;
        case 0x32b030u: goto label_32b030;
        case 0x32b044u: goto label_32b044;
        case 0x32b060u: goto label_32b060;
        case 0x32b07cu: goto label_32b07c;
        default: break;
    }

    ctx->pc = 0x32afb0u;

    // 0x32afb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32afb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32afb4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32afb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x32afb8: 0x3c13003d  lui         $s3, 0x3D
    ctx->pc = 0x32afb8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)61 << 16));
    // 0x32afbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32afbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32afc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32afc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32afc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32afc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32afc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32afc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32afcc: 0xc0cf99e  jal         func_33E678
    ctx->pc = 0x32AFCCu;
    SET_GPR_U32(ctx, 31, 0x32AFD4u);
    ctx->pc = 0x32AFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AFCCu;
    // 0x32afd0: 0x2670140c  addiu       $s0, $s3, 0x140C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 5132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E678u, 0x32AFCCu, 0x32AFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AFD4u;
label_32afd4:
    // 0x32afd4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32afd8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32AFD8u;
    {
        const bool branch_taken_0x32afd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFD8u;
        // 0x32afdc: 0xdfb20010  ld          $s2, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32afd8) {
            ctx->pc = 0x32AFF8u;
            goto label_32aff8;
        }
    }
    ctx->pc = 0x32AFE0u;
    // 0x32afe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32afe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32afe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32afe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32afe8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32afe8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32afec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32afecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32aff0: 0x80cf9a4  j           func_33E690
    ctx->pc = 0x32AFF0u;
    ctx->pc = 0x32AFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AFF0u;
    // 0x32aff4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E690u, 0x32AFF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32AFF8u;
label_32aff8:
    // 0x32aff8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32affc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x32affcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b000: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32b000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32b004: 0xc0cf9a4  jal         func_33E690
    ctx->pc = 0x32B004u;
    SET_GPR_U32(ctx, 31, 0x32B00Cu);
    ctx->pc = 0x32B008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B004u;
    // 0x32b008: 0x2411000f  addiu       $s1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E690u, 0x32B004u, 0x32B00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B00Cu;
label_32b00c:
    // 0x32b00c: 0xc0cf99e  jal         func_33E678
    ctx->pc = 0x32B00Cu;
    SET_GPR_U32(ctx, 31, 0x32B014u);
    ctx->pc = 0x33E678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E678u, 0x32B00Cu, 0x32B014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B014u;
label_32b014:
    // 0x32b014: 0xc0c9daa  jal         func_3276A8
    ctx->pc = 0x32B014u;
    SET_GPR_U32(ctx, 31, 0x32B01Cu);
    ctx->pc = 0x3276A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3276A8u, 0x32B014u, 0x32B01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B01Cu;
label_32b01c:
    // 0x32b01c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32b020: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x32b020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x32b024: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32b024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32b028: 0x24707420  addiu       $s0, $v1, 0x7420
    ctx->pc = 0x32b028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 29728));
    // 0x32b02c: 0x0  nop
    ctx->pc = 0x32b02cu;
    // NOP
label_32b030:
    // 0x32b030: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x32b030u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32b034: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x32B034u;
    {
        const bool branch_taken_0x32b034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x32b034) {
            ctx->pc = 0x32B038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B034u;
            // 0x32b038: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B048u;
            goto label_32b048;
        }
    }
    ctx->pc = 0x32B03Cu;
    // 0x32b03c: 0xc0cb3f2  jal         func_32CFC8
    ctx->pc = 0x32B03Cu;
    SET_GPR_U32(ctx, 31, 0x32B044u);
    ctx->pc = 0x32B040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B03Cu;
    // 0x32b040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CFC8u, 0x32B03Cu, 0x32B044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B044u;
label_32b044:
    // 0x32b044: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x32b044u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_32b048:
    // 0x32b048: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x32B048u;
    {
        const bool branch_taken_0x32b048 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x32B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B048u;
        // 0x32b04c: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b048) {
            ctx->pc = 0x32B030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32b030;
        }
    }
    ctx->pc = 0x32B050u;
    // 0x32b050: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32b050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32b054: 0x2670140c  addiu       $s0, $s3, 0x140C
    ctx->pc = 0x32b054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 5132));
    // 0x32b058: 0xc0c98e4  jal         func_326390
    ctx->pc = 0x32B058u;
    SET_GPR_U32(ctx, 31, 0x32B060u);
    ctx->pc = 0x32B05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B058u;
    // 0x32b05c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326390u, 0x32B058u, 0x32B060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B060u;
label_32b060:
    // 0x32b060: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x32b060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x32b064: 0x8c621414  lw          $v0, 0x1414($v1)
    ctx->pc = 0x32b064u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3D1414u));
    // 0x32b068: 0x28420033  slti        $v0, $v0, 0x33
    ctx->pc = 0x32b068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x32b06c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B06Cu;
    {
        const bool branch_taken_0x32b06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b06c) {
            ctx->pc = 0x32B07Cu;
            goto label_32b07c;
        }
    }
    ctx->pc = 0x32B074u;
    // 0x32b074: 0xc0c98e4  jal         func_326390
    ctx->pc = 0x32B074u;
    SET_GPR_U32(ctx, 31, 0x32B07Cu);
    ctx->pc = 0x326390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326390u, 0x32B074u, 0x32B07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B07Cu;
label_32b07c:
    // 0x32b07c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x32b07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x32b080: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32b080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32b084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32b084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b088: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32b088u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32b08c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32b08cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32b090: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32b090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32b094: 0x80cf9a4  j           func_33E690
    ctx->pc = 0x32B094u;
    ctx->pc = 0x32B098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B094u;
    // 0x32b098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E690u, 0x32B094u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32B09Cu;
    // 0x32b09c: 0x0  nop
    ctx->pc = 0x32b09cu;
    // NOP
    // 0x32b0a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x32b0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32b0a4: 0x0  nop
    ctx->pc = 0x32b0a4u;
    // NOP
    // 0x32b0a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x32b0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32b0ac: 0x0  nop
    ctx->pc = 0x32b0acu;
    // NOP
    ctx->pc = 0x32b0b0u;
}
