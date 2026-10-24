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

// Function: func_00381478
// Address: 0x381478 - 0x381940
void func_00381478_0x381478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00381478_0x381478");
#endif

    switch (ctx->pc) {
        case 0x3814d0u: goto label_3814d0;
        case 0x381520u: goto label_381520;
        case 0x381590u: goto label_381590;
        case 0x3815a8u: goto label_3815a8;
        case 0x3815bcu: goto label_3815bc;
        case 0x3815d8u: goto label_3815d8;
        case 0x3815f8u: goto label_3815f8;
        case 0x38162cu: goto label_38162c;
        case 0x38164cu: goto label_38164c;
        case 0x381678u: goto label_381678;
        case 0x3816a8u: goto label_3816a8;
        case 0x3816d0u: goto label_3816d0;
        case 0x3816f0u: goto label_3816f0;
        case 0x381718u: goto label_381718;
        case 0x381738u: goto label_381738;
        case 0x381760u: goto label_381760;
        case 0x381778u: goto label_381778;
        case 0x381798u: goto label_381798;
        case 0x3817b8u: goto label_3817b8;
        case 0x3817d4u: goto label_3817d4;
        case 0x3817f0u: goto label_3817f0;
        case 0x38180cu: goto label_38180c;
        case 0x381828u: goto label_381828;
        case 0x381844u: goto label_381844;
        case 0x381860u: goto label_381860;
        case 0x381870u: goto label_381870;
        case 0x381880u: goto label_381880;
        case 0x381898u: goto label_381898;
        case 0x3818b4u: goto label_3818b4;
        case 0x3818d8u: goto label_3818d8;
        case 0x3818f4u: goto label_3818f4;
        case 0x381910u: goto label_381910;
        default: break;
    }

    ctx->pc = 0x381478u;

    // 0x381478: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x381478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x38147c: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x38147cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x381480: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x381480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
    // 0x381484: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x381484u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x381488: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x381488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
    // 0x38148c: 0x24e7c4f8  addiu       $a3, $a3, -0x3B08
    ctx->pc = 0x38148cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952184));
    // 0x381490: 0x7fb60130  sq          $s6, 0x130($sp)
    ctx->pc = 0x381490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 22));
    // 0x381494: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x381494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x381498: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x381498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
    // 0x38149c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x38149cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3814a0: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x3814a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
    // 0x3814a4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x3814a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3814a8: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x3814a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
    // 0x3814ac: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x3814acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3814b0: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x3814b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
    // 0x3814b4: 0x7fb70120  sq          $s7, 0x120($sp)
    ctx->pc = 0x3814b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 23));
    // 0x3814b8: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x3814b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x3814bc: 0x92c20005  lbu         $v0, 0x5($s6)
    ctx->pc = 0x3814bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 5)));
    // 0x3814c0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3814c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3814c4: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x3814c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x3814c8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3814C8u;
    SET_GPR_U32(ctx, 31, 0x3814D0u);
    ctx->pc = 0x3814CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3814C8u;
    // 0x3814cc: 0x2c2a821  addu        $s5, $s6, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3814C8u, 0x3814D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3814D0u;
label_3814d0:
    // 0x3814d0: 0x92c80005  lbu         $t0, 0x5($s6)
    ctx->pc = 0x3814d0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 5)));
    // 0x3814d4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3814d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3814d8: 0x2447c510  addiu       $a3, $v0, -0x3AF0
    ctx->pc = 0x3814d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952208));
    // 0x3814dc: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x3814dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3814e0: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x3814e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x3814e4: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x3814e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x3814e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3814e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3814ec: 0x8c82fff0  lw          $v0, -0x10($a0)
    ctx->pc = 0x3814ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x3814f0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3814F0u;
    {
        const bool branch_taken_0x3814f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3814F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3814F0u;
        // 0x3814f4: 0x26b40010  addiu       $s4, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3814f0) {
            ctx->pc = 0x381504u;
            goto label_381504;
        }
    }
    ctx->pc = 0x3814F8u;
    // 0x3814f8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3814f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3814fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3814FCu;
    {
        const bool branch_taken_0x3814fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3814FCu;
        // 0x381500: 0x2449c4d0  addiu       $t1, $v0, -0x3B30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3814fc) {
            ctx->pc = 0x381510u;
            goto label_381510;
        }
    }
    ctx->pc = 0x381504u;
