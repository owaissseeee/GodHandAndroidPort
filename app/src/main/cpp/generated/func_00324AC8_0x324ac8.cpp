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

// Function: func_00324AC8
// Address: 0x324ac8 - 0x324c50
void func_00324AC8_0x324ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00324AC8_0x324ac8");
#endif

    switch (ctx->pc) {
        case 0x324b0cu: goto label_324b0c;
        case 0x324b14u: goto label_324b14;
        case 0x324b1cu: goto label_324b1c;
        case 0x324b24u: goto label_324b24;
        case 0x324b2cu: goto label_324b2c;
        case 0x324b34u: goto label_324b34;
        case 0x324b40u: goto label_324b40;
        case 0x324b50u: goto label_324b50;
        case 0x324b60u: goto label_324b60;
        case 0x324b68u: goto label_324b68;
        case 0x324b70u: goto label_324b70;
        case 0x324b78u: goto label_324b78;
        case 0x324b80u: goto label_324b80;
        case 0x324b88u: goto label_324b88;
        case 0x324b90u: goto label_324b90;
        case 0x324b98u: goto label_324b98;
        case 0x324ba0u: goto label_324ba0;
        case 0x324bb0u: goto label_324bb0;
        case 0x324bc4u: goto label_324bc4;
        case 0x324bccu: goto label_324bcc;
        default: break;
    }

    ctx->pc = 0x324ac8u;

    // 0x324ac8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x324ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x324acc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x324accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x324ad0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x324ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x324ad4: 0x24637400  addiu       $v1, $v1, 0x7400
    ctx->pc = 0x324ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29696));
    // 0x324ad8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x324ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x324adc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x324adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x324ae0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x324ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x324ae4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x324ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C7400u));
    // 0x324ae8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x324ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x324aec: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x324AECu;
    {
        const bool branch_taken_0x324aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324AECu;
        // 0x324af0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324aec) {
            ctx->pc = 0x324BD8u;
            goto label_324bd8;
        }
    }
    ctx->pc = 0x324AF4u;
    // 0x324af4: 0x3c10003e  lui         $s0, 0x3E
    ctx->pc = 0x324af4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
    // 0x324af8: 0x3c120045  lui         $s2, 0x45
    ctx->pc = 0x324af8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)69 << 16));
    // 0x324afc: 0x261084ac  addiu       $s0, $s0, -0x7B54
    ctx->pc = 0x324afcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935724));
    // 0x324b00: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x324b00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x324b04: 0xc0ca6b2  jal         func_329AC8
    ctx->pc = 0x324B04u;
    SET_GPR_U32(ctx, 31, 0x324B0Cu);
    ctx->pc = 0x324B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324B04u;
    // 0x324b08: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329AC8u, 0x324B04u, 0x324B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324B0Cu;
label_324b0c:
    // 0x324b0c: 0xc0c98a8  jal         func_3262A0
    ctx->pc = 0x324B0Cu;
    SET_GPR_U32(ctx, 31, 0x324B14u);
    ctx->pc = 0x3262A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3262A0u, 0x324B0Cu, 0x324B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324B14u;
label_324b14:
    // 0x324b14: 0xc0cfd32  jal         func_33F4C8
    ctx->pc = 0x324B14u;
    SET_GPR_U32(ctx, 31, 0x324B1Cu);
    ctx->pc = 0x33F4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F4C8u, 0x324B14u, 0x324B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324B1Cu;
label_324b1c:
    // 0x324b1c: 0xc0c9e80  jal         func_327A00
    ctx->pc = 0x324B1Cu;
    SET_GPR_U32(ctx, 31, 0x324B24u);
    ctx->pc = 0x327A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327A00u, 0x324B1Cu, 0x324B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324B24u;
label_324b24:
    // 0x324b24: 0xc0cd798  jal         func_335E60
    ctx->pc = 0x324B24u;
    SET_GPR_U32(ctx, 31, 0x324B2Cu);
    ctx->pc = 0x335E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E60u, 0x324B24u, 0x324B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324B2Cu;
