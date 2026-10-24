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

// Function: func_002705D8
// Address: 0x2705d8 - 0x270c78
void func_002705D8_0x2705d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002705D8_0x2705d8");
#endif

    switch (ctx->pc) {
        case 0x2705f0u: goto label_2705f0;
        case 0x270604u: goto label_270604;
        case 0x270620u: goto label_270620;
        case 0x2706a0u: goto label_2706a0;
        case 0x2706dcu: goto label_2706dc;
        case 0x2706ecu: goto label_2706ec;
        case 0x270708u: goto label_270708;
        case 0x27071cu: goto label_27071c;
        case 0x270820u: goto label_270820;
        case 0x27086cu: goto label_27086c;
        case 0x270880u: goto label_270880;
        case 0x2708b4u: goto label_2708b4;
        case 0x2708c4u: goto label_2708c4;
        case 0x270988u: goto label_270988;
        case 0x2709e8u: goto label_2709e8;
        case 0x270a2cu: goto label_270a2c;
        case 0x270a40u: goto label_270a40;
        case 0x270a58u: goto label_270a58;
        case 0x270a7cu: goto label_270a7c;
        case 0x270aacu: goto label_270aac;
        case 0x270ae8u: goto label_270ae8;
        case 0x270b10u: goto label_270b10;
        case 0x270b48u: goto label_270b48;
        case 0x270b78u: goto label_270b78;
        case 0x270bc0u: goto label_270bc0;
        case 0x270c14u: goto label_270c14;
        default: break;
    }

    ctx->pc = 0x2705d8u;

    // 0x2705d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2705d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2705dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2705dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2705e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2705e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2705e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2705e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2705e8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2705E8u;
    SET_GPR_U32(ctx, 31, 0x2705F0u);
    ctx->pc = 0x2705ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2705E8u;
    // 0x2705ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2705E8u, 0x2705F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2705F0u;
label_2705f0:
    // 0x2705f0: 0x8e040738  lw          $a0, 0x738($s0)
    ctx->pc = 0x2705f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1848)));
    // 0x2705f4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2705F4u;
    {
        const bool branch_taken_0x2705f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2705F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705F4u;
        // 0x2705f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2705f4) {
            ctx->pc = 0x270608u;
            goto label_270608;
        }
    }
    ctx->pc = 0x2705FCu;
    // 0x2705fc: 0xc074102  jal         func_1D0408
    ctx->pc = 0x2705FCu;
    SET_GPR_U32(ctx, 31, 0x270604u);
    ctx->pc = 0x1D0408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0408u, 0x2705FCu, 0x270604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270604u;
label_270604:
    // 0x270604: 0xae000738  sw          $zero, 0x738($s0)
    ctx->pc = 0x270604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1848), GPR_U32(ctx, 0));
label_270608:
    // 0x270608: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x270608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x27060c: 0x24020279  addiu       $v0, $zero, 0x279
    ctx->pc = 0x27060cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 633));
    // 0x270610: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x270610u;
    {
        const bool branch_taken_0x270610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x270614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270610u;
        // 0x270614: 0x2402026a  addiu       $v0, $zero, 0x26A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270610) {
            ctx->pc = 0x270628u;
            goto label_270628;
        }
    }
    ctx->pc = 0x270618u;
    // 0x270618: 0xc09ac7a  jal         func_26B1E8
    ctx->pc = 0x270618u;
    SET_GPR_U32(ctx, 31, 0x270620u);
    ctx->pc = 0x27061Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270618u;
    // 0x27061c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x270618u, 0x270620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270620u;
label_270620:
    // 0x270620: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x270620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x270624: 0x2402026a  addiu       $v0, $zero, 0x26A
    ctx->pc = 0x270624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
label_270628:
    // 0x270628: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x270628u;
    {
        const bool branch_taken_0x270628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x270628) {
            ctx->pc = 0x27062Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270628u;
            // 0x27062c: 0xc60116c0  lwc1        $f1, 0x16C0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x270668u;
            goto label_270668;
        }
    }
    ctx->pc = 0x270630u;
    // 0x270630: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x270630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x270634: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x270634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x270638: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x270638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27063c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27063Cu;
    {
        const bool branch_taken_0x27063c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27063Cu;
        // 0x270640: 0x240200a5  addiu       $v0, $zero, 0xA5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27063c) {
            ctx->pc = 0x270654u;
            goto label_270654;
        }
    }
    ctx->pc = 0x270644u;
    // 0x270644: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x270644u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x270648: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x270648u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x27064c: 0x10000183  b           . + 4 + (0x183 << 2)
    ctx->pc = 0x27064Cu;
    {
        const bool branch_taken_0x27064c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27064Cu;
        // 0x270650: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27064c) {
            ctx->pc = 0x270C5Cu;
            goto label_270c5c;
        }
    }
    ctx->pc = 0x270654u;
label_270654:
    // 0x270654: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x270654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x270658: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x270658u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27065c: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x27065cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x270660: 0x1000017e  b           . + 4 + (0x17E << 2)
    ctx->pc = 0x270660u;
    {
        const bool branch_taken_0x270660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270660u;
        // 0x270664: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270660) {
            ctx->pc = 0x270C5Cu;
            goto label_270c5c;
        }
    }
    ctx->pc = 0x270668u;
