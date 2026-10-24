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

// Function: func_001E0210
// Address: 0x1e0210 - 0x1e0310
void func_001E0210_0x1e0210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E0210_0x1e0210");
#endif

    switch (ctx->pc) {
        case 0x1e0210u: goto label_1e0210;
        case 0x1e0214u: goto label_1e0214;
        case 0x1e0218u: goto label_1e0218;
        case 0x1e021cu: goto label_1e021c;
        case 0x1e0220u: goto label_1e0220;
        case 0x1e0224u: goto label_1e0224;
        case 0x1e0228u: goto label_1e0228;
        case 0x1e022cu: goto label_1e022c;
        case 0x1e0230u: goto label_1e0230;
        case 0x1e0234u: goto label_1e0234;
        case 0x1e0238u: goto label_1e0238;
        case 0x1e023cu: goto label_1e023c;
        case 0x1e0240u: goto label_1e0240;
        case 0x1e0244u: goto label_1e0244;
        case 0x1e0248u: goto label_1e0248;
        case 0x1e024cu: goto label_1e024c;
        case 0x1e0250u: goto label_1e0250;
        case 0x1e0254u: goto label_1e0254;
        case 0x1e0258u: goto label_1e0258;
        case 0x1e025cu: goto label_1e025c;
        case 0x1e0260u: goto label_1e0260;
        case 0x1e0264u: goto label_1e0264;
        case 0x1e0268u: goto label_1e0268;
        case 0x1e026cu: goto label_1e026c;
        case 0x1e0270u: goto label_1e0270;
        case 0x1e0274u: goto label_1e0274;
        case 0x1e0278u: goto label_1e0278;
        case 0x1e027cu: goto label_1e027c;
        case 0x1e0280u: goto label_1e0280;
        case 0x1e0284u: goto label_1e0284;
        case 0x1e0288u: goto label_1e0288;
        case 0x1e028cu: goto label_1e028c;
        case 0x1e0290u: goto label_1e0290;
        case 0x1e0294u: goto label_1e0294;
        case 0x1e0298u: goto label_1e0298;
        case 0x1e029cu: goto label_1e029c;
        case 0x1e02a0u: goto label_1e02a0;
        case 0x1e02a4u: goto label_1e02a4;
        case 0x1e02a8u: goto label_1e02a8;
        case 0x1e02acu: goto label_1e02ac;
        case 0x1e02b0u: goto label_1e02b0;
        case 0x1e02b4u: goto label_1e02b4;
        case 0x1e02b8u: goto label_1e02b8;
        case 0x1e02bcu: goto label_1e02bc;
        case 0x1e02c0u: goto label_1e02c0;
        case 0x1e02c4u: goto label_1e02c4;
        case 0x1e02c8u: goto label_1e02c8;
        case 0x1e02ccu: goto label_1e02cc;
        case 0x1e02d0u: goto label_1e02d0;
        case 0x1e02d4u: goto label_1e02d4;
        case 0x1e02d8u: goto label_1e02d8;
        case 0x1e02dcu: goto label_1e02dc;
        case 0x1e02e0u: goto label_1e02e0;
        case 0x1e02e4u: goto label_1e02e4;
        case 0x1e02e8u: goto label_1e02e8;
        case 0x1e02ecu: goto label_1e02ec;
        case 0x1e02f0u: goto label_1e02f0;
        case 0x1e02f4u: goto label_1e02f4;
        case 0x1e02f8u: goto label_1e02f8;
        case 0x1e02fcu: goto label_1e02fc;
        case 0x1e0300u: goto label_1e0300;
        case 0x1e0304u: goto label_1e0304;
        case 0x1e0308u: goto label_1e0308;
        case 0x1e030cu: goto label_1e030c;
        default: break;
    }

    ctx->pc = 0x1e0210u;

label_1e0210:
    // 0x1e0210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e0210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e0214:
    // 0x1e0214: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1e0214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_1e0218:
    // 0x1e0218: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e0218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1e021c:
    // 0x1e021c: 0x2463e0b0  addiu       $v1, $v1, -0x1F50
    ctx->pc = 0x1e021cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959280));
label_1e0220:
    // 0x1e0220: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e0220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e0224:
    // 0x1e0224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e0228:
    // 0x1e0228: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e0228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e022c:
    // 0x1e022c: 0x263004d0  addiu       $s0, $s1, 0x4D0
    ctx->pc = 0x1e022cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1232));