label_324b2c:
    // 0x324b2c: 0xc0cf99e  jal         func_33E678
    ctx->pc = 0x324B2Cu;
    SET_GPR_U32(ctx, 31, 0x324B34u);
    ctx->pc = 0x33E678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E678u, 0x324B2Cu, 0x324B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324B34u;
label_324b34:
    // 0x324b34: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x324b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x324b38: 0xc0cee4e  jal         func_33B938
    ctx->pc = 0x324B38u;
    SET_GPR_U32(ctx, 31, 0x324B40u);
    ctx->pc = 0x324B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324B38u;
    // 0x324b3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B938u, 0x324B38u, 0x324B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324B40u;
label_324b40:
    // 0x324b40: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x324b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x324b44: 0x8c457414  lw          $a1, 0x7414($v0)
    ctx->pc = 0x324b44u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C7414u));
    // 0x324b48: 0xc0cee4e  jal         func_33B938
    ctx->pc = 0x324B48u;
    SET_GPR_U32(ctx, 31, 0x324B50u);
    ctx->pc = 0x324B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324B48u;
    // 0x324b4c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B938u, 0x324B48u, 0x324B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324B50u;
label_324b50:
    // 0x324b50: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x324b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x324b54: 0x8c457408  lw          $a1, 0x7408($v0)
    ctx->pc = 0x324b54u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C7408u));
    // 0x324b58: 0xc0cee4e  jal         func_33B938
    ctx->pc = 0x324B58u;
    SET_GPR_U32(ctx, 31, 0x324B60u);
    ctx->pc = 0x324B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324B58u;
    // 0x324b5c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B938u, 0x324B58u, 0x324B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324B60u;
label_324b60:
    // 0x324b60: 0xc0cefb0  jal         func_33BEC0
    ctx->pc = 0x324B60u;
    SET_GPR_U32(ctx, 31, 0x324B68u);
    ctx->pc = 0x33BEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BEC0u, 0x324B60u, 0x324B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324B68u;
label_324b68:
    // 0x324b68: 0xc0c9948  jal         func_326520
    ctx->pc = 0x324B68u;
    SET_GPR_U32(ctx, 31, 0x324B70u);
    ctx->pc = 0x326520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326520u, 0x324B68u, 0x324B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324B70u;
label_324b70:
    // 0x324b70: 0xc0cfc3c  jal         func_33F0F0
    ctx->pc = 0x324B70u;
    SET_GPR_U32(ctx, 31, 0x324B78u);
    ctx->pc = 0x33F0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F0F0u, 0x324B70u, 0x324B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324B78u;
label_324b78:
    // 0x324b78: 0xc0ce2c4  jal         func_338B10
    ctx->pc = 0x324B78u;
    SET_GPR_U32(ctx, 31, 0x324B80u);
    ctx->pc = 0x338B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338B10u, 0x324B78u, 0x324B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324B80u;
label_324b80:
    // 0x324b80: 0xc0ce548  jal         func_339520
    ctx->pc = 0x324B80u;
    SET_GPR_U32(ctx, 31, 0x324B88u);
    ctx->pc = 0x339520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339520u, 0x324B80u, 0x324B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324B88u;
label_324b88:
    // 0x324b88: 0xc0ce844  jal         func_33A110
    ctx->pc = 0x324B88u;
    SET_GPR_U32(ctx, 31, 0x324B90u);
    ctx->pc = 0x33A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A110u, 0x324B88u, 0x324B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324B90u;
label_324b90:
    // 0x324b90: 0xc0cf9a4  jal         func_33E690
    ctx->pc = 0x324B90u;
    SET_GPR_U32(ctx, 31, 0x324B98u);
    ctx->pc = 0x33E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E690u, 0x324B90u, 0x324B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324B98u;