label_381504:
    // 0x381504: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x381504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x381508: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x381508u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x38150c: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x38150cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_381510:
    // 0x381510: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x381510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x381514: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x381514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x381518: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x381518u;
    SET_GPR_U32(ctx, 31, 0x381520u);
    ctx->pc = 0x38151Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381518u;
    // 0x38151c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x381518u, 0x381520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381520u;
label_381520:
    // 0x381520: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x381520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x381524: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x381524u;
    {
        const bool branch_taken_0x381524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x381528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381524u;
        // 0x381528: 0x2411000f  addiu       $s1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381524) {
            ctx->pc = 0x3815E0u;
            goto label_3815e0;
        }
    }
    ctx->pc = 0x38152Cu;
    // 0x38152c: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x38152Cu;
    {
        const bool branch_taken_0x38152c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x381530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38152Cu;
        // 0x381530: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38152c) {
            ctx->pc = 0x381548u;
            goto label_381548;
        }
    }
    ctx->pc = 0x381534u;
    // 0x381534: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x381534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x381538: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x381538u;
    {
        const bool branch_taken_0x381538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381538u;
        // 0x38153c: 0x2411000d  addiu       $s1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381538) {
            ctx->pc = 0x381560u;
            goto label_381560;
        }
    }
    ctx->pc = 0x381540u;
    // 0x381540: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x381540u;
    {
        const bool branch_taken_0x381540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381540u;
        // 0x381544: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381540) {
            ctx->pc = 0x3815E4u;
            goto label_3815e4;
        }
    }
    ctx->pc = 0x381548u;
label_381548:
    // 0x381548: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x381548u;
    {
        const bool branch_taken_0x381548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381548u;
        // 0x38154c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381548) {
            ctx->pc = 0x3815A8u;
            goto label_3815a8;
        }
    }
    ctx->pc = 0x381550u;
    // 0x381550: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x381550u;
    {
        const bool branch_taken_0x381550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x381554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381550u;
        // 0x381554: 0x2411000d  addiu       $s1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381550) {
            ctx->pc = 0x3815B0u;
            goto label_3815b0;
        }
    }
    ctx->pc = 0x381558u;
    // 0x381558: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x381558u;
    {
        const bool branch_taken_0x381558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381558u;
        // 0x38155c: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381558) {
            ctx->pc = 0x3815E4u;
            goto label_3815e4;
        }
    }
    ctx->pc = 0x381560u;
label_381560:
    // 0x381560: 0x92a20001  lbu         $v0, 0x1($s5)
    ctx->pc = 0x381560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x381564: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x381564u;
    {
        const bool branch_taken_0x381564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381564u;
        // 0x381568: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381564) {
            ctx->pc = 0x3815A8u;
            goto label_3815a8;
        }
    }
    ctx->pc = 0x38156Cu;
    // 0x38156c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x38156cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x381570: 0x24632848  addiu       $v1, $v1, 0x2848
    ctx->pc = 0x381570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10312));
    // 0x381574: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x381574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x381578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x381578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38157c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x38157cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x381580: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x381580u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x381584: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x381584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x381588: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x381588u;
    SET_GPR_U32(ctx, 31, 0x381590u);
    ctx->pc = 0x38158Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381588u;
    // 0x38158c: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x381588u, 0x381590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381590u;
label_381590:
    // 0x381590: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x381590u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x381594: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x381594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x381598: 0x24e7c520  addiu       $a3, $a3, -0x3AE0
    ctx->pc = 0x381598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952224));
    // 0x38159c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x38159cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x3815a0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3815A0u;
    SET_GPR_U32(ctx, 31, 0x3815A8u);
    ctx->pc = 0x3815A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3815A0u;
    // 0x3815a4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3815A0u, 0x3815A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3815A8u;
label_3815a8:
    // 0x3815a8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3815A8u;
    {
        const bool branch_taken_0x3815a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3815ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3815A8u;
        // 0x3815ac: 0x2411000f  addiu       $s1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3815a8) {
            ctx->pc = 0x3815E0u;
            goto label_3815e0;
        }
    }
    ctx->pc = 0x3815B0u;
label_3815b0:
    // 0x3815b0: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x3815b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x3815b4: 0xc0cac2c  jal         func_32B0B0
    ctx->pc = 0x3815B4u;
    SET_GPR_U32(ctx, 31, 0x3815BCu);
    ctx->pc = 0x3815B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3815B4u;
    // 0x3815b8: 0x2411000a  addiu       $s1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B0B0u, 0x3815B4u, 0x3815BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3815BCu;