label_270668:
    // 0x270668: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27066c: 0x0  nop
    ctx->pc = 0x27066cu;
    // NOP
    // 0x270670: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x270670u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270674: 0x0  nop
    ctx->pc = 0x270674u;
    // NOP
    // 0x270678: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x270678u;
    {
        const bool branch_taken_0x270678 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270678u;
        // 0x27067c: 0x3862026a  xori        $v0, $v1, 0x26A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)618);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270678) {
            ctx->pc = 0x270698u;
            goto label_270698;
        }
    }
    ctx->pc = 0x270680u;
    // 0x270680: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x270680u;
    {
        const bool branch_taken_0x270680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270680u;
        // 0x270684: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270680) {
            ctx->pc = 0x270698u;
            goto label_270698;
        }
    }
    ctx->pc = 0x270688u;
    // 0x270688: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x270688u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27068c: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x27068cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x270690: 0x10000172  b           . + 4 + (0x172 << 2)
    ctx->pc = 0x270690u;
    {
        const bool branch_taken_0x270690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270690u;
        // 0x270694: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270690) {
            ctx->pc = 0x270C5Cu;
            goto label_270c5c;
        }
    }
    ctx->pc = 0x270698u;
label_270698:
    // 0x270698: 0xc09d054  jal         func_274150
    ctx->pc = 0x270698u;
    SET_GPR_U32(ctx, 31, 0x2706A0u);
    ctx->pc = 0x27069Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270698u;
    // 0x27069c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274150u, 0x270698u, 0x2706A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2706A0u;
label_2706a0:
    // 0x2706a0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2706A0u;
    {
        const bool branch_taken_0x2706a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2706A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706A0u;
        // 0x2706a4: 0x24020089  addiu       $v0, $zero, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2706a0) {
            ctx->pc = 0x2706C4u;
            goto label_2706c4;
        }
    }
    ctx->pc = 0x2706A8u;
    // 0x2706a8: 0xc6011734  lwc1        $f1, 0x1734($s0)
    ctx->pc = 0x2706a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2706ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2706acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2706b0: 0x0  nop
    ctx->pc = 0x2706b0u;
    // NOP
    // 0x2706b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2706b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2706b8: 0x0  nop
    ctx->pc = 0x2706b8u;
    // NOP
    // 0x2706bc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2706BCu;
    {
        const bool branch_taken_0x2706bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2706bc) {
            ctx->pc = 0x2706D4u;
            goto label_2706d4;
        }
    }
    ctx->pc = 0x2706C4u;
label_2706c4:
    // 0x2706c4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2706c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2706c8: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2706c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2706cc: 0x10000163  b           . + 4 + (0x163 << 2)
    ctx->pc = 0x2706CCu;
    {
        const bool branch_taken_0x2706cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2706D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706CCu;
        // 0x2706d0: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2706cc) {
            ctx->pc = 0x270C5Cu;
            goto label_270c5c;
        }
    }
    ctx->pc = 0x2706D4u;
label_2706d4:
    // 0x2706d4: 0xc09d3d4  jal         func_274F50
    ctx->pc = 0x2706D4u;
    SET_GPR_U32(ctx, 31, 0x2706DCu);
    ctx->pc = 0x2706D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2706D4u;
    // 0x2706d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274F50u, 0x2706D4u, 0x2706DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2706DCu;
label_2706dc:
    // 0x2706dc: 0x54400161  bnel        $v0, $zero, . + 4 + (0x161 << 2)
    ctx->pc = 0x2706DCu;
    {
        const bool branch_taken_0x2706dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2706dc) {
            ctx->pc = 0x2706E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2706DCu;
            // 0x2706e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270C64u;
            goto label_270c64;
        }
    }
    ctx->pc = 0x2706E4u;
    // 0x2706e4: 0xc09d3a6  jal         func_274E98
    ctx->pc = 0x2706E4u;
    SET_GPR_U32(ctx, 31, 0x2706ECu);
    ctx->pc = 0x2706E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2706E4u;
    // 0x2706e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274E98u, 0x2706E4u, 0x2706ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2706ECu;
label_2706ec:
    // 0x2706ec: 0x5440015d  bnel        $v0, $zero, . + 4 + (0x15D << 2)
    ctx->pc = 0x2706ECu;
    {
        const bool branch_taken_0x2706ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2706ec) {
            ctx->pc = 0x2706F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2706ECu;
            // 0x2706f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270C64u;
            goto label_270c64;
        }
    }
    ctx->pc = 0x2706F4u;
    // 0x2706f4: 0x92021864  lbu         $v0, 0x1864($s0)
    ctx->pc = 0x2706f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6244)));
    // 0x2706f8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2706F8u;
    {
        const bool branch_taken_0x2706f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2706FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706F8u;
        // 0x2706fc: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2706f8) {
            ctx->pc = 0x270758u;
            goto label_270758;
        }
    }
    ctx->pc = 0x270700u;
    // 0x270700: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x270700u;
    SET_GPR_U32(ctx, 31, 0x270708u);
    ctx->pc = 0x270704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270700u;
    // 0x270704: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x270700u, 0x270708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270708u;
label_270708:
    // 0x270708: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x270708u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x27070c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x27070Cu;
    {
        const bool branch_taken_0x27070c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27070c) {
            ctx->pc = 0x270710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27070Cu;
            // 0x270710: 0x8e0216ec  lw          $v0, 0x16EC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27072Cu;
            goto label_27072c;
        }
    }
    ctx->pc = 0x270714u;
    // 0x270714: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x270714u;
    SET_GPR_U32(ctx, 31, 0x27071Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x270714u, 0x27071Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27071Cu;
label_27071c:
    // 0x27071c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27071cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x270720: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x270720u;
    {
        const bool branch_taken_0x270720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270720) {
            ctx->pc = 0x270724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270720u;
            // 0x270724: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270728u;
            goto label_270728;
        }
    }
    ctx->pc = 0x270728u;
