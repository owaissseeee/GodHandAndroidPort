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

// Function: func_00327048
// Address: 0x327048 - 0x327230
void func_00327048_0x327048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00327048_0x327048");
#endif

    switch (ctx->pc) {
        case 0x327048u: goto label_327048;
        case 0x32704cu: goto label_32704c;
        case 0x327050u: goto label_327050;
        case 0x327054u: goto label_327054;
        case 0x327058u: goto label_327058;
        case 0x32705cu: goto label_32705c;
        case 0x327060u: goto label_327060;
        case 0x327064u: goto label_327064;
        case 0x327068u: goto label_327068;
        case 0x32706cu: goto label_32706c;
        case 0x327070u: goto label_327070;
        case 0x327074u: goto label_327074;
        case 0x327078u: goto label_327078;
        case 0x32707cu: goto label_32707c;
        case 0x327080u: goto label_327080;
        case 0x327084u: goto label_327084;
        case 0x327088u: goto label_327088;
        case 0x32708cu: goto label_32708c;
        case 0x327090u: goto label_327090;
        case 0x327094u: goto label_327094;
        case 0x327098u: goto label_327098;
        case 0x32709cu: goto label_32709c;
        case 0x3270a0u: goto label_3270a0;
        case 0x3270a4u: goto label_3270a4;
        case 0x3270a8u: goto label_3270a8;
        case 0x3270acu: goto label_3270ac;
        case 0x3270b0u: goto label_3270b0;
        case 0x3270b4u: goto label_3270b4;
        case 0x3270b8u: goto label_3270b8;
        case 0x3270bcu: goto label_3270bc;
        case 0x3270c0u: goto label_3270c0;
        case 0x3270c4u: goto label_3270c4;
        case 0x3270c8u: goto label_3270c8;
        case 0x3270ccu: goto label_3270cc;
        case 0x3270d0u: goto label_3270d0;
        case 0x3270d4u: goto label_3270d4;
        case 0x3270d8u: goto label_3270d8;
        case 0x3270dcu: goto label_3270dc;
        case 0x3270e0u: goto label_3270e0;
        case 0x3270e4u: goto label_3270e4;
        case 0x3270e8u: goto label_3270e8;
        case 0x3270ecu: goto label_3270ec;
        case 0x3270f0u: goto label_3270f0;
        case 0x3270f4u: goto label_3270f4;
        case 0x3270f8u: goto label_3270f8;
        case 0x3270fcu: goto label_3270fc;
        case 0x327100u: goto label_327100;
        case 0x327104u: goto label_327104;
        case 0x327108u: goto label_327108;
        case 0x32710cu: goto label_32710c;
        case 0x327110u: goto label_327110;
        case 0x327114u: goto label_327114;
        case 0x327118u: goto label_327118;
        case 0x32711cu: goto label_32711c;
        case 0x327120u: goto label_327120;
        case 0x327124u: goto label_327124;
        case 0x327128u: goto label_327128;
        case 0x32712cu: goto label_32712c;
        case 0x327130u: goto label_327130;
        case 0x327134u: goto label_327134;
        case 0x327138u: goto label_327138;
        case 0x32713cu: goto label_32713c;
        case 0x327140u: goto label_327140;
        case 0x327144u: goto label_327144;
        case 0x327148u: goto label_327148;
        case 0x32714cu: goto label_32714c;
        case 0x327150u: goto label_327150;
        case 0x327154u: goto label_327154;
        case 0x327158u: goto label_327158;
        case 0x32715cu: goto label_32715c;
        case 0x327160u: goto label_327160;
        case 0x327164u: goto label_327164;
        case 0x327168u: goto label_327168;
        case 0x32716cu: goto label_32716c;
        case 0x327170u: goto label_327170;
        case 0x327174u: goto label_327174;
        case 0x327178u: goto label_327178;
        case 0x32717cu: goto label_32717c;
        case 0x327180u: goto label_327180;
        case 0x327184u: goto label_327184;
        case 0x327188u: goto label_327188;
        case 0x32718cu: goto label_32718c;
        case 0x327190u: goto label_327190;
        case 0x327194u: goto label_327194;
        case 0x327198u: goto label_327198;
        case 0x32719cu: goto label_32719c;
        case 0x3271a0u: goto label_3271a0;
        case 0x3271a4u: goto label_3271a4;
        case 0x3271a8u: goto label_3271a8;
        case 0x3271acu: goto label_3271ac;
        case 0x3271b0u: goto label_3271b0;
        case 0x3271b4u: goto label_3271b4;
        case 0x3271b8u: goto label_3271b8;
        case 0x3271bcu: goto label_3271bc;
        case 0x3271c0u: goto label_3271c0;
        case 0x3271c4u: goto label_3271c4;
        case 0x3271c8u: goto label_3271c8;
        case 0x3271ccu: goto label_3271cc;
        case 0x3271d0u: goto label_3271d0;
        case 0x3271d4u: goto label_3271d4;
        case 0x3271d8u: goto label_3271d8;
        case 0x3271dcu: goto label_3271dc;
        case 0x3271e0u: goto label_3271e0;
        case 0x3271e4u: goto label_3271e4;
        case 0x3271e8u: goto label_3271e8;
        case 0x3271ecu: goto label_3271ec;
        case 0x3271f0u: goto label_3271f0;
        case 0x3271f4u: goto label_3271f4;
        case 0x3271f8u: goto label_3271f8;
        case 0x3271fcu: goto label_3271fc;
        case 0x327200u: goto label_327200;
        case 0x327204u: goto label_327204;
        case 0x327208u: goto label_327208;
        case 0x32720cu: goto label_32720c;
        case 0x327210u: goto label_327210;
        case 0x327214u: goto label_327214;
        case 0x327218u: goto label_327218;
        case 0x32721cu: goto label_32721c;
        case 0x327220u: goto label_327220;
        case 0x327224u: goto label_327224;
        case 0x327228u: goto label_327228;
        case 0x32722cu: goto label_32722c;
        default: break;
    }

    ctx->pc = 0x327048u;