label_3815bc:
    // 0x3815bc: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3815bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3815c0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3815c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3815c4: 0x24e7c538  addiu       $a3, $a3, -0x3AC8
    ctx->pc = 0x3815c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952248));
    // 0x3815c8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x3815c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3815cc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3815ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3815d0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3815D0u;
    SET_GPR_U32(ctx, 31, 0x3815D8u);
    ctx->pc = 0x3815D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3815D0u;
    // 0x3815d4: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3815D0u, 0x3815D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3815D8u;
label_3815d8:
    // 0x3815d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3815D8u;
    {
        const bool branch_taken_0x3815d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3815DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3815D8u;
        // 0x3815dc: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3815d8) {
            ctx->pc = 0x3815E4u;
            goto label_3815e4;
        }
    }
    ctx->pc = 0x3815E0u;
label_3815e0:
    // 0x3815e0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3815e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
label_3815e4:
    // 0x3815e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3815e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3815e8: 0x24e7c548  addiu       $a3, $a3, -0x3AB8
    ctx->pc = 0x3815e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952264));
    // 0x3815ec: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3815ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3815f0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3815F0u;
    SET_GPR_U32(ctx, 31, 0x3815F8u);
    ctx->pc = 0x3815F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3815F0u;
    // 0x3815f4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3815F0u, 0x3815F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3815F8u;
label_3815f8:
    // 0x3815f8: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x3815f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x3815fc: 0x460000d  bltz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3815FCu;
    {
        const bool branch_taken_0x3815fc = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x381600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3815FCu;
        // 0x381600: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3815fc) {
            ctx->pc = 0x381634u;
            goto label_381634;
        }
    }
    ctx->pc = 0x381604u;
    // 0x381604: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x381604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x381608: 0x24422820  addiu       $v0, $v0, 0x2820
    ctx->pc = 0x381608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10272));
    // 0x38160c: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x38160cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x381610: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x381610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x381614: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x381614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381618: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x381618u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38161c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x38161cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x381620: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x381620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x381624: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x381624u;
    SET_GPR_U32(ctx, 31, 0x38162Cu);
    ctx->pc = 0x381628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381624u;
    // 0x381628: 0x2607c558  addiu       $a3, $s0, -0x3AA8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x381624u, 0x38162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38162Cu;
label_38162c:
    // 0x38162c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38162Cu;
    {
        const bool branch_taken_0x38162c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38162Cu;
        // 0x381630: 0x3c170046  lui         $s7, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38162c) {
            ctx->pc = 0x381650u;
            goto label_381650;
        }
    }
    ctx->pc = 0x381634u;
label_381634:
    // 0x381634: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x381634u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x381638: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x381638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38163c: 0x24e7c560  addiu       $a3, $a3, -0x3AA0
    ctx->pc = 0x38163cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952288));
    // 0x381640: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x381640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x381644: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x381644u;
    SET_GPR_U32(ctx, 31, 0x38164Cu);
    ctx->pc = 0x381648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381644u;
    // 0x381648: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x381644u, 0x38164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38164Cu;
label_38164c:
    // 0x38164c: 0x3c170046  lui         $s7, 0x46
    ctx->pc = 0x38164cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)70 << 16));
label_381650:
    // 0x381650: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x381650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x381654: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x381654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x381658: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x381658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
    // 0x38165c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x38165cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x381660: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x381660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x381664: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x381664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x381668: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x381668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38166c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x38166cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x381670: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x381670u;
    SET_GPR_U32(ctx, 31, 0x381678u);
    ctx->pc = 0x381674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381670u;
    // 0x381674: 0x8c670000  lw          $a3, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x381670u, 0x381678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381678u;
label_381678:
    // 0x381678: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x381678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x38167c: 0x27b10104  addiu       $s1, $sp, 0x104
    ctx->pc = 0x38167cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x381680: 0x27b20108  addiu       $s2, $sp, 0x108
    ctx->pc = 0x381680u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x381684: 0x27b3010c  addiu       $s3, $sp, 0x10C
    ctx->pc = 0x381684u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x381688: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x381688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x38168c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x38168cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381690: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x381690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x381694: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x381694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381698: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x381698u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38169c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x38169cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3816a0: 0xc0e01c8  jal         func_380720
    ctx->pc = 0x3816A0u;
    SET_GPR_U32(ctx, 31, 0x3816A8u);
    ctx->pc = 0x3816A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3816A0u;
    // 0x3816a4: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380720u, 0x3816A0u, 0x3816A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3816A8u;