label_270728:
    // 0x270728: 0x8e0216ec  lw          $v0, 0x16EC($s0)
    ctx->pc = 0x270728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5868)));
label_27072c:
    // 0x27072c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27072Cu;
    {
        const bool branch_taken_0x27072c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27072c) {
            ctx->pc = 0x270730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27072Cu;
            // 0x270730: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270734u;
            goto label_270734;
        }
    }
    ctx->pc = 0x270734u;
label_270734:
    // 0x270734: 0xc6010760  lwc1        $f1, 0x760($s0)
    ctx->pc = 0x270734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270738: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x270738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x27073c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x27073cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x270740: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270744: 0x0  nop
    ctx->pc = 0x270744u;
    // NOP
    // 0x270748: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x270748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27074c: 0x0  nop
    ctx->pc = 0x27074cu;
    // NOP
    // 0x270750: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x270750u;
    {
        const bool branch_taken_0x270750 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x270750) {
            ctx->pc = 0x270754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270750u;
            // 0x270754: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270758u;
            goto label_270758;
        }
    }
    ctx->pc = 0x270758u;
label_270758:
    // 0x270758: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x270758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x27075c: 0x28620223  slti        $v0, $v1, 0x223
    ctx->pc = 0x27075cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
    // 0x270760: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x270760u;
    {
        const bool branch_taken_0x270760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270760u;
        // 0x270764: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270760) {
            ctx->pc = 0x270788u;
            goto label_270788;
        }
    }
    ctx->pc = 0x270768u;
    // 0x270768: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x270768u;
    {
        const bool branch_taken_0x270768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270768u;
        // 0x27076c: 0x24020211  addiu       $v0, $zero, 0x211 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 529));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270768) {
            ctx->pc = 0x27079Cu;
            goto label_27079c;
        }
    }
    ctx->pc = 0x270770u;
    // 0x270770: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x270770u;
    {
        const bool branch_taken_0x270770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x270774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270770u;
        // 0x270774: 0x2402021f  addiu       $v0, $zero, 0x21F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 543));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270770) {
            ctx->pc = 0x270844u;
            goto label_270844;
        }
    }
    ctx->pc = 0x270778u;
    // 0x270778: 0x50620071  beql        $v1, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x270778u;
    {
        const bool branch_taken_0x270778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x270778) {
            ctx->pc = 0x27077Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270778u;
            // 0x27077c: 0xc6010618  lwc1        $f1, 0x618($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x270940u;
            goto label_270940;
        }
    }
    ctx->pc = 0x270780u;
    // 0x270780: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x270780u;
    {
        const bool branch_taken_0x270780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270780u;
        // 0x270784: 0x92021864  lbu         $v0, 0x1864($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270780) {
            ctx->pc = 0x2709A8u;
            goto label_2709a8;
        }
    }
    ctx->pc = 0x270788u;
label_270788:
    // 0x270788: 0x24020265  addiu       $v0, $zero, 0x265
    ctx->pc = 0x270788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 613));
    // 0x27078c: 0x50620043  beql        $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x27078Cu;
    {
        const bool branch_taken_0x27078c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27078c) {
            ctx->pc = 0x270790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27078Cu;
            // 0x270790: 0x8e0216d4  lw          $v0, 0x16D4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27089Cu;
            goto label_27089c;
        }
    }
    ctx->pc = 0x270794u;
    // 0x270794: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x270794u;
    {
        const bool branch_taken_0x270794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270794u;
        // 0x270798: 0x92021864  lbu         $v0, 0x1864($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270794) {
            ctx->pc = 0x2709A8u;
            goto label_2709a8;
        }
    }
    ctx->pc = 0x27079Cu;
label_27079c:
    // 0x27079c: 0x92021864  lbu         $v0, 0x1864($s0)
    ctx->pc = 0x27079cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6244)));
    // 0x2707a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2707A0u;
    {
        const bool branch_taken_0x2707a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2707A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707A0u;
        // 0x2707a4: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2707a0) {
            ctx->pc = 0x2707BCu;
            goto label_2707bc;
        }
    }
    ctx->pc = 0x2707A8u;
    // 0x2707a8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2707a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2707ac: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2707acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2707b0: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x2707b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x2707b4: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x2707B4u;
    {
        const bool branch_taken_0x2707b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2707B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707B4u;
        // 0x2707b8: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2707b4) {
            ctx->pc = 0x270C5Cu;
            goto label_270c5c;
        }
    }
    ctx->pc = 0x2707BCu;
label_2707bc:
    // 0x2707bc: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x2707bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2707c0: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2707c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x2707c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2707c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2707c8: 0x0  nop
    ctx->pc = 0x2707c8u;
    // NOP
    // 0x2707cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2707ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2707d0: 0x0  nop
    ctx->pc = 0x2707d0u;
    // NOP
    // 0x2707d4: 0x4500011e  bc1f        . + 4 + (0x11E << 2)
    ctx->pc = 0x2707D4u;
    {
        const bool branch_taken_0x2707d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2707D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707D4u;
        // 0x2707d8: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2707d4) {
            ctx->pc = 0x270C50u;
            goto label_270c50;
        }
    }
    ctx->pc = 0x2707DCu;
    // 0x2707dc: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x2707dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x2707e0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2707E0u;
    {
        const bool branch_taken_0x2707e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2707E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707E0u;
        // 0x2707e4: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2707e0) {
            ctx->pc = 0x270808u;
            goto label_270808;
        }
    }
    ctx->pc = 0x2707E8u;
    // 0x2707e8: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x2707e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2707ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2707ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2707f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2707f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2707f4: 0x0  nop
    ctx->pc = 0x2707f4u;
    // NOP
    // 0x2707f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2707f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2707fc: 0x0  nop
    ctx->pc = 0x2707fcu;
    // NOP
    // 0x270800: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x270800u;
    {
        const bool branch_taken_0x270800 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270800u;
        // 0x270804: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270800) {
            ctx->pc = 0x270818u;
            goto label_270818;
        }
    }
    ctx->pc = 0x270808u;