label_327048:
    // 0x327048: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x327048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_32704c:
    // 0x32704c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x32704cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_327050:
    // 0x327050: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x327050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_327054:
    // 0x327054: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x327054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_327058:
    // 0x327058: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x327058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_32705c:
    // 0x32705c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x32705cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_327060:
    // 0x327060: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x327060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_327064:
    // 0x327064: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x327064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_327068:
    // 0x327068: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x327068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_32706c:
    // 0x32706c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x32706cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_327070:
    // 0x327070: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x327070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_327074:
    // 0x327074: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x327074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_327078:
    // 0x327078: 0x8e160004  lw          $s6, 0x4($s0)
    ctx->pc = 0x327078u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32707c:
    // 0x32707c: 0x8e150008  lw          $s5, 0x8($s0)
    ctx->pc = 0x32707cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_327080:
    // 0x327080: 0xc0cf3d6  jal         func_33CF58
label_327084:
    if (ctx->pc == 0x327084u) {
        ctx->pc = 0x327084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327080u;
        // 0x327084: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327088u;
        goto label_327088;
    }
    ctx->pc = 0x327080u;
    SET_GPR_U32(ctx, 31, 0x327088u);
    ctx->pc = 0x327084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327080u;
    // 0x327084: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CF58u, 0x327080u, 0x327088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327088u;
label_327088:
    // 0x327088: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x327088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32708c:
    // 0x32708c: 0xc0cf4ae  jal         func_33D2B8
label_327090:
    if (ctx->pc == 0x327090u) {
        ctx->pc = 0x327090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32708Cu;
        // 0x327090: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327094u;
        goto label_327094;
    }
    ctx->pc = 0x32708Cu;
    SET_GPR_U32(ctx, 31, 0x327094u);
    ctx->pc = 0x327090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32708Cu;
    // 0x327090: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D2B8u, 0x32708Cu, 0x327094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327094u;
label_327094:
    // 0x327094: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x327094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_327098:
    // 0x327098: 0xc0cf4b0  jal         func_33D2C0
label_32709c:
    if (ctx->pc == 0x32709Cu) {
        ctx->pc = 0x32709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327098u;
        // 0x32709c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3270A0u;
        goto label_3270a0;
    }
    ctx->pc = 0x327098u;
    SET_GPR_U32(ctx, 31, 0x3270A0u);
    ctx->pc = 0x32709Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327098u;
    // 0x32709c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D2C0u, 0x327098u, 0x3270A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3270A0u;