label_1e0230:
    // 0x1e0230: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1e0230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1e0234:
    // 0x1e0234: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1e0234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1e0238:
    // 0x1e0238: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1e0238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e023c:
    // 0x1e023c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e023cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e0240:
    // 0x1e0240: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x1e0240u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1e0244:
    // 0x1e0244: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e0244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1e0248:
    // 0x1e0248: 0x40f809  jalr        $v0
label_1e024c:
    if (ctx->pc == 0x1E024Cu) {
        ctx->pc = 0x1E024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0248u;
        // 0x1e024c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0250u;
        goto label_1e0250;
    }
    ctx->pc = 0x1E0248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E0250u);
        ctx->pc = 0x1E024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0248u;
        // 0x1e024c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0248u, 0x1E0250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0250u;
label_1e0250:
    // 0x1e0250: 0xc078e16  jal         func_1E3858
label_1e0254:
    if (ctx->pc == 0x1E0254u) {
        ctx->pc = 0x1E0254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0250u;
        // 0x1e0254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0258u;
        goto label_1e0258;
    }
    ctx->pc = 0x1E0250u;
    SET_GPR_U32(ctx, 31, 0x1E0258u);
    ctx->pc = 0x1E0254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0250u;
    // 0x1e0254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3858u, 0x1E0250u, 0x1E0258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0258u;
label_1e0258:
    // 0x1e0258: 0xc078e74  jal         func_1E39D0
label_1e025c:
    if (ctx->pc == 0x1E025Cu) {
        ctx->pc = 0x1E025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0258u;
        // 0x1e025c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0260u;
        goto label_1e0260;
    }
    ctx->pc = 0x1E0258u;
    SET_GPR_U32(ctx, 31, 0x1E0260u);
    ctx->pc = 0x1E025Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0258u;
    // 0x1e025c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E39D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E39D0u, 0x1E0258u, 0x1E0260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0260u;
label_1e0260:
    // 0x1e0260: 0xc078ed0  jal         func_1E3B40
label_1e0264:
    if (ctx->pc == 0x1E0264u) {
        ctx->pc = 0x1E0264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0260u;
        // 0x1e0264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0268u;
        goto label_1e0268;
    }
    ctx->pc = 0x1E0260u;
    SET_GPR_U32(ctx, 31, 0x1E0268u);
    ctx->pc = 0x1E0264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0260u;
    // 0x1e0264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3B40u, 0x1E0260u, 0x1E0268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0268u;
label_1e0268:
    // 0x1e0268: 0xc078f2c  jal         func_1E3CB0
label_1e026c:
    if (ctx->pc == 0x1E026Cu) {
        ctx->pc = 0x1E026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0268u;
        // 0x1e026c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0270u;
        goto label_1e0270;
    }
    ctx->pc = 0x1E0268u;
    SET_GPR_U32(ctx, 31, 0x1E0270u);
    ctx->pc = 0x1E026Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0268u;
    // 0x1e026c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3CB0u, 0x1E0268u, 0x1E0270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0270u;
label_1e0270:
    // 0x1e0270: 0xc078f74  jal         func_1E3DD0
label_1e0274:
    if (ctx->pc == 0x1E0274u) {
        ctx->pc = 0x1E0274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0270u;
        // 0x1e0274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0278u;
        goto label_1e0278;
    }
    ctx->pc = 0x1E0270u;
    SET_GPR_U32(ctx, 31, 0x1E0278u);
    ctx->pc = 0x1E0274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0270u;
    // 0x1e0274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3DD0u, 0x1E0270u, 0x1E0278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0278u;
label_1e0278:
    // 0x1e0278: 0xc079004  jal         func_1E4010
label_1e027c:
    if (ctx->pc == 0x1E027Cu) {
        ctx->pc = 0x1E027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0278u;
        // 0x1e027c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0280u;
        goto label_1e0280;
    }
    ctx->pc = 0x1E0278u;
    SET_GPR_U32(ctx, 31, 0x1E0280u);
    ctx->pc = 0x1E027Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0278u;
    // 0x1e027c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4010u, 0x1E0278u, 0x1E0280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0280u;
label_1e0280:
    // 0x1e0280: 0xc0790c2  jal         func_1E4308
