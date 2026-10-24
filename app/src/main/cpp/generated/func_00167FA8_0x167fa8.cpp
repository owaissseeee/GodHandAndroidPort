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

// Function: func_00167FA8
// Address: 0x167fa8 - 0x168080
void func_00167FA8_0x167fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00167FA8_0x167fa8");
#endif

    switch (ctx->pc) {
        case 0x167fc4u: goto label_167fc4;
        case 0x167fd4u: goto label_167fd4;
        case 0x167ff0u: goto label_167ff0;
        case 0x168000u: goto label_168000;
        case 0x168008u: goto label_168008;
        case 0x168018u: goto label_168018;
        case 0x168024u: goto label_168024;
        default: break;
    }

    ctx->pc = 0x167fa8u;

    // 0x167fa8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x167fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x167fac: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x167facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x167fb0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x167fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x167fb4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x167fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x167fb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x167fbc: 0xc058574  jal         func_1615D0
    ctx->pc = 0x167FBCu;
    SET_GPR_U32(ctx, 31, 0x167FC4u);
    ctx->pc = 0x167FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167FBCu;
    // 0x167fc0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1615D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1615D0u, 0x167FBCu, 0x167FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167FC4u;
label_167fc4:
    // 0x167fc4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x167fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x167fc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167fcc: 0xc058540  jal         func_161500
    ctx->pc = 0x167FCCu;
    SET_GPR_U32(ctx, 31, 0x167FD4u);
    ctx->pc = 0x167FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167FCCu;
    // 0x167fd0: 0x24a5fc50  addiu       $a1, $a1, -0x3B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161500u, 0x167FCCu, 0x167FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167FD4u;
label_167fd4:
    // 0x167fd4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x167FD4u;
    {
        const bool branch_taken_0x167fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167FD4u;
        // 0x167fd8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167fd4) {
            ctx->pc = 0x168010u;
            goto label_168010;
        }
    }
    ctx->pc = 0x167FDCu;
    // 0x167fdc: 0x8e460050  lw          $a2, 0x50($s2)
    ctx->pc = 0x167fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x167fe0: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x167fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9092)));
    // 0x167fe4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x167fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x167fe8: 0xc0ab33e  jal         func_2ACCF8
    ctx->pc = 0x167FE8u;
    SET_GPR_U32(ctx, 31, 0x167FF0u);
    ctx->pc = 0x167FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167FE8u;
    // 0x167fec: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF8u, 0x167FE8u, 0x167FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167FF0u;
label_167ff0:
    // 0x167ff0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167ff4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x167ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x167ff8: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x167FF8u;
    SET_GPR_U32(ctx, 31, 0x168000u);
    ctx->pc = 0x167FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167FF8u;
    // 0x167ffc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x167FF8u, 0x168000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168000u;
label_168000:
    // 0x168000: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x168000u;
    SET_GPR_U32(ctx, 31, 0x168008u);
    ctx->pc = 0x168004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168000u;
    // 0x168004: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x168000u, 0x168008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168008u;
label_168008:
    // 0x168008: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x168008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16800c: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x16800cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
label_168010:
    // 0x168010: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x168010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168014: 0x26500080  addiu       $s0, $s2, 0x80
    ctx->pc = 0x168014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_168018:
    // 0x168018: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x168018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16801c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x16801Cu;
    SET_GPR_U32(ctx, 31, 0x168024u);
    ctx->pc = 0x168020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16801Cu;
    // 0x168020: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x16801Cu, 0x168024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168024u;
label_168024:
    // 0x168024: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x168024u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x168028: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x168028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x16802c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x16802cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x168030: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x168030u;
    {
        const bool branch_taken_0x168030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168030u;
        // 0x168034: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168030) {
            ctx->pc = 0x168018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168018;
        }
    }
    ctx->pc = 0x168038u;
    // 0x168038: 0x92430064  lbu         $v1, 0x64($s2)
    ctx->pc = 0x168038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x16803c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16803cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168040: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x168040u;
    {
        const bool branch_taken_0x168040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x168040) {
            ctx->pc = 0x168044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168040u;
            // 0x168044: 0xa2400091  sb          $zero, 0x91($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 145), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168068u;
            goto label_168068;
        }
    }
    ctx->pc = 0x168048u;
    // 0x168048: 0xa243005a  sb          $v1, 0x5A($s2)
    ctx->pc = 0x168048u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 90), (uint8_t)GPR_U32(ctx, 3));
    // 0x16804c: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x16804cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x168050: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x168050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x168054: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x168054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x168058: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x168058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16805c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x16805cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x168060: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x168060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x168064: 0xa2400091  sb          $zero, 0x91($s2)
    ctx->pc = 0x168064u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 145), (uint8_t)GPR_U32(ctx, 0));
label_168068:
    // 0x168068: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x168068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16806c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16806cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168070: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x168070u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168078: 0x3e00008  jr          $ra
    ctx->pc = 0x168078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168078u;
        // 0x16807c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168080u;
}