label_3816a8:
    // 0x3816a8: 0x8fa80100  lw          $t0, 0x100($sp)
    ctx->pc = 0x3816a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3816ac: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3816acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3816b0: 0x8fa90104  lw          $t1, 0x104($sp)
    ctx->pc = 0x3816b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x3816b4: 0x24e7c568  addiu       $a3, $a3, -0x3A98
    ctx->pc = 0x3816b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952296));
    // 0x3816b8: 0x8faa0108  lw          $t2, 0x108($sp)
    ctx->pc = 0x3816b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x3816bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3816bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3816c0: 0x8fab010c  lw          $t3, 0x10C($sp)
    ctx->pc = 0x3816c0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x3816c4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3816c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3816c8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3816C8u;
    SET_GPR_U32(ctx, 31, 0x3816D0u);
    ctx->pc = 0x3816CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3816C8u;
    // 0x3816cc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3816C8u, 0x3816D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3816D0u;
label_3816d0:
    // 0x3816d0: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x3816d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3816d4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3816d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3816d8: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x3816d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3816dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3816dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3816e0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3816e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3816e4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3816e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3816e8: 0xc0e01c8  jal         func_380720
    ctx->pc = 0x3816E8u;
    SET_GPR_U32(ctx, 31, 0x3816F0u);
    ctx->pc = 0x3816ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3816E8u;
    // 0x3816ec: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380720u, 0x3816E8u, 0x3816F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3816F0u;
label_3816f0:
    // 0x3816f0: 0x8fa80100  lw          $t0, 0x100($sp)
    ctx->pc = 0x3816f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3816f4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3816f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3816f8: 0x8fa90104  lw          $t1, 0x104($sp)
    ctx->pc = 0x3816f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x3816fc: 0x24e7c588  addiu       $a3, $a3, -0x3A78
    ctx->pc = 0x3816fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952328));
    // 0x381700: 0x8faa0108  lw          $t2, 0x108($sp)
    ctx->pc = 0x381700u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x381704: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x381704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x381708: 0x8fab010c  lw          $t3, 0x10C($sp)
    ctx->pc = 0x381708u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x38170c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x38170cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x381710: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x381710u;
    SET_GPR_U32(ctx, 31, 0x381718u);
    ctx->pc = 0x381714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381710u;
    // 0x381714: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x381710u, 0x381718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381718u;
label_381718:
    // 0x381718: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x381718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x38171c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x38171cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381720: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x381720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x381724: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x381724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381728: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x381728u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38172c: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x38172cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381730: 0xc0e01c8  jal         func_380720
    ctx->pc = 0x381730u;
    SET_GPR_U32(ctx, 31, 0x381738u);
    ctx->pc = 0x381734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381730u;
    // 0x381734: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380720u, 0x381730u, 0x381738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381738u;
label_381738:
    // 0x381738: 0x8fa80100  lw          $t0, 0x100($sp)
    ctx->pc = 0x381738u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x38173c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x38173cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x381740: 0x8fa90104  lw          $t1, 0x104($sp)
    ctx->pc = 0x381740u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x381744: 0x24e7c5a8  addiu       $a3, $a3, -0x3A58
    ctx->pc = 0x381744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952360));
    // 0x381748: 0x8faa0108  lw          $t2, 0x108($sp)
    ctx->pc = 0x381748u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x38174c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x38174cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x381750: 0x8fab010c  lw          $t3, 0x10C($sp)
    ctx->pc = 0x381750u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x381754: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x381754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x381758: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x381758u;
    SET_GPR_U32(ctx, 31, 0x381760u);
    ctx->pc = 0x38175Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381758u;
    // 0x38175c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x381758u, 0x381760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381760u;
label_381760:
    // 0x381760: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x381760u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x381764: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x381764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x381768: 0x24e7c5c8  addiu       $a3, $a3, -0x3A38
    ctx->pc = 0x381768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952392));
    // 0x38176c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x38176cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x381770: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x381770u;
    SET_GPR_U32(ctx, 31, 0x381778u);
    ctx->pc = 0x381774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381770u;
    // 0x381774: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x381770u, 0x381778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381778u;
label_381778:
    // 0x381778: 0x92c80005  lbu         $t0, 0x5($s6)
    ctx->pc = 0x381778u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 5)));
    // 0x38177c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x38177cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x381780: 0x24e7c5e8  addiu       $a3, $a3, -0x3A18
    ctx->pc = 0x381780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952424));
    // 0x381784: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x381784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x381788: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x381788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x38178c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x38178cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x381790: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x381790u;
    SET_GPR_U32(ctx, 31, 0x381798u);
    ctx->pc = 0x381794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381790u;
    // 0x381794: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x381790u, 0x381798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381798u;