label_3270a0:
    // 0x3270a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3270a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3270a4:
    // 0x3270a4: 0xc0cf3a2  jal         func_33CE88
label_3270a8:
    if (ctx->pc == 0x3270A8u) {
        ctx->pc = 0x3270A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3270A4u;
        // 0x3270a8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3270ACu;
        goto label_3270ac;
    }
    ctx->pc = 0x3270A4u;
    SET_GPR_U32(ctx, 31, 0x3270ACu);
    ctx->pc = 0x3270A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3270A4u;
    // 0x3270a8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CE88u, 0x3270A4u, 0x3270ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3270ACu;
label_3270ac:
    // 0x3270ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3270acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3270b0:
    // 0x3270b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3270b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3270b4:
    // 0x3270b4: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
label_3270b8:
    if (ctx->pc == 0x3270B8u) {
        ctx->pc = 0x3270B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3270B4u;
        // 0x3270b8: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3270BCu;
        goto label_3270bc;
    }
    ctx->pc = 0x3270B4u;
    {
        const bool branch_taken_0x3270b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3270b4) {
            ctx->pc = 0x3270B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3270B4u;
            // 0x3270b8: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3270D0u;
            goto label_3270d0;
        }
    }
    ctx->pc = 0x3270BCu;
label_3270bc:
    // 0x3270bc: 0xc0c9e68  jal         func_3279A0
label_3270c0:
    if (ctx->pc == 0x3270C0u) {
        ctx->pc = 0x3270C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3270BCu;
        // 0x3270c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3270C4u;
        goto label_3270c4;
    }
    ctx->pc = 0x3270BCu;
    SET_GPR_U32(ctx, 31, 0x3270C4u);
    ctx->pc = 0x3270C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3270BCu;
    // 0x3270c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3279A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3279A0u, 0x3270BCu, 0x3270C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3270C4u;
label_3270c4:
    // 0x3270c4: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
label_3270c8:
    if (ctx->pc == 0x3270C8u) {
        ctx->pc = 0x3270C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3270C4u;
        // 0x3270c8: 0x27b70010  addiu       $s7, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3270CCu;
        goto label_3270cc;
    }
    ctx->pc = 0x3270C4u;
    {
        const bool branch_taken_0x3270c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x3270C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3270C4u;
        // 0x3270c8: 0x27b70010  addiu       $s7, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3270c4) {
            ctx->pc = 0x3270E0u;
            goto label_3270e0;
        }
    }
    ctx->pc = 0x3270CCu;
label_3270cc:
    // 0x3270cc: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x3270ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_3270d0:
    // 0x3270d0: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x3270d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3270d4:
    // 0x3270d4: 0x242182a  slt         $v1, $s2, $v0
    ctx->pc = 0x3270d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3270d8:
    // 0x3270d8: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x3270d8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_3270dc:
    // 0x3270dc: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x3270dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3270e0:
    // 0x3270e0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3270e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3270e4:
    // 0x3270e4: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x3270e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3270e8:
    // 0x3270e8: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x3270e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_3270ec:
    // 0x3270ec: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3270ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3270f0:
    // 0x3270f0: 0xc0ceb28  jal         func_33ACA0
label_3270f4:
    if (ctx->pc == 0x3270F4u) {
        ctx->pc = 0x3270F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3270F0u;
        // 0x3270f4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3270F8u;
        goto label_3270f8;
    }
    ctx->pc = 0x3270F0u;
    SET_GPR_U32(ctx, 31, 0x3270F8u);
    ctx->pc = 0x3270F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3270F0u;
    // 0x3270f4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x3270F0u, 0x3270F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3270F8u;
label_3270f8:
    // 0x3270f8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3270f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3270fc:
    // 0x3270fc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3270fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_327100:
    // 0x327100: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x327100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_327104:
    // 0x327104: 0x8c470020  lw          $a3, 0x20($v0)
    ctx->pc = 0x327104u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_327108:
    // 0x327108: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x327108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32710c:
    // 0x32710c: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x32710cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_327110:
    // 0x327110: 0xe0f809  jalr        $a3