label_324b98:
    // 0x324b98: 0xc0cf992  jal         func_33E648
    ctx->pc = 0x324B98u;
    SET_GPR_U32(ctx, 31, 0x324BA0u);
    ctx->pc = 0x33E648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E648u, 0x324B98u, 0x324BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324BA0u;
label_324ba0:
    // 0x324ba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x324ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324ba4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x324ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x324ba8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x324ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x324bac: 0x24707420  addiu       $s0, $v1, 0x7420
    ctx->pc = 0x324bacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 29728));
label_324bb0:
    // 0x324bb0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x324bb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x324bb4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x324BB4u;
    {
        const bool branch_taken_0x324bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x324bb4) {
            ctx->pc = 0x324BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324BB4u;
            // 0x324bb8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324BD0u;
            goto label_324bd0;
        }
    }
    ctx->pc = 0x324BBCu;
    // 0x324bbc: 0xc0cede4  jal         func_33B790
    ctx->pc = 0x324BBCu;
    SET_GPR_U32(ctx, 31, 0x324BC4u);
    ctx->pc = 0x324BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324BBCu;
    // 0x324bc0: 0x26441b48  addiu       $a0, $s2, 0x1B48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 6984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B790u, 0x324BBCu, 0x324BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324BC4u;
label_324bc4:
    // 0x324bc4: 0xc0ca630  jal         func_3298C0
    ctx->pc = 0x324BC4u;
    SET_GPR_U32(ctx, 31, 0x324BCCu);
    ctx->pc = 0x324BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324BC4u;
    // 0x324bc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3298C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3298C0u, 0x324BC4u, 0x324BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324BCCu;
label_324bcc:
    // 0x324bcc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x324bccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_324bd0:
    // 0x324bd0: 0x621fff7  bgez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x324BD0u;
    {
        const bool branch_taken_0x324bd0 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x324BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324BD0u;
        // 0x324bd4: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324bd0) {
            ctx->pc = 0x324BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324bb0;
        }
    }
    ctx->pc = 0x324BD8u;
label_324bd8:
    // 0x324bd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x324bd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324bdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x324bdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x324be0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x324be0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324be4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x324be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x324be8: 0x3e00008  jr          $ra
    ctx->pc = 0x324BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324BE8u;
        // 0x324bec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324BF0u;
    // 0x324bf0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x324bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x324bf4: 0x0  nop
    ctx->pc = 0x324bf4u;
    // NOP
    // 0x324bf8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x324bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x324bfc: 0x0  nop
    ctx->pc = 0x324bfcu;
    // NOP
    // 0x324c00: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x324c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x324c04: 0x0  nop
    ctx->pc = 0x324c04u;
    // NOP
    // 0x324c08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x324c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x324c0c: 0x0  nop
    ctx->pc = 0x324c0cu;
    // NOP
    // 0x324c10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x324c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x324c14: 0x0  nop
    ctx->pc = 0x324c14u;
    // NOP
    // 0x324c18: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x324c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x324c1c: 0x0  nop
    ctx->pc = 0x324c1cu;
    // NOP
    // 0x324c20: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x324c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x324c24: 0x0  nop
    ctx->pc = 0x324c24u;
    // NOP
    // 0x324c28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x324c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x324c2c: 0x0  nop
    ctx->pc = 0x324c2cu;
    // NOP
    // 0x324c30: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x324c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x324c34: 0x0  nop
    ctx->pc = 0x324c34u;
    // NOP
    // 0x324c38: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x324c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x324c3c: 0x0  nop
    ctx->pc = 0x324c3cu;
    // NOP
    // 0x324c40: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x324c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x324c44: 0x0  nop
    ctx->pc = 0x324c44u;
    // NOP
    // 0x324c48: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x324c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x324c4c: 0x0  nop
    ctx->pc = 0x324c4cu;
    // NOP
    ctx->pc = 0x324c50u;
}
