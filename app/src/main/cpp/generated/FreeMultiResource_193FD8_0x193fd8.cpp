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

// Function: FreeMultiResource_193FD8
// Address: 0x193fd8 - 0x194080
void FreeMultiResource_193FD8_0x193fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FreeMultiResource_193FD8_0x193fd8");
#endif

    switch (ctx->pc) {
        case 0x194014u: goto label_194014;
        case 0x194030u: goto label_194030;
        case 0x19404cu: goto label_19404c;
        case 0x194060u: goto label_194060;
        case 0x19406cu: goto label_19406c;
        default: break;
    }

    ctx->pc = 0x193fd8u;

    // 0x193fd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x193fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x193fdc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x193fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x193fe0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x193fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x193fe4: 0x24424b68  addiu       $v0, $v0, 0x4B68
    ctx->pc = 0x193fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19304));
    // 0x193fe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x193fec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x193fecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ff0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193ff4: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x193ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x193ff8: 0x8e030604  lw          $v1, 0x604($s0)
    ctx->pc = 0x193ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x193ffc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x193FFCu;
    {
        const bool branch_taken_0x193ffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x194000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193FFCu;
        // 0x194000: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ffc) {
            ctx->pc = 0x194018u;
            goto label_194018;
        }
    }
    ctx->pc = 0x194004u;
    // 0x194004: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x194004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x194008: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x194008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19400c: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x19400Cu;
    SET_GPR_U32(ctx, 31, 0x194014u);
    ctx->pc = 0x194010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19400Cu;
    // 0x194010: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x19400Cu, 0x194014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194014u;
label_194014:
    // 0x194014: 0xae000604  sw          $zero, 0x604($s0)
    ctx->pc = 0x194014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 0));
label_194018:
    // 0x194018: 0x8e050608  lw          $a1, 0x608($s0)
    ctx->pc = 0x194018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    // 0x19401c: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19401Cu;
    {
        const bool branch_taken_0x19401c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19401c) {
            ctx->pc = 0x194020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19401Cu;
            // 0x194020: 0x8e050614  lw          $a1, 0x614($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1556)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194038u;
            goto label_194038;
        }
    }
    ctx->pc = 0x194024u;
    // 0x194024: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x194024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x194028: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x194028u;
    SET_GPR_U32(ctx, 31, 0x194030u);
    ctx->pc = 0x19402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194028u;
    // 0x19402c: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x194028u, 0x194030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194030u;
label_194030:
    // 0x194030: 0xae000608  sw          $zero, 0x608($s0)
    ctx->pc = 0x194030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 0));
    // 0x194034: 0x8e050614  lw          $a1, 0x614($s0)
    ctx->pc = 0x194034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1556)));
label_194038:
    // 0x194038: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x194038u;
    {
        const bool branch_taken_0x194038 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x194038) {
            ctx->pc = 0x19403Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194038u;
            // 0x19403c: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194054u;
            goto label_194054;
        }
    }
    ctx->pc = 0x194040u;
    // 0x194040: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x194040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x194044: 0xc04bb16  jal         func_12EC58
    ctx->pc = 0x194044u;
    SET_GPR_U32(ctx, 31, 0x19404Cu);
    ctx->pc = 0x194048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194044u;
    // 0x194048: 0x2484ae50  addiu       $a0, $a0, -0x51B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC58u, 0x194044u, 0x19404Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19404Cu;
label_19404c:
    // 0x19404c: 0xae000614  sw          $zero, 0x614($s0)
    ctx->pc = 0x19404cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1556), GPR_U32(ctx, 0));
    // 0x194050: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x194050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_194054:
    // 0x194054: 0x24050177  addiu       $a1, $zero, 0x177
    ctx->pc = 0x194054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 375));
    // 0x194058: 0xc0c15de  jal         func_305778
    ctx->pc = 0x194058u;
    SET_GPR_U32(ctx, 31, 0x194060u);
    ctx->pc = 0x19405Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194058u;
    // 0x19405c: 0x248419a0  addiu       $a0, $a0, 0x19A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305778u, 0x194058u, 0x194060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194060u;
label_194060:
    // 0x194060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194064: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x194064u;
    SET_GPR_U32(ctx, 31, 0x19406Cu);
    ctx->pc = 0x194068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194064u;
    // 0x194068: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x194064u, 0x19406Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19406Cu;
label_19406c:
    // 0x19406c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19406cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194070: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x194070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194078: 0x3e00008  jr          $ra
    ctx->pc = 0x194078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194078u;
        // 0x19407c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194080u;
}