label_270808:
    // 0x270808: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x270808u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27080c: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x27080cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x270810: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x270810u;
    {
        const bool branch_taken_0x270810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270810u;
        // 0x270814: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270810) {
            ctx->pc = 0x270C5Cu;
            goto label_270c5c;
        }
    }
    ctx->pc = 0x270818u;
label_270818:
    // 0x270818: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x270818u;
    SET_GPR_U32(ctx, 31, 0x270820u);
    ctx->pc = 0x27081Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270818u;
    // 0x27081c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x270818u, 0x270820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270820u;
label_270820:
    // 0x270820: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x270820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x270824: 0x5440010b  bnel        $v0, $zero, . + 4 + (0x10B << 2)
    ctx->pc = 0x270824u;
    {
        const bool branch_taken_0x270824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270824) {
            ctx->pc = 0x270828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270824u;
            // 0x270828: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270C54u;
            goto label_270c54;
        }
    }
    ctx->pc = 0x27082Cu;
    // 0x27082c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x27082cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x270830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270834: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x270834u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x270838: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x270838u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x27083c: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x27083Cu;
    {
        const bool branch_taken_0x27083c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27083Cu;
        // 0x270840: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27083c) {
            ctx->pc = 0x270C5Cu;
            goto label_270c5c;
        }
    }
    ctx->pc = 0x270844u;
label_270844:
    // 0x270844: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x270844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x270848: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x270848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x27084c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27084Cu;
    {
        const bool branch_taken_0x27084c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27084Cu;
        // 0x270850: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27084c) {
            ctx->pc = 0x270864u;
            goto label_270864;
        }
    }
    ctx->pc = 0x270854u;
    // 0x270854: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x270854u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x270858: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x270858u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x27085c: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x27085Cu;
    {
        const bool branch_taken_0x27085c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27085Cu;
        // 0x270860: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27085c) {
            ctx->pc = 0x270C5Cu;
            goto label_270c5c;
        }
    }
    ctx->pc = 0x270864u;
label_270864:
    // 0x270864: 0xc098194  jal         func_260650
    ctx->pc = 0x270864u;
    SET_GPR_U32(ctx, 31, 0x27086Cu);
    ctx->pc = 0x270868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270864u;
    // 0x270868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260650u, 0x270864u, 0x27086Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27086Cu;
label_27086c:
    // 0x27086c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x27086cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x270870: 0x5040004d  beql        $v0, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x270870u;
    {
        const bool branch_taken_0x270870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270870) {
            ctx->pc = 0x270874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270870u;
            // 0x270874: 0x92021864  lbu         $v0, 0x1864($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2709A8u;
            goto label_2709a8;
        }
    }
    ctx->pc = 0x270878u;
    // 0x270878: 0xc0b777e  jal         func_2DDDF8
    ctx->pc = 0x270878u;
    SET_GPR_U32(ctx, 31, 0x270880u);
    ctx->pc = 0x2DDDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDDF8u, 0x270878u, 0x270880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270880u;
label_270880:
    // 0x270880: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x270880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x270884: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x270884u;
    {
        const bool branch_taken_0x270884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270884u;
        // 0x270888: 0x24020084  addiu       $v0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270884) {
            ctx->pc = 0x2709A4u;
            goto label_2709a4;
        }
    }
    ctx->pc = 0x27088Cu;
    // 0x27088c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x27088cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x270890: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x270890u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x270894: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x270894u;
    {
        const bool branch_taken_0x270894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270894u;
        // 0x270898: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270894) {
            ctx->pc = 0x270C5Cu;
            goto label_270c5c;
        }
    }
    ctx->pc = 0x27089Cu;
label_27089c:
    // 0x27089c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x27089cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2708a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2708a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2708a4: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x2708A4u;
    {
        const bool branch_taken_0x2708a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2708a4) {
            ctx->pc = 0x2708A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2708A4u;
            // 0x2708a8: 0x92021864  lbu         $v0, 0x1864($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2709A8u;
            goto label_2709a8;
        }
    }
    ctx->pc = 0x2708ACu;
    // 0x2708ac: 0xc04b13c  jal         func_12C4F0
    ctx->pc = 0x2708ACu;
    SET_GPR_U32(ctx, 31, 0x2708B4u);
    ctx->pc = 0x2708B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2708ACu;
    // 0x2708b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C4F0u, 0x2708ACu, 0x2708B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2708B4u;
label_2708b4:
    // 0x2708b4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2708B4u;
    {
        const bool branch_taken_0x2708b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2708b4) {
            ctx->pc = 0x2708B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2708B4u;
            // 0x2708b8: 0x92021864  lbu         $v0, 0x1864($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2708D0u;
            goto label_2708d0;
        }
    }
    ctx->pc = 0x2708BCu;
    // 0x2708bc: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x2708BCu;
    SET_GPR_U32(ctx, 31, 0x2708C4u);
    ctx->pc = 0x2708C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2708BCu;
    // 0x2708c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x2708BCu, 0x2708C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2708C4u;