label_1e0284:
    if (ctx->pc == 0x1E0284u) {
        ctx->pc = 0x1E0284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0280u;
        // 0x1e0284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0288u;
        goto label_1e0288;
    }
    ctx->pc = 0x1E0280u;
    SET_GPR_U32(ctx, 31, 0x1E0288u);
    ctx->pc = 0x1E0284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0280u;
    // 0x1e0284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4308u, 0x1E0280u, 0x1E0288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0288u;
label_1e0288:
    // 0x1e0288: 0xc07912a  jal         func_1E44A8
label_1e028c:
    if (ctx->pc == 0x1E028Cu) {
        ctx->pc = 0x1E028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0288u;
        // 0x1e028c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0290u;
        goto label_1e0290;
    }
    ctx->pc = 0x1E0288u;
    SET_GPR_U32(ctx, 31, 0x1E0290u);
    ctx->pc = 0x1E028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0288u;
    // 0x1e028c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E44A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E44A8u, 0x1E0288u, 0x1E0290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0290u;
label_1e0290:
    // 0x1e0290: 0xc079184  jal         func_1E4610
label_1e0294:
    if (ctx->pc == 0x1E0294u) {
        ctx->pc = 0x1E0294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0290u;
        // 0x1e0294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0298u;
        goto label_1e0298;
    }
    ctx->pc = 0x1E0290u;
    SET_GPR_U32(ctx, 31, 0x1E0298u);
    ctx->pc = 0x1E0294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0290u;
    // 0x1e0294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4610u, 0x1E0290u, 0x1E0298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0298u;
label_1e0298:
    // 0x1e0298: 0xc079e7a  jal         func_1E79E8
label_1e029c:
    if (ctx->pc == 0x1E029Cu) {
        ctx->pc = 0x1E029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0298u;
        // 0x1e029c: 0x26240370  addiu       $a0, $s1, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E02A0u;
        goto label_1e02a0;
    }
    ctx->pc = 0x1E0298u;
    SET_GPR_U32(ctx, 31, 0x1E02A0u);
    ctx->pc = 0x1E029Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0298u;
    // 0x1e029c: 0x26240370  addiu       $a0, $s1, 0x370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E79E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E79E8u, 0x1E0298u, 0x1E02A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02A0u;
label_1e02a0:
    // 0x1e02a0: 0xc079fa8  jal         func_1E7EA0
label_1e02a4:
    if (ctx->pc == 0x1E02A4u) {
        ctx->pc = 0x1E02A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02A0u;
        // 0x1e02a4: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E02A8u;
        goto label_1e02a8;
    }
    ctx->pc = 0x1E02A0u;
    SET_GPR_U32(ctx, 31, 0x1E02A8u);
    ctx->pc = 0x1E02A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E02A0u;
    // 0x1e02a4: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7EA0u, 0x1E02A0u, 0x1E02A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02A8u;
label_1e02a8:
    // 0x1e02a8: 0xc079fa8  jal         func_1E7EA0
label_1e02ac:
    if (ctx->pc == 0x1E02ACu) {
        ctx->pc = 0x1E02ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02A8u;
        // 0x1e02ac: 0x26240160  addiu       $a0, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E02B0u;
        goto label_1e02b0;
    }
    ctx->pc = 0x1E02A8u;
    SET_GPR_U32(ctx, 31, 0x1E02B0u);
    ctx->pc = 0x1E02ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E02A8u;
    // 0x1e02ac: 0x26240160  addiu       $a0, $s1, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7EA0u, 0x1E02A8u, 0x1E02B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02B0u;
label_1e02b0:
    // 0x1e02b0: 0xc079fa8  jal         func_1E7EA0
label_1e02b4:
    if (ctx->pc == 0x1E02B4u) {
        ctx->pc = 0x1E02B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02B0u;
        // 0x1e02b4: 0x26240268  addiu       $a0, $s1, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E02B8u;
        goto label_1e02b8;
    }
    ctx->pc = 0x1E02B0u;
    SET_GPR_U32(ctx, 31, 0x1E02B8u);
    ctx->pc = 0x1E02B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E02B0u;
    // 0x1e02b4: 0x26240268  addiu       $a0, $s1, 0x268 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7EA0u, 0x1E02B0u, 0x1E02B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02B8u;
label_1e02b8:
    // 0x1e02b8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1e02b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1e02bc:
    // 0x1e02bc: 0xc07e9c4  jal         func_1FA710
