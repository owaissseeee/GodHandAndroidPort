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

// Function: func_001C3540
// Address: 0x1c3540 - 0x1c3778
void func_001C3540_0x1c3540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C3540_0x1c3540");
#endif

    switch (ctx->pc) {
        case 0x1c356cu: goto label_1c356c;
        case 0x1c3580u: goto label_1c3580;
        case 0x1c3590u: goto label_1c3590;
        case 0x1c35a0u: goto label_1c35a0;
        case 0x1c35b0u: goto label_1c35b0;
        case 0x1c35f8u: goto label_1c35f8;
        case 0x1c36b0u: goto label_1c36b0;
        case 0x1c3728u: goto label_1c3728;
        case 0x1c3738u: goto label_1c3738;
        default: break;
    }

    ctx->pc = 0x1c3540u;

    // 0x1c3540: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c3540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c3544: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1c3544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1c3548: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1c3548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1c354c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c354cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3550: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1c3550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1c3554: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c3554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c3558: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1c3558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1c355c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C355Cu;
    {
        const bool branch_taken_0x1c355c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c355c) {
            ctx->pc = 0x1C3560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C355Cu;
            // 0x1c3560: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3570u;
            goto label_1c3570;
        }
    }
    ctx->pc = 0x1C3564u;
    // 0x1c3564: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1C3564u;
    SET_GPR_U32(ctx, 31, 0x1C356Cu);
    ctx->pc = 0x1C3568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3564u;
    // 0x1c3568: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1C3564u, 0x1C356Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C356Cu;
label_1c356c:
    // 0x1c356c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c356cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c3570:
    // 0x1c3570: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3574: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c3574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3578: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1C3578u;
    SET_GPR_U32(ctx, 31, 0x1C3580u);
    ctx->pc = 0x1C357Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3578u;
    // 0x1c357c: 0x263005c0  addiu       $s0, $s1, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1C3578u, 0x1C3580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3580u;
label_1c3580:
    // 0x1c3580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c3580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3584: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1c3584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c3588: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1C3588u;
    SET_GPR_U32(ctx, 31, 0x1C3590u);
    ctx->pc = 0x1C358Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3588u;
    // 0x1c358c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1C3588u, 0x1C3590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3590u;
label_1c3590:
    // 0x1c3590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c3590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3594: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3598: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x1C3598u;
    SET_GPR_U32(ctx, 31, 0x1C35A0u);
    ctx->pc = 0x1C359Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3598u;
    // 0x1c359c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1C3598u, 0x1C35A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C35A0u;
label_1c35a0:
    // 0x1c35a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c35a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c35a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c35a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c35a8: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x1C35A8u;
    SET_GPR_U32(ctx, 31, 0x1C35B0u);
    ctx->pc = 0x1C35ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C35A8u;
    // 0x1c35ac: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1C35A8u, 0x1C35B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C35B0u;
label_1c35b0:
    // 0x1c35b0: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x1c35b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x1c35b4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1c35b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1c35b8: 0x8223060c  lb          $v1, 0x60C($s1)
    ctx->pc = 0x1c35b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1548)));
    // 0x1c35bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c35bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c35c0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c35c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1c35c4: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1c35c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c35c8: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x1c35c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c35cc: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1C35CCu;
    {
        const bool branch_taken_0x1c35cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C35D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35CCu;
        // 0x1c35d0: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35cc) {
            ctx->pc = 0x1C36A8u;
            goto label_1c36a8;
        }
    }
    ctx->pc = 0x1C35D4u;
    // 0x1c35d4: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1c35d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1c35d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c35d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c35dc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1c35dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c35e0: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1C35E0u;
    {
        const bool branch_taken_0x1c35e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C35E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35E0u;
        // 0x1c35e4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35e0) {
            ctx->pc = 0x1C36A8u;
            goto label_1c36a8;
        }
    }
    ctx->pc = 0x1C35E8u;
    // 0x1c35e8: 0x240afff7  addiu       $t2, $zero, -0x9
    ctx->pc = 0x1c35e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1c35ec: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x1c35ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x1c35f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c35f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c35f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1c35f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1c35f8:
    // 0x1c35f8: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1c35f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1c35fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C35FCu;
    {
        const bool branch_taken_0x1c35fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35FCu;
        // 0x1c3600: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35fc) {
            ctx->pc = 0x1C360Cu;
            goto label_1c360c;
        }
    }
    ctx->pc = 0x1C3604u;
    // 0x1c3604: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x1c3604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1c3608: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c3608u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c360c:
    // 0x1c360c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1c360cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c3610: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3610u;
    {
        const bool branch_taken_0x1c3610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3610u;
        // 0x1c3614: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3610) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C3618u;
    // 0x1c3618: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1c3618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1c361c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c361cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c3620: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3620u;
    {
        const bool branch_taken_0x1c3620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3620u;
        // 0x1c3624: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3620) {
            ctx->pc = 0x1C362Cu;
            goto label_1c362c;
        }
    }
    ctx->pc = 0x1C3628u;