label_2708c4:
    // 0x2708c4: 0x544000e7  bnel        $v0, $zero, . + 4 + (0xE7 << 2)
    ctx->pc = 0x2708C4u;
    {
        const bool branch_taken_0x2708c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2708c4) {
            ctx->pc = 0x2708C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2708C4u;
            // 0x2708c8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270C64u;
            goto label_270c64;
        }
    }
    ctx->pc = 0x2708CCu;
    // 0x2708cc: 0x92021864  lbu         $v0, 0x1864($s0)
    ctx->pc = 0x2708ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6244)));
label_2708d0:
    // 0x2708d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2708D0u;
    {
        const bool branch_taken_0x2708d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2708D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708D0u;
        // 0x2708d4: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2708d0) {
            ctx->pc = 0x2708ECu;
            goto label_2708ec;
        }
    }
    ctx->pc = 0x2708D8u;
    // 0x2708d8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2708d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2708dc: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2708dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2708e0: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x2708e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x2708e4: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x2708E4u;
    {
        const bool branch_taken_0x2708e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2708E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708E4u;
        // 0x2708e8: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2708e4) {
            ctx->pc = 0x270C5Cu;
            goto label_270c5c;
        }
    }
    ctx->pc = 0x2708ECu;
label_2708ec:
    // 0x2708ec: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x2708ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2708f0: 0x3c014144  lui         $at, 0x4144
    ctx->pc = 0x2708f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16708 << 16));
    // 0x2708f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2708f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2708f8: 0x0  nop
    ctx->pc = 0x2708f8u;
    // NOP
    // 0x2708fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2708fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270900: 0x0  nop
    ctx->pc = 0x270900u;
    // NOP
    // 0x270904: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x270904u;
    {
        const bool branch_taken_0x270904 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270904u;
        // 0x270908: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270904) {
            ctx->pc = 0x27092Cu;
            goto label_27092c;
        }
    }
    ctx->pc = 0x27090Cu;
    // 0x27090c: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x27090cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x270910: 0x2404009e  addiu       $a0, $zero, 0x9E
    ctx->pc = 0x270910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x270914: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x270914u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x270918: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x270918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x27091c: 0xa20402f5  sb          $a0, 0x2F5($s0)
    ctx->pc = 0x27091cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 4));
    // 0x270920: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x270920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    // 0x270924: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x270924u;
    {
        const bool branch_taken_0x270924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270924u;
        // 0x270928: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270924) {
            ctx->pc = 0x270C5Cu;
            goto label_270c5c;
        }
    }
    ctx->pc = 0x27092Cu;
label_27092c:
    // 0x27092c: 0x2402009c  addiu       $v0, $zero, 0x9C
    ctx->pc = 0x27092cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x270930: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x270930u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x270934: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x270934u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x270938: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x270938u;
    {
        const bool branch_taken_0x270938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270938u;
        // 0x27093c: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270938) {
            ctx->pc = 0x270C5Cu;
            goto label_270c5c;
        }
    }
    ctx->pc = 0x270940u;
label_270940:
    // 0x270940: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x270940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x270944: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270948: 0x0  nop
    ctx->pc = 0x270948u;
    // NOP
    // 0x27094c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27094cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270950: 0x0  nop
    ctx->pc = 0x270950u;
    // NOP
    // 0x270954: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x270954u;
    {
        const bool branch_taken_0x270954 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x270954) {
            ctx->pc = 0x270958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270954u;
            // 0x270958: 0x92021864  lbu         $v0, 0x1864($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2709A8u;
            goto label_2709a8;
        }
    }
    ctx->pc = 0x27095Cu;
    // 0x27095c: 0xc60116e4  lwc1        $f1, 0x16E4($s0)
    ctx->pc = 0x27095cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270960: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270960u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270964: 0x0  nop
    ctx->pc = 0x270964u;
    // NOP
    // 0x270968: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x270968u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27096c: 0x0  nop
    ctx->pc = 0x27096cu;
    // NOP
    // 0x270970: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x270970u;
    {
        const bool branch_taken_0x270970 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270970u;
        // 0x270974: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270970) {
            ctx->pc = 0x2709A4u;
            goto label_2709a4;
        }
    }
    ctx->pc = 0x270978u;
    // 0x270978: 0x960502fe  lhu         $a1, 0x2FE($s0)
    ctx->pc = 0x270978u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x27097c: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x27097cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x270980: 0xc0a4670  jal         func_2919C0
    ctx->pc = 0x270980u;
    SET_GPR_U32(ctx, 31, 0x270988u);
    ctx->pc = 0x270984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270980u;
    // 0x270984: 0x2406021f  addiu       $a2, $zero, 0x21F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 543));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2919C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2919C0u, 0x270980u, 0x270988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270988u;
label_270988:
    // 0x270988: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x270988u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x27098c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27098Cu;
    {
        const bool branch_taken_0x27098c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27098Cu;
        // 0x270990: 0x2402008b  addiu       $v0, $zero, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27098c) {
            ctx->pc = 0x2709A4u;
            goto label_2709a4;
        }
    }
    ctx->pc = 0x270994u;
    // 0x270994: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x270994u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x270998: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x270998u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x27099c: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x27099Cu;
    {
        const bool branch_taken_0x27099c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2709A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27099Cu;
        // 0x2709a0: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27099c) {
            ctx->pc = 0x270C5Cu;
            goto label_270c5c;
        }
    }
    ctx->pc = 0x2709A4u;
label_2709a4:
    // 0x2709a4: 0x92021864  lbu         $v0, 0x1864($s0)
    ctx->pc = 0x2709a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6244)));