label_1e02c0:
    if (ctx->pc == 0x1E02C0u) {
        ctx->pc = 0x1E02C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02BCu;
        // 0x1e02c0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E02C4u;
        goto label_1e02c4;
    }
    ctx->pc = 0x1E02BCu;
    SET_GPR_U32(ctx, 31, 0x1E02C4u);
    ctx->pc = 0x1E02C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E02BCu;
    // 0x1e02c0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1E02BCu, 0x1E02C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02C4u;
label_1e02c4:
    // 0x1e02c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e02c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e02c8:
    // 0x1e02c8: 0xc0b5952  jal         func_2D6548
label_1e02cc:
    if (ctx->pc == 0x1E02CCu) {
        ctx->pc = 0x1E02CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02C8u;
        // 0x1e02cc: 0x26240520  addiu       $a0, $s1, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E02D0u;
        goto label_1e02d0;
    }
    ctx->pc = 0x1E02C8u;
    SET_GPR_U32(ctx, 31, 0x1E02D0u);
    ctx->pc = 0x1E02CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E02C8u;
    // 0x1e02cc: 0x26240520  addiu       $a0, $s1, 0x520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x1E02C8u, 0x1E02D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02D0u;
label_1e02d0:
    // 0x1e02d0: 0xc079cf0  jal         func_1E73C0
label_1e02d4:
    if (ctx->pc == 0x1E02D4u) {
        ctx->pc = 0x1E02D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02D0u;
        // 0x1e02d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E02D8u;
        goto label_1e02d8;
    }
    ctx->pc = 0x1E02D0u;
    SET_GPR_U32(ctx, 31, 0x1E02D8u);
    ctx->pc = 0x1E02D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E02D0u;
    // 0x1e02d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E73C0u, 0x1E02D0u, 0x1E02D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02D8u;
label_1e02d8:
    // 0x1e02d8: 0xc079d10  jal         func_1E7440
label_1e02dc:
    if (ctx->pc == 0x1E02DCu) {
        ctx->pc = 0x1E02DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02D8u;
        // 0x1e02dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E02E0u;
        goto label_1e02e0;
    }
    ctx->pc = 0x1E02D8u;
    SET_GPR_U32(ctx, 31, 0x1E02E0u);
    ctx->pc = 0x1E02DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E02D8u;
    // 0x1e02dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7440u, 0x1E02D8u, 0x1E02E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02E0u;
label_1e02e0:
    // 0x1e02e0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1e02e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_1e02e4:
    // 0x1e02e4: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x1e02e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31276)));
label_1e02e8:
    // 0x1e02e8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1e02e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_1e02ec:
    // 0x1e02ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e02f0:
    if (ctx->pc == 0x1E02F0u) {
        ctx->pc = 0x1E02F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02ECu;
        // 0x1e02f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E02F4u;
        goto label_1e02f4;
    }
    ctx->pc = 0x1E02ECu;
    {
        const bool branch_taken_0x1e02ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E02F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02ECu;
        // 0x1e02f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e02ec) {
            ctx->pc = 0x1E0300u;
            goto label_1e0300;
        }
    }
    ctx->pc = 0x1E02F4u;
label_1e02f4:
    // 0x1e02f4: 0xc078cec  jal         func_1E33B0
label_1e02f8:
    if (ctx->pc == 0x1E02F8u) {
        ctx->pc = 0x1E02F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02F4u;
        // 0x1e02f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E02FCu;
        goto label_1e02fc;
    }
    ctx->pc = 0x1E02F4u;
    SET_GPR_U32(ctx, 31, 0x1E02FCu);
    ctx->pc = 0x1E02F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E02F4u;
    // 0x1e02f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E33B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E33B0u, 0x1E02F4u, 0x1E02FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02FCu;
label_1e02fc:
    // 0x1e02fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e02fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e0300:
    // 0x1e0300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e0300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0304:
    // 0x1e0304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0308:
    // 0x1e0308: 0x3e00008  jr          $ra
label_1e030c:
    if (ctx->pc == 0x1E030Cu) {
        ctx->pc = 0x1E030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0308u;
        // 0x1e030c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0310u;
        goto label_fallthrough_0x1e0308;
    }
    ctx->pc = 0x1E0308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0308u;
        // 0x1e030c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e0308:
    ctx->pc = 0x1E0310u;
}
