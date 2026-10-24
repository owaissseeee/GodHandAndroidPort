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

// Function: func_0033F130
// Address: 0x33f130 - 0x33f1a8
void func_0033F130_0x33f130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033F130_0x33f130");
#endif

    switch (ctx->pc) {
        case 0x33f130u: goto label_33f130;
        case 0x33f134u: goto label_33f134;
        case 0x33f138u: goto label_33f138;
        case 0x33f13cu: goto label_33f13c;
        case 0x33f140u: goto label_33f140;
        case 0x33f144u: goto label_33f144;
        case 0x33f148u: goto label_33f148;
        case 0x33f14cu: goto label_33f14c;
        case 0x33f150u: goto label_33f150;
        case 0x33f154u: goto label_33f154;
        case 0x33f158u: goto label_33f158;
        case 0x33f15cu: goto label_33f15c;
        case 0x33f160u: goto label_33f160;
        case 0x33f164u: goto label_33f164;
        case 0x33f168u: goto label_33f168;
        case 0x33f16cu: goto label_33f16c;
        case 0x33f170u: goto label_33f170;
        case 0x33f174u: goto label_33f174;
        case 0x33f178u: goto label_33f178;
        case 0x33f17cu: goto label_33f17c;
        case 0x33f180u: goto label_33f180;
        case 0x33f184u: goto label_33f184;
        case 0x33f188u: goto label_33f188;
        case 0x33f18cu: goto label_33f18c;
        case 0x33f190u: goto label_33f190;
        case 0x33f194u: goto label_33f194;
        case 0x33f198u: goto label_33f198;
        case 0x33f19cu: goto label_33f19c;
        case 0x33f1a0u: goto label_33f1a0;
        case 0x33f1a4u: goto label_33f1a4;
        default: break;
    }

    ctx->pc = 0x33f130u;

label_33f130:
    // 0x33f130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33f130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33f134:
    // 0x33f134: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x33f134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33f138:
    // 0x33f138: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33f138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33f13c:
    // 0x33f13c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_33f140:
    if (ctx->pc == 0x33F140u) {
        ctx->pc = 0x33F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F13Cu;
        // 0x33f140: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F144u;
        goto label_33f144;
    }
    ctx->pc = 0x33F13Cu;
    {
        const bool branch_taken_0x33f13c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F13Cu;
        // 0x33f140: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f13c) {
            ctx->pc = 0x33F160u;
            goto label_33f160;
        }
    }
    ctx->pc = 0x33F144u;
label_33f144:
    // 0x33f144: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33f144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_33f148:
    // 0x33f148: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33f148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33f14c:
    // 0x33f14c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33f14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33f150:
    // 0x33f150: 0x24846930  addiu       $a0, $a0, 0x6930
    ctx->pc = 0x33f150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26928));
label_33f154:
    // 0x33f154: 0x80cedba  j           func_33B6E8
label_33f158:
    if (ctx->pc == 0x33F158u) {
        ctx->pc = 0x33F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F154u;
        // 0x33f158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F15Cu;
        goto label_33f15c;
    }
    ctx->pc = 0x33F154u;
    ctx->pc = 0x33F158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F154u;
    // 0x33f158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B6E8u, 0x33F154u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33F15Cu;
label_33f15c:
    // 0x33f15c: 0x0  nop
    ctx->pc = 0x33f15cu;
    // NOP
label_33f160:
    // 0x33f160: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33f160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_33f164:
    // 0x33f164: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x33f164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_33f168:
    // 0x33f168: 0x2450adc0  addiu       $s0, $v0, -0x5240
    ctx->pc = 0x33f168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946240));
label_33f16c:
    // 0x33f16c: 0xc0e9768  jal         func_3A5DA0
label_33f170:
    if (ctx->pc == 0x33F170u) {
        ctx->pc = 0x33F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F16Cu;
        // 0x33f170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F174u;
        goto label_33f174;
    }
    ctx->pc = 0x33F16Cu;
    SET_GPR_U32(ctx, 31, 0x33F174u);
    ctx->pc = 0x33F170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F16Cu;
    // 0x33f170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5DA0u, 0x33F16Cu, 0x33F174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F174u;
label_33f174:
    // 0x33f174: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x33f174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_33f178:
    // 0x33f178: 0x8c63adb8  lw          $v1, -0x5248($v1)
    ctx->pc = 0x33f178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946232)));
label_33f17c:
    // 0x33f17c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_33f180:
    if (ctx->pc == 0x33F180u) {
        ctx->pc = 0x33F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F17Cu;
        // 0x33f180: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F184u;
        goto label_33f184;
    }
    ctx->pc = 0x33F17Cu;
    {
        const bool branch_taken_0x33f17c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F17Cu;
        // 0x33f180: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f17c) {
            ctx->pc = 0x33F190u;
            goto label_33f190;
        }
    }
    ctx->pc = 0x33F184u;
label_33f184:
    // 0x33f184: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33f184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_33f188:
    // 0x33f188: 0x60f809  jalr        $v1
label_33f18c:
    if (ctx->pc == 0x33F18Cu) {
        ctx->pc = 0x33F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F188u;
        // 0x33f18c: 0x8c44adbc  lw          $a0, -0x5244($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F190u;
        goto label_33f190;
    }
    ctx->pc = 0x33F188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33F190u);
        ctx->pc = 0x33F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F188u;
        // 0x33f18c: 0x8c44adbc  lw          $a0, -0x5244($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946236)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F188u, 0x33F190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F190u;
label_33f190:
    // 0x33f190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33f190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33f194:
    // 0x33f194: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33f194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33f198:
    // 0x33f198: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33f198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33f19c:
    // 0x33f19c: 0x80cedba  j           func_33B6E8
label_33f1a0:
    if (ctx->pc == 0x33F1A0u) {
        ctx->pc = 0x33F1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F19Cu;
        // 0x33f1a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F1A4u;
        goto label_33f1a4;
    }
    ctx->pc = 0x33F19Cu;
    ctx->pc = 0x33F1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F19Cu;
    // 0x33f1a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B6E8u, 0x33F19Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33F1A4u;
label_33f1a4:
    // 0x33f1a4: 0x0  nop
    ctx->pc = 0x33f1a4u;
    // NOP
    ctx->pc = 0x33f1a8u;
}