label_327114:
    if (ctx->pc == 0x327114u) {
        ctx->pc = 0x327114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327110u;
        // 0x327114: 0x2613001c  addiu       $s3, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327118u;
        goto label_327118;
    }
    ctx->pc = 0x327110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x327118u);
        ctx->pc = 0x327114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327110u;
        // 0x327114: 0x2613001c  addiu       $s3, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327110u, 0x327118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x327118u;
label_327118:
    // 0x327118: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x327118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_32711c:
    // 0x32711c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x32711cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_327120:
    // 0x327120: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x327120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_327124:
    // 0x327124: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x327124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_327128:
    // 0x327128: 0x40f809  jalr        $v0
label_32712c:
    if (ctx->pc == 0x32712Cu) {
        ctx->pc = 0x32712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327128u;
        // 0x32712c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327130u;
        goto label_327130;
    }
    ctx->pc = 0x327128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x327130u);
        ctx->pc = 0x32712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327128u;
        // 0x32712c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327128u, 0x327130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x327130u;
label_327130:
    // 0x327130: 0x10000019  b           . + 4 + (0x19 << 2)
label_327134:
    if (ctx->pc == 0x327134u) {
        ctx->pc = 0x327138u;
        goto label_327138;
    }
    ctx->pc = 0x327130u;
    {
        const bool branch_taken_0x327130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327130) {
            ctx->pc = 0x327198u;
            goto label_327198;
        }
    }
    ctx->pc = 0x327138u;
label_327138:
    // 0x327138: 0xc0ceb28  jal         func_33ACA0
label_32713c:
    if (ctx->pc == 0x32713Cu) {
        ctx->pc = 0x327140u;
        goto label_327140;
    }
    ctx->pc = 0x327138u;
    SET_GPR_U32(ctx, 31, 0x327140u);
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x327138u, 0x327140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327140u;
label_327140:
    // 0x327140: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x327140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_327144:
    // 0x327144: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x327144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_327148:
    // 0x327148: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_32714c:
    if (ctx->pc == 0x32714Cu) {
        ctx->pc = 0x32714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327148u;
        // 0x32714c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327150u;
        goto label_327150;
    }
    ctx->pc = 0x327148u;
    {
        const bool branch_taken_0x327148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327148u;
        // 0x32714c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327148) {
            ctx->pc = 0x327160u;
            goto label_327160;
        }
    }
    ctx->pc = 0x327150u;
label_327150:
    // 0x327150: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x327150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_327154:
    // 0x327154: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x327154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_327158:
    // 0x327158: 0x40f809  jalr        $v0
label_32715c:
    if (ctx->pc == 0x32715Cu) {
        ctx->pc = 0x32715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327158u;
        // 0x32715c: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327160u;
        goto label_327160;
    }
    ctx->pc = 0x327158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x327160u);
        ctx->pc = 0x32715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327158u;
        // 0x32715c: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327158u, 0x327160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x327160u;
label_327160:
    // 0x327160: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x327160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_327164:
    // 0x327164: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x327164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_327168:
    // 0x327168: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x327168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32716c:
    // 0x32716c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x32716cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_327170:
    // 0x327170: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x327170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_327174:
    // 0x327174: 0x40f809  jalr        $v0
label_327178:
    if (ctx->pc == 0x327178u) {
        ctx->pc = 0x327178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327174u;
        // 0x327178: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32717Cu;
        goto label_32717c;
    }
    ctx->pc = 0x327174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32717Cu);
        ctx->pc = 0x327178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327174u;
        // 0x327178: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327174u, 0x32717Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32717Cu;
label_32717c:
    // 0x32717c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x32717cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_327180:
    // 0x327180: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x327180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327184:
    // 0x327184: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x327184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_327188:
    // 0x327188: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x327188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32718c:
    // 0x32718c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x32718cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_327190:
    // 0x327190: 0x40f809  jalr        $v0
label_327194:
    if (ctx->pc == 0x327194u) {
        ctx->pc = 0x327194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327190u;
        // 0x327194: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327198u;
        goto label_327198;
    }
    ctx->pc = 0x327190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x327198u);
        ctx->pc = 0x327194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327190u;
        // 0x327194: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327190u, 0x327198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x327198u;