label_381798:
    // 0x381798: 0x86a90006  lh          $t1, 0x6($s5)
    ctx->pc = 0x381798u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x38179c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x38179cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3817a0: 0x86a80004  lh          $t0, 0x4($s5)
    ctx->pc = 0x3817a0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3817a4: 0x24e7c600  addiu       $a3, $a3, -0x3A00
    ctx->pc = 0x3817a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952448));
    // 0x3817a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3817a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3817ac: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3817acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3817b0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3817B0u;
    SET_GPR_U32(ctx, 31, 0x3817B8u);
    ctx->pc = 0x3817B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3817B0u;
    // 0x3817b4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3817B0u, 0x3817B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3817B8u;
label_3817b8:
    // 0x3817b8: 0x86a80008  lh          $t0, 0x8($s5)
    ctx->pc = 0x3817b8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3817bc: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3817bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3817c0: 0x24e7c620  addiu       $a3, $a3, -0x39E0
    ctx->pc = 0x3817c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952480));
    // 0x3817c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3817c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3817c8: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3817c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3817cc: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3817CCu;
    SET_GPR_U32(ctx, 31, 0x3817D4u);
    ctx->pc = 0x3817D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3817CCu;
    // 0x3817d0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3817CCu, 0x3817D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3817D4u;
label_3817d4:
    // 0x3817d4: 0x86a8000a  lh          $t0, 0xA($s5)
    ctx->pc = 0x3817d4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x3817d8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3817d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3817dc: 0x24e7c630  addiu       $a3, $a3, -0x39D0
    ctx->pc = 0x3817dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952496));
    // 0x3817e0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3817e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3817e4: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x3817e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3817e8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3817E8u;
    SET_GPR_U32(ctx, 31, 0x3817F0u);
    ctx->pc = 0x3817ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3817E8u;
    // 0x3817ec: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3817E8u, 0x3817F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3817F0u;
label_3817f0:
    // 0x3817f0: 0x8e880020  lw          $t0, 0x20($s4)
    ctx->pc = 0x3817f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x3817f4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3817f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3817f8: 0x24e7c640  addiu       $a3, $a3, -0x39C0
    ctx->pc = 0x3817f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952512));
    // 0x3817fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3817fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x381800: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x381800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x381804: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x381804u;
    SET_GPR_U32(ctx, 31, 0x38180Cu);
    ctx->pc = 0x381808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381804u;
    // 0x381808: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x381804u, 0x38180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38180Cu;
label_38180c:
    // 0x38180c: 0x8e880004  lw          $t0, 0x4($s4)
    ctx->pc = 0x38180cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x381810: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x381810u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x381814: 0x24e7c650  addiu       $a3, $a3, -0x39B0
    ctx->pc = 0x381814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952528));
    // 0x381818: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x381818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x38181c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x38181cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x381820: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x381820u;
    SET_GPR_U32(ctx, 31, 0x381828u);
    ctx->pc = 0x381824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381820u;
    // 0x381824: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x381820u, 0x381828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381828u;
label_381828:
    // 0x381828: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x381828u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x38182c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x38182cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x381830: 0x24e7c660  addiu       $a3, $a3, -0x39A0
    ctx->pc = 0x381830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952544));
    // 0x381834: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x381834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x381838: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x381838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38183c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x38183Cu;
    SET_GPR_U32(ctx, 31, 0x381844u);
    ctx->pc = 0x381840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38183Cu;
    // 0x381840: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x38183Cu, 0x381844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381844u;
label_381844:
    // 0x381844: 0x8e88000c  lw          $t0, 0xC($s4)
    ctx->pc = 0x381844u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x381848: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x381848u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x38184c: 0x24e7c670  addiu       $a3, $a3, -0x3990
    ctx->pc = 0x38184cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952560));
    // 0x381850: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x381850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x381854: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x381854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x381858: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x381858u;
    SET_GPR_U32(ctx, 31, 0x381860u);
    ctx->pc = 0x38185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381858u;
    // 0x38185c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x381858u, 0x381860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381860u;