label_1c3628:
    // 0x1c3628: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c3628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c362c:
    // 0x1c362c: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1c362cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1c3630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3634: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x1c3634u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1c3638: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x1c3638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x1c363c: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1c363cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1c3640: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1c3640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1c3644: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3644u;
    {
        const bool branch_taken_0x1c3644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3644u;
        // 0x1c3648: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3644) {
            ctx->pc = 0x1C3654u;
            goto label_1c3654;
        }
    }
    ctx->pc = 0x1C364Cu;
    // 0x1c364c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1c364cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c3650: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c3650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c3654:
    // 0x1c3654: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1c3654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1c3658: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3658u;
    {
        const bool branch_taken_0x1c3658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3658u;
        // 0x1c365c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3658) {
            ctx->pc = 0x1C3670u;
            goto label_1c3670;
        }
    }
    ctx->pc = 0x1C3660u;
    // 0x1c3660: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1c3660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1c3664: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c3668: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3668u;
    {
        const bool branch_taken_0x1c3668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3668u;
        // 0x1c366c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3668) {
            ctx->pc = 0x1C3674u;
            goto label_1c3674;
        }
    }
    ctx->pc = 0x1C3670u;
label_1c3670:
    // 0x1c3670: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c3670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3674:
    // 0x1c3674: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x1c3674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x1c3678: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1c3678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1c367c: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x1c367cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x1c3680: 0xac430154  sw          $v1, 0x154($v0)
    ctx->pc = 0x1c3680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 3));
    // 0x1c3684: 0x8222060c  lb          $v0, 0x60C($s1)
    ctx->pc = 0x1c3684u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1548)));
    // 0x1c3688: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1c3688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c368c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C368Cu;
    {
        const bool branch_taken_0x1c368c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C368Cu;
        // 0x1c3690: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c368c) {
            ctx->pc = 0x1C36A8u;
            goto label_1c36a8;
        }
    }
    ctx->pc = 0x1C3694u;
    // 0x1c3694: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1c3694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1c3698: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c3698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c369c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1c369cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c36a0: 0x5440ffd5  bnel        $v0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1C36A0u;
    {
        const bool branch_taken_0x1c36a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c36a0) {
            ctx->pc = 0x1C36A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C36A0u;
            // 0x1c36a4: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C35F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c35f8;
        }
    }
    ctx->pc = 0x1C36A8u;
label_1c36a8:
    // 0x1c36a8: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1C36A8u;
    SET_GPR_U32(ctx, 31, 0x1C36B0u);
    ctx->pc = 0x1C36ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C36A8u;
    // 0x1c36ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1C36A8u, 0x1C36B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36B0u;
label_1c36b0:
    // 0x1c36b0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1c36b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c36b4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c36b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c36b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c36b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c36bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c36bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c36c0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1c36c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1c36c4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1c36c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1c36c8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1c36c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1c36cc: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x1c36ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1c36d0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1c36d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1c36d4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1c36d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1c36d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c36d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c36dc: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c36dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c36e0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1c36e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1c36e4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c36e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1c36e8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c36e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c36ec: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c36ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c36f0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c36f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c36f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c36f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c36f8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c36f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c36fc: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x1c36fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x1c3700: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c3700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3704: 0x8222060c  lb          $v0, 0x60C($s1)
    ctx->pc = 0x1c3704u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1548)));
    // 0x1c3708: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c3708u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c370c: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C370Cu;
    {
        const bool branch_taken_0x1c370c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1C3710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C370Cu;
        // 0x1c3710: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c370c) {
            ctx->pc = 0x1C375Cu;
            goto label_1c375c;
        }
    }
    ctx->pc = 0x1C3714u;
    // 0x1c3714: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1c3714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1c3718: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C3718u;
    {
        const bool branch_taken_0x1c3718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3718) {
            ctx->pc = 0x1C371Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3718u;
            // 0x1c371c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3760u;
            goto label_1c3760;
        }
    }
    ctx->pc = 0x1C3720u;
    // 0x1c3720: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c3720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3724: 0x0  nop
    ctx->pc = 0x1c3724u;
    // NOP
label_1c3728:
    // 0x1c3728: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c3728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c372c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1c372cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c3730: 0xc070c24  jal         func_1C3090
    ctx->pc = 0x1C3730u;
    SET_GPR_U32(ctx, 31, 0x1C3738u);
    ctx->pc = 0x1C3734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3730u;
    // 0x1c3734: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3090u, 0x1C3730u, 0x1C3738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3738u;
label_1c3738:
    // 0x1c3738: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c3738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c373c: 0x8222060c  lb          $v0, 0x60C($s1)
    ctx->pc = 0x1c373cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1548)));
    // 0x1c3740: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1c3740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c3744: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3744u;
    {
        const bool branch_taken_0x1c3744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3744) {
            ctx->pc = 0x1C3748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3744u;
            // 0x1c3748: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3760u;
            goto label_1c3760;
        }
    }
    ctx->pc = 0x1C374Cu;
    // 0x1c374c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1c374cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1c3750: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1c3750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c3754: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1C3754u;
    {
        const bool branch_taken_0x1c3754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3754u;
        // 0x1c3758: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3754) {
            ctx->pc = 0x1C3728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3728;
        }
    }
    ctx->pc = 0x1C375Cu;
label_1c375c:
    // 0x1c375c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1c375cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c3760:
    // 0x1c3760: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1c3760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3764: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1c3764u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3768: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c3768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c376c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C376Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C376Cu;
        // 0x1c3770: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C376Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3774u;
    // 0x1c3774: 0x0  nop
    ctx->pc = 0x1c3774u;
    // NOP
    ctx->pc = 0x1c3778u;
}