label_327198:
    // 0x327198: 0xc0cf3a6  jal         func_33CE98
label_32719c:
    if (ctx->pc == 0x32719Cu) {
        ctx->pc = 0x32719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327198u;
        // 0x32719c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3271A0u;
        goto label_3271a0;
    }
    ctx->pc = 0x327198u;
    SET_GPR_U32(ctx, 31, 0x3271A0u);
    ctx->pc = 0x32719Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327198u;
    // 0x32719c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CE98u, 0x327198u, 0x3271A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3271A0u;
label_3271a0:
    // 0x3271a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3271a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3271a4:
    // 0x3271a4: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x3271a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3271a8:
    // 0x3271a8: 0x122840  sll         $a1, $s2, 1
    ctx->pc = 0x3271a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_3271ac:
    // 0x3271ac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3271acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3271b0:
    // 0x3271b0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_3271b4:
    if (ctx->pc == 0x3271B4u) {
        ctx->pc = 0x3271B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3271B0u;
        // 0x3271b4: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3271B8u;
        goto label_3271b8;
    }
    ctx->pc = 0x3271B0u;
    {
        const bool branch_taken_0x3271b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3271B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3271B0u;
        // 0x3271b4: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3271b0) {
            ctx->pc = 0x327138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327138;
        }
    }
    ctx->pc = 0x3271B8u;
label_3271b8:
    // 0x3271b8: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x3271b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3271bc:
    // 0x3271bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3271bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3271c0:
    // 0x3271c0: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x3271c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_3271c4:
    // 0x3271c4: 0x8e070034  lw          $a3, 0x34($s0)
    ctx->pc = 0x3271c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_3271c8:
    // 0x3271c8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3271c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_3271cc:
    // 0x3271cc: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x3271ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_3271d0:
    // 0x3271d0: 0xbe2821  addu        $a1, $a1, $fp
    ctx->pc = 0x3271d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
label_3271d4:
    // 0x3271d4: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x3271d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_3271d8:
    // 0x3271d8: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x3271d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
label_3271dc:
    // 0x3271dc: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x3271dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_3271e0:
    // 0x3271e0: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x3271e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_3271e4:
    // 0x3271e4: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x3271e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_3271e8:
    // 0x3271e8: 0xae050030  sw          $a1, 0x30($s0)
    ctx->pc = 0x3271e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
label_3271ec:
    // 0x3271ec: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x3271ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_3271f0:
    // 0x3271f0: 0xae070034  sw          $a3, 0x34($s0)
    ctx->pc = 0x3271f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
label_3271f4:
    // 0x3271f4: 0xc0cf49e  jal         func_33D278
label_3271f8:
    if (ctx->pc == 0x3271F8u) {
        ctx->pc = 0x3271F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3271F4u;
        // 0x3271f8: 0xae060040  sw          $a2, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3271FCu;
        goto label_3271fc;
    }
    ctx->pc = 0x3271F4u;
    SET_GPR_U32(ctx, 31, 0x3271FCu);
    ctx->pc = 0x3271F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3271F4u;
    // 0x3271f8: 0xae060040  sw          $a2, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D278u, 0x3271F4u, 0x3271FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3271FCu;
label_3271fc:
    // 0x3271fc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3271fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_327200:
    // 0x327200: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x327200u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_327204:
    // 0x327204: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x327204u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_327208:
    // 0x327208: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x327208u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_32720c:
    // 0x32720c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x32720cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_327210:
    // 0x327210: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x327210u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_327214:
    // 0x327214: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x327214u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_327218:
    // 0x327218: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x327218u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_32721c:
    // 0x32721c: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x32721cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_327220:
    // 0x327220: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x327220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_327224:
    // 0x327224: 0x3e00008  jr          $ra
label_327228:
    if (ctx->pc == 0x327228u) {
        ctx->pc = 0x327228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327224u;
        // 0x327228: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32722Cu;
        goto label_32722c;
    }
    ctx->pc = 0x327224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327224u;
        // 0x327228: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32722Cu;
label_32722c:
    // 0x32722c: 0x0  nop
    ctx->pc = 0x32722cu;
    // NOP
    ctx->pc = 0x327230u;
}