label_381860:
    // 0x381860: 0xc68c0018  lwc1        $f12, 0x18($s4)
    ctx->pc = 0x381860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x381864: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x381864u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x381868: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x381868u;
    SET_GPR_U32(ctx, 31, 0x381870u);
    ctx->pc = 0x38186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381868u;
    // 0x38186c: 0x2610c680  addiu       $s0, $s0, -0x3980 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x381868u, 0x381870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381870u;
label_381870:
    // 0x381870: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x381870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381874: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x381874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381878: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x381878u;
    SET_GPR_U32(ctx, 31, 0x381880u);
    ctx->pc = 0x38187Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381878u;
    // 0x38187c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x381878u, 0x381880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381880u;
label_381880:
    // 0x381880: 0x26e7c558  addiu       $a3, $s7, -0x3AA8
    ctx->pc = 0x381880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952280));
    // 0x381884: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x381884u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381888: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x381888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x38188c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x38188cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x381890: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x381890u;
    SET_GPR_U32(ctx, 31, 0x381898u);
    ctx->pc = 0x381894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381890u;
    // 0x381894: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x381890u, 0x381898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381898u;
label_381898:
    // 0x381898: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x381898u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x38189c: 0x8e88001c  lw          $t0, 0x1C($s4)
    ctx->pc = 0x38189cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x3818a0: 0x24e7c698  addiu       $a3, $a3, -0x3968
    ctx->pc = 0x3818a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952600));
    // 0x3818a4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3818a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3818a8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x3818a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3818ac: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3818ACu;
    SET_GPR_U32(ctx, 31, 0x3818B4u);
    ctx->pc = 0x3818B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3818ACu;
    // 0x3818b0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3818ACu, 0x3818B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3818B4u;
label_3818b4:
    // 0x3818b4: 0x92c20003  lbu         $v0, 0x3($s6)
    ctx->pc = 0x3818b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 3)));
    // 0x3818b8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3818B8u;
    {
        const bool branch_taken_0x3818b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3818BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3818B8u;
        // 0x3818bc: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3818b8) {
            ctx->pc = 0x381910u;
            goto label_381910;
        }
    }
    ctx->pc = 0x3818C0u;
    // 0x3818c0: 0x8e880024  lw          $t0, 0x24($s4)
    ctx->pc = 0x3818c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x3818c4: 0x24e7c6a8  addiu       $a3, $a3, -0x3958
    ctx->pc = 0x3818c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952616));
    // 0x3818c8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3818c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3818cc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3818ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3818d0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3818D0u;
    SET_GPR_U32(ctx, 31, 0x3818D8u);
    ctx->pc = 0x3818D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3818D0u;
    // 0x3818d4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3818D0u, 0x3818D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3818D8u;
label_3818d8:
    // 0x3818d8: 0x8e880028  lw          $t0, 0x28($s4)
    ctx->pc = 0x3818d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x3818dc: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3818dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3818e0: 0x24e7c6b8  addiu       $a3, $a3, -0x3948
    ctx->pc = 0x3818e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952632));
    // 0x3818e4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3818e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3818e8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x3818e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3818ec: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3818ECu;
    SET_GPR_U32(ctx, 31, 0x3818F4u);
    ctx->pc = 0x3818F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3818ECu;
    // 0x3818f0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3818ECu, 0x3818F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3818F4u;
label_3818f4:
    // 0x3818f4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3818f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3818f8: 0x8e88002c  lw          $t0, 0x2C($s4)
    ctx->pc = 0x3818f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x3818fc: 0x24e7c6c8  addiu       $a3, $a3, -0x3938
    ctx->pc = 0x3818fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952648));
    // 0x381900: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x381900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x381904: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x381904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x381908: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x381908u;
    SET_GPR_U32(ctx, 31, 0x381910u);
    ctx->pc = 0x38190Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381908u;
    // 0x38190c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x381908u, 0x381910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381910u;
label_381910:
    // 0x381910: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x381910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x381914: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x381914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x381918: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x381918u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x38191c: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x38191cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x381920: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x381920u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x381924: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x381924u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x381928: 0x7bb60130  lq          $s6, 0x130($sp)
    ctx->pc = 0x381928u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x38192c: 0x7bb70120  lq          $s7, 0x120($sp)
    ctx->pc = 0x38192cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x381930: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x381930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x381934: 0x3e00008  jr          $ra
    ctx->pc = 0x381934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381934u;
        // 0x381938: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38193Cu;
    // 0x38193c: 0x0  nop
    ctx->pc = 0x38193cu;
    // NOP
    ctx->pc = 0x381940u;
}