label_2709a8:
    // 0x2709a8: 0x50400093  beql        $v0, $zero, . + 4 + (0x93 << 2)
    ctx->pc = 0x2709A8u;
    {
        const bool branch_taken_0x2709a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2709a8) {
            ctx->pc = 0x2709ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2709A8u;
            // 0x2709ac: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270BF8u;
            goto label_270bf8;
        }
    }
    ctx->pc = 0x2709B0u;
    // 0x2709b0: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x2709b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x2709b4: 0x2463fdfb  addiu       $v1, $v1, -0x205
    ctx->pc = 0x2709b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966779));
    // 0x2709b8: 0x2c62007a  sltiu       $v0, $v1, 0x7A
    ctx->pc = 0x2709b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)122) ? 1 : 0);
    // 0x2709bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2709BCu;
    {
        const bool branch_taken_0x2709bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2709C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709BCu;
        // 0x2709c0: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2709bc) {
            ctx->pc = 0x2709E0u;
            goto label_2709e0;
        }
    }
    ctx->pc = 0x2709C4u;
    // 0x2709c4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x2709c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x2709c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2709c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2709cc: 0x24425e20  addiu       $v0, $v0, 0x5E20
    ctx->pc = 0x2709ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24096));
    // 0x2709d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2709d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2709d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2709d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2709d8: 0x800008  jr          $a0
    ctx->pc = 0x2709D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2709E0u: goto label_2709e0;
            case 0x270A04u: goto label_270a04;
            case 0x270A74u: goto label_270a74;
            case 0x270AE0u: goto label_270ae0;
            case 0x270B08u: goto label_270b08;
            case 0x270B40u: goto label_270b40;
            case 0x270B98u: goto label_270b98;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2709D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2709E0u;
label_2709e0:
    // 0x2709e0: 0xc04b13c  jal         func_12C4F0
    ctx->pc = 0x2709E0u;
    SET_GPR_U32(ctx, 31, 0x2709E8u);
    ctx->pc = 0x2709E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2709E0u;
    // 0x2709e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C4F0u, 0x2709E0u, 0x2709E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2709E8u;
label_2709e8:
    // 0x2709e8: 0x54400083  bnel        $v0, $zero, . + 4 + (0x83 << 2)
    ctx->pc = 0x2709E8u;
    {
        const bool branch_taken_0x2709e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2709e8) {
            ctx->pc = 0x2709ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2709E8u;
            // 0x2709ec: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270BF8u;
            goto label_270bf8;
        }
    }
    ctx->pc = 0x2709F0u;
    // 0x2709f0: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x2709f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x2709f4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2709f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2709f8: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2709f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2709fc: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x2709FCu;
    {
        const bool branch_taken_0x2709fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709FCu;
        // 0x270a00: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2709fc) {
            ctx->pc = 0x270C5Cu;
            goto label_270c5c;
        }
    }
    ctx->pc = 0x270A04u;
label_270a04:
    // 0x270a04: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x270a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270a08: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x270a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x270a0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270a0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270a10: 0x0  nop
    ctx->pc = 0x270a10u;
    // NOP
    // 0x270a14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x270a14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270a18: 0x0  nop
    ctx->pc = 0x270a18u;
    // NOP
    // 0x270a1c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x270A1Cu;
    {
        const bool branch_taken_0x270a1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A1Cu;
        // 0x270a20: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a1c) {
            ctx->pc = 0x270A64u;
            goto label_270a64;
        }
    }
    ctx->pc = 0x270A24u;
    // 0x270a24: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x270A24u;
    SET_GPR_U32(ctx, 31, 0x270A2Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x270A24u, 0x270A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270A2Cu;
label_270a2c:
    // 0x270a2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x270a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x270a30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x270A30u;
    {
        const bool branch_taken_0x270a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270a30) {
            ctx->pc = 0x270A48u;
            goto label_270a48;
        }
    }
    ctx->pc = 0x270A38u;
    // 0x270a38: 0xc04b13c  jal         func_12C4F0
    ctx->pc = 0x270A38u;
    SET_GPR_U32(ctx, 31, 0x270A40u);
    ctx->pc = 0x270A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270A38u;
    // 0x270a3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C4F0u, 0x270A38u, 0x270A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270A40u;
label_270a40:
    // 0x270a40: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x270A40u;
    {
        const bool branch_taken_0x270a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A40u;
        // 0x270a44: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a40) {
            ctx->pc = 0x270A64u;
            goto label_270a64;
        }
    }
    ctx->pc = 0x270A48u;
label_270a48:
    // 0x270a48: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x270a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x270a4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x270a4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x270a50: 0xc09ce58  jal         func_273960
    ctx->pc = 0x270A50u;
    SET_GPR_U32(ctx, 31, 0x270A58u);
    ctx->pc = 0x270A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270A50u;
    // 0x270a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273960u, 0x270A50u, 0x270A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270A58u;
label_270a58:
    // 0x270a58: 0x54400082  bnel        $v0, $zero, . + 4 + (0x82 << 2)
    ctx->pc = 0x270A58u;
    {
        const bool branch_taken_0x270a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270a58) {
            ctx->pc = 0x270A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270A58u;
            // 0x270a5c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270C64u;
            goto label_270c64;
        }
    }
    ctx->pc = 0x270A60u;
    // 0x270a60: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x270a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_270a64:
    // 0x270a64: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x270a64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x270a68: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x270a68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x270a6c: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x270A6Cu;
    {
        const bool branch_taken_0x270a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A6Cu;
        // 0x270a70: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a6c) {
            ctx->pc = 0x270C5Cu;
            goto label_270c5c;
        }
    }
    ctx->pc = 0x270A74u;
label_270a74:
    // 0x270a74: 0xc04b13c  jal         func_12C4F0
    ctx->pc = 0x270A74u;
    SET_GPR_U32(ctx, 31, 0x270A7Cu);
    ctx->pc = 0x270A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270A74u;
    // 0x270a78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C4F0u, 0x270A74u, 0x270A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270A7Cu;
label_270a7c:
    // 0x270a7c: 0x5440005e  bnel        $v0, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x270A7Cu;
    {
        const bool branch_taken_0x270a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270a7c) {
            ctx->pc = 0x270A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270A7Cu;
            // 0x270a80: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270BF8u;
            goto label_270bf8;
        }
    }
    ctx->pc = 0x270A84u;
    // 0x270a84: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x270a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270a88: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x270a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x270a8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270a90: 0x0  nop
    ctx->pc = 0x270a90u;
    // NOP
    // 0x270a94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x270a94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270a98: 0x0  nop
    ctx->pc = 0x270a98u;
    // NOP
    // 0x270a9c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x270A9Cu;
    {
        const bool branch_taken_0x270a9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A9Cu;
        // 0x270aa0: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a9c) {
            ctx->pc = 0x270AD0u;
            goto label_270ad0;
        }
    }
    ctx->pc = 0x270AA4u;
    // 0x270aa4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x270AA4u;
    SET_GPR_U32(ctx, 31, 0x270AACu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x270AA4u, 0x270AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270AACu;
label_270aac:
    // 0x270aac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x270aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x270ab0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x270AB0u;
    {
        const bool branch_taken_0x270ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270AB0u;
        // 0x270ab4: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ab0) {
            ctx->pc = 0x270ACCu;
            goto label_270acc;
        }
    }
    ctx->pc = 0x270AB8u;
    // 0x270ab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270abc: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x270abcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x270ac0: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x270ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x270ac4: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x270AC4u;
    {
        const bool branch_taken_0x270ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270AC4u;
        // 0x270ac8: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ac4) {
            ctx->pc = 0x270C5Cu;
            goto label_270c5c;
        }
    }
    ctx->pc = 0x270ACCu;
label_270acc:
    // 0x270acc: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x270accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_270ad0:
    // 0x270ad0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x270ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x270ad4: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x270ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x270ad8: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x270AD8u;
    {
        const bool branch_taken_0x270ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270AD8u;
        // 0x270adc: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ad8) {
            ctx->pc = 0x270C5Cu;
            goto label_270c5c;
        }
    }
    ctx->pc = 0x270AE0u;
label_270ae0:
    // 0x270ae0: 0xc04b13c  jal         func_12C4F0
    ctx->pc = 0x270AE0u;
    SET_GPR_U32(ctx, 31, 0x270AE8u);
    ctx->pc = 0x270AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270AE0u;
    // 0x270ae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C4F0u, 0x270AE0u, 0x270AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270AE8u;
label_270ae8:
    // 0x270ae8: 0x54400043  bnel        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x270AE8u;
    {
        const bool branch_taken_0x270ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270ae8) {
            ctx->pc = 0x270AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270AE8u;
            // 0x270aec: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270BF8u;
            goto label_270bf8;
        }
    }
    ctx->pc = 0x270AF0u;
    // 0x270af0: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x270af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x270af4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270af8: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x270af8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x270afc: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x270afcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x270b00: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x270B00u;
    {
        const bool branch_taken_0x270b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B00u;
        // 0x270b04: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b00) {
            ctx->pc = 0x270C5Cu;
            goto label_270c5c;
        }
    }
    ctx->pc = 0x270B08u;
label_270b08:
    // 0x270b08: 0xc04b13c  jal         func_12C4F0
    ctx->pc = 0x270B08u;
    SET_GPR_U32(ctx, 31, 0x270B10u);
    ctx->pc = 0x270B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270B08u;
    // 0x270b0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C4F0u, 0x270B08u, 0x270B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270B10u;
label_270b10:
    // 0x270b10: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x270B10u;
    {
        const bool branch_taken_0x270b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B10u;
        // 0x270b14: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b10) {
            ctx->pc = 0x270B2Cu;
            goto label_270b2c;
        }
    }
    ctx->pc = 0x270B18u;
    // 0x270b18: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x270b18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x270b1c: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x270b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x270b20: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x270b20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x270b24: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x270B24u;
    {
        const bool branch_taken_0x270b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B24u;
        // 0x270b28: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b24) {
            ctx->pc = 0x270BF4u;
            goto label_270bf4;
        }
    }
    ctx->pc = 0x270B2Cu;
label_270b2c:
    // 0x270b2c: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x270b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x270b30: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x270b30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x270b34: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x270b34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x270b38: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x270B38u;
    {
        const bool branch_taken_0x270b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B38u;
        // 0x270b3c: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b38) {
            ctx->pc = 0x270C5Cu;
            goto label_270c5c;
        }
    }
    ctx->pc = 0x270B40u;
label_270b40:
    // 0x270b40: 0xc04b13c  jal         func_12C4F0
    ctx->pc = 0x270B40u;
    SET_GPR_U32(ctx, 31, 0x270B48u);
    ctx->pc = 0x270B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270B40u;
    // 0x270b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C4F0u, 0x270B40u, 0x270B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270B48u;
label_270b48:
    // 0x270b48: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x270B48u;
    {
        const bool branch_taken_0x270b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270b48) {
            ctx->pc = 0x270B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270B48u;
            // 0x270b4c: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270BF8u;
            goto label_270bf8;
        }
    }
    ctx->pc = 0x270B50u;
    // 0x270b50: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x270b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270b54: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x270b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x270b58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270b5c: 0x0  nop
    ctx->pc = 0x270b5cu;
    // NOP
    // 0x270b60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x270b60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270b64: 0x0  nop
    ctx->pc = 0x270b64u;
    // NOP
    // 0x270b68: 0x45020023  bc1fl       . + 4 + (0x23 << 2)
    ctx->pc = 0x270B68u;
    {
        const bool branch_taken_0x270b68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x270b68) {
            ctx->pc = 0x270B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270B68u;
            // 0x270b6c: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270BF8u;
            goto label_270bf8;
        }
    }
    ctx->pc = 0x270B70u;
    // 0x270b70: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x270B70u;
    SET_GPR_U32(ctx, 31, 0x270B78u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x270B70u, 0x270B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270B78u;
label_270b78:
    // 0x270b78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x270b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x270b7c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x270B7Cu;
    {
        const bool branch_taken_0x270b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B7Cu;
        // 0x270b80: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b7c) {
            ctx->pc = 0x270BF4u;
            goto label_270bf4;
        }
    }
    ctx->pc = 0x270B84u;
    // 0x270b84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270b88: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x270b88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x270b8c: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x270b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x270b90: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x270B90u;
    {
        const bool branch_taken_0x270b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B90u;
        // 0x270b94: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b90) {
            ctx->pc = 0x270C5Cu;
            goto label_270c5c;
        }
    }
    ctx->pc = 0x270B98u;
label_270b98:
    // 0x270b98: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x270b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270b9c: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x270b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x270ba0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270ba4: 0x0  nop
    ctx->pc = 0x270ba4u;
    // NOP
    // 0x270ba8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x270ba8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270bac: 0x0  nop
    ctx->pc = 0x270bacu;
    // NOP
    // 0x270bb0: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x270BB0u;
    {
        const bool branch_taken_0x270bb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BB0u;
        // 0x270bb4: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270bb0) {
            ctx->pc = 0x270BE4u;
            goto label_270be4;
        }
    }
    ctx->pc = 0x270BB8u;
    // 0x270bb8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x270BB8u;
    SET_GPR_U32(ctx, 31, 0x270BC0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x270BB8u, 0x270BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270BC0u;
label_270bc0:
    // 0x270bc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x270bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x270bc4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x270BC4u;
    {
        const bool branch_taken_0x270bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BC4u;
        // 0x270bc8: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270bc4) {
            ctx->pc = 0x270BE0u;
            goto label_270be0;
        }
    }
    ctx->pc = 0x270BCCu;
    // 0x270bcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x270bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x270bd0: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x270bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x270bd4: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x270bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x270bd8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x270BD8u;
    {
        const bool branch_taken_0x270bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BD8u;
        // 0x270bdc: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270bd8) {
            ctx->pc = 0x270C5Cu;
            goto label_270c5c;
        }
    }
    ctx->pc = 0x270BE0u;
label_270be0:
    // 0x270be0: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x270be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_270be4:
    // 0x270be4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x270be4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x270be8: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x270be8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x270bec: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x270BECu;
    {
        const bool branch_taken_0x270bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BECu;
        // 0x270bf0: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270bec) {
            ctx->pc = 0x270C5Cu;
            goto label_270c5c;
        }
    }
    ctx->pc = 0x270BF4u;
label_270bf4:
    // 0x270bf4: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x270bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
label_270bf8:
    // 0x270bf8: 0x260516a0  addiu       $a1, $s0, 0x16A0
    ctx->pc = 0x270bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5792));
    // 0x270bfc: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x270bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x270c00: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x270c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x270c04: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x270c04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x270c08: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x270c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x270c0c: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x270C0Cu;
    SET_GPR_U32(ctx, 31, 0x270C14u);
    ctx->pc = 0x270C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270C0Cu;
    // 0x270c10: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x270C0Cu, 0x270C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270C14u;
label_270c14:
    // 0x270c14: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x270c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x270c18: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x270c18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x270c1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x270c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270c20: 0x0  nop
    ctx->pc = 0x270c20u;
    // NOP
    // 0x270c24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x270c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270c28: 0x0  nop
    ctx->pc = 0x270c28u;
    // NOP
    // 0x270c2c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x270C2Cu;
    {
        const bool branch_taken_0x270c2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C2Cu;
        // 0x270c30: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c2c) {
            ctx->pc = 0x270C50u;
            goto label_270c50;
        }
    }
    ctx->pc = 0x270C34u;
    // 0x270c34: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x270c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x270c38: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x270c38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x270c3c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x270c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x270c40: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x270c40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x270c44: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x270c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    // 0x270c48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x270C48u;
    {
        const bool branch_taken_0x270c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C48u;
        // 0x270c4c: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c48) {
            ctx->pc = 0x270C5Cu;
            goto label_270c5c;
        }
    }
    ctx->pc = 0x270C50u;
label_270c50:
    // 0x270c50: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x270c50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_270c54:
    // 0x270c54: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x270c54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x270c58: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x270c58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_270c5c:
    // 0x270c5c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x270c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x270c60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x270c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_270c64:
    // 0x270c64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x270c64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x270c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x270C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C6Cu;
        // 0x270c70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270C74u;
    // 0x270c74: 0x0  nop
    ctx->pc = 0x270c74u;
    // NOP
    ctx->pc = 0x270c78u;
}
